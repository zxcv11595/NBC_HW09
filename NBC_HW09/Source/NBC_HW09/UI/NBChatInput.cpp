// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/NBChatInput.h"

#include "Components/EditableTextBox.h"
#include "Controller/NBPlayerController.h"

void UNBChatInput::NativeConstruct()
{
	Super::NativeConstruct();

	// OnChatInputTextCommitted 바인딩 되어있는지 확인
	// false 일 경우 호출
	// 중복 바인딩 방지
	if (EditableTextBox_ChatInput->OnTextCommitted.IsAlreadyBound(this, &ThisClass::OnChatInputTextCommitted) == false)
	{
		EditableTextBox_ChatInput->OnTextCommitted.AddDynamic(this, &ThisClass::OnChatInputTextCommitted);
	}
}

void UNBChatInput::NativeDestruct()
{
	Super::NativeDestruct();

	// 이벤트 제거
	if (EditableTextBox_ChatInput->OnTextCommitted.IsAlreadyBound(this, &ThisClass::OnChatInputTextCommitted) == true)
	{
		EditableTextBox_ChatInput->OnTextCommitted.RemoveDynamic(this, &ThisClass::OnChatInputTextCommitted);
	}
}

// 엔터 키 입력 시 호출되는 함수
// 입력된 텍스트를 문자열로 바꿔줌
void UNBChatInput::OnChatInputTextCommitted(const FText& Text, ETextCommit::Type CommitMethod)
{
	if (CommitMethod == ETextCommit::OnEnter)
	{
		// 위젯을 소유하는 PlayerController를 가져옴
		APlayerController* OwningPlayerController = GetOwningPlayer();
		if (IsValid(OwningPlayerController) == true)
		{
			ANBPlayerController* OwningNBPlayerController = Cast<ANBPlayerController>(OwningPlayerController);
			if (IsValid(OwningNBPlayerController) == true)
			{
				OwningNBPlayerController->SetChatMessageString(Text.ToString());

				// 입력창 비우기
				EditableTextBox_ChatInput->SetText(FText());
			}
		}
	}
}
