// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EASYFISHGAME_EasyFishGameGameModeBase_generated_h
#error "EasyFishGameGameModeBase.generated.h already included, missing '#pragma once' in EasyFishGameGameModeBase.h"
#endif
#define EASYFISHGAME_EasyFishGameGameModeBase_generated_h

#define EasyFishGame_Source_EasyFishGame_EasyFishGameGameModeBase_h_9_DELEGATE \
static inline void FGameOverEvent_DelegateWrapper(const FMulticastScriptDelegate& GameOverEvent) \
{ \
	GameOverEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define EasyFishGame_Source_EasyFishGame_EasyFishGameGameModeBase_h_16_SPARSE_DATA
#define EasyFishGame_Source_EasyFishGame_EasyFishGameGameModeBase_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddPoint); \
	DECLARE_FUNCTION(execEndGame);


#define EasyFishGame_Source_EasyFishGame_EasyFishGameGameModeBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddPoint); \
	DECLARE_FUNCTION(execEndGame);


#define EasyFishGame_Source_EasyFishGame_EasyFishGameGameModeBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEasyFishGameGameModeBase(); \
	friend struct Z_Construct_UClass_AEasyFishGameGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AEasyFishGameGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/EasyFishGame"), NO_API) \
	DECLARE_SERIALIZER(AEasyFishGameGameModeBase)


#define EasyFishGame_Source_EasyFishGame_EasyFishGameGameModeBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAEasyFishGameGameModeBase(); \
	friend struct Z_Construct_UClass_AEasyFishGameGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AEasyFishGameGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/EasyFishGame"), NO_API) \
	DECLARE_SERIALIZER(AEasyFishGameGameModeBase)


#define EasyFishGame_Source_EasyFishGame_EasyFishGameGameModeBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEasyFishGameGameModeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEasyFishGameGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEasyFishGameGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEasyFishGameGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEasyFishGameGameModeBase(AEasyFishGameGameModeBase&&); \
	NO_API AEasyFishGameGameModeBase(const AEasyFishGameGameModeBase&); \
public:


#define EasyFishGame_Source_EasyFishGame_EasyFishGameGameModeBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEasyFishGameGameModeBase(AEasyFishGameGameModeBase&&); \
	NO_API AEasyFishGameGameModeBase(const AEasyFishGameGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEasyFishGameGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEasyFishGameGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEasyFishGameGameModeBase)


#define EasyFishGame_Source_EasyFishGame_EasyFishGameGameModeBase_h_16_PRIVATE_PROPERTY_OFFSET
#define EasyFishGame_Source_EasyFishGame_EasyFishGameGameModeBase_h_13_PROLOG
#define EasyFishGame_Source_EasyFishGame_EasyFishGameGameModeBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EasyFishGame_Source_EasyFishGame_EasyFishGameGameModeBase_h_16_PRIVATE_PROPERTY_OFFSET \
	EasyFishGame_Source_EasyFishGame_EasyFishGameGameModeBase_h_16_SPARSE_DATA \
	EasyFishGame_Source_EasyFishGame_EasyFishGameGameModeBase_h_16_RPC_WRAPPERS \
	EasyFishGame_Source_EasyFishGame_EasyFishGameGameModeBase_h_16_INCLASS \
	EasyFishGame_Source_EasyFishGame_EasyFishGameGameModeBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EasyFishGame_Source_EasyFishGame_EasyFishGameGameModeBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EasyFishGame_Source_EasyFishGame_EasyFishGameGameModeBase_h_16_PRIVATE_PROPERTY_OFFSET \
	EasyFishGame_Source_EasyFishGame_EasyFishGameGameModeBase_h_16_SPARSE_DATA \
	EasyFishGame_Source_EasyFishGame_EasyFishGameGameModeBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	EasyFishGame_Source_EasyFishGame_EasyFishGameGameModeBase_h_16_INCLASS_NO_PURE_DECLS \
	EasyFishGame_Source_EasyFishGame_EasyFishGameGameModeBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYFISHGAME_API UClass* StaticClass<class AEasyFishGameGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EasyFishGame_Source_EasyFishGame_EasyFishGameGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
