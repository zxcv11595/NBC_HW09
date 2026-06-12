// Fill out your copyright notice in the Description page of Project Settings.


#include "Controller/NBPlayerController.h"

#include "NBC_HW09.h"
#include "UI/NBChatInput.h"
#include "Kismet/GameplayStatics.h"
#include "GameMode/NBGameModeBase.h"
#include "PlayerState/NBPlayerState.h"

#include "Kismet/KismetSystemLibrary.h"
#include "EngineUtils.h"
#include "Net/UnrealNetwork.h"

void ANBPlayerController::BeginPlay()
{
	Super::BeginPlay();


	if (IsLocalController() == false)
	{
		return;
	}

	// UI 전용 입력 모드
	FInputModeUIOnly InputModeUIOnly;
	SetInputMode(InputModeUIOnly);

	// 채팅 위젯 생성 및 화면에 추가
	if (IsValid(ChatInputWidgetClass) == true)
	{
		ChatInputWidgetInstance = CreateWidget<UNBChatInput>(this, ChatInputWidgetClass);

		if (IsValid(ChatInputWidgetInstance) == true)
		{
			ChatInputWidgetInstance->AddToViewport();
		}
	}

	// 결과 위젯
	if (IsValid(NotificationTextWidgetClass) == true)
	{
		NotificationTextWidgetInstance = CreateWidget<UUserWidget>(this, NotificationTextWidgetClass);
		
		if (IsValid(NotificationTextWidgetInstance) == true)
		{
			NotificationTextWidgetInstance->AddToViewport();
		}
	}
}

void ANBPlayerController::SetChatMessageString(const FString& InChatMessageString)
{
	ChatMessageString = InChatMessageString;

	// 로컬 PlayerController 호출
	if (IsLocalController() == true)
	{
		ANBPlayerState* NBPlayerState = GetPlayerState<ANBPlayerState>();
		if (IsValid(NBPlayerState) == true)
		{
			FString CombinedMessageString = /*NBPlayerState->GetPlayerInfoString() + TEXT(": ") +*/ InChatMessageString;
			ServerRPCPrintChatMessageString(InChatMessageString);
		}
	}
}

void ANBPlayerController::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, NotificationText);
}

// ChatMessageString을 화면에 출력
void ANBPlayerController::PrintChatMessageString(const FString& InChatMessageString)
{
	ChatXFunctionLibrary::MyPrintString(this, InChatMessageString, 10.f);
}

// 서버로부터 전달 받은 문자열을 클라이언트에서 메시지 출력
void ANBPlayerController::ClientRPCPrintChatMessageString_Implementation(const FString& InChatMessageString)
{
	PrintChatMessageString(InChatMessageString);
}


void ANBPlayerController::ServerRPCPrintChatMessageString_Implementation(const FString& InChatMessageString)
{
	AGameModeBase* GameModeBase = UGameplayStatics::GetGameMode(this);
	if (IsValid(GameModeBase) == true)
	{
		ANBGameModeBase* NBGameModeBase = Cast<ANBGameModeBase>(GameModeBase);
		if (IsValid(NBGameModeBase) == true)
		{
			NBGameModeBase->PrintChatMessageString(this, InChatMessageString);
		}
	}
}
