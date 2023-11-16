// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyProjectProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef MYPROJECT_MyProjectProjectile_generated_h
#error "MyProjectProjectile.generated.h already included, missing '#pragma once' in MyProjectProjectile.h"
#endif
#define MYPROJECT_MyProjectProjectile_generated_h

#define FID_Users_ajha4_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_MyProjectProjectile_h_15_SPARSE_DATA
#define FID_Users_ajha4_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_MyProjectProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_ajha4_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_MyProjectProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_ajha4_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_MyProjectProjectile_h_15_ACCESSORS
#define FID_Users_ajha4_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_MyProjectProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyProjectProjectile(); \
	friend struct Z_Construct_UClass_AMyProjectProjectile_Statics; \
public: \
	DECLARE_CLASS(AMyProjectProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMyProjectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_ajha4_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_MyProjectProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyProjectProjectile(); \
	friend struct Z_Construct_UClass_AMyProjectProjectile_Statics; \
public: \
	DECLARE_CLASS(AMyProjectProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMyProjectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_ajha4_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_MyProjectProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyProjectProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyProjectProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProjectProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProjectProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProjectProjectile(AMyProjectProjectile&&); \
	NO_API AMyProjectProjectile(const AMyProjectProjectile&); \
public: \
	NO_API virtual ~AMyProjectProjectile();


#define FID_Users_ajha4_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_MyProjectProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProjectProjectile(AMyProjectProjectile&&); \
	NO_API AMyProjectProjectile(const AMyProjectProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProjectProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProjectProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyProjectProjectile) \
	NO_API virtual ~AMyProjectProjectile();


#define FID_Users_ajha4_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_MyProjectProjectile_h_12_PROLOG
#define FID_Users_ajha4_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_MyProjectProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ajha4_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_MyProjectProjectile_h_15_SPARSE_DATA \
	FID_Users_ajha4_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_MyProjectProjectile_h_15_RPC_WRAPPERS \
	FID_Users_ajha4_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_MyProjectProjectile_h_15_ACCESSORS \
	FID_Users_ajha4_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_MyProjectProjectile_h_15_INCLASS \
	FID_Users_ajha4_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_MyProjectProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_ajha4_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_MyProjectProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ajha4_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_MyProjectProjectile_h_15_SPARSE_DATA \
	FID_Users_ajha4_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_MyProjectProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_ajha4_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_MyProjectProjectile_h_15_ACCESSORS \
	FID_Users_ajha4_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_MyProjectProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_ajha4_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_MyProjectProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class AMyProjectProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_ajha4_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_MyProjectProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
