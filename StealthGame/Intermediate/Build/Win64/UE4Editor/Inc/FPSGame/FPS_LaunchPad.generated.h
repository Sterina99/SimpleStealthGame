// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef FPSGAME_FPS_LaunchPad_generated_h
#error "FPS_LaunchPad.generated.h already included, missing '#pragma once' in FPS_LaunchPad.h"
#endif
#define FPSGAME_FPS_LaunchPad_generated_h

#define StealthGame_Source_FPSGame_Public_FPS_LaunchPad_h_12_SPARSE_DATA
#define StealthGame_Source_FPSGame_Public_FPS_LaunchPad_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLaunchStuff);


#define StealthGame_Source_FPSGame_Public_FPS_LaunchPad_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLaunchStuff);


#define StealthGame_Source_FPSGame_Public_FPS_LaunchPad_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPS_LaunchPad(); \
	friend struct Z_Construct_UClass_AFPS_LaunchPad_Statics; \
public: \
	DECLARE_CLASS(AFPS_LaunchPad, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPS_LaunchPad)


#define StealthGame_Source_FPSGame_Public_FPS_LaunchPad_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFPS_LaunchPad(); \
	friend struct Z_Construct_UClass_AFPS_LaunchPad_Statics; \
public: \
	DECLARE_CLASS(AFPS_LaunchPad, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPS_LaunchPad)


#define StealthGame_Source_FPSGame_Public_FPS_LaunchPad_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPS_LaunchPad(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPS_LaunchPad) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPS_LaunchPad); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPS_LaunchPad); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPS_LaunchPad(AFPS_LaunchPad&&); \
	NO_API AFPS_LaunchPad(const AFPS_LaunchPad&); \
public:


#define StealthGame_Source_FPSGame_Public_FPS_LaunchPad_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPS_LaunchPad(AFPS_LaunchPad&&); \
	NO_API AFPS_LaunchPad(const AFPS_LaunchPad&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPS_LaunchPad); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPS_LaunchPad); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPS_LaunchPad)


#define StealthGame_Source_FPSGame_Public_FPS_LaunchPad_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BaseMesh() { return STRUCT_OFFSET(AFPS_LaunchPad, BaseMesh); } \
	FORCEINLINE static uint32 __PPO__BoxComp() { return STRUCT_OFFSET(AFPS_LaunchPad, BoxComp); } \
	FORCEINLINE static uint32 __PPO__ActivateLaunchPadEffect() { return STRUCT_OFFSET(AFPS_LaunchPad, ActivateLaunchPadEffect); } \
	FORCEINLINE static uint32 __PPO__Force() { return STRUCT_OFFSET(AFPS_LaunchPad, Force); } \
	FORCEINLINE static uint32 __PPO__ItemForce() { return STRUCT_OFFSET(AFPS_LaunchPad, ItemForce); } \
	FORCEINLINE static uint32 __PPO__LaunchAngle() { return STRUCT_OFFSET(AFPS_LaunchPad, LaunchAngle); }


#define StealthGame_Source_FPSGame_Public_FPS_LaunchPad_h_9_PROLOG
#define StealthGame_Source_FPSGame_Public_FPS_LaunchPad_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_FPSGame_Public_FPS_LaunchPad_h_12_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_FPSGame_Public_FPS_LaunchPad_h_12_SPARSE_DATA \
	StealthGame_Source_FPSGame_Public_FPS_LaunchPad_h_12_RPC_WRAPPERS \
	StealthGame_Source_FPSGame_Public_FPS_LaunchPad_h_12_INCLASS \
	StealthGame_Source_FPSGame_Public_FPS_LaunchPad_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StealthGame_Source_FPSGame_Public_FPS_LaunchPad_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_FPSGame_Public_FPS_LaunchPad_h_12_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_FPSGame_Public_FPS_LaunchPad_h_12_SPARSE_DATA \
	StealthGame_Source_FPSGame_Public_FPS_LaunchPad_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	StealthGame_Source_FPSGame_Public_FPS_LaunchPad_h_12_INCLASS_NO_PURE_DECLS \
	StealthGame_Source_FPSGame_Public_FPS_LaunchPad_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class AFPS_LaunchPad>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StealthGame_Source_FPSGame_Public_FPS_LaunchPad_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
