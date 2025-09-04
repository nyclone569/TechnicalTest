// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimInstances/Hero/HeroAnimInstance.h"
#include "Components/SkeletalMeshComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHeroAnimInstance() {}

// ********** Begin Cross Module References ********************************************************
TECHNICALTEST_API UClass* Z_Construct_UClass_AHeroCharacter_NoRegister();
TECHNICALTEST_API UClass* Z_Construct_UClass_UCharacterAnimInstance();
TECHNICALTEST_API UClass* Z_Construct_UClass_UHeroAnimInstance();
TECHNICALTEST_API UClass* Z_Construct_UClass_UHeroAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_TechnicalTest();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHeroAnimInstance ********************************************************
void UHeroAnimInstance::StaticRegisterNativesUHeroAnimInstance()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHeroAnimInstance;
UClass* UHeroAnimInstance::GetPrivateStaticClass()
{
	using TClass = UHeroAnimInstance;
	if (!Z_Registration_Info_UClass_UHeroAnimInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HeroAnimInstance"),
			Z_Registration_Info_UClass_UHeroAnimInstance.InnerSingleton,
			StaticRegisterNativesUHeroAnimInstance,
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
	return Z_Registration_Info_UClass_UHeroAnimInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UHeroAnimInstance_NoRegister()
{
	return UHeroAnimInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHeroAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimInstances/Hero/HeroAnimInstance.h" },
		{ "ModuleRelativePath", "Public/AnimInstances/Hero/HeroAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningHeroCharacter_MetaData[] = {
		{ "Category", "AnimData|References" },
		{ "ModuleRelativePath", "Public/AnimInstances/Hero/HeroAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldEnterRelaxedState_MetaData[] = {
		{ "Category", "AnimData|LocomotionData" },
		{ "ModuleRelativePath", "Public/AnimInstances/Hero/HeroAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnteredRelaxStateThreshold_MetaData[] = {
		{ "Category", "AnimData|LocomotionData" },
		{ "ModuleRelativePath", "Public/AnimInstances/Hero/HeroAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningHeroCharacter;
	static void NewProp_bShouldEnterRelaxedState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldEnterRelaxedState;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EnteredRelaxStateThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_OwningHeroCharacter = { "OwningHeroCharacter", nullptr, (EPropertyFlags)0x0020080000030015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroAnimInstance, OwningHeroCharacter), Z_Construct_UClass_AHeroCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningHeroCharacter_MetaData), NewProp_OwningHeroCharacter_MetaData) };
void Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_bShouldEnterRelaxedState_SetBit(void* Obj)
{
	((UHeroAnimInstance*)Obj)->bShouldEnterRelaxedState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_bShouldEnterRelaxedState = { "bShouldEnterRelaxedState", nullptr, (EPropertyFlags)0x0020080000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHeroAnimInstance), &Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_bShouldEnterRelaxedState_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldEnterRelaxedState_MetaData), NewProp_bShouldEnterRelaxedState_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_EnteredRelaxStateThreshold = { "EnteredRelaxStateThreshold", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroAnimInstance, EnteredRelaxStateThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnteredRelaxStateThreshold_MetaData), NewProp_EnteredRelaxStateThreshold_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeroAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_OwningHeroCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_bShouldEnterRelaxedState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroAnimInstance_Statics::NewProp_EnteredRelaxStateThreshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHeroAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCharacterAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_TechnicalTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHeroAnimInstance_Statics::ClassParams = {
	&UHeroAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHeroAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHeroAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UHeroAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHeroAnimInstance()
{
	if (!Z_Registration_Info_UClass_UHeroAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeroAnimInstance.OuterSingleton, Z_Construct_UClass_UHeroAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHeroAnimInstance.OuterSingleton;
}
UHeroAnimInstance::UHeroAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroAnimInstance);
UHeroAnimInstance::~UHeroAnimInstance() {}
// ********** End Class UHeroAnimInstance **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AnimInstances_Hero_HeroAnimInstance_h__Script_TechnicalTest_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHeroAnimInstance, UHeroAnimInstance::StaticClass, TEXT("UHeroAnimInstance"), &Z_Registration_Info_UClass_UHeroAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeroAnimInstance), 2565061928U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AnimInstances_Hero_HeroAnimInstance_h__Script_TechnicalTest_67613550(TEXT("/Script/TechnicalTest"),
	Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AnimInstances_Hero_HeroAnimInstance_h__Script_TechnicalTest_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AnimInstances_Hero_HeroAnimInstance_h__Script_TechnicalTest_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
