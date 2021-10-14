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
#ifdef FPSGAME_FPS_ExtractionZone_generated_h
#error "FPS_ExtractionZone.generated.h already included, missing '#pragma once' in FPS_ExtractionZone.h"
#endif
#define FPSGAME_FPS_ExtractionZone_generated_h

#define StealthGame_Source_FPSGame_Public_FPS_ExtractionZone_h_12_SPARSE_DATA
#define StealthGame_Source_FPSGame_Public_FPS_ExtractionZone_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleOverlap);


#define StealthGame_Source_FPSGame_Public_FPS_ExtractionZone_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleOverlap);


#define StealthGame_Source_FPSGame_Public_FPS_ExtractionZone_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPS_ExtractionZone(); \
	friend struct Z_Construct_UClass_AFPS_ExtractionZone_Statics; \
public: \
	DECLARE_CLASS(AFPS_ExtractionZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPS_ExtractionZone)


#define StealthGame_Source_FPSGame_Public_FPS_ExtractionZone_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFPS_ExtractionZone(); \
	friend struct Z_Construct_UClass_AFPS_ExtractionZone_Statics; \
public: \
	DECLARE_CLASS(AFPS_ExtractionZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPS_ExtractionZone)


#define StealthGame_Source_FPSGame_Public_FPS_ExtractionZone_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPS_ExtractionZone(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPS_ExtractionZone) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPS_ExtractionZone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPS_ExtractionZone); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPS_ExtractionZone(AFPS_ExtractionZone&&); \
	NO_API AFPS_ExtractionZone(const AFPS_ExtractionZone&); \
public:


#define StealthGame_Source_FPSGame_Public_FPS_ExtractionZone_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPS_ExtractionZone(AFPS_ExtractionZone&&); \
	NO_API AFPS_ExtractionZone(const AFPS_ExtractionZone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPS_ExtractionZone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPS_ExtractionZone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPS_ExtractionZone)


#define StealthGame_Source_FPSGame_Public_FPS_ExtractionZone_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ExtractionZone() { return STRUCT_OFFSET(AFPS_ExtractionZone, ExtractionZone); } \
	FORCEINLINE static uint32 __PPO__DecalComp() { return STRUCT_OFFSET(AFPS_ExtractionZone, DecalComp); } \
	FORCEINLINE static uint32 __PPO__ObjectiveMissingSound() { return STRUCT_OFFSET(AFPS_ExtractionZone, ObjectiveMissingSound); }


#define StealthGame_Source_FPSGame_Public_FPS_ExtractionZone_h_9_PROLOG
#define StealthGame_Source_FPSGame_Public_FPS_ExtractionZone_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_FPSGame_Public_FPS_ExtractionZone_h_12_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_FPSGame_Public_FPS_ExtractionZone_h_12_SPARSE_DATA \
	StealthGame_Source_FPSGame_Public_FPS_ExtractionZone_h_12_RPC_WRAPPERS \
	StealthGame_Source_FPSGame_Public_FPS_ExtractionZone_h_12_INCLASS \
	StealthGame_Source_FPSGame_Public_FPS_ExtractionZone_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StealthGame_Source_FPSGame_Public_FPS_ExtractionZone_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_FPSGame_Public_FPS_ExtractionZone_h_12_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_FPSGame_Public_FPS_ExtractionZone_h_12_SPARSE_DATA \
	StealthGame_Source_FPSGame_Public_FPS_ExtractionZone_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	StealthGame_Source_FPSGame_Public_FPS_ExtractionZone_h_12_INCLASS_NO_PURE_DECLS \
	StealthGame_Source_FPSGame_Public_FPS_ExtractionZone_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class AFPS_ExtractionZone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StealthGame_Source_FPSGame_Public_FPS_ExtractionZone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
