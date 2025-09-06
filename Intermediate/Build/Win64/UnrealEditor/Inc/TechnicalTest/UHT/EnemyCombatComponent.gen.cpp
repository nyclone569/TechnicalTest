// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/Combat/EnemyCombatComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEnemyCombatComponent() {}

// ********** Begin Cross Module References ********************************************************
TECHNICALTEST_API UClass* Z_Construct_UClass_UEnemyCombatComponent();
TECHNICALTEST_API UClass* Z_Construct_UClass_UEnemyCombatComponent_NoRegister();
TECHNICALTEST_API UClass* Z_Construct_UClass_UPawnCombatComponent();
UPackage* Z_Construct_UPackage__Script_TechnicalTest();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEnemyCombatComponent ****************************************************
void UEnemyCombatComponent::StaticRegisterNativesUEnemyCombatComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEnemyCombatComponent;
UClass* UEnemyCombatComponent::GetPrivateStaticClass()
{
	using TClass = UEnemyCombatComponent;
	if (!Z_Registration_Info_UClass_UEnemyCombatComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EnemyCombatComponent"),
			Z_Registration_Info_UClass_UEnemyCombatComponent.InnerSingleton,
			StaticRegisterNativesUEnemyCombatComponent,
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
	return Z_Registration_Info_UClass_UEnemyCombatComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UEnemyCombatComponent_NoRegister()
{
	return UEnemyCombatComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEnemyCombatComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Components/Combat/EnemyCombatComponent.h" },
		{ "ModuleRelativePath", "Public/Components/Combat/EnemyCombatComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyCombatComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEnemyCombatComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnCombatComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_TechnicalTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyCombatComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyCombatComponent_Statics::ClassParams = {
	&UEnemyCombatComponent::StaticClass,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyCombatComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyCombatComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnemyCombatComponent()
{
	if (!Z_Registration_Info_UClass_UEnemyCombatComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyCombatComponent.OuterSingleton, Z_Construct_UClass_UEnemyCombatComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnemyCombatComponent.OuterSingleton;
}
UEnemyCombatComponent::UEnemyCombatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyCombatComponent);
UEnemyCombatComponent::~UEnemyCombatComponent() {}
// ********** End Class UEnemyCombatComponent ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_Combat_EnemyCombatComponent_h__Script_TechnicalTest_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyCombatComponent, UEnemyCombatComponent::StaticClass, TEXT("UEnemyCombatComponent"), &Z_Registration_Info_UClass_UEnemyCombatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyCombatComponent), 3999467261U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_Combat_EnemyCombatComponent_h__Script_TechnicalTest_3260443931(TEXT("/Script/TechnicalTest"),
	Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_Combat_EnemyCombatComponent_h__Script_TechnicalTest_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_Combat_EnemyCombatComponent_h__Script_TechnicalTest_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
