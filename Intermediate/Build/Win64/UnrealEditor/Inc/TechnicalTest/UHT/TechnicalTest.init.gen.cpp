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
				0xE4A8DF22,
				0x19387B7E,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TechnicalTest.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TechnicalTest.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TechnicalTest(Z_Construct_UPackage__Script_TechnicalTest, TEXT("/Script/TechnicalTest"), Z_Registration_Info_UPackage__Script_TechnicalTest, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE4A8DF22, 0x19387B7E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
