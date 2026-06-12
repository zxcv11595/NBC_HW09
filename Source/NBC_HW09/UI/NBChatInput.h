// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "NBChatInput.generated.h"


class UEditableTextBox;

/**
 * 
 */
UCLASS()
class NBC_HW09_API UNBChatInput : public UUserWidget
{
	GENERATED_BODY()
	
public:
	// 위젯 생성 후 이벤트 연결
	virtual void NativeConstruct() override;
	
	// 위젯 제거 후 이벤트 해제 
	virtual void NativeDestruct() override;

protected:
	// Enter 입력 시 호출
	UFUNCTION()
	void OnChatInputTextCommitted(const FText& Text, ETextCommit::Type CommitMethod);

public:
	// c++와 WBP 연결 
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UEditableTextBox> EditableTextBox_ChatInput;
};
