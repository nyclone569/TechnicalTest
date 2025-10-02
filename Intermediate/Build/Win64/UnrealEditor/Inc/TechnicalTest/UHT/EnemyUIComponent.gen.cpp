// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/UI/EnemyUIComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEnemyUIComponent() {}

// ********** Begin Cross Module References ********************************************************
TECHNICALTEST_API UClass* Z_Construct_UClass_UEnemyUIComponent();
TECHNICALTEST_API UClass* Z_Construct_UClass_UEnemyUIComponent_NoRegister();
TECHNICALTEST_API UClass* Z_Construct_UClass_UPawnUIComponent();
TECHNICALTEST_API UFunction* Z_Construct_UDelegateFunction_TechnicalTest_OnPercentChangedDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_TechnicalTest();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEnemyUIComponent ********************************************************
void UEnemyUIComponent::StaticRegisterNativesUEnemyUIComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEnemyUIComponent;
UClass* UEnemyUIComponent::GetPrivateStaticClass()
{
	using TClass = UEnemyUIComponent;
	if (!Z_Registration_Info_UClass_UEnemyUIComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EnemyUIComponent"),
			Z_Registration_Info_UClass_UEnemyUIComponent.InnerSingleton,
			StaticRegisterNativesUEnemyUIComponent,
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
	return Z_Registration_Info_UClass_UEnemyUIComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UEnemyUIComponent_NoRegister()
{
	return UEnemyUIComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEnemyUIComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Components/UI/EnemyUIComponent.h" },
		{ "ModuleRelativePath", "Public/Components/UI/EnemyUIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCurrentPoiseChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/UI/EnemyUIComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCurrentPoiseChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyUIComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEnemyUIComponent_Statics::NewProp_OnCurrentPoiseChanged = { "OnCurrentPoiseChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyUIComponent, OnCurrentPoiseChanged), Z_Construct_UDelegateFunction_TechnicalTest_OnPercentChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCurrentPoiseChanged_MetaData), NewProp_OnCurrentPoiseChanged_MetaData) }; // 1543719303
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyUIComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyUIComponent_Statics::NewProp_OnCurrentPoiseChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyUIComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnemyUIComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnUIComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_TechnicalTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyUIComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyUIComponent_Statics::ClassParams = {
	&UEnemyUIComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnemyUIComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyUIComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyUIComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyUIComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnemyUIComponent()
{
	if (!Z_Registration_Info_UClass_UEnemyUIComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyUIComponent.OuterSingleton, Z_Construct_UClass_UEnemyUIComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnemyUIComponent.OuterSingleton;
}
UEnemyUIComponent::UEnemyUIComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyUIComponent);
UEnemyUIComponent::~UEnemyUIComponent() {}
// ********** End Class UEnemyUIComponent **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_UI_EnemyUIComponent_h__Script_TechnicalTest_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyUIComponent, UEnemyUIComponent::StaticClass, TEXT("UEnemyUIComponent"), &Z_Registration_Info_UClass_UEnemyUIComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyUIComponent), 302557598U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_UI_EnemyUIComponent_h__Script_TechnicalTest_3372150433(TEXT("/Script/TechnicalTest"),
	Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_UI_EnemyUIComponent_h__Script_TechnicalTest_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_UI_EnemyUIComponent_h__Script_TechnicalTest_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
