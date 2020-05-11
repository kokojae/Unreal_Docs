// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HowTo_PlayerCamera/HowTo_PlayerCameraGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHowTo_PlayerCameraGameModeBase() {}
// Cross Module References
	HOWTO_PLAYERCAMERA_API UClass* Z_Construct_UClass_AHowTo_PlayerCameraGameModeBase_NoRegister();
	HOWTO_PLAYERCAMERA_API UClass* Z_Construct_UClass_AHowTo_PlayerCameraGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_HowTo_PlayerCamera();
// End Cross Module References
	void AHowTo_PlayerCameraGameModeBase::StaticRegisterNativesAHowTo_PlayerCameraGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AHowTo_PlayerCameraGameModeBase_NoRegister()
	{
		return AHowTo_PlayerCameraGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AHowTo_PlayerCameraGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHowTo_PlayerCameraGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HowTo_PlayerCamera,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHowTo_PlayerCameraGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "HowTo_PlayerCameraGameModeBase.h" },
		{ "ModuleRelativePath", "HowTo_PlayerCameraGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHowTo_PlayerCameraGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHowTo_PlayerCameraGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHowTo_PlayerCameraGameModeBase_Statics::ClassParams = {
		&AHowTo_PlayerCameraGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AHowTo_PlayerCameraGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHowTo_PlayerCameraGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHowTo_PlayerCameraGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHowTo_PlayerCameraGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHowTo_PlayerCameraGameModeBase, 2686413134);
	template<> HOWTO_PLAYERCAMERA_API UClass* StaticClass<AHowTo_PlayerCameraGameModeBase>()
	{
		return AHowTo_PlayerCameraGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHowTo_PlayerCameraGameModeBase(Z_Construct_UClass_AHowTo_PlayerCameraGameModeBase, &AHowTo_PlayerCameraGameModeBase::StaticClass, TEXT("/Script/HowTo_PlayerCamera"), TEXT("AHowTo_PlayerCameraGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHowTo_PlayerCameraGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
