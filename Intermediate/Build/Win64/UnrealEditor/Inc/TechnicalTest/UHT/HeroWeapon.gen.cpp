// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Items/Weapons/HeroWeapon.h"
#include "GameplayAbilitySpecHandle.h"
#include "MyTypes/MyStuctTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHeroWeapon() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
TECHNICALTEST_API UClass* Z_Construct_UClass_AHeroWeapon();
TECHNICALTEST_API UClass* Z_Construct_UClass_AHeroWeapon_NoRegister();
TECHNICALTEST_API UClass* Z_Construct_UClass_AMyWeaponBase();
TECHNICALTEST_API UScriptStruct* Z_Construct_UScriptStruct_FHeroWeaponData();
UPackage* Z_Construct_UPackage__Script_TechnicalTest();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AHeroWeapon Function AssignGrantedAbilitySpecHandles *********************
struct Z_Construct_UFunction_AHeroWeapon_AssignGrantedAbilitySpecHandles_Statics
{
	struct HeroWeapon_eventAssignGrantedAbilitySpecHandles_Parms
	{
		TArray<FGameplayAbilitySpecHandle> InSpecHandles;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/Weapons/HeroWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSpecHandles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSpecHandles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InSpecHandles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHeroWeapon_AssignGrantedAbilitySpecHandles_Statics::NewProp_InSpecHandles_Inner = { "InSpecHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 417001783
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AHeroWeapon_AssignGrantedAbilitySpecHandles_Statics::NewProp_InSpecHandles = { "InSpecHandles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HeroWeapon_eventAssignGrantedAbilitySpecHandles_Parms, InSpecHandles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSpecHandles_MetaData), NewProp_InSpecHandles_MetaData) }; // 417001783
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroWeapon_AssignGrantedAbilitySpecHandles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroWeapon_AssignGrantedAbilitySpecHandles_Statics::NewProp_InSpecHandles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroWeapon_AssignGrantedAbilitySpecHandles_Statics::NewProp_InSpecHandles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroWeapon_AssignGrantedAbilitySpecHandles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroWeapon_AssignGrantedAbilitySpecHandles_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHeroWeapon, nullptr, "AssignGrantedAbilitySpecHandles", Z_Construct_UFunction_AHeroWeapon_AssignGrantedAbilitySpecHandles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroWeapon_AssignGrantedAbilitySpecHandles_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHeroWeapon_AssignGrantedAbilitySpecHandles_Statics::HeroWeapon_eventAssignGrantedAbilitySpecHandles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroWeapon_AssignGrantedAbilitySpecHandles_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHeroWeapon_AssignGrantedAbilitySpecHandles_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AHeroWeapon_AssignGrantedAbilitySpecHandles_Statics::HeroWeapon_eventAssignGrantedAbilitySpecHandles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHeroWeapon_AssignGrantedAbilitySpecHandles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeroWeapon_AssignGrantedAbilitySpecHandles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHeroWeapon::execAssignGrantedAbilitySpecHandles)
{
	P_GET_TARRAY_REF(FGameplayAbilitySpecHandle,Z_Param_Out_InSpecHandles);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AssignGrantedAbilitySpecHandles(Z_Param_Out_InSpecHandles);
	P_NATIVE_END;
}
// ********** End Class AHeroWeapon Function AssignGrantedAbilitySpecHandles ***********************

// ********** Begin Class AHeroWeapon Function GetGrantedAbilitySpecHandles ************************
struct Z_Construct_UFunction_AHeroWeapon_GetGrantedAbilitySpecHandles_Statics
{
	struct HeroWeapon_eventGetGrantedAbilitySpecHandles_Parms
	{
		TArray<FGameplayAbilitySpecHandle> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/Weapons/HeroWeapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHeroWeapon_GetGrantedAbilitySpecHandles_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 417001783
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AHeroWeapon_GetGrantedAbilitySpecHandles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HeroWeapon_eventGetGrantedAbilitySpecHandles_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 417001783
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroWeapon_GetGrantedAbilitySpecHandles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroWeapon_GetGrantedAbilitySpecHandles_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroWeapon_GetGrantedAbilitySpecHandles_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroWeapon_GetGrantedAbilitySpecHandles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroWeapon_GetGrantedAbilitySpecHandles_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHeroWeapon, nullptr, "GetGrantedAbilitySpecHandles", Z_Construct_UFunction_AHeroWeapon_GetGrantedAbilitySpecHandles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroWeapon_GetGrantedAbilitySpecHandles_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHeroWeapon_GetGrantedAbilitySpecHandles_Statics::HeroWeapon_eventGetGrantedAbilitySpecHandles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroWeapon_GetGrantedAbilitySpecHandles_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHeroWeapon_GetGrantedAbilitySpecHandles_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AHeroWeapon_GetGrantedAbilitySpecHandles_Statics::HeroWeapon_eventGetGrantedAbilitySpecHandles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHeroWeapon_GetGrantedAbilitySpecHandles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeroWeapon_GetGrantedAbilitySpecHandles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHeroWeapon::execGetGrantedAbilitySpecHandles)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FGameplayAbilitySpecHandle>*)Z_Param__Result=P_THIS->GetGrantedAbilitySpecHandles();
	P_NATIVE_END;
}
// ********** End Class AHeroWeapon Function GetGrantedAbilitySpecHandles **************************

// ********** Begin Class AHeroWeapon **************************************************************
void AHeroWeapon::StaticRegisterNativesAHeroWeapon()
{
	UClass* Class = AHeroWeapon::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AssignGrantedAbilitySpecHandles", &AHeroWeapon::execAssignGrantedAbilitySpecHandles },
		{ "GetGrantedAbilitySpecHandles", &AHeroWeapon::execGetGrantedAbilitySpecHandles },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeroWeaponData_MetaData[] = {
		{ "Category", "WeaponData" },
		{ "ModuleRelativePath", "Public/Items/Weapons/HeroWeapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HeroWeaponData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AHeroWeapon_AssignGrantedAbilitySpecHandles, "AssignGrantedAbilitySpecHandles" }, // 1740658618
		{ &Z_Construct_UFunction_AHeroWeapon_GetGrantedAbilitySpecHandles, "GetGrantedAbilitySpecHandles" }, // 4162598938
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHeroWeapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHeroWeapon_Statics::NewProp_HeroWeaponData = { "HeroWeaponData", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroWeapon, HeroWeaponData), Z_Construct_UScriptStruct_FHeroWeaponData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeroWeaponData_MetaData), NewProp_HeroWeaponData_MetaData) }; // 2310577635
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHeroWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroWeapon_Statics::NewProp_HeroWeaponData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHeroWeapon_Statics::PropPointers) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_AHeroWeapon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AHeroWeapon_Statics::PropPointers),
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
		{ Z_Construct_UClass_AHeroWeapon, AHeroWeapon::StaticClass, TEXT("AHeroWeapon"), &Z_Registration_Info_UClass_AHeroWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHeroWeapon), 2281629676U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Items_Weapons_HeroWeapon_h__Script_TechnicalTest_327052055(TEXT("/Script/TechnicalTest"),
	Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Items_Weapons_HeroWeapon_h__Script_TechnicalTest_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Items_Weapons_HeroWeapon_h__Script_TechnicalTest_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
