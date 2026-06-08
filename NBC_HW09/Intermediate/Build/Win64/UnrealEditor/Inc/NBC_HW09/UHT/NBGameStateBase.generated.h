// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameState/NBGameStateBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NBC_HW09_NBGameStateBase_generated_h
#error "NBGameStateBase.generated.h already included, missing '#pragma once' in NBGameStateBase.h"
#endif
#define NBC_HW09_NBGameStateBase_generated_h

#define FID_NBC_HW09_Source_NBC_HW09_GameState_NBGameStateBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastRPCBroadcastLoginMessage_Implementation(const FString& InNameString); \
	DECLARE_FUNCTION(execMulticastRPCBroadcastLoginMessage);


#define FID_NBC_HW09_Source_NBC_HW09_GameState_NBGameStateBase_h_15_CALLBACK_WRAPPERS
#define FID_NBC_HW09_Source_NBC_HW09_GameState_NBGameStateBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANBGameStateBase(); \
	friend struct Z_Construct_UClass_ANBGameStateBase_Statics; \
public: \
	DECLARE_CLASS(ANBGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NBC_HW09"), NO_API) \
	DECLARE_SERIALIZER(ANBGameStateBase)


#define FID_NBC_HW09_Source_NBC_HW09_GameState_NBGameStateBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANBGameStateBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANBGameStateBase(ANBGameStateBase&&); \
	ANBGameStateBase(const ANBGameStateBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANBGameStateBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANBGameStateBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANBGameStateBase) \
	NO_API virtual ~ANBGameStateBase();


#define FID_NBC_HW09_Source_NBC_HW09_GameState_NBGameStateBase_h_12_PROLOG
#define FID_NBC_HW09_Source_NBC_HW09_GameState_NBGameStateBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NBC_HW09_Source_NBC_HW09_GameState_NBGameStateBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NBC_HW09_Source_NBC_HW09_GameState_NBGameStateBase_h_15_CALLBACK_WRAPPERS \
	FID_NBC_HW09_Source_NBC_HW09_GameState_NBGameStateBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_NBC_HW09_Source_NBC_HW09_GameState_NBGameStateBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NBC_HW09_API UClass* StaticClass<class ANBGameStateBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NBC_HW09_Source_NBC_HW09_GameState_NBGameStateBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
