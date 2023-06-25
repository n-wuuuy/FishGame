// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyFishGame/LittleFishEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLittleFishEnemy() {}
// Cross Module References
	EASYFISHGAME_API UClass* Z_Construct_UClass_ALittleFishEnemy_NoRegister();
	EASYFISHGAME_API UClass* Z_Construct_UClass_ALittleFishEnemy();
	EASYFISHGAME_API UClass* Z_Construct_UClass_AClassicFishPawn();
	UPackage* Z_Construct_UPackage__Script_EasyFishGame();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ALittleFishEnemy::StaticRegisterNativesALittleFishEnemy()
	{
	}
	UClass* Z_Construct_UClass_ALittleFishEnemy_NoRegister()
	{
		return ALittleFishEnemy::StaticClass();
	}
	struct Z_Construct_UClass_ALittleFishEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALittleFishEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AClassicFishPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyFishGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALittleFishEnemy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "LittleFishEnemy.h" },
		{ "ModuleRelativePath", "LittleFishEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALittleFishEnemy_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "Category", "LittleFishEnemy" },
		{ "ModuleRelativePath", "LittleFishEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALittleFishEnemy_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALittleFishEnemy, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ALittleFishEnemy_Statics::NewProp_TargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALittleFishEnemy_Statics::NewProp_TargetLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALittleFishEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALittleFishEnemy_Statics::NewProp_TargetLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALittleFishEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALittleFishEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALittleFishEnemy_Statics::ClassParams = {
		&ALittleFishEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALittleFishEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALittleFishEnemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALittleFishEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALittleFishEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALittleFishEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALittleFishEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALittleFishEnemy, 3821533826);
	template<> EASYFISHGAME_API UClass* StaticClass<ALittleFishEnemy>()
	{
		return ALittleFishEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALittleFishEnemy(Z_Construct_UClass_ALittleFishEnemy, &ALittleFishEnemy::StaticClass, TEXT("/Script/EasyFishGame"), TEXT("ALittleFishEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALittleFishEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
