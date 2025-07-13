// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdPersonShooter/Public/GameMode/ThirdPersonShooterGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThirdPersonShooterGameModeBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_AThirdPersonShooterGameModeBase();
THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_AThirdPersonShooterGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_ThirdPersonShooter();
// End Cross Module References

// Begin Class AThirdPersonShooterGameModeBase
void AThirdPersonShooterGameModeBase::StaticRegisterNativesAThirdPersonShooterGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThirdPersonShooterGameModeBase);
UClass* Z_Construct_UClass_AThirdPersonShooterGameModeBase_NoRegister()
{
	return AThirdPersonShooterGameModeBase::StaticClass();
}
struct Z_Construct_UClass_AThirdPersonShooterGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameMode/ThirdPersonShooterGameModeBase.h" },
		{ "ModuleRelativePath", "Public/GameMode/ThirdPersonShooterGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThirdPersonShooterGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AThirdPersonShooterGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ThirdPersonShooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonShooterGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AThirdPersonShooterGameModeBase_Statics::ClassParams = {
	&AThirdPersonShooterGameModeBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonShooterGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AThirdPersonShooterGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AThirdPersonShooterGameModeBase()
{
	if (!Z_Registration_Info_UClass_AThirdPersonShooterGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThirdPersonShooterGameModeBase.OuterSingleton, Z_Construct_UClass_AThirdPersonShooterGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AThirdPersonShooterGameModeBase.OuterSingleton;
}
template<> THIRDPERSONSHOOTER_API UClass* StaticClass<AThirdPersonShooterGameModeBase>()
{
	return AThirdPersonShooterGameModeBase::StaticClass();
}
AThirdPersonShooterGameModeBase::AThirdPersonShooterGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AThirdPersonShooterGameModeBase);
AThirdPersonShooterGameModeBase::~AThirdPersonShooterGameModeBase() {}
// End Class AThirdPersonShooterGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_ThirdPersonShooter_Source_ThirdPersonShooter_Public_GameMode_ThirdPersonShooterGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AThirdPersonShooterGameModeBase, AThirdPersonShooterGameModeBase::StaticClass, TEXT("AThirdPersonShooterGameModeBase"), &Z_Registration_Info_UClass_AThirdPersonShooterGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThirdPersonShooterGameModeBase), 2563071221U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_ThirdPersonShooter_Source_ThirdPersonShooter_Public_GameMode_ThirdPersonShooterGameModeBase_h_871533544(TEXT("/Script/ThirdPersonShooter"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_ThirdPersonShooter_Source_ThirdPersonShooter_Public_GameMode_ThirdPersonShooterGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_ThirdPersonShooter_Source_ThirdPersonShooter_Public_GameMode_ThirdPersonShooterGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
