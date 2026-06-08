// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBC_HW09/GameMode/NBGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNBGameModeBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
NBC_HW09_API UClass* Z_Construct_UClass_ANBGameModeBase();
NBC_HW09_API UClass* Z_Construct_UClass_ANBGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_NBC_HW09();
// End Cross Module References

// Begin Class ANBGameModeBase
void ANBGameModeBase::StaticRegisterNativesANBGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANBGameModeBase);
UClass* Z_Construct_UClass_ANBGameModeBase_NoRegister()
{
	return ANBGameModeBase::StaticClass();
}
struct Z_Construct_UClass_ANBGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameMode/NBGameModeBase.h" },
		{ "ModuleRelativePath", "GameMode/NBGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANBGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANBGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NBC_HW09,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANBGameModeBase_Statics::ClassParams = {
	&ANBGameModeBase::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANBGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ANBGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANBGameModeBase()
{
	if (!Z_Registration_Info_UClass_ANBGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANBGameModeBase.OuterSingleton, Z_Construct_UClass_ANBGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANBGameModeBase.OuterSingleton;
}
template<> NBC_HW09_API UClass* StaticClass<ANBGameModeBase>()
{
	return ANBGameModeBase::StaticClass();
}
ANBGameModeBase::ANBGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANBGameModeBase);
ANBGameModeBase::~ANBGameModeBase() {}
// End Class ANBGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_NBC_HW09_Source_NBC_HW09_GameMode_NBGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANBGameModeBase, ANBGameModeBase::StaticClass, TEXT("ANBGameModeBase"), &Z_Registration_Info_UClass_ANBGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANBGameModeBase), 3980013606U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NBC_HW09_Source_NBC_HW09_GameMode_NBGameModeBase_h_2529814084(TEXT("/Script/NBC_HW09"),
	Z_CompiledInDeferFile_FID_NBC_HW09_Source_NBC_HW09_GameMode_NBGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NBC_HW09_Source_NBC_HW09_GameMode_NBGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
