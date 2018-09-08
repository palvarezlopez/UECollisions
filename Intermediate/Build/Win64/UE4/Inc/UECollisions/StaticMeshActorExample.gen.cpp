// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UECollisions/StaticMeshActorExample.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticMeshActorExample() {}
// Cross Module References
	UECOLLISIONS_API UClass* Z_Construct_UClass_AStaticMeshActorExample_NoRegister();
	UECOLLISIONS_API UClass* Z_Construct_UClass_AStaticMeshActorExample();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_UECollisions();
// End Cross Module References
	void AStaticMeshActorExample::StaticRegisterNativesAStaticMeshActorExample()
	{
	}
	UClass* Z_Construct_UClass_AStaticMeshActorExample_NoRegister()
	{
		return AStaticMeshActorExample::StaticClass();
	}
	struct Z_Construct_UClass_AStaticMeshActorExample_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStaticMeshActorExample_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UECollisions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStaticMeshActorExample_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input" },
		{ "IncludePath", "StaticMeshActorExample.h" },
		{ "ModuleRelativePath", "StaticMeshActorExample.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStaticMeshActorExample_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStaticMeshActorExample>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStaticMeshActorExample_Statics::ClassParams = {
		&AStaticMeshActorExample::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AStaticMeshActorExample_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AStaticMeshActorExample_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStaticMeshActorExample()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStaticMeshActorExample_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStaticMeshActorExample, 550725992);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStaticMeshActorExample(Z_Construct_UClass_AStaticMeshActorExample, &AStaticMeshActorExample::StaticClass, TEXT("/Script/UECollisions"), TEXT("AStaticMeshActorExample"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStaticMeshActorExample);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
