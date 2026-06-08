// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/NBPlayerCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NBC_HW09_NBPlayerCharacter_generated_h
#error "NBPlayerCharacter.generated.h already included, missing '#pragma once' in NBPlayerCharacter.h"
#endif
#define NBC_HW09_NBPlayerCharacter_generated_h

#define FID_NBC_HW09_Source_NBC_HW09_Player_NBPlayerCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANBPlayerCharacter(); \
	friend struct Z_Construct_UClass_ANBPlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(ANBPlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NBC_HW09"), NO_API) \
	DECLARE_SERIALIZER(ANBPlayerCharacter)


#define FID_NBC_HW09_Source_NBC_HW09_Player_NBPlayerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANBPlayerCharacter(ANBPlayerCharacter&&); \
	ANBPlayerCharacter(const ANBPlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANBPlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANBPlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANBPlayerCharacter) \
	NO_API virtual ~ANBPlayerCharacter();


#define FID_NBC_HW09_Source_NBC_HW09_Player_NBPlayerCharacter_h_9_PROLOG
#define FID_NBC_HW09_Source_NBC_HW09_Player_NBPlayerCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NBC_HW09_Source_NBC_HW09_Player_NBPlayerCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_NBC_HW09_Source_NBC_HW09_Player_NBPlayerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NBC_HW09_API UClass* StaticClass<class ANBPlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NBC_HW09_Source_NBC_HW09_Player_NBPlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
