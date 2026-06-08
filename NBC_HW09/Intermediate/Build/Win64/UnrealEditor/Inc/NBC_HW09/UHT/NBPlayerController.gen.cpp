// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBC_HW09/Controller/NBPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNBPlayerController() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
NBC_HW09_API UClass* Z_Construct_UClass_ANBPlayerController();
NBC_HW09_API UClass* Z_Construct_UClass_ANBPlayerController_NoRegister();
NBC_HW09_API UClass* Z_Construct_UClass_UNBChatInput_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_NBC_HW09();
// End Cross Module References

// Begin Class ANBPlayerController Function ClientRPCPrintChatMessageString
struct NBPlayerController_eventClientRPCPrintChatMessageString_Parms
{
	FString InChatMessageString;
};
static const FName NAME_ANBPlayerController_ClientRPCPrintChatMessageString = FName(TEXT("ClientRPCPrintChatMessageString"));
void ANBPlayerController::ClientRPCPrintChatMessageString(const FString& InChatMessageString)
{
	NBPlayerController_eventClientRPCPrintChatMessageString_Parms Parms;
	Parms.InChatMessageString=InChatMessageString;
	UFunction* Func = FindFunctionChecked(NAME_ANBPlayerController_ClientRPCPrintChatMessageString);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ANBPlayerController_ClientRPCPrintChatMessageString_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb8\xef\xbf\xbd \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Controller/NBPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb8\xef\xbf\xbd \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InChatMessageString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InChatMessageString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANBPlayerController_ClientRPCPrintChatMessageString_Statics::NewProp_InChatMessageString = { "InChatMessageString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBPlayerController_eventClientRPCPrintChatMessageString_Parms, InChatMessageString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InChatMessageString_MetaData), NewProp_InChatMessageString_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANBPlayerController_ClientRPCPrintChatMessageString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANBPlayerController_ClientRPCPrintChatMessageString_Statics::NewProp_InChatMessageString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBPlayerController_ClientRPCPrintChatMessageString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBPlayerController_ClientRPCPrintChatMessageString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBPlayerController, nullptr, "ClientRPCPrintChatMessageString", nullptr, nullptr, Z_Construct_UFunction_ANBPlayerController_ClientRPCPrintChatMessageString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANBPlayerController_ClientRPCPrintChatMessageString_Statics::PropPointers), sizeof(NBPlayerController_eventClientRPCPrintChatMessageString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBPlayerController_ClientRPCPrintChatMessageString_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBPlayerController_ClientRPCPrintChatMessageString_Statics::Function_MetaDataParams) };
static_assert(sizeof(NBPlayerController_eventClientRPCPrintChatMessageString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANBPlayerController_ClientRPCPrintChatMessageString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBPlayerController_ClientRPCPrintChatMessageString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANBPlayerController::execClientRPCPrintChatMessageString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InChatMessageString);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientRPCPrintChatMessageString_Implementation(Z_Param_InChatMessageString);
	P_NATIVE_END;
}
// End Class ANBPlayerController Function ClientRPCPrintChatMessageString

// Begin Class ANBPlayerController Function ServerRPCPrintChatMessageString
struct NBPlayerController_eventServerRPCPrintChatMessageString_Parms
{
	FString InChatMessageString;
};
static const FName NAME_ANBPlayerController_ServerRPCPrintChatMessageString = FName(TEXT("ServerRPCPrintChatMessageString"));
void ANBPlayerController::ServerRPCPrintChatMessageString(const FString& InChatMessageString)
{
	NBPlayerController_eventServerRPCPrintChatMessageString_Parms Parms;
	Parms.InChatMessageString=InChatMessageString;
	UFunction* Func = FindFunctionChecked(NAME_ANBPlayerController_ServerRPCPrintChatMessageString);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ANBPlayerController_ServerRPCPrintChatMessageString_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Controller/NBPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InChatMessageString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InChatMessageString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANBPlayerController_ServerRPCPrintChatMessageString_Statics::NewProp_InChatMessageString = { "InChatMessageString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBPlayerController_eventServerRPCPrintChatMessageString_Parms, InChatMessageString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InChatMessageString_MetaData), NewProp_InChatMessageString_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANBPlayerController_ServerRPCPrintChatMessageString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANBPlayerController_ServerRPCPrintChatMessageString_Statics::NewProp_InChatMessageString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBPlayerController_ServerRPCPrintChatMessageString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBPlayerController_ServerRPCPrintChatMessageString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBPlayerController, nullptr, "ServerRPCPrintChatMessageString", nullptr, nullptr, Z_Construct_UFunction_ANBPlayerController_ServerRPCPrintChatMessageString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANBPlayerController_ServerRPCPrintChatMessageString_Statics::PropPointers), sizeof(NBPlayerController_eventServerRPCPrintChatMessageString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBPlayerController_ServerRPCPrintChatMessageString_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBPlayerController_ServerRPCPrintChatMessageString_Statics::Function_MetaDataParams) };
static_assert(sizeof(NBPlayerController_eventServerRPCPrintChatMessageString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANBPlayerController_ServerRPCPrintChatMessageString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBPlayerController_ServerRPCPrintChatMessageString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANBPlayerController::execServerRPCPrintChatMessageString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InChatMessageString);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerRPCPrintChatMessageString_Implementation(Z_Param_InChatMessageString);
	P_NATIVE_END;
}
// End Class ANBPlayerController Function ServerRPCPrintChatMessageString

// Begin Class ANBPlayerController
void ANBPlayerController::StaticRegisterNativesANBPlayerController()
{
	UClass* Class = ANBPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClientRPCPrintChatMessageString", &ANBPlayerController::execClientRPCPrintChatMessageString },
		{ "ServerRPCPrintChatMessageString", &ANBPlayerController::execServerRPCPrintChatMessageString },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANBPlayerController);
UClass* Z_Construct_UClass_ANBPlayerController_NoRegister()
{
	return ANBPlayerController::StaticClass();
}
struct Z_Construct_UClass_ANBPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Controller/NBPlayerController.h" },
		{ "ModuleRelativePath", "Controller/NBPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatInputWidgetClass_MetaData[] = {
		{ "Category", "NBPlayerController" },
		{ "ModuleRelativePath", "Controller/NBPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatInputWidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Controller/NBPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotificationTextWidgetClass_MetaData[] = {
		{ "Category", "NBPlayerController" },
		{ "ModuleRelativePath", "Controller/NBPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotificationTextWidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Controller/NBPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotificationText_MetaData[] = {
		{ "Category", "NBPlayerController" },
		{ "ModuleRelativePath", "Controller/NBPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ChatInputWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChatInputWidgetInstance;
	static const UECodeGen_Private::FClassPropertyParams NewProp_NotificationTextWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NotificationTextWidgetInstance;
	static const UECodeGen_Private::FTextPropertyParams NewProp_NotificationText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANBPlayerController_ClientRPCPrintChatMessageString, "ClientRPCPrintChatMessageString" }, // 325758071
		{ &Z_Construct_UFunction_ANBPlayerController_ServerRPCPrintChatMessageString, "ServerRPCPrintChatMessageString" }, // 3977021370
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANBPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANBPlayerController_Statics::NewProp_ChatInputWidgetClass = { "ChatInputWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBPlayerController, ChatInputWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNBChatInput_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatInputWidgetClass_MetaData), NewProp_ChatInputWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANBPlayerController_Statics::NewProp_ChatInputWidgetInstance = { "ChatInputWidgetInstance", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBPlayerController, ChatInputWidgetInstance), Z_Construct_UClass_UNBChatInput_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatInputWidgetInstance_MetaData), NewProp_ChatInputWidgetInstance_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANBPlayerController_Statics::NewProp_NotificationTextWidgetClass = { "NotificationTextWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBPlayerController, NotificationTextWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotificationTextWidgetClass_MetaData), NewProp_NotificationTextWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANBPlayerController_Statics::NewProp_NotificationTextWidgetInstance = { "NotificationTextWidgetInstance", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBPlayerController, NotificationTextWidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotificationTextWidgetInstance_MetaData), NewProp_NotificationTextWidgetInstance_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ANBPlayerController_Statics::NewProp_NotificationText = { "NotificationText", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBPlayerController, NotificationText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotificationText_MetaData), NewProp_NotificationText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANBPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBPlayerController_Statics::NewProp_ChatInputWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBPlayerController_Statics::NewProp_ChatInputWidgetInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBPlayerController_Statics::NewProp_NotificationTextWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBPlayerController_Statics::NewProp_NotificationTextWidgetInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBPlayerController_Statics::NewProp_NotificationText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANBPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_NBC_HW09,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANBPlayerController_Statics::ClassParams = {
	&ANBPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANBPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANBPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANBPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ANBPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANBPlayerController()
{
	if (!Z_Registration_Info_UClass_ANBPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANBPlayerController.OuterSingleton, Z_Construct_UClass_ANBPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANBPlayerController.OuterSingleton;
}
template<> NBC_HW09_API UClass* StaticClass<ANBPlayerController>()
{
	return ANBPlayerController::StaticClass();
}
void ANBPlayerController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_NotificationText(TEXT("NotificationText"));
	const bool bIsValid = true
		&& Name_NotificationText == ClassReps[(int32)ENetFields_Private::NotificationText].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ANBPlayerController"));
}
ANBPlayerController::ANBPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANBPlayerController);
ANBPlayerController::~ANBPlayerController() {}
// End Class ANBPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_NBC_HW09_Source_NBC_HW09_Controller_NBPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANBPlayerController, ANBPlayerController::StaticClass, TEXT("ANBPlayerController"), &Z_Registration_Info_UClass_ANBPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANBPlayerController), 4119734294U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NBC_HW09_Source_NBC_HW09_Controller_NBPlayerController_h_1207326982(TEXT("/Script/NBC_HW09"),
	Z_CompiledInDeferFile_FID_NBC_HW09_Source_NBC_HW09_Controller_NBPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NBC_HW09_Source_NBC_HW09_Controller_NBPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
