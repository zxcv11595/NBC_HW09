// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBC_HW09/Player/NBPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNBPawn() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
NBC_HW09_API UClass* Z_Construct_UClass_ANBPawn();
NBC_HW09_API UClass* Z_Construct_UClass_ANBPawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_NBC_HW09();
// End Cross Module References

// Begin Class ANBPawn
void ANBPawn::StaticRegisterNativesANBPawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANBPawn);
UClass* Z_Construct_UClass_ANBPawn_NoRegister()
{
	return ANBPawn::StaticClass();
}
struct Z_Construct_UClass_ANBPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/NBPawn.h" },
		{ "ModuleRelativePath", "Player/NBPawn.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANBPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANBPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_NBC_HW09,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANBPawn_Statics::ClassParams = {
	&ANBPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANBPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ANBPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANBPawn()
{
	if (!Z_Registration_Info_UClass_ANBPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANBPawn.OuterSingleton, Z_Construct_UClass_ANBPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANBPawn.OuterSingleton;
}
template<> NBC_HW09_API UClass* StaticClass<ANBPawn>()
{
	return ANBPawn::StaticClass();
}
ANBPawn::ANBPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANBPawn);
ANBPawn::~ANBPawn() {}
// End Class ANBPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_NBC_HW09_Source_NBC_HW09_Player_NBPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANBPawn, ANBPawn::StaticClass, TEXT("ANBPawn"), &Z_Registration_Info_UClass_ANBPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANBPawn), 394017558U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NBC_HW09_Source_NBC_HW09_Player_NBPawn_h_3145684515(TEXT("/Script/NBC_HW09"),
	Z_CompiledInDeferFile_FID_NBC_HW09_Source_NBC_HW09_Player_NBPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NBC_HW09_Source_NBC_HW09_Player_NBPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
