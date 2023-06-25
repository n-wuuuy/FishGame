// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyFishGame/EnemySpawnControll.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemySpawnControll() {}
// Cross Module References
	EASYFISHGAME_API UScriptStruct* Z_Construct_UScriptStruct_FEnemySpawnInfo();
	UPackage* Z_Construct_UPackage__Script_EasyFishGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	EASYFISHGAME_API UClass* Z_Construct_UClass_AClassicFishPawn_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	EASYFISHGAME_API UClass* Z_Construct_UClass_UEnemySpawnControll_NoRegister();
	EASYFISHGAME_API UClass* Z_Construct_UClass_UEnemySpawnControll();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
class UScriptStruct* FEnemySpawnInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EASYFISHGAME_API uint32 Get_Z_Construct_UScriptStruct_FEnemySpawnInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnemySpawnInfo, Z_Construct_UPackage__Script_EasyFishGame(), TEXT("EnemySpawnInfo"), sizeof(FEnemySpawnInfo), Get_Z_Construct_UScriptStruct_FEnemySpawnInfo_Hash());
	}
	return Singleton;
}
template<> EASYFISHGAME_API UScriptStruct* StaticStruct<FEnemySpawnInfo>()
{
	return FEnemySpawnInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEnemySpawnInfo(FEnemySpawnInfo::StaticStruct, TEXT("/Script/EasyFishGame"), TEXT("EnemySpawnInfo"), false, nullptr, nullptr);
static struct FScriptStruct_EasyFishGame_StaticRegisterNativesFEnemySpawnInfo
{
	FScriptStruct_EasyFishGame_StaticRegisterNativesFEnemySpawnInfo()
	{
		UScriptStruct::DeferCppStructOps<FEnemySpawnInfo>(FName(TEXT("EnemySpawnInfo")));
	}
} ScriptStruct_EasyFishGame_StaticRegisterNativesFEnemySpawnInfo;
	struct Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EnemyClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnDeley_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnDeley;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumOfEnemy_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumOfEnemy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "EnemySpawnControll.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnemySpawnInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::NewProp_EnemyClass_MetaData[] = {
		{ "Category", "Enemies" },
		{ "ModuleRelativePath", "EnemySpawnControll.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::NewProp_EnemyClass = { "EnemyClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemySpawnInfo, EnemyClass), Z_Construct_UClass_AClassicFishPawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::NewProp_EnemyClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::NewProp_EnemyClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::NewProp_SpawnDeley_MetaData[] = {
		{ "Category", "Enemies" },
		{ "ModuleRelativePath", "EnemySpawnControll.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::NewProp_SpawnDeley = { "SpawnDeley", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemySpawnInfo, SpawnDeley), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::NewProp_SpawnDeley_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::NewProp_SpawnDeley_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::NewProp_NumOfEnemy_MetaData[] = {
		{ "Category", "Enemies" },
		{ "ModuleRelativePath", "EnemySpawnControll.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::NewProp_NumOfEnemy = { "NumOfEnemy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemySpawnInfo, NumOfEnemy), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::NewProp_NumOfEnemy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::NewProp_NumOfEnemy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::NewProp_SpawnTransform_MetaData[] = {
		{ "Category", "Enemies" },
		{ "ModuleRelativePath", "EnemySpawnControll.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemySpawnInfo, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::NewProp_SpawnTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::NewProp_SpawnTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::NewProp_EnemyClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::NewProp_SpawnDeley,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::NewProp_NumOfEnemy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::NewProp_SpawnTransform,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyFishGame,
		nullptr,
		&NewStructOps,
		"EnemySpawnInfo",
		sizeof(FEnemySpawnInfo),
		alignof(FEnemySpawnInfo),
		Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEnemySpawnInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEnemySpawnInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EasyFishGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EnemySpawnInfo"), sizeof(FEnemySpawnInfo), Get_Z_Construct_UScriptStruct_FEnemySpawnInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEnemySpawnInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEnemySpawnInfo_Hash() { return 1144198167U; }
	void UEnemySpawnControll::StaticRegisterNativesUEnemySpawnControll()
	{
	}
	UClass* Z_Construct_UClass_UEnemySpawnControll_NoRegister()
	{
		return UEnemySpawnControll::StaticClass();
	}
	struct Z_Construct_UClass_UEnemySpawnControll_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnStages_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnStages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnStages;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnMinDeley_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnMinDeley;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnMaxDeley_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnMaxDeley;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangeStageTimerMultiplaer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChangeStageTimerMultiplaer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemySpawnControll_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyFishGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemySpawnControll_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "EnemySpawnControll.h" },
		{ "ModuleRelativePath", "EnemySpawnControll.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnemySpawnControll_Statics::NewProp_SpawnStages_Inner = { "SpawnStages", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEnemySpawnInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemySpawnControll_Statics::NewProp_SpawnStages_MetaData[] = {
		{ "Category", "SpawnController" },
		{ "ModuleRelativePath", "EnemySpawnControll.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnemySpawnControll_Statics::NewProp_SpawnStages = { "SpawnStages", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemySpawnControll, SpawnStages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEnemySpawnControll_Statics::NewProp_SpawnStages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemySpawnControll_Statics::NewProp_SpawnStages_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemySpawnControll_Statics::NewProp_SpawnMinDeley_MetaData[] = {
		{ "Category", "SpawnController" },
		{ "ModuleRelativePath", "EnemySpawnControll.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemySpawnControll_Statics::NewProp_SpawnMinDeley = { "SpawnMinDeley", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemySpawnControll, SpawnMinDeley), METADATA_PARAMS(Z_Construct_UClass_UEnemySpawnControll_Statics::NewProp_SpawnMinDeley_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemySpawnControll_Statics::NewProp_SpawnMinDeley_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemySpawnControll_Statics::NewProp_SpawnMaxDeley_MetaData[] = {
		{ "Category", "SpawnController" },
		{ "ModuleRelativePath", "EnemySpawnControll.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemySpawnControll_Statics::NewProp_SpawnMaxDeley = { "SpawnMaxDeley", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemySpawnControll, SpawnMaxDeley), METADATA_PARAMS(Z_Construct_UClass_UEnemySpawnControll_Statics::NewProp_SpawnMaxDeley_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemySpawnControll_Statics::NewProp_SpawnMaxDeley_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemySpawnControll_Statics::NewProp_ChangeStageTimerMultiplaer_MetaData[] = {
		{ "Category", "SpawnController" },
		{ "ModuleRelativePath", "EnemySpawnControll.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemySpawnControll_Statics::NewProp_ChangeStageTimerMultiplaer = { "ChangeStageTimerMultiplaer", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemySpawnControll, ChangeStageTimerMultiplaer), METADATA_PARAMS(Z_Construct_UClass_UEnemySpawnControll_Statics::NewProp_ChangeStageTimerMultiplaer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemySpawnControll_Statics::NewProp_ChangeStageTimerMultiplaer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemySpawnControll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemySpawnControll_Statics::NewProp_SpawnStages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemySpawnControll_Statics::NewProp_SpawnStages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemySpawnControll_Statics::NewProp_SpawnMinDeley,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemySpawnControll_Statics::NewProp_SpawnMaxDeley,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemySpawnControll_Statics::NewProp_ChangeStageTimerMultiplaer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemySpawnControll_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemySpawnControll>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnemySpawnControll_Statics::ClassParams = {
		&UEnemySpawnControll::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnemySpawnControll_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnemySpawnControll_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemySpawnControll_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemySpawnControll_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemySpawnControll()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnemySpawnControll_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnemySpawnControll, 4207772393);
	template<> EASYFISHGAME_API UClass* StaticClass<UEnemySpawnControll>()
	{
		return UEnemySpawnControll::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnemySpawnControll(Z_Construct_UClass_UEnemySpawnControll, &UEnemySpawnControll::StaticClass, TEXT("/Script/EasyFishGame"), TEXT("UEnemySpawnControll"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemySpawnControll);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
