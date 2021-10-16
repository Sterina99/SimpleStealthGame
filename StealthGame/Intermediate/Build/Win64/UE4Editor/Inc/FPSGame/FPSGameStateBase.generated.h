// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef FPSGAME_FPSGameStateBase_generated_h
#error "FPSGameStateBase.generated.h already included, missing '#pragma once' in FPSGameStateBase.h"
#endif
#define FPSGAME_FPSGameStateBase_generated_h

#define StealthGame_Source_FPSGame_Public_FPSGameStateBase_h_15_SPARSE_DATA
#define StealthGame_Source_FPSGame_Public_FPSGameStateBase_h_15_RPC_WRAPPERS \
	virtual void MulticastOnMissionComplete_Implementation(APawn* InstigatorPawn, bool bMissionSuccess); \
 \
	DECLARE_FUNCTION(execMulticastOnMissionComplete);


#define StealthGame_Source_FPSGame_Public_FPSGameStateBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastOnMissionComplete_Implementation(APawn* InstigatorPawn, bool bMissionSuccess); \
 \
	DECLARE_FUNCTION(execMulticastOnMissionComplete);


#define StealthGame_Source_FPSGame_Public_FPSGameStateBase_h_15_EVENT_PARMS \
	struct FPSGameStateBase_eventMulticastOnMissionComplete_Parms \
	{ \
		APawn* InstigatorPawn; \
		bool bMissionSuccess; \
	};


#define StealthGame_Source_FPSGame_Public_FPSGameStateBase_h_15_CALLBACK_WRAPPERS
#define StealthGame_Source_FPSGame_Public_FPSGameStateBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSGameStateBase(); \
	friend struct Z_Construct_UClass_AFPSGameStateBase_Statics; \
public: \
	DECLARE_CLASS(AFPSGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSGameStateBase)


#define StealthGame_Source_FPSGame_Public_FPSGameStateBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFPSGameStateBase(); \
	friend struct Z_Construct_UClass_AFPSGameStateBase_Statics; \
public: \
	DECLARE_CLASS(AFPSGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSGameStateBase)


#define StealthGame_Source_FPSGame_Public_FPSGameStateBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSGameStateBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSGameStateBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSGameStateBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSGameStateBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSGameStateBase(AFPSGameStateBase&&); \
	NO_API AFPSGameStateBase(const AFPSGameStateBase&); \
public:


#define StealthGame_Source_FPSGame_Public_FPSGameStateBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSGameStateBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSGameStateBase(AFPSGameStateBase&&); \
	NO_API AFPSGameStateBase(const AFPSGameStateBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSGameStateBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSGameStateBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSGameStateBase)


#define StealthGame_Source_FPSGame_Public_FPSGameStateBase_h_15_PRIVATE_PROPERTY_OFFSET
#define StealthGame_Source_FPSGame_Public_FPSGameStateBase_h_12_PROLOG \
	StealthGame_Source_FPSGame_Public_FPSGameStateBase_h_15_EVENT_PARMS


#define StealthGame_Source_FPSGame_Public_FPSGameStateBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_FPSGame_Public_FPSGameStateBase_h_15_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_FPSGame_Public_FPSGameStateBase_h_15_SPARSE_DATA \
	StealthGame_Source_FPSGame_Public_FPSGameStateBase_h_15_RPC_WRAPPERS \
	StealthGame_Source_FPSGame_Public_FPSGameStateBase_h_15_CALLBACK_WRAPPERS \
	StealthGame_Source_FPSGame_Public_FPSGameStateBase_h_15_INCLASS \
	StealthGame_Source_FPSGame_Public_FPSGameStateBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StealthGame_Source_FPSGame_Public_FPSGameStateBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_FPSGame_Public_FPSGameStateBase_h_15_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_FPSGame_Public_FPSGameStateBase_h_15_SPARSE_DATA \
	StealthGame_Source_FPSGame_Public_FPSGameStateBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	StealthGame_Source_FPSGame_Public_FPSGameStateBase_h_15_CALLBACK_WRAPPERS \
	StealthGame_Source_FPSGame_Public_FPSGameStateBase_h_15_INCLASS_NO_PURE_DECLS \
	StealthGame_Source_FPSGame_Public_FPSGameStateBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class AFPSGameStateBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StealthGame_Source_FPSGame_Public_FPSGameStateBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
