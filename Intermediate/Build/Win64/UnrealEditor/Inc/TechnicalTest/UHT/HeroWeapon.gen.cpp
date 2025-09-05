// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Items/Weapons/HeroWeapon.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHeroWeapon() {}

// ********** Begin Cross Module References ********************************************************
TECHNICALTEST_API UClass* Z_Construct_UClass_AHeroWeapon();
TECHNICALTEST_API UClass* Z_Construct_UClass_AHeroWeapon_NoRegister();
TECHNICALTEST_API UClass* Z_Construct_UClass_AMyWeaponBase();
UPackage* Z_Construct_UPackage__Script_TechnicalTest();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AHeroWeapon **************************************************************
void AHeroWeapon::StaticRegisterNativesAHeroWeapon()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AHeroWeapon;
UClass* AHeroWeapon::GetPrivateStaticClass()
{
	using TClass = AHeroWeapon;
	if (!Z_Registration_Info_UClass_AHeroWeapon.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HeroWeapon"),
			Z_Registration_Info_UClass_AHeroWeapon.InnerSingleton,
			StaticRegisterNativesAHeroWeapon,
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
	return Z_Registration_Info_UClass_AHeroWeapon.InnerSingleton;
}
UClass* Z_Construct_UClass_AHeroWeapon_NoRegister()
{
	return AHeroWeapon::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHeroWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Items/Weapons/HeroWeapon.h" },
		{ "ModuleRelativePath", "Public/Items/Weapons/HeroWeapon.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHeroWeapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AHeroWeapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMyWeaponBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TechnicalTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHeroWeapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHeroWeapon_Statics::ClassParams = {
	&AHeroWeapon::StaticClass,
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
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHeroWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_AHeroWeapon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHeroWeapon()
{
	if (!Z_Registration_Info_UClass_AHeroWeapon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHeroWeapon.OuterSingleton, Z_Construct_UClass_AHeroWeapon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHeroWeapon.OuterSingleton;
}
AHeroWeapon::AHeroWeapon() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHeroWeapon);
AHeroWeapon::~AHeroWeapon() {}
// ********** End Class AHeroWeapon ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Items_Weapons_HeroWeapon_h__Script_TechnicalTest_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHeroWeapon, AHeroWeapon::StaticClass, TEXT("AHeroWeapon"), &Z_Registration_Info_UClass_AHeroWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHeroWeapon), 1531849633U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Items_Weapons_HeroWeapon_h__Script_TechnicalTest_3751009249(TEXT("/Script/TechnicalTest"),
	Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Items_Weapons_HeroWeapon_h__Script_TechnicalTest_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Items_Weapons_HeroWeapon_h__Script_TechnicalTest_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
