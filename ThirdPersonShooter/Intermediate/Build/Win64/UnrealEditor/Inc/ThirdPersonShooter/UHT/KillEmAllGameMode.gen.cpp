// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdPersonShooter/Public/GameMode/KillEmAllGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKillEmAllGameMode() {}

// Begin Cross Module References
THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_AKillEmAllGameMode();
THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_AKillEmAllGameMode_NoRegister();
THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_AThirdPersonShooterGameModeBase();
UPackage* Z_Construct_UPackage__Script_ThirdPersonShooter();
// End Cross Module References

// Begin Class AKillEmAllGameMode
void AKillEmAllGameMode::StaticRegisterNativesAKillEmAllGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AKillEmAllGameMode);
UClass* Z_Construct_UClass_AKillEmAllGameMode_NoRegister()
{
	return AKillEmAllGameMode::StaticClass();
}
struct Z_Construct_UClass_AKillEmAllGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameMode/KillEmAllGameMode.h" },
		{ "ModuleRelativePath", "Public/GameMode/KillEmAllGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKillEmAllGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AKillEmAllGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AThirdPersonShooterGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ThirdPersonShooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKillEmAllGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AKillEmAllGameMode_Statics::ClassParams = {
	&AKillEmAllGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKillEmAllGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AKillEmAllGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AKillEmAllGameMode()
{
	if (!Z_Registration_Info_UClass_AKillEmAllGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKillEmAllGameMode.OuterSingleton, Z_Construct_UClass_AKillEmAllGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AKillEmAllGameMode.OuterSingleton;
}
template<> THIRDPERSONSHOOTER_API UClass* StaticClass<AKillEmAllGameMode>()
{
	return AKillEmAllGameMode::StaticClass();
}
AKillEmAllGameMode::AKillEmAllGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AKillEmAllGameMode);
AKillEmAllGameMode::~AKillEmAllGameMode() {}
// End Class AKillEmAllGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_ThirdPersonShooter_Source_ThirdPersonShooter_Public_GameMode_KillEmAllGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AKillEmAllGameMode, AKillEmAllGameMode::StaticClass, TEXT("AKillEmAllGameMode"), &Z_Registration_Info_UClass_AKillEmAllGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKillEmAllGameMode), 3412288046U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_ThirdPersonShooter_Source_ThirdPersonShooter_Public_GameMode_KillEmAllGameMode_h_1290444743(TEXT("/Script/ThirdPersonShooter"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_ThirdPersonShooter_Source_ThirdPersonShooter_Public_GameMode_KillEmAllGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_ThirdPersonShooter_Source_ThirdPersonShooter_Public_GameMode_KillEmAllGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
