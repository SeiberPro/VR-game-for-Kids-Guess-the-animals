#include "pch-cpp.hpp"

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
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
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
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Func`2<CardboardEye,CardboardHead>
struct Func_2_t90E5AD6D9B378185FD34CE4CB23E1B4B039C745F;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C;
// CardboardEye[]
struct CardboardEyeU5BU5D_t1352C23D86CE0B9397EA68A33D86F9200013536C;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// BaseVRDevice
struct BaseVRDevice_t9BCEAB685F3D1000E38FBA759C6B75730D59D13D;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// Cardboard
struct Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D;
// CardboardEye
struct CardboardEye_t32ED6741BF22447FFE5D7EDF81B466BEBAA4C780;
// CardboardHead
struct CardboardHead_t71133BBC784C92F40ED0B6CD29EE9D84B9D0329C;
// UnityEngine.CharacterController
struct CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39;
// StarterAssets.StarterAssetsInputs
struct StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC;
// StereoController
struct StereoController_t4A27502B3E84039EC0E267357EA04E4BA485927F;
// StereoLensFlare
struct StereoLensFlare_t3207DC01111167616502F4822CA7DC73D6C9FE75;
// StereoRenderEffect
struct StereoRenderEffect_t913E873D964F0875F47CFC82A44B5E9263827F8D;
// System.String
struct String_t;
// Teleport
struct Teleport_t33E97FA0B9C7C63F5D0130A3D270BB742D9B9995;
// TeleportLegacyUI
struct TeleportLegacyUI_tA00CC32535C6DC1C4E347CB8C7161BF6CEF93B91;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// StarterAssets.ThirdPersonController
struct ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// StarterAssets.UICanvasControllerInput
struct UICanvasControllerInput_t18C69AA8A6225F0EDEC9D31926AFCA88FC8F8EA1;
// UIVirtualButton
struct UIVirtualButton_tA1A6B564C5E71E1B61B240E28958DEB8F79BABBE;
// UIVirtualJoystick
struct UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D;
// UIVirtualTouchZone
struct UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// VrController
struct VrController_t9D294004F7B066441C2096202E12A80D9B7D5CEE;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4;
// BaseCardboardDevice/VREventCallback
struct VREventCallback_t444A75B727155FF2FA8CFADA55D677E27E0387D1;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// Cardboard/StereoScreenChangeDelegate
struct StereoScreenChangeDelegate_t6B70660959C797AFA101F9F26D0A5698B0026EF8;
// CardboardHead/HeadUpdatedDelegate
struct HeadUpdatedDelegate_tB7C7FC2C27C3EB039350DAF0361C13FA12441FC1;
// CardboardOnGUI/OnGUICallback
struct OnGUICallback_t6E54053C3D6F915C472341FA973EFA12EDFDB5C8;
// Readme/Section
struct Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// StereoController/<>c
struct U3CU3Ec_t032D85B1EF01CB57D96548AB107EAB3B1C09A434;
// StereoController/<EndOfFrame>d__32
struct U3CEndOfFrameU3Ed__32_tF348F9B5FB6F2FC8F16A1AEA2155CFFBA309980F;

IL2CPP_EXTERN_C RuntimeClass* CardboardOnGUI_t2799612520A94714953D63D0CF556712A093F7DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnGUICallback_t6E54053C3D6F915C472341FA973EFA12EDFDB5C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t829C94C0D38759683C2BED9FCE244D5EA9842396_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t032D85B1EF01CB57D96548AB107EAB3B1C09A434_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0B1BBFA44CAA416A6E13B3ADACB0CDB4EFF4AAB3;
IL2CPP_EXTERN_C String_t* _stringLiteral4C585F14001AC6659E009989AFB9A1E6E3DD171B;
IL2CPP_EXTERN_C String_t* _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral785C5B8BE08AE570EF771CA39BB8E3E929B1994D;
IL2CPP_EXTERN_C String_t* _stringLiteral8A52E247D991395741B0C681211A8D68958D7E46;
IL2CPP_EXTERN_C String_t* _stringLiteralA74ACAA1F61DE0EB348EC03946685B0B6270CB36;
IL2CPP_EXTERN_C String_t* _stringLiteralE2CFA0DCA9F3732AA69C3B65D12881F7F3CF5FC0;
IL2CPP_EXTERN_C String_t* _stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6;
IL2CPP_EXTERN_C String_t* _stringLiteralEB1018EBBD330B231ADCF3E0D809C0C4A7F770D4;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E_m3DB1DD5819F96D7C7F6F19C12138AC48D21DBBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mCE49E8783A1794715E6D539C8BB8C78CC589AB60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisStarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC_m6FFF67D18E19DC0556D8F33FE91976B26FD4D787_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_mBFCCD843329D165D8D674C4B9C04F13BE9940CC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TeleportLegacyUI_OnGUI_mD3B5040C56C52EEC1B24B1677824F14200B3E895_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEndOfFrameU3Ed__32_System_Collections_IEnumerator_Reset_m1B5B3E2A37905B20E0D84C9DBA69EC05811FEE07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m93A9A80D13EE147EB2805A92EFD48453AF727D7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mB4A40E66B8302949068CCFA2E3E1C15F625EA1CD_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


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


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// Readme/Section
struct Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D  : public RuntimeObject
{
public:
	// System.String Readme/Section::heading
	String_t* ___heading_0;
	// System.String Readme/Section::text
	String_t* ___text_1;
	// System.String Readme/Section::linkText
	String_t* ___linkText_2;
	// System.String Readme/Section::url
	String_t* ___url_3;

public:
	inline static int32_t get_offset_of_heading_0() { return static_cast<int32_t>(offsetof(Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D, ___heading_0)); }
	inline String_t* get_heading_0() const { return ___heading_0; }
	inline String_t** get_address_of_heading_0() { return &___heading_0; }
	inline void set_heading_0(String_t* value)
	{
		___heading_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___heading_0), (void*)value);
	}

	inline static int32_t get_offset_of_text_1() { return static_cast<int32_t>(offsetof(Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D, ___text_1)); }
	inline String_t* get_text_1() const { return ___text_1; }
	inline String_t** get_address_of_text_1() { return &___text_1; }
	inline void set_text_1(String_t* value)
	{
		___text_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_1), (void*)value);
	}

	inline static int32_t get_offset_of_linkText_2() { return static_cast<int32_t>(offsetof(Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D, ___linkText_2)); }
	inline String_t* get_linkText_2() const { return ___linkText_2; }
	inline String_t** get_address_of_linkText_2() { return &___linkText_2; }
	inline void set_linkText_2(String_t* value)
	{
		___linkText_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___linkText_2), (void*)value);
	}

	inline static int32_t get_offset_of_url_3() { return static_cast<int32_t>(offsetof(Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D, ___url_3)); }
	inline String_t* get_url_3() const { return ___url_3; }
	inline String_t** get_address_of_url_3() { return &___url_3; }
	inline void set_url_3(String_t* value)
	{
		___url_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_3), (void*)value);
	}
};


// StereoController/<>c
struct U3CU3Ec_t032D85B1EF01CB57D96548AB107EAB3B1C09A434  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t032D85B1EF01CB57D96548AB107EAB3B1C09A434_StaticFields
{
public:
	// StereoController/<>c StereoController/<>c::<>9
	U3CU3Ec_t032D85B1EF01CB57D96548AB107EAB3B1C09A434 * ___U3CU3E9_0;
	// System.Func`2<CardboardEye,CardboardHead> StereoController/<>c::<>9__18_0
	Func_2_t90E5AD6D9B378185FD34CE4CB23E1B4B039C745F * ___U3CU3E9__18_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t032D85B1EF01CB57D96548AB107EAB3B1C09A434_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t032D85B1EF01CB57D96548AB107EAB3B1C09A434 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t032D85B1EF01CB57D96548AB107EAB3B1C09A434 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t032D85B1EF01CB57D96548AB107EAB3B1C09A434 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__18_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t032D85B1EF01CB57D96548AB107EAB3B1C09A434_StaticFields, ___U3CU3E9__18_0_1)); }
	inline Func_2_t90E5AD6D9B378185FD34CE4CB23E1B4B039C745F * get_U3CU3E9__18_0_1() const { return ___U3CU3E9__18_0_1; }
	inline Func_2_t90E5AD6D9B378185FD34CE4CB23E1B4B039C745F ** get_address_of_U3CU3E9__18_0_1() { return &___U3CU3E9__18_0_1; }
	inline void set_U3CU3E9__18_0_1(Func_2_t90E5AD6D9B378185FD34CE4CB23E1B4B039C745F * value)
	{
		___U3CU3E9__18_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__18_0_1), (void*)value);
	}
};


// StereoController/<EndOfFrame>d__32
struct U3CEndOfFrameU3Ed__32_tF348F9B5FB6F2FC8F16A1AEA2155CFFBA309980F  : public RuntimeObject
{
public:
	// System.Int32 StereoController/<EndOfFrame>d__32::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object StereoController/<EndOfFrame>d__32::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// StereoController StereoController/<EndOfFrame>d__32::<>4__this
	StereoController_t4A27502B3E84039EC0E267357EA04E4BA485927F * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEndOfFrameU3Ed__32_tF348F9B5FB6F2FC8F16A1AEA2155CFFBA309980F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CEndOfFrameU3Ed__32_tF348F9B5FB6F2FC8F16A1AEA2155CFFBA309980F, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CEndOfFrameU3Ed__32_tF348F9B5FB6F2FC8F16A1AEA2155CFFBA309980F, ___U3CU3E4__this_2)); }
	inline StereoController_t4A27502B3E84039EC0E267357EA04E4BA485927F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline StereoController_t4A27502B3E84039EC0E267357EA04E4BA485927F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(StereoController_t4A27502B3E84039EC0E267357EA04E4BA485927F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E  : public AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E, ___m_EventSystem_1)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
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

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
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


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
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


// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
struct __StaticArrayInitTypeSizeU3D20_tA7878E15E0E5AC780F6ED4F6E87AD8233A152598 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_tA7878E15E0E5AC780F6ED4F6E87AD8233A152598__padding[20];
	};

public:
};


// BaseVRDevice/DisplayMetrics
struct DisplayMetrics_t88B8B1E17092F856200359A0AB8B41DF3FD0D39D 
{
public:
	// System.Int32 BaseVRDevice/DisplayMetrics::width
	int32_t ___width_0;
	// System.Int32 BaseVRDevice/DisplayMetrics::height
	int32_t ___height_1;
	// System.Single BaseVRDevice/DisplayMetrics::xdpi
	float ___xdpi_2;
	// System.Single BaseVRDevice/DisplayMetrics::ydpi
	float ___ydpi_3;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(DisplayMetrics_t88B8B1E17092F856200359A0AB8B41DF3FD0D39D, ___width_0)); }
	inline int32_t get_width_0() const { return ___width_0; }
	inline int32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(int32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(DisplayMetrics_t88B8B1E17092F856200359A0AB8B41DF3FD0D39D, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_xdpi_2() { return static_cast<int32_t>(offsetof(DisplayMetrics_t88B8B1E17092F856200359A0AB8B41DF3FD0D39D, ___xdpi_2)); }
	inline float get_xdpi_2() const { return ___xdpi_2; }
	inline float* get_address_of_xdpi_2() { return &___xdpi_2; }
	inline void set_xdpi_2(float value)
	{
		___xdpi_2 = value;
	}

	inline static int32_t get_offset_of_ydpi_3() { return static_cast<int32_t>(offsetof(DisplayMetrics_t88B8B1E17092F856200359A0AB8B41DF3FD0D39D, ___ydpi_3)); }
	inline float get_ydpi_3() const { return ___ydpi_3; }
	inline float* get_address_of_ydpi_3() { return &___ydpi_3; }
	inline void set_ydpi_3(float value)
	{
		___ydpi_3 = value;
	}
};


// CardboardProfile/Distortion
struct Distortion_t184AC024B295F25002A11CF09BB207500C24B887 
{
public:
	// System.Single CardboardProfile/Distortion::k1
	float ___k1_0;
	// System.Single CardboardProfile/Distortion::k2
	float ___k2_1;

public:
	inline static int32_t get_offset_of_k1_0() { return static_cast<int32_t>(offsetof(Distortion_t184AC024B295F25002A11CF09BB207500C24B887, ___k1_0)); }
	inline float get_k1_0() const { return ___k1_0; }
	inline float* get_address_of_k1_0() { return &___k1_0; }
	inline void set_k1_0(float value)
	{
		___k1_0 = value;
	}

	inline static int32_t get_offset_of_k2_1() { return static_cast<int32_t>(offsetof(Distortion_t184AC024B295F25002A11CF09BB207500C24B887, ___k2_1)); }
	inline float get_k2_1() const { return ___k2_1; }
	inline float* get_address_of_k2_1() { return &___k2_1; }
	inline void set_k2_1(float value)
	{
		___k2_1 = value;
	}
};


// CardboardProfile/Lenses
struct Lenses_t51CA43282B9AC40EA971F8A3A444485589DCC3BA 
{
public:
	// System.Single CardboardProfile/Lenses::separation
	float ___separation_0;
	// System.Single CardboardProfile/Lenses::offset
	float ___offset_1;
	// System.Single CardboardProfile/Lenses::screenDistance
	float ___screenDistance_2;
	// System.Int32 CardboardProfile/Lenses::alignment
	int32_t ___alignment_3;

public:
	inline static int32_t get_offset_of_separation_0() { return static_cast<int32_t>(offsetof(Lenses_t51CA43282B9AC40EA971F8A3A444485589DCC3BA, ___separation_0)); }
	inline float get_separation_0() const { return ___separation_0; }
	inline float* get_address_of_separation_0() { return &___separation_0; }
	inline void set_separation_0(float value)
	{
		___separation_0 = value;
	}

	inline static int32_t get_offset_of_offset_1() { return static_cast<int32_t>(offsetof(Lenses_t51CA43282B9AC40EA971F8A3A444485589DCC3BA, ___offset_1)); }
	inline float get_offset_1() const { return ___offset_1; }
	inline float* get_address_of_offset_1() { return &___offset_1; }
	inline void set_offset_1(float value)
	{
		___offset_1 = value;
	}

	inline static int32_t get_offset_of_screenDistance_2() { return static_cast<int32_t>(offsetof(Lenses_t51CA43282B9AC40EA971F8A3A444485589DCC3BA, ___screenDistance_2)); }
	inline float get_screenDistance_2() const { return ___screenDistance_2; }
	inline float* get_address_of_screenDistance_2() { return &___screenDistance_2; }
	inline void set_screenDistance_2(float value)
	{
		___screenDistance_2 = value;
	}

	inline static int32_t get_offset_of_alignment_3() { return static_cast<int32_t>(offsetof(Lenses_t51CA43282B9AC40EA971F8A3A444485589DCC3BA, ___alignment_3)); }
	inline int32_t get_alignment_3() const { return ___alignment_3; }
	inline int32_t* get_address_of_alignment_3() { return &___alignment_3; }
	inline void set_alignment_3(int32_t value)
	{
		___alignment_3 = value;
	}
};


// CardboardProfile/MaxFOV
struct MaxFOV_t3A705FF7CE70B1B1132A0988DB2308135C425937 
{
public:
	// System.Single CardboardProfile/MaxFOV::outer
	float ___outer_0;
	// System.Single CardboardProfile/MaxFOV::inner
	float ___inner_1;
	// System.Single CardboardProfile/MaxFOV::upper
	float ___upper_2;
	// System.Single CardboardProfile/MaxFOV::lower
	float ___lower_3;

public:
	inline static int32_t get_offset_of_outer_0() { return static_cast<int32_t>(offsetof(MaxFOV_t3A705FF7CE70B1B1132A0988DB2308135C425937, ___outer_0)); }
	inline float get_outer_0() const { return ___outer_0; }
	inline float* get_address_of_outer_0() { return &___outer_0; }
	inline void set_outer_0(float value)
	{
		___outer_0 = value;
	}

	inline static int32_t get_offset_of_inner_1() { return static_cast<int32_t>(offsetof(MaxFOV_t3A705FF7CE70B1B1132A0988DB2308135C425937, ___inner_1)); }
	inline float get_inner_1() const { return ___inner_1; }
	inline float* get_address_of_inner_1() { return &___inner_1; }
	inline void set_inner_1(float value)
	{
		___inner_1 = value;
	}

	inline static int32_t get_offset_of_upper_2() { return static_cast<int32_t>(offsetof(MaxFOV_t3A705FF7CE70B1B1132A0988DB2308135C425937, ___upper_2)); }
	inline float get_upper_2() const { return ___upper_2; }
	inline float* get_address_of_upper_2() { return &___upper_2; }
	inline void set_upper_2(float value)
	{
		___upper_2 = value;
	}

	inline static int32_t get_offset_of_lower_3() { return static_cast<int32_t>(offsetof(MaxFOV_t3A705FF7CE70B1B1132A0988DB2308135C425937, ___lower_3)); }
	inline float get_lower_3() const { return ___lower_3; }
	inline float* get_address_of_lower_3() { return &___lower_3; }
	inline void set_lower_3(float value)
	{
		___lower_3 = value;
	}
};


// CardboardProfile/Screen
struct Screen_tFFD6D47AE007D3343B0659B35CF660B562EA54AA 
{
public:
	// System.Single CardboardProfile/Screen::width
	float ___width_0;
	// System.Single CardboardProfile/Screen::height
	float ___height_1;
	// System.Single CardboardProfile/Screen::border
	float ___border_2;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(Screen_tFFD6D47AE007D3343B0659B35CF660B562EA54AA, ___width_0)); }
	inline float get_width_0() const { return ___width_0; }
	inline float* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(float value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(Screen_tFFD6D47AE007D3343B0659B35CF660B562EA54AA, ___height_1)); }
	inline float get_height_1() const { return ___height_1; }
	inline float* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(float value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_border_2() { return static_cast<int32_t>(offsetof(Screen_tFFD6D47AE007D3343B0659B35CF660B562EA54AA, ___border_2)); }
	inline float get_border_2() const { return ___border_2; }
	inline float* get_address_of_border_2() { return &___border_2; }
	inline void set_border_2(float value)
	{
		___border_2 = value;
	}
};


// UnityEngine.CollisionFlags
struct CollisionFlags_t435530D092E80B20FFD0DA008B4F298BF224B903 
{
public:
	// System.Int32 UnityEngine.CollisionFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CollisionFlags_t435530D092E80B20FFD0DA008B4F298BF224B903, ___value___2)); }
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.QueryTriggerInteraction
struct QueryTriggerInteraction_t9B82FB8CCAF559F47B6B8C0ECE197515ABFA96B0 
{
public:
	// System.Int32 UnityEngine.QueryTriggerInteraction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(QueryTriggerInteraction_t9B82FB8CCAF559F47B6B8C0ECE197515ABFA96B0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Ray
struct Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.RaycastHit
struct RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___module_1)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldNormal_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___screenPosition_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// Cardboard/BackButtonModes
struct BackButtonModes_t08D04EA8044E7257FB57D0694DCE2F2735991742 
{
public:
	// System.Int32 Cardboard/BackButtonModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BackButtonModes_t08D04EA8044E7257FB57D0694DCE2F2735991742, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cardboard/Distortion
struct Distortion_tB5B1D1488281D22029F786712E09AEF4BD5BB22B 
{
public:
	// System.Int32 Cardboard/Distortion::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Distortion_tB5B1D1488281D22029F786712E09AEF4BD5BB22B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cardboard/DistortionCorrectionMethod
struct DistortionCorrectionMethod_t898DA68873A28D430E2DB70CAA0127B4FAE31943 
{
public:
	// System.Int32 Cardboard/DistortionCorrectionMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DistortionCorrectionMethod_t898DA68873A28D430E2DB70CAA0127B4FAE31943, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cardboard/Eye
struct Eye_t50323A5EB09641437A3CD8525AEA269265EA33BA 
{
public:
	// System.Int32 Cardboard/Eye::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Eye_t50323A5EB09641437A3CD8525AEA269265EA33BA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// CardboardAudio/Quality
struct Quality_tE3FC800E5BD0FF7EAED76A852D771E0BDD7E6237 
{
public:
	// System.Int32 CardboardAudio/Quality::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Quality_tE3FC800E5BD0FF7EAED76A852D771E0BDD7E6237, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// CardboardAudioRoom/SurfaceMaterial
struct SurfaceMaterial_t3EED5F9F05AD0E54388B18E8D941DAF89A19AD2A 
{
public:
	// System.Int32 CardboardAudioRoom/SurfaceMaterial::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SurfaceMaterial_t3EED5F9F05AD0E54388B18E8D941DAF89A19AD2A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// CardboardProfile/Device
struct Device_tEADF2919BF2620B027975985C9C4EAA37DCAFF6E 
{
public:
	// CardboardProfile/Lenses CardboardProfile/Device::lenses
	Lenses_t51CA43282B9AC40EA971F8A3A444485589DCC3BA  ___lenses_0;
	// CardboardProfile/MaxFOV CardboardProfile/Device::maxFOV
	MaxFOV_t3A705FF7CE70B1B1132A0988DB2308135C425937  ___maxFOV_1;
	// CardboardProfile/Distortion CardboardProfile/Device::distortion
	Distortion_t184AC024B295F25002A11CF09BB207500C24B887  ___distortion_2;
	// CardboardProfile/Distortion CardboardProfile/Device::inverse
	Distortion_t184AC024B295F25002A11CF09BB207500C24B887  ___inverse_3;

public:
	inline static int32_t get_offset_of_lenses_0() { return static_cast<int32_t>(offsetof(Device_tEADF2919BF2620B027975985C9C4EAA37DCAFF6E, ___lenses_0)); }
	inline Lenses_t51CA43282B9AC40EA971F8A3A444485589DCC3BA  get_lenses_0() const { return ___lenses_0; }
	inline Lenses_t51CA43282B9AC40EA971F8A3A444485589DCC3BA * get_address_of_lenses_0() { return &___lenses_0; }
	inline void set_lenses_0(Lenses_t51CA43282B9AC40EA971F8A3A444485589DCC3BA  value)
	{
		___lenses_0 = value;
	}

	inline static int32_t get_offset_of_maxFOV_1() { return static_cast<int32_t>(offsetof(Device_tEADF2919BF2620B027975985C9C4EAA37DCAFF6E, ___maxFOV_1)); }
	inline MaxFOV_t3A705FF7CE70B1B1132A0988DB2308135C425937  get_maxFOV_1() const { return ___maxFOV_1; }
	inline MaxFOV_t3A705FF7CE70B1B1132A0988DB2308135C425937 * get_address_of_maxFOV_1() { return &___maxFOV_1; }
	inline void set_maxFOV_1(MaxFOV_t3A705FF7CE70B1B1132A0988DB2308135C425937  value)
	{
		___maxFOV_1 = value;
	}

	inline static int32_t get_offset_of_distortion_2() { return static_cast<int32_t>(offsetof(Device_tEADF2919BF2620B027975985C9C4EAA37DCAFF6E, ___distortion_2)); }
	inline Distortion_t184AC024B295F25002A11CF09BB207500C24B887  get_distortion_2() const { return ___distortion_2; }
	inline Distortion_t184AC024B295F25002A11CF09BB207500C24B887 * get_address_of_distortion_2() { return &___distortion_2; }
	inline void set_distortion_2(Distortion_t184AC024B295F25002A11CF09BB207500C24B887  value)
	{
		___distortion_2 = value;
	}

	inline static int32_t get_offset_of_inverse_3() { return static_cast<int32_t>(offsetof(Device_tEADF2919BF2620B027975985C9C4EAA37DCAFF6E, ___inverse_3)); }
	inline Distortion_t184AC024B295F25002A11CF09BB207500C24B887  get_inverse_3() const { return ___inverse_3; }
	inline Distortion_t184AC024B295F25002A11CF09BB207500C24B887 * get_address_of_inverse_3() { return &___inverse_3; }
	inline void set_inverse_3(Distortion_t184AC024B295F25002A11CF09BB207500C24B887  value)
	{
		___inverse_3 = value;
	}
};


// CardboardProfile/DeviceTypes
struct DeviceTypes_tA30ECED783484DB797530B2A487E879205C2140F 
{
public:
	// System.Int32 CardboardProfile/DeviceTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceTypes_tA30ECED783484DB797530B2A487E879205C2140F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// CardboardProfile/ScreenSizes
struct ScreenSizes_tE9111D95DA510E8EB7837F6E9538E55E129480F9 
{
public:
	// System.Int32 CardboardProfile/ScreenSizes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScreenSizes_tE9111D95DA510E8EB7837F6E9538E55E129480F9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData/InputButton
struct InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SkyboxMesh/Shape
struct Shape_t75611772B448F997CF79DB29E7241DE7F2AC294E 
{
public:
	// System.Int32 SkyboxMesh/Shape::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Shape_t75611772B448F997CF79DB29E7241DE7F2AC294E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
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

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___m_PointerPress_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerClickU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerClickU3Ek__BackingField_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerClickU3Ek__BackingField_7() const { return ___U3CpointerClickU3Ek__BackingField_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerClickU3Ek__BackingField_7() { return &___U3CpointerClickU3Ek__BackingField_7; }
	inline void set_U3CpointerClickU3Ek__BackingField_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerClickU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerClickU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerCurrentRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerCurrentRaycastU3Ek__BackingField_8() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_8(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerPressRaycastU3Ek__BackingField_9)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerPressRaycastU3Ek__BackingField_9() const { return ___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return &___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_9(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___hovered_10)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_hovered_10() const { return ___hovered_10; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_hovered_10() { return &___hovered_10; }
	inline void set_hovered_10(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___hovered_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CeligibleForClickU3Ek__BackingField_11)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_11() const { return ___U3CeligibleForClickU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_11() { return &___U3CeligibleForClickU3Ek__BackingField_11; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_11(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerIdU3Ek__BackingField_12)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_12() const { return ___U3CpointerIdU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_12() { return &___U3CpointerIdU3Ek__BackingField_12; }
	inline void set_U3CpointerIdU3Ek__BackingField_12(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpositionU3Ek__BackingField_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpositionU3Ek__BackingField_13() const { return ___U3CpositionU3Ek__BackingField_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpositionU3Ek__BackingField_13() { return &___U3CpositionU3Ek__BackingField_13; }
	inline void set_U3CpositionU3Ek__BackingField_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdeltaU3Ek__BackingField_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CdeltaU3Ek__BackingField_14() const { return ___U3CdeltaU3Ek__BackingField_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CdeltaU3Ek__BackingField_14() { return &___U3CdeltaU3Ek__BackingField_14; }
	inline void set_U3CdeltaU3Ek__BackingField_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CdeltaU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpressPositionU3Ek__BackingField_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpressPositionU3Ek__BackingField_15() const { return ___U3CpressPositionU3Ek__BackingField_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpressPositionU3Ek__BackingField_15() { return &___U3CpressPositionU3Ek__BackingField_15; }
	inline void set_U3CpressPositionU3Ek__BackingField_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpressPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldPositionU3Ek__BackingField_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldPositionU3Ek__BackingField_16() const { return ___U3CworldPositionU3Ek__BackingField_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldPositionU3Ek__BackingField_16() { return &___U3CworldPositionU3Ek__BackingField_16; }
	inline void set_U3CworldPositionU3Ek__BackingField_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldPositionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldNormalU3Ek__BackingField_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldNormalU3Ek__BackingField_17() const { return ___U3CworldNormalU3Ek__BackingField_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldNormalU3Ek__BackingField_17() { return &___U3CworldNormalU3Ek__BackingField_17; }
	inline void set_U3CworldNormalU3Ek__BackingField_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldNormalU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickTimeU3Ek__BackingField_18)); }
	inline float get_U3CclickTimeU3Ek__BackingField_18() const { return ___U3CclickTimeU3Ek__BackingField_18; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_18() { return &___U3CclickTimeU3Ek__BackingField_18; }
	inline void set_U3CclickTimeU3Ek__BackingField_18(float value)
	{
		___U3CclickTimeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickCountU3Ek__BackingField_19)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_19() const { return ___U3CclickCountU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_19() { return &___U3CclickCountU3Ek__BackingField_19; }
	inline void set_U3CclickCountU3Ek__BackingField_19(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CscrollDeltaU3Ek__BackingField_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CscrollDeltaU3Ek__BackingField_20() const { return ___U3CscrollDeltaU3Ek__BackingField_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CscrollDeltaU3Ek__BackingField_20() { return &___U3CscrollDeltaU3Ek__BackingField_20; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CuseDragThresholdU3Ek__BackingField_21)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_21() const { return ___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_21() { return &___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_21(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdraggingU3Ek__BackingField_22)); }
	inline bool get_U3CdraggingU3Ek__BackingField_22() const { return ___U3CdraggingU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_22() { return &___U3CdraggingU3Ek__BackingField_22; }
	inline void set_U3CdraggingU3Ek__BackingField_22(bool value)
	{
		___U3CdraggingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CbuttonU3Ek__BackingField_23)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_23() const { return ___U3CbuttonU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_23() { return &___U3CbuttonU3Ek__BackingField_23; }
	inline void set_U3CbuttonU3Ek__BackingField_23(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_23 = value;
	}
};


// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// BaseCardboardDevice/VREventCallback
struct VREventCallback_t444A75B727155FF2FA8CFADA55D677E27E0387D1  : public MulticastDelegate_t
{
public:

public:
};


// Cardboard/StereoScreenChangeDelegate
struct StereoScreenChangeDelegate_t6B70660959C797AFA101F9F26D0A5698B0026EF8  : public MulticastDelegate_t
{
public:

public:
};


// CardboardHead/HeadUpdatedDelegate
struct HeadUpdatedDelegate_tB7C7FC2C27C3EB039350DAF0361C13FA12441FC1  : public MulticastDelegate_t
{
public:

public:
};


// CardboardOnGUI/OnGUICallback
struct OnGUICallback_t6E54053C3D6F915C472341FA973EFA12EDFDB5C8  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.CharacterController
struct CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E  : public Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02
{
public:

public:
};


// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// Cardboard
struct Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Cardboard::uiLayerEnabled
	bool ___uiLayerEnabled_8;
	// System.Boolean Cardboard::vrModeEnabled
	bool ___vrModeEnabled_9;
	// Cardboard/DistortionCorrectionMethod Cardboard::distortionCorrection
	int32_t ___distortionCorrection_10;
	// System.Boolean Cardboard::enableAlignmentMarker
	bool ___enableAlignmentMarker_11;
	// System.Boolean Cardboard::enableSettingsButton
	bool ___enableSettingsButton_12;
	// Cardboard/BackButtonModes Cardboard::backButtonMode
	int32_t ___backButtonMode_13;
	// System.Boolean Cardboard::tapIsTrigger
	bool ___tapIsTrigger_14;
	// System.Single Cardboard::neckModelScale
	float ___neckModelScale_15;
	// System.Boolean Cardboard::autoDriftCorrection
	bool ___autoDriftCorrection_16;
	// System.Boolean Cardboard::electronicDisplayStabilization
	bool ___electronicDisplayStabilization_17;
	// System.Boolean Cardboard::<NativeDistortionCorrectionSupported>k__BackingField
	bool ___U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_19;
	// System.Boolean Cardboard::<NativeUILayerSupported>k__BackingField
	bool ___U3CNativeUILayerSupportedU3Ek__BackingField_20;
	// System.Single Cardboard::stereoScreenScale
	float ___stereoScreenScale_21;
	// Cardboard/StereoScreenChangeDelegate Cardboard::OnStereoScreenChanged
	StereoScreenChangeDelegate_t6B70660959C797AFA101F9F26D0A5698B0026EF8 * ___OnStereoScreenChanged_23;
	// UnityEngine.Vector2 Cardboard::defaultComfortableViewingRange
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___defaultComfortableViewingRange_24;
	// System.Uri Cardboard::DefaultDeviceProfile
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___DefaultDeviceProfile_25;
	// System.Action Cardboard::OnTrigger
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnTrigger_26;
	// System.Action Cardboard::OnTilt
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnTilt_27;
	// System.Action Cardboard::OnProfileChange
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnProfileChange_28;
	// System.Action Cardboard::OnBackButton
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnBackButton_29;
	// System.Boolean Cardboard::<Triggered>k__BackingField
	bool ___U3CTriggeredU3Ek__BackingField_30;
	// System.Boolean Cardboard::<Tilted>k__BackingField
	bool ___U3CTiltedU3Ek__BackingField_31;
	// System.Boolean Cardboard::<ProfileChanged>k__BackingField
	bool ___U3CProfileChangedU3Ek__BackingField_32;
	// System.Boolean Cardboard::<BackButtonPressed>k__BackingField
	bool ___U3CBackButtonPressedU3Ek__BackingField_33;
	// System.Int32 Cardboard::updatedToFrame
	int32_t ___updatedToFrame_34;

public:
	inline static int32_t get_offset_of_uiLayerEnabled_8() { return static_cast<int32_t>(offsetof(Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D, ___uiLayerEnabled_8)); }
	inline bool get_uiLayerEnabled_8() const { return ___uiLayerEnabled_8; }
	inline bool* get_address_of_uiLayerEnabled_8() { return &___uiLayerEnabled_8; }
	inline void set_uiLayerEnabled_8(bool value)
	{
		___uiLayerEnabled_8 = value;
	}

	inline static int32_t get_offset_of_vrModeEnabled_9() { return static_cast<int32_t>(offsetof(Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D, ___vrModeEnabled_9)); }
	inline bool get_vrModeEnabled_9() const { return ___vrModeEnabled_9; }
	inline bool* get_address_of_vrModeEnabled_9() { return &___vrModeEnabled_9; }
	inline void set_vrModeEnabled_9(bool value)
	{
		___vrModeEnabled_9 = value;
	}

	inline static int32_t get_offset_of_distortionCorrection_10() { return static_cast<int32_t>(offsetof(Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D, ___distortionCorrection_10)); }
	inline int32_t get_distortionCorrection_10() const { return ___distortionCorrection_10; }
	inline int32_t* get_address_of_distortionCorrection_10() { return &___distortionCorrection_10; }
	inline void set_distortionCorrection_10(int32_t value)
	{
		___distortionCorrection_10 = value;
	}

	inline static int32_t get_offset_of_enableAlignmentMarker_11() { return static_cast<int32_t>(offsetof(Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D, ___enableAlignmentMarker_11)); }
	inline bool get_enableAlignmentMarker_11() const { return ___enableAlignmentMarker_11; }
	inline bool* get_address_of_enableAlignmentMarker_11() { return &___enableAlignmentMarker_11; }
	inline void set_enableAlignmentMarker_11(bool value)
	{
		___enableAlignmentMarker_11 = value;
	}

	inline static int32_t get_offset_of_enableSettingsButton_12() { return static_cast<int32_t>(offsetof(Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D, ___enableSettingsButton_12)); }
	inline bool get_enableSettingsButton_12() const { return ___enableSettingsButton_12; }
	inline bool* get_address_of_enableSettingsButton_12() { return &___enableSettingsButton_12; }
	inline void set_enableSettingsButton_12(bool value)
	{
		___enableSettingsButton_12 = value;
	}

	inline static int32_t get_offset_of_backButtonMode_13() { return static_cast<int32_t>(offsetof(Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D, ___backButtonMode_13)); }
	inline int32_t get_backButtonMode_13() const { return ___backButtonMode_13; }
	inline int32_t* get_address_of_backButtonMode_13() { return &___backButtonMode_13; }
	inline void set_backButtonMode_13(int32_t value)
	{
		___backButtonMode_13 = value;
	}

	inline static int32_t get_offset_of_tapIsTrigger_14() { return static_cast<int32_t>(offsetof(Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D, ___tapIsTrigger_14)); }
	inline bool get_tapIsTrigger_14() const { return ___tapIsTrigger_14; }
	inline bool* get_address_of_tapIsTrigger_14() { return &___tapIsTrigger_14; }
	inline void set_tapIsTrigger_14(bool value)
	{
		___tapIsTrigger_14 = value;
	}

	inline static int32_t get_offset_of_neckModelScale_15() { return static_cast<int32_t>(offsetof(Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D, ___neckModelScale_15)); }
	inline float get_neckModelScale_15() const { return ___neckModelScale_15; }
	inline float* get_address_of_neckModelScale_15() { return &___neckModelScale_15; }
	inline void set_neckModelScale_15(float value)
	{
		___neckModelScale_15 = value;
	}

	inline static int32_t get_offset_of_autoDriftCorrection_16() { return static_cast<int32_t>(offsetof(Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D, ___autoDriftCorrection_16)); }
	inline bool get_autoDriftCorrection_16() const { return ___autoDriftCorrection_16; }
	inline bool* get_address_of_autoDriftCorrection_16() { return &___autoDriftCorrection_16; }
	inline void set_autoDriftCorrection_16(bool value)
	{
		___autoDriftCorrection_16 = value;
	}

	inline static int32_t get_offset_of_electronicDisplayStabilization_17() { return static_cast<int32_t>(offsetof(Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D, ___electronicDisplayStabilization_17)); }
	inline bool get_electronicDisplayStabilization_17() const { return ___electronicDisplayStabilization_17; }
	inline bool* get_address_of_electronicDisplayStabilization_17() { return &___electronicDisplayStabilization_17; }
	inline void set_electronicDisplayStabilization_17(bool value)
	{
		___electronicDisplayStabilization_17 = value;
	}

	inline static int32_t get_offset_of_U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D, ___U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_19)); }
	inline bool get_U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_19() const { return ___U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_19() { return &___U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_19; }
	inline void set_U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_19(bool value)
	{
		___U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CNativeUILayerSupportedU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D, ___U3CNativeUILayerSupportedU3Ek__BackingField_20)); }
	inline bool get_U3CNativeUILayerSupportedU3Ek__BackingField_20() const { return ___U3CNativeUILayerSupportedU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CNativeUILayerSupportedU3Ek__BackingField_20() { return &___U3CNativeUILayerSupportedU3Ek__BackingField_20; }
	inline void set_U3CNativeUILayerSupportedU3Ek__BackingField_20(bool value)
	{
		___U3CNativeUILayerSupportedU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_stereoScreenScale_21() { return static_cast<int32_t>(offsetof(Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D, ___stereoScreenScale_21)); }
	inline float get_stereoScreenScale_21() const { return ___stereoScreenScale_21; }
	inline float* get_address_of_stereoScreenScale_21() { return &___stereoScreenScale_21; }
	inline void set_stereoScreenScale_21(float value)
	{
		___stereoScreenScale_21 = value;
	}

	inline static int32_t get_offset_of_OnStereoScreenChanged_23() { return static_cast<int32_t>(offsetof(Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D, ___OnStereoScreenChanged_23)); }
	inline StereoScreenChangeDelegate_t6B70660959C797AFA101F9F26D0A5698B0026EF8 * get_OnStereoScreenChanged_23() const { return ___OnStereoScreenChanged_23; }
	inline StereoScreenChangeDelegate_t6B70660959C797AFA101F9F26D0A5698B0026EF8 ** get_address_of_OnStereoScreenChanged_23() { return &___OnStereoScreenChanged_23; }
	inline void set_OnStereoScreenChanged_23(StereoScreenChangeDelegate_t6B70660959C797AFA101F9F26D0A5698B0026EF8 * value)
	{
		___OnStereoScreenChanged_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStereoScreenChanged_23), (void*)value);
	}

	inline static int32_t get_offset_of_defaultComfortableViewingRange_24() { return static_cast<int32_t>(offsetof(Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D, ___defaultComfortableViewingRange_24)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_defaultComfortableViewingRange_24() const { return ___defaultComfortableViewingRange_24; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_defaultComfortableViewingRange_24() { return &___defaultComfortableViewingRange_24; }
	inline void set_defaultComfortableViewingRange_24(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___defaultComfortableViewingRange_24 = value;
	}

	inline static int32_t get_offset_of_DefaultDeviceProfile_25() { return static_cast<int32_t>(offsetof(Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D, ___DefaultDeviceProfile_25)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_DefaultDeviceProfile_25() const { return ___DefaultDeviceProfile_25; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_DefaultDeviceProfile_25() { return &___DefaultDeviceProfile_25; }
	inline void set_DefaultDeviceProfile_25(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___DefaultDeviceProfile_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultDeviceProfile_25), (void*)value);
	}

	inline static int32_t get_offset_of_OnTrigger_26() { return static_cast<int32_t>(offsetof(Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D, ___OnTrigger_26)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnTrigger_26() const { return ___OnTrigger_26; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnTrigger_26() { return &___OnTrigger_26; }
	inline void set_OnTrigger_26(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnTrigger_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTrigger_26), (void*)value);
	}

	inline static int32_t get_offset_of_OnTilt_27() { return static_cast<int32_t>(offsetof(Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D, ___OnTilt_27)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnTilt_27() const { return ___OnTilt_27; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnTilt_27() { return &___OnTilt_27; }
	inline void set_OnTilt_27(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnTilt_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTilt_27), (void*)value);
	}

	inline static int32_t get_offset_of_OnProfileChange_28() { return static_cast<int32_t>(offsetof(Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D, ___OnProfileChange_28)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnProfileChange_28() const { return ___OnProfileChange_28; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnProfileChange_28() { return &___OnProfileChange_28; }
	inline void set_OnProfileChange_28(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnProfileChange_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnProfileChange_28), (void*)value);
	}

	inline static int32_t get_offset_of_OnBackButton_29() { return static_cast<int32_t>(offsetof(Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D, ___OnBackButton_29)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnBackButton_29() const { return ___OnBackButton_29; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnBackButton_29() { return &___OnBackButton_29; }
	inline void set_OnBackButton_29(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnBackButton_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnBackButton_29), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTriggeredU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D, ___U3CTriggeredU3Ek__BackingField_30)); }
	inline bool get_U3CTriggeredU3Ek__BackingField_30() const { return ___U3CTriggeredU3Ek__BackingField_30; }
	inline bool* get_address_of_U3CTriggeredU3Ek__BackingField_30() { return &___U3CTriggeredU3Ek__BackingField_30; }
	inline void set_U3CTriggeredU3Ek__BackingField_30(bool value)
	{
		___U3CTriggeredU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_U3CTiltedU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D, ___U3CTiltedU3Ek__BackingField_31)); }
	inline bool get_U3CTiltedU3Ek__BackingField_31() const { return ___U3CTiltedU3Ek__BackingField_31; }
	inline bool* get_address_of_U3CTiltedU3Ek__BackingField_31() { return &___U3CTiltedU3Ek__BackingField_31; }
	inline void set_U3CTiltedU3Ek__BackingField_31(bool value)
	{
		___U3CTiltedU3Ek__BackingField_31 = value;
	}

	inline static int32_t get_offset_of_U3CProfileChangedU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D, ___U3CProfileChangedU3Ek__BackingField_32)); }
	inline bool get_U3CProfileChangedU3Ek__BackingField_32() const { return ___U3CProfileChangedU3Ek__BackingField_32; }
	inline bool* get_address_of_U3CProfileChangedU3Ek__BackingField_32() { return &___U3CProfileChangedU3Ek__BackingField_32; }
	inline void set_U3CProfileChangedU3Ek__BackingField_32(bool value)
	{
		___U3CProfileChangedU3Ek__BackingField_32 = value;
	}

	inline static int32_t get_offset_of_U3CBackButtonPressedU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D, ___U3CBackButtonPressedU3Ek__BackingField_33)); }
	inline bool get_U3CBackButtonPressedU3Ek__BackingField_33() const { return ___U3CBackButtonPressedU3Ek__BackingField_33; }
	inline bool* get_address_of_U3CBackButtonPressedU3Ek__BackingField_33() { return &___U3CBackButtonPressedU3Ek__BackingField_33; }
	inline void set_U3CBackButtonPressedU3Ek__BackingField_33(bool value)
	{
		___U3CBackButtonPressedU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_updatedToFrame_34() { return static_cast<int32_t>(offsetof(Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D, ___updatedToFrame_34)); }
	inline int32_t get_updatedToFrame_34() const { return ___updatedToFrame_34; }
	inline int32_t* get_address_of_updatedToFrame_34() { return &___updatedToFrame_34; }
	inline void set_updatedToFrame_34(int32_t value)
	{
		___updatedToFrame_34 = value;
	}
};

struct Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D_StaticFields
{
public:
	// Cardboard Cardboard::sdk
	Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D * ___sdk_5;
	// UnityEngine.Camera Cardboard::currentMainCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___currentMainCamera_6;
	// StereoController Cardboard::currentController
	StereoController_t4A27502B3E84039EC0E267357EA04E4BA485927F * ___currentController_7;
	// BaseVRDevice Cardboard::device
	BaseVRDevice_t9BCEAB685F3D1000E38FBA759C6B75730D59D13D * ___device_18;
	// UnityEngine.RenderTexture Cardboard::stereoScreen
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___stereoScreen_22;

public:
	inline static int32_t get_offset_of_sdk_5() { return static_cast<int32_t>(offsetof(Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D_StaticFields, ___sdk_5)); }
	inline Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D * get_sdk_5() const { return ___sdk_5; }
	inline Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D ** get_address_of_sdk_5() { return &___sdk_5; }
	inline void set_sdk_5(Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D * value)
	{
		___sdk_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sdk_5), (void*)value);
	}

	inline static int32_t get_offset_of_currentMainCamera_6() { return static_cast<int32_t>(offsetof(Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D_StaticFields, ___currentMainCamera_6)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_currentMainCamera_6() const { return ___currentMainCamera_6; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_currentMainCamera_6() { return &___currentMainCamera_6; }
	inline void set_currentMainCamera_6(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___currentMainCamera_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentMainCamera_6), (void*)value);
	}

	inline static int32_t get_offset_of_currentController_7() { return static_cast<int32_t>(offsetof(Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D_StaticFields, ___currentController_7)); }
	inline StereoController_t4A27502B3E84039EC0E267357EA04E4BA485927F * get_currentController_7() const { return ___currentController_7; }
	inline StereoController_t4A27502B3E84039EC0E267357EA04E4BA485927F ** get_address_of_currentController_7() { return &___currentController_7; }
	inline void set_currentController_7(StereoController_t4A27502B3E84039EC0E267357EA04E4BA485927F * value)
	{
		___currentController_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentController_7), (void*)value);
	}

	inline static int32_t get_offset_of_device_18() { return static_cast<int32_t>(offsetof(Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D_StaticFields, ___device_18)); }
	inline BaseVRDevice_t9BCEAB685F3D1000E38FBA759C6B75730D59D13D * get_device_18() const { return ___device_18; }
	inline BaseVRDevice_t9BCEAB685F3D1000E38FBA759C6B75730D59D13D ** get_address_of_device_18() { return &___device_18; }
	inline void set_device_18(BaseVRDevice_t9BCEAB685F3D1000E38FBA759C6B75730D59D13D * value)
	{
		___device_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___device_18), (void*)value);
	}

	inline static int32_t get_offset_of_stereoScreen_22() { return static_cast<int32_t>(offsetof(Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D_StaticFields, ___stereoScreen_22)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_stereoScreen_22() const { return ___stereoScreen_22; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_stereoScreen_22() { return &___stereoScreen_22; }
	inline void set_stereoScreen_22(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___stereoScreen_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stereoScreen_22), (void*)value);
	}
};


// CardboardEye
struct CardboardEye_t32ED6741BF22447FFE5D7EDF81B466BEBAA4C780  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Cardboard/Eye CardboardEye::eye
	int32_t ___eye_4;
	// UnityEngine.LayerMask CardboardEye::toggleCullingMask
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___toggleCullingMask_5;
	// StereoController CardboardEye::controller
	StereoController_t4A27502B3E84039EC0E267357EA04E4BA485927F * ___controller_6;
	// StereoRenderEffect CardboardEye::stereoEffect
	StereoRenderEffect_t913E873D964F0875F47CFC82A44B5E9263827F8D * ___stereoEffect_7;
	// UnityEngine.Camera CardboardEye::monoCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___monoCamera_8;
	// UnityEngine.Matrix4x4 CardboardEye::realProj
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___realProj_9;
	// System.Single CardboardEye::interpPosition
	float ___interpPosition_10;
	// UnityEngine.Camera CardboardEye::<cam>k__BackingField
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___U3CcamU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_eye_4() { return static_cast<int32_t>(offsetof(CardboardEye_t32ED6741BF22447FFE5D7EDF81B466BEBAA4C780, ___eye_4)); }
	inline int32_t get_eye_4() const { return ___eye_4; }
	inline int32_t* get_address_of_eye_4() { return &___eye_4; }
	inline void set_eye_4(int32_t value)
	{
		___eye_4 = value;
	}

	inline static int32_t get_offset_of_toggleCullingMask_5() { return static_cast<int32_t>(offsetof(CardboardEye_t32ED6741BF22447FFE5D7EDF81B466BEBAA4C780, ___toggleCullingMask_5)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_toggleCullingMask_5() const { return ___toggleCullingMask_5; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_toggleCullingMask_5() { return &___toggleCullingMask_5; }
	inline void set_toggleCullingMask_5(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___toggleCullingMask_5 = value;
	}

	inline static int32_t get_offset_of_controller_6() { return static_cast<int32_t>(offsetof(CardboardEye_t32ED6741BF22447FFE5D7EDF81B466BEBAA4C780, ___controller_6)); }
	inline StereoController_t4A27502B3E84039EC0E267357EA04E4BA485927F * get_controller_6() const { return ___controller_6; }
	inline StereoController_t4A27502B3E84039EC0E267357EA04E4BA485927F ** get_address_of_controller_6() { return &___controller_6; }
	inline void set_controller_6(StereoController_t4A27502B3E84039EC0E267357EA04E4BA485927F * value)
	{
		___controller_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controller_6), (void*)value);
	}

	inline static int32_t get_offset_of_stereoEffect_7() { return static_cast<int32_t>(offsetof(CardboardEye_t32ED6741BF22447FFE5D7EDF81B466BEBAA4C780, ___stereoEffect_7)); }
	inline StereoRenderEffect_t913E873D964F0875F47CFC82A44B5E9263827F8D * get_stereoEffect_7() const { return ___stereoEffect_7; }
	inline StereoRenderEffect_t913E873D964F0875F47CFC82A44B5E9263827F8D ** get_address_of_stereoEffect_7() { return &___stereoEffect_7; }
	inline void set_stereoEffect_7(StereoRenderEffect_t913E873D964F0875F47CFC82A44B5E9263827F8D * value)
	{
		___stereoEffect_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stereoEffect_7), (void*)value);
	}

	inline static int32_t get_offset_of_monoCamera_8() { return static_cast<int32_t>(offsetof(CardboardEye_t32ED6741BF22447FFE5D7EDF81B466BEBAA4C780, ___monoCamera_8)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_monoCamera_8() const { return ___monoCamera_8; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_monoCamera_8() { return &___monoCamera_8; }
	inline void set_monoCamera_8(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___monoCamera_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___monoCamera_8), (void*)value);
	}

	inline static int32_t get_offset_of_realProj_9() { return static_cast<int32_t>(offsetof(CardboardEye_t32ED6741BF22447FFE5D7EDF81B466BEBAA4C780, ___realProj_9)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_realProj_9() const { return ___realProj_9; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_realProj_9() { return &___realProj_9; }
	inline void set_realProj_9(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___realProj_9 = value;
	}

	inline static int32_t get_offset_of_interpPosition_10() { return static_cast<int32_t>(offsetof(CardboardEye_t32ED6741BF22447FFE5D7EDF81B466BEBAA4C780, ___interpPosition_10)); }
	inline float get_interpPosition_10() const { return ___interpPosition_10; }
	inline float* get_address_of_interpPosition_10() { return &___interpPosition_10; }
	inline void set_interpPosition_10(float value)
	{
		___interpPosition_10 = value;
	}

	inline static int32_t get_offset_of_U3CcamU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(CardboardEye_t32ED6741BF22447FFE5D7EDF81B466BEBAA4C780, ___U3CcamU3Ek__BackingField_11)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_U3CcamU3Ek__BackingField_11() const { return ___U3CcamU3Ek__BackingField_11; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_U3CcamU3Ek__BackingField_11() { return &___U3CcamU3Ek__BackingField_11; }
	inline void set_U3CcamU3Ek__BackingField_11(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___U3CcamU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcamU3Ek__BackingField_11), (void*)value);
	}
};


// CardboardHead
struct CardboardHead_t71133BBC784C92F40ED0B6CD29EE9D84B9D0329C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean CardboardHead::trackRotation
	bool ___trackRotation_4;
	// System.Boolean CardboardHead::trackPosition
	bool ___trackPosition_5;
	// UnityEngine.Transform CardboardHead::target
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target_6;
	// System.Boolean CardboardHead::updateEarly
	bool ___updateEarly_7;
	// CardboardHead/HeadUpdatedDelegate CardboardHead::OnHeadUpdated
	HeadUpdatedDelegate_tB7C7FC2C27C3EB039350DAF0361C13FA12441FC1 * ___OnHeadUpdated_8;
	// System.Boolean CardboardHead::updated
	bool ___updated_9;

public:
	inline static int32_t get_offset_of_trackRotation_4() { return static_cast<int32_t>(offsetof(CardboardHead_t71133BBC784C92F40ED0B6CD29EE9D84B9D0329C, ___trackRotation_4)); }
	inline bool get_trackRotation_4() const { return ___trackRotation_4; }
	inline bool* get_address_of_trackRotation_4() { return &___trackRotation_4; }
	inline void set_trackRotation_4(bool value)
	{
		___trackRotation_4 = value;
	}

	inline static int32_t get_offset_of_trackPosition_5() { return static_cast<int32_t>(offsetof(CardboardHead_t71133BBC784C92F40ED0B6CD29EE9D84B9D0329C, ___trackPosition_5)); }
	inline bool get_trackPosition_5() const { return ___trackPosition_5; }
	inline bool* get_address_of_trackPosition_5() { return &___trackPosition_5; }
	inline void set_trackPosition_5(bool value)
	{
		___trackPosition_5 = value;
	}

	inline static int32_t get_offset_of_target_6() { return static_cast<int32_t>(offsetof(CardboardHead_t71133BBC784C92F40ED0B6CD29EE9D84B9D0329C, ___target_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_target_6() const { return ___target_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_target_6() { return &___target_6; }
	inline void set_target_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___target_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_6), (void*)value);
	}

	inline static int32_t get_offset_of_updateEarly_7() { return static_cast<int32_t>(offsetof(CardboardHead_t71133BBC784C92F40ED0B6CD29EE9D84B9D0329C, ___updateEarly_7)); }
	inline bool get_updateEarly_7() const { return ___updateEarly_7; }
	inline bool* get_address_of_updateEarly_7() { return &___updateEarly_7; }
	inline void set_updateEarly_7(bool value)
	{
		___updateEarly_7 = value;
	}

	inline static int32_t get_offset_of_OnHeadUpdated_8() { return static_cast<int32_t>(offsetof(CardboardHead_t71133BBC784C92F40ED0B6CD29EE9D84B9D0329C, ___OnHeadUpdated_8)); }
	inline HeadUpdatedDelegate_tB7C7FC2C27C3EB039350DAF0361C13FA12441FC1 * get_OnHeadUpdated_8() const { return ___OnHeadUpdated_8; }
	inline HeadUpdatedDelegate_tB7C7FC2C27C3EB039350DAF0361C13FA12441FC1 ** get_address_of_OnHeadUpdated_8() { return &___OnHeadUpdated_8; }
	inline void set_OnHeadUpdated_8(HeadUpdatedDelegate_tB7C7FC2C27C3EB039350DAF0361C13FA12441FC1 * value)
	{
		___OnHeadUpdated_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnHeadUpdated_8), (void*)value);
	}

	inline static int32_t get_offset_of_updated_9() { return static_cast<int32_t>(offsetof(CardboardHead_t71133BBC784C92F40ED0B6CD29EE9D84B9D0329C, ___updated_9)); }
	inline bool get_updated_9() const { return ___updated_9; }
	inline bool* get_address_of_updated_9() { return &___updated_9; }
	inline void set_updated_9(bool value)
	{
		___updated_9 = value;
	}
};


// CardboardOnGUI
struct CardboardOnGUI_t2799612520A94714953D63D0CF556712A093F7DF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Color CardboardOnGUI::background
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___background_7;
	// UnityEngine.RenderTexture CardboardOnGUI::guiScreen
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___guiScreen_8;

public:
	inline static int32_t get_offset_of_background_7() { return static_cast<int32_t>(offsetof(CardboardOnGUI_t2799612520A94714953D63D0CF556712A093F7DF, ___background_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_background_7() const { return ___background_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_background_7() { return &___background_7; }
	inline void set_background_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___background_7 = value;
	}

	inline static int32_t get_offset_of_guiScreen_8() { return static_cast<int32_t>(offsetof(CardboardOnGUI_t2799612520A94714953D63D0CF556712A093F7DF, ___guiScreen_8)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_guiScreen_8() const { return ___guiScreen_8; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_guiScreen_8() { return &___guiScreen_8; }
	inline void set_guiScreen_8(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___guiScreen_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___guiScreen_8), (void*)value);
	}
};

struct CardboardOnGUI_t2799612520A94714953D63D0CF556712A093F7DF_StaticFields
{
public:
	// CardboardOnGUI/OnGUICallback CardboardOnGUI::onGUICallback
	OnGUICallback_t6E54053C3D6F915C472341FA973EFA12EDFDB5C8 * ___onGUICallback_4;
	// System.Boolean CardboardOnGUI::okToDraw
	bool ___okToDraw_5;
	// System.Boolean CardboardOnGUI::isGUIVisible
	bool ___isGUIVisible_6;

public:
	inline static int32_t get_offset_of_onGUICallback_4() { return static_cast<int32_t>(offsetof(CardboardOnGUI_t2799612520A94714953D63D0CF556712A093F7DF_StaticFields, ___onGUICallback_4)); }
	inline OnGUICallback_t6E54053C3D6F915C472341FA973EFA12EDFDB5C8 * get_onGUICallback_4() const { return ___onGUICallback_4; }
	inline OnGUICallback_t6E54053C3D6F915C472341FA973EFA12EDFDB5C8 ** get_address_of_onGUICallback_4() { return &___onGUICallback_4; }
	inline void set_onGUICallback_4(OnGUICallback_t6E54053C3D6F915C472341FA973EFA12EDFDB5C8 * value)
	{
		___onGUICallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onGUICallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_okToDraw_5() { return static_cast<int32_t>(offsetof(CardboardOnGUI_t2799612520A94714953D63D0CF556712A093F7DF_StaticFields, ___okToDraw_5)); }
	inline bool get_okToDraw_5() const { return ___okToDraw_5; }
	inline bool* get_address_of_okToDraw_5() { return &___okToDraw_5; }
	inline void set_okToDraw_5(bool value)
	{
		___okToDraw_5 = value;
	}

	inline static int32_t get_offset_of_isGUIVisible_6() { return static_cast<int32_t>(offsetof(CardboardOnGUI_t2799612520A94714953D63D0CF556712A093F7DF_StaticFields, ___isGUIVisible_6)); }
	inline bool get_isGUIVisible_6() const { return ___isGUIVisible_6; }
	inline bool* get_address_of_isGUIVisible_6() { return &___isGUIVisible_6; }
	inline void set_isGUIVisible_6(bool value)
	{
		___isGUIVisible_6 = value;
	}
};


// StarterAssets.StarterAssetsInputs
struct StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector2 StarterAssets.StarterAssetsInputs::move
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___move_4;
	// UnityEngine.Vector2 StarterAssets.StarterAssetsInputs::look
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___look_5;
	// System.Boolean StarterAssets.StarterAssetsInputs::jump
	bool ___jump_6;
	// System.Boolean StarterAssets.StarterAssetsInputs::sprint
	bool ___sprint_7;
	// System.Boolean StarterAssets.StarterAssetsInputs::analogMovement
	bool ___analogMovement_8;
	// System.Boolean StarterAssets.StarterAssetsInputs::cursorLocked
	bool ___cursorLocked_9;
	// System.Boolean StarterAssets.StarterAssetsInputs::cursorInputForLook
	bool ___cursorInputForLook_10;

public:
	inline static int32_t get_offset_of_move_4() { return static_cast<int32_t>(offsetof(StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC, ___move_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_move_4() const { return ___move_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_move_4() { return &___move_4; }
	inline void set_move_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___move_4 = value;
	}

	inline static int32_t get_offset_of_look_5() { return static_cast<int32_t>(offsetof(StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC, ___look_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_look_5() const { return ___look_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_look_5() { return &___look_5; }
	inline void set_look_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___look_5 = value;
	}

	inline static int32_t get_offset_of_jump_6() { return static_cast<int32_t>(offsetof(StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC, ___jump_6)); }
	inline bool get_jump_6() const { return ___jump_6; }
	inline bool* get_address_of_jump_6() { return &___jump_6; }
	inline void set_jump_6(bool value)
	{
		___jump_6 = value;
	}

	inline static int32_t get_offset_of_sprint_7() { return static_cast<int32_t>(offsetof(StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC, ___sprint_7)); }
	inline bool get_sprint_7() const { return ___sprint_7; }
	inline bool* get_address_of_sprint_7() { return &___sprint_7; }
	inline void set_sprint_7(bool value)
	{
		___sprint_7 = value;
	}

	inline static int32_t get_offset_of_analogMovement_8() { return static_cast<int32_t>(offsetof(StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC, ___analogMovement_8)); }
	inline bool get_analogMovement_8() const { return ___analogMovement_8; }
	inline bool* get_address_of_analogMovement_8() { return &___analogMovement_8; }
	inline void set_analogMovement_8(bool value)
	{
		___analogMovement_8 = value;
	}

	inline static int32_t get_offset_of_cursorLocked_9() { return static_cast<int32_t>(offsetof(StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC, ___cursorLocked_9)); }
	inline bool get_cursorLocked_9() const { return ___cursorLocked_9; }
	inline bool* get_address_of_cursorLocked_9() { return &___cursorLocked_9; }
	inline void set_cursorLocked_9(bool value)
	{
		___cursorLocked_9 = value;
	}

	inline static int32_t get_offset_of_cursorInputForLook_10() { return static_cast<int32_t>(offsetof(StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC, ___cursorInputForLook_10)); }
	inline bool get_cursorInputForLook_10() const { return ___cursorInputForLook_10; }
	inline bool* get_address_of_cursorInputForLook_10() { return &___cursorInputForLook_10; }
	inline void set_cursorInputForLook_10(bool value)
	{
		___cursorInputForLook_10 = value;
	}
};


// StereoController
struct StereoController_t4A27502B3E84039EC0E267357EA04E4BA485927F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean StereoController::directRender
	bool ___directRender_4;
	// System.Boolean StereoController::keepStereoUpdated
	bool ___keepStereoUpdated_5;
	// System.Single StereoController::stereoMultiplier
	float ___stereoMultiplier_6;
	// System.Single StereoController::matchMonoFOV
	float ___matchMonoFOV_7;
	// System.Single StereoController::matchByZoom
	float ___matchByZoom_8;
	// UnityEngine.Transform StereoController::centerOfInterest
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___centerOfInterest_9;
	// System.Single StereoController::radiusOfInterest
	float ___radiusOfInterest_10;
	// System.Boolean StereoController::checkStereoComfort
	bool ___checkStereoComfort_11;
	// System.Single StereoController::stereoAdjustSmoothing
	float ___stereoAdjustSmoothing_12;
	// System.Single StereoController::screenParallax
	float ___screenParallax_13;
	// System.Single StereoController::stereoPaddingX
	float ___stereoPaddingX_14;
	// System.Single StereoController::stereoPaddingY
	float ___stereoPaddingY_15;
	// System.Boolean StereoController::renderedStereo
	bool ___renderedStereo_16;
	// CardboardEye[] StereoController::eyes
	CardboardEyeU5BU5D_t1352C23D86CE0B9397EA68A33D86F9200013536C* ___eyes_17;
	// CardboardHead StereoController::head
	CardboardHead_t71133BBC784C92F40ED0B6CD29EE9D84B9D0329C * ___head_18;
	// UnityEngine.Camera StereoController::<cam>k__BackingField
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___U3CcamU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_directRender_4() { return static_cast<int32_t>(offsetof(StereoController_t4A27502B3E84039EC0E267357EA04E4BA485927F, ___directRender_4)); }
	inline bool get_directRender_4() const { return ___directRender_4; }
	inline bool* get_address_of_directRender_4() { return &___directRender_4; }
	inline void set_directRender_4(bool value)
	{
		___directRender_4 = value;
	}

	inline static int32_t get_offset_of_keepStereoUpdated_5() { return static_cast<int32_t>(offsetof(StereoController_t4A27502B3E84039EC0E267357EA04E4BA485927F, ___keepStereoUpdated_5)); }
	inline bool get_keepStereoUpdated_5() const { return ___keepStereoUpdated_5; }
	inline bool* get_address_of_keepStereoUpdated_5() { return &___keepStereoUpdated_5; }
	inline void set_keepStereoUpdated_5(bool value)
	{
		___keepStereoUpdated_5 = value;
	}

	inline static int32_t get_offset_of_stereoMultiplier_6() { return static_cast<int32_t>(offsetof(StereoController_t4A27502B3E84039EC0E267357EA04E4BA485927F, ___stereoMultiplier_6)); }
	inline float get_stereoMultiplier_6() const { return ___stereoMultiplier_6; }
	inline float* get_address_of_stereoMultiplier_6() { return &___stereoMultiplier_6; }
	inline void set_stereoMultiplier_6(float value)
	{
		___stereoMultiplier_6 = value;
	}

	inline static int32_t get_offset_of_matchMonoFOV_7() { return static_cast<int32_t>(offsetof(StereoController_t4A27502B3E84039EC0E267357EA04E4BA485927F, ___matchMonoFOV_7)); }
	inline float get_matchMonoFOV_7() const { return ___matchMonoFOV_7; }
	inline float* get_address_of_matchMonoFOV_7() { return &___matchMonoFOV_7; }
	inline void set_matchMonoFOV_7(float value)
	{
		___matchMonoFOV_7 = value;
	}

	inline static int32_t get_offset_of_matchByZoom_8() { return static_cast<int32_t>(offsetof(StereoController_t4A27502B3E84039EC0E267357EA04E4BA485927F, ___matchByZoom_8)); }
	inline float get_matchByZoom_8() const { return ___matchByZoom_8; }
	inline float* get_address_of_matchByZoom_8() { return &___matchByZoom_8; }
	inline void set_matchByZoom_8(float value)
	{
		___matchByZoom_8 = value;
	}

	inline static int32_t get_offset_of_centerOfInterest_9() { return static_cast<int32_t>(offsetof(StereoController_t4A27502B3E84039EC0E267357EA04E4BA485927F, ___centerOfInterest_9)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_centerOfInterest_9() const { return ___centerOfInterest_9; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_centerOfInterest_9() { return &___centerOfInterest_9; }
	inline void set_centerOfInterest_9(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___centerOfInterest_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___centerOfInterest_9), (void*)value);
	}

	inline static int32_t get_offset_of_radiusOfInterest_10() { return static_cast<int32_t>(offsetof(StereoController_t4A27502B3E84039EC0E267357EA04E4BA485927F, ___radiusOfInterest_10)); }
	inline float get_radiusOfInterest_10() const { return ___radiusOfInterest_10; }
	inline float* get_address_of_radiusOfInterest_10() { return &___radiusOfInterest_10; }
	inline void set_radiusOfInterest_10(float value)
	{
		___radiusOfInterest_10 = value;
	}

	inline static int32_t get_offset_of_checkStereoComfort_11() { return static_cast<int32_t>(offsetof(StereoController_t4A27502B3E84039EC0E267357EA04E4BA485927F, ___checkStereoComfort_11)); }
	inline bool get_checkStereoComfort_11() const { return ___checkStereoComfort_11; }
	inline bool* get_address_of_checkStereoComfort_11() { return &___checkStereoComfort_11; }
	inline void set_checkStereoComfort_11(bool value)
	{
		___checkStereoComfort_11 = value;
	}

	inline static int32_t get_offset_of_stereoAdjustSmoothing_12() { return static_cast<int32_t>(offsetof(StereoController_t4A27502B3E84039EC0E267357EA04E4BA485927F, ___stereoAdjustSmoothing_12)); }
	inline float get_stereoAdjustSmoothing_12() const { return ___stereoAdjustSmoothing_12; }
	inline float* get_address_of_stereoAdjustSmoothing_12() { return &___stereoAdjustSmoothing_12; }
	inline void set_stereoAdjustSmoothing_12(float value)
	{
		___stereoAdjustSmoothing_12 = value;
	}

	inline static int32_t get_offset_of_screenParallax_13() { return static_cast<int32_t>(offsetof(StereoController_t4A27502B3E84039EC0E267357EA04E4BA485927F, ___screenParallax_13)); }
	inline float get_screenParallax_13() const { return ___screenParallax_13; }
	inline float* get_address_of_screenParallax_13() { return &___screenParallax_13; }
	inline void set_screenParallax_13(float value)
	{
		___screenParallax_13 = value;
	}

	inline static int32_t get_offset_of_stereoPaddingX_14() { return static_cast<int32_t>(offsetof(StereoController_t4A27502B3E84039EC0E267357EA04E4BA485927F, ___stereoPaddingX_14)); }
	inline float get_stereoPaddingX_14() const { return ___stereoPaddingX_14; }
	inline float* get_address_of_stereoPaddingX_14() { return &___stereoPaddingX_14; }
	inline void set_stereoPaddingX_14(float value)
	{
		___stereoPaddingX_14 = value;
	}

	inline static int32_t get_offset_of_stereoPaddingY_15() { return static_cast<int32_t>(offsetof(StereoController_t4A27502B3E84039EC0E267357EA04E4BA485927F, ___stereoPaddingY_15)); }
	inline float get_stereoPaddingY_15() const { return ___stereoPaddingY_15; }
	inline float* get_address_of_stereoPaddingY_15() { return &___stereoPaddingY_15; }
	inline void set_stereoPaddingY_15(float value)
	{
		___stereoPaddingY_15 = value;
	}

	inline static int32_t get_offset_of_renderedStereo_16() { return static_cast<int32_t>(offsetof(StereoController_t4A27502B3E84039EC0E267357EA04E4BA485927F, ___renderedStereo_16)); }
	inline bool get_renderedStereo_16() const { return ___renderedStereo_16; }
	inline bool* get_address_of_renderedStereo_16() { return &___renderedStereo_16; }
	inline void set_renderedStereo_16(bool value)
	{
		___renderedStereo_16 = value;
	}

	inline static int32_t get_offset_of_eyes_17() { return static_cast<int32_t>(offsetof(StereoController_t4A27502B3E84039EC0E267357EA04E4BA485927F, ___eyes_17)); }
	inline CardboardEyeU5BU5D_t1352C23D86CE0B9397EA68A33D86F9200013536C* get_eyes_17() const { return ___eyes_17; }
	inline CardboardEyeU5BU5D_t1352C23D86CE0B9397EA68A33D86F9200013536C** get_address_of_eyes_17() { return &___eyes_17; }
	inline void set_eyes_17(CardboardEyeU5BU5D_t1352C23D86CE0B9397EA68A33D86F9200013536C* value)
	{
		___eyes_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eyes_17), (void*)value);
	}

	inline static int32_t get_offset_of_head_18() { return static_cast<int32_t>(offsetof(StereoController_t4A27502B3E84039EC0E267357EA04E4BA485927F, ___head_18)); }
	inline CardboardHead_t71133BBC784C92F40ED0B6CD29EE9D84B9D0329C * get_head_18() const { return ___head_18; }
	inline CardboardHead_t71133BBC784C92F40ED0B6CD29EE9D84B9D0329C ** get_address_of_head_18() { return &___head_18; }
	inline void set_head_18(CardboardHead_t71133BBC784C92F40ED0B6CD29EE9D84B9D0329C * value)
	{
		___head_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___head_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcamU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(StereoController_t4A27502B3E84039EC0E267357EA04E4BA485927F, ___U3CcamU3Ek__BackingField_19)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_U3CcamU3Ek__BackingField_19() const { return ___U3CcamU3Ek__BackingField_19; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_U3CcamU3Ek__BackingField_19() { return &___U3CcamU3Ek__BackingField_19; }
	inline void set_U3CcamU3Ek__BackingField_19(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___U3CcamU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcamU3Ek__BackingField_19), (void*)value);
	}
};


// StereoLensFlare
struct StereoLensFlare_t3207DC01111167616502F4822CA7DC73D6C9FE75  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single StereoLensFlare::range
	float ___range_4;

public:
	inline static int32_t get_offset_of_range_4() { return static_cast<int32_t>(offsetof(StereoLensFlare_t3207DC01111167616502F4822CA7DC73D6C9FE75, ___range_4)); }
	inline float get_range_4() const { return ___range_4; }
	inline float* get_address_of_range_4() { return &___range_4; }
	inline void set_range_4(float value)
	{
		___range_4 = value;
	}
};


// StereoRenderEffect
struct StereoRenderEffect_t913E873D964F0875F47CFC82A44B5E9263827F8D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Material StereoRenderEffect::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_4;

public:
	inline static int32_t get_offset_of_material_4() { return static_cast<int32_t>(offsetof(StereoRenderEffect_t913E873D964F0875F47CFC82A44B5E9263827F8D, ___material_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_4() const { return ___material_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_4() { return &___material_4; }
	inline void set_material_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_4), (void*)value);
	}
};


// Teleport
struct Teleport_t33E97FA0B9C7C63F5D0130A3D270BB742D9B9995  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector3 Teleport::startingPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startingPosition_4;

public:
	inline static int32_t get_offset_of_startingPosition_4() { return static_cast<int32_t>(offsetof(Teleport_t33E97FA0B9C7C63F5D0130A3D270BB742D9B9995, ___startingPosition_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_startingPosition_4() const { return ___startingPosition_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_startingPosition_4() { return &___startingPosition_4; }
	inline void set_startingPosition_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___startingPosition_4 = value;
	}
};


// StarterAssets.ThirdPersonController
struct ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single StarterAssets.ThirdPersonController::MoveSpeed
	float ___MoveSpeed_4;
	// System.Single StarterAssets.ThirdPersonController::SprintSpeed
	float ___SprintSpeed_5;
	// System.Single StarterAssets.ThirdPersonController::RotationSmoothTime
	float ___RotationSmoothTime_6;
	// System.Single StarterAssets.ThirdPersonController::SpeedChangeRate
	float ___SpeedChangeRate_7;
	// System.Single StarterAssets.ThirdPersonController::JumpHeight
	float ___JumpHeight_8;
	// System.Single StarterAssets.ThirdPersonController::Gravity
	float ___Gravity_9;
	// System.Single StarterAssets.ThirdPersonController::JumpTimeout
	float ___JumpTimeout_10;
	// System.Single StarterAssets.ThirdPersonController::FallTimeout
	float ___FallTimeout_11;
	// System.Boolean StarterAssets.ThirdPersonController::Grounded
	bool ___Grounded_12;
	// System.Single StarterAssets.ThirdPersonController::GroundedOffset
	float ___GroundedOffset_13;
	// System.Single StarterAssets.ThirdPersonController::GroundedRadius
	float ___GroundedRadius_14;
	// UnityEngine.LayerMask StarterAssets.ThirdPersonController::GroundLayers
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___GroundLayers_15;
	// UnityEngine.GameObject StarterAssets.ThirdPersonController::CinemachineCameraTarget
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___CinemachineCameraTarget_16;
	// System.Single StarterAssets.ThirdPersonController::TopClamp
	float ___TopClamp_17;
	// System.Single StarterAssets.ThirdPersonController::BottomClamp
	float ___BottomClamp_18;
	// System.Single StarterAssets.ThirdPersonController::CameraAngleOverride
	float ___CameraAngleOverride_19;
	// System.Boolean StarterAssets.ThirdPersonController::LockCameraPosition
	bool ___LockCameraPosition_20;
	// System.Single StarterAssets.ThirdPersonController::_cinemachineTargetYaw
	float ____cinemachineTargetYaw_21;
	// System.Single StarterAssets.ThirdPersonController::_cinemachineTargetPitch
	float ____cinemachineTargetPitch_22;
	// System.Single StarterAssets.ThirdPersonController::_speed
	float ____speed_23;
	// System.Single StarterAssets.ThirdPersonController::_animationBlend
	float ____animationBlend_24;
	// System.Single StarterAssets.ThirdPersonController::_targetRotation
	float ____targetRotation_25;
	// System.Single StarterAssets.ThirdPersonController::_rotationVelocity
	float ____rotationVelocity_26;
	// System.Single StarterAssets.ThirdPersonController::_verticalVelocity
	float ____verticalVelocity_27;
	// System.Single StarterAssets.ThirdPersonController::_terminalVelocity
	float ____terminalVelocity_28;
	// System.Single StarterAssets.ThirdPersonController::_jumpTimeoutDelta
	float ____jumpTimeoutDelta_29;
	// System.Single StarterAssets.ThirdPersonController::_fallTimeoutDelta
	float ____fallTimeoutDelta_30;
	// System.Int32 StarterAssets.ThirdPersonController::_animIDSpeed
	int32_t ____animIDSpeed_31;
	// System.Int32 StarterAssets.ThirdPersonController::_animIDGrounded
	int32_t ____animIDGrounded_32;
	// System.Int32 StarterAssets.ThirdPersonController::_animIDJump
	int32_t ____animIDJump_33;
	// System.Int32 StarterAssets.ThirdPersonController::_animIDFreeFall
	int32_t ____animIDFreeFall_34;
	// System.Int32 StarterAssets.ThirdPersonController::_animIDMotionSpeed
	int32_t ____animIDMotionSpeed_35;
	// UnityEngine.Animator StarterAssets.ThirdPersonController::_animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ____animator_36;
	// UnityEngine.CharacterController StarterAssets.ThirdPersonController::_controller
	CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * ____controller_37;
	// StarterAssets.StarterAssetsInputs StarterAssets.ThirdPersonController::_input
	StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * ____input_38;
	// UnityEngine.GameObject StarterAssets.ThirdPersonController::_mainCamera
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____mainCamera_39;
	// System.Boolean StarterAssets.ThirdPersonController::_hasAnimator
	bool ____hasAnimator_41;

public:
	inline static int32_t get_offset_of_MoveSpeed_4() { return static_cast<int32_t>(offsetof(ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903, ___MoveSpeed_4)); }
	inline float get_MoveSpeed_4() const { return ___MoveSpeed_4; }
	inline float* get_address_of_MoveSpeed_4() { return &___MoveSpeed_4; }
	inline void set_MoveSpeed_4(float value)
	{
		___MoveSpeed_4 = value;
	}

	inline static int32_t get_offset_of_SprintSpeed_5() { return static_cast<int32_t>(offsetof(ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903, ___SprintSpeed_5)); }
	inline float get_SprintSpeed_5() const { return ___SprintSpeed_5; }
	inline float* get_address_of_SprintSpeed_5() { return &___SprintSpeed_5; }
	inline void set_SprintSpeed_5(float value)
	{
		___SprintSpeed_5 = value;
	}

	inline static int32_t get_offset_of_RotationSmoothTime_6() { return static_cast<int32_t>(offsetof(ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903, ___RotationSmoothTime_6)); }
	inline float get_RotationSmoothTime_6() const { return ___RotationSmoothTime_6; }
	inline float* get_address_of_RotationSmoothTime_6() { return &___RotationSmoothTime_6; }
	inline void set_RotationSmoothTime_6(float value)
	{
		___RotationSmoothTime_6 = value;
	}

	inline static int32_t get_offset_of_SpeedChangeRate_7() { return static_cast<int32_t>(offsetof(ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903, ___SpeedChangeRate_7)); }
	inline float get_SpeedChangeRate_7() const { return ___SpeedChangeRate_7; }
	inline float* get_address_of_SpeedChangeRate_7() { return &___SpeedChangeRate_7; }
	inline void set_SpeedChangeRate_7(float value)
	{
		___SpeedChangeRate_7 = value;
	}

	inline static int32_t get_offset_of_JumpHeight_8() { return static_cast<int32_t>(offsetof(ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903, ___JumpHeight_8)); }
	inline float get_JumpHeight_8() const { return ___JumpHeight_8; }
	inline float* get_address_of_JumpHeight_8() { return &___JumpHeight_8; }
	inline void set_JumpHeight_8(float value)
	{
		___JumpHeight_8 = value;
	}

	inline static int32_t get_offset_of_Gravity_9() { return static_cast<int32_t>(offsetof(ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903, ___Gravity_9)); }
	inline float get_Gravity_9() const { return ___Gravity_9; }
	inline float* get_address_of_Gravity_9() { return &___Gravity_9; }
	inline void set_Gravity_9(float value)
	{
		___Gravity_9 = value;
	}

	inline static int32_t get_offset_of_JumpTimeout_10() { return static_cast<int32_t>(offsetof(ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903, ___JumpTimeout_10)); }
	inline float get_JumpTimeout_10() const { return ___JumpTimeout_10; }
	inline float* get_address_of_JumpTimeout_10() { return &___JumpTimeout_10; }
	inline void set_JumpTimeout_10(float value)
	{
		___JumpTimeout_10 = value;
	}

	inline static int32_t get_offset_of_FallTimeout_11() { return static_cast<int32_t>(offsetof(ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903, ___FallTimeout_11)); }
	inline float get_FallTimeout_11() const { return ___FallTimeout_11; }
	inline float* get_address_of_FallTimeout_11() { return &___FallTimeout_11; }
	inline void set_FallTimeout_11(float value)
	{
		___FallTimeout_11 = value;
	}

	inline static int32_t get_offset_of_Grounded_12() { return static_cast<int32_t>(offsetof(ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903, ___Grounded_12)); }
	inline bool get_Grounded_12() const { return ___Grounded_12; }
	inline bool* get_address_of_Grounded_12() { return &___Grounded_12; }
	inline void set_Grounded_12(bool value)
	{
		___Grounded_12 = value;
	}

	inline static int32_t get_offset_of_GroundedOffset_13() { return static_cast<int32_t>(offsetof(ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903, ___GroundedOffset_13)); }
	inline float get_GroundedOffset_13() const { return ___GroundedOffset_13; }
	inline float* get_address_of_GroundedOffset_13() { return &___GroundedOffset_13; }
	inline void set_GroundedOffset_13(float value)
	{
		___GroundedOffset_13 = value;
	}

	inline static int32_t get_offset_of_GroundedRadius_14() { return static_cast<int32_t>(offsetof(ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903, ___GroundedRadius_14)); }
	inline float get_GroundedRadius_14() const { return ___GroundedRadius_14; }
	inline float* get_address_of_GroundedRadius_14() { return &___GroundedRadius_14; }
	inline void set_GroundedRadius_14(float value)
	{
		___GroundedRadius_14 = value;
	}

	inline static int32_t get_offset_of_GroundLayers_15() { return static_cast<int32_t>(offsetof(ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903, ___GroundLayers_15)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_GroundLayers_15() const { return ___GroundLayers_15; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_GroundLayers_15() { return &___GroundLayers_15; }
	inline void set_GroundLayers_15(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___GroundLayers_15 = value;
	}

	inline static int32_t get_offset_of_CinemachineCameraTarget_16() { return static_cast<int32_t>(offsetof(ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903, ___CinemachineCameraTarget_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_CinemachineCameraTarget_16() const { return ___CinemachineCameraTarget_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_CinemachineCameraTarget_16() { return &___CinemachineCameraTarget_16; }
	inline void set_CinemachineCameraTarget_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___CinemachineCameraTarget_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CinemachineCameraTarget_16), (void*)value);
	}

	inline static int32_t get_offset_of_TopClamp_17() { return static_cast<int32_t>(offsetof(ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903, ___TopClamp_17)); }
	inline float get_TopClamp_17() const { return ___TopClamp_17; }
	inline float* get_address_of_TopClamp_17() { return &___TopClamp_17; }
	inline void set_TopClamp_17(float value)
	{
		___TopClamp_17 = value;
	}

	inline static int32_t get_offset_of_BottomClamp_18() { return static_cast<int32_t>(offsetof(ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903, ___BottomClamp_18)); }
	inline float get_BottomClamp_18() const { return ___BottomClamp_18; }
	inline float* get_address_of_BottomClamp_18() { return &___BottomClamp_18; }
	inline void set_BottomClamp_18(float value)
	{
		___BottomClamp_18 = value;
	}

	inline static int32_t get_offset_of_CameraAngleOverride_19() { return static_cast<int32_t>(offsetof(ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903, ___CameraAngleOverride_19)); }
	inline float get_CameraAngleOverride_19() const { return ___CameraAngleOverride_19; }
	inline float* get_address_of_CameraAngleOverride_19() { return &___CameraAngleOverride_19; }
	inline void set_CameraAngleOverride_19(float value)
	{
		___CameraAngleOverride_19 = value;
	}

	inline static int32_t get_offset_of_LockCameraPosition_20() { return static_cast<int32_t>(offsetof(ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903, ___LockCameraPosition_20)); }
	inline bool get_LockCameraPosition_20() const { return ___LockCameraPosition_20; }
	inline bool* get_address_of_LockCameraPosition_20() { return &___LockCameraPosition_20; }
	inline void set_LockCameraPosition_20(bool value)
	{
		___LockCameraPosition_20 = value;
	}

	inline static int32_t get_offset_of__cinemachineTargetYaw_21() { return static_cast<int32_t>(offsetof(ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903, ____cinemachineTargetYaw_21)); }
	inline float get__cinemachineTargetYaw_21() const { return ____cinemachineTargetYaw_21; }
	inline float* get_address_of__cinemachineTargetYaw_21() { return &____cinemachineTargetYaw_21; }
	inline void set__cinemachineTargetYaw_21(float value)
	{
		____cinemachineTargetYaw_21 = value;
	}

	inline static int32_t get_offset_of__cinemachineTargetPitch_22() { return static_cast<int32_t>(offsetof(ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903, ____cinemachineTargetPitch_22)); }
	inline float get__cinemachineTargetPitch_22() const { return ____cinemachineTargetPitch_22; }
	inline float* get_address_of__cinemachineTargetPitch_22() { return &____cinemachineTargetPitch_22; }
	inline void set__cinemachineTargetPitch_22(float value)
	{
		____cinemachineTargetPitch_22 = value;
	}

	inline static int32_t get_offset_of__speed_23() { return static_cast<int32_t>(offsetof(ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903, ____speed_23)); }
	inline float get__speed_23() const { return ____speed_23; }
	inline float* get_address_of__speed_23() { return &____speed_23; }
	inline void set__speed_23(float value)
	{
		____speed_23 = value;
	}

	inline static int32_t get_offset_of__animationBlend_24() { return static_cast<int32_t>(offsetof(ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903, ____animationBlend_24)); }
	inline float get__animationBlend_24() const { return ____animationBlend_24; }
	inline float* get_address_of__animationBlend_24() { return &____animationBlend_24; }
	inline void set__animationBlend_24(float value)
	{
		____animationBlend_24 = value;
	}

	inline static int32_t get_offset_of__targetRotation_25() { return static_cast<int32_t>(offsetof(ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903, ____targetRotation_25)); }
	inline float get__targetRotation_25() const { return ____targetRotation_25; }
	inline float* get_address_of__targetRotation_25() { return &____targetRotation_25; }
	inline void set__targetRotation_25(float value)
	{
		____targetRotation_25 = value;
	}

	inline static int32_t get_offset_of__rotationVelocity_26() { return static_cast<int32_t>(offsetof(ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903, ____rotationVelocity_26)); }
	inline float get__rotationVelocity_26() const { return ____rotationVelocity_26; }
	inline float* get_address_of__rotationVelocity_26() { return &____rotationVelocity_26; }
	inline void set__rotationVelocity_26(float value)
	{
		____rotationVelocity_26 = value;
	}

	inline static int32_t get_offset_of__verticalVelocity_27() { return static_cast<int32_t>(offsetof(ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903, ____verticalVelocity_27)); }
	inline float get__verticalVelocity_27() const { return ____verticalVelocity_27; }
	inline float* get_address_of__verticalVelocity_27() { return &____verticalVelocity_27; }
	inline void set__verticalVelocity_27(float value)
	{
		____verticalVelocity_27 = value;
	}

	inline static int32_t get_offset_of__terminalVelocity_28() { return static_cast<int32_t>(offsetof(ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903, ____terminalVelocity_28)); }
	inline float get__terminalVelocity_28() const { return ____terminalVelocity_28; }
	inline float* get_address_of__terminalVelocity_28() { return &____terminalVelocity_28; }
	inline void set__terminalVelocity_28(float value)
	{
		____terminalVelocity_28 = value;
	}

	inline static int32_t get_offset_of__jumpTimeoutDelta_29() { return static_cast<int32_t>(offsetof(ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903, ____jumpTimeoutDelta_29)); }
	inline float get__jumpTimeoutDelta_29() const { return ____jumpTimeoutDelta_29; }
	inline float* get_address_of__jumpTimeoutDelta_29() { return &____jumpTimeoutDelta_29; }
	inline void set__jumpTimeoutDelta_29(float value)
	{
		____jumpTimeoutDelta_29 = value;
	}

	inline static int32_t get_offset_of__fallTimeoutDelta_30() { return static_cast<int32_t>(offsetof(ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903, ____fallTimeoutDelta_30)); }
	inline float get__fallTimeoutDelta_30() const { return ____fallTimeoutDelta_30; }
	inline float* get_address_of__fallTimeoutDelta_30() { return &____fallTimeoutDelta_30; }
	inline void set__fallTimeoutDelta_30(float value)
	{
		____fallTimeoutDelta_30 = value;
	}

	inline static int32_t get_offset_of__animIDSpeed_31() { return static_cast<int32_t>(offsetof(ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903, ____animIDSpeed_31)); }
	inline int32_t get__animIDSpeed_31() const { return ____animIDSpeed_31; }
	inline int32_t* get_address_of__animIDSpeed_31() { return &____animIDSpeed_31; }
	inline void set__animIDSpeed_31(int32_t value)
	{
		____animIDSpeed_31 = value;
	}

	inline static int32_t get_offset_of__animIDGrounded_32() { return static_cast<int32_t>(offsetof(ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903, ____animIDGrounded_32)); }
	inline int32_t get__animIDGrounded_32() const { return ____animIDGrounded_32; }
	inline int32_t* get_address_of__animIDGrounded_32() { return &____animIDGrounded_32; }
	inline void set__animIDGrounded_32(int32_t value)
	{
		____animIDGrounded_32 = value;
	}

	inline static int32_t get_offset_of__animIDJump_33() { return static_cast<int32_t>(offsetof(ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903, ____animIDJump_33)); }
	inline int32_t get__animIDJump_33() const { return ____animIDJump_33; }
	inline int32_t* get_address_of__animIDJump_33() { return &____animIDJump_33; }
	inline void set__animIDJump_33(int32_t value)
	{
		____animIDJump_33 = value;
	}

	inline static int32_t get_offset_of__animIDFreeFall_34() { return static_cast<int32_t>(offsetof(ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903, ____animIDFreeFall_34)); }
	inline int32_t get__animIDFreeFall_34() const { return ____animIDFreeFall_34; }
	inline int32_t* get_address_of__animIDFreeFall_34() { return &____animIDFreeFall_34; }
	inline void set__animIDFreeFall_34(int32_t value)
	{
		____animIDFreeFall_34 = value;
	}

	inline static int32_t get_offset_of__animIDMotionSpeed_35() { return static_cast<int32_t>(offsetof(ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903, ____animIDMotionSpeed_35)); }
	inline int32_t get__animIDMotionSpeed_35() const { return ____animIDMotionSpeed_35; }
	inline int32_t* get_address_of__animIDMotionSpeed_35() { return &____animIDMotionSpeed_35; }
	inline void set__animIDMotionSpeed_35(int32_t value)
	{
		____animIDMotionSpeed_35 = value;
	}

	inline static int32_t get_offset_of__animator_36() { return static_cast<int32_t>(offsetof(ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903, ____animator_36)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get__animator_36() const { return ____animator_36; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of__animator_36() { return &____animator_36; }
	inline void set__animator_36(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		____animator_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____animator_36), (void*)value);
	}

	inline static int32_t get_offset_of__controller_37() { return static_cast<int32_t>(offsetof(ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903, ____controller_37)); }
	inline CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * get__controller_37() const { return ____controller_37; }
	inline CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E ** get_address_of__controller_37() { return &____controller_37; }
	inline void set__controller_37(CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * value)
	{
		____controller_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____controller_37), (void*)value);
	}

	inline static int32_t get_offset_of__input_38() { return static_cast<int32_t>(offsetof(ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903, ____input_38)); }
	inline StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * get__input_38() const { return ____input_38; }
	inline StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC ** get_address_of__input_38() { return &____input_38; }
	inline void set__input_38(StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * value)
	{
		____input_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____input_38), (void*)value);
	}

	inline static int32_t get_offset_of__mainCamera_39() { return static_cast<int32_t>(offsetof(ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903, ____mainCamera_39)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__mainCamera_39() const { return ____mainCamera_39; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__mainCamera_39() { return &____mainCamera_39; }
	inline void set__mainCamera_39(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____mainCamera_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mainCamera_39), (void*)value);
	}

	inline static int32_t get_offset_of__hasAnimator_41() { return static_cast<int32_t>(offsetof(ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903, ____hasAnimator_41)); }
	inline bool get__hasAnimator_41() const { return ____hasAnimator_41; }
	inline bool* get_address_of__hasAnimator_41() { return &____hasAnimator_41; }
	inline void set__hasAnimator_41(bool value)
	{
		____hasAnimator_41 = value;
	}
};


// StarterAssets.UICanvasControllerInput
struct UICanvasControllerInput_t18C69AA8A6225F0EDEC9D31926AFCA88FC8F8EA1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// StarterAssets.StarterAssetsInputs StarterAssets.UICanvasControllerInput::starterAssetsInputs
	StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * ___starterAssetsInputs_4;

public:
	inline static int32_t get_offset_of_starterAssetsInputs_4() { return static_cast<int32_t>(offsetof(UICanvasControllerInput_t18C69AA8A6225F0EDEC9D31926AFCA88FC8F8EA1, ___starterAssetsInputs_4)); }
	inline StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * get_starterAssetsInputs_4() const { return ___starterAssetsInputs_4; }
	inline StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC ** get_address_of_starterAssetsInputs_4() { return &___starterAssetsInputs_4; }
	inline void set_starterAssetsInputs_4(StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * value)
	{
		___starterAssetsInputs_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___starterAssetsInputs_4), (void*)value);
	}
};


// UIVirtualButton
struct UIVirtualButton_tA1A6B564C5E71E1B61B240E28958DEB8F79BABBE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Events.UnityEvent`1<System.Boolean> UIVirtualButton::buttonStateOutputEvent
	UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * ___buttonStateOutputEvent_4;
	// UnityEngine.Events.UnityEvent UIVirtualButton::buttonClickOutputEvent
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___buttonClickOutputEvent_5;

public:
	inline static int32_t get_offset_of_buttonStateOutputEvent_4() { return static_cast<int32_t>(offsetof(UIVirtualButton_tA1A6B564C5E71E1B61B240E28958DEB8F79BABBE, ___buttonStateOutputEvent_4)); }
	inline UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * get_buttonStateOutputEvent_4() const { return ___buttonStateOutputEvent_4; }
	inline UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB ** get_address_of_buttonStateOutputEvent_4() { return &___buttonStateOutputEvent_4; }
	inline void set_buttonStateOutputEvent_4(UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * value)
	{
		___buttonStateOutputEvent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttonStateOutputEvent_4), (void*)value);
	}

	inline static int32_t get_offset_of_buttonClickOutputEvent_5() { return static_cast<int32_t>(offsetof(UIVirtualButton_tA1A6B564C5E71E1B61B240E28958DEB8F79BABBE, ___buttonClickOutputEvent_5)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_buttonClickOutputEvent_5() const { return ___buttonClickOutputEvent_5; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_buttonClickOutputEvent_5() { return &___buttonClickOutputEvent_5; }
	inline void set_buttonClickOutputEvent_5(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___buttonClickOutputEvent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttonClickOutputEvent_5), (void*)value);
	}
};


// UIVirtualJoystick
struct UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.RectTransform UIVirtualJoystick::containerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___containerRect_4;
	// UnityEngine.RectTransform UIVirtualJoystick::handleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___handleRect_5;
	// System.Single UIVirtualJoystick::joystickRange
	float ___joystickRange_6;
	// System.Single UIVirtualJoystick::magnitudeMultiplier
	float ___magnitudeMultiplier_7;
	// System.Boolean UIVirtualJoystick::invertXOutputValue
	bool ___invertXOutputValue_8;
	// System.Boolean UIVirtualJoystick::invertYOutputValue
	bool ___invertYOutputValue_9;
	// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2> UIVirtualJoystick::joystickOutputEvent
	UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C * ___joystickOutputEvent_10;

public:
	inline static int32_t get_offset_of_containerRect_4() { return static_cast<int32_t>(offsetof(UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D, ___containerRect_4)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_containerRect_4() const { return ___containerRect_4; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_containerRect_4() { return &___containerRect_4; }
	inline void set_containerRect_4(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___containerRect_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___containerRect_4), (void*)value);
	}

	inline static int32_t get_offset_of_handleRect_5() { return static_cast<int32_t>(offsetof(UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D, ___handleRect_5)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_handleRect_5() const { return ___handleRect_5; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_handleRect_5() { return &___handleRect_5; }
	inline void set_handleRect_5(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___handleRect_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handleRect_5), (void*)value);
	}

	inline static int32_t get_offset_of_joystickRange_6() { return static_cast<int32_t>(offsetof(UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D, ___joystickRange_6)); }
	inline float get_joystickRange_6() const { return ___joystickRange_6; }
	inline float* get_address_of_joystickRange_6() { return &___joystickRange_6; }
	inline void set_joystickRange_6(float value)
	{
		___joystickRange_6 = value;
	}

	inline static int32_t get_offset_of_magnitudeMultiplier_7() { return static_cast<int32_t>(offsetof(UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D, ___magnitudeMultiplier_7)); }
	inline float get_magnitudeMultiplier_7() const { return ___magnitudeMultiplier_7; }
	inline float* get_address_of_magnitudeMultiplier_7() { return &___magnitudeMultiplier_7; }
	inline void set_magnitudeMultiplier_7(float value)
	{
		___magnitudeMultiplier_7 = value;
	}

	inline static int32_t get_offset_of_invertXOutputValue_8() { return static_cast<int32_t>(offsetof(UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D, ___invertXOutputValue_8)); }
	inline bool get_invertXOutputValue_8() const { return ___invertXOutputValue_8; }
	inline bool* get_address_of_invertXOutputValue_8() { return &___invertXOutputValue_8; }
	inline void set_invertXOutputValue_8(bool value)
	{
		___invertXOutputValue_8 = value;
	}

	inline static int32_t get_offset_of_invertYOutputValue_9() { return static_cast<int32_t>(offsetof(UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D, ___invertYOutputValue_9)); }
	inline bool get_invertYOutputValue_9() const { return ___invertYOutputValue_9; }
	inline bool* get_address_of_invertYOutputValue_9() { return &___invertYOutputValue_9; }
	inline void set_invertYOutputValue_9(bool value)
	{
		___invertYOutputValue_9 = value;
	}

	inline static int32_t get_offset_of_joystickOutputEvent_10() { return static_cast<int32_t>(offsetof(UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D, ___joystickOutputEvent_10)); }
	inline UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C * get_joystickOutputEvent_10() const { return ___joystickOutputEvent_10; }
	inline UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C ** get_address_of_joystickOutputEvent_10() { return &___joystickOutputEvent_10; }
	inline void set_joystickOutputEvent_10(UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C * value)
	{
		___joystickOutputEvent_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___joystickOutputEvent_10), (void*)value);
	}
};


// UIVirtualTouchZone
struct UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.RectTransform UIVirtualTouchZone::containerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___containerRect_4;
	// UnityEngine.RectTransform UIVirtualTouchZone::handleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___handleRect_5;
	// System.Boolean UIVirtualTouchZone::clampToMagnitude
	bool ___clampToMagnitude_6;
	// System.Single UIVirtualTouchZone::magnitudeMultiplier
	float ___magnitudeMultiplier_7;
	// System.Boolean UIVirtualTouchZone::invertXOutputValue
	bool ___invertXOutputValue_8;
	// System.Boolean UIVirtualTouchZone::invertYOutputValue
	bool ___invertYOutputValue_9;
	// UnityEngine.Vector2 UIVirtualTouchZone::pointerDownPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pointerDownPosition_10;
	// UnityEngine.Vector2 UIVirtualTouchZone::currentPointerPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___currentPointerPosition_11;
	// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2> UIVirtualTouchZone::touchZoneOutputEvent
	UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C * ___touchZoneOutputEvent_12;

public:
	inline static int32_t get_offset_of_containerRect_4() { return static_cast<int32_t>(offsetof(UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23, ___containerRect_4)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_containerRect_4() const { return ___containerRect_4; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_containerRect_4() { return &___containerRect_4; }
	inline void set_containerRect_4(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___containerRect_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___containerRect_4), (void*)value);
	}

	inline static int32_t get_offset_of_handleRect_5() { return static_cast<int32_t>(offsetof(UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23, ___handleRect_5)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_handleRect_5() const { return ___handleRect_5; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_handleRect_5() { return &___handleRect_5; }
	inline void set_handleRect_5(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___handleRect_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handleRect_5), (void*)value);
	}

	inline static int32_t get_offset_of_clampToMagnitude_6() { return static_cast<int32_t>(offsetof(UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23, ___clampToMagnitude_6)); }
	inline bool get_clampToMagnitude_6() const { return ___clampToMagnitude_6; }
	inline bool* get_address_of_clampToMagnitude_6() { return &___clampToMagnitude_6; }
	inline void set_clampToMagnitude_6(bool value)
	{
		___clampToMagnitude_6 = value;
	}

	inline static int32_t get_offset_of_magnitudeMultiplier_7() { return static_cast<int32_t>(offsetof(UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23, ___magnitudeMultiplier_7)); }
	inline float get_magnitudeMultiplier_7() const { return ___magnitudeMultiplier_7; }
	inline float* get_address_of_magnitudeMultiplier_7() { return &___magnitudeMultiplier_7; }
	inline void set_magnitudeMultiplier_7(float value)
	{
		___magnitudeMultiplier_7 = value;
	}

	inline static int32_t get_offset_of_invertXOutputValue_8() { return static_cast<int32_t>(offsetof(UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23, ___invertXOutputValue_8)); }
	inline bool get_invertXOutputValue_8() const { return ___invertXOutputValue_8; }
	inline bool* get_address_of_invertXOutputValue_8() { return &___invertXOutputValue_8; }
	inline void set_invertXOutputValue_8(bool value)
	{
		___invertXOutputValue_8 = value;
	}

	inline static int32_t get_offset_of_invertYOutputValue_9() { return static_cast<int32_t>(offsetof(UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23, ___invertYOutputValue_9)); }
	inline bool get_invertYOutputValue_9() const { return ___invertYOutputValue_9; }
	inline bool* get_address_of_invertYOutputValue_9() { return &___invertYOutputValue_9; }
	inline void set_invertYOutputValue_9(bool value)
	{
		___invertYOutputValue_9 = value;
	}

	inline static int32_t get_offset_of_pointerDownPosition_10() { return static_cast<int32_t>(offsetof(UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23, ___pointerDownPosition_10)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_pointerDownPosition_10() const { return ___pointerDownPosition_10; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_pointerDownPosition_10() { return &___pointerDownPosition_10; }
	inline void set_pointerDownPosition_10(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___pointerDownPosition_10 = value;
	}

	inline static int32_t get_offset_of_currentPointerPosition_11() { return static_cast<int32_t>(offsetof(UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23, ___currentPointerPosition_11)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_currentPointerPosition_11() const { return ___currentPointerPosition_11; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_currentPointerPosition_11() { return &___currentPointerPosition_11; }
	inline void set_currentPointerPosition_11(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___currentPointerPosition_11 = value;
	}

	inline static int32_t get_offset_of_touchZoneOutputEvent_12() { return static_cast<int32_t>(offsetof(UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23, ___touchZoneOutputEvent_12)); }
	inline UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C * get_touchZoneOutputEvent_12() const { return ___touchZoneOutputEvent_12; }
	inline UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C ** get_address_of_touchZoneOutputEvent_12() { return &___touchZoneOutputEvent_12; }
	inline void set_touchZoneOutputEvent_12(UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C * value)
	{
		___touchZoneOutputEvent_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___touchZoneOutputEvent_12), (void*)value);
	}
};


// VrController
struct VrController_t9D294004F7B066441C2096202E12A80D9B7D5CEE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject VrController::g1
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___g1_4;
	// UnityEngine.GameObject VrController::g2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___g2_5;
	// UnityEngine.Vector3 VrController::gV1
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___gV1_6;
	// UnityEngine.Vector3 VrController::gV2
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___gV2_7;

public:
	inline static int32_t get_offset_of_g1_4() { return static_cast<int32_t>(offsetof(VrController_t9D294004F7B066441C2096202E12A80D9B7D5CEE, ___g1_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_g1_4() const { return ___g1_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_g1_4() { return &___g1_4; }
	inline void set_g1_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___g1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___g1_4), (void*)value);
	}

	inline static int32_t get_offset_of_g2_5() { return static_cast<int32_t>(offsetof(VrController_t9D294004F7B066441C2096202E12A80D9B7D5CEE, ___g2_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_g2_5() const { return ___g2_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_g2_5() { return &___g2_5; }
	inline void set_g2_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___g2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___g2_5), (void*)value);
	}

	inline static int32_t get_offset_of_gV1_6() { return static_cast<int32_t>(offsetof(VrController_t9D294004F7B066441C2096202E12A80D9B7D5CEE, ___gV1_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_gV1_6() const { return ___gV1_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_gV1_6() { return &___gV1_6; }
	inline void set_gV1_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___gV1_6 = value;
	}

	inline static int32_t get_offset_of_gV2_7() { return static_cast<int32_t>(offsetof(VrController_t9D294004F7B066441C2096202E12A80D9B7D5CEE, ___gV2_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_gV2_7() const { return ___gV2_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_gV2_7() { return &___gV2_7; }
	inline void set_gV2_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___gV2_7 = value;
	}
};


// TeleportLegacyUI
struct TeleportLegacyUI_tA00CC32535C6DC1C4E347CB8C7161BF6CEF93B91  : public Teleport_t33E97FA0B9C7C63F5D0130A3D270BB742D9B9995
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Component::TryGetComponent<System.Object>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_TryGetComponent_TisRuntimeObject_m409D64ADC25ED175ADC7ED4C3F7ABF5439AD63AF_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, RuntimeObject ** ___component0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m93A9A80D13EE147EB2805A92EFD48453AF727D7F_gshared (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * __this, bool ___arg00, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_mB4A40E66B8302949068CCFA2E3E1C15F625EA1CD_gshared (UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___arg00, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);

// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_current_m4E5A6D19F422F8DD2CFF4EE80C65B033F24C45D6 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_farClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_farClipPlane_m0FA1B9E2E815BECE2EA40023302EB942B52D9596 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline (float ___d0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___shader0, const RuntimeMethod* method);
// System.Void UnityEngine.GL::PushMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_PushMatrix_mF1F26015AB75226AB048A7ABF700871C5A0AE0B3 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// System.Void UnityEngine.GL::LoadPixelMatrix(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_LoadPixelMatrix_m93F54ED32CAD774AA81D4057F5839FA965BAD60D (float ___left0, float ___right1, float ___bottom2, float ___top3, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Rect UnityEngine.Camera::get_pixelRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  Camera_get_pixelRect_m58284153875DDE6470D4BDCAF2DFC9F5C9DE3D3A (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_y_m015507262F8AC5AFF1B4E986B66307F31FB3A10E (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.RenderTexture::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * RenderTexture_get_active_mB73718A56673D36F74B5338B310ED7FDFEB34AB7 (const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_DrawTexture_m23BB2BAA877A74489C2A24FE82E698A3099503FF (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___screenRect0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___texture1, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___mat2, const RuntimeMethod* method);
// System.Void UnityEngine.GL::PopMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_PopMatrix_m06F4C60CA3B91C7F8B7EFF83D21563C9613B3738 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void Teleport::SetGazedAt(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Teleport_SetGazedAt_m02EC72E19B4930746256D8F0EA177FD2272003CC (Teleport_t33E97FA0B9C7C63F5D0130A3D270BB742D9B9995 * __this, bool ___gazedAt0, const RuntimeMethod* method);
// Cardboard Cardboard::get_SDK()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D * Cardboard_get_SDK_m04DCC06D1BC6E4714FF69B35832CBA6BD6DF4079 (const RuntimeMethod* method);
// System.Void Cardboard::UpdateState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cardboard_UpdateState_m2A39A1863AC7F0161355F4BB6C8CB6F67AF6EC30 (Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D * __this, const RuntimeMethod* method);
// System.Boolean Cardboard::get_BackButtonPressed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cardboard_get_BackButtonPressed_mF3853483DEA1442427C90031EC8C32F4582B1BA5_inline (Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9 (const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Boolean Cardboard::get_VRModeEnabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cardboard_get_VRModeEnabled_mEBD4C3D86F53491981B408BA3E899166BA062582_inline (Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D * __this, const RuntimeMethod* method);
// System.Void Cardboard::set_VRModeEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cardboard_set_VRModeEnabled_m66E8DD9336B9BD2A01D758FCA104D84517C98DCB (Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Random::get_onUnitSphere()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Random_get_onUnitSphere_m909066B4EAF5EE0A05D3C1DCBDADC55A2D6A4EED (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void CardboardOnGUI::set_IsGUIVisible(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CardboardOnGUI_set_IsGUIVisible_mDADFAFA8C3DBCA60B6CD9A837D90BAD2B9718954_inline (bool ___value0, const RuntimeMethod* method);
// System.Void CardboardOnGUI/OnGUICallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnGUICallback__ctor_mB781DECF5BCF626D27527F6BEFA739979FAB58A3 (OnGUICallback_t6E54053C3D6F915C472341FA973EFA12EDFDB5C8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void CardboardOnGUI::add_onGUICallback(CardboardOnGUI/OnGUICallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardboardOnGUI_add_onGUICallback_mAB5DDA1C1A19BEAED25D2B32816C7EEE6D995630 (OnGUICallback_t6E54053C3D6F915C472341FA973EFA12EDFDB5C8 * ___value0, const RuntimeMethod* method);
// StereoController Cardboard::get_Controller()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StereoController_t4A27502B3E84039EC0E267357EA04E4BA485927F * Cardboard_get_Controller_m2A6922203C4278457792AD650230985548AC1951 (const RuntimeMethod* method);
// CardboardHead StereoController::get_Head()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CardboardHead_t71133BBC784C92F40ED0B6CD29EE9D84B9D0329C * StereoController_get_Head_mA2BC2E8DAD174C9481923D1533D6FDDD38B15E78 (StereoController_t4A27502B3E84039EC0E267357EA04E4BA485927F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Collider>()
inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * Component_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mCE49E8783A1794715E6D539C8BB8C78CC589AB60 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Ray CardboardHead::get_Gaze()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  CardboardHead_get_Gaze_m3B24FD5E70683CD935155D3353F5ECCD6AD8AB33 (CardboardHead_t71133BBC784C92F40ED0B6CD29EE9D84B9D0329C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Collider::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collider_Raycast_m41CA5C3C07B92F5325CB81890BE3A611C3C70784 (Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * __this, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray0, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___hitInfo1, float ___maxDistance2, const RuntimeMethod* method);
// System.Boolean Cardboard::get_Triggered()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cardboard_get_Triggered_m52A99E7475AF36707CA06F1C51D340C97BC0C7A9_inline (Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D * __this, const RuntimeMethod* method);
// System.Void Teleport::TeleportRandomly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Teleport_TeleportRandomly_mC0BB1BEAF8F5C05F9114E3BA35D642F785594732 (Teleport_t33E97FA0B9C7C63F5D0130A3D270BB742D9B9995 * __this, const RuntimeMethod* method);
// System.Boolean CardboardOnGUI::OKToDraw(UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CardboardOnGUI_OKToDraw_m10C8CE5F5FC696F7A9B512CB53A1FFF84D1CF0A9 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ___mb0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_m668EE382521BDEA241D719A9CF39B6672E2CA23F (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, String_t* ___text1, const RuntimeMethod* method);
// System.Void Teleport::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Teleport_Reset_m37852B1866F6ADF60933D8442F1C1BCEDC3A46E4 (Teleport_t33E97FA0B9C7C63F5D0130A3D270BB742D9B9995 * __this, const RuntimeMethod* method);
// System.Void Cardboard::Recenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cardboard_Recenter_mC5DEBDA7C99F1D9BF4C5A4D2CC5A7BDDD02DBA10 (Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D * __this, const RuntimeMethod* method);
// System.Void Teleport::ToggleVRMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Teleport_ToggleVRMode_mBA3EA49DB2EAE141D8FE8395186C2507D3DE992D (Teleport_t33E97FA0B9C7C63F5D0130A3D270BB742D9B9995 * __this, const RuntimeMethod* method);
// System.Void CardboardOnGUI::remove_onGUICallback(CardboardOnGUI/OnGUICallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardboardOnGUI_remove_onGUICallback_m1732FD0117ED53461BFFB44B1EBD638ECB9ADFD3 (OnGUICallback_t6E54053C3D6F915C472341FA973EFA12EDFDB5C8 * ___value0, const RuntimeMethod* method);
// System.Void Teleport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Teleport__ctor_mF232DF6C23A42F13C1B57881E696EBA352801E3B (Teleport_t33E97FA0B9C7C63F5D0130A3D270BB742D9B9995 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F (String_t* ___tag0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Component::TryGetComponent<UnityEngine.Animator>(!!0&)
inline bool Component_TryGetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_mBFCCD843329D165D8D674C4B9C04F13BE9940CC6 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 **, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m409D64ADC25ED175ADC7ED4C3F7ABF5439AD63AF_gshared)(__this, ___component0, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.CharacterController>()
inline CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * Component_GetComponent_TisCharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E_m3DB1DD5819F96D7C7F6F19C12138AC48D21DBBF2 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<StarterAssets.StarterAssetsInputs>()
inline StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * Component_GetComponent_TisStarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC_m6FFF67D18E19DC0556D8F33FE91976B26FD4D787 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void StarterAssets.ThirdPersonController::AssignAnimationIDs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_AssignAnimationIDs_mB8641B310C6DDEC521D5401B691A156B730C637A (ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903 * __this, const RuntimeMethod* method);
// System.Void StarterAssets.ThirdPersonController::JumpAndGravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_JumpAndGravity_mF8ADE69C505E77DFB9A7A187A2E914F4D0390514 (ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903 * __this, const RuntimeMethod* method);
// System.Void StarterAssets.ThirdPersonController::GroundedCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_GroundedCheck_mB9F085D761FAD5805B651EC2F3466B240D94964A (ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903 * __this, const RuntimeMethod* method);
// System.Void StarterAssets.ThirdPersonController::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_Move_m0444969DC5E148B2093542C8F31B22DF98D95B6D (ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903 * __this, const RuntimeMethod* method);
// System.Void StarterAssets.ThirdPersonController::CameraRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_CameraRotation_m389620971F720216A6BF133DFB0845BACD4866B4 (ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_StringToHash_mA351F39D53E2AEFCF0BBD50E4FA92B7E1C99A668 (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___mask0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::CheckSphere(UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_CheckSphere_mF4AE4778A415A4E9C7C15BA21A0E402909AD3472 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, float ___radius1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBool(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m0F0363B189AAB848FA3B428986C6A01470B3E38C (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___id0, bool ___value1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Single StarterAssets.ThirdPersonController::ClampAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ThirdPersonController_ClampAngle_mFAEB55D93C154C7523412A3287C3A957173E7455 (float ___lfAngle0, float ___lfMin1, float ___lfMax2, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.CharacterController::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CharacterController_get_velocity_m13A2C2D13A171D9A6E899C0E472C68FCF5E3D5A6 (CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mA9E4245E487F3051F0EBF086646A1C341213D24E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::SmoothDampAngle(System.Single,System.Single,System.Single&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_SmoothDampAngle_mB876CA3D4A313CF29074CCDDB784CAF5533EBA46 (float ___current0, float ___target1, float* ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterController_Move_mE0EBC32C72A0BEC18EDEBE748D44309A4BA32E60 (CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___motion0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m22777620F85E25691F57A7CAD4190D7F5702E02C (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___id0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::DrawSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawSphere_m50414CF8E502F4D93FC133091DA5E39543D69E91 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___center0, float ___radius1, const RuntimeMethod* method);
// System.Void StarterAssets.StarterAssetsInputs::MoveInput(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_MoveInput_m17B8532D1DB7D870295DE9E82CBC17735F8984F8_inline (StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___newMoveDirection0, const RuntimeMethod* method);
// System.Void StarterAssets.StarterAssetsInputs::LookInput(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_LookInput_m3B98228935C1AD2E76356732A798A3EFD8CA4186_inline (StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___newLookDirection0, const RuntimeMethod* method);
// System.Void StarterAssets.StarterAssetsInputs::JumpInput(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_JumpInput_mEEC05639651E0D3AD679B923D34C3B58F52EC722_inline (StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * __this, bool ___newJumpState0, const RuntimeMethod* method);
// System.Void StarterAssets.StarterAssetsInputs::SprintInput(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_SprintInput_m4A4EB5B45A168786D74E233577623FC38D74E4F3_inline (StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * __this, bool ___newSprintState0, const RuntimeMethod* method);
// System.Void UIVirtualButton::OutputButtonStateValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OutputButtonStateValue_m4D03DEE754B7C8716A55432137E088D08626C8A8 (UIVirtualButton_tA1A6B564C5E71E1B61B240E28958DEB8F79BABBE * __this, bool ___buttonState0, const RuntimeMethod* method);
// System.Void UIVirtualButton::OutputButtonClickEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OutputButtonClickEvent_m52515C61D5E82F76620D03994ED97A1F34CBA6F5 (UIVirtualButton_tA1A6B564C5E71E1B61B240E28958DEB8F79BABBE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(!0)
inline void UnityEvent_1_Invoke_m93A9A80D13EE147EB2805A92EFD48453AF727D7F (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * __this, bool ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB *, bool, const RuntimeMethod*))UnityEvent_1_Invoke_m93A9A80D13EE147EB2805A92EFD48453AF727D7F_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, const RuntimeMethod* method);
// System.Void UIVirtualJoystick::SetupHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_SetupHandle_m0ACFFD29C51B77207E694FD86F4A84338B030207 (UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D * __this, const RuntimeMethod* method);
// System.Void UIVirtualJoystick::UpdateHandleRectPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_UpdateHandleRectPosition_m316CA3567F5830F9F19C381F20FEF41084740B94 (UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___newPosition0, const RuntimeMethod* method);
// System.Void UIVirtualJoystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_OnDrag_m4AB1A15DA5C6DB622E55C21E6E7ED263FED7DB77 (UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_pressEventCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * PointerEventData_get_pressEventCamera_m514C040A3C32E269345D0FC8B72BB2FE553FA448 (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m9A7DB8DE3636CE91CDF6CE088A21B5DDF2678F03 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___rect0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPoint1, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam2, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___localPoint3, const RuntimeMethod* method);
// UnityEngine.Vector2 UIVirtualJoystick::ApplySizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  UIVirtualJoystick_ApplySizeDelta_m62A3D273C1B2063E387278930C27828AAAA3D706 (UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector2 UIVirtualJoystick::ClampValuesToMagnitude(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  UIVirtualJoystick_ClampValuesToMagnitude_m8B710D2ABFEAB67917267BE7B2E253A5C572907D (UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector2 UIVirtualJoystick::ApplyInversionFilter(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  UIVirtualJoystick_ApplyInversionFilter_mD507E46BD99810E9B18F0AD4BDD843FACF70536B (UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UIVirtualJoystick::OutputPointerEventValue(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_OutputPointerEventValue_mD4C7421AB87B90625945F3B8B1F58F611492E64A (UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pointerPosition0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::Invoke(!0)
inline void UnityEvent_1_Invoke_mB4A40E66B8302949068CCFA2E3E1C15F625EA1CD (UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C *, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , const RuntimeMethod*))UnityEvent_1_Invoke_mB4A40E66B8302949068CCFA2E3E1C15F625EA1CD_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::ClampMagnitude(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_ClampMagnitude_m4FFD90D646E17E41F799FC78FF652A2D75AD5074 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___vector0, float ___maxLength1, const RuntimeMethod* method);
// System.Single UIVirtualJoystick::InvertValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UIVirtualJoystick_InvertValue_m51B67357EC3DF48051879F1DA61B76F4A4BBD9F7 (UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D * __this, float ___value0, const RuntimeMethod* method);
// System.Void UIVirtualTouchZone::SetupHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_SetupHandle_m46D4991D16E65721ED9A06C538841C45A728151D (UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UIVirtualTouchZone::SetObjectActiveState(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_SetObjectActiveState_mDB5AA4C0AB194A0009D681F773145E68CB678699 (UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___targetObject0, bool ___newState1, const RuntimeMethod* method);
// System.Void UIVirtualTouchZone::UpdateHandleRectPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_UpdateHandleRectPosition_m4D0B42E5C70893DFB5408E623076C9F5B7FE3A7A (UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___newPosition0, const RuntimeMethod* method);
// UnityEngine.Vector2 UIVirtualTouchZone::GetDeltaBetweenPositions(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  UIVirtualTouchZone_GetDeltaBetweenPositions_mA12C35395F0319B30B47A5791759AB8FE240186A (UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___firstPosition0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___secondPosition1, const RuntimeMethod* method);
// UnityEngine.Vector2 UIVirtualTouchZone::ClampValuesToMagnitude(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  UIVirtualTouchZone_ClampValuesToMagnitude_m2B1CBB4A20BE4004AD520E5EC427C664E9315EFC (UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector2 UIVirtualTouchZone::ApplyInversionFilter(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  UIVirtualTouchZone_ApplyInversionFilter_m8FEABDE5FD0BF979E96732DCF3123203E6B755E3 (UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position0, const RuntimeMethod* method);
// System.Void UIVirtualTouchZone::OutputPointerEventValue(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_OutputPointerEventValue_m1ECAF819A22591A0241D790EFC936ECB3985CE68 (UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pointerPosition0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Single UIVirtualTouchZone::InvertValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UIVirtualTouchZone_InvertValue_m5B003E6987A1518CEB604D6B1796A58DE5D04E4A (UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m80EC8EEDA0ABA8B01838BA9054834CD1A381916E (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray0, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___hitInfo1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method);
// System.Single CardboardProfile/Distortion::distort(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Distortion_distort_m2572328562A7DBE75ABD0BB4EFF1200DD44F2C75 (Distortion_t184AC024B295F25002A11CF09BB207500C24B887 * __this, float ___r0, const RuntimeMethod* method);
// System.Single CardboardProfile/Distortion::distortInv(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Distortion_distortInv_mCA9A254AFD7B8840B3008913173FBC855628B835 (Distortion_t184AC024B295F25002A11CF09BB207500C24B887 * __this, float ___radius0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void StereoController/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m26F209692A374E24456989F62AB37839CCB84E1E (U3CU3Ec_t032D85B1EF01CB57D96548AB107EAB3B1C09A434 * __this, const RuntimeMethod* method);
// CardboardHead CardboardEye::get_Head()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CardboardHead_t71133BBC784C92F40ED0B6CD29EE9D84B9D0329C * CardboardEye_get_Head_m723993D8B707314E65689AF83F59CA7C9D253088 (CardboardEye_t32ED6741BF22447FFE5D7EDF81B466BEBAA4C780 * __this, const RuntimeMethod* method);
// UnityEngine.Camera StereoController::get_cam()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * StereoController_get_cam_m727A97B2B124447216C1687905A69D462BC06111_inline (StereoController_t4A27502B3E84039EC0E267357EA04E4BA485927F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StereoLensFlare::OnWillRenderObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StereoLensFlare_OnWillRenderObject_m9E809BFBBC899111BB699D0134777C5514672858 (StereoLensFlare_t3207DC01111167616502F4822CA7DC73D6C9FE75 * __this, const RuntimeMethod* method)
{
	{
		// transform.position = Camera.current.transform.position -
		//                      range * Camera.current.farClipPlane * transform.forward;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1;
		L_1 = Camera_get_current_m4E5A6D19F422F8DD2CFF4EE80C65B033F24C45D6(/*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		float L_4 = __this->get_range_4();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5;
		L_5 = Camera_get_current_m4E5A6D19F422F8DD2CFF4EE80C65B033F24C45D6(/*hidden argument*/NULL);
		NullCheck(L_5);
		float L_6;
		L_6 = Camera_get_farClipPlane_m0FA1B9E2E815BECE2EA40023302EB942B52D9596(L_5, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline(((float)il2cpp_codegen_multiply((float)L_4, (float)L_6)), L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_3, L_9, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StereoLensFlare::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StereoLensFlare__ctor_m839BD306C31137B179CA9862D01F08A843CDF169 (StereoLensFlare_t3207DC01111167616502F4822CA7DC73D6C9FE75 * __this, const RuntimeMethod* method)
{
	{
		// public float range = 0.75f;
		__this->set_range_4((0.75f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void StereoRenderEffect::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StereoRenderEffect_Start_m2897B70D245FCD1B929754099280A213372E3A4D (StereoRenderEffect_t913E873D964F0875F47CFC82A44B5E9263827F8D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785C5B8BE08AE570EF771CA39BB8E3E929B1994D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// material = new Material(Shader.Find("Cardboard/SkyboxMesh"));
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_0;
		L_0 = Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A(_stringLiteral785C5B8BE08AE570EF771CA39BB8E3E929B1994D, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_1, L_0, /*hidden argument*/NULL);
		__this->set_material_4(L_1);
		// }
		return;
	}
}
// System.Void StereoRenderEffect::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StereoRenderEffect_OnRenderImage_m950B1701327A8303775F59C2B0667278A5E77BB0 (StereoRenderEffect_t913E873D964F0875F47CFC82A44B5E9263827F8D * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___source0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___dest1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	{
		// GL.PushMatrix();
		GL_PushMatrix_mF1F26015AB75226AB048A7ABF700871C5A0AE0B3(/*hidden argument*/NULL);
		// int width = dest ? dest.width : Screen.width;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_0 = ___dest1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2;
		L_2 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_001a;
	}

IL_0014:
	{
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_3 = ___dest1;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_3);
		G_B3_0 = L_4;
	}

IL_001a:
	{
		V_0 = G_B3_0;
		// int height = dest ? dest.height : Screen.height;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_5 = ___dest1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_7;
		L_7 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		G_B6_0 = L_7;
		goto IL_0030;
	}

IL_002a:
	{
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_8 = ___dest1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_8);
		G_B6_0 = L_9;
	}

IL_0030:
	{
		V_1 = G_B6_0;
		// GL.LoadPixelMatrix(0, width, height, 0);
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		GL_LoadPixelMatrix_m93F54ED32CAD774AA81D4057F5839FA965BAD60D((0.0f), ((float)((float)L_10)), ((float)((float)L_11)), (0.0f), /*hidden argument*/NULL);
		// Rect blitRect = GetComponent<Camera>().pixelRect;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_12;
		L_12 = Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320(__this, /*hidden argument*/Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		NullCheck(L_12);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_13;
		L_13 = Camera_get_pixelRect_m58284153875DDE6470D4BDCAF2DFC9F5C9DE3D3A(L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		// blitRect.y = height - blitRect.height - blitRect.y;
		int32_t L_14 = V_1;
		float L_15;
		L_15 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_2), /*hidden argument*/NULL);
		float L_16;
		L_16 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_2), /*hidden argument*/NULL);
		Rect_set_y_m015507262F8AC5AFF1B4E986B66307F31FB3A10E((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_2), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)((float)((float)L_14)), (float)L_15)), (float)L_16)), /*hidden argument*/NULL);
		// RenderTexture oldActive = RenderTexture.active;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_17;
		L_17 = RenderTexture_get_active_mB73718A56673D36F74B5338B310ED7FDFEB34AB7(/*hidden argument*/NULL);
		// RenderTexture.active = dest;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_18 = ___dest1;
		RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9(L_18, /*hidden argument*/NULL);
		// Graphics.DrawTexture(blitRect, source, material);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_19 = V_2;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_20 = ___source0;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_21 = __this->get_material_4();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_DrawTexture_m23BB2BAA877A74489C2A24FE82E698A3099503FF(L_19, L_20, L_21, /*hidden argument*/NULL);
		// RenderTexture.active = oldActive;
		RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9(L_17, /*hidden argument*/NULL);
		// GL.PopMatrix();
		GL_PopMatrix_m06F4C60CA3B91C7F8B7EFF83D21563C9613B3738(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StereoRenderEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StereoRenderEffect__ctor_m72D51E8FA251D706E6EE2949560442DB35B19533 (StereoRenderEffect_t913E873D964F0875F47CFC82A44B5E9263827F8D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Teleport::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Teleport_Start_m09C6BA2D5A92B3DB4BC25D9BAB55557CC3A64E64 (Teleport_t33E97FA0B9C7C63F5D0130A3D270BB742D9B9995 * __this, const RuntimeMethod* method)
{
	{
		// startingPosition = transform.localPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_0, /*hidden argument*/NULL);
		__this->set_startingPosition_4(L_1);
		// SetGazedAt(false);
		Teleport_SetGazedAt_m02EC72E19B4930746256D8F0EA177FD2272003CC(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Teleport::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Teleport_LateUpdate_m207BFA5E25D2DB62210E360BCDAB8D94EA25082E (Teleport_t33E97FA0B9C7C63F5D0130A3D270BB742D9B9995 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Cardboard.SDK.UpdateState();
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D_il2cpp_TypeInfo_var);
		Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D * L_0;
		L_0 = Cardboard_get_SDK_m04DCC06D1BC6E4714FF69B35832CBA6BD6DF4079(/*hidden argument*/NULL);
		NullCheck(L_0);
		Cardboard_UpdateState_m2A39A1863AC7F0161355F4BB6C8CB6F67AF6EC30(L_0, /*hidden argument*/NULL);
		// if (Cardboard.SDK.BackButtonPressed) {
		Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D * L_1;
		L_1 = Cardboard_get_SDK_m04DCC06D1BC6E4714FF69B35832CBA6BD6DF4079(/*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Cardboard_get_BackButtonPressed_mF3853483DEA1442427C90031EC8C32F4582B1BA5_inline(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void Teleport::SetGazedAt(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Teleport_SetGazedAt_m02EC72E19B4930746256D8F0EA177FD2272003CC (Teleport_t33E97FA0B9C7C63F5D0130A3D270BB742D9B9995 * __this, bool ___gazedAt0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B2_0 = NULL;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B1_0 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B3_1 = NULL;
	{
		// GetComponent<Renderer>().material.color = gazedAt ? Color.green : Color.red;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_0;
		L_0 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		NullCheck(L_0);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1;
		L_1 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_0, /*hidden argument*/NULL);
		bool L_2 = ___gazedAt0;
		G_B1_0 = L_1;
		if (L_2)
		{
			G_B2_0 = L_1;
			goto IL_0015;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		L_3 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_001a;
	}

IL_0015:
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		L_4 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_001a:
	{
		NullCheck(G_B3_1);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Teleport::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Teleport_Reset_m37852B1866F6ADF60933D8442F1C1BCEDC3A46E4 (Teleport_t33E97FA0B9C7C63F5D0130A3D270BB742D9B9995 * __this, const RuntimeMethod* method)
{
	{
		// transform.localPosition = startingPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = __this->get_startingPosition_4();
		NullCheck(L_0);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Teleport::ToggleVRMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Teleport_ToggleVRMode_mBA3EA49DB2EAE141D8FE8395186C2507D3DE992D (Teleport_t33E97FA0B9C7C63F5D0130A3D270BB742D9B9995 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Cardboard.SDK.VRModeEnabled = !Cardboard.SDK.VRModeEnabled;
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D_il2cpp_TypeInfo_var);
		Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D * L_0;
		L_0 = Cardboard_get_SDK_m04DCC06D1BC6E4714FF69B35832CBA6BD6DF4079(/*hidden argument*/NULL);
		Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D * L_1;
		L_1 = Cardboard_get_SDK_m04DCC06D1BC6E4714FF69B35832CBA6BD6DF4079(/*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Cardboard_get_VRModeEnabled_mEBD4C3D86F53491981B408BA3E899166BA062582_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Cardboard_set_VRModeEnabled_m66E8DD9336B9BD2A01D758FCA104D84517C98DCB(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Teleport::TeleportRandomly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Teleport_TeleportRandomly_mC0BB1BEAF8F5C05F9114E3BA35D642F785594732 (Teleport_t33E97FA0B9C7C63F5D0130A3D270BB742D9B9995 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// Vector3 direction = Random.onUnitSphere;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Random_get_onUnitSphere_m909066B4EAF5EE0A05D3C1DCBDADC55A2D6A4EED(/*hidden argument*/NULL);
		V_0 = L_0;
		// direction.y = Mathf.Clamp(direction.y, 0.5f, 1f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = V_0;
		float L_2 = L_1.get_y_3();
		float L_3;
		L_3 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_2, (0.5f), (1.0f), /*hidden argument*/NULL);
		(&V_0)->set_y_3(L_3);
		// float distance = 2 * Random.value + 1.5f;
		float L_4;
		L_4 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_4)), (float)(1.5f)));
		// transform.localPosition = direction * distance;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_0;
		float L_7 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_5, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Teleport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Teleport__ctor_mF232DF6C23A42F13C1B57881E696EBA352801E3B (Teleport_t33E97FA0B9C7C63F5D0130A3D270BB742D9B9995 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void TeleportLegacyUI::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportLegacyUI_Awake_mE60E25669ECA8AA5648134B203507DD2CC5ED052 (TeleportLegacyUI_tA00CC32535C6DC1C4E347CB8C7161BF6CEF93B91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnGUICallback_t6E54053C3D6F915C472341FA973EFA12EDFDB5C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TeleportLegacyUI_OnGUI_mD3B5040C56C52EEC1B24B1677824F14200B3E895_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CardboardOnGUI.IsGUIVisible = true;
		CardboardOnGUI_set_IsGUIVisible_mDADFAFA8C3DBCA60B6CD9A837D90BAD2B9718954_inline((bool)1, /*hidden argument*/NULL);
		// CardboardOnGUI.onGUICallback += this.OnGUI;
		OnGUICallback_t6E54053C3D6F915C472341FA973EFA12EDFDB5C8 * L_0 = (OnGUICallback_t6E54053C3D6F915C472341FA973EFA12EDFDB5C8 *)il2cpp_codegen_object_new(OnGUICallback_t6E54053C3D6F915C472341FA973EFA12EDFDB5C8_il2cpp_TypeInfo_var);
		OnGUICallback__ctor_mB781DECF5BCF626D27527F6BEFA739979FAB58A3(L_0, __this, (intptr_t)((intptr_t)TeleportLegacyUI_OnGUI_mD3B5040C56C52EEC1B24B1677824F14200B3E895_RuntimeMethod_var), /*hidden argument*/NULL);
		CardboardOnGUI_add_onGUICallback_mAB5DDA1C1A19BEAED25D2B32816C7EEE6D995630(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TeleportLegacyUI::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportLegacyUI_Update_mE21FCFA3488919F3A8317FA6647111230AF7E844 (TeleportLegacyUI_tA00CC32535C6DC1C4E347CB8C7161BF6CEF93B91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mCE49E8783A1794715E6D539C8BB8C78CC589AB60_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CardboardHead_t71133BBC784C92F40ED0B6CD29EE9D84B9D0329C * V_0 = NULL;
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		// CardboardHead head = Cardboard.Controller.Head;
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D_il2cpp_TypeInfo_var);
		StereoController_t4A27502B3E84039EC0E267357EA04E4BA485927F * L_0;
		L_0 = Cardboard_get_Controller_m2A6922203C4278457792AD650230985548AC1951(/*hidden argument*/NULL);
		NullCheck(L_0);
		CardboardHead_t71133BBC784C92F40ED0B6CD29EE9D84B9D0329C * L_1;
		L_1 = StereoController_get_Head_mA2BC2E8DAD174C9481923D1533D6FDDD38B15E78(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// bool isLookedAt = GetComponent<Collider>().Raycast(head.Gaze, out hit, Mathf.Infinity);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_2;
		L_2 = Component_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mCE49E8783A1794715E6D539C8BB8C78CC589AB60(__this, /*hidden argument*/Component_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mCE49E8783A1794715E6D539C8BB8C78CC589AB60_RuntimeMethod_var);
		CardboardHead_t71133BBC784C92F40ED0B6CD29EE9D84B9D0329C * L_3 = V_0;
		NullCheck(L_3);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_4;
		L_4 = CardboardHead_get_Gaze_m3B24FD5E70683CD935155D3353F5ECCD6AD8AB33(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_5;
		L_5 = Collider_Raycast_m41CA5C3C07B92F5325CB81890BE3A611C3C70784(L_2, L_4, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_1), (std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		V_2 = L_5;
		// SetGazedAt(isLookedAt);
		bool L_6 = V_2;
		Teleport_SetGazedAt_m02EC72E19B4930746256D8F0EA177FD2272003CC(__this, L_6, /*hidden argument*/NULL);
		// if (Cardboard.SDK.Triggered && isLookedAt) {
		Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D * L_7;
		L_7 = Cardboard_get_SDK_m04DCC06D1BC6E4714FF69B35832CBA6BD6DF4079(/*hidden argument*/NULL);
		NullCheck(L_7);
		bool L_8;
		L_8 = Cardboard_get_Triggered_m52A99E7475AF36707CA06F1C51D340C97BC0C7A9_inline(L_7, /*hidden argument*/NULL);
		bool L_9 = V_2;
		if (!((int32_t)((int32_t)L_8&(int32_t)L_9)))
		{
			goto IL_003f;
		}
	}
	{
		// TeleportRandomly();
		Teleport_TeleportRandomly_mC0BB1BEAF8F5C05F9114E3BA35D642F785594732(__this, /*hidden argument*/NULL);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void TeleportLegacyUI::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportLegacyUI_OnGUI_mD3B5040C56C52EEC1B24B1677824F14200B3E895 (TeleportLegacyUI_tA00CC32535C6DC1C4E347CB8C7161BF6CEF93B91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C585F14001AC6659E009989AFB9A1E6E3DD171B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A52E247D991395741B0C681211A8D68958D7E46);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA74ACAA1F61DE0EB348EC03946685B0B6270CB36);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!CardboardOnGUI.OKToDraw(this)) {
		bool L_0;
		L_0 = CardboardOnGUI_OKToDraw_m10C8CE5F5FC696F7A9B512CB53A1FFF84D1CF0A9(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (GUI.Button(new Rect(50, 50, 200, 50), "Reset")) {
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_1), (50.0f), (50.0f), (200.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = GUI_Button_m668EE382521BDEA241D719A9CF39B6672E2CA23F(L_1, _stringLiteralA74ACAA1F61DE0EB348EC03946685B0B6270CB36, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		// Reset();
		Teleport_Reset_m37852B1866F6ADF60933D8442F1C1BCEDC3A46E4(__this, /*hidden argument*/NULL);
	}

IL_0034:
	{
		// if (GUI.Button(new Rect(50, 110, 200, 50), "Recenter")) {
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_3), (50.0f), (110.0f), (200.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = GUI_Button_m668EE382521BDEA241D719A9CF39B6672E2CA23F(L_3, _stringLiteral8A52E247D991395741B0C681211A8D68958D7E46, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0063;
		}
	}
	{
		// Cardboard.SDK.Recenter();
		IL2CPP_RUNTIME_CLASS_INIT(Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D_il2cpp_TypeInfo_var);
		Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D * L_5;
		L_5 = Cardboard_get_SDK_m04DCC06D1BC6E4714FF69B35832CBA6BD6DF4079(/*hidden argument*/NULL);
		NullCheck(L_5);
		Cardboard_Recenter_mC5DEBDA7C99F1D9BF4C5A4D2CC5A7BDDD02DBA10(L_5, /*hidden argument*/NULL);
	}

IL_0063:
	{
		// if (GUI.Button(new Rect(50, 170, 200, 50), "VR Mode")) {
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_6), (50.0f), (170.0f), (200.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = GUI_Button_m668EE382521BDEA241D719A9CF39B6672E2CA23F(L_6, _stringLiteral4C585F14001AC6659E009989AFB9A1E6E3DD171B, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_008e;
		}
	}
	{
		// ToggleVRMode();
		Teleport_ToggleVRMode_mBA3EA49DB2EAE141D8FE8395186C2507D3DE992D(__this, /*hidden argument*/NULL);
	}

IL_008e:
	{
		// }
		return;
	}
}
// System.Void TeleportLegacyUI::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportLegacyUI_OnDestroy_m6C375C2F272F8A51E21DF7C4DE37A1D3327F2E88 (TeleportLegacyUI_tA00CC32535C6DC1C4E347CB8C7161BF6CEF93B91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnGUICallback_t6E54053C3D6F915C472341FA973EFA12EDFDB5C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TeleportLegacyUI_OnGUI_mD3B5040C56C52EEC1B24B1677824F14200B3E895_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CardboardOnGUI.onGUICallback -= this.OnGUI;
		OnGUICallback_t6E54053C3D6F915C472341FA973EFA12EDFDB5C8 * L_0 = (OnGUICallback_t6E54053C3D6F915C472341FA973EFA12EDFDB5C8 *)il2cpp_codegen_object_new(OnGUICallback_t6E54053C3D6F915C472341FA973EFA12EDFDB5C8_il2cpp_TypeInfo_var);
		OnGUICallback__ctor_mB781DECF5BCF626D27527F6BEFA739979FAB58A3(L_0, __this, (intptr_t)((intptr_t)TeleportLegacyUI_OnGUI_mD3B5040C56C52EEC1B24B1677824F14200B3E895_RuntimeMethod_var), /*hidden argument*/NULL);
		CardboardOnGUI_remove_onGUICallback_m1732FD0117ED53461BFFB44B1EBD638ECB9ADFD3(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TeleportLegacyUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportLegacyUI__ctor_m38215BE21D6D0B84DF75F8D00C1A360EDCBA5F7F (TeleportLegacyUI_tA00CC32535C6DC1C4E347CB8C7161BF6CEF93B91 * __this, const RuntimeMethod* method)
{
	{
		Teleport__ctor_mF232DF6C23A42F13C1B57881E696EBA352801E3B(__this, /*hidden argument*/NULL);
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
// System.Void StarterAssets.ThirdPersonController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_Awake_m982FE30F7B3D80F71E2BB40E5E9C85266840D98C (ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_mainCamera == null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get__mainCamera_39();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// _mainCamera = GameObject.FindGameObjectWithTag("MainCamera");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6, /*hidden argument*/NULL);
		__this->set__mainCamera_39(L_2);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_Start_mDF1E5FFEF57D1CD6BCC3A25993F99F5ECD673C43 (ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E_m3DB1DD5819F96D7C7F6F19C12138AC48D21DBBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisStarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC_m6FFF67D18E19DC0556D8F33FE91976B26FD4D787_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_mBFCCD843329D165D8D674C4B9C04F13BE9940CC6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _hasAnimator = TryGetComponent(out _animator);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** L_0 = __this->get_address_of__animator_36();
		bool L_1;
		L_1 = Component_TryGetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_mBFCCD843329D165D8D674C4B9C04F13BE9940CC6(__this, (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 **)L_0, /*hidden argument*/Component_TryGetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_mBFCCD843329D165D8D674C4B9C04F13BE9940CC6_RuntimeMethod_var);
		__this->set__hasAnimator_41(L_1);
		// _controller = GetComponent<CharacterController>();
		CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * L_2;
		L_2 = Component_GetComponent_TisCharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E_m3DB1DD5819F96D7C7F6F19C12138AC48D21DBBF2(__this, /*hidden argument*/Component_GetComponent_TisCharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E_m3DB1DD5819F96D7C7F6F19C12138AC48D21DBBF2_RuntimeMethod_var);
		__this->set__controller_37(L_2);
		// _input = GetComponent<StarterAssetsInputs>();
		StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * L_3;
		L_3 = Component_GetComponent_TisStarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC_m6FFF67D18E19DC0556D8F33FE91976B26FD4D787(__this, /*hidden argument*/Component_GetComponent_TisStarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC_m6FFF67D18E19DC0556D8F33FE91976B26FD4D787_RuntimeMethod_var);
		__this->set__input_38(L_3);
		// AssignAnimationIDs();
		ThirdPersonController_AssignAnimationIDs_mB8641B310C6DDEC521D5401B691A156B730C637A(__this, /*hidden argument*/NULL);
		// _jumpTimeoutDelta = JumpTimeout;
		float L_4 = __this->get_JumpTimeout_10();
		__this->set__jumpTimeoutDelta_29(L_4);
		// _fallTimeoutDelta = FallTimeout;
		float L_5 = __this->get_FallTimeout_11();
		__this->set__fallTimeoutDelta_30(L_5);
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_Update_m6A729BE364E703138033EE4C7247074BC13C6F9E (ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_mBFCCD843329D165D8D674C4B9C04F13BE9940CC6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _hasAnimator = TryGetComponent(out _animator);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** L_0 = __this->get_address_of__animator_36();
		bool L_1;
		L_1 = Component_TryGetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_mBFCCD843329D165D8D674C4B9C04F13BE9940CC6(__this, (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 **)L_0, /*hidden argument*/Component_TryGetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_mBFCCD843329D165D8D674C4B9C04F13BE9940CC6_RuntimeMethod_var);
		__this->set__hasAnimator_41(L_1);
		// JumpAndGravity();
		ThirdPersonController_JumpAndGravity_mF8ADE69C505E77DFB9A7A187A2E914F4D0390514(__this, /*hidden argument*/NULL);
		// GroundedCheck();
		ThirdPersonController_GroundedCheck_mB9F085D761FAD5805B651EC2F3466B240D94964A(__this, /*hidden argument*/NULL);
		// Move();
		ThirdPersonController_Move_m0444969DC5E148B2093542C8F31B22DF98D95B6D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_LateUpdate_m1F8928BBA64078F5E8062FCE4A9EA6A2C504750F (ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903 * __this, const RuntimeMethod* method)
{
	{
		// CameraRotation();
		ThirdPersonController_CameraRotation_m389620971F720216A6BF133DFB0845BACD4866B4(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::AssignAnimationIDs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_AssignAnimationIDs_mB8641B310C6DDEC521D5401B691A156B730C637A (ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B1BBFA44CAA416A6E13B3ADACB0CDB4EFF4AAB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2CFA0DCA9F3732AA69C3B65D12881F7F3CF5FC0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB1018EBBD330B231ADCF3E0D809C0C4A7F770D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _animIDSpeed = Animator.StringToHash("Speed");
		int32_t L_0;
		L_0 = Animator_StringToHash_mA351F39D53E2AEFCF0BBD50E4FA92B7E1C99A668(_stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32, /*hidden argument*/NULL);
		__this->set__animIDSpeed_31(L_0);
		// _animIDGrounded = Animator.StringToHash("Grounded");
		int32_t L_1;
		L_1 = Animator_StringToHash_mA351F39D53E2AEFCF0BBD50E4FA92B7E1C99A668(_stringLiteralEB1018EBBD330B231ADCF3E0D809C0C4A7F770D4, /*hidden argument*/NULL);
		__this->set__animIDGrounded_32(L_1);
		// _animIDJump = Animator.StringToHash("Jump");
		int32_t L_2;
		L_2 = Animator_StringToHash_mA351F39D53E2AEFCF0BBD50E4FA92B7E1C99A668(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, /*hidden argument*/NULL);
		__this->set__animIDJump_33(L_2);
		// _animIDFreeFall = Animator.StringToHash("FreeFall");
		int32_t L_3;
		L_3 = Animator_StringToHash_mA351F39D53E2AEFCF0BBD50E4FA92B7E1C99A668(_stringLiteral0B1BBFA44CAA416A6E13B3ADACB0CDB4EFF4AAB3, /*hidden argument*/NULL);
		__this->set__animIDFreeFall_34(L_3);
		// _animIDMotionSpeed = Animator.StringToHash("MotionSpeed");
		int32_t L_4;
		L_4 = Animator_StringToHash_mA351F39D53E2AEFCF0BBD50E4FA92B7E1C99A668(_stringLiteralE2CFA0DCA9F3732AA69C3B65D12881F7F3CF5FC0, /*hidden argument*/NULL);
		__this->set__animIDMotionSpeed_35(L_4);
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::GroundedCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_GroundedCheck_mB9F085D761FAD5805B651EC2F3466B240D94964A (ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 spherePosition = new Vector3(transform.position.x, transform.position.y - GroundedOffset, transform.position.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_3();
		float L_6 = __this->get_GroundedOffset_13();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_z_4();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), L_2, ((float)il2cpp_codegen_subtract((float)L_5, (float)L_6)), L_9, /*hidden argument*/NULL);
		// Grounded = Physics.CheckSphere(spherePosition, GroundedRadius, GroundLayers, QueryTriggerInteraction.Ignore);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		float L_11 = __this->get_GroundedRadius_14();
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_12 = __this->get_GroundLayers_15();
		int32_t L_13;
		L_13 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_12, /*hidden argument*/NULL);
		bool L_14;
		L_14 = Physics_CheckSphere_mF4AE4778A415A4E9C7C15BA21A0E402909AD3472(L_10, L_11, L_13, 1, /*hidden argument*/NULL);
		__this->set_Grounded_12(L_14);
		// if (_hasAnimator)
		bool L_15 = __this->get__hasAnimator_41();
		if (!L_15)
		{
			goto IL_007b;
		}
	}
	{
		// _animator.SetBool(_animIDGrounded, Grounded);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_16 = __this->get__animator_36();
		int32_t L_17 = __this->get__animIDGrounded_32();
		bool L_18 = __this->get_Grounded_12();
		NullCheck(L_16);
		Animator_SetBool_m0F0363B189AAB848FA3B428986C6A01470B3E38C(L_16, L_17, L_18, /*hidden argument*/NULL);
	}

IL_007b:
	{
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::CameraRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_CameraRotation_m389620971F720216A6BF133DFB0845BACD4866B4 (ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903 * __this, const RuntimeMethod* method)
{
	{
		// if (_input.look.sqrMagnitude >= _threshold && !LockCameraPosition)
		StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * L_0 = __this->get__input_38();
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_1 = L_0->get_address_of_look_5();
		float L_2;
		L_2 = Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_1, /*hidden argument*/NULL);
		if ((!(((float)L_2) >= ((float)(0.00999999978f)))))
		{
			goto IL_0065;
		}
	}
	{
		bool L_3 = __this->get_LockCameraPosition_20();
		if (L_3)
		{
			goto IL_0065;
		}
	}
	{
		// _cinemachineTargetYaw += _input.look.x * Time.deltaTime;
		float L_4 = __this->get__cinemachineTargetYaw_21();
		StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * L_5 = __this->get__input_38();
		NullCheck(L_5);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_6 = L_5->get_address_of_look_5();
		float L_7 = L_6->get_x_0();
		float L_8;
		L_8 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set__cinemachineTargetYaw_21(((float)il2cpp_codegen_add((float)L_4, (float)((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)))));
		// _cinemachineTargetPitch += _input.look.y * Time.deltaTime;
		float L_9 = __this->get__cinemachineTargetPitch_22();
		StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * L_10 = __this->get__input_38();
		NullCheck(L_10);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_11 = L_10->get_address_of_look_5();
		float L_12 = L_11->get_y_1();
		float L_13;
		L_13 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set__cinemachineTargetPitch_22(((float)il2cpp_codegen_add((float)L_9, (float)((float)il2cpp_codegen_multiply((float)L_12, (float)L_13)))));
	}

IL_0065:
	{
		// _cinemachineTargetYaw = ClampAngle(_cinemachineTargetYaw, float.MinValue, float.MaxValue);
		float L_14 = __this->get__cinemachineTargetYaw_21();
		float L_15;
		L_15 = ThirdPersonController_ClampAngle_mFAEB55D93C154C7523412A3287C3A957173E7455(L_14, (-(std::numeric_limits<float>::max)()), ((std::numeric_limits<float>::max)()), /*hidden argument*/NULL);
		__this->set__cinemachineTargetYaw_21(L_15);
		// _cinemachineTargetPitch = ClampAngle(_cinemachineTargetPitch, BottomClamp, TopClamp);
		float L_16 = __this->get__cinemachineTargetPitch_22();
		float L_17 = __this->get_BottomClamp_18();
		float L_18 = __this->get_TopClamp_17();
		float L_19;
		L_19 = ThirdPersonController_ClampAngle_mFAEB55D93C154C7523412A3287C3A957173E7455(L_16, L_17, L_18, /*hidden argument*/NULL);
		__this->set__cinemachineTargetPitch_22(L_19);
		// CinemachineCameraTarget.transform.rotation = Quaternion.Euler(_cinemachineTargetPitch + CameraAngleOverride, _cinemachineTargetYaw, 0.0f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = __this->get_CinemachineCameraTarget_16();
		NullCheck(L_20);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_20, /*hidden argument*/NULL);
		float L_22 = __this->get__cinemachineTargetPitch_22();
		float L_23 = __this->get_CameraAngleOverride_19();
		float L_24 = __this->get__cinemachineTargetYaw_21();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_25;
		L_25 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3(((float)il2cpp_codegen_add((float)L_22, (float)L_23)), L_24, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_21, L_25, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_Move_m0444969DC5E148B2093542C8F31B22DF98D95B6D (ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B8_0 = 0.0f;
	{
		// float targetSpeed = _input.sprint ? SprintSpeed : MoveSpeed;
		StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * L_0 = __this->get__input_38();
		NullCheck(L_0);
		bool L_1 = L_0->get_sprint_7();
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		float L_2 = __this->get_MoveSpeed_4();
		G_B3_0 = L_2;
		goto IL_001b;
	}

IL_0015:
	{
		float L_3 = __this->get_SprintSpeed_5();
		G_B3_0 = L_3;
	}

IL_001b:
	{
		V_0 = G_B3_0;
		// if (_input.move == Vector2.zero) targetSpeed = 0.0f;
		StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * L_4 = __this->get__input_38();
		NullCheck(L_4);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = L_4->get_move_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		bool L_7;
		L_7 = Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0_inline(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		// if (_input.move == Vector2.zero) targetSpeed = 0.0f;
		V_0 = (0.0f);
	}

IL_0039:
	{
		// float currentHorizontalSpeed = new Vector3(_controller.velocity.x, 0.0f, _controller.velocity.z).magnitude;
		CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * L_8 = __this->get__controller_37();
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = CharacterController_get_velocity_m13A2C2D13A171D9A6E899C0E472C68FCF5E3D5A6(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_x_2();
		CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * L_11 = __this->get__controller_37();
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = CharacterController_get_velocity_m13A2C2D13A171D9A6E899C0E472C68FCF5E3D5A6(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_14), L_10, (0.0f), L_13, /*hidden argument*/NULL);
		V_6 = L_14;
		float L_15;
		L_15 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_6), /*hidden argument*/NULL);
		V_1 = L_15;
		// float speedOffset = 0.1f;
		V_2 = (0.100000001f);
		// float inputMagnitude = _input.analogMovement ? _input.move.magnitude : 1f;
		StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * L_16 = __this->get__input_38();
		NullCheck(L_16);
		bool L_17 = L_16->get_analogMovement_8();
		if (L_17)
		{
			goto IL_0087;
		}
	}
	{
		G_B8_0 = (1.0f);
		goto IL_0097;
	}

IL_0087:
	{
		StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * L_18 = __this->get__input_38();
		NullCheck(L_18);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_19 = L_18->get_address_of_move_4();
		float L_20;
		L_20 = Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_19, /*hidden argument*/NULL);
		G_B8_0 = L_20;
	}

IL_0097:
	{
		V_3 = G_B8_0;
		// if (currentHorizontalSpeed < targetSpeed - speedOffset || currentHorizontalSpeed > targetSpeed + speedOffset)
		float L_21 = V_1;
		float L_22 = V_0;
		float L_23 = V_2;
		if ((((float)L_21) < ((float)((float)il2cpp_codegen_subtract((float)L_22, (float)L_23)))))
		{
			goto IL_00a4;
		}
	}
	{
		float L_24 = V_1;
		float L_25 = V_0;
		float L_26 = V_2;
		if ((!(((float)L_24) > ((float)((float)il2cpp_codegen_add((float)L_25, (float)L_26))))))
		{
			goto IL_00de;
		}
	}

IL_00a4:
	{
		// _speed = Mathf.Lerp(currentHorizontalSpeed, targetSpeed * inputMagnitude, Time.deltaTime * SpeedChangeRate);
		float L_27 = V_1;
		float L_28 = V_0;
		float L_29 = V_3;
		float L_30;
		L_30 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_31 = __this->get_SpeedChangeRate_7();
		float L_32;
		L_32 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_27, ((float)il2cpp_codegen_multiply((float)L_28, (float)L_29)), ((float)il2cpp_codegen_multiply((float)L_30, (float)L_31)), /*hidden argument*/NULL);
		__this->set__speed_23(L_32);
		// _speed = Mathf.Round(_speed * 1000f) / 1000f;
		float L_33 = __this->get__speed_23();
		float L_34;
		L_34 = bankers_roundf(((float)il2cpp_codegen_multiply((float)L_33, (float)(1000.0f))));
		__this->set__speed_23(((float)((float)L_34/(float)(1000.0f))));
		// }
		goto IL_00e5;
	}

IL_00de:
	{
		// _speed = targetSpeed;
		float L_35 = V_0;
		__this->set__speed_23(L_35);
	}

IL_00e5:
	{
		// _animationBlend = Mathf.Lerp(_animationBlend, targetSpeed, Time.deltaTime * SpeedChangeRate);
		float L_36 = __this->get__animationBlend_24();
		float L_37 = V_0;
		float L_38;
		L_38 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_39 = __this->get_SpeedChangeRate_7();
		float L_40;
		L_40 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_36, L_37, ((float)il2cpp_codegen_multiply((float)L_38, (float)L_39)), /*hidden argument*/NULL);
		__this->set__animationBlend_24(L_40);
		// Vector3 inputDirection = new Vector3(_input.move.x, 0.0f, _input.move.y).normalized;
		StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * L_41 = __this->get__input_38();
		NullCheck(L_41);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_42 = L_41->get_address_of_move_4();
		float L_43 = L_42->get_x_0();
		StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * L_44 = __this->get__input_38();
		NullCheck(L_44);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_45 = L_44->get_address_of_move_4();
		float L_46 = L_45->get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		memset((&L_47), 0, sizeof(L_47));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_47), L_43, (0.0f), L_46, /*hidden argument*/NULL);
		V_6 = L_47;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		L_48 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_6), /*hidden argument*/NULL);
		V_4 = L_48;
		// if (_input.move != Vector2.zero)
		StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * L_49 = __this->get__input_38();
		NullCheck(L_49);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_50 = L_49->get_move_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_51;
		L_51 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		bool L_52;
		L_52 = Vector2_op_Inequality_mA9E4245E487F3051F0EBF086646A1C341213D24E_inline(L_50, L_51, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_01c9;
		}
	}
	{
		// _targetRotation = Mathf.Atan2(inputDirection.x, inputDirection.z) * Mathf.Rad2Deg + _mainCamera.transform.eulerAngles.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53 = V_4;
		float L_54 = L_53.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55 = V_4;
		float L_56 = L_55.get_z_4();
		float L_57;
		L_57 = atan2f(L_54, L_56);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_58 = __this->get__mainCamera_39();
		NullCheck(L_58);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_59;
		L_59 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_58, /*hidden argument*/NULL);
		NullCheck(L_59);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60;
		L_60 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_59, /*hidden argument*/NULL);
		float L_61 = L_60.get_y_3();
		__this->set__targetRotation_25(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_57, (float)(57.2957802f))), (float)L_61)));
		// float rotation = Mathf.SmoothDampAngle(transform.eulerAngles.y, _targetRotation, ref _rotationVelocity, RotationSmoothTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_62;
		L_62 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_62);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63;
		L_63 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_62, /*hidden argument*/NULL);
		float L_64 = L_63.get_y_3();
		float L_65 = __this->get__targetRotation_25();
		float* L_66 = __this->get_address_of__rotationVelocity_26();
		float L_67 = __this->get_RotationSmoothTime_6();
		float L_68;
		L_68 = Mathf_SmoothDampAngle_mB876CA3D4A313CF29074CCDDB784CAF5533EBA46(L_64, L_65, (float*)L_66, L_67, /*hidden argument*/NULL);
		V_7 = L_68;
		// transform.rotation = Quaternion.Euler(0.0f, rotation, 0.0f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_69;
		L_69 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_70 = V_7;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_71;
		L_71 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), L_70, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_69);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_69, L_71, /*hidden argument*/NULL);
	}

IL_01c9:
	{
		// Vector3 targetDirection = Quaternion.Euler(0.0f, _targetRotation, 0.0f) * Vector3.forward;
		float L_72 = __this->get__targetRotation_25();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_73;
		L_73 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), L_72, (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_74;
		L_74 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_75;
		L_75 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_73, L_74, /*hidden argument*/NULL);
		V_5 = L_75;
		// _controller.Move(targetDirection.normalized * (_speed * Time.deltaTime) + new Vector3(0.0f, _verticalVelocity, 0.0f) * Time.deltaTime);
		CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * L_76 = __this->get__controller_37();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_77;
		L_77 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_5), /*hidden argument*/NULL);
		float L_78 = __this->get__speed_23();
		float L_79;
		L_79 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_80;
		L_80 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_77, ((float)il2cpp_codegen_multiply((float)L_78, (float)L_79)), /*hidden argument*/NULL);
		float L_81 = __this->get__verticalVelocity_27();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_82;
		memset((&L_82), 0, sizeof(L_82));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_82), (0.0f), L_81, (0.0f), /*hidden argument*/NULL);
		float L_83;
		L_83 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_84;
		L_84 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_82, L_83, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_85;
		L_85 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_80, L_84, /*hidden argument*/NULL);
		NullCheck(L_76);
		int32_t L_86;
		L_86 = CharacterController_Move_mE0EBC32C72A0BEC18EDEBE748D44309A4BA32E60(L_76, L_85, /*hidden argument*/NULL);
		// if (_hasAnimator)
		bool L_87 = __this->get__hasAnimator_41();
		if (!L_87)
		{
			goto IL_0263;
		}
	}
	{
		// _animator.SetFloat(_animIDSpeed, _animationBlend);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_88 = __this->get__animator_36();
		int32_t L_89 = __this->get__animIDSpeed_31();
		float L_90 = __this->get__animationBlend_24();
		NullCheck(L_88);
		Animator_SetFloat_m22777620F85E25691F57A7CAD4190D7F5702E02C(L_88, L_89, L_90, /*hidden argument*/NULL);
		// _animator.SetFloat(_animIDMotionSpeed, inputMagnitude);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_91 = __this->get__animator_36();
		int32_t L_92 = __this->get__animIDMotionSpeed_35();
		float L_93 = V_3;
		NullCheck(L_91);
		Animator_SetFloat_m22777620F85E25691F57A7CAD4190D7F5702E02C(L_91, L_92, L_93, /*hidden argument*/NULL);
	}

IL_0263:
	{
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::JumpAndGravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_JumpAndGravity_mF8ADE69C505E77DFB9A7A187A2E914F4D0390514 (ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903 * __this, const RuntimeMethod* method)
{
	{
		// if (Grounded)
		bool L_0 = __this->get_Grounded_12();
		if (!L_0)
		{
			goto IL_00ce;
		}
	}
	{
		// _fallTimeoutDelta = FallTimeout;
		float L_1 = __this->get_FallTimeout_11();
		__this->set__fallTimeoutDelta_30(L_1);
		// if (_hasAnimator)
		bool L_2 = __this->get__hasAnimator_41();
		if (!L_2)
		{
			goto IL_0043;
		}
	}
	{
		// _animator.SetBool(_animIDJump, false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_3 = __this->get__animator_36();
		int32_t L_4 = __this->get__animIDJump_33();
		NullCheck(L_3);
		Animator_SetBool_m0F0363B189AAB848FA3B428986C6A01470B3E38C(L_3, L_4, (bool)0, /*hidden argument*/NULL);
		// _animator.SetBool(_animIDFreeFall, false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_5 = __this->get__animator_36();
		int32_t L_6 = __this->get__animIDFreeFall_34();
		NullCheck(L_5);
		Animator_SetBool_m0F0363B189AAB848FA3B428986C6A01470B3E38C(L_5, L_6, (bool)0, /*hidden argument*/NULL);
	}

IL_0043:
	{
		// if (_verticalVelocity < 0.0f)
		float L_7 = __this->get__verticalVelocity_27();
		if ((!(((float)L_7) < ((float)(0.0f)))))
		{
			goto IL_005b;
		}
	}
	{
		// _verticalVelocity = -2f;
		__this->set__verticalVelocity_27((-2.0f));
	}

IL_005b:
	{
		// if (_input.jump && _jumpTimeoutDelta <= 0.0f)
		StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * L_8 = __this->get__input_38();
		NullCheck(L_8);
		bool L_9 = L_8->get_jump_6();
		if (!L_9)
		{
			goto IL_00ad;
		}
	}
	{
		float L_10 = __this->get__jumpTimeoutDelta_29();
		if ((!(((float)L_10) <= ((float)(0.0f)))))
		{
			goto IL_00ad;
		}
	}
	{
		// _verticalVelocity = Mathf.Sqrt(JumpHeight * -2f * Gravity);
		float L_11 = __this->get_JumpHeight_8();
		float L_12 = __this->get_Gravity_9();
		float L_13;
		L_13 = sqrtf(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_11, (float)(-2.0f))), (float)L_12)));
		__this->set__verticalVelocity_27(L_13);
		// if (_hasAnimator)
		bool L_14 = __this->get__hasAnimator_41();
		if (!L_14)
		{
			goto IL_00ad;
		}
	}
	{
		// _animator.SetBool(_animIDJump, true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_15 = __this->get__animator_36();
		int32_t L_16 = __this->get__animIDJump_33();
		NullCheck(L_15);
		Animator_SetBool_m0F0363B189AAB848FA3B428986C6A01470B3E38C(L_15, L_16, (bool)1, /*hidden argument*/NULL);
	}

IL_00ad:
	{
		// if (_jumpTimeoutDelta >= 0.0f)
		float L_17 = __this->get__jumpTimeoutDelta_29();
		if ((!(((float)L_17) >= ((float)(0.0f)))))
		{
			goto IL_0121;
		}
	}
	{
		// _jumpTimeoutDelta -= Time.deltaTime;
		float L_18 = __this->get__jumpTimeoutDelta_29();
		float L_19;
		L_19 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set__jumpTimeoutDelta_29(((float)il2cpp_codegen_subtract((float)L_18, (float)L_19)));
		// }
		goto IL_0121;
	}

IL_00ce:
	{
		// _jumpTimeoutDelta = JumpTimeout;
		float L_20 = __this->get_JumpTimeout_10();
		__this->set__jumpTimeoutDelta_29(L_20);
		// if (_fallTimeoutDelta >= 0.0f)
		float L_21 = __this->get__fallTimeoutDelta_30();
		if ((!(((float)L_21) >= ((float)(0.0f)))))
		{
			goto IL_00fb;
		}
	}
	{
		// _fallTimeoutDelta -= Time.deltaTime;
		float L_22 = __this->get__fallTimeoutDelta_30();
		float L_23;
		L_23 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set__fallTimeoutDelta_30(((float)il2cpp_codegen_subtract((float)L_22, (float)L_23)));
		// }
		goto IL_0115;
	}

IL_00fb:
	{
		// if (_hasAnimator)
		bool L_24 = __this->get__hasAnimator_41();
		if (!L_24)
		{
			goto IL_0115;
		}
	}
	{
		// _animator.SetBool(_animIDFreeFall, true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_25 = __this->get__animator_36();
		int32_t L_26 = __this->get__animIDFreeFall_34();
		NullCheck(L_25);
		Animator_SetBool_m0F0363B189AAB848FA3B428986C6A01470B3E38C(L_25, L_26, (bool)1, /*hidden argument*/NULL);
	}

IL_0115:
	{
		// _input.jump = false;
		StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * L_27 = __this->get__input_38();
		NullCheck(L_27);
		L_27->set_jump_6((bool)0);
	}

IL_0121:
	{
		// if (_verticalVelocity < _terminalVelocity)
		float L_28 = __this->get__verticalVelocity_27();
		float L_29 = __this->get__terminalVelocity_28();
		if ((!(((float)L_28) < ((float)L_29))))
		{
			goto IL_0148;
		}
	}
	{
		// _verticalVelocity += Gravity * Time.deltaTime;
		float L_30 = __this->get__verticalVelocity_27();
		float L_31 = __this->get_Gravity_9();
		float L_32;
		L_32 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set__verticalVelocity_27(((float)il2cpp_codegen_add((float)L_30, (float)((float)il2cpp_codegen_multiply((float)L_31, (float)L_32)))));
	}

IL_0148:
	{
		// }
		return;
	}
}
// System.Single StarterAssets.ThirdPersonController::ClampAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ThirdPersonController_ClampAngle_mFAEB55D93C154C7523412A3287C3A957173E7455 (float ___lfAngle0, float ___lfMin1, float ___lfMax2, const RuntimeMethod* method)
{
	{
		// if (lfAngle < -360f) lfAngle += 360f;
		float L_0 = ___lfAngle0;
		if ((!(((float)L_0) < ((float)(-360.0f)))))
		{
			goto IL_0011;
		}
	}
	{
		// if (lfAngle < -360f) lfAngle += 360f;
		float L_1 = ___lfAngle0;
		___lfAngle0 = ((float)il2cpp_codegen_add((float)L_1, (float)(360.0f)));
	}

IL_0011:
	{
		// if (lfAngle > 360f) lfAngle -= 360f;
		float L_2 = ___lfAngle0;
		if ((!(((float)L_2) > ((float)(360.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		// if (lfAngle > 360f) lfAngle -= 360f;
		float L_3 = ___lfAngle0;
		___lfAngle0 = ((float)il2cpp_codegen_subtract((float)L_3, (float)(360.0f)));
	}

IL_0022:
	{
		// return Mathf.Clamp(lfAngle, lfMin, lfMax);
		float L_4 = ___lfAngle0;
		float L_5 = ___lfMin1;
		float L_6 = ___lfMax2;
		float L_7;
		L_7 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_4, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void StarterAssets.ThirdPersonController::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_OnDrawGizmosSelected_m23A137AF678E2C538238940AE45FBB2856E73AE2 (ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903 * __this, const RuntimeMethod* method)
{
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Color transparentGreen = new Color(0.0f, 1.0f, 0.0f, 0.35f);
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)(&V_0), (0.0f), (1.0f), (0.0f), (0.349999994f), /*hidden argument*/NULL);
		// Color transparentRed = new Color(1.0f, 0.0f, 0.0f, 0.35f);
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)(&V_1), (1.0f), (0.0f), (0.0f), (0.349999994f), /*hidden argument*/NULL);
		// if (Grounded) Gizmos.color = transparentGreen;
		bool L_0 = __this->get_Grounded_12();
		if (!L_0)
		{
			goto IL_0046;
		}
	}
	{
		// if (Grounded) Gizmos.color = transparentGreen;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = V_0;
		Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(L_1, /*hidden argument*/NULL);
		goto IL_004c;
	}

IL_0046:
	{
		// else Gizmos.color = transparentRed;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = V_1;
		Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(L_2, /*hidden argument*/NULL);
	}

IL_004c:
	{
		// Gizmos.DrawSphere(new Vector3(transform.position.x, transform.position.y - GroundedOffset, transform.position.z), GroundedRadius);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_y_3();
		float L_9 = __this->get_GroundedOffset_13();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_13), L_5, ((float)il2cpp_codegen_subtract((float)L_8, (float)L_9)), L_12, /*hidden argument*/NULL);
		float L_14 = __this->get_GroundedRadius_14();
		Gizmos_DrawSphere_m50414CF8E502F4D93FC133091DA5E39543D69E91(L_13, L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController__ctor_m1A6595F81F751D300BAFBDAD5A3F8B4B1E339391 (ThirdPersonController_tCA99A63A4BE57B6A9950FFA8CFFABE8F82AD0903 * __this, const RuntimeMethod* method)
{
	{
		// public float MoveSpeed = 2.0f;
		__this->set_MoveSpeed_4((2.0f));
		// public float SprintSpeed = 5.335f;
		__this->set_SprintSpeed_5((5.33500004f));
		// public float RotationSmoothTime = 0.12f;
		__this->set_RotationSmoothTime_6((0.119999997f));
		// public float SpeedChangeRate = 10.0f;
		__this->set_SpeedChangeRate_7((10.0f));
		// public float JumpHeight = 1.2f;
		__this->set_JumpHeight_8((1.20000005f));
		// public float Gravity = -15.0f;
		__this->set_Gravity_9((-15.0f));
		// public float JumpTimeout = 0.50f;
		__this->set_JumpTimeout_10((0.5f));
		// public float FallTimeout = 0.15f;
		__this->set_FallTimeout_11((0.150000006f));
		// public bool Grounded = true;
		__this->set_Grounded_12((bool)1);
		// public float GroundedOffset = -0.14f;
		__this->set_GroundedOffset_13((-0.140000001f));
		// public float GroundedRadius = 0.28f;
		__this->set_GroundedRadius_14((0.280000001f));
		// public float TopClamp = 70.0f;
		__this->set_TopClamp_17((70.0f));
		// public float BottomClamp = -30.0f;
		__this->set_BottomClamp_18((-30.0f));
		// private float _terminalVelocity = 53.0f;
		__this->set__terminalVelocity_28((53.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void StarterAssets.UICanvasControllerInput::VirtualMoveInput(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasControllerInput_VirtualMoveInput_m3DCA73AB02D0D9D4AF69809D2EA9A388A9DD2D20 (UICanvasControllerInput_t18C69AA8A6225F0EDEC9D31926AFCA88FC8F8EA1 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___virtualMoveDirection0, const RuntimeMethod* method)
{
	{
		// starterAssetsInputs.MoveInput(virtualMoveDirection);
		StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * L_0 = __this->get_starterAssetsInputs_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___virtualMoveDirection0;
		NullCheck(L_0);
		StarterAssetsInputs_MoveInput_m17B8532D1DB7D870295DE9E82CBC17735F8984F8_inline(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.UICanvasControllerInput::VirtualLookInput(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasControllerInput_VirtualLookInput_mDCD0EF95A5FD1C0351C6EF330F0E21A2BC5B3BD7 (UICanvasControllerInput_t18C69AA8A6225F0EDEC9D31926AFCA88FC8F8EA1 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___virtualLookDirection0, const RuntimeMethod* method)
{
	{
		// starterAssetsInputs.LookInput(virtualLookDirection);
		StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * L_0 = __this->get_starterAssetsInputs_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___virtualLookDirection0;
		NullCheck(L_0);
		StarterAssetsInputs_LookInput_m3B98228935C1AD2E76356732A798A3EFD8CA4186_inline(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.UICanvasControllerInput::VirtualJumpInput(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasControllerInput_VirtualJumpInput_m4BF9A688729DE9CAB0368373B4508833CBAF158A (UICanvasControllerInput_t18C69AA8A6225F0EDEC9D31926AFCA88FC8F8EA1 * __this, bool ___virtualJumpState0, const RuntimeMethod* method)
{
	{
		// starterAssetsInputs.JumpInput(virtualJumpState);
		StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * L_0 = __this->get_starterAssetsInputs_4();
		bool L_1 = ___virtualJumpState0;
		NullCheck(L_0);
		StarterAssetsInputs_JumpInput_mEEC05639651E0D3AD679B923D34C3B58F52EC722_inline(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.UICanvasControllerInput::VirtualSprintInput(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasControllerInput_VirtualSprintInput_mC1DD56717CE777F772956FF98DA099A0C0BFD9B3 (UICanvasControllerInput_t18C69AA8A6225F0EDEC9D31926AFCA88FC8F8EA1 * __this, bool ___virtualSprintState0, const RuntimeMethod* method)
{
	{
		// starterAssetsInputs.SprintInput(virtualSprintState);
		StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * L_0 = __this->get_starterAssetsInputs_4();
		bool L_1 = ___virtualSprintState0;
		NullCheck(L_0);
		StarterAssetsInputs_SprintInput_m4A4EB5B45A168786D74E233577623FC38D74E4F3_inline(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.UICanvasControllerInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasControllerInput__ctor_mBBEE562E79321A1939A2B006E6654FA85259EDEB (UICanvasControllerInput_t18C69AA8A6225F0EDEC9D31926AFCA88FC8F8EA1 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UIVirtualButton::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OnPointerDown_m9B8BBCAB64E2E6799E23311EAB29104788AF5607 (UIVirtualButton_tA1A6B564C5E71E1B61B240E28958DEB8F79BABBE * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// OutputButtonStateValue(true);
		UIVirtualButton_OutputButtonStateValue_m4D03DEE754B7C8716A55432137E088D08626C8A8(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIVirtualButton::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OnPointerUp_m8928883C1D8EEB4E6BD673089D61C61C15FD6E26 (UIVirtualButton_tA1A6B564C5E71E1B61B240E28958DEB8F79BABBE * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// OutputButtonStateValue(false);
		UIVirtualButton_OutputButtonStateValue_m4D03DEE754B7C8716A55432137E088D08626C8A8(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIVirtualButton::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OnPointerClick_m8C77F496BC858EC51F8BDA3759219187DB267A3F (UIVirtualButton_tA1A6B564C5E71E1B61B240E28958DEB8F79BABBE * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// OutputButtonClickEvent();
		UIVirtualButton_OutputButtonClickEvent_m52515C61D5E82F76620D03994ED97A1F34CBA6F5(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIVirtualButton::OutputButtonStateValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OutputButtonStateValue_m4D03DEE754B7C8716A55432137E088D08626C8A8 (UIVirtualButton_tA1A6B564C5E71E1B61B240E28958DEB8F79BABBE * __this, bool ___buttonState0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m93A9A80D13EE147EB2805A92EFD48453AF727D7F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buttonStateOutputEvent.Invoke(buttonState);
		UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * L_0 = __this->get_buttonStateOutputEvent_4();
		bool L_1 = ___buttonState0;
		NullCheck(L_0);
		UnityEvent_1_Invoke_m93A9A80D13EE147EB2805A92EFD48453AF727D7F(L_0, L_1, /*hidden argument*/UnityEvent_1_Invoke_m93A9A80D13EE147EB2805A92EFD48453AF727D7F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UIVirtualButton::OutputButtonClickEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OutputButtonClickEvent_m52515C61D5E82F76620D03994ED97A1F34CBA6F5 (UIVirtualButton_tA1A6B564C5E71E1B61B240E28958DEB8F79BABBE * __this, const RuntimeMethod* method)
{
	{
		// buttonClickOutputEvent.Invoke();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = __this->get_buttonClickOutputEvent_5();
		NullCheck(L_0);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIVirtualButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton__ctor_mC6B209AB41BF45B6C0B9B30278CDD72DA776983A (UIVirtualButton_tA1A6B564C5E71E1B61B240E28958DEB8F79BABBE * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UIVirtualJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_Start_m67CF1EE6291EACAF0C3A1B0DB535BD525EA479F4 (UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D * __this, const RuntimeMethod* method)
{
	{
		// SetupHandle();
		UIVirtualJoystick_SetupHandle_m0ACFFD29C51B77207E694FD86F4A84338B030207(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIVirtualJoystick::SetupHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_SetupHandle_m0ACFFD29C51B77207E694FD86F4A84338B030207 (UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(handleRect)
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_handleRect_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// UpdateHandleRectPosition(Vector2.zero);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		UIVirtualJoystick_UpdateHandleRectPosition_m316CA3567F5830F9F19C381F20FEF41084740B94(__this, L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void UIVirtualJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_OnPointerDown_mEC473003FA53CFFFBD478CD5E1A3BA3509AE1E12 (UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// OnDrag(eventData);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_0 = ___eventData0;
		UIVirtualJoystick_OnDrag_m4AB1A15DA5C6DB622E55C21E6E7ED263FED7DB77(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIVirtualJoystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_OnDrag_m4AB1A15DA5C6DB622E55C21E6E7ED263FED7DB77 (UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t829C94C0D38759683C2BED9FCE244D5EA9842396_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// RectTransformUtility.ScreenPointToLocalPointInRectangle(containerRect, eventData.position, eventData.pressEventCamera, out Vector2 position);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_containerRect_4();
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_1 = ___eventData0;
		NullCheck(L_1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline(L_1, /*hidden argument*/NULL);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_3 = ___eventData0;
		NullCheck(L_3);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4;
		L_4 = PointerEventData_get_pressEventCamera_m514C040A3C32E269345D0FC8B72BB2FE553FA448(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t829C94C0D38759683C2BED9FCE244D5EA9842396_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m9A7DB8DE3636CE91CDF6CE088A21B5DDF2678F03(L_0, L_2, L_4, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), /*hidden argument*/NULL);
		// position = ApplySizeDelta(position);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = UIVirtualJoystick_ApplySizeDelta_m62A3D273C1B2063E387278930C27828AAAA3D706(__this, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// Vector2 clampedPosition = ClampValuesToMagnitude(position);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = UIVirtualJoystick_ClampValuesToMagnitude_m8B710D2ABFEAB67917267BE7B2E253A5C572907D(__this, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		// Vector2 outputPosition = ApplyInversionFilter(position);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		L_11 = UIVirtualJoystick_ApplyInversionFilter_mD507E46BD99810E9B18F0AD4BDD843FACF70536B(__this, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		// OutputPointerEventValue(outputPosition * magnitudeMultiplier);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12 = V_2;
		float L_13 = __this->get_magnitudeMultiplier_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
		L_14 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_12, L_13, /*hidden argument*/NULL);
		UIVirtualJoystick_OutputPointerEventValue_mD4C7421AB87B90625945F3B8B1F58F611492E64A(__this, L_14, /*hidden argument*/NULL);
		// if(handleRect)
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_15 = __this->get_handleRect_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0063;
		}
	}
	{
		// UpdateHandleRectPosition(clampedPosition * joystickRange);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17 = V_1;
		float L_18 = __this->get_joystickRange_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19;
		L_19 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_17, L_18, /*hidden argument*/NULL);
		UIVirtualJoystick_UpdateHandleRectPosition_m316CA3567F5830F9F19C381F20FEF41084740B94(__this, L_19, /*hidden argument*/NULL);
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void UIVirtualJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_OnPointerUp_m0FAFE18C832E0C2A30ACA560276C017A59863614 (UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OutputPointerEventValue(Vector2.zero);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		UIVirtualJoystick_OutputPointerEventValue_mD4C7421AB87B90625945F3B8B1F58F611492E64A(__this, L_0, /*hidden argument*/NULL);
		// if(handleRect)
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1 = __this->get_handleRect_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// UpdateHandleRectPosition(Vector2.zero);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		UIVirtualJoystick_UpdateHandleRectPosition_m316CA3567F5830F9F19C381F20FEF41084740B94(__this, L_3, /*hidden argument*/NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void UIVirtualJoystick::OutputPointerEventValue(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_OutputPointerEventValue_mD4C7421AB87B90625945F3B8B1F58F611492E64A (UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pointerPosition0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mB4A40E66B8302949068CCFA2E3E1C15F625EA1CD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// joystickOutputEvent.Invoke(pointerPosition);
		UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C * L_0 = __this->get_joystickOutputEvent_10();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___pointerPosition0;
		NullCheck(L_0);
		UnityEvent_1_Invoke_mB4A40E66B8302949068CCFA2E3E1C15F625EA1CD(L_0, L_1, /*hidden argument*/UnityEvent_1_Invoke_mB4A40E66B8302949068CCFA2E3E1C15F625EA1CD_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UIVirtualJoystick::UpdateHandleRectPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_UpdateHandleRectPosition_m316CA3567F5830F9F19C381F20FEF41084740B94 (UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___newPosition0, const RuntimeMethod* method)
{
	{
		// handleRect.anchoredPosition = newPosition;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_handleRect_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___newPosition0;
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 UIVirtualJoystick::ApplySizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  UIVirtualJoystick_ApplySizeDelta_m62A3D273C1B2063E387278930C27828AAAA3D706 (UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// float x = (position.x/containerRect.sizeDelta.x) * 2.5f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___position0;
		float L_1 = L_0.get_x_0();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_2 = __this->get_containerRect_4();
		NullCheck(L_2);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_x_0();
		// float y = (position.y/containerRect.sizeDelta.y) * 2.5f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = ___position0;
		float L_6 = L_5.get_y_1();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_7 = __this->get_containerRect_4();
		NullCheck(L_7);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_y_1();
		V_0 = ((float)il2cpp_codegen_multiply((float)((float)((float)L_6/(float)L_9)), (float)(2.5f)));
		// return new Vector2(x, y);
		float L_10 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_11), ((float)il2cpp_codegen_multiply((float)((float)((float)L_1/(float)L_4)), (float)(2.5f))), L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// UnityEngine.Vector2 UIVirtualJoystick::ClampValuesToMagnitude(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  UIVirtualJoystick_ClampValuesToMagnitude_m8B710D2ABFEAB67917267BE7B2E253A5C572907D (UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position0, const RuntimeMethod* method)
{
	{
		// return Vector2.ClampMagnitude(position, 1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___position0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Vector2_ClampMagnitude_m4FFD90D646E17E41F799FC78FF652A2D75AD5074(L_0, (1.0f), /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Vector2 UIVirtualJoystick::ApplyInversionFilter(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  UIVirtualJoystick_ApplyInversionFilter_mD507E46BD99810E9B18F0AD4BDD843FACF70536B (UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position0, const RuntimeMethod* method)
{
	{
		// if(invertXOutputValue)
		bool L_0 = __this->get_invertXOutputValue_8();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// position.x = InvertValue(position.x);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___position0;
		float L_2 = L_1.get_x_0();
		float L_3;
		L_3 = UIVirtualJoystick_InvertValue_m51B67357EC3DF48051879F1DA61B76F4A4BBD9F7(__this, L_2, /*hidden argument*/NULL);
		(&___position0)->set_x_0(L_3);
	}

IL_001b:
	{
		// if(invertYOutputValue)
		bool L_4 = __this->get_invertYOutputValue_9();
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// position.y = InvertValue(position.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = ___position0;
		float L_6 = L_5.get_y_1();
		float L_7;
		L_7 = UIVirtualJoystick_InvertValue_m51B67357EC3DF48051879F1DA61B76F4A4BBD9F7(__this, L_6, /*hidden argument*/NULL);
		(&___position0)->set_y_1(L_7);
	}

IL_0036:
	{
		// return position;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = ___position0;
		return L_8;
	}
}
// System.Single UIVirtualJoystick::InvertValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UIVirtualJoystick_InvertValue_m51B67357EC3DF48051879F1DA61B76F4A4BBD9F7 (UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// return -value;
		float L_0 = ___value0;
		return ((-L_0));
	}
}
// System.Void UIVirtualJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick__ctor_m3EFA0B88827F62A24F2BFE15B2A782256CFB05F1 (UIVirtualJoystick_tEF0053DAA02EDBA00713D7B29C34394EA7574C2D * __this, const RuntimeMethod* method)
{
	{
		// public float joystickRange = 50f;
		__this->set_joystickRange_6((50.0f));
		// public float magnitudeMultiplier = 1f;
		__this->set_magnitudeMultiplier_7((1.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UIVirtualTouchZone::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_Start_mA98396B89C28AC97493CB9A80630F0459C7C9350 (UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23 * __this, const RuntimeMethod* method)
{
	{
		// SetupHandle();
		UIVirtualTouchZone_SetupHandle_m46D4991D16E65721ED9A06C538841C45A728151D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::SetupHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_SetupHandle_m46D4991D16E65721ED9A06C538841C45A728151D (UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(handleRect)
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_handleRect_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// SetObjectActiveState(handleRect.gameObject, false);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_2 = __this->get_handleRect_5();
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
		UIVirtualTouchZone_SetObjectActiveState_mDB5AA4C0AB194A0009D681F773145E68CB678699(__this, L_3, (bool)0, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_OnPointerDown_mCFB81700E80EAD8CB2402BC894448E8CFF7434E4 (UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t829C94C0D38759683C2BED9FCE244D5EA9842396_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RectTransformUtility.ScreenPointToLocalPointInRectangle(containerRect, eventData.position, eventData.pressEventCamera, out pointerDownPosition);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_containerRect_4();
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_1 = ___eventData0;
		NullCheck(L_1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline(L_1, /*hidden argument*/NULL);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_3 = ___eventData0;
		NullCheck(L_3);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4;
		L_4 = PointerEventData_get_pressEventCamera_m514C040A3C32E269345D0FC8B72BB2FE553FA448(L_3, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_5 = __this->get_address_of_pointerDownPosition_10();
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t829C94C0D38759683C2BED9FCE244D5EA9842396_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m9A7DB8DE3636CE91CDF6CE088A21B5DDF2678F03(L_0, L_2, L_4, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_5, /*hidden argument*/NULL);
		// if(handleRect)
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_7 = __this->get_handleRect_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0049;
		}
	}
	{
		// SetObjectActiveState(handleRect.gameObject, true);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_9 = __this->get_handleRect_5();
		NullCheck(L_9);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_9, /*hidden argument*/NULL);
		UIVirtualTouchZone_SetObjectActiveState_mDB5AA4C0AB194A0009D681F773145E68CB678699(__this, L_10, (bool)1, /*hidden argument*/NULL);
		// UpdateHandleRectPosition(pointerDownPosition);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = __this->get_pointerDownPosition_10();
		UIVirtualTouchZone_UpdateHandleRectPosition_m4D0B42E5C70893DFB5408E623076C9F5B7FE3A7A(__this, L_11, /*hidden argument*/NULL);
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_OnDrag_mAA2371D1A929E0EB173141433B05D2E496433B37 (UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t829C94C0D38759683C2BED9FCE244D5EA9842396_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// RectTransformUtility.ScreenPointToLocalPointInRectangle(containerRect, eventData.position, eventData.pressEventCamera, out currentPointerPosition);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_containerRect_4();
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_1 = ___eventData0;
		NullCheck(L_1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline(L_1, /*hidden argument*/NULL);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_3 = ___eventData0;
		NullCheck(L_3);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4;
		L_4 = PointerEventData_get_pressEventCamera_m514C040A3C32E269345D0FC8B72BB2FE553FA448(L_3, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_5 = __this->get_address_of_currentPointerPosition_11();
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t829C94C0D38759683C2BED9FCE244D5EA9842396_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m9A7DB8DE3636CE91CDF6CE088A21B5DDF2678F03(L_0, L_2, L_4, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_5, /*hidden argument*/NULL);
		// Vector2 positionDelta = GetDeltaBetweenPositions(pointerDownPosition, currentPointerPosition);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = __this->get_pointerDownPosition_10();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = __this->get_currentPointerPosition_11();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = UIVirtualTouchZone_GetDeltaBetweenPositions_mA12C35395F0319B30B47A5791759AB8FE240186A(__this, L_7, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// Vector2 clampedPosition = ClampValuesToMagnitude(positionDelta);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		L_11 = UIVirtualTouchZone_ClampValuesToMagnitude_m2B1CBB4A20BE4004AD520E5EC427C664E9315EFC(__this, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		// Vector2 outputPosition = ApplyInversionFilter(clampedPosition);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13;
		L_13 = UIVirtualTouchZone_ApplyInversionFilter_m8FEABDE5FD0BF979E96732DCF3123203E6B755E3(__this, L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		// OutputPointerEventValue(outputPosition * magnitudeMultiplier);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14 = V_2;
		float L_15 = __this->get_magnitudeMultiplier_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16;
		L_16 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_14, L_15, /*hidden argument*/NULL);
		UIVirtualTouchZone_OutputPointerEventValue_m1ECAF819A22591A0241D790EFC936ECB3985CE68(__this, L_16, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_OnPointerUp_mE65CFD342E3EFCCD3C0ED8596C845E9020042B05 (UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pointerDownPosition = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		__this->set_pointerDownPosition_10(L_0);
		// currentPointerPosition = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		__this->set_currentPointerPosition_11(L_1);
		// OutputPointerEventValue(Vector2.zero);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		UIVirtualTouchZone_OutputPointerEventValue_m1ECAF819A22591A0241D790EFC936ECB3985CE68(__this, L_2, /*hidden argument*/NULL);
		// if(handleRect)
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_3 = __this->get_handleRect_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		// SetObjectActiveState(handleRect.gameObject, false);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_5 = __this->get_handleRect_5();
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		UIVirtualTouchZone_SetObjectActiveState_mDB5AA4C0AB194A0009D681F773145E68CB678699(__this, L_6, (bool)0, /*hidden argument*/NULL);
		// UpdateHandleRectPosition(Vector2.zero);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		UIVirtualTouchZone_UpdateHandleRectPosition_m4D0B42E5C70893DFB5408E623076C9F5B7FE3A7A(__this, L_7, /*hidden argument*/NULL);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::OutputPointerEventValue(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_OutputPointerEventValue_m1ECAF819A22591A0241D790EFC936ECB3985CE68 (UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pointerPosition0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mB4A40E66B8302949068CCFA2E3E1C15F625EA1CD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// touchZoneOutputEvent.Invoke(pointerPosition);
		UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C * L_0 = __this->get_touchZoneOutputEvent_12();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___pointerPosition0;
		NullCheck(L_0);
		UnityEvent_1_Invoke_mB4A40E66B8302949068CCFA2E3E1C15F625EA1CD(L_0, L_1, /*hidden argument*/UnityEvent_1_Invoke_mB4A40E66B8302949068CCFA2E3E1C15F625EA1CD_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::UpdateHandleRectPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_UpdateHandleRectPosition_m4D0B42E5C70893DFB5408E623076C9F5B7FE3A7A (UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___newPosition0, const RuntimeMethod* method)
{
	{
		// handleRect.anchoredPosition = newPosition;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_handleRect_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___newPosition0;
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::SetObjectActiveState(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_SetObjectActiveState_mDB5AA4C0AB194A0009D681F773145E68CB678699 (UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___targetObject0, bool ___newState1, const RuntimeMethod* method)
{
	{
		// targetObject.SetActive(newState);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___targetObject0;
		bool L_1 = ___newState1;
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 UIVirtualTouchZone::GetDeltaBetweenPositions(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  UIVirtualTouchZone_GetDeltaBetweenPositions_mA12C35395F0319B30B47A5791759AB8FE240186A (UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___firstPosition0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___secondPosition1, const RuntimeMethod* method)
{
	{
		// return secondPosition - firstPosition;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___secondPosition1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___firstPosition0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector2 UIVirtualTouchZone::ClampValuesToMagnitude(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  UIVirtualTouchZone_ClampValuesToMagnitude_m2B1CBB4A20BE4004AD520E5EC427C664E9315EFC (UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position0, const RuntimeMethod* method)
{
	{
		// return Vector2.ClampMagnitude(position, 1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___position0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Vector2_ClampMagnitude_m4FFD90D646E17E41F799FC78FF652A2D75AD5074(L_0, (1.0f), /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Vector2 UIVirtualTouchZone::ApplyInversionFilter(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  UIVirtualTouchZone_ApplyInversionFilter_m8FEABDE5FD0BF979E96732DCF3123203E6B755E3 (UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position0, const RuntimeMethod* method)
{
	{
		// if(invertXOutputValue)
		bool L_0 = __this->get_invertXOutputValue_8();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// position.x = InvertValue(position.x);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___position0;
		float L_2 = L_1.get_x_0();
		float L_3;
		L_3 = UIVirtualTouchZone_InvertValue_m5B003E6987A1518CEB604D6B1796A58DE5D04E4A(__this, L_2, /*hidden argument*/NULL);
		(&___position0)->set_x_0(L_3);
	}

IL_001b:
	{
		// if(invertYOutputValue)
		bool L_4 = __this->get_invertYOutputValue_9();
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// position.y = InvertValue(position.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = ___position0;
		float L_6 = L_5.get_y_1();
		float L_7;
		L_7 = UIVirtualTouchZone_InvertValue_m5B003E6987A1518CEB604D6B1796A58DE5D04E4A(__this, L_6, /*hidden argument*/NULL);
		(&___position0)->set_y_1(L_7);
	}

IL_0036:
	{
		// return position;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = ___position0;
		return L_8;
	}
}
// System.Single UIVirtualTouchZone::InvertValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UIVirtualTouchZone_InvertValue_m5B003E6987A1518CEB604D6B1796A58DE5D04E4A (UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// return -value;
		float L_0 = ___value0;
		return ((-L_0));
	}
}
// System.Void UIVirtualTouchZone::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone__ctor_m74665B8EF96FBD3D7C35B545E662FEE10C11A2A8 (UIVirtualTouchZone_t2EB72E6BED3964232BD92D6723DEA7BA013BED23 * __this, const RuntimeMethod* method)
{
	{
		// public float magnitudeMultiplier = 1f;
		__this->set_magnitudeMultiplier_7((1.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void VrController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrController_Start_m589D7055282D2CDC041F70FA35DB33D18772BBF9 (VrController_t9D294004F7B066441C2096202E12A80D9B7D5CEE * __this, const RuntimeMethod* method)
{
	{
		// gV1 = g1.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_g1_4();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		__this->set_gV1_6(L_2);
		// gV2 = g2.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_g2_5();
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		__this->set_gV2_7(L_5);
		// }
		return;
	}
}
// System.Void VrController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrController_FixedUpdate_m72B6EBDA2CB6401816A03BDEAA889E38FC8BF6AE (VrController_t9D294004F7B066441C2096202E12A80D9B7D5CEE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Ray ray = new Ray (transform.position, transform.forward);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_2, /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((&L_4), L_1, L_3, /*hidden argument*/NULL);
		// if (Physics.Raycast (ray, out hit)) {
		bool L_5;
		L_5 = Physics_Raycast_m80EC8EEDA0ABA8B01838BA9054834CD1A381916E(L_4, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_01fd;
		}
	}
	{
		// if (hit.transform.gameObject == g1) {
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_g1_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0112;
		}
	}
	{
		// g1.GetComponent<MeshRenderer> ().material.color = Color.red;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_g1_4();
		NullCheck(L_10);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_11;
		L_11 = GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B(L_10, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B_RuntimeMethod_var);
		NullCheck(L_11);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_12;
		L_12 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_11, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_13;
		L_13 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		NullCheck(L_12);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_12, L_13, /*hidden argument*/NULL);
		// g1.transform.position = Vector3.MoveTowards (g1.transform.position, new Vector3 (g1.transform.position.x, g1.transform.position.y, 2.5f), Time.deltaTime * 1f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_g1_4();
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_14, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_g1_4();
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_17, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = __this->get_g1_4();
		NullCheck(L_19);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_20, /*hidden argument*/NULL);
		float L_22 = L_21.get_x_2();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = __this->get_g1_4();
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_24, /*hidden argument*/NULL);
		float L_26 = L_25.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_27), L_22, L_26, (2.5f), /*hidden argument*/NULL);
		float L_28;
		L_28 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796(L_18, L_27, ((float)il2cpp_codegen_multiply((float)L_28, (float)(1.0f))), /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_15, L_29, /*hidden argument*/NULL);
		// g2.GetComponent<MeshRenderer> ().material.color = Color.green;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = __this->get_g2_5();
		NullCheck(L_30);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_31;
		L_31 = GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B(L_30, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B_RuntimeMethod_var);
		NullCheck(L_31);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_32;
		L_32 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_31, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_33;
		L_33 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		NullCheck(L_32);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_32, L_33, /*hidden argument*/NULL);
		// g2.transform.position = Vector3.MoveTowards (g2.transform.position, gV2, Time.deltaTime * 1f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34 = __this->get_g2_5();
		NullCheck(L_34);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_34, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36 = __this->get_g2_5();
		NullCheck(L_36);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_37, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39 = __this->get_gV2_7();
		float L_40;
		L_40 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796(L_38, L_39, ((float)il2cpp_codegen_multiply((float)L_40, (float)(1.0f))), /*hidden argument*/NULL);
		NullCheck(L_35);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_35, L_41, /*hidden argument*/NULL);
		// } else if (hit.transform.gameObject == g2) {
		return;
	}

IL_0112:
	{
		// } else if (hit.transform.gameObject == g2) {
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42;
		L_42 = RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_42);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43;
		L_43 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_42, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44 = __this->get_g2_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_45;
		L_45 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_43, L_44, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_029d;
		}
	}
	{
		// g1.GetComponent<MeshRenderer> ().material.color = Color.green;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_46 = __this->get_g1_4();
		NullCheck(L_46);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_47;
		L_47 = GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B(L_46, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B_RuntimeMethod_var);
		NullCheck(L_47);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_48;
		L_48 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_47, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_49;
		L_49 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		NullCheck(L_48);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_48, L_49, /*hidden argument*/NULL);
		// g1.transform.position = Vector3.MoveTowards (g1.transform.position,gV1, Time.deltaTime * 1f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_50 = __this->get_g1_4();
		NullCheck(L_50);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_51;
		L_51 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_50, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_52 = __this->get_g1_4();
		NullCheck(L_52);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_53;
		L_53 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_52, /*hidden argument*/NULL);
		NullCheck(L_53);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54;
		L_54 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_53, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55 = __this->get_gV1_6();
		float L_56;
		L_56 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
		L_57 = Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796(L_54, L_55, ((float)il2cpp_codegen_multiply((float)L_56, (float)(1.0f))), /*hidden argument*/NULL);
		NullCheck(L_51);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_51, L_57, /*hidden argument*/NULL);
		// g2.GetComponent<MeshRenderer> ().material.color = Color.red;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_58 = __this->get_g2_5();
		NullCheck(L_58);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_59;
		L_59 = GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B(L_58, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B_RuntimeMethod_var);
		NullCheck(L_59);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_60;
		L_60 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_59, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_61;
		L_61 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		NullCheck(L_60);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_60, L_61, /*hidden argument*/NULL);
		// g2.transform.position = Vector3.MoveTowards (g2.transform.position, new Vector3 (g2.transform.position.x, g2.transform.position.y, 2.5f), Time.deltaTime * 1f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_62 = __this->get_g2_5();
		NullCheck(L_62);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_63;
		L_63 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_62, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_64 = __this->get_g2_5();
		NullCheck(L_64);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_65;
		L_65 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_64, /*hidden argument*/NULL);
		NullCheck(L_65);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66;
		L_66 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_65, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_67 = __this->get_g2_5();
		NullCheck(L_67);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_68;
		L_68 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_67, /*hidden argument*/NULL);
		NullCheck(L_68);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_69;
		L_69 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_68, /*hidden argument*/NULL);
		float L_70 = L_69.get_x_2();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_71 = __this->get_g2_5();
		NullCheck(L_71);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_72;
		L_72 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_71, /*hidden argument*/NULL);
		NullCheck(L_72);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_73;
		L_73 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_72, /*hidden argument*/NULL);
		float L_74 = L_73.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_75;
		memset((&L_75), 0, sizeof(L_75));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_75), L_70, L_74, (2.5f), /*hidden argument*/NULL);
		float L_76;
		L_76 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_77;
		L_77 = Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796(L_66, L_75, ((float)il2cpp_codegen_multiply((float)L_76, (float)(1.0f))), /*hidden argument*/NULL);
		NullCheck(L_63);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_63, L_77, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_01fd:
	{
		// g1.GetComponent<MeshRenderer> ().material.color = Color.green;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_78 = __this->get_g1_4();
		NullCheck(L_78);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_79;
		L_79 = GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B(L_78, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B_RuntimeMethod_var);
		NullCheck(L_79);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_80;
		L_80 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_79, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_81;
		L_81 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		NullCheck(L_80);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_80, L_81, /*hidden argument*/NULL);
		// g1.transform.position = Vector3.MoveTowards (g1.transform.position, gV1, Time.deltaTime * 1f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_82 = __this->get_g1_4();
		NullCheck(L_82);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_83;
		L_83 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_82, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_84 = __this->get_g1_4();
		NullCheck(L_84);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_85;
		L_85 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_84, /*hidden argument*/NULL);
		NullCheck(L_85);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_86;
		L_86 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_85, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_87 = __this->get_gV1_6();
		float L_88;
		L_88 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_89;
		L_89 = Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796(L_86, L_87, ((float)il2cpp_codegen_multiply((float)L_88, (float)(1.0f))), /*hidden argument*/NULL);
		NullCheck(L_83);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_83, L_89, /*hidden argument*/NULL);
		// g2.GetComponent<MeshRenderer> ().material.color = Color.green;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_90 = __this->get_g2_5();
		NullCheck(L_90);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_91;
		L_91 = GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B(L_90, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B_RuntimeMethod_var);
		NullCheck(L_91);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_92;
		L_92 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_91, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_93;
		L_93 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		NullCheck(L_92);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_92, L_93, /*hidden argument*/NULL);
		// g2.transform.position = Vector3.MoveTowards (g2.transform.position, gV2, Time.deltaTime * 1f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_94 = __this->get_g2_5();
		NullCheck(L_94);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_95;
		L_95 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_94, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_96 = __this->get_g2_5();
		NullCheck(L_96);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_97;
		L_97 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_96, /*hidden argument*/NULL);
		NullCheck(L_97);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_98;
		L_98 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_97, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_99 = __this->get_gV2_7();
		float L_100;
		L_100 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_101;
		L_101 = Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796(L_98, L_99, ((float)il2cpp_codegen_multiply((float)L_100, (float)(1.0f))), /*hidden argument*/NULL);
		NullCheck(L_95);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_95, L_101, /*hidden argument*/NULL);
	}

IL_029d:
	{
		// }
		return;
	}
}
// System.Void VrController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrController__ctor_m3B0F7B6339C66B3E42C5FE400D8BBA42F1CD76A1 (VrController_t9D294004F7B066441C2096202E12A80D9B7D5CEE * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_VREventCallback_t444A75B727155FF2FA8CFADA55D677E27E0387D1 (VREventCallback_t444A75B727155FF2FA8CFADA55D677E27E0387D1 * __this, int32_t ___eventID0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___eventID0);

}
// System.Void BaseCardboardDevice/VREventCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VREventCallback__ctor_mDB14688F99ACA0931F546EFEF858A9167DA60E1D (VREventCallback_t444A75B727155FF2FA8CFADA55D677E27E0387D1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void BaseCardboardDevice/VREventCallback::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VREventCallback_Invoke_m409488454470CB0A0B7D7500866EE6933D4344A6 (VREventCallback_t444A75B727155FF2FA8CFADA55D677E27E0387D1 * __this, int32_t ___eventID0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___eventID0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___eventID0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___eventID0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___eventID0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___eventID0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___eventID0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___eventID0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult BaseCardboardDevice/VREventCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VREventCallback_BeginInvoke_m3F4E2777F6D57FCC3D15653205BBA2D217D8479A (VREventCallback_t444A75B727155FF2FA8CFADA55D677E27E0387D1 * __this, int32_t ___eventID0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___eventID0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void BaseCardboardDevice/VREventCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VREventCallback_EndInvoke_mC79393FB90A704197FCEA25E0E933DCDF519A2EE (VREventCallback_t444A75B727155FF2FA8CFADA55D677E27E0387D1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void Cardboard/StereoScreenChangeDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StereoScreenChangeDelegate__ctor_mAEB968CA3A72A6C29AF98AEA617032C50A1039D6 (StereoScreenChangeDelegate_t6B70660959C797AFA101F9F26D0A5698B0026EF8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Cardboard/StereoScreenChangeDelegate::Invoke(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StereoScreenChangeDelegate_Invoke_m7FD3D24E585D3BE07E970DD77D7F1D9F15165119 (StereoScreenChangeDelegate_t6B70660959C797AFA101F9F26D0A5698B0026EF8 * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___newStereoScreen0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___newStereoScreen0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___newStereoScreen0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___newStereoScreen0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___newStereoScreen0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___newStereoScreen0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___newStereoScreen0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___newStereoScreen0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * >::Invoke(targetMethod, targetThis, ___newStereoScreen0);
					else
						GenericVirtActionInvoker1< RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * >::Invoke(targetMethod, targetThis, ___newStereoScreen0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___newStereoScreen0);
					else
						VirtActionInvoker1< RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___newStereoScreen0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___newStereoScreen0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___newStereoScreen0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Cardboard/StereoScreenChangeDelegate::BeginInvoke(UnityEngine.RenderTexture,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StereoScreenChangeDelegate_BeginInvoke_m78FBCF14836A667EC7A9EFFBDF21E481077EDC74 (StereoScreenChangeDelegate_t6B70660959C797AFA101F9F26D0A5698B0026EF8 * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___newStereoScreen0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___newStereoScreen0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Cardboard/StereoScreenChangeDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StereoScreenChangeDelegate_EndInvoke_m796C4DE021CE0DD281922042F70EAED77BE6FF82 (StereoScreenChangeDelegate_t6B70660959C797AFA101F9F26D0A5698B0026EF8 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CardboardHead/HeadUpdatedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadUpdatedDelegate__ctor_mA75688B3D0A2AFBF100E1B7340BA7FCC2DA2B4D3 (HeadUpdatedDelegate_tB7C7FC2C27C3EB039350DAF0361C13FA12441FC1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void CardboardHead/HeadUpdatedDelegate::Invoke(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadUpdatedDelegate_Invoke_mDF659DA8FB9BA023AE1C75D4ABD0792F1FFDB85F (HeadUpdatedDelegate_tB7C7FC2C27C3EB039350DAF0361C13FA12441FC1 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___head0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___head0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___head0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___head0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___head0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___head0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___head0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___head0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(targetMethod, targetThis, ___head0);
					else
						GenericVirtActionInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(targetMethod, targetThis, ___head0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___head0);
					else
						VirtActionInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___head0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___head0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___head0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult CardboardHead/HeadUpdatedDelegate::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HeadUpdatedDelegate_BeginInvoke_m51AF29AAF32F8DEB97B7FD10EEC78DA67676D0E6 (HeadUpdatedDelegate_tB7C7FC2C27C3EB039350DAF0361C13FA12441FC1 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___head0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___head0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void CardboardHead/HeadUpdatedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadUpdatedDelegate_EndInvoke_m486C04EA07B00CFFB2CA5A72873D806CEAD8F63F (HeadUpdatedDelegate_tB7C7FC2C27C3EB039350DAF0361C13FA12441FC1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnGUICallback_t6E54053C3D6F915C472341FA973EFA12EDFDB5C8 (OnGUICallback_t6E54053C3D6F915C472341FA973EFA12EDFDB5C8 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void CardboardOnGUI/OnGUICallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnGUICallback__ctor_mB781DECF5BCF626D27527F6BEFA739979FAB58A3 (OnGUICallback_t6E54053C3D6F915C472341FA973EFA12EDFDB5C8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void CardboardOnGUI/OnGUICallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnGUICallback_Invoke_m4F411CE26871DC1A160D295F18A23BEFEB485873 (OnGUICallback_t6E54053C3D6F915C472341FA973EFA12EDFDB5C8 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult CardboardOnGUI/OnGUICallback::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnGUICallback_BeginInvoke_m31B66BC2A0E94D8DF556050D5DDCFEF9D141CE83 (OnGUICallback_t6E54053C3D6F915C472341FA973EFA12EDFDB5C8 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void CardboardOnGUI/OnGUICallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnGUICallback_EndInvoke_m2B5BBB5B8DF10826C6F3D8BE033E0E92DCB3E611 (OnGUICallback_t6E54053C3D6F915C472341FA973EFA12EDFDB5C8 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single CardboardProfile/Distortion::distort(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Distortion_distort_m2572328562A7DBE75ABD0BB4EFF1200DD44F2C75 (Distortion_t184AC024B295F25002A11CF09BB207500C24B887 * __this, float ___r0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// float r2 = r * r;
		float L_0 = ___r0;
		float L_1 = ___r0;
		V_0 = ((float)il2cpp_codegen_multiply((float)L_0, (float)L_1));
		// return ((k2 * r2 + k1) * r2 + 1) * r;
		float L_2 = __this->get_k2_1();
		float L_3 = V_0;
		float L_4 = __this->get_k1_0();
		float L_5 = V_0;
		float L_6 = ___r0;
		return ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)), (float)L_4)), (float)L_5)), (float)(1.0f))), (float)L_6));
	}
}
IL2CPP_EXTERN_C  float Distortion_distort_m2572328562A7DBE75ABD0BB4EFF1200DD44F2C75_AdjustorThunk (RuntimeObject * __this, float ___r0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Distortion_t184AC024B295F25002A11CF09BB207500C24B887 * _thisAdjusted = reinterpret_cast<Distortion_t184AC024B295F25002A11CF09BB207500C24B887 *>(__this + _offset);
	float _returnValue;
	_returnValue = Distortion_distort_m2572328562A7DBE75ABD0BB4EFF1200DD44F2C75(_thisAdjusted, ___r0, method);
	return _returnValue;
}
// System.Single CardboardProfile/Distortion::distortInv(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Distortion_distortInv_mCA9A254AFD7B8840B3008913173FBC855628B835 (Distortion_t184AC024B295F25002A11CF09BB207500C24B887 * __this, float ___radius0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// float r0 = 0;
		V_0 = (0.0f);
		// float r1 = 1;
		V_1 = (1.0f);
		// float dr0 = radius - distort(r0);
		float L_0 = ___radius0;
		float L_1 = V_0;
		float L_2;
		L_2 = Distortion_distort_m2572328562A7DBE75ABD0BB4EFF1200DD44F2C75((Distortion_t184AC024B295F25002A11CF09BB207500C24B887 *)__this, L_1, /*hidden argument*/NULL);
		V_2 = ((float)il2cpp_codegen_subtract((float)L_0, (float)L_2));
		goto IL_0032;
	}

IL_0018:
	{
		// float dr1 = radius - distort(r1);
		float L_3 = ___radius0;
		float L_4 = V_1;
		float L_5;
		L_5 = Distortion_distort_m2572328562A7DBE75ABD0BB4EFF1200DD44F2C75((Distortion_t184AC024B295F25002A11CF09BB207500C24B887 *)__this, L_4, /*hidden argument*/NULL);
		V_3 = ((float)il2cpp_codegen_subtract((float)L_3, (float)L_5));
		// float r2 = r1 - dr1 * ((r1 - r0) / (dr1 - dr0));
		float L_6 = V_1;
		float L_7 = V_3;
		float L_8 = V_1;
		float L_9 = V_0;
		float L_10 = V_3;
		float L_11 = V_2;
		// r0 = r1;
		float L_12 = V_1;
		V_0 = L_12;
		// r1 = r2;
		V_1 = ((float)il2cpp_codegen_subtract((float)L_6, (float)((float)il2cpp_codegen_multiply((float)L_7, (float)((float)((float)((float)il2cpp_codegen_subtract((float)L_8, (float)L_9))/(float)((float)il2cpp_codegen_subtract((float)L_10, (float)L_11))))))));
		// dr0 = dr1;
		float L_13 = V_3;
		V_2 = L_13;
	}

IL_0032:
	{
		// while (Mathf.Abs(r1 - r0) > 0.0001f) {
		float L_14 = V_1;
		float L_15 = V_0;
		float L_16;
		L_16 = fabsf(((float)il2cpp_codegen_subtract((float)L_14, (float)L_15)));
		if ((((float)L_16) > ((float)(9.99999975E-05f))))
		{
			goto IL_0018;
		}
	}
	{
		// return r1;
		float L_17 = V_1;
		return L_17;
	}
}
IL2CPP_EXTERN_C  float Distortion_distortInv_mCA9A254AFD7B8840B3008913173FBC855628B835_AdjustorThunk (RuntimeObject * __this, float ___radius0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Distortion_t184AC024B295F25002A11CF09BB207500C24B887 * _thisAdjusted = reinterpret_cast<Distortion_t184AC024B295F25002A11CF09BB207500C24B887 *>(__this + _offset);
	float _returnValue;
	_returnValue = Distortion_distortInv_mCA9A254AFD7B8840B3008913173FBC855628B835(_thisAdjusted, ___radius0, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Readme/Section::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_mBAD5262A353BC071C61B8DB462A3D4D5AB5C7C4E (Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StereoController/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA6BFF8F3E2EC573F360BF5905D7322F6C5A716C6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t032D85B1EF01CB57D96548AB107EAB3B1C09A434_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t032D85B1EF01CB57D96548AB107EAB3B1C09A434 * L_0 = (U3CU3Ec_t032D85B1EF01CB57D96548AB107EAB3B1C09A434 *)il2cpp_codegen_object_new(U3CU3Ec_t032D85B1EF01CB57D96548AB107EAB3B1C09A434_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m26F209692A374E24456989F62AB37839CCB84E1E(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t032D85B1EF01CB57D96548AB107EAB3B1C09A434_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t032D85B1EF01CB57D96548AB107EAB3B1C09A434_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void StereoController/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m26F209692A374E24456989F62AB37839CCB84E1E (U3CU3Ec_t032D85B1EF01CB57D96548AB107EAB3B1C09A434 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// CardboardHead StereoController/<>c::<get_Head>b__18_0(CardboardEye)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CardboardHead_t71133BBC784C92F40ED0B6CD29EE9D84B9D0329C * U3CU3Ec_U3Cget_HeadU3Eb__18_0_m2EFA185C0C27A0FCB53099CCEBF6CD407020D105 (U3CU3Ec_t032D85B1EF01CB57D96548AB107EAB3B1C09A434 * __this, CardboardEye_t32ED6741BF22447FFE5D7EDF81B466BEBAA4C780 * ___eye0, const RuntimeMethod* method)
{
	{
		// head = Eyes.Select(eye => eye.Head).FirstOrDefault();
		CardboardEye_t32ED6741BF22447FFE5D7EDF81B466BEBAA4C780 * L_0 = ___eye0;
		NullCheck(L_0);
		CardboardHead_t71133BBC784C92F40ED0B6CD29EE9D84B9D0329C * L_1;
		L_1 = CardboardEye_get_Head_m723993D8B707314E65689AF83F59CA7C9D253088(L_0, /*hidden argument*/NULL);
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
// System.Void StereoController/<EndOfFrame>d__32::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEndOfFrameU3Ed__32__ctor_m76EAF6F89BD974FDE9D8766ED0A61AA6F1453DF5 (U3CEndOfFrameU3Ed__32_tF348F9B5FB6F2FC8F16A1AEA2155CFFBA309980F * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void StereoController/<EndOfFrame>d__32::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEndOfFrameU3Ed__32_System_IDisposable_Dispose_mC226C18A4544ED565B5CA8E49F24867058C38A5F (U3CEndOfFrameU3Ed__32_tF348F9B5FB6F2FC8F16A1AEA2155CFFBA309980F * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean StereoController/<EndOfFrame>d__32::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEndOfFrameU3Ed__32_MoveNext_m8A83934F6B8E7FC8323FC77A5D03258EF77539FD (U3CEndOfFrameU3Ed__32_tF348F9B5FB6F2FC8F16A1AEA2155CFFBA309980F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StereoController_t4A27502B3E84039EC0E267357EA04E4BA485927F * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		StereoController_t4A27502B3E84039EC0E267357EA04E4BA485927F * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_004d;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_001e:
	{
		// if (renderedStereo) {
		StereoController_t4A27502B3E84039EC0E267357EA04E4BA485927F * L_4 = V_1;
		NullCheck(L_4);
		bool L_5 = L_4->get_renderedStereo_16();
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		// cam.enabled = true;
		StereoController_t4A27502B3E84039EC0E267357EA04E4BA485927F * L_6 = V_1;
		NullCheck(L_6);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_7;
		L_7 = StereoController_get_cam_m727A97B2B124447216C1687905A69D462BC06111_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_7, (bool)1, /*hidden argument*/NULL);
		// renderedStereo = false;
		StereoController_t4A27502B3E84039EC0E267357EA04E4BA485927F * L_8 = V_1;
		NullCheck(L_8);
		L_8->set_renderedStereo_16((bool)0);
	}

IL_0039:
	{
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_9 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_9, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_9);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_004d:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true) {
		goto IL_001e;
	}
}
// System.Object StereoController/<EndOfFrame>d__32::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CEndOfFrameU3Ed__32_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5E66E051F3179E717C169686BFEED72938F50B85 (U3CEndOfFrameU3Ed__32_tF348F9B5FB6F2FC8F16A1AEA2155CFFBA309980F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void StereoController/<EndOfFrame>d__32::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEndOfFrameU3Ed__32_System_Collections_IEnumerator_Reset_m1B5B3E2A37905B20E0D84C9DBA69EC05811FEE07 (U3CEndOfFrameU3Ed__32_tF348F9B5FB6F2FC8F16A1AEA2155CFFBA309980F * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEndOfFrameU3Ed__32_System_Collections_IEnumerator_Reset_m1B5B3E2A37905B20E0D84C9DBA69EC05811FEE07_RuntimeMethod_var)));
	}
}
// System.Object StereoController/<EndOfFrame>d__32::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CEndOfFrameU3Ed__32_System_Collections_IEnumerator_get_Current_m9F6481087A748EF565CF3C0FF782D21176C340E4 (U3CEndOfFrameU3Ed__32_tF348F9B5FB6F2FC8F16A1AEA2155CFFBA309980F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline (float ___d0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a1;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a1;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a1;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cardboard_get_BackButtonPressed_mF3853483DEA1442427C90031EC8C32F4582B1BA5_inline (Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D * __this, const RuntimeMethod* method)
{
	{
		// public bool BackButtonPressed { get; private set; }
		bool L_0 = __this->get_U3CBackButtonPressedU3Ek__BackingField_33();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cardboard_get_VRModeEnabled_mEBD4C3D86F53491981B408BA3E899166BA062582_inline (Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D * __this, const RuntimeMethod* method)
{
	{
		// return vrModeEnabled;
		bool L_0 = __this->get_vrModeEnabled_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CardboardOnGUI_set_IsGUIVisible_mDADFAFA8C3DBCA60B6CD9A837D90BAD2B9718954_inline (bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CardboardOnGUI_t2799612520A94714953D63D0CF556712A093F7DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isGUIVisible = value;
		bool L_0 = ___value0;
		((CardboardOnGUI_t2799612520A94714953D63D0CF556712A093F7DF_StaticFields*)il2cpp_codegen_static_fields_for(CardboardOnGUI_t2799612520A94714953D63D0CF556712A093F7DF_il2cpp_TypeInfo_var))->set_isGUIVisible_6(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cardboard_get_Triggered_m52A99E7475AF36707CA06F1C51D340C97BC0C7A9_inline (Cardboard_t9281A9829C88E7BC2349A5ED158B9BBAF6EA064D * __this, const RuntimeMethod* method)
{
	{
		// public bool Triggered { get; private set; }
		bool L_0 = __this->get_U3CTriggeredU3Ek__BackingField_30();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___lhs0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___rhs1;
		float L_3 = L_2.get_x_0();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___lhs0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___rhs1;
		float L_7 = L_6.get_y_1();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)), (float)((float)il2cpp_codegen_multiply((float)L_10, (float)L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mA9E4245E487F3051F0EBF086646A1C341213D24E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___lhs0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0_inline(L_0, L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_MoveInput_m17B8532D1DB7D870295DE9E82CBC17735F8984F8_inline (StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___newMoveDirection0, const RuntimeMethod* method)
{
	{
		// move = newMoveDirection;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___newMoveDirection0;
		__this->set_move_4(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_LookInput_m3B98228935C1AD2E76356732A798A3EFD8CA4186_inline (StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___newLookDirection0, const RuntimeMethod* method)
{
	{
		// look = newLookDirection;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___newLookDirection0;
		__this->set_look_5(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_JumpInput_mEEC05639651E0D3AD679B923D34C3B58F52EC722_inline (StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * __this, bool ___newJumpState0, const RuntimeMethod* method)
{
	{
		// jump = newJumpState;
		bool L_0 = ___newJumpState0;
		__this->set_jump_6(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_SprintInput_m4A4EB5B45A168786D74E233577623FC38D74E4F3_inline (StarterAssetsInputs_tE7DDADB7E0E59B93F86B819E96C2523BC28F16DC * __this, bool ___newSprintState0, const RuntimeMethod* method)
{
	{
		// sprint = newSprintState;
		bool L_0 = ___newSprintState0;
		__this->set_sprint_7(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 position { get; set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_U3CpositionU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * StereoController_get_cam_m727A97B2B124447216C1687905A69D462BC06111_inline (StereoController_t4A27502B3E84039EC0E267357EA04E4BA485927F * __this, const RuntimeMethod* method)
{
	{
		// public Camera cam { get; private set; }
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = __this->get_U3CcamU3Ek__BackingField_19();
		return L_0;
	}
}
