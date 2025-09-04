// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimInstances/Hero/HeroLinkedAnimLayer.h"
#include "Components/SkeletalMeshComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHeroLinkedAnimLayer() {}

// ********** Begin Cross Module References ********************************************************
TECHNICALTEST_API UClass* Z_Construct_UClass_UBaseAnimInstance();
TECHNICALTEST_API UClass* Z_Construct_UClass_UHeroLinkedAnimLayer();
TECHNICALTEST_API UClass* Z_Construct_UClass_UHeroLinkedAnimLayer_NoRegister();
UPackage* Z_Construct_UPackage__Script_TechnicalTest();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHeroLinkedAnimLayer *****************************************************
void UHeroLinkedAnimLayer::StaticRegisterNativesUHeroLinkedAnimLayer()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHeroLinkedAnimLayer;
UClass* UHeroLinkedAnimLayer::GetPrivateStaticClass()
{
	using TClass = UHeroLinkedAnimLayer;
	if (!Z_Registration_Info_UClass_UHeroLinkedAnimLayer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HeroLinkedAnimLayer"),
			Z_Registration_Info_UClass_UHeroLinkedAnimLayer.InnerSingleton,
			StaticRegisterNativesUHeroLinkedAnimLayer,
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
	return Z_Registration_Info_UClass_UHeroLinkedAnimLayer.InnerSingleton;
}
UClass* Z_Construct_UClass_UHeroLinkedAnimLayer_NoRegister()
{
	return UHeroLinkedAnimLayer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHeroLinkedAnimLayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimInstances/Hero/HeroLinkedAnimLayer.h" },
		{ "ModuleRelativePath", "Public/AnimInstances/Hero/HeroLinkedAnimLayer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroLinkedAnimLayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHeroLinkedAnimLayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_TechnicalTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroLinkedAnimLayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHeroLinkedAnimLayer_Statics::ClassParams = {
	&UHeroLinkedAnimLayer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroLinkedAnimLayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UHeroLinkedAnimLayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHeroLinkedAnimLayer()
{
	if (!Z_Registration_Info_UClass_UHeroLinkedAnimLayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeroLinkedAnimLayer.OuterSingleton, Z_Construct_UClass_UHeroLinkedAnimLayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHeroLinkedAnimLayer.OuterSingleton;
}
UHeroLinkedAnimLayer::UHeroLinkedAnimLayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroLinkedAnimLayer);
UHeroLinkedAnimLayer::~UHeroLinkedAnimLayer() {}
// ********** End Class UHeroLinkedAnimLayer *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AnimInstances_Hero_HeroLinkedAnimLayer_h__Script_TechnicalTest_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHeroLinkedAnimLayer, UHeroLinkedAnimLayer::StaticClass, TEXT("UHeroLinkedAnimLayer"), &Z_Registration_Info_UClass_UHeroLinkedAnimLayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeroLinkedAnimLayer), 3499356343U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AnimInstances_Hero_HeroLinkedAnimLayer_h__Script_TechnicalTest_561552652(TEXT("/Script/TechnicalTest"),
	Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AnimInstances_Hero_HeroLinkedAnimLayer_h__Script_TechnicalTest_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AnimInstances_Hero_HeroLinkedAnimLayer_h__Script_TechnicalTest_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
