// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/PlanetCharacterMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlanetCharacterMovementComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
MYPROJECT_API UClass* Z_Construct_UClass_UPlanetCharacterMovementComponent();
MYPROJECT_API UClass* Z_Construct_UClass_UPlanetCharacterMovementComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References

// Begin Class UPlanetCharacterMovementComponent Function UpdateGravityDirection
struct Z_Construct_UFunction_UPlanetCharacterMovementComponent_UpdateGravityDirection_Statics
{
	struct PlanetCharacterMovementComponent_eventUpdateGravityDirection_Parms
	{
		FVector NewGravityDir;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlanetCharacterMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewGravityDir_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewGravityDir;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlanetCharacterMovementComponent_UpdateGravityDirection_Statics::NewProp_NewGravityDir = { "NewGravityDir", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanetCharacterMovementComponent_eventUpdateGravityDirection_Parms, NewGravityDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewGravityDir_MetaData), NewProp_NewGravityDir_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlanetCharacterMovementComponent_UpdateGravityDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanetCharacterMovementComponent_UpdateGravityDirection_Statics::NewProp_NewGravityDir,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanetCharacterMovementComponent_UpdateGravityDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlanetCharacterMovementComponent_UpdateGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlanetCharacterMovementComponent, nullptr, "UpdateGravityDirection", nullptr, nullptr, Z_Construct_UFunction_UPlanetCharacterMovementComponent_UpdateGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanetCharacterMovementComponent_UpdateGravityDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlanetCharacterMovementComponent_UpdateGravityDirection_Statics::PlanetCharacterMovementComponent_eventUpdateGravityDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanetCharacterMovementComponent_UpdateGravityDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlanetCharacterMovementComponent_UpdateGravityDirection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlanetCharacterMovementComponent_UpdateGravityDirection_Statics::PlanetCharacterMovementComponent_eventUpdateGravityDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlanetCharacterMovementComponent_UpdateGravityDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlanetCharacterMovementComponent_UpdateGravityDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlanetCharacterMovementComponent::execUpdateGravityDirection)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_NewGravityDir);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateGravityDirection(Z_Param_Out_NewGravityDir);
	P_NATIVE_END;
}
// End Class UPlanetCharacterMovementComponent Function UpdateGravityDirection

// Begin Class UPlanetCharacterMovementComponent
void UPlanetCharacterMovementComponent::StaticRegisterNativesUPlanetCharacterMovementComponent()
{
	UClass* Class = UPlanetCharacterMovementComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateGravityDirection", &UPlanetCharacterMovementComponent::execUpdateGravityDirection },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlanetCharacterMovementComponent);
UClass* Z_Construct_UClass_UPlanetCharacterMovementComponent_NoRegister()
{
	return UPlanetCharacterMovementComponent::StaticClass();
}
struct Z_Construct_UClass_UPlanetCharacterMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PlanetCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "PlanetCharacterMovementComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlanetCharacterMovementComponent_UpdateGravityDirection, "UpdateGravityDirection" }, // 849858233
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlanetCharacterMovementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlanetCharacterMovementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetCharacterMovementComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlanetCharacterMovementComponent_Statics::ClassParams = {
	&UPlanetCharacterMovementComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetCharacterMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlanetCharacterMovementComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlanetCharacterMovementComponent()
{
	if (!Z_Registration_Info_UClass_UPlanetCharacterMovementComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlanetCharacterMovementComponent.OuterSingleton, Z_Construct_UClass_UPlanetCharacterMovementComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlanetCharacterMovementComponent.OuterSingleton;
}
template<> MYPROJECT_API UClass* StaticClass<UPlanetCharacterMovementComponent>()
{
	return UPlanetCharacterMovementComponent::StaticClass();
}
UPlanetCharacterMovementComponent::UPlanetCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlanetCharacterMovementComponent);
UPlanetCharacterMovementComponent::~UPlanetCharacterMovementComponent() {}
// End Class UPlanetCharacterMovementComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_kira_milkyway_Documents_GitHub_hydrogenbox_MyProject_Source_MyProject_PlanetCharacterMovementComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlanetCharacterMovementComponent, UPlanetCharacterMovementComponent::StaticClass, TEXT("UPlanetCharacterMovementComponent"), &Z_Registration_Info_UClass_UPlanetCharacterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlanetCharacterMovementComponent), 1914450084U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kira_milkyway_Documents_GitHub_hydrogenbox_MyProject_Source_MyProject_PlanetCharacterMovementComponent_h_3042658898(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Users_kira_milkyway_Documents_GitHub_hydrogenbox_MyProject_Source_MyProject_PlanetCharacterMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kira_milkyway_Documents_GitHub_hydrogenbox_MyProject_Source_MyProject_PlanetCharacterMovementComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
