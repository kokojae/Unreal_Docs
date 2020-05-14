// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HowTo_VTE/Countdown.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCountdown() {}
// Cross Module References
	HOWTO_VTE_API UClass* Z_Construct_UClass_ACountdown_NoRegister();
	HOWTO_VTE_API UClass* Z_Construct_UClass_ACountdown();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_HowTo_VTE();
// End Cross Module References
	void ACountdown::StaticRegisterNativesACountdown()
	{
	}
	UClass* Z_Construct_UClass_ACountdown_NoRegister()
	{
		return ACountdown::StaticClass();
	}
	struct Z_Construct_UClass_ACountdown_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACountdown_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HowTo_VTE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACountdown_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Countdown.h" },
		{ "ModuleRelativePath", "Countdown.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACountdown_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACountdown>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACountdown_Statics::ClassParams = {
		&ACountdown::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACountdown_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACountdown_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACountdown()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACountdown_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACountdown, 1062864606);
	template<> HOWTO_VTE_API UClass* StaticClass<ACountdown>()
	{
		return ACountdown::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACountdown(Z_Construct_UClass_ACountdown, &ACountdown::StaticClass, TEXT("/Script/HowTo_VTE"), TEXT("ACountdown"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACountdown);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
