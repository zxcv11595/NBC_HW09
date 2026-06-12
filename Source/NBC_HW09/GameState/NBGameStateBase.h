// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "NBGameStateBase.generated.h"

/**
 * 
 */
UCLASS()
class NBC_HW09_API ANBGameStateBase : public AGameStateBase
{
	GENERATED_BODY()
	
public:
	// 모든 클라이언트에게 입장 메시지 출력
	UFUNCTION(NetMulticast, Reliable)
	void MulticastRPCBroadcastLoginMessage(const FString& InNameString = FString(TEXT("XXXXXXX")));
};
