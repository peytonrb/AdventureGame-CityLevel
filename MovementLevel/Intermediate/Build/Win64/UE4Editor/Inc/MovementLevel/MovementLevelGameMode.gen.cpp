// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovementLevel/MovementLevelGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovementLevelGameMode() {}
// Cross Module References
	MOVEMENTLEVEL_API UClass* Z_Construct_UClass_AMovementLevelGameMode_NoRegister();
	MOVEMENTLEVEL_API UClass* Z_Construct_UClass_AMovementLevelGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MovementLevel();
// End Cross Module References
	void AMovementLevelGameMode::StaticRegisterNativesAMovementLevelGameMode()
	{
	}
	UClass* Z_Construct_UClass_AMovementLevelGameMode_NoRegister()
	{
		return AMovementLevelGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMovementLevelGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMovementLevelGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovementLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovementLevelGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MovementLevelGameMode.h" },
		{ "ModuleRelativePath", "MovementLevelGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMovementLevelGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovementLevelGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMovementLevelGameMode_Statics::ClassParams = {
		&AMovementLevelGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMovementLevelGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMovementLevelGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMovementLevelGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMovementLevelGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMovementLevelGameMode, 1638694024);
	template<> MOVEMENTLEVEL_API UClass* StaticClass<AMovementLevelGameMode>()
	{
		return AMovementLevelGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMovementLevelGameMode(Z_Construct_UClass_AMovementLevelGameMode, &AMovementLevelGameMode::StaticClass, TEXT("/Script/MovementLevel"), TEXT("AMovementLevelGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMovementLevelGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
