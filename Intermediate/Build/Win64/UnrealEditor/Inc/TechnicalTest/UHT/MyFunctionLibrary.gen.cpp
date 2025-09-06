// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyFunctionLibrary.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMyFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
TECHNICALTEST_API UClass* Z_Construct_UClass_UMyFunctionLibrary();
TECHNICALTEST_API UClass* Z_Construct_UClass_UMyFunctionLibrary_NoRegister();
TECHNICALTEST_API UEnum* Z_Construct_UEnum_TechnicalTest_EMyConfirmType();
UPackage* Z_Construct_UPackage__Script_TechnicalTest();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EMyConfirmType ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMyConfirmType;
static UEnum* EMyConfirmType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMyConfirmType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMyConfirmType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TechnicalTest_EMyConfirmType, (UObject*)Z_Construct_UPackage__Script_TechnicalTest(), TEXT("EMyConfirmType"));
	}
	return Z_Registration_Info_UEnum_EMyConfirmType.OuterSingleton;
}
template<> TECHNICALTEST_API UEnum* StaticEnum<EMyConfirmType>()
{
	return EMyConfirmType_StaticEnum();
}
struct Z_Construct_UEnum_TechnicalTest_EMyConfirmType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyFunctionLibrary.h" },
		{ "No.Name", "EMyConfirmType::No" },
		{ "Yes.Name", "EMyConfirmType::Yes" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMyConfirmType::Yes", (int64)EMyConfirmType::Yes },
		{ "EMyConfirmType::No", (int64)EMyConfirmType::No },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TechnicalTest_EMyConfirmType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TechnicalTest,
	nullptr,
	"EMyConfirmType",
	"EMyConfirmType",
	Z_Construct_UEnum_TechnicalTest_EMyConfirmType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TechnicalTest_EMyConfirmType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TechnicalTest_EMyConfirmType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TechnicalTest_EMyConfirmType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TechnicalTest_EMyConfirmType()
{
	if (!Z_Registration_Info_UEnum_EMyConfirmType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMyConfirmType.InnerSingleton, Z_Construct_UEnum_TechnicalTest_EMyConfirmType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMyConfirmType.InnerSingleton;
}
// ********** End Enum EMyConfirmType **************************************************************

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
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMyFunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_OutConfirmType = { "OutConfirmType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyFunctionLibrary_eventBP_DoesActorHaveTag_Parms, OutConfirmType), Z_Construct_UEnum_TechnicalTest_EMyConfirmType, METADATA_PARAMS(0, nullptr) }; // 995459937
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

// ********** Begin Class UMyFunctionLibrary Function RemoveGameplayFromActorIfFound ***************
struct Z_Construct_UFunction_UMyFunctionLibrary_RemoveGameplayFromActorIfFound_Statics
{
	struct MyFunctionLibrary_eventRemoveGameplayFromActorIfFound_Parms
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyFunctionLibrary_RemoveGameplayFromActorIfFound_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyFunctionLibrary_eventRemoveGameplayFromActorIfFound_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyFunctionLibrary_RemoveGameplayFromActorIfFound_Statics::NewProp_TagToRemove = { "TagToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyFunctionLibrary_eventRemoveGameplayFromActorIfFound_Parms, TagToRemove), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyFunctionLibrary_RemoveGameplayFromActorIfFound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyFunctionLibrary_RemoveGameplayFromActorIfFound_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyFunctionLibrary_RemoveGameplayFromActorIfFound_Statics::NewProp_TagToRemove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyFunctionLibrary_RemoveGameplayFromActorIfFound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyFunctionLibrary_RemoveGameplayFromActorIfFound_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMyFunctionLibrary, nullptr, "RemoveGameplayFromActorIfFound", Z_Construct_UFunction_UMyFunctionLibrary_RemoveGameplayFromActorIfFound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyFunctionLibrary_RemoveGameplayFromActorIfFound_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyFunctionLibrary_RemoveGameplayFromActorIfFound_Statics::MyFunctionLibrary_eventRemoveGameplayFromActorIfFound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyFunctionLibrary_RemoveGameplayFromActorIfFound_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyFunctionLibrary_RemoveGameplayFromActorIfFound_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMyFunctionLibrary_RemoveGameplayFromActorIfFound_Statics::MyFunctionLibrary_eventRemoveGameplayFromActorIfFound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyFunctionLibrary_RemoveGameplayFromActorIfFound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyFunctionLibrary_RemoveGameplayFromActorIfFound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyFunctionLibrary::execRemoveGameplayFromActorIfFound)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_GET_STRUCT(FGameplayTag,Z_Param_TagToRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMyFunctionLibrary::RemoveGameplayFromActorIfFound(Z_Param_InActor,Z_Param_TagToRemove);
	P_NATIVE_END;
}
// ********** End Class UMyFunctionLibrary Function RemoveGameplayFromActorIfFound *****************

// ********** Begin Class UMyFunctionLibrary *******************************************************
void UMyFunctionLibrary::StaticRegisterNativesUMyFunctionLibrary()
{
	UClass* Class = UMyFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddGameplayTagToActorIfNone", &UMyFunctionLibrary::execAddGameplayTagToActorIfNone },
		{ "BP_DoesActorHaveTag", &UMyFunctionLibrary::execBP_DoesActorHaveTag },
		{ "RemoveGameplayFromActorIfFound", &UMyFunctionLibrary::execRemoveGameplayFromActorIfFound },
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
		{ &Z_Construct_UFunction_UMyFunctionLibrary_BP_DoesActorHaveTag, "BP_DoesActorHaveTag" }, // 354212860
		{ &Z_Construct_UFunction_UMyFunctionLibrary_RemoveGameplayFromActorIfFound, "RemoveGameplayFromActorIfFound" }, // 3271484963
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
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMyConfirmType_StaticEnum, TEXT("EMyConfirmType"), &Z_Registration_Info_UEnum_EMyConfirmType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 995459937U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyFunctionLibrary, UMyFunctionLibrary::StaticClass, TEXT("UMyFunctionLibrary"), &Z_Registration_Info_UClass_UMyFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyFunctionLibrary), 2185668179U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_MyFunctionLibrary_h__Script_TechnicalTest_2570809566(TEXT("/Script/TechnicalTest"),
	Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_MyFunctionLibrary_h__Script_TechnicalTest_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_MyFunctionLibrary_h__Script_TechnicalTest_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_MyFunctionLibrary_h__Script_TechnicalTest_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_MyFunctionLibrary_h__Script_TechnicalTest_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
