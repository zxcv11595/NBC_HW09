// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerState/NBPlayerState.h"

#include "Net/UnrealNetwork.h"

ANBPlayerState::ANBPlayerState()
	: 
	PlayerNameString(TEXT("None")),
	CurrentGuessCount(0),
	MaxGuessCount(3)
{
	// 네트워크 복제 대상
	bReplicates = true;
}

// 복제할 변수를 등록
void ANBPlayerState::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// 서버의 PlayerNameString이 변경되면 클라이언트의 PlayerNAmeString에 복제
	DOREPLIFETIME(ThisClass, PlayerNameString);
	DOREPLIFETIME(ThisClass, CurrentGuessCount);
	DOREPLIFETIME(ThisClass, MaxGuessCount);
}

FString ANBPlayerState::GetPlayerInfoString()
{
	FString PlayerInfoString = PlayerNameString + TEXT("(시도 횟수: ") + FString::FromInt(CurrentGuessCount) + TEXT("/") + FString::FromInt(MaxGuessCount) + TEXT(")");
	return PlayerInfoString;
}
