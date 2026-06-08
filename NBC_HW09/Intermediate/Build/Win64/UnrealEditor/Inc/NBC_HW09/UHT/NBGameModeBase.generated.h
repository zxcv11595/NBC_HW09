// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameMode/NBGameModeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NBC_HW09_NBGameModeBase_generated_h
#error "NBGameModeBase.generated.h already included, missing '#pragma once' in NBGameModeBase.h"
#endif
#define NBC_HW09_NBGameModeBase_generated_h

#define FID_NBC_HW09_Source_NBC_HW09_GameMode_NBGameModeBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANBGameModeBase(); \
	friend struct Z_Construct_UClass_ANBGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ANBGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/NBC_HW09"), NO_API) \
	DECLARE_SERIALIZER(ANBGameModeBase)


#define FID_NBC_HW09_Source_NBC_HW09_GameMode_NBGameModeBase_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANBGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANBGameModeBase(ANBGameModeBase&&); \
	ANBGameModeBase(const ANBGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANBGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANBGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANBGameModeBase) \
	NO_API virtual ~ANBGameModeBase();


#define FID_NBC_HW09_Source_NBC_HW09_GameMode_NBGameModeBase_h_14_PROLOG
#define FID_NBC_HW09_Source_NBC_HW09_GameMode_NBGameModeBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NBC_HW09_Source_NBC_HW09_GameMode_NBGameModeBase_h_17_INCLASS_NO_PURE_DECLS \
	FID_NBC_HW09_Source_NBC_HW09_GameMode_NBGameModeBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NBC_HW09_API UClass* StaticClass<class ANBGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NBC_HW09_Source_NBC_HW09_GameMode_NBGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
