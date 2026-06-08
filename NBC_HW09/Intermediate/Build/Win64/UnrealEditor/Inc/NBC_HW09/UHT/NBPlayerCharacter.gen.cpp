// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBC_HW09/Player/NBPlayerCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNBPlayerCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
NBC_HW09_API UClass* Z_Construct_UClass_ANBPlayerCharacter();
NBC_HW09_API UClass* Z_Construct_UClass_ANBPlayerCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_NBC_HW09();
// End Cross Module References

// Begin Class ANBPlayerCharacter
void ANBPlayerCharacter::StaticRegisterNativesANBPlayerCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANBPlayerCharacter);
UClass* Z_Construct_UClass_ANBPlayerCharacter_NoRegister()
{
	return ANBPlayerCharacter::StaticClass();
}
struct Z_Construct_UClass_ANBPlayerCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/NBPlayerCharacter.h" },
		{ "ModuleRelativePath", "Player/NBPlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANBPlayerCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANBPlayerCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_NBC_HW09,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBPlayerCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANBPlayerCharacter_Statics::ClassParams = {
	&ANBPlayerCharacter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANBPlayerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ANBPlayerCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANBPlayerCharacter()
{
	if (!Z_Registration_Info_UClass_ANBPlayerCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANBPlayerCharacter.OuterSingleton, Z_Construct_UClass_ANBPlayerCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANBPlayerCharacter.OuterSingleton;
}
template<> NBC_HW09_API UClass* StaticClass<ANBPlayerCharacter>()
{
	return ANBPlayerCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANBPlayerCharacter);
ANBPlayerCharacter::~ANBPlayerCharacter() {}
// End Class ANBPlayerCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_NBC_HW09_Source_NBC_HW09_Player_NBPlayerCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANBPlayerCharacter, ANBPlayerCharacter::StaticClass, TEXT("ANBPlayerCharacter"), &Z_Registration_Info_UClass_ANBPlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANBPlayerCharacter), 1243862357U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NBC_HW09_Source_NBC_HW09_Player_NBPlayerCharacter_h_621444231(TEXT("/Script/NBC_HW09"),
	Z_CompiledInDeferFile_FID_NBC_HW09_Source_NBC_HW09_Player_NBPlayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NBC_HW09_Source_NBC_HW09_Player_NBPlayerCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
