// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTechnicalTest_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TechnicalTest;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TechnicalTest()
	{
		if (!Z_Registration_Info_UPackage__Script_TechnicalTest.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TechnicalTest",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x2C301F87,
				0x52003DAA,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TechnicalTest.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TechnicalTest.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TechnicalTest(Z_Construct_UPackage__Script_TechnicalTest, TEXT("/Script/TechnicalTest"), Z_Registration_Info_UPackage__Script_TechnicalTest, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x2C301F87, 0x52003DAA));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
