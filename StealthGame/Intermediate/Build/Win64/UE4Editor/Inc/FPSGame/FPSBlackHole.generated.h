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
#ifdef FPSGAME_FPSBlackHole_generated_h
#error "FPSBlackHole.generated.h already included, missing '#pragma once' in FPSBlackHole.h"
#endif
#define FPSGAME_FPSBlackHole_generated_h

#define StealthGame_Source_FPSGame_Public_FPSBlackHole_h_14_SPARSE_DATA
#define StealthGame_Source_FPSGame_Public_FPSBlackHole_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOverlapInnerSphere);


#define StealthGame_Source_FPSGame_Public_FPSBlackHole_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOverlapInnerSphere);


#define StealthGame_Source_FPSGame_Public_FPSBlackHole_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSBlackHole(); \
	friend struct Z_Construct_UClass_AFPSBlackHole_Statics; \
public: \
	DECLARE_CLASS(AFPSBlackHole, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSBlackHole)


#define StealthGame_Source_FPSGame_Public_FPSBlackHole_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFPSBlackHole(); \
	friend struct Z_Construct_UClass_AFPSBlackHole_Statics; \
public: \
	DECLARE_CLASS(AFPSBlackHole, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSBlackHole)


#define StealthGame_Source_FPSGame_Public_FPSBlackHole_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSBlackHole(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSBlackHole) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSBlackHole); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSBlackHole); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSBlackHole(AFPSBlackHole&&); \
	NO_API AFPSBlackHole(const AFPSBlackHole&); \
public:


#define StealthGame_Source_FPSGame_Public_FPSBlackHole_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSBlackHole(AFPSBlackHole&&); \
	NO_API AFPSBlackHole(const AFPSBlackHole&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSBlackHole); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSBlackHole); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSBlackHole)


#define StealthGame_Source_FPSGame_Public_FPSBlackHole_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BaseMesh() { return STRUCT_OFFSET(AFPSBlackHole, BaseMesh); } \
	FORCEINLINE static uint32 __PPO__InnerSphere() { return STRUCT_OFFSET(AFPSBlackHole, InnerSphere); } \
	FORCEINLINE static uint32 __PPO__OuterSphere() { return STRUCT_OFFSET(AFPSBlackHole, OuterSphere); } \
	FORCEINLINE static uint32 __PPO__Range() { return STRUCT_OFFSET(AFPSBlackHole, Range); } \
	FORCEINLINE static uint32 __PPO__Force() { return STRUCT_OFFSET(AFPSBlackHole, Force); }


#define StealthGame_Source_FPSGame_Public_FPSBlackHole_h_11_PROLOG
#define StealthGame_Source_FPSGame_Public_FPSBlackHole_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_FPSGame_Public_FPSBlackHole_h_14_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_FPSGame_Public_FPSBlackHole_h_14_SPARSE_DATA \
	StealthGame_Source_FPSGame_Public_FPSBlackHole_h_14_RPC_WRAPPERS \
	StealthGame_Source_FPSGame_Public_FPSBlackHole_h_14_INCLASS \
	StealthGame_Source_FPSGame_Public_FPSBlackHole_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StealthGame_Source_FPSGame_Public_FPSBlackHole_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_FPSGame_Public_FPSBlackHole_h_14_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_FPSGame_Public_FPSBlackHole_h_14_SPARSE_DATA \
	StealthGame_Source_FPSGame_Public_FPSBlackHole_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	StealthGame_Source_FPSGame_Public_FPSBlackHole_h_14_INCLASS_NO_PURE_DECLS \
	StealthGame_Source_FPSGame_Public_FPSBlackHole_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class AFPSBlackHole>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StealthGame_Source_FPSGame_Public_FPSBlackHole_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
