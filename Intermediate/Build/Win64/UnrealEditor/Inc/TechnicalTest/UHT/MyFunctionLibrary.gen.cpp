// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "ScalableFloat.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMyFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
TECHNICALTEST_API UClass* Z_Construct_UClass_UMyFunctionLibrary();
TECHNICALTEST_API UClass* Z_Construct_UClass_UMyFunctionLibrary_NoRegister();
TECHNICALTEST_API UClass* Z_Construct_UClass_UPawnCombatComponent_NoRegister();
TECHNICALTEST_API UEnum* Z_Construct_UEnum_TechnicalTest_EMyConfirmType();
TECHNICALTEST_API UEnum* Z_Construct_UEnum_TechnicalTest_EMyValidType();
UPackage* Z_Construct_UPackage__Script_TechnicalTest();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMyFunctionLibrary Function AddGameplayTagToActorIfNone ******************
struct Z_Construct_UFunction_UMyFunctionLibrary_AddGameplayTagToActorIfNone_Statics
{
	struct MyFunctionLibrary_eventAddGameplayTagToActorIfNone_Parms
	{
		AActor* InActor;
		FGameplayTag TagToAdd;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FunctionLibrary" },
		{ "ModuleRelativePath", "Public/MyFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagToAdd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyFunctionLibrary_AddGameplayTagToActorIfNone_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyFunctionLibrary_eventAddGameplayTagToActorIfNone_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyFunctionLibrary_AddGameplayTagToActorIfNone_Statics::NewProp_TagToAdd = { "TagToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyFunctionLibrary_eventAddGameplayTagToActorIfNone_Parms, TagToAdd), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyFunctionLibrary_AddGameplayTagToActorIfNone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyFunctionLibrary_AddGameplayTagToActorIfNone_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyFunctionLibrary_AddGameplayTagToActorIfNone_Statics::NewProp_TagToAdd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyFunctionLibrary_AddGameplayTagToActorIfNone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyFunctionLibrary_AddGameplayTagToActorIfNone_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMyFunctionLibrary, nullptr, "AddGameplayTagToActorIfNone", Z_Construct_UFunction_UMyFunctionLibrary_AddGameplayTagToActorIfNone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyFunctionLibrary_AddGameplayTagToActorIfNone_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyFunctionLibrary_AddGameplayTagToActorIfNone_Statics::MyFunctionLibrary_eventAddGameplayTagToActorIfNone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyFunctionLibrary_AddGameplayTagToActorIfNone_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyFunctionLibrary_AddGameplayTagToActorIfNone_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMyFunctionLibrary_AddGameplayTagToActorIfNone_Statics::MyFunctionLibrary_eventAddGameplayTagToActorIfNone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyFunctionLibrary_AddGameplayTagToActorIfNone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyFunctionLibrary_AddGameplayTagToActorIfNone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyFunctionLibrary::execAddGameplayTagToActorIfNone)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_GET_STRUCT(FGameplayTag,Z_Param_TagToAdd);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMyFunctionLibrary::AddGameplayTagToActorIfNone(Z_Param_InActor,Z_Param_TagToAdd);
	P_NATIVE_END;
}
// ********** End Class UMyFunctionLibrary Function AddGameplayTagToActorIfNone ********************

// ********** Begin Class UMyFunctionLibrary Function BP_DoesActorHaveTag **************************
struct Z_Construct_UFunction_UMyFunctionLibrary_BP_DoesActorHaveTag_Statics
{
	struct MyFunctionLibrary_eventBP_DoesActorHaveTag_Parms
	{
		AActor* InActor;
		FGameplayTag TagToCheck;
		EMyConfirmType OutConfirmType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FunctionLibrary" },
		{ "DisplayName", "Does Actor Have Tag" },
		{ "ExpandEnumAsExecs", "OutConfirmType" },
		{ "ModuleRelativePath", "Public/MyFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagToCheck;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutConfirmType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutConfirmType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyFunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyFunctionLibrary_eventBP_DoesActorHaveTag_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyFunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_TagToCheck = { "TagToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyFunctionLibrary_eventBP_DoesActorHaveTag_Parms, TagToCheck), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMyFunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_OutConfirmType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMyFunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_OutConfirmType = { "OutConfirmType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyFunctionLibrary_eventBP_DoesActorHaveTag_Parms, OutConfirmType), Z_Construct_UEnum_TechnicalTest_EMyConfirmType, METADATA_PARAMS(0, nullptr) }; // 3611171800
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyFunctionLibrary_BP_DoesActorHaveTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyFunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyFunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_TagToCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyFunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_OutConfirmType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyFunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_OutConfirmType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyFunctionLibrary_BP_DoesActorHaveTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyFunctionLibrary_BP_DoesActorHaveTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMyFunctionLibrary, nullptr, "BP_DoesActorHaveTag", Z_Construct_UFunction_UMyFunctionLibrary_BP_DoesActorHaveTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyFunctionLibrary_BP_DoesActorHaveTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyFunctionLibrary_BP_DoesActorHaveTag_Statics::MyFunctionLibrary_eventBP_DoesActorHaveTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyFunctionLibrary_BP_DoesActorHaveTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyFunctionLibrary_BP_DoesActorHaveTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMyFunctionLibrary_BP_DoesActorHaveTag_Statics::MyFunctionLibrary_eventBP_DoesActorHaveTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyFunctionLibrary_BP_DoesActorHaveTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyFunctionLibrary_BP_DoesActorHaveTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyFunctionLibrary::execBP_DoesActorHaveTag)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_GET_STRUCT(FGameplayTag,Z_Param_TagToCheck);
	P_GET_ENUM_REF(EMyConfirmType,Z_Param_Out_OutConfirmType);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMyFunctionLibrary::BP_DoesActorHaveTag(Z_Param_InActor,Z_Param_TagToCheck,(EMyConfirmType&)(Z_Param_Out_OutConfirmType));
	P_NATIVE_END;
}
// ********** End Class UMyFunctionLibrary Function BP_DoesActorHaveTag ****************************

// ********** Begin Class UMyFunctionLibrary Function BP_GetPawnCombatComponentFromActor ***********
struct Z_Construct_UFunction_UMyFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics
{
	struct MyFunctionLibrary_eventBP_GetPawnCombatComponentFromActor_Parms
	{
		AActor* InActor;
		EMyValidType OutValidType;
		UPawnCombatComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FunctionLibrary" },
		{ "DisplayName", "Get Pawn Combat Component From Actor" },
		{ "ExpandEnumAsExecs", "OutValidType" },
		{ "ModuleRelativePath", "Public/MyFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutValidType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutValidType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyFunctionLibrary_eventBP_GetPawnCombatComponentFromActor_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMyFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::NewProp_OutValidType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMyFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::NewProp_OutValidType = { "OutValidType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyFunctionLibrary_eventBP_GetPawnCombatComponentFromActor_Parms, OutValidType), Z_Construct_UEnum_TechnicalTest_EMyValidType, METADATA_PARAMS(0, nullptr) }; // 2629272181
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyFunctionLibrary_eventBP_GetPawnCombatComponentFromActor_Parms, ReturnValue), Z_Construct_UClass_UPawnCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::NewProp_OutValidType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::NewProp_OutValidType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMyFunctionLibrary, nullptr, "BP_GetPawnCombatComponentFromActor", Z_Construct_UFunction_UMyFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::MyFunctionLibrary_eventBP_GetPawnCombatComponentFromActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMyFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::MyFunctionLibrary_eventBP_GetPawnCombatComponentFromActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyFunctionLibrary_BP_GetPawnCombatComponentFromActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyFunctionLibrary::execBP_GetPawnCombatComponentFromActor)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_GET_ENUM_REF(EMyValidType,Z_Param_Out_OutValidType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPawnCombatComponent**)Z_Param__Result=UMyFunctionLibrary::BP_GetPawnCombatComponentFromActor(Z_Param_InActor,(EMyValidType&)(Z_Param_Out_OutValidType));
	P_NATIVE_END;
}
// ********** End Class UMyFunctionLibrary Function BP_GetPawnCombatComponentFromActor *************

// ********** Begin Class UMyFunctionLibrary Function ComputeHitReactDirectionTag ******************
struct Z_Construct_UFunction_UMyFunctionLibrary_ComputeHitReactDirectionTag_Statics
{
	struct MyFunctionLibrary_eventComputeHitReactDirectionTag_Parms
	{
		AActor* InAttacker;
		AActor* InVictim;
		float OutAngleDifference;
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FunctionLibrary" },
		{ "ModuleRelativePath", "Public/MyFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAttacker;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InVictim;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutAngleDifference;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyFunctionLibrary_ComputeHitReactDirectionTag_Statics::NewProp_InAttacker = { "InAttacker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyFunctionLibrary_eventComputeHitReactDirectionTag_Parms, InAttacker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyFunctionLibrary_ComputeHitReactDirectionTag_Statics::NewProp_InVictim = { "InVictim", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyFunctionLibrary_eventComputeHitReactDirectionTag_Parms, InVictim), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMyFunctionLibrary_ComputeHitReactDirectionTag_Statics::NewProp_OutAngleDifference = { "OutAngleDifference", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyFunctionLibrary_eventComputeHitReactDirectionTag_Parms, OutAngleDifference), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyFunctionLibrary_ComputeHitReactDirectionTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyFunctionLibrary_eventComputeHitReactDirectionTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyFunctionLibrary_ComputeHitReactDirectionTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyFunctionLibrary_ComputeHitReactDirectionTag_Statics::NewProp_InAttacker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyFunctionLibrary_ComputeHitReactDirectionTag_Statics::NewProp_InVictim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyFunctionLibrary_ComputeHitReactDirectionTag_Statics::NewProp_OutAngleDifference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyFunctionLibrary_ComputeHitReactDirectionTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyFunctionLibrary_ComputeHitReactDirectionTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyFunctionLibrary_ComputeHitReactDirectionTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMyFunctionLibrary, nullptr, "ComputeHitReactDirectionTag", Z_Construct_UFunction_UMyFunctionLibrary_ComputeHitReactDirectionTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyFunctionLibrary_ComputeHitReactDirectionTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyFunctionLibrary_ComputeHitReactDirectionTag_Statics::MyFunctionLibrary_eventComputeHitReactDirectionTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyFunctionLibrary_ComputeHitReactDirectionTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyFunctionLibrary_ComputeHitReactDirectionTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMyFunctionLibrary_ComputeHitReactDirectionTag_Statics::MyFunctionLibrary_eventComputeHitReactDirectionTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyFunctionLibrary_ComputeHitReactDirectionTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyFunctionLibrary_ComputeHitReactDirectionTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyFunctionLibrary::execComputeHitReactDirectionTag)
{
	P_GET_OBJECT(AActor,Z_Param_InAttacker);
	P_GET_OBJECT(AActor,Z_Param_InVictim);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutAngleDifference);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=UMyFunctionLibrary::ComputeHitReactDirectionTag(Z_Param_InAttacker,Z_Param_InVictim,Z_Param_Out_OutAngleDifference);
	P_NATIVE_END;
}
// ********** End Class UMyFunctionLibrary Function ComputeHitReactDirectionTag ********************

// ********** Begin Class UMyFunctionLibrary Function GetScalableFloatValueAtLevel *****************
struct Z_Construct_UFunction_UMyFunctionLibrary_GetScalableFloatValueAtLevel_Statics
{
	struct MyFunctionLibrary_eventGetScalableFloatValueAtLevel_Parms
	{
		FScalableFloat InScalableFloat;
		float InLevel;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FunctionLibrary" },
		{ "CompactNodeTitle", "Get Value At Level" },
		{ "CPP_Default_InLevel", "1.000000" },
		{ "ModuleRelativePath", "Public/MyFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InScalableFloat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InScalableFloat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyFunctionLibrary_GetScalableFloatValueAtLevel_Statics::NewProp_InScalableFloat = { "InScalableFloat", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyFunctionLibrary_eventGetScalableFloatValueAtLevel_Parms, InScalableFloat), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InScalableFloat_MetaData), NewProp_InScalableFloat_MetaData) }; // 3660911330
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMyFunctionLibrary_GetScalableFloatValueAtLevel_Statics::NewProp_InLevel = { "InLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyFunctionLibrary_eventGetScalableFloatValueAtLevel_Parms, InLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMyFunctionLibrary_GetScalableFloatValueAtLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyFunctionLibrary_eventGetScalableFloatValueAtLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyFunctionLibrary_GetScalableFloatValueAtLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyFunctionLibrary_GetScalableFloatValueAtLevel_Statics::NewProp_InScalableFloat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyFunctionLibrary_GetScalableFloatValueAtLevel_Statics::NewProp_InLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyFunctionLibrary_GetScalableFloatValueAtLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyFunctionLibrary_GetScalableFloatValueAtLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyFunctionLibrary_GetScalableFloatValueAtLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMyFunctionLibrary, nullptr, "GetScalableFloatValueAtLevel", Z_Construct_UFunction_UMyFunctionLibrary_GetScalableFloatValueAtLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyFunctionLibrary_GetScalableFloatValueAtLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyFunctionLibrary_GetScalableFloatValueAtLevel_Statics::MyFunctionLibrary_eventGetScalableFloatValueAtLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyFunctionLibrary_GetScalableFloatValueAtLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyFunctionLibrary_GetScalableFloatValueAtLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMyFunctionLibrary_GetScalableFloatValueAtLevel_Statics::MyFunctionLibrary_eventGetScalableFloatValueAtLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyFunctionLibrary_GetScalableFloatValueAtLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyFunctionLibrary_GetScalableFloatValueAtLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyFunctionLibrary::execGetScalableFloatValueAtLevel)
{
	P_GET_STRUCT_REF(FScalableFloat,Z_Param_Out_InScalableFloat);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UMyFunctionLibrary::GetScalableFloatValueAtLevel(Z_Param_Out_InScalableFloat,Z_Param_InLevel);
	P_NATIVE_END;
}
// ********** End Class UMyFunctionLibrary Function GetScalableFloatValueAtLevel *******************

// ********** Begin Class UMyFunctionLibrary Function IsTargetPawnHostile **************************
struct Z_Construct_UFunction_UMyFunctionLibrary_IsTargetPawnHostile_Statics
{
	struct MyFunctionLibrary_eventIsTargetPawnHostile_Parms
	{
		APawn* QueryPawn;
		APawn* TargetPawn;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FunctionLibrary" },
		{ "ModuleRelativePath", "Public/MyFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QueryPawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetPawn;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyFunctionLibrary_IsTargetPawnHostile_Statics::NewProp_QueryPawn = { "QueryPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyFunctionLibrary_eventIsTargetPawnHostile_Parms, QueryPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyFunctionLibrary_IsTargetPawnHostile_Statics::NewProp_TargetPawn = { "TargetPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyFunctionLibrary_eventIsTargetPawnHostile_Parms, TargetPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMyFunctionLibrary_IsTargetPawnHostile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MyFunctionLibrary_eventIsTargetPawnHostile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMyFunctionLibrary_IsTargetPawnHostile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MyFunctionLibrary_eventIsTargetPawnHostile_Parms), &Z_Construct_UFunction_UMyFunctionLibrary_IsTargetPawnHostile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyFunctionLibrary_IsTargetPawnHostile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyFunctionLibrary_IsTargetPawnHostile_Statics::NewProp_QueryPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyFunctionLibrary_IsTargetPawnHostile_Statics::NewProp_TargetPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyFunctionLibrary_IsTargetPawnHostile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyFunctionLibrary_IsTargetPawnHostile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyFunctionLibrary_IsTargetPawnHostile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMyFunctionLibrary, nullptr, "IsTargetPawnHostile", Z_Construct_UFunction_UMyFunctionLibrary_IsTargetPawnHostile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyFunctionLibrary_IsTargetPawnHostile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyFunctionLibrary_IsTargetPawnHostile_Statics::MyFunctionLibrary_eventIsTargetPawnHostile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyFunctionLibrary_IsTargetPawnHostile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyFunctionLibrary_IsTargetPawnHostile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMyFunctionLibrary_IsTargetPawnHostile_Statics::MyFunctionLibrary_eventIsTargetPawnHostile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyFunctionLibrary_IsTargetPawnHostile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyFunctionLibrary_IsTargetPawnHostile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyFunctionLibrary::execIsTargetPawnHostile)
{
	P_GET_OBJECT(APawn,Z_Param_QueryPawn);
	P_GET_OBJECT(APawn,Z_Param_TargetPawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMyFunctionLibrary::IsTargetPawnHostile(Z_Param_QueryPawn,Z_Param_TargetPawn);
	P_NATIVE_END;
}
// ********** End Class UMyFunctionLibrary Function IsTargetPawnHostile ****************************

// ********** Begin Class UMyFunctionLibrary Function IsValidBlock *********************************
struct Z_Construct_UFunction_UMyFunctionLibrary_IsValidBlock_Statics
{
	struct MyFunctionLibrary_eventIsValidBlock_Parms
	{
		AActor* InAttacker;
		AActor* InDefender;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FunctionLibrary" },
		{ "ModuleRelativePath", "Public/MyFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAttacker;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InDefender;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyFunctionLibrary_IsValidBlock_Statics::NewProp_InAttacker = { "InAttacker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyFunctionLibrary_eventIsValidBlock_Parms, InAttacker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyFunctionLibrary_IsValidBlock_Statics::NewProp_InDefender = { "InDefender", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyFunctionLibrary_eventIsValidBlock_Parms, InDefender), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMyFunctionLibrary_IsValidBlock_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MyFunctionLibrary_eventIsValidBlock_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMyFunctionLibrary_IsValidBlock_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MyFunctionLibrary_eventIsValidBlock_Parms), &Z_Construct_UFunction_UMyFunctionLibrary_IsValidBlock_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyFunctionLibrary_IsValidBlock_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyFunctionLibrary_IsValidBlock_Statics::NewProp_InAttacker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyFunctionLibrary_IsValidBlock_Statics::NewProp_InDefender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyFunctionLibrary_IsValidBlock_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyFunctionLibrary_IsValidBlock_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyFunctionLibrary_IsValidBlock_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMyFunctionLibrary, nullptr, "IsValidBlock", Z_Construct_UFunction_UMyFunctionLibrary_IsValidBlock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyFunctionLibrary_IsValidBlock_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyFunctionLibrary_IsValidBlock_Statics::MyFunctionLibrary_eventIsValidBlock_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyFunctionLibrary_IsValidBlock_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyFunctionLibrary_IsValidBlock_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMyFunctionLibrary_IsValidBlock_Statics::MyFunctionLibrary_eventIsValidBlock_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyFunctionLibrary_IsValidBlock()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyFunctionLibrary_IsValidBlock_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyFunctionLibrary::execIsValidBlock)
{
	P_GET_OBJECT(AActor,Z_Param_InAttacker);
	P_GET_OBJECT(AActor,Z_Param_InDefender);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMyFunctionLibrary::IsValidBlock(Z_Param_InAttacker,Z_Param_InDefender);
	P_NATIVE_END;
}
// ********** End Class UMyFunctionLibrary Function IsValidBlock ***********************************

// ********** Begin Class UMyFunctionLibrary Function RemoveGameplayTagFromActorIfFound ************
struct Z_Construct_UFunction_UMyFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics
{
	struct MyFunctionLibrary_eventRemoveGameplayTagFromActorIfFound_Parms
	{
		AActor* InActor;
		FGameplayTag TagToRemove;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FunctionLibrary" },
		{ "ModuleRelativePath", "Public/MyFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagToRemove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyFunctionLibrary_eventRemoveGameplayTagFromActorIfFound_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::NewProp_TagToRemove = { "TagToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyFunctionLibrary_eventRemoveGameplayTagFromActorIfFound_Parms, TagToRemove), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::NewProp_TagToRemove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMyFunctionLibrary, nullptr, "RemoveGameplayTagFromActorIfFound", Z_Construct_UFunction_UMyFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::MyFunctionLibrary_eventRemoveGameplayTagFromActorIfFound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMyFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::MyFunctionLibrary_eventRemoveGameplayTagFromActorIfFound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyFunctionLibrary_RemoveGameplayTagFromActorIfFound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyFunctionLibrary::execRemoveGameplayTagFromActorIfFound)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_GET_STRUCT(FGameplayTag,Z_Param_TagToRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMyFunctionLibrary::RemoveGameplayTagFromActorIfFound(Z_Param_InActor,Z_Param_TagToRemove);
	P_NATIVE_END;
}
// ********** End Class UMyFunctionLibrary Function RemoveGameplayTagFromActorIfFound **************

// ********** Begin Class UMyFunctionLibrary *******************************************************
void UMyFunctionLibrary::StaticRegisterNativesUMyFunctionLibrary()
{
	UClass* Class = UMyFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddGameplayTagToActorIfNone", &UMyFunctionLibrary::execAddGameplayTagToActorIfNone },
		{ "BP_DoesActorHaveTag", &UMyFunctionLibrary::execBP_DoesActorHaveTag },
		{ "BP_GetPawnCombatComponentFromActor", &UMyFunctionLibrary::execBP_GetPawnCombatComponentFromActor },
		{ "ComputeHitReactDirectionTag", &UMyFunctionLibrary::execComputeHitReactDirectionTag },
		{ "GetScalableFloatValueAtLevel", &UMyFunctionLibrary::execGetScalableFloatValueAtLevel },
		{ "IsTargetPawnHostile", &UMyFunctionLibrary::execIsTargetPawnHostile },
		{ "IsValidBlock", &UMyFunctionLibrary::execIsValidBlock },
		{ "RemoveGameplayTagFromActorIfFound", &UMyFunctionLibrary::execRemoveGameplayTagFromActorIfFound },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMyFunctionLibrary;
UClass* UMyFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UMyFunctionLibrary;
	if (!Z_Registration_Info_UClass_UMyFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MyFunctionLibrary"),
			Z_Registration_Info_UClass_UMyFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUMyFunctionLibrary,
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
	return Z_Registration_Info_UClass_UMyFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UMyFunctionLibrary_NoRegister()
{
	return UMyFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMyFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/MyFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyFunctionLibrary_AddGameplayTagToActorIfNone, "AddGameplayTagToActorIfNone" }, // 3938812514
		{ &Z_Construct_UFunction_UMyFunctionLibrary_BP_DoesActorHaveTag, "BP_DoesActorHaveTag" }, // 2139985186
		{ &Z_Construct_UFunction_UMyFunctionLibrary_BP_GetPawnCombatComponentFromActor, "BP_GetPawnCombatComponentFromActor" }, // 1691332017
		{ &Z_Construct_UFunction_UMyFunctionLibrary_ComputeHitReactDirectionTag, "ComputeHitReactDirectionTag" }, // 3620727943
		{ &Z_Construct_UFunction_UMyFunctionLibrary_GetScalableFloatValueAtLevel, "GetScalableFloatValueAtLevel" }, // 4131164386
		{ &Z_Construct_UFunction_UMyFunctionLibrary_IsTargetPawnHostile, "IsTargetPawnHostile" }, // 652325874
		{ &Z_Construct_UFunction_UMyFunctionLibrary_IsValidBlock, "IsValidBlock" }, // 2340428307
		{ &Z_Construct_UFunction_UMyFunctionLibrary_RemoveGameplayTagFromActorIfFound, "RemoveGameplayTagFromActorIfFound" }, // 3439645245
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_TechnicalTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyFunctionLibrary_Statics::ClassParams = {
	&UMyFunctionLibrary::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UMyFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyFunctionLibrary.OuterSingleton, Z_Construct_UClass_UMyFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyFunctionLibrary.OuterSingleton;
}
UMyFunctionLibrary::UMyFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyFunctionLibrary);
UMyFunctionLibrary::~UMyFunctionLibrary() {}
// ********** End Class UMyFunctionLibrary *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_MyFunctionLibrary_h__Script_TechnicalTest_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyFunctionLibrary, UMyFunctionLibrary::StaticClass, TEXT("UMyFunctionLibrary"), &Z_Registration_Info_UClass_UMyFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyFunctionLibrary), 3458675862U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_MyFunctionLibrary_h__Script_TechnicalTest_3718942269(TEXT("/Script/TechnicalTest"),
	Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_MyFunctionLibrary_h__Script_TechnicalTest_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_MyFunctionLibrary_h__Script_TechnicalTest_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
