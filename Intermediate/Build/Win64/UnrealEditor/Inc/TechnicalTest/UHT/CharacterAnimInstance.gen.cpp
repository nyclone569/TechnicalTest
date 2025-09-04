// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimInstances/CharacterAnimInstance.h"
#include "Components/SkeletalMeshComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCharacterAnimInstance() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
TECHNICALTEST_API UClass* Z_Construct_UClass_ABaseCharacter_NoRegister();
TECHNICALTEST_API UClass* Z_Construct_UClass_UBaseAnimInstance();
TECHNICALTEST_API UClass* Z_Construct_UClass_UCharacterAnimInstance();
TECHNICALTEST_API UClass* Z_Construct_UClass_UCharacterAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_TechnicalTest();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCharacterAnimInstance ***************************************************
void UCharacterAnimInstance::StaticRegisterNativesUCharacterAnimInstance()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCharacterAnimInstance;
UClass* UCharacterAnimInstance::GetPrivateStaticClass()
{
	using TClass = UCharacterAnimInstance;
	if (!Z_Registration_Info_UClass_UCharacterAnimInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CharacterAnimInstance"),
			Z_Registration_Info_UClass_UCharacterAnimInstance.InnerSingleton,
			StaticRegisterNativesUCharacterAnimInstance,
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
	return Z_Registration_Info_UClass_UCharacterAnimInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UCharacterAnimInstance_NoRegister()
{
	return UCharacterAnimInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCharacterAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimInstances/CharacterAnimInstance.h" },
		{ "ModuleRelativePath", "Public/AnimInstances/CharacterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimInstances/CharacterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningMovementComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AnimInstances/CharacterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundSpeed_MetaData[] = {
		{ "Category", "AnimData|LocomotionData" },
		{ "ModuleRelativePath", "Public/AnimInstances/CharacterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasAcceleration_MetaData[] = {
		{ "Category", "AnimData|LocomotionData" },
		{ "ModuleRelativePath", "Public/AnimInstances/CharacterAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningMovementComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundSpeed;
	static void NewProp_bHasAcceleration_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasAcceleration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_OwningCharacter = { "OwningCharacter", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimInstance, OwningCharacter), Z_Construct_UClass_ABaseCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningCharacter_MetaData), NewProp_OwningCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_OwningMovementComponent = { "OwningMovementComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimInstance, OwningMovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningMovementComponent_MetaData), NewProp_OwningMovementComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_GroundSpeed = { "GroundSpeed", nullptr, (EPropertyFlags)0x0020080000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimInstance, GroundSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundSpeed_MetaData), NewProp_GroundSpeed_MetaData) };
void Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bHasAcceleration_SetBit(void* Obj)
{
	((UCharacterAnimInstance*)Obj)->bHasAcceleration = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bHasAcceleration = { "bHasAcceleration", nullptr, (EPropertyFlags)0x0020080000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCharacterAnimInstance), &Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bHasAcceleration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasAcceleration_MetaData), NewProp_bHasAcceleration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_OwningCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_OwningMovementComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_GroundSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_bHasAcceleration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_TechnicalTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterAnimInstance_Statics::ClassParams = {
	&UCharacterAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCharacterAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterAnimInstance()
{
	if (!Z_Registration_Info_UClass_UCharacterAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterAnimInstance.OuterSingleton, Z_Construct_UClass_UCharacterAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterAnimInstance.OuterSingleton;
}
UCharacterAnimInstance::UCharacterAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterAnimInstance);
UCharacterAnimInstance::~UCharacterAnimInstance() {}
// ********** End Class UCharacterAnimInstance *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AnimInstances_CharacterAnimInstance_h__Script_TechnicalTest_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterAnimInstance, UCharacterAnimInstance::StaticClass, TEXT("UCharacterAnimInstance"), &Z_Registration_Info_UClass_UCharacterAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterAnimInstance), 196740320U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AnimInstances_CharacterAnimInstance_h__Script_TechnicalTest_1252809056(TEXT("/Script/TechnicalTest"),
	Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AnimInstances_CharacterAnimInstance_h__Script_TechnicalTest_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AnimInstances_CharacterAnimInstance_h__Script_TechnicalTest_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
