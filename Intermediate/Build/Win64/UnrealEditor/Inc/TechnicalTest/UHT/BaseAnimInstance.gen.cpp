// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimInstances/BaseAnimInstance.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBaseAnimInstance() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
TECHNICALTEST_API UClass* Z_Construct_UClass_UBaseAnimInstance();
TECHNICALTEST_API UClass* Z_Construct_UClass_UBaseAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_TechnicalTest();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBaseAnimInstance Function DoesOwnerHaveTag ******************************
struct Z_Construct_UFunction_UBaseAnimInstance_DoesOwnerHaveTag_Statics
{
	struct BaseAnimInstance_eventDoesOwnerHaveTag_Parms
	{
		FGameplayTag TagToCheck;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "ModuleRelativePath", "Public/AnimInstances/BaseAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagToCheck;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAnimInstance_DoesOwnerHaveTag_Statics::NewProp_TagToCheck = { "TagToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAnimInstance_eventDoesOwnerHaveTag_Parms, TagToCheck), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
void Z_Construct_UFunction_UBaseAnimInstance_DoesOwnerHaveTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BaseAnimInstance_eventDoesOwnerHaveTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseAnimInstance_DoesOwnerHaveTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseAnimInstance_eventDoesOwnerHaveTag_Parms), &Z_Construct_UFunction_UBaseAnimInstance_DoesOwnerHaveTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAnimInstance_DoesOwnerHaveTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAnimInstance_DoesOwnerHaveTag_Statics::NewProp_TagToCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAnimInstance_DoesOwnerHaveTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAnimInstance_DoesOwnerHaveTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAnimInstance_DoesOwnerHaveTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseAnimInstance, nullptr, "DoesOwnerHaveTag", Z_Construct_UFunction_UBaseAnimInstance_DoesOwnerHaveTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAnimInstance_DoesOwnerHaveTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseAnimInstance_DoesOwnerHaveTag_Statics::BaseAnimInstance_eventDoesOwnerHaveTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAnimInstance_DoesOwnerHaveTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseAnimInstance_DoesOwnerHaveTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBaseAnimInstance_DoesOwnerHaveTag_Statics::BaseAnimInstance_eventDoesOwnerHaveTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseAnimInstance_DoesOwnerHaveTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseAnimInstance_DoesOwnerHaveTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseAnimInstance::execDoesOwnerHaveTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_TagToCheck);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DoesOwnerHaveTag(Z_Param_TagToCheck);
	P_NATIVE_END;
}
// ********** End Class UBaseAnimInstance Function DoesOwnerHaveTag ********************************

// ********** Begin Class UBaseAnimInstance ********************************************************
void UBaseAnimInstance::StaticRegisterNativesUBaseAnimInstance()
{
	UClass* Class = UBaseAnimInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DoesOwnerHaveTag", &UBaseAnimInstance::execDoesOwnerHaveTag },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBaseAnimInstance;
UClass* UBaseAnimInstance::GetPrivateStaticClass()
{
	using TClass = UBaseAnimInstance;
	if (!Z_Registration_Info_UClass_UBaseAnimInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BaseAnimInstance"),
			Z_Registration_Info_UClass_UBaseAnimInstance.InnerSingleton,
			StaticRegisterNativesUBaseAnimInstance,
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
	return Z_Registration_Info_UClass_UBaseAnimInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UBaseAnimInstance_NoRegister()
{
	return UBaseAnimInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBaseAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimInstances/BaseAnimInstance.h" },
		{ "ModuleRelativePath", "Public/AnimInstances/BaseAnimInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseAnimInstance_DoesOwnerHaveTag, "DoesOwnerHaveTag" }, // 3136232027
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBaseAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_TechnicalTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseAnimInstance_Statics::ClassParams = {
	&UBaseAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseAnimInstance()
{
	if (!Z_Registration_Info_UClass_UBaseAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseAnimInstance.OuterSingleton, Z_Construct_UClass_UBaseAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseAnimInstance.OuterSingleton;
}
UBaseAnimInstance::UBaseAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseAnimInstance);
UBaseAnimInstance::~UBaseAnimInstance() {}
// ********** End Class UBaseAnimInstance **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AnimInstances_BaseAnimInstance_h__Script_TechnicalTest_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseAnimInstance, UBaseAnimInstance::StaticClass, TEXT("UBaseAnimInstance"), &Z_Registration_Info_UClass_UBaseAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseAnimInstance), 3249355814U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AnimInstances_BaseAnimInstance_h__Script_TechnicalTest_364653818(TEXT("/Script/TechnicalTest"),
	Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AnimInstances_BaseAnimInstance_h__Script_TechnicalTest_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_AnimInstances_BaseAnimInstance_h__Script_TechnicalTest_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
