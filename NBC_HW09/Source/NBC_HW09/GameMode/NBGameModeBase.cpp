// Fill out your copyright notice in the Description page of Project Settings.


#include "GameMode/NBGameModeBase.h"

#include "GameState/NBGameStateBase.h"
#include "Controller/NBPlayerController.h"
#include "PlayerState/NBPlayerState.h"
#include "EngineUtils.h"

void ANBGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	// 게임 시작시 3자리 랜덤 난수 생성
	SecretNumberString = GenerateSecretNumber();
	UE_LOG(LogTemp, Warning, TEXT("SecretNumberString: %s"), *SecretNumberString);
}

void ANBGameModeBase::OnPostLogin(AController* NewPlayer)
{
	Super::OnPostLogin(NewPlayer);

	ANBPlayerController* NBPlayerController = Cast<ANBPlayerController>(NewPlayer);
	if (IsValid(NBPlayerController) == true)
	{
		NBPlayerController->NotificationText = FText::FromString(TEXT("Connected to the game server."));

		// 플레이어 컨트롤러 추가
		AllPlayerControllers.Add(NBPlayerController);
		
		// 플레이어 번호 지정
		ANBPlayerState* NBPlayerState = NBPlayerController->GetPlayerState<ANBPlayerState>();
		if (IsValid(NBPlayerState) == true)
		{
			// 플레이어 + 플레이어 수
			NBPlayerState->PlayerNameString = TEXT("Player") + FString::FromInt(AllPlayerControllers.Num());
		}

		// 입장 메시지 브로드캐스트
		ANBGameStateBase* NBGameStateBase = GetGameState<ANBGameStateBase>();
		if (IsValid(NBGameStateBase) == true)
		{
			NBGameStateBase->MulticastRPCBroadcastLoginMessage(TEXT("XXXXXXX"));
		}
	}
}

void ANBGameModeBase::PrintChatMessageString(ANBPlayerController* InChattingPlayerController, const FString& InChatMessageString)
{
	// 입력 받은 문자열
	const FString GuessNumberString = InChatMessageString;;
	FString FailureReasonString = "";
	
	// 유효한 값인지 검사
	if (IsGuessNumberString(GuessNumberString, FailureReasonString) == true)
	{
		// 결과 판정
		FString JudgeResultString = JudgeResult(SecretNumberString, GuessNumberString);
		
		ANBPlayerState* NBPlayerState = InChattingPlayerController->GetPlayerState<ANBPlayerState>();
		if (IsValid(NBPlayerState) == true)
		{
			if (NBPlayerState->CurrentGuessCount >= NBPlayerState->MaxGuessCount)
			{
				InChattingPlayerController->ClientRPCPrintChatMessageString(TEXT("You have used all your chances."));
				return;
			}

			IncreaseGuessCount(InChattingPlayerController);

			// 각 플레이어 컨트롤러에게 ClientRPC 호출
			for (TActorIterator<ANBPlayerController> It(GetWorld()); It; ++It)
			{
				ANBPlayerController* NBPlayerController = *It;
				if (IsValid(NBPlayerController) == true)
				{
					FString CombinedMessageString = NBPlayerState->GetPlayerInfoString() + TEXT(": ") + InChatMessageString + TEXT(" -> ") + JudgeResultString;
					NBPlayerController->ClientRPCPrintChatMessageString(CombinedMessageString);

					// 스트라이크일 경우 
					int32 StrikeCount = FCString::Atoi(*JudgeResultString.Left(1));
					JudgeGame(InChattingPlayerController, StrikeCount);
				}
			}
		}
	}
	else
	{
		//// 유효하지 않은 입력이면 일반 채팅 문자열을 모든 클라이언트에게 전송
		//for (TActorIterator<ANBPlayerController> It(GetWorld()); It; ++It)
		//{
		//	ANBPlayerController* NBPlayerController = *It;
		//	if (IsValid(NBPlayerController) == true)
		//	{
		//		NBPlayerController->ClientRPCPrintChatMessageString(InChatMessageString);
		//	}
		//}
		
		// 잘못된 입력 시 로컬 클라이언트에게만 실패 원인 출력
		UE_LOG(LogTemp, Warning, TEXT("FailureReasonString: %s"), *FailureReasonString);
		InChattingPlayerController->ClientRPCPrintChatMessageString(FailureReasonString);
	}
}

FString ANBGameModeBase::GenerateSecretNumber()
{
	// 숫자 배열 생성
	TArray<int32> Numbers;
	for (int32 i = 1; i <= 9; ++i)
	{
		Numbers.Add(i);
	}

	// 랜덤 값을 현재 시간 기준으로 초기화
	FMath::RandInit(FDateTime::Now().GetTicks());
	// 양수가 아닌 값은 제거
	Numbers = Numbers.FilterByPredicate([](int32 Num) { return Num > 0; });
	
	// 숫자 3개 랜덤 선택
	FString Result;
	for (int32 i = 0; i < 3; ++i)
	{
		int32 Index = FMath::RandRange(0, Numbers.Num() - 1);
		Result.Append(FString::FromInt(Numbers[Index]));
		
		// 뽑은 숫자는 배열에서 제거하여 중복 방지 
		Numbers.RemoveAt(Index);
	}

	return Result;
}

bool ANBGameModeBase::IsGuessNumberString(const FString& InNumberString, FString& FailureReasonString)
{
	// 실패 이유 비우기
	FailureReasonString.Empty();

	bool bCanPlay = false;

	do 
	{
		// 길이가 3인지 확인
		if (InNumberString.Len() != 3)
		{
			FailureReasonString = TEXT("Please enter exactly 3 digits.");
			break;
		}

		bool bIsUnique = true;
		TSet<TCHAR> UniqueDigits;
		for (TCHAR C : InNumberString)
		{
			// 정수가 아닌 경우
			if (FChar::IsDigit(C) == false)
			{
				FailureReasonString = TEXT("Please enter exactly 3 digits.");
				bIsUnique = false;
				break;
			}

			// 0이 아닌 경우
			if (C == '0')
			{
				FailureReasonString = TEXT("Please enter digits from 1 to 9.");
				bIsUnique = false;
				break;
			}

			// UniqueDigits에 중복된 숫자가 있는 지 확인
			if (UniqueDigits.Contains(C) == true)
			{
				FailureReasonString = TEXT("Please enter non-duplicate digits.");
				return false;
			}

			// 중복되지 않은 값은 UniqueDigits 변수에 추가
			UniqueDigits.Add(C);
		}

		if (bIsUnique == false)
		{
			break;
		}

		bCanPlay = true;
	} while (false);

	return bCanPlay;
}

FString ANBGameModeBase::JudgeResult(const FString& InSecretNumberString, const FString& InGuessNumberString)
{
	int32 StrikeCount = 0;
	int32 BallCount = 0;

	for (int32 i = 0; i < 3; ++i)
	{
		// 숫자와 자리 모두 일치
		if (InSecretNumberString[i] == InGuessNumberString[i])
		{
			++StrikeCount;
		}
		// 숫자는 존재하지만 자리가 불일치
		else
		{
			FString PlayerGuessChar = FString::Printf(TEXT("%c"), InGuessNumberString[i]);
			if (InSecretNumberString.Contains(PlayerGuessChar))
			{
				++BallCount;
			}
		}
	}

	if (StrikeCount == 0 && BallCount == 0)
	{
		return TEXT("OUT");
	}

	return FString::Printf(TEXT("%dS %dB"), StrikeCount, BallCount);
}

void ANBGameModeBase::IncreaseGuessCount(ANBPlayerController* InChattingPlayerController)
{
	ANBPlayerState* NBPlayerState = InChattingPlayerController->GetPlayerState<ANBPlayerState>();
	if (IsValid(NBPlayerState) == true)
	{
		++NBPlayerState->CurrentGuessCount;
	}
}

void ANBGameModeBase::ResetGame()
{
	// SecretNumber 초기화 및 재생성
	SecretNumberString = GenerateSecretNumber();

	// 모든 클라이언트 CurrentGuessCount 초기화
	for (const auto& CXPlayerController : AllPlayerControllers)
	{
		ANBPlayerState* NBPlayerState = CXPlayerController->GetPlayerState<ANBPlayerState>();
		if (IsValid(NBPlayerState) == true)
		{
			NBPlayerState->CurrentGuessCount = 0;
		}
	}
}

void ANBGameModeBase::JudgeGame(ANBPlayerController* InChattingPlayerController, int InStrikeCount)
{
	if (3 == InStrikeCount)
	{
		ANBPlayerState* NBPlayerState = InChattingPlayerController->GetPlayerState<ANBPlayerState>();
		for (const auto& CXPlayerController : AllPlayerControllers)
		{
			// 모든 클라이언트에 승부 결과 공지
			if (IsValid(NBPlayerState) == true)
			{
				FString CombinedMessageString = NBPlayerState->PlayerNameString + TEXT(" has won the game.");
				CXPlayerController->NotificationText = FText::FromString(CombinedMessageString);

				// 게임 초기화
				ResetGame();
			}
		}
	}
	else
	{
		bool bIsDraw = true;
		for (const auto& CXPlayerController : AllPlayerControllers)
		{
			ANBPlayerState* NBPlayerState = CXPlayerController->GetPlayerState<ANBPlayerState>();
			if (IsValid(NBPlayerState) == true)
			{
				// 게임 진행 중
				if (NBPlayerState->CurrentGuessCount < NBPlayerState->MaxGuessCount)
				{
					bIsDraw = false;
					break;
				}
			}
		}

		// 무승부일 경우도 결과 공지 및 게임 리셋
		if (true == bIsDraw)
		{
			for (const auto& CXPlayerController : AllPlayerControllers)
			{
				CXPlayerController->NotificationText = FText::FromString(TEXT("Draw..."));

				ResetGame();
			}
		}
	}
}
