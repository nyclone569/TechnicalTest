// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyTypes/MyEnumTypes.h"

#ifdef TECHNICALTEST_MyEnumTypes_generated_h
#error "MyEnumTypes.generated.h already included, missing '#pragma once' in MyEnumTypes.h"
#endif
#define TECHNICALTEST_MyEnumTypes_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_MyTypes_MyEnumTypes_h

// ********** Begin Enum EMyConfirmType ************************************************************
#define FOREACH_ENUM_EMYCONFIRMTYPE(op) \
	op(EMyConfirmType::Yes) \
	op(EMyConfirmType::No) 

enum class EMyConfirmType : uint8;
template<> struct TIsUEnumClass<EMyConfirmType> { enum { Value = true }; };
template<> TECHNICALTEST_API UEnum* StaticEnum<EMyConfirmType>();
// ********** End Enum EMyConfirmType **************************************************************

// ********** Begin Enum EMyValidType **************************************************************
#define FOREACH_ENUM_EMYVALIDTYPE(op) \
	op(EMyValidType::Valid) \
	op(EMyValidType::Invalid) 

enum class EMyValidType : uint8;
template<> struct TIsUEnumClass<EMyValidType> { enum { Value = true }; };
template<> TECHNICALTEST_API UEnum* StaticEnum<EMyValidType>();
// ********** End Enum EMyValidType ****************************************************************

// ********** Begin Enum EMySuccessType ************************************************************
#define FOREACH_ENUM_EMYSUCCESSTYPE(op) \
	op(EMySuccessType::Successful) \
	op(EMySuccessType::Failed) 

enum class EMySuccessType : uint8;
template<> struct TIsUEnumClass<EMySuccessType> { enum { Value = true }; };
template<> TECHNICALTEST_API UEnum* StaticEnum<EMySuccessType>();
// ********** End Enum EMySuccessType **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
