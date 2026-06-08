// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/NBChatInput.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NBC_HW09_NBChatInput_generated_h
#error "NBChatInput.generated.h already included, missing '#pragma once' in NBChatInput.h"
#endif
#define NBC_HW09_NBChatInput_generated_h

#define FID_NBC_HW09_Source_NBC_HW09_UI_NBChatInput_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnChatInputTextCommitted);


#define FID_NBC_HW09_Source_NBC_HW09_UI_NBChatInput_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNBChatInput(); \
	friend struct Z_Construct_UClass_UNBChatInput_Statics; \
public: \
	DECLARE_CLASS(UNBChatInput, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NBC_HW09"), NO_API) \
	DECLARE_SERIALIZER(UNBChatInput)


#define FID_NBC_HW09_Source_NBC_HW09_UI_NBChatInput_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNBChatInput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNBChatInput(UNBChatInput&&); \
	UNBChatInput(const UNBChatInput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNBChatInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNBChatInput); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNBChatInput) \
	NO_API virtual ~UNBChatInput();


#define FID_NBC_HW09_Source_NBC_HW09_UI_NBChatInput_h_15_PROLOG
#define FID_NBC_HW09_Source_NBC_HW09_UI_NBChatInput_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NBC_HW09_Source_NBC_HW09_UI_NBChatInput_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NBC_HW09_Source_NBC_HW09_UI_NBChatInput_h_18_INCLASS_NO_PURE_DECLS \
	FID_NBC_HW09_Source_NBC_HW09_UI_NBChatInput_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NBC_HW09_API UClass* StaticClass<class UNBChatInput>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NBC_HW09_Source_NBC_HW09_UI_NBChatInput_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
