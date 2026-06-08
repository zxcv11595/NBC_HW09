// Fill out your copyright notice in the Description page of Project Settings.


#include "GameState/NBGameStateBase.h"

#include "Kismet/GameplayStatics.h"
#include "Controller/NBPlayerController.h"


void ANBGameStateBase::MulticastRPCBroadcastLoginMessage_Implementation(const FString& InNameString)
{
	// 클라이언트에서만 메시지 출력
	if (HasAuthority() == false)
	{
		APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
		if (IsValid(PlayerController) == true)
		{
			ANBPlayerController* NBPlayerController = Cast<ANBPlayerController>(PlayerController);
			if (IsValid(NBPlayerController) == true)
			{
				FString NotificationString = InNameString + TEXT(" has joined the game.");
				NBPlayerController->PrintChatMessageString(NotificationString);
			}
		}
	}
}
