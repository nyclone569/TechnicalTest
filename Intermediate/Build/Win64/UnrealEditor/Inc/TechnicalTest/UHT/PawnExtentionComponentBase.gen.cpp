// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/PawnExtentionComponentBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePawnExtentionComponentBase() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
TECHNICALTEST_API UClass* Z_Construct_UClass_UPawnExtentionComponentBase();
TECHNICALTEST_API UClass* Z_Construct_UClass_UPawnExtentionComponentBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_TechnicalTest();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPawnExtentionComponentBase **********************************************
void UPawnExtentionComponentBase::StaticRegisterNativesUPawnExtentionComponentBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPawnExtentionComponentBase;
UClass* UPawnExtentionComponentBase::GetPrivateStaticClass()
{
	using TClass = UPawnExtentionComponentBase;
	if (!Z_Registration_Info_UClass_UPawnExtentionComponentBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PawnExtentionComponentBase"),
			Z_Registration_Info_UClass_UPawnExtentionComponentBase.InnerSingleton,
			StaticRegisterNativesUPawnExtentionComponentBase,
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
	return Z_Registration_Info_UClass_UPawnExtentionComponentBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UPawnExtentionComponentBase_NoRegister()
{
	return UPawnExtentionComponentBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPawnExtentionComponentBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/PawnExtentionComponentBase.h" },
		{ "ModuleRelativePath", "Public/Components/PawnExtentionComponentBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPawnExtentionComponentBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPawnExtentionComponentBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_TechnicalTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPawnExtentionComponentBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPawnExtentionComponentBase_Statics::ClassParams = {
	&UPawnExtentionComponentBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPawnExtentionComponentBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UPawnExtentionComponentBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPawnExtentionComponentBase()
{
	if (!Z_Registration_Info_UClass_UPawnExtentionComponentBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPawnExtentionComponentBase.OuterSingleton, Z_Construct_UClass_UPawnExtentionComponentBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPawnExtentionComponentBase.OuterSingleton;
}
UPawnExtentionComponentBase::UPawnExtentionComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnExtentionComponentBase);
UPawnExtentionComponentBase::~UPawnExtentionComponentBase() {}
// ********** End Class UPawnExtentionComponentBase ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_PawnExtentionComponentBase_h__Script_TechnicalTest_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPawnExtentionComponentBase, UPawnExtentionComponentBase::StaticClass, TEXT("UPawnExtentionComponentBase"), &Z_Registration_Info_UClass_UPawnExtentionComponentBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPawnExtentionComponentBase), 1167569643U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_PawnExtentionComponentBase_h__Script_TechnicalTest_4235602562(TEXT("/Script/TechnicalTest"),
	Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_PawnExtentionComponentBase_h__Script_TechnicalTest_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Components_PawnExtentionComponentBase_h__Script_TechnicalTest_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
