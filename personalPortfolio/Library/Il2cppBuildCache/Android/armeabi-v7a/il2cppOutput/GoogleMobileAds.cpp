﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>
struct Action_1_tF32D2997F689B4171DE2284285AF089A8695EA0F;
// System.Action`1<GoogleMobileAds.Api.InitializationStatus>
struct Action_1_t76C911F904AEFC18EBAF7EADB7F104336FAEFA4E;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>
struct EventHandler_1_tA24FE9756B4DD485ED4DA66B27CA04B15CFC1FBA;
// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>
struct EventHandler_1_t526CA7C3983C3267674BD8F836C5636225145E29;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_t411926F361CCAF42F3C58C87211E8F14273BC3D5;
// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_t9B9B460F9DB75D2F58F389A4D277579EC56CD051;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722;
// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>
struct EventHandler_1_tAFD217BA4E441C8C23BD1BCAC41E6A87ADDCAB16;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229;
// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras>
struct List_1_t96479BD81250DF7106B85826453127A5A2A6C54F;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// GoogleMobileAds.Api.AdError
struct AdError_t5B90CCE50DB0C6B1968744A72BA4B0740ED42E5C;
// GoogleMobileAds.Common.AdErrorClientEventArgs
struct AdErrorClientEventArgs_t73C6795B705D7CE9848CDCCA7154AAB39B85C2B5;
// GoogleMobileAds.Api.AdErrorEventArgs
struct AdErrorEventArgs_t3B2372D81363EC04AD07C88C7617D0B7B0B325E7;
// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_tB040FD7B64D0D1F4671A2823498406E1C187CDC4;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_t43F976BC16DDDF2AE2ED5C0BDF6BB95662D26117;
// GoogleMobileAds.Api.AdValue
struct AdValue_t46ECFB14D8E6612DF7D24E165119739716D37A02;
// GoogleMobileAds.Api.AdValueEventArgs
struct AdValueEventArgs_tF8C856DECA9FC8987B43DA05908FB65A88BE2E92;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA;
// GoogleMobileAds.Common.IAdErrorClient
struct IAdErrorClient_tF5804F8AD2FF40283F805390C9691AB605E08CBA;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// GoogleMobileAds.IClientFactory
struct IClientFactory_t23152E2459B793B600A3222ACECF9C7153E3399C;
// GoogleMobileAds.Common.IInitializationStatusClient
struct IInitializationStatusClient_t3433C527B3A952414FB5B21A99EB19FB82430D92;
// GoogleMobileAds.Common.IInterstitialClient
struct IInterstitialClient_t94D75FF883BB56DCC5B8D79206F15602C70E96FD;
// GoogleMobileAds.Common.ILoadAdErrorClient
struct ILoadAdErrorClient_tD0B62F59BE588BD91111BF3364EC7684F785EAB5;
// GoogleMobileAds.Common.IMobileAdsClient
struct IMobileAdsClient_t3A5E37CB8521E23BC8639CE1E01E0EA415325AB0;
// GoogleMobileAds.Api.InitializationStatus
struct InitializationStatus_tED3C89889BF9EBF4C9090FE8CE9FC9CEF1D208C6;
// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_tD5661C7E225FC17B9373D1F2E6A32DADD5DB7C18;
// GoogleMobileAds.Api.LoadAdError
struct LoadAdError_tB51B9E5D5C54229184F57341F7A863F0A0E3AA84;
// GoogleMobileAds.Common.LoadAdErrorClientEventArgs
struct LoadAdErrorClientEventArgs_t27FDE8199AFA1FEFFE981B622C006070526F5285;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// GoogleMobileAds.Api.MobileAds
struct MobileAds_t520597AEB50498C14D131B5CA0A17B8F702CD7DC;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0
struct U3CInitializeU3Ec__AnonStorey0_t31F5126672CFD023E5C335137A9972529CD83DDF;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tF32D2997F689B4171DE2284285AF089A8695EA0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdErrorEventArgs_t3B2372D81363EC04AD07C88C7617D0B7B0B325E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdError_t5B90CCE50DB0C6B1968744A72BA4B0740ED42E5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdFailedToLoadEventArgs_tB040FD7B64D0D1F4671A2823498406E1C187CDC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t9B9B460F9DB75D2F58F389A4D277579EC56CD051_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tA24FE9756B4DD485ED4DA66B27CA04B15CFC1FBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tAFD217BA4E441C8C23BD1BCAC41E6A87ADDCAB16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IClientFactory_t23152E2459B793B600A3222ACECF9C7153E3399C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInterstitialClient_t94D75FF883BB56DCC5B8D79206F15602C70E96FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMobileAdsClient_t3A5E37CB8521E23BC8639CE1E01E0EA415325AB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitializationStatus_tED3C89889BF9EBF4C9090FE8CE9FC9CEF1D208C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadAdError_tB51B9E5D5C54229184F57341F7A863F0A0E3AA84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MobileAdsEventExecutor_t3ED415346273533C25DC69E7FE351D96377F0DE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MobileAds_t520597AEB50498C14D131B5CA0A17B8F702CD7DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CInitializeU3Ec__AnonStorey0_t31F5126672CFD023E5C335137A9972529CD83DDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1E40C18D8AC4A6D9A62D3A099D09AF791342A6DB;
IL2CPP_EXTERN_C String_t* _stringLiteralB0496525135724A6D7138AB94BD6661514AD7DAE;
IL2CPP_EXTERN_C String_t* _stringLiteralBDD22D9991854F9B5ADA35715330812319A1362B;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m0257C511739FB8BDF23AA91B973A3205BF0CE19D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mD1E8E76A9AA3FA9821B30FD9388617D8708C9413_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m35E5356C92645F0C89E9561EA5E794F7086FF2FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m3F5C67CAC3B3EFE0787CF7C39CE8B79B1D9DD11B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mD0EA5B272CD0D6B059863E9A8C3AF9631914C735_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m3C1F6098E0A2CA859AF43A9F4E9C4118B422FE61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m3ED629943BB6D738B50C64F570E5F1C78BC94580_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m722ADDB4DA723B6827CA121BD10A750ED12E6D23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__0_m455D7BF7F156DFB4A70B092531EF8B2010C79C50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__1_mB02BEFE8DABCDA5E1CF4485A17F3866211ABAD78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__2_m032E16F3542B31ABC8685D391B76D2E405AB79C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__3_m82A370891A12C583E8E268B7FC504564E4905129_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__4_mF4B78B6B3250A9784F988361DB84F52B38E405E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__5_m4294236252D4F5D565A6BD8FFF56AA6C0D65F24C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__6_m87B1FC8654206454CBDA4C843E67C8EBB669250E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MobileAds_GetClientFactory_m74BA1C97D5B9AC99D1703B03F1D51E1909525E43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m0B5F6755D7AE6945CAA328FA4BA8482720578257_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t778F82E8AF67F9680C0BC6D0239B06AEDCE19B46 
{
public:

public:
};


// System.Object


// GoogleMobileAds.Api.AdError
struct AdError_t5B90CCE50DB0C6B1968744A72BA4B0740ED42E5C  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Api.AdError::client
	RuntimeObject* ___client_0;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(AdError_t5B90CCE50DB0C6B1968744A72BA4B0740ED42E5C, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}
};


// GoogleMobileAds.Api.AdRequest
struct AdRequest_t43F976BC16DDDF2AE2ED5C0BDF6BB95662D26117  : public RuntimeObject
{
public:
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest::<Keywords>k__BackingField
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ___U3CKeywordsU3Ek__BackingField_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest::<Extras>k__BackingField
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___U3CExtrasU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest::<MediationExtras>k__BackingField
	List_1_t96479BD81250DF7106B85826453127A5A2A6C54F * ___U3CMediationExtrasU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CKeywordsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdRequest_t43F976BC16DDDF2AE2ED5C0BDF6BB95662D26117, ___U3CKeywordsU3Ek__BackingField_1)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get_U3CKeywordsU3Ek__BackingField_1() const { return ___U3CKeywordsU3Ek__BackingField_1; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of_U3CKeywordsU3Ek__BackingField_1() { return &___U3CKeywordsU3Ek__BackingField_1; }
	inline void set_U3CKeywordsU3Ek__BackingField_1(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		___U3CKeywordsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CKeywordsU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CExtrasU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AdRequest_t43F976BC16DDDF2AE2ED5C0BDF6BB95662D26117, ___U3CExtrasU3Ek__BackingField_2)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_U3CExtrasU3Ek__BackingField_2() const { return ___U3CExtrasU3Ek__BackingField_2; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_U3CExtrasU3Ek__BackingField_2() { return &___U3CExtrasU3Ek__BackingField_2; }
	inline void set_U3CExtrasU3Ek__BackingField_2(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___U3CExtrasU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExtrasU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMediationExtrasU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AdRequest_t43F976BC16DDDF2AE2ED5C0BDF6BB95662D26117, ___U3CMediationExtrasU3Ek__BackingField_3)); }
	inline List_1_t96479BD81250DF7106B85826453127A5A2A6C54F * get_U3CMediationExtrasU3Ek__BackingField_3() const { return ___U3CMediationExtrasU3Ek__BackingField_3; }
	inline List_1_t96479BD81250DF7106B85826453127A5A2A6C54F ** get_address_of_U3CMediationExtrasU3Ek__BackingField_3() { return &___U3CMediationExtrasU3Ek__BackingField_3; }
	inline void set_U3CMediationExtrasU3Ek__BackingField_3(List_1_t96479BD81250DF7106B85826453127A5A2A6C54F * value)
	{
		___U3CMediationExtrasU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMediationExtrasU3Ek__BackingField_3), (void*)value);
	}
};

struct AdRequest_t43F976BC16DDDF2AE2ED5C0BDF6BB95662D26117_StaticFields
{
public:
	// System.String GoogleMobileAds.Api.AdRequest::<Version>k__BackingField
	String_t* ___U3CVersionU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CVersionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AdRequest_t43F976BC16DDDF2AE2ED5C0BDF6BB95662D26117_StaticFields, ___U3CVersionU3Ek__BackingField_0)); }
	inline String_t* get_U3CVersionU3Ek__BackingField_0() const { return ___U3CVersionU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CVersionU3Ek__BackingField_0() { return &___U3CVersionU3Ek__BackingField_0; }
	inline void set_U3CVersionU3Ek__BackingField_0(String_t* value)
	{
		___U3CVersionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVersionU3Ek__BackingField_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// GoogleMobileAds.Api.InitializationStatus
struct InitializationStatus_tED3C89889BF9EBF4C9090FE8CE9FC9CEF1D208C6  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IInitializationStatusClient GoogleMobileAds.Api.InitializationStatus::client
	RuntimeObject* ___client_0;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(InitializationStatus_tED3C89889BF9EBF4C9090FE8CE9FC9CEF1D208C6, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}
};


// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_tD5661C7E225FC17B9373D1F2E6A32DADD5DB7C18  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IInterstitialClient GoogleMobileAds.Api.InterstitialAd::client
	RuntimeObject* ___client_0;
	// System.String GoogleMobileAds.Api.InterstitialAd::adUnitId
	String_t* ___adUnitId_1;
	// System.Boolean GoogleMobileAds.Api.InterstitialAd::isLoaded
	bool ___isLoaded_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdLoaded
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdLoaded_3;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdFailedToLoad
	EventHandler_1_t411926F361CCAF42F3C58C87211E8F14273BC3D5 * ___OnAdFailedToLoad_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdOpening
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdOpening_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdClosed
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdClosed_6;
	// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdFailedToShow
	EventHandler_1_t526CA7C3983C3267674BD8F836C5636225145E29 * ___OnAdFailedToShow_7;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdDidRecordImpression
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdDidRecordImpression_8;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.InterstitialAd::OnPaidEvent
	EventHandler_1_t9B9B460F9DB75D2F58F389A4D277579EC56CD051 * ___OnPaidEvent_9;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(InterstitialAd_tD5661C7E225FC17B9373D1F2E6A32DADD5DB7C18, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}

	inline static int32_t get_offset_of_adUnitId_1() { return static_cast<int32_t>(offsetof(InterstitialAd_tD5661C7E225FC17B9373D1F2E6A32DADD5DB7C18, ___adUnitId_1)); }
	inline String_t* get_adUnitId_1() const { return ___adUnitId_1; }
	inline String_t** get_address_of_adUnitId_1() { return &___adUnitId_1; }
	inline void set_adUnitId_1(String_t* value)
	{
		___adUnitId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___adUnitId_1), (void*)value);
	}

	inline static int32_t get_offset_of_isLoaded_2() { return static_cast<int32_t>(offsetof(InterstitialAd_tD5661C7E225FC17B9373D1F2E6A32DADD5DB7C18, ___isLoaded_2)); }
	inline bool get_isLoaded_2() const { return ___isLoaded_2; }
	inline bool* get_address_of_isLoaded_2() { return &___isLoaded_2; }
	inline void set_isLoaded_2(bool value)
	{
		___isLoaded_2 = value;
	}

	inline static int32_t get_offset_of_OnAdLoaded_3() { return static_cast<int32_t>(offsetof(InterstitialAd_tD5661C7E225FC17B9373D1F2E6A32DADD5DB7C18, ___OnAdLoaded_3)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdLoaded_3() const { return ___OnAdLoaded_3; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdLoaded_3() { return &___OnAdLoaded_3; }
	inline void set_OnAdLoaded_3(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdLoaded_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdLoaded_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdFailedToLoad_4() { return static_cast<int32_t>(offsetof(InterstitialAd_tD5661C7E225FC17B9373D1F2E6A32DADD5DB7C18, ___OnAdFailedToLoad_4)); }
	inline EventHandler_1_t411926F361CCAF42F3C58C87211E8F14273BC3D5 * get_OnAdFailedToLoad_4() const { return ___OnAdFailedToLoad_4; }
	inline EventHandler_1_t411926F361CCAF42F3C58C87211E8F14273BC3D5 ** get_address_of_OnAdFailedToLoad_4() { return &___OnAdFailedToLoad_4; }
	inline void set_OnAdFailedToLoad_4(EventHandler_1_t411926F361CCAF42F3C58C87211E8F14273BC3D5 * value)
	{
		___OnAdFailedToLoad_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdFailedToLoad_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdOpening_5() { return static_cast<int32_t>(offsetof(InterstitialAd_tD5661C7E225FC17B9373D1F2E6A32DADD5DB7C18, ___OnAdOpening_5)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdOpening_5() const { return ___OnAdOpening_5; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdOpening_5() { return &___OnAdOpening_5; }
	inline void set_OnAdOpening_5(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdOpening_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdOpening_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdClosed_6() { return static_cast<int32_t>(offsetof(InterstitialAd_tD5661C7E225FC17B9373D1F2E6A32DADD5DB7C18, ___OnAdClosed_6)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdClosed_6() const { return ___OnAdClosed_6; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdClosed_6() { return &___OnAdClosed_6; }
	inline void set_OnAdClosed_6(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdClosed_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdClosed_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdFailedToShow_7() { return static_cast<int32_t>(offsetof(InterstitialAd_tD5661C7E225FC17B9373D1F2E6A32DADD5DB7C18, ___OnAdFailedToShow_7)); }
	inline EventHandler_1_t526CA7C3983C3267674BD8F836C5636225145E29 * get_OnAdFailedToShow_7() const { return ___OnAdFailedToShow_7; }
	inline EventHandler_1_t526CA7C3983C3267674BD8F836C5636225145E29 ** get_address_of_OnAdFailedToShow_7() { return &___OnAdFailedToShow_7; }
	inline void set_OnAdFailedToShow_7(EventHandler_1_t526CA7C3983C3267674BD8F836C5636225145E29 * value)
	{
		___OnAdFailedToShow_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdFailedToShow_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdDidRecordImpression_8() { return static_cast<int32_t>(offsetof(InterstitialAd_tD5661C7E225FC17B9373D1F2E6A32DADD5DB7C18, ___OnAdDidRecordImpression_8)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdDidRecordImpression_8() const { return ___OnAdDidRecordImpression_8; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdDidRecordImpression_8() { return &___OnAdDidRecordImpression_8; }
	inline void set_OnAdDidRecordImpression_8(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdDidRecordImpression_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdDidRecordImpression_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnPaidEvent_9() { return static_cast<int32_t>(offsetof(InterstitialAd_tD5661C7E225FC17B9373D1F2E6A32DADD5DB7C18, ___OnPaidEvent_9)); }
	inline EventHandler_1_t9B9B460F9DB75D2F58F389A4D277579EC56CD051 * get_OnPaidEvent_9() const { return ___OnPaidEvent_9; }
	inline EventHandler_1_t9B9B460F9DB75D2F58F389A4D277579EC56CD051 ** get_address_of_OnPaidEvent_9() { return &___OnPaidEvent_9; }
	inline void set_OnPaidEvent_9(EventHandler_1_t9B9B460F9DB75D2F58F389A4D277579EC56CD051 * value)
	{
		___OnPaidEvent_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPaidEvent_9), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// GoogleMobileAds.Api.MobileAds
struct MobileAds_t520597AEB50498C14D131B5CA0A17B8F702CD7DC  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IMobileAdsClient GoogleMobileAds.Api.MobileAds::client
	RuntimeObject* ___client_0;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(MobileAds_t520597AEB50498C14D131B5CA0A17B8F702CD7DC, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}
};

struct MobileAds_t520597AEB50498C14D131B5CA0A17B8F702CD7DC_StaticFields
{
public:
	// GoogleMobileAds.IClientFactory GoogleMobileAds.Api.MobileAds::clientFactory
	RuntimeObject* ___clientFactory_1;
	// GoogleMobileAds.Api.MobileAds GoogleMobileAds.Api.MobileAds::instance
	MobileAds_t520597AEB50498C14D131B5CA0A17B8F702CD7DC * ___instance_2;

public:
	inline static int32_t get_offset_of_clientFactory_1() { return static_cast<int32_t>(offsetof(MobileAds_t520597AEB50498C14D131B5CA0A17B8F702CD7DC_StaticFields, ___clientFactory_1)); }
	inline RuntimeObject* get_clientFactory_1() const { return ___clientFactory_1; }
	inline RuntimeObject** get_address_of_clientFactory_1() { return &___clientFactory_1; }
	inline void set_clientFactory_1(RuntimeObject* value)
	{
		___clientFactory_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientFactory_1), (void*)value);
	}

	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(MobileAds_t520597AEB50498C14D131B5CA0A17B8F702CD7DC_StaticFields, ___instance_2)); }
	inline MobileAds_t520597AEB50498C14D131B5CA0A17B8F702CD7DC * get_instance_2() const { return ___instance_2; }
	inline MobileAds_t520597AEB50498C14D131B5CA0A17B8F702CD7DC ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(MobileAds_t520597AEB50498C14D131B5CA0A17B8F702CD7DC * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_2), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0
struct U3CInitializeU3Ec__AnonStorey0_t31F5126672CFD023E5C335137A9972529CD83DDF  : public RuntimeObject
{
public:
	// System.Action`1<GoogleMobileAds.Api.InitializationStatus> GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0::initCompleteAction
	Action_1_t76C911F904AEFC18EBAF7EADB7F104336FAEFA4E * ___initCompleteAction_0;

public:
	inline static int32_t get_offset_of_initCompleteAction_0() { return static_cast<int32_t>(offsetof(U3CInitializeU3Ec__AnonStorey0_t31F5126672CFD023E5C335137A9972529CD83DDF, ___initCompleteAction_0)); }
	inline Action_1_t76C911F904AEFC18EBAF7EADB7F104336FAEFA4E * get_initCompleteAction_0() const { return ___initCompleteAction_0; }
	inline Action_1_t76C911F904AEFC18EBAF7EADB7F104336FAEFA4E ** get_address_of_initCompleteAction_0() { return &___initCompleteAction_0; }
	inline void set_initCompleteAction_0(Action_1_t76C911F904AEFC18EBAF7EADB7F104336FAEFA4E * value)
	{
		___initCompleteAction_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___initCompleteAction_0), (void*)value);
	}
};


// GoogleMobileAds.Common.AdErrorClientEventArgs
struct AdErrorClientEventArgs_t73C6795B705D7CE9848CDCCA7154AAB39B85C2B5  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Common.AdErrorClientEventArgs::<AdErrorClient>k__BackingField
	RuntimeObject* ___U3CAdErrorClientU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CAdErrorClientU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdErrorClientEventArgs_t73C6795B705D7CE9848CDCCA7154AAB39B85C2B5, ___U3CAdErrorClientU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CAdErrorClientU3Ek__BackingField_1() const { return ___U3CAdErrorClientU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CAdErrorClientU3Ek__BackingField_1() { return &___U3CAdErrorClientU3Ek__BackingField_1; }
	inline void set_U3CAdErrorClientU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CAdErrorClientU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAdErrorClientU3Ek__BackingField_1), (void*)value);
	}
};


// GoogleMobileAds.Api.AdErrorEventArgs
struct AdErrorEventArgs_t3B2372D81363EC04AD07C88C7617D0B7B0B325E7  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// GoogleMobileAds.Api.AdError GoogleMobileAds.Api.AdErrorEventArgs::<AdError>k__BackingField
	AdError_t5B90CCE50DB0C6B1968744A72BA4B0740ED42E5C * ___U3CAdErrorU3Ek__BackingField_1;
	// System.String GoogleMobileAds.Api.AdErrorEventArgs::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CAdErrorU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdErrorEventArgs_t3B2372D81363EC04AD07C88C7617D0B7B0B325E7, ___U3CAdErrorU3Ek__BackingField_1)); }
	inline AdError_t5B90CCE50DB0C6B1968744A72BA4B0740ED42E5C * get_U3CAdErrorU3Ek__BackingField_1() const { return ___U3CAdErrorU3Ek__BackingField_1; }
	inline AdError_t5B90CCE50DB0C6B1968744A72BA4B0740ED42E5C ** get_address_of_U3CAdErrorU3Ek__BackingField_1() { return &___U3CAdErrorU3Ek__BackingField_1; }
	inline void set_U3CAdErrorU3Ek__BackingField_1(AdError_t5B90CCE50DB0C6B1968744A72BA4B0740ED42E5C * value)
	{
		___U3CAdErrorU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAdErrorU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AdErrorEventArgs_t3B2372D81363EC04AD07C88C7617D0B7B0B325E7, ___U3CMessageU3Ek__BackingField_2)); }
	inline String_t* get_U3CMessageU3Ek__BackingField_2() const { return ___U3CMessageU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CMessageU3Ek__BackingField_2() { return &___U3CMessageU3Ek__BackingField_2; }
	inline void set_U3CMessageU3Ek__BackingField_2(String_t* value)
	{
		___U3CMessageU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageU3Ek__BackingField_2), (void*)value);
	}
};


// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_tB040FD7B64D0D1F4671A2823498406E1C187CDC4  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// GoogleMobileAds.Api.LoadAdError GoogleMobileAds.Api.AdFailedToLoadEventArgs::<LoadAdError>k__BackingField
	LoadAdError_tB51B9E5D5C54229184F57341F7A863F0A0E3AA84 * ___U3CLoadAdErrorU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CLoadAdErrorU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdFailedToLoadEventArgs_tB040FD7B64D0D1F4671A2823498406E1C187CDC4, ___U3CLoadAdErrorU3Ek__BackingField_1)); }
	inline LoadAdError_tB51B9E5D5C54229184F57341F7A863F0A0E3AA84 * get_U3CLoadAdErrorU3Ek__BackingField_1() const { return ___U3CLoadAdErrorU3Ek__BackingField_1; }
	inline LoadAdError_tB51B9E5D5C54229184F57341F7A863F0A0E3AA84 ** get_address_of_U3CLoadAdErrorU3Ek__BackingField_1() { return &___U3CLoadAdErrorU3Ek__BackingField_1; }
	inline void set_U3CLoadAdErrorU3Ek__BackingField_1(LoadAdError_tB51B9E5D5C54229184F57341F7A863F0A0E3AA84 * value)
	{
		___U3CLoadAdErrorU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoadAdErrorU3Ek__BackingField_1), (void*)value);
	}
};


// GoogleMobileAds.Api.AdValueEventArgs
struct AdValueEventArgs_tF8C856DECA9FC8987B43DA05908FB65A88BE2E92  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// GoogleMobileAds.Api.AdValue GoogleMobileAds.Api.AdValueEventArgs::<AdValue>k__BackingField
	AdValue_t46ECFB14D8E6612DF7D24E165119739716D37A02 * ___U3CAdValueU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CAdValueU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdValueEventArgs_tF8C856DECA9FC8987B43DA05908FB65A88BE2E92, ___U3CAdValueU3Ek__BackingField_1)); }
	inline AdValue_t46ECFB14D8E6612DF7D24E165119739716D37A02 * get_U3CAdValueU3Ek__BackingField_1() const { return ___U3CAdValueU3Ek__BackingField_1; }
	inline AdValue_t46ECFB14D8E6612DF7D24E165119739716D37A02 ** get_address_of_U3CAdValueU3Ek__BackingField_1() { return &___U3CAdValueU3Ek__BackingField_1; }
	inline void set_U3CAdValueU3Ek__BackingField_1(AdValue_t46ECFB14D8E6612DF7D24E165119739716D37A02 * value)
	{
		___U3CAdValueU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAdValueU3Ek__BackingField_1), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// GoogleMobileAds.Api.LoadAdError
struct LoadAdError_tB51B9E5D5C54229184F57341F7A863F0A0E3AA84  : public AdError_t5B90CCE50DB0C6B1968744A72BA4B0740ED42E5C
{
public:
	// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Api.LoadAdError::client
	RuntimeObject* ___client_1;

public:
	inline static int32_t get_offset_of_client_1() { return static_cast<int32_t>(offsetof(LoadAdError_tB51B9E5D5C54229184F57341F7A863F0A0E3AA84, ___client_1)); }
	inline RuntimeObject* get_client_1() const { return ___client_1; }
	inline RuntimeObject** get_address_of_client_1() { return &___client_1; }
	inline void set_client_1(RuntimeObject* value)
	{
		___client_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_1), (void*)value);
	}
};


// GoogleMobileAds.Common.LoadAdErrorClientEventArgs
struct LoadAdErrorClientEventArgs_t27FDE8199AFA1FEFFE981B622C006070526F5285  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Common.LoadAdErrorClientEventArgs::<LoadAdErrorClient>k__BackingField
	RuntimeObject* ___U3CLoadAdErrorClientU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CLoadAdErrorClientU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LoadAdErrorClientEventArgs_t27FDE8199AFA1FEFFE981B622C006070526F5285, ___U3CLoadAdErrorClientU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CLoadAdErrorClientU3Ek__BackingField_1() const { return ___U3CLoadAdErrorClientU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CLoadAdErrorClientU3Ek__BackingField_1() { return &___U3CLoadAdErrorClientU3Ek__BackingField_1; }
	inline void set_U3CLoadAdErrorClientU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CLoadAdErrorClientU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoadAdErrorClientU3Ek__BackingField_1), (void*)value);
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.RuntimePlatform
struct RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>
struct Action_1_tF32D2997F689B4171DE2284285AF089A8695EA0F  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<GoogleMobileAds.Api.InitializationStatus>
struct Action_1_t76C911F904AEFC18EBAF7EADB7F104336FAEFA4E  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>
struct EventHandler_1_tA24FE9756B4DD485ED4DA66B27CA04B15CFC1FBA  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>
struct EventHandler_1_t526CA7C3983C3267674BD8F836C5636225145E29  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_t411926F361CCAF42F3C58C87211E8F14273BC3D5  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_t9B9B460F9DB75D2F58F389A4D277579EC56CD051  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>
struct EventHandler_1_tAFD217BA4E441C8C23BD1BCAC41E6A87ADDCAB16  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___sender0, RuntimeObject * ___e1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571 (EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * __this, const RuntimeMethod* method);
// GoogleMobileAds.IClientFactory GoogleMobileAds.Api.MobileAds::GetClientFactory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetClientFactory_m74BA1C97D5B9AC99D1703B03F1D51E1909525E43 (const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.EventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m3C1F6098E0A2CA859AF43A9F4E9C4118B422FE61 (EventHandler_1_tAFD217BA4E441C8C23BD1BCAC41E6A87ADDCAB16 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tAFD217BA4E441C8C23BD1BCAC41E6A87ADDCAB16 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m3ED629943BB6D738B50C64F570E5F1C78BC94580 (EventHandler_1_tA24FE9756B4DD485ED4DA66B27CA04B15CFC1FBA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tA24FE9756B4DD485ED4DA66B27CA04B15CFC1FBA *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m722ADDB4DA723B6827CA121BD10A750ED12E6D23 (EventHandler_1_t9B9B460F9DB75D2F58F389A4D277579EC56CD051 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t9B9B460F9DB75D2F58F389A4D277579EC56CD051 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<System.EventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *, RuntimeObject *, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Common.LoadAdErrorClientEventArgs::get_LoadAdErrorClient()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LoadAdErrorClientEventArgs_get_LoadAdErrorClient_mDA17FBD220ADFEB3FD4A81779EFB727A6F40A861_inline (LoadAdErrorClientEventArgs_t27FDE8199AFA1FEFFE981B622C006070526F5285 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.LoadAdError::.ctor(GoogleMobileAds.Common.ILoadAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadAdError__ctor_m2DEBE8EC9E749BEB56CC6BED46EE7C91A1634210 (LoadAdError_tB51B9E5D5C54229184F57341F7A863F0A0E3AA84 * __this, RuntimeObject* ___client0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs__ctor_m8282CC00824AE1BE59420567FCEC06D83A9864F3 (AdFailedToLoadEventArgs_tB040FD7B64D0D1F4671A2823498406E1C187CDC4 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::set_LoadAdError(GoogleMobileAds.Api.LoadAdError)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs_set_LoadAdError_mC719D598AB312B6017706246785073A7384ACAB7_inline (AdFailedToLoadEventArgs_tB040FD7B64D0D1F4671A2823498406E1C187CDC4 * __this, LoadAdError_tB51B9E5D5C54229184F57341F7A863F0A0E3AA84 * ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m35E5356C92645F0C89E9561EA5E794F7086FF2FC (EventHandler_1_t411926F361CCAF42F3C58C87211E8F14273BC3D5 * __this, RuntimeObject * ___sender0, AdFailedToLoadEventArgs_tB040FD7B64D0D1F4671A2823498406E1C187CDC4 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t411926F361CCAF42F3C58C87211E8F14273BC3D5 *, RuntimeObject *, AdFailedToLoadEventArgs_tB040FD7B64D0D1F4671A2823498406E1C187CDC4 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Common.AdErrorClientEventArgs::get_AdErrorClient()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AdErrorClientEventArgs_get_AdErrorClient_mD8CADEC230F2893F55365979A030FE042A63E58E_inline (AdErrorClientEventArgs_t73C6795B705D7CE9848CDCCA7154AAB39B85C2B5 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdError::.ctor(GoogleMobileAds.Common.IAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdError__ctor_m7618559753694A6EA61FA7DF1F37CD15958FE19E (AdError_t5B90CCE50DB0C6B1968744A72BA4B0740ED42E5C * __this, RuntimeObject* ___client0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdErrorEventArgs__ctor_mF0256496DAB74FCFE6BCF01E935F7A3E686756CB (AdErrorEventArgs_t3B2372D81363EC04AD07C88C7617D0B7B0B325E7 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::set_AdError(GoogleMobileAds.Api.AdError)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdErrorEventArgs_set_AdError_m27FAD7AAD2CAB0218262957A2508B0EECBB734F2_inline (AdErrorEventArgs_t3B2372D81363EC04AD07C88C7617D0B7B0B325E7 * __this, AdError_t5B90CCE50DB0C6B1968744A72BA4B0740ED42E5C * ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m3F5C67CAC3B3EFE0787CF7C39CE8B79B1D9DD11B (EventHandler_1_t526CA7C3983C3267674BD8F836C5636225145E29 * __this, RuntimeObject * ___sender0, AdErrorEventArgs_t3B2372D81363EC04AD07C88C7617D0B7B0B325E7 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t526CA7C3983C3267674BD8F836C5636225145E29 *, RuntimeObject *, AdErrorEventArgs_t3B2372D81363EC04AD07C88C7617D0B7B0B325E7 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_mD0EA5B272CD0D6B059863E9A8C3AF9631914C735 (EventHandler_1_t9B9B460F9DB75D2F58F389A4D277579EC56CD051 * __this, RuntimeObject * ___sender0, AdValueEventArgs_tF8C856DECA9FC8987B43DA05908FB65A88BE2E92 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t9B9B460F9DB75D2F58F389A4D277579EC56CD051 *, RuntimeObject *, AdValueEventArgs_tF8C856DECA9FC8987B43DA05908FB65A88BE2E92 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// GoogleMobileAds.Common.IMobileAdsClient GoogleMobileAds.Api.MobileAds::GetMobileAdsClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetMobileAdsClient_mC1ABD4552B3C668D68C75EC538C19306029672EA (const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.MobileAds::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds__ctor_m36BDBE62B810646B87AEC3D1CB24C80CE2382727 (MobileAds_t520597AEB50498C14D131B5CA0A17B8F702CD7DC * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ec__AnonStorey0__ctor_m0579CC5381483668D8BA218BD951F3B38911718C (U3CInitializeU3Ec__AnonStorey0_t31F5126672CFD023E5C335137A9972529CD83DDF * __this, const RuntimeMethod* method);
// GoogleMobileAds.Api.MobileAds GoogleMobileAds.Api.MobileAds::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MobileAds_t520597AEB50498C14D131B5CA0A17B8F702CD7DC * MobileAds_get_Instance_m76503A84817AF294114A5874D9AB0D233E7F90B5 (const RuntimeMethod* method);
// System.Void System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mD1E8E76A9AA3FA9821B30FD9388617D8708C9413 (Action_1_tF32D2997F689B4171DE2284285AF089A8695EA0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF32D2997F689B4171DE2284285AF089A8695EA0F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Common.MobileAdsEventExecutor::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAdsEventExecutor_Initialize_mECE7FE14BFF8F549BC1C426CAF2EFDA54D39B09E (const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4 (const RuntimeMethod* method);
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_m1BACAB5F4FBF138CCCB537DDCB0683A2AC064295 (Type_t * ___type0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.InitializationStatus::.ctor(GoogleMobileAds.Common.IInitializationStatusClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationStatus__ctor_m74F92323BC23158F98E895B77BA8D46A7108AF5A (InitializationStatus_tED3C89889BF9EBF4C9090FE8CE9FC9CEF1D208C6 * __this, RuntimeObject* ___client0, const RuntimeMethod* method);
// System.Void System.Action`1<GoogleMobileAds.Api.InitializationStatus>::Invoke(!0)
inline void Action_1_Invoke_m0257C511739FB8BDF23AA91B973A3205BF0CE19D (Action_1_t76C911F904AEFC18EBAF7EADB7F104336FAEFA4E * __this, InitializationStatus_tED3C89889BF9EBF4C9090FE8CE9FC9CEF1D208C6 * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t76C911F904AEFC18EBAF7EADB7F104336FAEFA4E *, InitializationStatus_tED3C89889BF9EBF4C9090FE8CE9FC9CEF1D208C6 *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.AdError::.ctor(GoogleMobileAds.Common.IAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdError__ctor_m7618559753694A6EA61FA7DF1F37CD15958FE19E (AdError_t5B90CCE50DB0C6B1968744A72BA4B0740ED42E5C * __this, RuntimeObject* ___client0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___client0;
		__this->set_client_0(L_0);
		return;
	}
}
// System.String GoogleMobileAds.Api.AdError::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdError_ToString_mF97B5BE536B22F02B9264FF67DC5AE888DA28314 (AdError_t5B90CCE50DB0C6B1968744A72BA4B0740ED42E5C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_client_0();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdErrorEventArgs__ctor_mF0256496DAB74FCFE6BCF01E935F7A3E686756CB (AdErrorEventArgs_t3B2372D81363EC04AD07C88C7617D0B7B0B325E7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::set_AdError(GoogleMobileAds.Api.AdError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdErrorEventArgs_set_AdError_m27FAD7AAD2CAB0218262957A2508B0EECBB734F2 (AdErrorEventArgs_t3B2372D81363EC04AD07C88C7617D0B7B0B325E7 * __this, AdError_t5B90CCE50DB0C6B1968744A72BA4B0740ED42E5C * ___value0, const RuntimeMethod* method)
{
	{
		AdError_t5B90CCE50DB0C6B1968744A72BA4B0740ED42E5C * L_0 = ___value0;
		__this->set_U3CAdErrorU3Ek__BackingField_1(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs__ctor_m8282CC00824AE1BE59420567FCEC06D83A9864F3 (AdFailedToLoadEventArgs_tB040FD7B64D0D1F4671A2823498406E1C187CDC4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::set_LoadAdError(GoogleMobileAds.Api.LoadAdError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs_set_LoadAdError_mC719D598AB312B6017706246785073A7384ACAB7 (AdFailedToLoadEventArgs_tB040FD7B64D0D1F4671A2823498406E1C187CDC4 * __this, LoadAdError_tB51B9E5D5C54229184F57341F7A863F0A0E3AA84 * ___value0, const RuntimeMethod* method)
{
	{
		LoadAdError_tB51B9E5D5C54229184F57341F7A863F0A0E3AA84 * L_0 = ___value0;
		__this->set_U3CLoadAdErrorU3Ek__BackingField_1(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.InitializationStatus::.ctor(GoogleMobileAds.Common.IInitializationStatusClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationStatus__ctor_m74F92323BC23158F98E895B77BA8D46A7108AF5A (InitializationStatus_tED3C89889BF9EBF4C9090FE8CE9FC9CEF1D208C6 * __this, RuntimeObject* ___client0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___client0;
		__this->set_client_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.InterstitialAd::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd__ctor_m4FE2CFE98316E1FE6BF33FD22D623CF19EDF583C (InterstitialAd_tD5661C7E225FC17B9373D1F2E6A32DADD5DB7C18 * __this, String_t* ___adUnitId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m3C1F6098E0A2CA859AF43A9F4E9C4118B422FE61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m3ED629943BB6D738B50C64F570E5F1C78BC94580_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m722ADDB4DA723B6827CA121BD10A750ED12E6D23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t9B9B460F9DB75D2F58F389A4D277579EC56CD051_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA24FE9756B4DD485ED4DA66B27CA04B15CFC1FBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tAFD217BA4E441C8C23BD1BCAC41E6A87ADDCAB16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_t23152E2459B793B600A3222ACECF9C7153E3399C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialClient_t94D75FF883BB56DCC5B8D79206F15602C70E96FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CInterstitialAdU3Em__0_m455D7BF7F156DFB4A70B092531EF8B2010C79C50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CInterstitialAdU3Em__1_mB02BEFE8DABCDA5E1CF4485A17F3866211ABAD78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CInterstitialAdU3Em__2_m032E16F3542B31ABC8685D391B76D2E405AB79C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CInterstitialAdU3Em__3_m82A370891A12C583E8E268B7FC504564E4905129_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CInterstitialAdU3Em__4_mF4B78B6B3250A9784F988361DB84F52B38E405E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CInterstitialAdU3Em__5_m4294236252D4F5D565A6BD8FFF56AA6C0D65F24C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CInterstitialAdU3Em__6_m87B1FC8654206454CBDA4C843E67C8EBB669250E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0;
		L_0 = MobileAds_GetClientFactory_m74BA1C97D5B9AC99D1703B03F1D51E1909525E43(/*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* GoogleMobileAds.Common.IInterstitialClient GoogleMobileAds.IClientFactory::BuildInterstitialClient() */, IClientFactory_t23152E2459B793B600A3222ACECF9C7153E3399C_il2cpp_TypeInfo_var, L_0);
		__this->set_client_0(L_1);
		String_t* L_2 = ___adUnitId0;
		__this->set_adUnitId_1(L_2);
		__this->set_isLoaded_2((bool)0);
		RuntimeObject* L_3 = __this->get_client_0();
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(14 /* System.Void GoogleMobileAds.Common.IInterstitialClient::CreateInterstitialAd() */, IInterstitialClient_t94D75FF883BB56DCC5B8D79206F15602C70E96FD_il2cpp_TypeInfo_var, L_3);
		RuntimeObject* L_4 = __this->get_client_0();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_5 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_5, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__0_m455D7BF7F156DFB4A70B092531EF8B2010C79C50_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_4);
		InterfaceActionInvoker1< EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * >::Invoke(0 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>) */, IInterstitialClient_t94D75FF883BB56DCC5B8D79206F15602C70E96FD_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = __this->get_client_0();
		EventHandler_1_tAFD217BA4E441C8C23BD1BCAC41E6A87ADDCAB16 * L_7 = (EventHandler_1_tAFD217BA4E441C8C23BD1BCAC41E6A87ADDCAB16 *)il2cpp_codegen_object_new(EventHandler_1_tAFD217BA4E441C8C23BD1BCAC41E6A87ADDCAB16_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m3C1F6098E0A2CA859AF43A9F4E9C4118B422FE61(L_7, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__1_mB02BEFE8DABCDA5E1CF4485A17F3866211ABAD78_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m3C1F6098E0A2CA859AF43A9F4E9C4118B422FE61_RuntimeMethod_var);
		NullCheck(L_6);
		InterfaceActionInvoker1< EventHandler_1_tAFD217BA4E441C8C23BD1BCAC41E6A87ADDCAB16 * >::Invoke(2 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>) */, IInterstitialClient_t94D75FF883BB56DCC5B8D79206F15602C70E96FD_il2cpp_TypeInfo_var, L_6, L_7);
		RuntimeObject* L_8 = __this->get_client_0();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_9 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_9, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__2_m032E16F3542B31ABC8685D391B76D2E405AB79C1_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_8);
		InterfaceActionInvoker1< EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * >::Invoke(8 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdDidPresentFullScreenContent(System.EventHandler`1<System.EventArgs>) */, IInterstitialClient_t94D75FF883BB56DCC5B8D79206F15602C70E96FD_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeObject* L_10 = __this->get_client_0();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_11 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_11, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__3_m82A370891A12C583E8E268B7FC504564E4905129_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_10);
		InterfaceActionInvoker1< EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * >::Invoke(10 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdDidDismissFullScreenContent(System.EventHandler`1<System.EventArgs>) */, IInterstitialClient_t94D75FF883BB56DCC5B8D79206F15602C70E96FD_il2cpp_TypeInfo_var, L_10, L_11);
		RuntimeObject* L_12 = __this->get_client_0();
		EventHandler_1_tA24FE9756B4DD485ED4DA66B27CA04B15CFC1FBA * L_13 = (EventHandler_1_tA24FE9756B4DD485ED4DA66B27CA04B15CFC1FBA *)il2cpp_codegen_object_new(EventHandler_1_tA24FE9756B4DD485ED4DA66B27CA04B15CFC1FBA_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m3ED629943BB6D738B50C64F570E5F1C78BC94580(L_13, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__4_mF4B78B6B3250A9784F988361DB84F52B38E405E3_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m3ED629943BB6D738B50C64F570E5F1C78BC94580_RuntimeMethod_var);
		NullCheck(L_12);
		InterfaceActionInvoker1< EventHandler_1_tA24FE9756B4DD485ED4DA66B27CA04B15CFC1FBA * >::Invoke(6 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdFailedToPresentFullScreenContent(System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>) */, IInterstitialClient_t94D75FF883BB56DCC5B8D79206F15602C70E96FD_il2cpp_TypeInfo_var, L_12, L_13);
		RuntimeObject* L_14 = __this->get_client_0();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_15 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_15, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__5_m4294236252D4F5D565A6BD8FFF56AA6C0D65F24C_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_14);
		InterfaceActionInvoker1< EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * >::Invoke(12 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdDidRecordImpression(System.EventHandler`1<System.EventArgs>) */, IInterstitialClient_t94D75FF883BB56DCC5B8D79206F15602C70E96FD_il2cpp_TypeInfo_var, L_14, L_15);
		RuntimeObject* L_16 = __this->get_client_0();
		EventHandler_1_t9B9B460F9DB75D2F58F389A4D277579EC56CD051 * L_17 = (EventHandler_1_t9B9B460F9DB75D2F58F389A4D277579EC56CD051 *)il2cpp_codegen_object_new(EventHandler_1_t9B9B460F9DB75D2F58F389A4D277579EC56CD051_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m722ADDB4DA723B6827CA121BD10A750ED12E6D23(L_17, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__6_m87B1FC8654206454CBDA4C843E67C8EBB669250E_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m722ADDB4DA723B6827CA121BD10A750ED12E6D23_RuntimeMethod_var);
		NullCheck(L_16);
		InterfaceActionInvoker1< EventHandler_1_t9B9B460F9DB75D2F58F389A4D277579EC56CD051 * >::Invoke(4 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>) */, IInterstitialClient_t94D75FF883BB56DCC5B8D79206F15602C70E96FD_il2cpp_TypeInfo_var, L_16, L_17);
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_LoadAd_m81452B12F301005ADCB0F39C6A499A879B5F6A53 (InterstitialAd_tD5661C7E225FC17B9373D1F2E6A32DADD5DB7C18 * __this, AdRequest_t43F976BC16DDDF2AE2ED5C0BDF6BB95662D26117 * ___request0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialClient_t94D75FF883BB56DCC5B8D79206F15602C70E96FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_client_0();
		String_t* L_1 = __this->get_adUnitId_1();
		AdRequest_t43F976BC16DDDF2AE2ED5C0BDF6BB95662D26117 * L_2 = ___request0;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, AdRequest_t43F976BC16DDDF2AE2ED5C0BDF6BB95662D26117 * >::Invoke(15 /* System.Void GoogleMobileAds.Common.IInterstitialClient::LoadAd(System.String,GoogleMobileAds.Api.AdRequest) */, IInterstitialClient_t94D75FF883BB56DCC5B8D79206F15602C70E96FD_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Boolean GoogleMobileAds.Api.InterstitialAd::IsLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InterstitialAd_IsLoaded_mA052D365C64C9DB21487A049C689AB0192E1DB27 (InterstitialAd_tD5661C7E225FC17B9373D1F2E6A32DADD5DB7C18 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isLoaded_2();
		return L_0;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_Show_mD25EDBD8F70DFFC88F460AE5C960707FB3AE6EB2 (InterstitialAd_tD5661C7E225FC17B9373D1F2E6A32DADD5DB7C18 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialClient_t94D75FF883BB56DCC5B8D79206F15602C70E96FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_isLoaded_2((bool)0);
		RuntimeObject* L_0 = __this->get_client_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(16 /* System.Void GoogleMobileAds.Common.IInterstitialClient::Show() */, IInterstitialClient_t94D75FF883BB56DCC5B8D79206F15602C70E96FD_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__0_m455D7BF7F156DFB4A70B092531EF8B2010C79C50 (InterstitialAd_tD5661C7E225FC17B9373D1F2E6A32DADD5DB7C18 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_isLoaded_2((bool)1);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdLoaded_3();
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = __this->get_OnAdLoaded_3();
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
	}

IL_001f:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__1(System.Object,GoogleMobileAds.Common.LoadAdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__1_mB02BEFE8DABCDA5E1CF4485A17F3866211ABAD78 (InterstitialAd_tD5661C7E225FC17B9373D1F2E6A32DADD5DB7C18 * __this, RuntimeObject * ___sender0, LoadAdErrorClientEventArgs_t27FDE8199AFA1FEFFE981B622C006070526F5285 * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdFailedToLoadEventArgs_tB040FD7B64D0D1F4671A2823498406E1C187CDC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m35E5356C92645F0C89E9561EA5E794F7086FF2FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadAdError_tB51B9E5D5C54229184F57341F7A863F0A0E3AA84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoadAdError_tB51B9E5D5C54229184F57341F7A863F0A0E3AA84 * V_0 = NULL;
	AdFailedToLoadEventArgs_tB040FD7B64D0D1F4671A2823498406E1C187CDC4 * V_1 = NULL;
	{
		EventHandler_1_t411926F361CCAF42F3C58C87211E8F14273BC3D5 * L_0 = __this->get_OnAdFailedToLoad_4();
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		LoadAdErrorClientEventArgs_t27FDE8199AFA1FEFFE981B622C006070526F5285 * L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = LoadAdErrorClientEventArgs_get_LoadAdErrorClient_mDA17FBD220ADFEB3FD4A81779EFB727A6F40A861_inline(L_1, /*hidden argument*/NULL);
		LoadAdError_tB51B9E5D5C54229184F57341F7A863F0A0E3AA84 * L_3 = (LoadAdError_tB51B9E5D5C54229184F57341F7A863F0A0E3AA84 *)il2cpp_codegen_object_new(LoadAdError_tB51B9E5D5C54229184F57341F7A863F0A0E3AA84_il2cpp_TypeInfo_var);
		LoadAdError__ctor_m2DEBE8EC9E749BEB56CC6BED46EE7C91A1634210(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		EventHandler_1_t411926F361CCAF42F3C58C87211E8F14273BC3D5 * L_4 = __this->get_OnAdFailedToLoad_4();
		AdFailedToLoadEventArgs_tB040FD7B64D0D1F4671A2823498406E1C187CDC4 * L_5 = (AdFailedToLoadEventArgs_tB040FD7B64D0D1F4671A2823498406E1C187CDC4 *)il2cpp_codegen_object_new(AdFailedToLoadEventArgs_tB040FD7B64D0D1F4671A2823498406E1C187CDC4_il2cpp_TypeInfo_var);
		AdFailedToLoadEventArgs__ctor_m8282CC00824AE1BE59420567FCEC06D83A9864F3(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		AdFailedToLoadEventArgs_tB040FD7B64D0D1F4671A2823498406E1C187CDC4 * L_6 = V_1;
		LoadAdError_tB51B9E5D5C54229184F57341F7A863F0A0E3AA84 * L_7 = V_0;
		NullCheck(L_6);
		AdFailedToLoadEventArgs_set_LoadAdError_mC719D598AB312B6017706246785073A7384ACAB7_inline(L_6, L_7, /*hidden argument*/NULL);
		AdFailedToLoadEventArgs_tB040FD7B64D0D1F4671A2823498406E1C187CDC4 * L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_m35E5356C92645F0C89E9561EA5E794F7086FF2FC(L_4, __this, L_8, /*hidden argument*/EventHandler_1_Invoke_m35E5356C92645F0C89E9561EA5E794F7086FF2FC_RuntimeMethod_var);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__2(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__2_m032E16F3542B31ABC8685D391B76D2E405AB79C1 (InterstitialAd_tD5661C7E225FC17B9373D1F2E6A32DADD5DB7C18 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdOpening_5();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = __this->get_OnAdOpening_5();
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__3(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__3_m82A370891A12C583E8E268B7FC504564E4905129 (InterstitialAd_tD5661C7E225FC17B9373D1F2E6A32DADD5DB7C18 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdClosed_6();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = __this->get_OnAdClosed_6();
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__4(System.Object,GoogleMobileAds.Common.AdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__4_mF4B78B6B3250A9784F988361DB84F52B38E405E3 (InterstitialAd_tD5661C7E225FC17B9373D1F2E6A32DADD5DB7C18 * __this, RuntimeObject * ___sender0, AdErrorClientEventArgs_t73C6795B705D7CE9848CDCCA7154AAB39B85C2B5 * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdErrorEventArgs_t3B2372D81363EC04AD07C88C7617D0B7B0B325E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdError_t5B90CCE50DB0C6B1968744A72BA4B0740ED42E5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m3F5C67CAC3B3EFE0787CF7C39CE8B79B1D9DD11B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AdError_t5B90CCE50DB0C6B1968744A72BA4B0740ED42E5C * V_0 = NULL;
	AdErrorEventArgs_t3B2372D81363EC04AD07C88C7617D0B7B0B325E7 * V_1 = NULL;
	{
		EventHandler_1_t526CA7C3983C3267674BD8F836C5636225145E29 * L_0 = __this->get_OnAdFailedToShow_7();
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		AdErrorClientEventArgs_t73C6795B705D7CE9848CDCCA7154AAB39B85C2B5 * L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = AdErrorClientEventArgs_get_AdErrorClient_mD8CADEC230F2893F55365979A030FE042A63E58E_inline(L_1, /*hidden argument*/NULL);
		AdError_t5B90CCE50DB0C6B1968744A72BA4B0740ED42E5C * L_3 = (AdError_t5B90CCE50DB0C6B1968744A72BA4B0740ED42E5C *)il2cpp_codegen_object_new(AdError_t5B90CCE50DB0C6B1968744A72BA4B0740ED42E5C_il2cpp_TypeInfo_var);
		AdError__ctor_m7618559753694A6EA61FA7DF1F37CD15958FE19E(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		EventHandler_1_t526CA7C3983C3267674BD8F836C5636225145E29 * L_4 = __this->get_OnAdFailedToShow_7();
		AdErrorEventArgs_t3B2372D81363EC04AD07C88C7617D0B7B0B325E7 * L_5 = (AdErrorEventArgs_t3B2372D81363EC04AD07C88C7617D0B7B0B325E7 *)il2cpp_codegen_object_new(AdErrorEventArgs_t3B2372D81363EC04AD07C88C7617D0B7B0B325E7_il2cpp_TypeInfo_var);
		AdErrorEventArgs__ctor_mF0256496DAB74FCFE6BCF01E935F7A3E686756CB(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		AdErrorEventArgs_t3B2372D81363EC04AD07C88C7617D0B7B0B325E7 * L_6 = V_1;
		AdError_t5B90CCE50DB0C6B1968744A72BA4B0740ED42E5C * L_7 = V_0;
		NullCheck(L_6);
		AdErrorEventArgs_set_AdError_m27FAD7AAD2CAB0218262957A2508B0EECBB734F2_inline(L_6, L_7, /*hidden argument*/NULL);
		AdErrorEventArgs_t3B2372D81363EC04AD07C88C7617D0B7B0B325E7 * L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_m3F5C67CAC3B3EFE0787CF7C39CE8B79B1D9DD11B(L_4, __this, L_8, /*hidden argument*/EventHandler_1_Invoke_m3F5C67CAC3B3EFE0787CF7C39CE8B79B1D9DD11B_RuntimeMethod_var);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__5(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__5_m4294236252D4F5D565A6BD8FFF56AA6C0D65F24C (InterstitialAd_tD5661C7E225FC17B9373D1F2E6A32DADD5DB7C18 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdDidRecordImpression_8();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = __this->get_OnAdDidRecordImpression_8();
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__6(System.Object,GoogleMobileAds.Api.AdValueEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__6_m87B1FC8654206454CBDA4C843E67C8EBB669250E (InterstitialAd_tD5661C7E225FC17B9373D1F2E6A32DADD5DB7C18 * __this, RuntimeObject * ___sender0, AdValueEventArgs_tF8C856DECA9FC8987B43DA05908FB65A88BE2E92 * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mD0EA5B272CD0D6B059863E9A8C3AF9631914C735_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t9B9B460F9DB75D2F58F389A4D277579EC56CD051 * L_0 = __this->get_OnPaidEvent_9();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_t9B9B460F9DB75D2F58F389A4D277579EC56CD051 * L_1 = __this->get_OnPaidEvent_9();
		AdValueEventArgs_tF8C856DECA9FC8987B43DA05908FB65A88BE2E92 * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_mD0EA5B272CD0D6B059863E9A8C3AF9631914C735(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mD0EA5B272CD0D6B059863E9A8C3AF9631914C735_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.LoadAdError::.ctor(GoogleMobileAds.Common.ILoadAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadAdError__ctor_m2DEBE8EC9E749BEB56CC6BED46EE7C91A1634210 (LoadAdError_tB51B9E5D5C54229184F57341F7A863F0A0E3AA84 * __this, RuntimeObject* ___client0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___client0;
		AdError__ctor_m7618559753694A6EA61FA7DF1F37CD15958FE19E(__this, L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___client0;
		__this->set_client_1(L_1);
		return;
	}
}
// System.String GoogleMobileAds.Api.LoadAdError::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoadAdError_ToString_mB2FB8D199F72D80C90D6EAC5651E0ED000C055BF (LoadAdError_tB51B9E5D5C54229184F57341F7A863F0A0E3AA84 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_client_1();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.MobileAds::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds__ctor_m36BDBE62B810646B87AEC3D1CB24C80CE2382727 (MobileAds_t520597AEB50498C14D131B5CA0A17B8F702CD7DC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = MobileAds_GetMobileAdsClient_mC1ABD4552B3C668D68C75EC538C19306029672EA(/*hidden argument*/NULL);
		__this->set_client_0(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// GoogleMobileAds.Api.MobileAds GoogleMobileAds.Api.MobileAds::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MobileAds_t520597AEB50498C14D131B5CA0A17B8F702CD7DC * MobileAds_get_Instance_m76503A84817AF294114A5874D9AB0D233E7F90B5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAds_t520597AEB50498C14D131B5CA0A17B8F702CD7DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MobileAds_t520597AEB50498C14D131B5CA0A17B8F702CD7DC * L_0 = ((MobileAds_t520597AEB50498C14D131B5CA0A17B8F702CD7DC_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_t520597AEB50498C14D131B5CA0A17B8F702CD7DC_il2cpp_TypeInfo_var))->get_instance_2();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		MobileAds_t520597AEB50498C14D131B5CA0A17B8F702CD7DC * L_1 = (MobileAds_t520597AEB50498C14D131B5CA0A17B8F702CD7DC *)il2cpp_codegen_object_new(MobileAds_t520597AEB50498C14D131B5CA0A17B8F702CD7DC_il2cpp_TypeInfo_var);
		MobileAds__ctor_m36BDBE62B810646B87AEC3D1CB24C80CE2382727(L_1, /*hidden argument*/NULL);
		((MobileAds_t520597AEB50498C14D131B5CA0A17B8F702CD7DC_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_t520597AEB50498C14D131B5CA0A17B8F702CD7DC_il2cpp_TypeInfo_var))->set_instance_2(L_1);
	}

IL_0014:
	{
		MobileAds_t520597AEB50498C14D131B5CA0A17B8F702CD7DC * L_2 = ((MobileAds_t520597AEB50498C14D131B5CA0A17B8F702CD7DC_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_t520597AEB50498C14D131B5CA0A17B8F702CD7DC_il2cpp_TypeInfo_var))->get_instance_2();
		return L_2;
	}
}
// System.Void GoogleMobileAds.Api.MobileAds::Initialize(System.Action`1<GoogleMobileAds.Api.InitializationStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds_Initialize_mA494D8981BDBA9C3A6A8C8086662DEB4FE2B302F (Action_1_t76C911F904AEFC18EBAF7EADB7F104336FAEFA4E * ___initCompleteAction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mD1E8E76A9AA3FA9821B30FD9388617D8708C9413_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tF32D2997F689B4171DE2284285AF089A8695EA0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMobileAdsClient_t3A5E37CB8521E23BC8639CE1E01E0EA415325AB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAdsEventExecutor_t3ED415346273533C25DC69E7FE351D96377F0DE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m0B5F6755D7AE6945CAA328FA4BA8482720578257_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInitializeU3Ec__AnonStorey0_t31F5126672CFD023E5C335137A9972529CD83DDF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CInitializeU3Ec__AnonStorey0_t31F5126672CFD023E5C335137A9972529CD83DDF * V_0 = NULL;
	{
		U3CInitializeU3Ec__AnonStorey0_t31F5126672CFD023E5C335137A9972529CD83DDF * L_0 = (U3CInitializeU3Ec__AnonStorey0_t31F5126672CFD023E5C335137A9972529CD83DDF *)il2cpp_codegen_object_new(U3CInitializeU3Ec__AnonStorey0_t31F5126672CFD023E5C335137A9972529CD83DDF_il2cpp_TypeInfo_var);
		U3CInitializeU3Ec__AnonStorey0__ctor_m0579CC5381483668D8BA218BD951F3B38911718C(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CInitializeU3Ec__AnonStorey0_t31F5126672CFD023E5C335137A9972529CD83DDF * L_1 = V_0;
		Action_1_t76C911F904AEFC18EBAF7EADB7F104336FAEFA4E * L_2 = ___initCompleteAction0;
		NullCheck(L_1);
		L_1->set_initCompleteAction_0(L_2);
		MobileAds_t520597AEB50498C14D131B5CA0A17B8F702CD7DC * L_3;
		L_3 = MobileAds_get_Instance_m76503A84817AF294114A5874D9AB0D233E7F90B5(/*hidden argument*/NULL);
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->get_client_0();
		U3CInitializeU3Ec__AnonStorey0_t31F5126672CFD023E5C335137A9972529CD83DDF * L_5 = V_0;
		Action_1_tF32D2997F689B4171DE2284285AF089A8695EA0F * L_6 = (Action_1_tF32D2997F689B4171DE2284285AF089A8695EA0F *)il2cpp_codegen_object_new(Action_1_tF32D2997F689B4171DE2284285AF089A8695EA0F_il2cpp_TypeInfo_var);
		Action_1__ctor_mD1E8E76A9AA3FA9821B30FD9388617D8708C9413(L_6, L_5, (intptr_t)((intptr_t)U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m0B5F6755D7AE6945CAA328FA4BA8482720578257_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mD1E8E76A9AA3FA9821B30FD9388617D8708C9413_RuntimeMethod_var);
		NullCheck(L_4);
		InterfaceActionInvoker1< Action_1_tF32D2997F689B4171DE2284285AF089A8695EA0F * >::Invoke(0 /* System.Void GoogleMobileAds.Common.IMobileAdsClient::Initialize(System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>) */, IMobileAdsClient_t3A5E37CB8521E23BC8639CE1E01E0EA415325AB0_il2cpp_TypeInfo_var, L_4, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(MobileAdsEventExecutor_t3ED415346273533C25DC69E7FE351D96377F0DE6_il2cpp_TypeInfo_var);
		MobileAdsEventExecutor_Initialize_mECE7FE14BFF8F549BC1C426CAF2EFDA54D39B09E(/*hidden argument*/NULL);
		return;
	}
}
// GoogleMobileAds.IClientFactory GoogleMobileAds.Api.MobileAds::GetClientFactory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetClientFactory_m74BA1C97D5B9AC99D1703B03F1D51E1909525E43 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_t23152E2459B793B600A3222ACECF9C7153E3399C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAds_GetClientFactory_m74BA1C97D5B9AC99D1703B03F1D51E1909525E43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAds_t520597AEB50498C14D131B5CA0A17B8F702CD7DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E40C18D8AC4A6D9A62D3A099D09AF791342A6DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0496525135724A6D7138AB94BD6661514AD7DAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDD22D9991854F9B5ADA35715330812319A1362B);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Type_t * V_1 = NULL;
	{
		RuntimeObject* L_0 = ((MobileAds_t520597AEB50498C14D131B5CA0A17B8F702CD7DC_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_t520597AEB50498C14D131B5CA0A17B8F702CD7DC_il2cpp_TypeInfo_var))->get_clientFactory_1();
		if (L_0)
		{
			goto IL_0056;
		}
	}
	{
		V_0 = (String_t*)NULL;
		int32_t L_1;
		L_1 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)8))))
		{
			goto IL_0022;
		}
	}
	{
		V_0 = _stringLiteral1E40C18D8AC4A6D9A62D3A099D09AF791342A6DB;
		goto IL_003f;
	}

IL_0022:
	{
		int32_t L_2;
		L_2 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0039;
		}
	}
	{
		V_0 = _stringLiteralBDD22D9991854F9B5ADA35715330812319A1362B;
		goto IL_003f;
	}

IL_0039:
	{
		V_0 = _stringLiteralB0496525135724A6D7138AB94BD6661514AD7DAE;
	}

IL_003f:
	{
		String_t* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = il2cpp_codegen_get_type(Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var, L_3, MobileAds_GetClientFactory_m74BA1C97D5B9AC99D1703B03F1D51E1909525E43_RuntimeMethod_var);
		V_1 = L_4;
		Type_t * L_5 = V_1;
		RuntimeObject * L_6;
		L_6 = Activator_CreateInstance_m1BACAB5F4FBF138CCCB537DDCB0683A2AC064295(L_5, /*hidden argument*/NULL);
		((MobileAds_t520597AEB50498C14D131B5CA0A17B8F702CD7DC_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_t520597AEB50498C14D131B5CA0A17B8F702CD7DC_il2cpp_TypeInfo_var))->set_clientFactory_1(((RuntimeObject*)Castclass((RuntimeObject*)L_6, IClientFactory_t23152E2459B793B600A3222ACECF9C7153E3399C_il2cpp_TypeInfo_var)));
	}

IL_0056:
	{
		RuntimeObject* L_7 = ((MobileAds_t520597AEB50498C14D131B5CA0A17B8F702CD7DC_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_t520597AEB50498C14D131B5CA0A17B8F702CD7DC_il2cpp_TypeInfo_var))->get_clientFactory_1();
		return L_7;
	}
}
// GoogleMobileAds.Common.IMobileAdsClient GoogleMobileAds.Api.MobileAds::GetMobileAdsClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetMobileAdsClient_mC1ABD4552B3C668D68C75EC538C19306029672EA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_t23152E2459B793B600A3222ACECF9C7153E3399C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = MobileAds_GetClientFactory_m74BA1C97D5B9AC99D1703B03F1D51E1909525E43(/*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(6 /* GoogleMobileAds.Common.IMobileAdsClient GoogleMobileAds.IClientFactory::MobileAdsInstance() */, IClientFactory_t23152E2459B793B600A3222ACECF9C7153E3399C_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ec__AnonStorey0__ctor_m0579CC5381483668D8BA218BD951F3B38911718C (U3CInitializeU3Ec__AnonStorey0_t31F5126672CFD023E5C335137A9972529CD83DDF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0::<>m__0(GoogleMobileAds.Common.IInitializationStatusClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m0B5F6755D7AE6945CAA328FA4BA8482720578257 (U3CInitializeU3Ec__AnonStorey0_t31F5126672CFD023E5C335137A9972529CD83DDF * __this, RuntimeObject* ___initStatusClient0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m0257C511739FB8BDF23AA91B973A3205BF0CE19D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationStatus_tED3C89889BF9EBF4C9090FE8CE9FC9CEF1D208C6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t76C911F904AEFC18EBAF7EADB7F104336FAEFA4E * L_0 = __this->get_initCompleteAction_0();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		Action_1_t76C911F904AEFC18EBAF7EADB7F104336FAEFA4E * L_1 = __this->get_initCompleteAction_0();
		RuntimeObject* L_2 = ___initStatusClient0;
		InitializationStatus_tED3C89889BF9EBF4C9090FE8CE9FC9CEF1D208C6 * L_3 = (InitializationStatus_tED3C89889BF9EBF4C9090FE8CE9FC9CEF1D208C6 *)il2cpp_codegen_object_new(InitializationStatus_tED3C89889BF9EBF4C9090FE8CE9FC9CEF1D208C6_il2cpp_TypeInfo_var);
		InitializationStatus__ctor_m74F92323BC23158F98E895B77BA8D46A7108AF5A(L_3, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Action_1_Invoke_m0257C511739FB8BDF23AA91B973A3205BF0CE19D(L_1, L_3, /*hidden argument*/Action_1_Invoke_m0257C511739FB8BDF23AA91B973A3205BF0CE19D_RuntimeMethod_var);
	}

IL_001c:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LoadAdErrorClientEventArgs_get_LoadAdErrorClient_mDA17FBD220ADFEB3FD4A81779EFB727A6F40A861_inline (LoadAdErrorClientEventArgs_t27FDE8199AFA1FEFFE981B622C006070526F5285 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CLoadAdErrorClientU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs_set_LoadAdError_mC719D598AB312B6017706246785073A7384ACAB7_inline (AdFailedToLoadEventArgs_tB040FD7B64D0D1F4671A2823498406E1C187CDC4 * __this, LoadAdError_tB51B9E5D5C54229184F57341F7A863F0A0E3AA84 * ___value0, const RuntimeMethod* method)
{
	{
		LoadAdError_tB51B9E5D5C54229184F57341F7A863F0A0E3AA84 * L_0 = ___value0;
		__this->set_U3CLoadAdErrorU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AdErrorClientEventArgs_get_AdErrorClient_mD8CADEC230F2893F55365979A030FE042A63E58E_inline (AdErrorClientEventArgs_t73C6795B705D7CE9848CDCCA7154AAB39B85C2B5 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CAdErrorClientU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdErrorEventArgs_set_AdError_m27FAD7AAD2CAB0218262957A2508B0EECBB734F2_inline (AdErrorEventArgs_t3B2372D81363EC04AD07C88C7617D0B7B0B325E7 * __this, AdError_t5B90CCE50DB0C6B1968744A72BA4B0740ED42E5C * ___value0, const RuntimeMethod* method)
{
	{
		AdError_t5B90CCE50DB0C6B1968744A72BA4B0740ED42E5C * L_0 = ___value0;
		__this->set_U3CAdErrorU3Ek__BackingField_1(L_0);
		return;
	}
}
