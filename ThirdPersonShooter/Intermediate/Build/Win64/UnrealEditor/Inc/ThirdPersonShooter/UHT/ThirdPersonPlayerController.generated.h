// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Controller/ThirdPersonPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THIRDPERSONSHOOTER_ThirdPersonPlayerController_generated_h
#error "ThirdPersonPlayerController.generated.h already included, missing '#pragma once' in ThirdPersonPlayerController.h"
#endif
#define THIRDPERSONSHOOTER_ThirdPersonPlayerController_generated_h

#define FID_Users_sayan_Projects_ThirdPersonShooter_Source_ThirdPersonShooter_Public_Controller_ThirdPersonPlayerController_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAThirdPersonPlayerController(); \
	friend struct Z_Construct_UClass_AThirdPersonPlayerController_Statics; \
public: \
	DECLARE_CLASS(AThirdPersonPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ThirdPersonShooter"), NO_API) \
	DECLARE_SERIALIZER(AThirdPersonPlayerController)


#define FID_Users_sayan_Projects_ThirdPersonShooter_Source_ThirdPersonShooter_Public_Controller_ThirdPersonPlayerController_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AThirdPersonPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AThirdPersonPlayerController(AThirdPersonPlayerController&&); \
	AThirdPersonPlayerController(const AThirdPersonPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThirdPersonPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThirdPersonPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AThirdPersonPlayerController) \
	NO_API virtual ~AThirdPersonPlayerController();


#define FID_Users_sayan_Projects_ThirdPersonShooter_Source_ThirdPersonShooter_Public_Controller_ThirdPersonPlayerController_h_7_PROLOG
#define FID_Users_sayan_Projects_ThirdPersonShooter_Source_ThirdPersonShooter_Public_Controller_ThirdPersonPlayerController_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_sayan_Projects_ThirdPersonShooter_Source_ThirdPersonShooter_Public_Controller_ThirdPersonPlayerController_h_10_INCLASS_NO_PURE_DECLS \
	FID_Users_sayan_Projects_ThirdPersonShooter_Source_ThirdPersonShooter_Public_Controller_ThirdPersonPlayerController_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THIRDPERSONSHOOTER_API UClass* StaticClass<class AThirdPersonPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_sayan_Projects_ThirdPersonShooter_Source_ThirdPersonShooter_Public_Controller_ThirdPersonPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
