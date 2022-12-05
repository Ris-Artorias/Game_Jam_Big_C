// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGame_Jam_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Game_Jam;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Game_Jam()
	{
		if (!Z_Registration_Info_UPackage__Script_Game_Jam.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Game_Jam",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xBE0D059D,
				0xBD429A88,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Game_Jam.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Game_Jam.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Game_Jam(Z_Construct_UPackage__Script_Game_Jam, TEXT("/Script/Game_Jam"), Z_Registration_Info_UPackage__Script_Game_Jam, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xBE0D059D, 0xBD429A88));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
