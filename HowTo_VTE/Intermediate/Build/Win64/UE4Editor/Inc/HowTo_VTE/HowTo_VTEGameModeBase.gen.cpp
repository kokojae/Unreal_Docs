// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HowTo_VTE/HowTo_VTEGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHowTo_VTEGameModeBase() {}
// Cross Module References
	HOWTO_VTE_API UClass* Z_Construct_UClass_AHowTo_VTEGameModeBase_NoRegister();
	HOWTO_VTE_API UClass* Z_Construct_UClass_AHowTo_VTEGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_HowTo_VTE();
// End Cross Module References
	void AHowTo_VTEGameModeBase::StaticRegisterNativesAHowTo_VTEGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AHowTo_VTEGameModeBase_NoRegister()
	{
		return AHowTo_VTEGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AHowTo_VTEGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHowTo_VTEGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HowTo_VTE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHowTo_VTEGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "HowTo_VTEGameModeBase.h" },
		{ "ModuleRelativePath", "HowTo_VTEGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHowTo_VTEGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHowTo_VTEGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHowTo_VTEGameModeBase_Statics::ClassParams = {
		&AHowTo_VTEGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AHowTo_VTEGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHowTo_VTEGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHowTo_VTEGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHowTo_VTEGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHowTo_VTEGameModeBase, 88717305);
	template<> HOWTO_VTE_API UClass* StaticClass<AHowTo_VTEGameModeBase>()
	{
		return AHowTo_VTEGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHowTo_VTEGameModeBase(Z_Construct_UClass_AHowTo_VTEGameModeBase, &AHowTo_VTEGameModeBase::StaticClass, TEXT("/Script/HowTo_VTE"), TEXT("AHowTo_VTEGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHowTo_VTEGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
