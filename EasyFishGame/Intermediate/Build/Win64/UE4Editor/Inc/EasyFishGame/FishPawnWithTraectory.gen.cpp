// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyFishGame/FishPawnWithTraectory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFishPawnWithTraectory() {}
// Cross Module References
	EASYFISHGAME_API UClass* Z_Construct_UClass_AFishPawnWithTraectory_NoRegister();
	EASYFISHGAME_API UClass* Z_Construct_UClass_AFishPawnWithTraectory();
	EASYFISHGAME_API UClass* Z_Construct_UClass_AClassicFishPawn();
	UPackage* Z_Construct_UPackage__Script_EasyFishGame();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AFishPawnWithTraectory::StaticRegisterNativesAFishPawnWithTraectory()
	{
	}
	UClass* Z_Construct_UClass_AFishPawnWithTraectory_NoRegister()
	{
		return AFishPawnWithTraectory::StaticClass();
	}
	struct Z_Construct_UClass_AFishPawnWithTraectory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFishPawnWithTraectory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AClassicFishPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyFishGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFishPawnWithTraectory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FishPawnWithTraectory.h" },
		{ "ModuleRelativePath", "FishPawnWithTraectory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFishPawnWithTraectory_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "Category", "FishPawnWithTraectory" },
		{ "MakeEditWidget", "ture" },
		{ "ModuleRelativePath", "FishPawnWithTraectory.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFishPawnWithTraectory_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFishPawnWithTraectory, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFishPawnWithTraectory_Statics::NewProp_TargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFishPawnWithTraectory_Statics::NewProp_TargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFishPawnWithTraectory_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Controll" },
		{ "ModuleRelativePath", "FishPawnWithTraectory.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFishPawnWithTraectory_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFishPawnWithTraectory, Speed), METADATA_PARAMS(Z_Construct_UClass_AFishPawnWithTraectory_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFishPawnWithTraectory_Statics::NewProp_Speed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFishPawnWithTraectory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFishPawnWithTraectory_Statics::NewProp_TargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFishPawnWithTraectory_Statics::NewProp_Speed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFishPawnWithTraectory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFishPawnWithTraectory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFishPawnWithTraectory_Statics::ClassParams = {
		&AFishPawnWithTraectory::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFishPawnWithTraectory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFishPawnWithTraectory_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFishPawnWithTraectory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFishPawnWithTraectory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFishPawnWithTraectory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFishPawnWithTraectory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFishPawnWithTraectory, 2822588574);
	template<> EASYFISHGAME_API UClass* StaticClass<AFishPawnWithTraectory>()
	{
		return AFishPawnWithTraectory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFishPawnWithTraectory(Z_Construct_UClass_AFishPawnWithTraectory, &AFishPawnWithTraectory::StaticClass, TEXT("/Script/EasyFishGame"), TEXT("AFishPawnWithTraectory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFishPawnWithTraectory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
