// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/MyAbilitySystemComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMyAbilitySystemComponent() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
TECHNICALTEST_API UClass* Z_Construct_UClass_UMyAbilitySystemComponent();
TECHNICALTEST_API UClass* Z_Construct_UClass_UMyAbilitySystemComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_TechnicalTest();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMyAbilitySystemComponent ************************************************
void UMyAbilitySystemComponent::StaticRegisterNativesUMyAbilitySystemComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMyAbilitySystemComponent;
UClass* UMyAbilitySystemComponent::GetPrivateStaticClass()
{
	using TClass = UMyAbilitySystemComponent;
	if (!Z_Registration_Info_UClass_UMyAbilitySystemComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MyAbilitySystemComponent"),
			Z_Registration_Info_UClass_UMyAbilitySystemComponent.InnerSingleton,
			StaticRegisterNativesUMyAbilitySystemComponent,
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
	return Z_Registration_Info_UClass_UMyAbilitySystemComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UMyAbilitySystemComponent_NoRegister()
{
	return UMyAbilitySystemComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMyAbilitySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "AbilitySystem/MyAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/MyAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyAbilitySystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyAbilitySystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_TechnicalTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAbilitySystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyAbilitySystemComponent_Statics::ClassParams = {
	&UMyAbilitySystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyAbilitySystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyAbilitySystemComponent()
{
	if (!Z_Registration_Info_UClass_UMyAbilitySystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UMyAbilitySystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyAbilitySystemComponent.OuterSingleton;
}
UMyAbilitySystemComponent::UMyAbilitySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyAbilitySystemComponent);
UMyAbilitySystemComponent::~UMyAbilitySystemComponent() {}
// ********** End Class UMyAbilitySystemComponent **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_MyAbilitySystemComponent_h__Script_TechnicalTest_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyAbilitySystemComponent, UMyAbilitySystemComponent::StaticClass, TEXT("UMyAbilitySystemComponent"), &Z_Registration_Info_UClass_UMyAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyAbilitySystemComponent), 1561358967U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_MyAbilitySystemComponent_h__Script_TechnicalTest_3870766798(TEXT("/Script/TechnicalTest"),
	Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_MyAbilitySystemComponent_h__Script_TechnicalTest_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AbilitySystem_MyAbilitySystemComponent_h__Script_TechnicalTest_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
