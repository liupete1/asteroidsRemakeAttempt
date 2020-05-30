// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Re_Asteroids/Re_AsteroidsGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRe_AsteroidsGameMode() {}
// Cross Module References
	RE_ASTEROIDS_API UClass* Z_Construct_UClass_ARe_AsteroidsGameMode_NoRegister();
	RE_ASTEROIDS_API UClass* Z_Construct_UClass_ARe_AsteroidsGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Re_Asteroids();
// End Cross Module References
	void ARe_AsteroidsGameMode::StaticRegisterNativesARe_AsteroidsGameMode()
	{
	}
	UClass* Z_Construct_UClass_ARe_AsteroidsGameMode_NoRegister()
	{
		return ARe_AsteroidsGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ARe_AsteroidsGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARe_AsteroidsGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Re_Asteroids,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARe_AsteroidsGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Re_AsteroidsGameMode.h" },
		{ "ModuleRelativePath", "Re_AsteroidsGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARe_AsteroidsGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARe_AsteroidsGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARe_AsteroidsGameMode_Statics::ClassParams = {
		&ARe_AsteroidsGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ARe_AsteroidsGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARe_AsteroidsGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARe_AsteroidsGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARe_AsteroidsGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARe_AsteroidsGameMode, 1536760696);
	template<> RE_ASTEROIDS_API UClass* StaticClass<ARe_AsteroidsGameMode>()
	{
		return ARe_AsteroidsGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARe_AsteroidsGameMode(Z_Construct_UClass_ARe_AsteroidsGameMode, &ARe_AsteroidsGameMode::StaticClass, TEXT("/Script/Re_Asteroids"), TEXT("ARe_AsteroidsGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARe_AsteroidsGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
