// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/PawnUIInterface.h"

#ifdef TECHNICALTEST_PawnUIInterface_generated_h
#error "PawnUIInterface.generated.h already included, missing '#pragma once' in PawnUIInterface.h"
#endif
#define TECHNICALTEST_PawnUIInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UPawnUIInterface *****************************************************
TECHNICALTEST_API UClass* Z_Construct_UClass_UPawnUIInterface_NoRegister();

#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Interfaces_PawnUIInterface_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TECHNICALTEST_API UPawnUIInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPawnUIInterface(UPawnUIInterface&&) = delete; \
	UPawnUIInterface(const UPawnUIInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TECHNICALTEST_API, UPawnUIInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnUIInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnUIInterface) \
	virtual ~UPawnUIInterface() = default;


#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Interfaces_PawnUIInterface_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPawnUIInterface(); \
	friend struct Z_Construct_UClass_UPawnUIInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TECHNICALTEST_API UClass* Z_Construct_UClass_UPawnUIInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UPawnUIInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TechnicalTest"), Z_Construct_UClass_UPawnUIInterface_NoRegister) \
	DECLARE_SERIALIZER(UPawnUIInterface)


#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Interfaces_PawnUIInterface_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Interfaces_PawnUIInterface_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Interfaces_PawnUIInterface_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Interfaces_PawnUIInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPawnUIInterface() {} \
public: \
	typedef UPawnUIInterface UClassType; \
	typedef IPawnUIInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Interfaces_PawnUIInterface_h_14_PROLOG
#define FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Interfaces_PawnUIInterface_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Interfaces_PawnUIInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPawnUIInterface;

// ********** End Interface UPawnUIInterface *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Unreal_TechnicalTest_Source_TechnicalTest_Public_Interfaces_PawnUIInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
