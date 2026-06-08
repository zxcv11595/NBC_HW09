// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "NBPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class NBC_HW09_API ANBPlayerState : public APlayerState
{
	GENERATED_BODY()


public:
	ANBPlayerState();

	// 복제할 변수 등록
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;

public:
	// 시도 횟수 출력
	FString GetPlayerInfoString();

public:
	// 플레이어 이름 저장
	UPROPERTY(Replicated)		// 플레이어 복제 대상
	FString PlayerNameString;

	UPROPERTY(Replicated)
	int32 CurrentGuessCount;

	UPROPERTY(Replicated)
	int32 MaxGuessCount;

};
