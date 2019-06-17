// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSLoginWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSLoginWidget() {}
// Cross Module References
	OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSLoginWidget_NoRegister();
	OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSLoginWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_OWSPlugin();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSLoginWidget_ErrorLoginAndCreateSession();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSLoginWidget_LoginAndCreateSession();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSLoginWidget_NotifyLoginAndCreateSession();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSLoginWidget_OpenCreateAccountInBrowser();
// End Cross Module References
	static FName NAME_UOWSLoginWidget_ErrorLoginAndCreateSession = FName(TEXT("ErrorLoginAndCreateSession"));
	void UOWSLoginWidget::ErrorLoginAndCreateSession(const FString& ErrorMsg)
	{
		OWSLoginWidget_eventErrorLoginAndCreateSession_Parms Parms;
		Parms.ErrorMsg=ErrorMsg;
		ProcessEvent(FindFunctionChecked(NAME_UOWSLoginWidget_ErrorLoginAndCreateSession),&Parms);
	}
	static FName NAME_UOWSLoginWidget_NotifyLoginAndCreateSession = FName(TEXT("NotifyLoginAndCreateSession"));
	void UOWSLoginWidget::NotifyLoginAndCreateSession(const FString& UserSessionGUID)
	{
		OWSLoginWidget_eventNotifyLoginAndCreateSession_Parms Parms;
		Parms.UserSessionGUID=UserSessionGUID;
		ProcessEvent(FindFunctionChecked(NAME_UOWSLoginWidget_NotifyLoginAndCreateSession),&Parms);
	}
	void UOWSLoginWidget::StaticRegisterNativesUOWSLoginWidget()
	{
		UClass* Class = UOWSLoginWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoginAndCreateSession", &UOWSLoginWidget::execLoginAndCreateSession },
			{ "OpenCreateAccountInBrowser", &UOWSLoginWidget::execOpenCreateAccountInBrowser },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOWSLoginWidget_ErrorLoginAndCreateSession_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMsg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSLoginWidget_ErrorLoginAndCreateSession_Statics::NewProp_ErrorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSLoginWidget_ErrorLoginAndCreateSession_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSLoginWidget_eventErrorLoginAndCreateSession_Parms, ErrorMsg), METADATA_PARAMS(Z_Construct_UFunction_UOWSLoginWidget_ErrorLoginAndCreateSession_Statics::NewProp_ErrorMsg_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UOWSLoginWidget_ErrorLoginAndCreateSession_Statics::NewProp_ErrorMsg_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSLoginWidget_ErrorLoginAndCreateSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSLoginWidget_ErrorLoginAndCreateSession_Statics::NewProp_ErrorMsg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSLoginWidget_ErrorLoginAndCreateSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "Login" },
		{ "ModuleRelativePath", "Public/OWSLoginWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSLoginWidget_ErrorLoginAndCreateSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSLoginWidget, nullptr, "ErrorLoginAndCreateSession", sizeof(OWSLoginWidget_eventErrorLoginAndCreateSession_Parms), Z_Construct_UFunction_UOWSLoginWidget_ErrorLoginAndCreateSession_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOWSLoginWidget_ErrorLoginAndCreateSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSLoginWidget_ErrorLoginAndCreateSession_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSLoginWidget_ErrorLoginAndCreateSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSLoginWidget_ErrorLoginAndCreateSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSLoginWidget_ErrorLoginAndCreateSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWSLoginWidget_LoginAndCreateSession_Statics
	{
		struct OWSLoginWidget_eventLoginAndCreateSession_Parms
		{
			FString Email;
			FString Password;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Password;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Email;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSLoginWidget_LoginAndCreateSession_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSLoginWidget_eventLoginAndCreateSession_Parms, Password), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSLoginWidget_LoginAndCreateSession_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSLoginWidget_eventLoginAndCreateSession_Parms, Email), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSLoginWidget_LoginAndCreateSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSLoginWidget_LoginAndCreateSession_Statics::NewProp_Password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSLoginWidget_LoginAndCreateSession_Statics::NewProp_Email,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSLoginWidget_LoginAndCreateSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "Login" },
		{ "ModuleRelativePath", "Public/OWSLoginWidget.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"Login\")\nvoid Login(FString Email, FString Password);\n\nvoid OnLoginResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);\n\nUFUNCTION(BlueprintImplementableEvent, Category = \"Login\")\n        void ErrorLogin(const FString &ErrorMsg);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSLoginWidget_LoginAndCreateSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSLoginWidget, nullptr, "LoginAndCreateSession", sizeof(OWSLoginWidget_eventLoginAndCreateSession_Parms), Z_Construct_UFunction_UOWSLoginWidget_LoginAndCreateSession_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOWSLoginWidget_LoginAndCreateSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSLoginWidget_LoginAndCreateSession_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSLoginWidget_LoginAndCreateSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSLoginWidget_LoginAndCreateSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSLoginWidget_LoginAndCreateSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWSLoginWidget_NotifyLoginAndCreateSession_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserSessionGUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserSessionGUID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSLoginWidget_NotifyLoginAndCreateSession_Statics::NewProp_UserSessionGUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSLoginWidget_NotifyLoginAndCreateSession_Statics::NewProp_UserSessionGUID = { "UserSessionGUID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSLoginWidget_eventNotifyLoginAndCreateSession_Parms, UserSessionGUID), METADATA_PARAMS(Z_Construct_UFunction_UOWSLoginWidget_NotifyLoginAndCreateSession_Statics::NewProp_UserSessionGUID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UOWSLoginWidget_NotifyLoginAndCreateSession_Statics::NewProp_UserSessionGUID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSLoginWidget_NotifyLoginAndCreateSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSLoginWidget_NotifyLoginAndCreateSession_Statics::NewProp_UserSessionGUID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSLoginWidget_NotifyLoginAndCreateSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "Login" },
		{ "ModuleRelativePath", "Public/OWSLoginWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSLoginWidget_NotifyLoginAndCreateSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSLoginWidget, nullptr, "NotifyLoginAndCreateSession", sizeof(OWSLoginWidget_eventNotifyLoginAndCreateSession_Parms), Z_Construct_UFunction_UOWSLoginWidget_NotifyLoginAndCreateSession_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOWSLoginWidget_NotifyLoginAndCreateSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSLoginWidget_NotifyLoginAndCreateSession_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSLoginWidget_NotifyLoginAndCreateSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSLoginWidget_NotifyLoginAndCreateSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSLoginWidget_NotifyLoginAndCreateSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWSLoginWidget_OpenCreateAccountInBrowser_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSLoginWidget_OpenCreateAccountInBrowser_Statics::Function_MetaDataParams[] = {
		{ "Category", "Login" },
		{ "ModuleRelativePath", "Public/OWSLoginWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSLoginWidget_OpenCreateAccountInBrowser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSLoginWidget, nullptr, "OpenCreateAccountInBrowser", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSLoginWidget_OpenCreateAccountInBrowser_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSLoginWidget_OpenCreateAccountInBrowser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSLoginWidget_OpenCreateAccountInBrowser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSLoginWidget_OpenCreateAccountInBrowser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOWSLoginWidget_NoRegister()
	{
		return UOWSLoginWidget::StaticClass();
	}
	struct Z_Construct_UClass_UOWSLoginWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoginTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LoginTimeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RPGAPIPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RPGAPIPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RPGAPICustomerKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RPGAPICustomerKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOWSLoginWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOWSLoginWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWSLoginWidget_ErrorLoginAndCreateSession, "ErrorLoginAndCreateSession" }, // 1939819932
		{ &Z_Construct_UFunction_UOWSLoginWidget_LoginAndCreateSession, "LoginAndCreateSession" }, // 1158723226
		{ &Z_Construct_UFunction_UOWSLoginWidget_NotifyLoginAndCreateSession, "NotifyLoginAndCreateSession" }, // 2677768404
		{ &Z_Construct_UFunction_UOWSLoginWidget_OpenCreateAccountInBrowser, "OpenCreateAccountInBrowser" }, // 2863510003
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSLoginWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OWSLoginWidget.h" },
		{ "ModuleRelativePath", "Public/OWSLoginWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSLoginWidget_Statics::NewProp_LoginTimeout_MetaData[] = {
		{ "Category", "Login" },
		{ "ModuleRelativePath", "Public/OWSLoginWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWSLoginWidget_Statics::NewProp_LoginTimeout = { "LoginTimeout", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWSLoginWidget, LoginTimeout), METADATA_PARAMS(Z_Construct_UClass_UOWSLoginWidget_Statics::NewProp_LoginTimeout_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSLoginWidget_Statics::NewProp_LoginTimeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSLoginWidget_Statics::NewProp_RPGAPIPath_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/OWSLoginWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOWSLoginWidget_Statics::NewProp_RPGAPIPath = { "RPGAPIPath", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWSLoginWidget, RPGAPIPath), METADATA_PARAMS(Z_Construct_UClass_UOWSLoginWidget_Statics::NewProp_RPGAPIPath_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSLoginWidget_Statics::NewProp_RPGAPIPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSLoginWidget_Statics::NewProp_RPGAPICustomerKey_MetaData[] = {
		{ "Category", "OWSLoginWidget" },
		{ "ModuleRelativePath", "Public/OWSLoginWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOWSLoginWidget_Statics::NewProp_RPGAPICustomerKey = { "RPGAPICustomerKey", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWSLoginWidget, RPGAPICustomerKey), METADATA_PARAMS(Z_Construct_UClass_UOWSLoginWidget_Statics::NewProp_RPGAPICustomerKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSLoginWidget_Statics::NewProp_RPGAPICustomerKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWSLoginWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSLoginWidget_Statics::NewProp_LoginTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSLoginWidget_Statics::NewProp_RPGAPIPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSLoginWidget_Statics::NewProp_RPGAPICustomerKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOWSLoginWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWSLoginWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOWSLoginWidget_Statics::ClassParams = {
		&UOWSLoginWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOWSLoginWidget_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UOWSLoginWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOWSLoginWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UOWSLoginWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOWSLoginWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOWSLoginWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOWSLoginWidget, 3459619769);
	template<> OWSPLUGIN_API UClass* StaticClass<UOWSLoginWidget>()
	{
		return UOWSLoginWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOWSLoginWidget(Z_Construct_UClass_UOWSLoginWidget, &UOWSLoginWidget::StaticClass, TEXT("/Script/OWSPlugin"), TEXT("UOWSLoginWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOWSLoginWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
