// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UECollisions/UECollisionsGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUECollisionsGameModeBase() {}
// Cross Module References
	UECOLLISIONS_API UClass* Z_Construct_UClass_AUECollisionsGameModeBase_NoRegister();
	UECOLLISIONS_API UClass* Z_Construct_UClass_AUECollisionsGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UECollisions();
// End Cross Module References
	void AUECollisionsGameModeBase::StaticRegisterNativesAUECollisionsGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AUECollisionsGameModeBase_NoRegister()
	{
		return AUECollisionsGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUECollisionsGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUECollisionsGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UECollisions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUECollisionsGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UECollisionsGameModeBase.h" },
		{ "ModuleRelativePath", "UECollisionsGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUECollisionsGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUECollisionsGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUECollisionsGameModeBase_Statics::ClassParams = {
		&AUECollisionsGameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AUECollisionsGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AUECollisionsGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUECollisionsGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUECollisionsGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUECollisionsGameModeBase, 3568188570);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUECollisionsGameModeBase(Z_Construct_UClass_AUECollisionsGameModeBase, &AUECollisionsGameModeBase::StaticClass, TEXT("/Script/UECollisions"), TEXT("AUECollisionsGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUECollisionsGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
