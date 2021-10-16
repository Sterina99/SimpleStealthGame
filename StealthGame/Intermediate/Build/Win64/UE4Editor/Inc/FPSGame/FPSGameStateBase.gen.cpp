// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGame/Public/FPSGameStateBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSGameStateBase() {}
// Cross Module References
	FPSGAME_API UClass* Z_Construct_UClass_AFPSGameStateBase_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AFPSGameStateBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_FPSGame();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFPSGameStateBase::execMulticastOnMissionComplete)
	{
		P_GET_OBJECT(APawn,Z_Param_InstigatorPawn);
		P_GET_UBOOL(Z_Param_bMissionSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastOnMissionComplete_Implementation(Z_Param_InstigatorPawn,Z_Param_bMissionSuccess);
		P_NATIVE_END;
	}
	static FName NAME_AFPSGameStateBase_MulticastOnMissionComplete = FName(TEXT("MulticastOnMissionComplete"));
	void AFPSGameStateBase::MulticastOnMissionComplete(APawn* InstigatorPawn, bool bMissionSuccess)
	{
		FPSGameStateBase_eventMulticastOnMissionComplete_Parms Parms;
		Parms.InstigatorPawn=InstigatorPawn;
		Parms.bMissionSuccess=bMissionSuccess ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFPSGameStateBase_MulticastOnMissionComplete),&Parms);
	}
	void AFPSGameStateBase::StaticRegisterNativesAFPSGameStateBase()
	{
		UClass* Class = AFPSGameStateBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MulticastOnMissionComplete", &AFPSGameStateBase::execMulticastOnMissionComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPSGameStateBase_MulticastOnMissionComplete_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatorPawn;
		static void NewProp_bMissionSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMissionSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSGameStateBase_MulticastOnMissionComplete_Statics::NewProp_InstigatorPawn = { "InstigatorPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSGameStateBase_eventMulticastOnMissionComplete_Parms, InstigatorPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFPSGameStateBase_MulticastOnMissionComplete_Statics::NewProp_bMissionSuccess_SetBit(void* Obj)
	{
		((FPSGameStateBase_eventMulticastOnMissionComplete_Parms*)Obj)->bMissionSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSGameStateBase_MulticastOnMissionComplete_Statics::NewProp_bMissionSuccess = { "bMissionSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSGameStateBase_eventMulticastOnMissionComplete_Parms), &Z_Construct_UFunction_AFPSGameStateBase_MulticastOnMissionComplete_Statics::NewProp_bMissionSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSGameStateBase_MulticastOnMissionComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSGameStateBase_MulticastOnMissionComplete_Statics::NewProp_InstigatorPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSGameStateBase_MulticastOnMissionComplete_Statics::NewProp_bMissionSuccess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameStateBase_MulticastOnMissionComplete_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Multicast means that this function will run on all clients/server\n//UFUNCTION(NetMulticast, Reliable)\n//\x09void MulticastOnMissionComplete(APawn* InstigatorPawn, bool bMissionSuccess);\n" },
		{ "ModuleRelativePath", "Public/FPSGameStateBase.h" },
		{ "ToolTip", "Multicast means that this function will run on all clients/server\nUFUNCTION(NetMulticast, Reliable)\n       void MulticastOnMissionComplete(APawn* InstigatorPawn, bool bMissionSuccess);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameStateBase_MulticastOnMissionComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSGameStateBase, nullptr, "MulticastOnMissionComplete", nullptr, nullptr, sizeof(FPSGameStateBase_eventMulticastOnMissionComplete_Parms), Z_Construct_UFunction_AFPSGameStateBase_MulticastOnMissionComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameStateBase_MulticastOnMissionComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameStateBase_MulticastOnMissionComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameStateBase_MulticastOnMissionComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSGameStateBase_MulticastOnMissionComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSGameStateBase_MulticastOnMissionComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSGameStateBase_NoRegister()
	{
		return AFPSGameStateBase::StaticClass();
	}
	struct Z_Construct_UClass_AFPSGameStateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSGameStateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSGameStateBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSGameStateBase_MulticastOnMissionComplete, "MulticastOnMissionComplete" }, // 3163695583
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameStateBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FPSGameStateBase.h" },
		{ "ModuleRelativePath", "Public/FPSGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSGameStateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSGameStateBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSGameStateBase_Statics::ClassParams = {
		&AFPSGameStateBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFPSGameStateBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameStateBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSGameStateBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSGameStateBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSGameStateBase, 2920616258);
	template<> FPSGAME_API UClass* StaticClass<AFPSGameStateBase>()
	{
		return AFPSGameStateBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSGameStateBase(Z_Construct_UClass_AFPSGameStateBase, &AFPSGameStateBase::StaticClass, TEXT("/Script/FPSGame"), TEXT("AFPSGameStateBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSGameStateBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
