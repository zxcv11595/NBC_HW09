// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerState/NBPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NBC_HW09_NBPlayerState_generated_h
#error "NBPlayerState.generated.h already included, missing '#pragma once' in NBPlayerState.h"
#endif
#define NBC_HW09_NBPlayerState_generated_h

#define FID_NBC_HW09_Source_NBC_HW09_PlayerState_NBPlayerState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANBPlayerState(); \
	friend struct Z_Construct_UClass_ANBPlayerState_Statics; \
public: \
	DECLARE_CLASS(ANBPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NBC_HW09"), NO_API) \
	DECLARE_SERIALIZER(ANBPlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PlayerNameString=NETFIELD_REP_START, \
		CurrentGuessCount, \
		MaxGuessCount, \
		NETFIELD_REP_END=MaxGuessCount	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_NBC_HW09_Source_NBC_HW09_PlayerState_NBPlayerState_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANBPlayerState(ANBPlayerState&&); \
	ANBPlayerState(const ANBPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANBPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANBPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANBPlayerState) \
	NO_API virtual ~ANBPlayerState();


#define FID_NBC_HW09_Source_NBC_HW09_PlayerState_NBPlayerState_h_12_PROLOG
#define FID_NBC_HW09_Source_NBC_HW09_PlayerState_NBPlayerState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NBC_HW09_Source_NBC_HW09_PlayerState_NBPlayerState_h_15_INCLASS_NO_PURE_DECLS \
	FID_NBC_HW09_Source_NBC_HW09_PlayerState_NBPlayerState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NBC_HW09_API UClass* StaticClass<class ANBPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NBC_HW09_Source_NBC_HW09_PlayerState_NBPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
