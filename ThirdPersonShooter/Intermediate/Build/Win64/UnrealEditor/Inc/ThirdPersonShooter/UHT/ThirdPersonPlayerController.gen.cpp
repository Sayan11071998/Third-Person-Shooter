// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdPersonShooter/Public/Controller/ThirdPersonPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThirdPersonPlayerController() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_AThirdPersonPlayerController();
THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_AThirdPersonPlayerController_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ThirdPersonShooter();
// End Cross Module References

// Begin Class AThirdPersonPlayerController
void AThirdPersonPlayerController::StaticRegisterNativesAThirdPersonPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThirdPersonPlayerController);
UClass* Z_Construct_UClass_AThirdPersonPlayerController_NoRegister()
{
	return AThirdPersonPlayerController::StaticClass();
}
struct Z_Construct_UClass_AThirdPersonPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Controller/ThirdPersonPlayerController.h" },
		{ "ModuleRelativePath", "Public/Controller/ThirdPersonPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUDClass_MetaData[] = {
		{ "Category", "ThirdPersonPlayerController" },
		{ "ModuleRelativePath", "Public/Controller/ThirdPersonPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WinScreenClass_MetaData[] = {
		{ "Category", "ThirdPersonPlayerController" },
		{ "ModuleRelativePath", "Public/Controller/ThirdPersonPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoseScreenClass_MetaData[] = {
		{ "Category", "ThirdPersonPlayerController" },
		{ "ModuleRelativePath", "Public/Controller/ThirdPersonPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RestartDelay_MetaData[] = {
		{ "Category", "ThirdPersonPlayerController" },
		{ "ModuleRelativePath", "Public/Controller/ThirdPersonPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_HUDClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WinScreenClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_LoseScreenClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RestartDelay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThirdPersonPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AThirdPersonPlayerController_Statics::NewProp_HUDClass = { "HUDClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdPersonPlayerController, HUDClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUDClass_MetaData), NewProp_HUDClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AThirdPersonPlayerController_Statics::NewProp_WinScreenClass = { "WinScreenClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdPersonPlayerController, WinScreenClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WinScreenClass_MetaData), NewProp_WinScreenClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AThirdPersonPlayerController_Statics::NewProp_LoseScreenClass = { "LoseScreenClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdPersonPlayerController, LoseScreenClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoseScreenClass_MetaData), NewProp_LoseScreenClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThirdPersonPlayerController_Statics::NewProp_RestartDelay = { "RestartDelay", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdPersonPlayerController, RestartDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RestartDelay_MetaData), NewProp_RestartDelay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThirdPersonPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonPlayerController_Statics::NewProp_HUDClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonPlayerController_Statics::NewProp_WinScreenClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonPlayerController_Statics::NewProp_LoseScreenClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonPlayerController_Statics::NewProp_RestartDelay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AThirdPersonPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_ThirdPersonShooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AThirdPersonPlayerController_Statics::ClassParams = {
	&AThirdPersonPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AThirdPersonPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AThirdPersonPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AThirdPersonPlayerController()
{
	if (!Z_Registration_Info_UClass_AThirdPersonPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThirdPersonPlayerController.OuterSingleton, Z_Construct_UClass_AThirdPersonPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AThirdPersonPlayerController.OuterSingleton;
}
template<> THIRDPERSONSHOOTER_API UClass* StaticClass<AThirdPersonPlayerController>()
{
	return AThirdPersonPlayerController::StaticClass();
}
AThirdPersonPlayerController::AThirdPersonPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AThirdPersonPlayerController);
AThirdPersonPlayerController::~AThirdPersonPlayerController() {}
// End Class AThirdPersonPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_ThirdPersonShooter_Source_ThirdPersonShooter_Public_Controller_ThirdPersonPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AThirdPersonPlayerController, AThirdPersonPlayerController::StaticClass, TEXT("AThirdPersonPlayerController"), &Z_Registration_Info_UClass_AThirdPersonPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThirdPersonPlayerController), 2835416829U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_ThirdPersonShooter_Source_ThirdPersonShooter_Public_Controller_ThirdPersonPlayerController_h_447813897(TEXT("/Script/ThirdPersonShooter"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_ThirdPersonShooter_Source_ThirdPersonShooter_Public_Controller_ThirdPersonPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_ThirdPersonShooter_Source_ThirdPersonShooter_Public_Controller_ThirdPersonPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
