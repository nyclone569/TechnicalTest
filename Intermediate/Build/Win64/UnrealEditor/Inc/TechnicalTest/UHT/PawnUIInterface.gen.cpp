// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interfaces/PawnUIInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePawnUIInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
TECHNICALTEST_API UClass* Z_Construct_UClass_UPawnUIInterface();
TECHNICALTEST_API UClass* Z_Construct_UClass_UPawnUIInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_TechnicalTest();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UPawnUIInterface *****************************************************
void UPawnUIInterface::StaticRegisterNativesUPawnUIInterface()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPawnUIInterface;
UClass* UPawnUIInterface::GetPrivateStaticClass()
{
	using TClass = UPawnUIInterface;
	if (!Z_Registration_Info_UClass_UPawnUIInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PawnUIInterface"),
			Z_Registration_Info_UClass_UPawnUIInterface.InnerSingleton,
			StaticRegisterNativesUPawnUIInterface,
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
	return Z_Registration_Info_UClass_UPawnUIInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UPawnUIInterface_NoRegister()
{
	return UPawnUIInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPawnUIInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/PawnUIInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPawnUIInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPawnUIInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_TechnicalTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPawnUIInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPawnUIInterface_Statics::ClassParams = {
	&UPawnUIInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPawnUIInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UPawnUIInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPawnUIInterface()
{
	if (!Z_Registration_Info_UClass_UPawnUIInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPawnUIInterface.OuterSingleton, Z_Construct_UClass_UPawnUIInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPawnUIInterface.OuterSingleton;
}
UPawnUIInterface::UPawnUIInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnUIInterface);
// ********** End Interface UPawnUIInterface *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Interfaces_PawnUIInterface_h__Script_TechnicalTest_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPawnUIInterface, UPawnUIInterface::StaticClass, TEXT("UPawnUIInterface"), &Z_Registration_Info_UClass_UPawnUIInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPawnUIInterface), 2104502764U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Interfaces_PawnUIInterface_h__Script_TechnicalTest_4228415966(TEXT("/Script/TechnicalTest"),
	Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Interfaces_PawnUIInterface_h__Script_TechnicalTest_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Interfaces_PawnUIInterface_h__Script_TechnicalTest_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
