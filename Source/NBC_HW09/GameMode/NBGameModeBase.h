// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "NBGameModeBase.generated.h"

class ANBPlayerController;

/**
 * 
 */
UCLASS()
class NBC_HW09_API ANBGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	virtual void BeginPlay() override;

	// 로그인 이후 로직
	virtual void OnPostLogin(AController* NewPlayer) override;

	// 채팅 메시지 판정 및 메시지 출력
	void PrintChatMessageString(ANBPlayerController* InChattingPlayerController, const FString& InChatMessageString);

public:
	// 난수 생성
	FString GenerateSecretNumber();

	// 플레이어가 입력한 값이 유효한지
	bool IsGuessNumberString(const FString& InNumberString, FString& FailureReasonString);

	// 플레이어 입력 값과 비교하여 결과 리턴
	FString JudgeResult(const FString& InSecretNumberString, const FString& InGuessNumberString);

	// 플레이어 GuessCount 1 증가
	void IncreaseGuessCount(ANBPlayerController* InChattingPlayerController);

	// 게임 초기화
	void ResetGame();

	// 승부 판단
	void JudgeGame(ANBPlayerController* InChattingPlayerController, int InStrikeCount);

protected:
	FString SecretNumberString;

	TArray<TObjectPtr<ANBPlayerController>> AllPlayerControllers;
};
