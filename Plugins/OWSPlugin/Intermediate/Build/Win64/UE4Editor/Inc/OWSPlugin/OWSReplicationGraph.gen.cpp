// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSReplicationGraph.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSReplicationGraph() {}
// Cross Module References
	OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOWSConnectionAlwaysRelevantNodePair();
	UPackage* Z_Construct_UPackage__Script_OWSPlugin();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNetConnection_NoRegister();
	OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSReplicationGraph_NoRegister();
	OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSReplicationGraph();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraph();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_ActorList_NoRegister();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_GridSpatialization2D_NoRegister();
	OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSReplicationGraphNode_PlayerStateFrequencyLimiter_NoRegister();
	OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSReplicationGraphNode_PlayerStateFrequencyLimiter();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode();
// End Cross Module References
class UScriptStruct* FOWSConnectionAlwaysRelevantNodePair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OWSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FOWSConnectionAlwaysRelevantNodePair_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWSConnectionAlwaysRelevantNodePair, Z_Construct_UPackage__Script_OWSPlugin(), TEXT("OWSConnectionAlwaysRelevantNodePair"), sizeof(FOWSConnectionAlwaysRelevantNodePair), Get_Z_Construct_UScriptStruct_FOWSConnectionAlwaysRelevantNodePair_Hash());
	}
	return Singleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FOWSConnectionAlwaysRelevantNodePair>()
{
	return FOWSConnectionAlwaysRelevantNodePair::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOWSConnectionAlwaysRelevantNodePair(FOWSConnectionAlwaysRelevantNodePair::StaticStruct, TEXT("/Script/OWSPlugin"), TEXT("OWSConnectionAlwaysRelevantNodePair"), false, nullptr, nullptr);
static struct FScriptStruct_OWSPlugin_StaticRegisterNativesFOWSConnectionAlwaysRelevantNodePair
{
	FScriptStruct_OWSPlugin_StaticRegisterNativesFOWSConnectionAlwaysRelevantNodePair()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OWSConnectionAlwaysRelevantNodePair")),new UScriptStruct::TCppStructOps<FOWSConnectionAlwaysRelevantNodePair>);
	}
} ScriptStruct_OWSPlugin_StaticRegisterNativesFOWSConnectionAlwaysRelevantNodePair;
	struct Z_Construct_UScriptStruct_FOWSConnectionAlwaysRelevantNodePair_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Node;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetConnection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NetConnection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWSConnectionAlwaysRelevantNodePair_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSReplicationGraph.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOWSConnectionAlwaysRelevantNodePair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWSConnectionAlwaysRelevantNodePair>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWSConnectionAlwaysRelevantNodePair_Statics::NewProp_Node_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSReplicationGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOWSConnectionAlwaysRelevantNodePair_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOWSConnectionAlwaysRelevantNodePair, Node), Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FOWSConnectionAlwaysRelevantNodePair_Statics::NewProp_Node_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOWSConnectionAlwaysRelevantNodePair_Statics::NewProp_Node_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWSConnectionAlwaysRelevantNodePair_Statics::NewProp_NetConnection_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSReplicationGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOWSConnectionAlwaysRelevantNodePair_Statics::NewProp_NetConnection = { "NetConnection", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOWSConnectionAlwaysRelevantNodePair, NetConnection), Z_Construct_UClass_UNetConnection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FOWSConnectionAlwaysRelevantNodePair_Statics::NewProp_NetConnection_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOWSConnectionAlwaysRelevantNodePair_Statics::NewProp_NetConnection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWSConnectionAlwaysRelevantNodePair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWSConnectionAlwaysRelevantNodePair_Statics::NewProp_Node,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWSConnectionAlwaysRelevantNodePair_Statics::NewProp_NetConnection,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWSConnectionAlwaysRelevantNodePair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
		nullptr,
		&NewStructOps,
		"OWSConnectionAlwaysRelevantNodePair",
		sizeof(FOWSConnectionAlwaysRelevantNodePair),
		alignof(FOWSConnectionAlwaysRelevantNodePair),
		Z_Construct_UScriptStruct_FOWSConnectionAlwaysRelevantNodePair_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FOWSConnectionAlwaysRelevantNodePair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOWSConnectionAlwaysRelevantNodePair_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FOWSConnectionAlwaysRelevantNodePair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOWSConnectionAlwaysRelevantNodePair()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOWSConnectionAlwaysRelevantNodePair_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OWSPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OWSConnectionAlwaysRelevantNodePair"), sizeof(FOWSConnectionAlwaysRelevantNodePair), Get_Z_Construct_UScriptStruct_FOWSConnectionAlwaysRelevantNodePair_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOWSConnectionAlwaysRelevantNodePair_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOWSConnectionAlwaysRelevantNodePair_Hash() { return 1428231300U; }
	void UOWSReplicationGraph::StaticRegisterNativesUOWSReplicationGraph()
	{
	}
	UClass* Z_Construct_UClass_UOWSReplicationGraph_NoRegister()
	{
		return UOWSReplicationGraph::StaticClass();
	}
	struct Z_Construct_UClass_UOWSReplicationGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsWithoutNetConnection_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsWithoutNetConnection;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsWithoutNetConnection_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlwaysRelevantForConnectionList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AlwaysRelevantForConnectionList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlwaysRelevantForConnectionList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlwaysRelevantNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AlwaysRelevantNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GridNode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOWSReplicationGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReplicationGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSReplicationGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OWSReplicationGraph.h" },
		{ "ModuleRelativePath", "Public/OWSReplicationGraph.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSReplicationGraph_Statics::NewProp_ActorsWithoutNetConnection_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSReplicationGraph.h" },
		{ "ToolTip", "Actors that are only supposed to replicate to their owning connection, but that did not have a connection on spawn" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOWSReplicationGraph_Statics::NewProp_ActorsWithoutNetConnection = { "ActorsWithoutNetConnection", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWSReplicationGraph, ActorsWithoutNetConnection), METADATA_PARAMS(Z_Construct_UClass_UOWSReplicationGraph_Statics::NewProp_ActorsWithoutNetConnection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSReplicationGraph_Statics::NewProp_ActorsWithoutNetConnection_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWSReplicationGraph_Statics::NewProp_ActorsWithoutNetConnection_Inner = { "ActorsWithoutNetConnection", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSReplicationGraph_Statics::NewProp_AlwaysRelevantForConnectionList_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSReplicationGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOWSReplicationGraph_Statics::NewProp_AlwaysRelevantForConnectionList = { "AlwaysRelevantForConnectionList", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWSReplicationGraph, AlwaysRelevantForConnectionList), METADATA_PARAMS(Z_Construct_UClass_UOWSReplicationGraph_Statics::NewProp_AlwaysRelevantForConnectionList_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSReplicationGraph_Statics::NewProp_AlwaysRelevantForConnectionList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSReplicationGraph_Statics::NewProp_AlwaysRelevantForConnectionList_Inner = { "AlwaysRelevantForConnectionList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOWSConnectionAlwaysRelevantNodePair, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSReplicationGraph_Statics::NewProp_AlwaysRelevantNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSReplicationGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWSReplicationGraph_Statics::NewProp_AlwaysRelevantNode = { "AlwaysRelevantNode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWSReplicationGraph, AlwaysRelevantNode), Z_Construct_UClass_UReplicationGraphNode_ActorList_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOWSReplicationGraph_Statics::NewProp_AlwaysRelevantNode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSReplicationGraph_Statics::NewProp_AlwaysRelevantNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSReplicationGraph_Statics::NewProp_GridNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSReplicationGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWSReplicationGraph_Statics::NewProp_GridNode = { "GridNode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWSReplicationGraph, GridNode), Z_Construct_UClass_UReplicationGraphNode_GridSpatialization2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOWSReplicationGraph_Statics::NewProp_GridNode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSReplicationGraph_Statics::NewProp_GridNode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWSReplicationGraph_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSReplicationGraph_Statics::NewProp_ActorsWithoutNetConnection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSReplicationGraph_Statics::NewProp_ActorsWithoutNetConnection_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSReplicationGraph_Statics::NewProp_AlwaysRelevantForConnectionList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSReplicationGraph_Statics::NewProp_AlwaysRelevantForConnectionList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSReplicationGraph_Statics::NewProp_AlwaysRelevantNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSReplicationGraph_Statics::NewProp_GridNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOWSReplicationGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWSReplicationGraph>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOWSReplicationGraph_Statics::ClassParams = {
		&UOWSReplicationGraph::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOWSReplicationGraph_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UOWSReplicationGraph_Statics::PropPointers),
		0,
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UOWSReplicationGraph_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UOWSReplicationGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOWSReplicationGraph()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOWSReplicationGraph_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOWSReplicationGraph, 2274767783);
	template<> OWSPLUGIN_API UClass* StaticClass<UOWSReplicationGraph>()
	{
		return UOWSReplicationGraph::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOWSReplicationGraph(Z_Construct_UClass_UOWSReplicationGraph, &UOWSReplicationGraph::StaticClass, TEXT("/Script/OWSPlugin"), TEXT("UOWSReplicationGraph"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOWSReplicationGraph);
	void UOWSReplicationGraphNode_PlayerStateFrequencyLimiter::StaticRegisterNativesUOWSReplicationGraphNode_PlayerStateFrequencyLimiter()
	{
	}
	UClass* Z_Construct_UClass_UOWSReplicationGraphNode_PlayerStateFrequencyLimiter_NoRegister()
	{
		return UOWSReplicationGraphNode_PlayerStateFrequencyLimiter::StaticClass();
	}
	struct Z_Construct_UClass_UOWSReplicationGraphNode_PlayerStateFrequencyLimiter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOWSReplicationGraphNode_PlayerStateFrequencyLimiter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReplicationGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSReplicationGraphNode_PlayerStateFrequencyLimiter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OWSReplicationGraph.h" },
		{ "ModuleRelativePath", "Public/OWSReplicationGraph.h" },
		{ "ToolTip", "This is a specialized node for handling PlayerState replication in a frequency limited fashion. It tracks all player states but only returns a subset of them to the replication driver each frame." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOWSReplicationGraphNode_PlayerStateFrequencyLimiter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWSReplicationGraphNode_PlayerStateFrequencyLimiter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOWSReplicationGraphNode_PlayerStateFrequencyLimiter_Statics::ClassParams = {
		&UOWSReplicationGraphNode_PlayerStateFrequencyLimiter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UOWSReplicationGraphNode_PlayerStateFrequencyLimiter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UOWSReplicationGraphNode_PlayerStateFrequencyLimiter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOWSReplicationGraphNode_PlayerStateFrequencyLimiter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOWSReplicationGraphNode_PlayerStateFrequencyLimiter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOWSReplicationGraphNode_PlayerStateFrequencyLimiter, 3735419429);
	template<> OWSPLUGIN_API UClass* StaticClass<UOWSReplicationGraphNode_PlayerStateFrequencyLimiter>()
	{
		return UOWSReplicationGraphNode_PlayerStateFrequencyLimiter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOWSReplicationGraphNode_PlayerStateFrequencyLimiter(Z_Construct_UClass_UOWSReplicationGraphNode_PlayerStateFrequencyLimiter, &UOWSReplicationGraphNode_PlayerStateFrequencyLimiter::StaticClass, TEXT("/Script/OWSPlugin"), TEXT("UOWSReplicationGraphNode_PlayerStateFrequencyLimiter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOWSReplicationGraphNode_PlayerStateFrequencyLimiter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
