// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyFishGame/ClassicFishPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClassicFishPawn() {}
// Cross Module References
	EASYFISHGAME_API UClass* Z_Construct_UClass_AClassicFishPawn_NoRegister();
	EASYFISHGAME_API UClass* Z_Construct_UClass_AClassicFishPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_EasyFishGame();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AClassicFishPawn::execOnEnemyOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlapedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEnemyOverlap(Z_Param_OverlapedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	void AClassicFishPawn::StaticRegisterNativesAClassicFishPawn()
	{
		UClass* Class = AClassicFishPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnEnemyOverlap", &AClassicFishPawn::execOnEnemyOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AClassicFishPawn_OnEnemyOverlap_Statics
	{
		struct ClassicFishPawn_eventOnEnemyOverlap_Parms
		{
			AActor* OverlapedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlapedActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AClassicFishPawn_OnEnemyOverlap_Statics::NewProp_OverlapedActor = { "OverlapedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ClassicFishPawn_eventOnEnemyOverlap_Parms, OverlapedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AClassicFishPawn_OnEnemyOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ClassicFishPawn_eventOnEnemyOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AClassicFishPawn_OnEnemyOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClassicFishPawn_OnEnemyOverlap_Statics::NewProp_OverlapedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClassicFishPawn_OnEnemyOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AClassicFishPawn_OnEnemyOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClassicFishPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AClassicFishPawn_OnEnemyOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClassicFishPawn, nullptr, "OnEnemyOverlap", nullptr, nullptr, sizeof(ClassicFishPawn_eventOnEnemyOverlap_Parms), Z_Construct_UFunction_AClassicFishPawn_OnEnemyOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AClassicFishPawn_OnEnemyOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AClassicFishPawn_OnEnemyOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AClassicFishPawn_OnEnemyOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AClassicFishPawn_OnEnemyOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AClassicFishPawn_OnEnemyOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AClassicFishPawn_NoRegister()
	{
		return AClassicFishPawn::StaticClass();
	}
	struct Z_Construct_UClass_AClassicFishPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassicFishCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClassicFishCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassicFishMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClassicFishMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriseOfFish_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PriseOfFish;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AClassicFishPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyFishGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AClassicFishPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AClassicFishPawn_OnEnemyOverlap, "OnEnemyOverlap" }, // 1262146722
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClassicFishPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ClassicFishPawn.h" },
		{ "ModuleRelativePath", "ClassicFishPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClassicFishPawn_Statics::NewProp_ClassicFishCollision_MetaData[] = {
		{ "Category", "Fish" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ClassicFishPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassicFishPawn_Statics::NewProp_ClassicFishCollision = { "ClassicFishCollision", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AClassicFishPawn, ClassicFishCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AClassicFishPawn_Statics::NewProp_ClassicFishCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AClassicFishPawn_Statics::NewProp_ClassicFishCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClassicFishPawn_Statics::NewProp_ClassicFishMesh_MetaData[] = {
		{ "Category", "Fish" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ClassicFishPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClassicFishPawn_Statics::NewProp_ClassicFishMesh = { "ClassicFishMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AClassicFishPawn, ClassicFishMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AClassicFishPawn_Statics::NewProp_ClassicFishMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AClassicFishPawn_Statics::NewProp_ClassicFishMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClassicFishPawn_Statics::NewProp_PriseOfFish_MetaData[] = {
		{ "Category", "Controll" },
		{ "ModuleRelativePath", "ClassicFishPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AClassicFishPawn_Statics::NewProp_PriseOfFish = { "PriseOfFish", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AClassicFishPawn, PriseOfFish), METADATA_PARAMS(Z_Construct_UClass_AClassicFishPawn_Statics::NewProp_PriseOfFish_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AClassicFishPawn_Statics::NewProp_PriseOfFish_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AClassicFishPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassicFishPawn_Statics::NewProp_ClassicFishCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassicFishPawn_Statics::NewProp_ClassicFishMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClassicFishPawn_Statics::NewProp_PriseOfFish,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AClassicFishPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AClassicFishPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AClassicFishPawn_Statics::ClassParams = {
		&AClassicFishPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AClassicFishPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AClassicFishPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AClassicFishPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AClassicFishPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AClassicFishPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AClassicFishPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AClassicFishPawn, 3242806346);
	template<> EASYFISHGAME_API UClass* StaticClass<AClassicFishPawn>()
	{
		return AClassicFishPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AClassicFishPawn(Z_Construct_UClass_AClassicFishPawn, &AClassicFishPawn::StaticClass, TEXT("/Script/EasyFishGame"), TEXT("AClassicFishPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AClassicFishPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
