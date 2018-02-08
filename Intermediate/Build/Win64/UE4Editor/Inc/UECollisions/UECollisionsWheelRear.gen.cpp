// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "UECollisionsWheelRear.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUECollisionsWheelRear() {}
// Cross Module References
	UECOLLISIONS_API UClass* Z_Construct_UClass_UUECollisionsWheelRear_NoRegister();
	UECOLLISIONS_API UClass* Z_Construct_UClass_UUECollisionsWheelRear();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_UECollisions();
// End Cross Module References
	void UUECollisionsWheelRear::StaticRegisterNativesUUECollisionsWheelRear()
	{
	}
	UClass* Z_Construct_UClass_UUECollisionsWheelRear_NoRegister()
	{
		return UUECollisionsWheelRear::StaticClass();
	}
	UClass* Z_Construct_UClass_UUECollisionsWheelRear()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UVehicleWheel,
				(UObject* (*)())Z_Construct_UPackage__Script_UECollisions,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "UECollisionsWheelRear.h" },
				{ "ModuleRelativePath", "UECollisionsWheelRear.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UUECollisionsWheelRear>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UUECollisionsWheelRear::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUECollisionsWheelRear, 758649491);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUECollisionsWheelRear(Z_Construct_UClass_UUECollisionsWheelRear, &UUECollisionsWheelRear::StaticClass, TEXT("/Script/UECollisions"), TEXT("UUECollisionsWheelRear"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUECollisionsWheelRear);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
