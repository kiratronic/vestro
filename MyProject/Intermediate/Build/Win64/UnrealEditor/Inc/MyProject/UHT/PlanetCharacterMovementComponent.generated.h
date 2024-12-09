// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlanetCharacterMovementComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_PlanetCharacterMovementComponent_generated_h
#error "PlanetCharacterMovementComponent.generated.h already included, missing '#pragma once' in PlanetCharacterMovementComponent.h"
#endif
#define MYPROJECT_PlanetCharacterMovementComponent_generated_h

#define FID_Users_kira_milkyway_Documents_GitHub_hydrogenbox_MyProject_Source_MyProject_PlanetCharacterMovementComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateGravityDirection);


#define FID_Users_kira_milkyway_Documents_GitHub_hydrogenbox_MyProject_Source_MyProject_PlanetCharacterMovementComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlanetCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UPlanetCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UPlanetCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(UPlanetCharacterMovementComponent)


#define FID_Users_kira_milkyway_Documents_GitHub_hydrogenbox_MyProject_Source_MyProject_PlanetCharacterMovementComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlanetCharacterMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlanetCharacterMovementComponent(UPlanetCharacterMovementComponent&&); \
	UPlanetCharacterMovementComponent(const UPlanetCharacterMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlanetCharacterMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlanetCharacterMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlanetCharacterMovementComponent) \
	NO_API virtual ~UPlanetCharacterMovementComponent();


#define FID_Users_kira_milkyway_Documents_GitHub_hydrogenbox_MyProject_Source_MyProject_PlanetCharacterMovementComponent_h_12_PROLOG
#define FID_Users_kira_milkyway_Documents_GitHub_hydrogenbox_MyProject_Source_MyProject_PlanetCharacterMovementComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_kira_milkyway_Documents_GitHub_hydrogenbox_MyProject_Source_MyProject_PlanetCharacterMovementComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_kira_milkyway_Documents_GitHub_hydrogenbox_MyProject_Source_MyProject_PlanetCharacterMovementComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_kira_milkyway_Documents_GitHub_hydrogenbox_MyProject_Source_MyProject_PlanetCharacterMovementComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class UPlanetCharacterMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_kira_milkyway_Documents_GitHub_hydrogenbox_MyProject_Source_MyProject_PlanetCharacterMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
