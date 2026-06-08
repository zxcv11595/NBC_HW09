// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBC_HW09/UI/NBChatInput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNBChatInput() {}

// Begin Cross Module References
NBC_HW09_API UClass* Z_Construct_UClass_UNBChatInput();
NBC_HW09_API UClass* Z_Construct_UClass_UNBChatInput_NoRegister();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_NBC_HW09();
// End Cross Module References

// Begin Class UNBChatInput Function OnChatInputTextCommitted
struct Z_Construct_UFunction_UNBChatInput_OnChatInputTextCommitted_Statics
{
	struct NBChatInput_eventOnChatInputTextCommitted_Parms
	{
		FText Text;
		TEnumAsByte<ETextCommit::Type> CommitMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enter \xef\xbf\xbd\xd4\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "UI/NBChatInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enter \xef\xbf\xbd\xd4\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CommitMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNBChatInput_OnChatInputTextCommitted_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBChatInput_eventOnChatInputTextCommitted_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNBChatInput_OnChatInputTextCommitted_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBChatInput_eventOnChatInputTextCommitted_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 1817921380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNBChatInput_OnChatInputTextCommitted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNBChatInput_OnChatInputTextCommitted_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNBChatInput_OnChatInputTextCommitted_Statics::NewProp_CommitMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNBChatInput_OnChatInputTextCommitted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNBChatInput_OnChatInputTextCommitted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNBChatInput, nullptr, "OnChatInputTextCommitted", nullptr, nullptr, Z_Construct_UFunction_UNBChatInput_OnChatInputTextCommitted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNBChatInput_OnChatInputTextCommitted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNBChatInput_OnChatInputTextCommitted_Statics::NBChatInput_eventOnChatInputTextCommitted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNBChatInput_OnChatInputTextCommitted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNBChatInput_OnChatInputTextCommitted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNBChatInput_OnChatInputTextCommitted_Statics::NBChatInput_eventOnChatInputTextCommitted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNBChatInput_OnChatInputTextCommitted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNBChatInput_OnChatInputTextCommitted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNBChatInput::execOnChatInputTextCommitted)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
	P_GET_PROPERTY(FByteProperty,Z_Param_CommitMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnChatInputTextCommitted(Z_Param_Out_Text,ETextCommit::Type(Z_Param_CommitMethod));
	P_NATIVE_END;
}
// End Class UNBChatInput Function OnChatInputTextCommitted

// Begin Class UNBChatInput
void UNBChatInput::StaticRegisterNativesUNBChatInput()
{
	UClass* Class = UNBChatInput::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnChatInputTextCommitted", &UNBChatInput::execOnChatInputTextCommitted },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNBChatInput);
UClass* Z_Construct_UClass_UNBChatInput_NoRegister()
{
	return UNBChatInput::StaticClass();
}
struct Z_Construct_UClass_UNBChatInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/NBChatInput.h" },
		{ "ModuleRelativePath", "UI/NBChatInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditableTextBox_ChatInput_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// c++\xef\xbf\xbd\xef\xbf\xbd WBP \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/NBChatInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "c++\xef\xbf\xbd\xef\xbf\xbd WBP \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditableTextBox_ChatInput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNBChatInput_OnChatInputTextCommitted, "OnChatInputTextCommitted" }, // 888997305
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNBChatInput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNBChatInput_Statics::NewProp_EditableTextBox_ChatInput = { "EditableTextBox_ChatInput", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNBChatInput, EditableTextBox_ChatInput), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditableTextBox_ChatInput_MetaData), NewProp_EditableTextBox_ChatInput_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNBChatInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNBChatInput_Statics::NewProp_EditableTextBox_ChatInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNBChatInput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNBChatInput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NBC_HW09,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNBChatInput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNBChatInput_Statics::ClassParams = {
	&UNBChatInput::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNBChatInput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNBChatInput_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNBChatInput_Statics::Class_MetaDataParams), Z_Construct_UClass_UNBChatInput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNBChatInput()
{
	if (!Z_Registration_Info_UClass_UNBChatInput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNBChatInput.OuterSingleton, Z_Construct_UClass_UNBChatInput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNBChatInput.OuterSingleton;
}
template<> NBC_HW09_API UClass* StaticClass<UNBChatInput>()
{
	return UNBChatInput::StaticClass();
}
UNBChatInput::UNBChatInput(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNBChatInput);
UNBChatInput::~UNBChatInput() {}
// End Class UNBChatInput

// Begin Registration
struct Z_CompiledInDeferFile_FID_NBC_HW09_Source_NBC_HW09_UI_NBChatInput_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNBChatInput, UNBChatInput::StaticClass, TEXT("UNBChatInput"), &Z_Registration_Info_UClass_UNBChatInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNBChatInput), 3692433433U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NBC_HW09_Source_NBC_HW09_UI_NBChatInput_h_2635574317(TEXT("/Script/NBC_HW09"),
	Z_CompiledInDeferFile_FID_NBC_HW09_Source_NBC_HW09_UI_NBChatInput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NBC_HW09_Source_NBC_HW09_UI_NBChatInput_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
