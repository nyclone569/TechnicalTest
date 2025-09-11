// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/UI/HeroUIComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHeroUIComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
TECHNICALTEST_API UClass* Z_Construct_UClass_UHeroUIComponent();
TECHNICALTEST_API UClass* Z_Construct_UClass_UHeroUIComponent_NoRegister();
TECHNICALTEST_API UClass* Z_Construct_UClass_UPawnUIComponent();
TECHNICALTEST_API UFunction* Z_Construct_UDelegateFunction_TechnicalTest_OnEquippedWeaponChangedDelegate__DelegateSignature();
TECHNICALTEST_API UFunction* Z_Construct_UDelegateFunction_TechnicalTest_OnPercentChangedDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_TechnicalTest();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnEquippedWeaponChangedDelegate **************************************
struct Z_Construct_UDelegateFunction_TechnicalTest_OnEquippedWeaponChangedDelegate__DelegateSignature_Statics
{
	struct _Script_TechnicalTest_eventOnEquippedWeaponChangedDelegate_Parms
	{
		TSoftObjectPtr<UTexture2D> SoftWeaponIcon;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/UI/HeroUIComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoftWeaponIcon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UDelegateFunction_TechnicalTest_OnEquippedWeaponChangedDelegate__DelegateSignature_Statics::NewProp_SoftWeaponIcon = { "SoftWeaponIcon", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TechnicalTest_eventOnEquippedWeaponChangedDelegate_Parms, SoftWeaponIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TechnicalTest_OnEquippedWeaponChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TechnicalTest_OnEquippedWeaponChangedDelegate__DelegateSignature_Statics::NewProp_SoftWeaponIcon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TechnicalTest_OnEquippedWeaponChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_TechnicalTest_OnEquippedWeaponChangedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_TechnicalTest, nullptr, "OnEquippedWeaponChangedDelegate__DelegateSignature", Z_Construct_UDelegateFunction_TechnicalTest_OnEquippedWeaponChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TechnicalTest_OnEquippedWeaponChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TechnicalTest_OnEquippedWeaponChangedDelegate__DelegateSignature_Statics::_Script_TechnicalTest_eventOnEquippedWeaponChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TechnicalTest_OnEquippedWeaponChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TechnicalTest_OnEquippedWeaponChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_TechnicalTest_OnEquippedWeaponChangedDelegate__DelegateSignature_Statics::_Script_TechnicalTest_eventOnEquippedWeaponChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_TechnicalTest_OnEquippedWeaponChangedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TechnicalTest_OnEquippedWeaponChangedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnEquippedWeaponChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnEquippedWeaponChangedDelegate, const TSoftObjectPtr<UTexture2D>& SoftWeaponIcon)
{
	struct _Script_TechnicalTest_eventOnEquippedWeaponChangedDelegate_Parms
	{
		TSoftObjectPtr<UTexture2D> SoftWeaponIcon;
	};
	_Script_TechnicalTest_eventOnEquippedWeaponChangedDelegate_Parms Parms;
	Parms.SoftWeaponIcon=SoftWeaponIcon;
	OnEquippedWeaponChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnEquippedWeaponChangedDelegate ****************************************

// ********** Begin Class UHeroUIComponent *********************************************************
void UHeroUIComponent::StaticRegisterNativesUHeroUIComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHeroUIComponent;
UClass* UHeroUIComponent::GetPrivateStaticClass()
{
	using TClass = UHeroUIComponent;
	if (!Z_Registration_Info_UClass_UHeroUIComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HeroUIComponent"),
			Z_Registration_Info_UClass_UHeroUIComponent.InnerSingleton,
			StaticRegisterNativesUHeroUIComponent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UHeroUIComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UHeroUIComponent_NoRegister()
{
	return UHeroUIComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHeroUIComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Components/UI/HeroUIComponent.h" },
		{ "ModuleRelativePath", "Public/Components/UI/HeroUIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCurrentRageChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/UI/HeroUIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEquippedWeaponChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/UI/HeroUIComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCurrentRageChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEquippedWeaponChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroUIComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHeroUIComponent_Statics::NewProp_OnCurrentRageChanged = { "OnCurrentRageChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroUIComponent, OnCurrentRageChanged), Z_Construct_UDelegateFunction_TechnicalTest_OnPercentChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCurrentRageChanged_MetaData), NewProp_OnCurrentRageChanged_MetaData) }; // 1543719303
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHeroUIComponent_Statics::NewProp_OnEquippedWeaponChanged = { "OnEquippedWeaponChanged", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroUIComponent, OnEquippedWeaponChanged), Z_Construct_UDelegateFunction_TechnicalTest_OnEquippedWeaponChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEquippedWeaponChanged_MetaData), NewProp_OnEquippedWeaponChanged_MetaData) }; // 2044951046
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeroUIComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroUIComponent_Statics::NewProp_OnCurrentRageChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroUIComponent_Statics::NewProp_OnEquippedWeaponChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroUIComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHeroUIComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnUIComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_TechnicalTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroUIComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHeroUIComponent_Statics::ClassParams = {
	&UHeroUIComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHeroUIComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHeroUIComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroUIComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHeroUIComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHeroUIComponent()
{
	if (!Z_Registration_Info_UClass_UHeroUIComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeroUIComponent.OuterSingleton, Z_Construct_UClass_UHeroUIComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHeroUIComponent.OuterSingleton;
}
UHeroUIComponent::UHeroUIComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroUIComponent);
UHeroUIComponent::~UHeroUIComponent() {}
// ********** End Class UHeroUIComponent ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_UI_HeroUIComponent_h__Script_TechnicalTest_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHeroUIComponent, UHeroUIComponent::StaticClass, TEXT("UHeroUIComponent"), &Z_Registration_Info_UClass_UHeroUIComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeroUIComponent), 2316434248U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_UI_HeroUIComponent_h__Script_TechnicalTest_4023083582(TEXT("/Script/TechnicalTest"),
	Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_UI_HeroUIComponent_h__Script_TechnicalTest_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_UI_HeroUIComponent_h__Script_TechnicalTest_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
