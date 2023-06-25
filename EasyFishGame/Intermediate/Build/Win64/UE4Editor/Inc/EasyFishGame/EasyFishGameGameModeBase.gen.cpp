// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyFishGame/EasyFishGameGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEasyFishGameGameModeBase() {}
// Cross Module References
	EASYFISHGAME_API UFunction* Z_Construct_UDelegateFunction_EasyFishGame_GameOverEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_EasyFishGame();
	EASYFISHGAME_API UClass* Z_Construct_UClass_AEasyFishGameGameModeBase_NoRegister();
	EASYFISHGAME_API UClass* Z_Construct_UClass_AEasyFishGameGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	EASYFISHGAME_API UClass* Z_Construct_UClass_UEnemySpawnControll_NoRegister();
	EASYFISHGAME_API UClass* Z_Construct_UClass_APlayerPawn_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_EasyFishGame_GameOverEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EasyFishGame_GameOverEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EasyFishGameGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EasyFishGame_GameOverEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EasyFishGame, nullptr, "GameOverEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EasyFishGame_GameOverEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyFishGame_GameOverEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EasyFishGame_GameOverEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_EasyFishGame_GameOverEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AEasyFishGameGameModeBase::execAddPoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Points);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPoint(Z_Param_Points);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEasyFishGameGameModeBase::execEndGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndGame();
		P_NATIVE_END;
	}
	void AEasyFishGameGameModeBase::StaticRegisterNativesAEasyFishGameGameModeBase()
	{
		UClass* Class = AEasyFishGameGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPoint", &AEasyFishGameGameModeBase::execAddPoint },
			{ "EndGame", &AEasyFishGameGameModeBase::execEndGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEasyFishGameGameModeBase_AddPoint_Statics
	{
		struct EasyFishGameGameModeBase_eventAddPoint_Parms
		{
			int32 Points;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Points;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AEasyFishGameGameModeBase_AddPoint_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EasyFishGameGameModeBase_eventAddPoint_Parms, Points), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEasyFishGameGameModeBase_AddPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEasyFishGameGameModeBase_AddPoint_Statics::NewProp_Points,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEasyFishGameGameModeBase_AddPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "EasyFishGameGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEasyFishGameGameModeBase_AddPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEasyFishGameGameModeBase, nullptr, "AddPoint", nullptr, nullptr, sizeof(EasyFishGameGameModeBase_eventAddPoint_Parms), Z_Construct_UFunction_AEasyFishGameGameModeBase_AddPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEasyFishGameGameModeBase_AddPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEasyFishGameGameModeBase_AddPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEasyFishGameGameModeBase_AddPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEasyFishGameGameModeBase_AddPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEasyFishGameGameModeBase_AddPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEasyFishGameGameModeBase_EndGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEasyFishGameGameModeBase_EndGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "EasyFishGameGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEasyFishGameGameModeBase_EndGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEasyFishGameGameModeBase, nullptr, "EndGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEasyFishGameGameModeBase_EndGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEasyFishGameGameModeBase_EndGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEasyFishGameGameModeBase_EndGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEasyFishGameGameModeBase_EndGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEasyFishGameGameModeBase_NoRegister()
	{
		return AEasyFishGameGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AEasyFishGameGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemySpawnController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnemySpawnController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerPawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GamePoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_GamePoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameOver_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameOver;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEasyFishGameGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyFishGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEasyFishGameGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEasyFishGameGameModeBase_AddPoint, "AddPoint" }, // 3178534248
		{ &Z_Construct_UFunction_AEasyFishGameGameModeBase_EndGame, "EndGame" }, // 3638301528
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEasyFishGameGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "EasyFishGameGameModeBase.h" },
		{ "ModuleRelativePath", "EasyFishGameGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEasyFishGameGameModeBase_Statics::NewProp_EnemySpawnController_MetaData[] = {
		{ "Category", "Enemies" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EasyFishGameGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEasyFishGameGameModeBase_Statics::NewProp_EnemySpawnController = { "EnemySpawnController", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEasyFishGameGameModeBase, EnemySpawnController), Z_Construct_UClass_UEnemySpawnControll_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEasyFishGameGameModeBase_Statics::NewProp_EnemySpawnController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEasyFishGameGameModeBase_Statics::NewProp_EnemySpawnController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEasyFishGameGameModeBase_Statics::NewProp_PlayerPawn_MetaData[] = {
		{ "Category", "Enemies" },
		{ "ModuleRelativePath", "EasyFishGameGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEasyFishGameGameModeBase_Statics::NewProp_PlayerPawn = { "PlayerPawn", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEasyFishGameGameModeBase, PlayerPawn), Z_Construct_UClass_APlayerPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEasyFishGameGameModeBase_Statics::NewProp_PlayerPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEasyFishGameGameModeBase_Statics::NewProp_PlayerPawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEasyFishGameGameModeBase_Statics::NewProp_GamePoint_MetaData[] = {
		{ "Category", "Enemies" },
		{ "ModuleRelativePath", "EasyFishGameGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AEasyFishGameGameModeBase_Statics::NewProp_GamePoint = { "GamePoint", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEasyFishGameGameModeBase, GamePoint), METADATA_PARAMS(Z_Construct_UClass_AEasyFishGameGameModeBase_Statics::NewProp_GamePoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEasyFishGameGameModeBase_Statics::NewProp_GamePoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEasyFishGameGameModeBase_Statics::NewProp_GameOver_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "EasyFishGameGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AEasyFishGameGameModeBase_Statics::NewProp_GameOver = { "GameOver", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEasyFishGameGameModeBase, GameOver), Z_Construct_UDelegateFunction_EasyFishGame_GameOverEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AEasyFishGameGameModeBase_Statics::NewProp_GameOver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEasyFishGameGameModeBase_Statics::NewProp_GameOver_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEasyFishGameGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEasyFishGameGameModeBase_Statics::NewProp_EnemySpawnController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEasyFishGameGameModeBase_Statics::NewProp_PlayerPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEasyFishGameGameModeBase_Statics::NewProp_GamePoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEasyFishGameGameModeBase_Statics::NewProp_GameOver,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEasyFishGameGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEasyFishGameGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEasyFishGameGameModeBase_Statics::ClassParams = {
		&AEasyFishGameGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEasyFishGameGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEasyFishGameGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AEasyFishGameGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEasyFishGameGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEasyFishGameGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEasyFishGameGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEasyFishGameGameModeBase, 2879443275);
	template<> EASYFISHGAME_API UClass* StaticClass<AEasyFishGameGameModeBase>()
	{
		return AEasyFishGameGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEasyFishGameGameModeBase(Z_Construct_UClass_AEasyFishGameGameModeBase, &AEasyFishGameGameModeBase::StaticClass, TEXT("/Script/EasyFishGame"), TEXT("AEasyFishGameGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEasyFishGameGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
