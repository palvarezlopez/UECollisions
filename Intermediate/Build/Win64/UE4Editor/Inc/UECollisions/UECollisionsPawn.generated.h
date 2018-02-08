// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UECOLLISIONS_UECollisionsPawn_generated_h
#error "UECollisionsPawn.generated.h already included, missing '#pragma once' in UECollisionsPawn.h"
#endif
#define UECOLLISIONS_UECollisionsPawn_generated_h

#define UECollisions_Source_UECollisions_UECollisionsPawn_h_17_RPC_WRAPPERS
#define UECollisions_Source_UECollisions_UECollisionsPawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define UECollisions_Source_UECollisions_UECollisionsPawn_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUECollisionsPawn(); \
	friend UECOLLISIONS_API class UClass* Z_Construct_UClass_AUECollisionsPawn(); \
public: \
	DECLARE_CLASS(AUECollisionsPawn, AWheeledVehicle, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UECollisions"), NO_API) \
	DECLARE_SERIALIZER(AUECollisionsPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UECollisions_Source_UECollisions_UECollisionsPawn_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAUECollisionsPawn(); \
	friend UECOLLISIONS_API class UClass* Z_Construct_UClass_AUECollisionsPawn(); \
public: \
	DECLARE_CLASS(AUECollisionsPawn, AWheeledVehicle, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UECollisions"), NO_API) \
	DECLARE_SERIALIZER(AUECollisionsPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UECollisions_Source_UECollisions_UECollisionsPawn_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUECollisionsPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUECollisionsPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUECollisionsPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUECollisionsPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUECollisionsPawn(AUECollisionsPawn&&); \
	NO_API AUECollisionsPawn(const AUECollisionsPawn&); \
public:


#define UECollisions_Source_UECollisions_UECollisionsPawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUECollisionsPawn(AUECollisionsPawn&&); \
	NO_API AUECollisionsPawn(const AUECollisionsPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUECollisionsPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUECollisionsPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUECollisionsPawn)


#define UECollisions_Source_UECollisions_UECollisionsPawn_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(AUECollisionsPawn, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AUECollisionsPawn, Camera); } \
	FORCEINLINE static uint32 __PPO__InternalCameraBase() { return STRUCT_OFFSET(AUECollisionsPawn, InternalCameraBase); } \
	FORCEINLINE static uint32 __PPO__InternalCamera() { return STRUCT_OFFSET(AUECollisionsPawn, InternalCamera); } \
	FORCEINLINE static uint32 __PPO__InCarSpeed() { return STRUCT_OFFSET(AUECollisionsPawn, InCarSpeed); } \
	FORCEINLINE static uint32 __PPO__InCarGear() { return STRUCT_OFFSET(AUECollisionsPawn, InCarGear); }


#define UECollisions_Source_UECollisions_UECollisionsPawn_h_14_PROLOG
#define UECollisions_Source_UECollisions_UECollisionsPawn_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UECollisions_Source_UECollisions_UECollisionsPawn_h_17_PRIVATE_PROPERTY_OFFSET \
	UECollisions_Source_UECollisions_UECollisionsPawn_h_17_RPC_WRAPPERS \
	UECollisions_Source_UECollisions_UECollisionsPawn_h_17_INCLASS \
	UECollisions_Source_UECollisions_UECollisionsPawn_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UECollisions_Source_UECollisions_UECollisionsPawn_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UECollisions_Source_UECollisions_UECollisionsPawn_h_17_PRIVATE_PROPERTY_OFFSET \
	UECollisions_Source_UECollisions_UECollisionsPawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	UECollisions_Source_UECollisions_UECollisionsPawn_h_17_INCLASS_NO_PURE_DECLS \
	UECollisions_Source_UECollisions_UECollisionsPawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UECollisions_Source_UECollisions_UECollisionsPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
