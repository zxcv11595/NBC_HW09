// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/NBPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NBC_HW09_NBPawn_generated_h
#error "NBPawn.generated.h already included, missing '#pragma once' in NBPawn.h"
#endif
#define NBC_HW09_NBPawn_generated_h

#define FID_NBC_HW09_Source_NBC_HW09_Player_NBPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANBPawn(); \
	friend struct Z_Construct_UClass_ANBPawn_Statics; \
public: \
	DECLARE_CLASS(ANBPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NBC_HW09"), NO_API) \
	DECLARE_SERIALIZER(ANBPawn)


#define FID_NBC_HW09_Source_NBC_HW09_Player_NBPawn_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANBPawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANBPawn(ANBPawn&&); \
	ANBPawn(const ANBPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANBPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANBPawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANBPawn) \
	NO_API virtual ~ANBPawn();


#define FID_NBC_HW09_Source_NBC_HW09_Player_NBPawn_h_9_PROLOG
#define FID_NBC_HW09_Source_NBC_HW09_Player_NBPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NBC_HW09_Source_NBC_HW09_Player_NBPawn_h_12_INCLASS_NO_PURE_DECLS \
	FID_NBC_HW09_Source_NBC_HW09_Player_NBPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NBC_HW09_API UClass* StaticClass<class ANBPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NBC_HW09_Source_NBC_HW09_Player_NBPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
