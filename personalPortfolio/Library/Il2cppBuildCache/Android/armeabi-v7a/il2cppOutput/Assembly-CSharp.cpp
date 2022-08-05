#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// System.Collections.Generic.IEnumerable`1<Building>
struct IEnumerable_1_tEC6544A30314593086623E2941262DE8A238CD8A;
// System.Collections.Generic.IEnumerable`1<Character>
struct IEnumerable_1_tC0E16404BDCAC43EEE49FD671FCA175FF128DE05;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.List`1<Building>
struct List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE;
// System.Collections.Generic.List`1<Castle>
struct List_1_t82C8BE4340B2B0C5DB5EB0BC5EA0751F69E2B1A4;
// System.Collections.Generic.List`1<Character>
struct List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// AI[]
struct AIU5BU5D_tDC519424C0BF13D583E3E51705FC1F919D1B4A8F;
// Building[]
struct BuildingU5BU5D_tCB5AB568D849E6934CDC724E3EE2A4F93F735AAF;
// Castle[]
struct CastleU5BU5D_tD3A4A4C80F7A9726A41282B375F7B2D3F0CE1152;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// Character[]
struct CharacterU5BU5D_tC3A59DF23B17172AA72162D97D092689E416F84F;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
// UnityEngine.MeshRenderer[]
struct MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.SkinnedMeshRenderer[]
struct SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.Touch[]
struct TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2;
// AI
struct AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// Archer
struct Archer_t4C3B2405C88227C59EE61DB1A03C516282BCE6CB;
// ArcherBuilding
struct ArcherBuilding_t927C6CDC9E67F62A4616818F8C55BBBE987840C2;
// ArcherHero
struct ArcherHero_tE7562C3518DA3F2A90CDE1B5A445CE2900D74B9A;
// Arrow
struct Arrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// AttackBuilding
struct AttackBuilding_t35CB28B6CDF4EFB4E3A43E9864DB4A2BF03C15C7;
// AttackTower
struct AttackTower_tBF17BD5CA09AC68FFDD23BB9D4F5E2DDF0059B6D;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// UnityEngine.BoxCollider
struct BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5;
// Building
struct Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// Castle
struct Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57;
// Character
struct Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
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
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// LevelManager
struct LevelManager_t010B312A2B35B45291F58195216ABB5673174961;
// MakeBuilding
struct MakeBuilding_tA7888BB568D7BDF05AF62A24D5F3C03075D9894C;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B;
// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Player
struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// PoolManager
struct PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// SkillManager
struct SkillManager_t922C3F2076730BE87514F83311A3752C621F7278;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496;
// System.String
struct String_t;
// TeamManager
struct TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535;
// TouchManager
struct TouchManager_t251D826C6882E59C9018F77827CBC73959F7A9D1;
// TouchPad
struct TouchPad_t0BAA54FA8F10C824858FE60E2D158A2D935E026A;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// Warrior
struct Warrior_tECD1FF939DB86C416627FC8DB54EAC1B03B3F3F8;
// WarriorBuilding
struct WarriorBuilding_t4BA6BADAF2F807D1774E0C44DD7D1FE49A31F306;
// WarriorHero
struct WarriorHero_t2FE6F90D6212AB1A498E1249F2F9CCE1406050D9;
// AI/<AIState>d__12
struct U3CAIStateU3Ed__12_tD220B377E4D70D3154CA17E2D0B34F0C86A63BE3;
// AttackBuilding/<AttackTarget>d__13
struct U3CAttackTargetU3Ed__13_t28A1D1583ACED10AC092FC6F857F4BCA92D34023;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// Character/<SpeedUpCoro>d__63
struct U3CSpeedUpCoroU3Ed__63_t45326A9F21E161301051820A730C323510A7B31F;
// LevelManager/<Enemybuilding2Set>d__8
struct U3CEnemybuilding2SetU3Ed__8_t17E56F4A18DD4E1399A799ADD9F1D148CD114BE1;
// LevelManager/<EnemybuildingSet>d__7
struct U3CEnemybuildingSetU3Ed__7_t20A60B7D3B834C10E98F383200134D5E79A02AB4;
// LevelManager/<MybuildingSet>d__6
struct U3CMybuildingSetU3Ed__6_t825B2195F8CA034AB14A2A33E75296F67E232F9B;
// MakeBuilding/<MakeUnit>d__9
struct U3CMakeUnitU3Ed__9_t2F3D2193F6AFC4430320A08AE68D149BD13B8785;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// SkillManager/Buff
struct Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6;
// TeamManager/BuildingWork
struct BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF;

IL2CPP_EXTERN_C RuntimeClass* ArcherHero_tE7562C3518DA3F2A90CDE1B5A445CE2900D74B9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LevelManager_t010B312A2B35B45291F58195216ABB5673174961_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t82C8BE4340B2B0C5DB5EB0BC5EA0751F69E2B1A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SkillManager_t922C3F2076730BE87514F83311A3752C621F7278_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TouchPad_t0BAA54FA8F10C824858FE60E2D158A2D935E026A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAIStateU3Ed__12_tD220B377E4D70D3154CA17E2D0B34F0C86A63BE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAttackTargetU3Ed__13_t28A1D1583ACED10AC092FC6F857F4BCA92D34023_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEnemybuilding2SetU3Ed__8_t17E56F4A18DD4E1399A799ADD9F1D148CD114BE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEnemybuildingSetU3Ed__7_t20A60B7D3B834C10E98F383200134D5E79A02AB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMakeUnitU3Ed__9_t2F3D2193F6AFC4430320A08AE68D149BD13B8785_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMybuildingSetU3Ed__6_t825B2195F8CA034AB14A2A33E75296F67E232F9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpeedUpCoroU3Ed__63_t45326A9F21E161301051820A730C323510A7B31F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WarriorHero_t2FE6F90D6212AB1A498E1249F2F9CCE1406050D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral08EF1409295A748F17C961491378A3B6215AA838;
IL2CPP_EXTERN_C String_t* _stringLiteral11874EA980D0109E3A7A6EF131C8A02D167E7564;
IL2CPP_EXTERN_C String_t* _stringLiteral224F8DFCD7E66469D16DA5A2CCD3A28D27C9D893;
IL2CPP_EXTERN_C String_t* _stringLiteral2CCDE1B3CB1052EFA6B5174A8A67F30A4F9F1CBC;
IL2CPP_EXTERN_C String_t* _stringLiteral40F5431A5203B1B661E92C45EF446F7D326E2C50;
IL2CPP_EXTERN_C String_t* _stringLiteral41CA67E6104A34556A3AF8C12AD6C84261BD4519;
IL2CPP_EXTERN_C String_t* _stringLiteral4EE07144AE807CDC95D0059EDF028A67002575F2;
IL2CPP_EXTERN_C String_t* _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91;
IL2CPP_EXTERN_C String_t* _stringLiteral54A6C1853715D8D2E934ADA7D072FF2F65EFCB8B;
IL2CPP_EXTERN_C String_t* _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32;
IL2CPP_EXTERN_C String_t* _stringLiteral70AF86903F537EF766441FA06F9BBDB5C25E2D04;
IL2CPP_EXTERN_C String_t* _stringLiteral7994233DE9DD1611D3CB661AB4AFDFCF720DBF18;
IL2CPP_EXTERN_C String_t* _stringLiteral81FE94B16385AF5FD003A4402F84B93F2F3C9BCF;
IL2CPP_EXTERN_C String_t* _stringLiteral8272BF3175F37940DC10163DFD94722BD508EA85;
IL2CPP_EXTERN_C String_t* _stringLiteral8856132A0554AAE312A22D3B249A14176429A289;
IL2CPP_EXTERN_C String_t* _stringLiteral8857C3E1FFEB7E77373A99F4755ED8BF28ECBC64;
IL2CPP_EXTERN_C String_t* _stringLiteral95130C6675E4A5F5C710AAB2FDF1EBCD3E1D32EA;
IL2CPP_EXTERN_C String_t* _stringLiteral99F8385E86F9A594795915717EE6639D9AB80324;
IL2CPP_EXTERN_C String_t* _stringLiteral9C5521C3D6E99A0FA3A8A60136CF4760AB524020;
IL2CPP_EXTERN_C String_t* _stringLiteralA3B5E02E6C686BD136D17A26E3D1A8A96DC44FD0;
IL2CPP_EXTERN_C String_t* _stringLiteralA3BCDF09A6C4BD969F67C120DBB3B660BDEC8C9E;
IL2CPP_EXTERN_C String_t* _stringLiteralD5063F4D155A731E19E2323DB0BAB1BA3B30C580;
IL2CPP_EXTERN_C String_t* _stringLiteralD7F05700850B615CE25FF717046A5553EFB1FF63;
IL2CPP_EXTERN_C String_t* _stringLiteralECAC9756AB416770CE66B9411AB7AEB8B8181309;
IL2CPP_EXTERN_C String_t* _stringLiteralED3ACB9973FB2CC7AAA8DB4066FEB71918F2815D;
IL2CPP_EXTERN_C String_t* _stringLiteralF8FEBC1393ED0786A9F796C00369C2AD61BD2B85;
IL2CPP_EXTERN_C String_t* _stringLiteralFE16FB5215DA91784505C8DC7A1AE4D386BCCACF;
IL2CPP_EXTERN_C const RuntimeMethod* ArcherBuilding_Upgrade_m336EA7B1FCBC6C324E6636A2F83FBE3AD2CF3A83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AttackTower_Upgrade_m323E71FDD5ED0EA528235900D355DF368CF2B8D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Character_SpeedUp_m64B0B0461BA9320CD15BD2F57252A370B869E7A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F_mE6A091B052494D68E8F2F2E14851B630190B5A89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCharacter_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8_mCE9C8FBED5DFAB4F42CAF2E2B6AF02948C416C12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mCE49E8783A1794715E6D539C8BB8C78CC589AB60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m5421192AB2FFE9765BB0D6C21CDE3D51D32BCF2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_mDC1EE7E2332C6862976FA026EB6ED1B3EB4E142D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m269393C54BD0A12D8236C0C4CF64AE91D132C8E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m367CFD03892FD7B80717306294EA139548991210_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mAECA5070E95CE5C802D5573BC86EDEDEC88E9BDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m61560064357E7BA96F0D31503834ED5AD39BF1D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m7ADEBBEFCD5B1C94EB0C4070A2AD3F659B799E7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB7AFB4E0B550927FBF6504243B789E9BDAD32938_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m1319FB9221759F3330354B81668E10047A4B1F17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7E137625ACDF23890B0162DA1DE540CDCAFDF35F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB585AA20C90153194E76F74862FBAD50D70DC9A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisArrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A_mF3D956E1684A01B627E0B9C4F54870ADE244B88F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBuilding_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5_mBF2ECB1B8CF12ABD9D9BE953CC5737F1C18DAE2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCharacter_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8_mBE9C21DF0A03E3EFD7D08B0754A1BB6D4D94CA78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m39F7981C55FB4AE901BA8C0F22E0F9C458684D55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mD01167BFE924D3C076F5E54E7E6A85B29AF153FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m670A03E313664D645E455FDA1F182BEB40EEE993_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6875E13FB00CE436458433DD47D692957B942F4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF221B7BAEE75E2A07ACCB27A83657F02BF8ABC7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m5DA9279CEDB27114379436C7D97807EF929ADF45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mAD390AB027224D023EB048D3F7DDC684D69CAF5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mAF7BA13C33A61A14950BE03FDE51F04A9DE25F40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m50CAF71CB39E7429B007D300328A1C17810ADDCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m9088D9D6AE3C56C6FEA17BBA4313FAC28C65B742_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m33AEEF8E79303B429B300712427653DBE388D21F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE3B71719DFF2545B6DBA377A659B0D909CCD9481_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE576755FB05B5C38187D21DEAEF8DD460C905372_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mAE69DFF149AE1C2D5898152E39C2E01C2BB605C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MakeBuilding_UnitProduce_mFF47244849C73C75B9F38849855FB5CFA78FA91C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mD05253A5EFE2AA2575CC36BD681FFB5638B9F560_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisAI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F_m6155B9340555F4C653D8C9AB5F7EA9666AE269F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisBuilding_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5_m4B4787CA74290A14A3F46C40943F1C248D0AA891_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisCharacter_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8_m54EC88C2F01AEFA7F175DD0AC517CBDDD588D555_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_LoadAll_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_mA1CF9E54996571EFE7094BDE018205CF1EB5D277_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m2A4C89C1E5F65890D408978197DB125739C6000C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAIStateU3Ed__12_System_Collections_IEnumerator_Reset_m91449508B5EE59AD9A0B35909D869DB4DDFDB64E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAttackTargetU3Ed__13_System_Collections_IEnumerator_Reset_mFA462C46E10DFDFBF15FB2D54F868512308D9760_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEnemybuilding2SetU3Ed__8_System_Collections_IEnumerator_Reset_mB1CD9CF5CB9E01ABEB645D3F7352A1FC52A18163_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEnemybuildingSetU3Ed__7_System_Collections_IEnumerator_Reset_mAB85AA6B45FB0C653B17B0434AEE16A075AB04B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMakeUnitU3Ed__9_System_Collections_IEnumerator_Reset_m340D02DBDEDC6BADB06F2503069D0C9D27128F93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMybuildingSetU3Ed__6_System_Collections_IEnumerator_Reset_m1610369C052AC3C9DFA3304A20B0F0C31097535A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpeedUpCoroU3Ed__63_System_Collections_IEnumerator_Reset_m966B16BB64D78957C4FF9D2F42EDA2E8680EBB79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Warrior_Upgrade_m2371DA4F111C483CE6A60AADF4236EF113BC618D_RuntimeMethod_var;
struct ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 ;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AIU5BU5D_tDC519424C0BF13D583E3E51705FC1F919D1B4A8F;
struct BuildingU5BU5D_tCB5AB568D849E6934CDC724E3EE2A4F93F735AAF;
struct CharacterU5BU5D_tC3A59DF23B17172AA72162D97D092689E416F84F;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
struct MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228;
struct SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED;
struct TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<Building>
struct List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BuildingU5BU5D_tCB5AB568D849E6934CDC724E3EE2A4F93F735AAF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE, ____items_1)); }
	inline BuildingU5BU5D_tCB5AB568D849E6934CDC724E3EE2A4F93F735AAF* get__items_1() const { return ____items_1; }
	inline BuildingU5BU5D_tCB5AB568D849E6934CDC724E3EE2A4F93F735AAF** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BuildingU5BU5D_tCB5AB568D849E6934CDC724E3EE2A4F93F735AAF* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BuildingU5BU5D_tCB5AB568D849E6934CDC724E3EE2A4F93F735AAF* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE_StaticFields, ____emptyArray_5)); }
	inline BuildingU5BU5D_tCB5AB568D849E6934CDC724E3EE2A4F93F735AAF* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BuildingU5BU5D_tCB5AB568D849E6934CDC724E3EE2A4F93F735AAF** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BuildingU5BU5D_tCB5AB568D849E6934CDC724E3EE2A4F93F735AAF* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Castle>
struct List_1_t82C8BE4340B2B0C5DB5EB0BC5EA0751F69E2B1A4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	CastleU5BU5D_tD3A4A4C80F7A9726A41282B375F7B2D3F0CE1152* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t82C8BE4340B2B0C5DB5EB0BC5EA0751F69E2B1A4, ____items_1)); }
	inline CastleU5BU5D_tD3A4A4C80F7A9726A41282B375F7B2D3F0CE1152* get__items_1() const { return ____items_1; }
	inline CastleU5BU5D_tD3A4A4C80F7A9726A41282B375F7B2D3F0CE1152** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(CastleU5BU5D_tD3A4A4C80F7A9726A41282B375F7B2D3F0CE1152* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t82C8BE4340B2B0C5DB5EB0BC5EA0751F69E2B1A4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t82C8BE4340B2B0C5DB5EB0BC5EA0751F69E2B1A4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t82C8BE4340B2B0C5DB5EB0BC5EA0751F69E2B1A4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t82C8BE4340B2B0C5DB5EB0BC5EA0751F69E2B1A4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	CastleU5BU5D_tD3A4A4C80F7A9726A41282B375F7B2D3F0CE1152* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t82C8BE4340B2B0C5DB5EB0BC5EA0751F69E2B1A4_StaticFields, ____emptyArray_5)); }
	inline CastleU5BU5D_tD3A4A4C80F7A9726A41282B375F7B2D3F0CE1152* get__emptyArray_5() const { return ____emptyArray_5; }
	inline CastleU5BU5D_tD3A4A4C80F7A9726A41282B375F7B2D3F0CE1152** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(CastleU5BU5D_tD3A4A4C80F7A9726A41282B375F7B2D3F0CE1152* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Character>
struct List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	CharacterU5BU5D_tC3A59DF23B17172AA72162D97D092689E416F84F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664, ____items_1)); }
	inline CharacterU5BU5D_tC3A59DF23B17172AA72162D97D092689E416F84F* get__items_1() const { return ____items_1; }
	inline CharacterU5BU5D_tC3A59DF23B17172AA72162D97D092689E416F84F** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(CharacterU5BU5D_tC3A59DF23B17172AA72162D97D092689E416F84F* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	CharacterU5BU5D_tC3A59DF23B17172AA72162D97D092689E416F84F* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664_StaticFields, ____emptyArray_5)); }
	inline CharacterU5BU5D_tC3A59DF23B17172AA72162D97D092689E416F84F* get__emptyArray_5() const { return ____emptyArray_5; }
	inline CharacterU5BU5D_tC3A59DF23B17172AA72162D97D092689E416F84F** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(CharacterU5BU5D_tC3A59DF23B17172AA72162D97D092689E416F84F* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____items_1)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


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

// AI/<AIState>d__12
struct U3CAIStateU3Ed__12_tD220B377E4D70D3154CA17E2D0B34F0C86A63BE3  : public RuntimeObject
{
public:
	// System.Int32 AI/<AIState>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object AI/<AIState>d__12::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// AI AI/<AIState>d__12::<>4__this
	AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAIStateU3Ed__12_tD220B377E4D70D3154CA17E2D0B34F0C86A63BE3, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAIStateU3Ed__12_tD220B377E4D70D3154CA17E2D0B34F0C86A63BE3, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAIStateU3Ed__12_tD220B377E4D70D3154CA17E2D0B34F0C86A63BE3, ___U3CU3E4__this_2)); }
	inline AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// AttackBuilding/<AttackTarget>d__13
struct U3CAttackTargetU3Ed__13_t28A1D1583ACED10AC092FC6F857F4BCA92D34023  : public RuntimeObject
{
public:
	// System.Int32 AttackBuilding/<AttackTarget>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object AttackBuilding/<AttackTarget>d__13::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// AttackBuilding AttackBuilding/<AttackTarget>d__13::<>4__this
	AttackBuilding_t35CB28B6CDF4EFB4E3A43E9864DB4A2BF03C15C7 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAttackTargetU3Ed__13_t28A1D1583ACED10AC092FC6F857F4BCA92D34023, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAttackTargetU3Ed__13_t28A1D1583ACED10AC092FC6F857F4BCA92D34023, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAttackTargetU3Ed__13_t28A1D1583ACED10AC092FC6F857F4BCA92D34023, ___U3CU3E4__this_2)); }
	inline AttackBuilding_t35CB28B6CDF4EFB4E3A43E9864DB4A2BF03C15C7 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AttackBuilding_t35CB28B6CDF4EFB4E3A43E9864DB4A2BF03C15C7 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AttackBuilding_t35CB28B6CDF4EFB4E3A43E9864DB4A2BF03C15C7 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Character/<SpeedUpCoro>d__63
struct U3CSpeedUpCoroU3Ed__63_t45326A9F21E161301051820A730C323510A7B31F  : public RuntimeObject
{
public:
	// System.Int32 Character/<SpeedUpCoro>d__63::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Character/<SpeedUpCoro>d__63::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Character Character/<SpeedUpCoro>d__63::<>4__this
	Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * ___U3CU3E4__this_2;
	// System.Int32 Character/<SpeedUpCoro>d__63::_team
	int32_t ____team_3;
	// System.Single Character/<SpeedUpCoro>d__63::xSpeed
	float ___xSpeed_4;
	// System.Single Character/<SpeedUpCoro>d__63::_duration
	float ____duration_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSpeedUpCoroU3Ed__63_t45326A9F21E161301051820A730C323510A7B31F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSpeedUpCoroU3Ed__63_t45326A9F21E161301051820A730C323510A7B31F, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSpeedUpCoroU3Ed__63_t45326A9F21E161301051820A730C323510A7B31F, ___U3CU3E4__this_2)); }
	inline Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of__team_3() { return static_cast<int32_t>(offsetof(U3CSpeedUpCoroU3Ed__63_t45326A9F21E161301051820A730C323510A7B31F, ____team_3)); }
	inline int32_t get__team_3() const { return ____team_3; }
	inline int32_t* get_address_of__team_3() { return &____team_3; }
	inline void set__team_3(int32_t value)
	{
		____team_3 = value;
	}

	inline static int32_t get_offset_of_xSpeed_4() { return static_cast<int32_t>(offsetof(U3CSpeedUpCoroU3Ed__63_t45326A9F21E161301051820A730C323510A7B31F, ___xSpeed_4)); }
	inline float get_xSpeed_4() const { return ___xSpeed_4; }
	inline float* get_address_of_xSpeed_4() { return &___xSpeed_4; }
	inline void set_xSpeed_4(float value)
	{
		___xSpeed_4 = value;
	}

	inline static int32_t get_offset_of__duration_5() { return static_cast<int32_t>(offsetof(U3CSpeedUpCoroU3Ed__63_t45326A9F21E161301051820A730C323510A7B31F, ____duration_5)); }
	inline float get__duration_5() const { return ____duration_5; }
	inline float* get_address_of__duration_5() { return &____duration_5; }
	inline void set__duration_5(float value)
	{
		____duration_5 = value;
	}
};


// LevelManager/<Enemybuilding2Set>d__8
struct U3CEnemybuilding2SetU3Ed__8_t17E56F4A18DD4E1399A799ADD9F1D148CD114BE1  : public RuntimeObject
{
public:
	// System.Int32 LevelManager/<Enemybuilding2Set>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LevelManager/<Enemybuilding2Set>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// LevelManager LevelManager/<Enemybuilding2Set>d__8::<>4__this
	LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * ___U3CU3E4__this_2;
	// System.String LevelManager/<Enemybuilding2Set>d__8::level
	String_t* ___level_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEnemybuilding2SetU3Ed__8_t17E56F4A18DD4E1399A799ADD9F1D148CD114BE1, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CEnemybuilding2SetU3Ed__8_t17E56F4A18DD4E1399A799ADD9F1D148CD114BE1, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CEnemybuilding2SetU3Ed__8_t17E56F4A18DD4E1399A799ADD9F1D148CD114BE1, ___U3CU3E4__this_2)); }
	inline LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline LevelManager_t010B312A2B35B45291F58195216ABB5673174961 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_level_3() { return static_cast<int32_t>(offsetof(U3CEnemybuilding2SetU3Ed__8_t17E56F4A18DD4E1399A799ADD9F1D148CD114BE1, ___level_3)); }
	inline String_t* get_level_3() const { return ___level_3; }
	inline String_t** get_address_of_level_3() { return &___level_3; }
	inline void set_level_3(String_t* value)
	{
		___level_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___level_3), (void*)value);
	}
};


// LevelManager/<EnemybuildingSet>d__7
struct U3CEnemybuildingSetU3Ed__7_t20A60B7D3B834C10E98F383200134D5E79A02AB4  : public RuntimeObject
{
public:
	// System.Int32 LevelManager/<EnemybuildingSet>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LevelManager/<EnemybuildingSet>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// LevelManager LevelManager/<EnemybuildingSet>d__7::<>4__this
	LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * ___U3CU3E4__this_2;
	// System.String LevelManager/<EnemybuildingSet>d__7::level
	String_t* ___level_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEnemybuildingSetU3Ed__7_t20A60B7D3B834C10E98F383200134D5E79A02AB4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CEnemybuildingSetU3Ed__7_t20A60B7D3B834C10E98F383200134D5E79A02AB4, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CEnemybuildingSetU3Ed__7_t20A60B7D3B834C10E98F383200134D5E79A02AB4, ___U3CU3E4__this_2)); }
	inline LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline LevelManager_t010B312A2B35B45291F58195216ABB5673174961 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_level_3() { return static_cast<int32_t>(offsetof(U3CEnemybuildingSetU3Ed__7_t20A60B7D3B834C10E98F383200134D5E79A02AB4, ___level_3)); }
	inline String_t* get_level_3() const { return ___level_3; }
	inline String_t** get_address_of_level_3() { return &___level_3; }
	inline void set_level_3(String_t* value)
	{
		___level_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___level_3), (void*)value);
	}
};


// LevelManager/<MybuildingSet>d__6
struct U3CMybuildingSetU3Ed__6_t825B2195F8CA034AB14A2A33E75296F67E232F9B  : public RuntimeObject
{
public:
	// System.Int32 LevelManager/<MybuildingSet>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LevelManager/<MybuildingSet>d__6::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// LevelManager LevelManager/<MybuildingSet>d__6::<>4__this
	LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CMybuildingSetU3Ed__6_t825B2195F8CA034AB14A2A33E75296F67E232F9B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CMybuildingSetU3Ed__6_t825B2195F8CA034AB14A2A33E75296F67E232F9B, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CMybuildingSetU3Ed__6_t825B2195F8CA034AB14A2A33E75296F67E232F9B, ___U3CU3E4__this_2)); }
	inline LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline LevelManager_t010B312A2B35B45291F58195216ABB5673174961 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// MakeBuilding/<MakeUnit>d__9
struct U3CMakeUnitU3Ed__9_t2F3D2193F6AFC4430320A08AE68D149BD13B8785  : public RuntimeObject
{
public:
	// System.Int32 MakeBuilding/<MakeUnit>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MakeBuilding/<MakeUnit>d__9::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// MakeBuilding MakeBuilding/<MakeUnit>d__9::<>4__this
	MakeBuilding_tA7888BB568D7BDF05AF62A24D5F3C03075D9894C * ___U3CU3E4__this_2;
	// UnityEngine.GameObject MakeBuilding/<MakeUnit>d__9::<Unit>5__2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CUnitU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CMakeUnitU3Ed__9_t2F3D2193F6AFC4430320A08AE68D149BD13B8785, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CMakeUnitU3Ed__9_t2F3D2193F6AFC4430320A08AE68D149BD13B8785, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CMakeUnitU3Ed__9_t2F3D2193F6AFC4430320A08AE68D149BD13B8785, ___U3CU3E4__this_2)); }
	inline MakeBuilding_tA7888BB568D7BDF05AF62A24D5F3C03075D9894C * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MakeBuilding_tA7888BB568D7BDF05AF62A24D5F3C03075D9894C ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MakeBuilding_tA7888BB568D7BDF05AF62A24D5F3C03075D9894C * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUnitU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CMakeUnitU3Ed__9_t2F3D2193F6AFC4430320A08AE68D149BD13B8785, ___U3CUnitU3E5__2_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CUnitU3E5__2_3() const { return ___U3CUnitU3E5__2_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CUnitU3E5__2_3() { return &___U3CUnitU3E5__2_3; }
	inline void set_U3CUnitU3E5__2_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CUnitU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUnitU3E5__2_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<Building>
struct Enumerator_tDEA9EF7DA04121A1EA4A598DC8A80A7E572E1E4C 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tDEA9EF7DA04121A1EA4A598DC8A80A7E572E1E4C, ___list_0)); }
	inline List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE * get_list_0() const { return ___list_0; }
	inline List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tDEA9EF7DA04121A1EA4A598DC8A80A7E572E1E4C, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tDEA9EF7DA04121A1EA4A598DC8A80A7E572E1E4C, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tDEA9EF7DA04121A1EA4A598DC8A80A7E572E1E4C, ___current_3)); }
	inline Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * get_current_3() const { return ___current_3; }
	inline Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<Castle>
struct Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t82C8BE4340B2B0C5DB5EB0BC5EA0751F69E2B1A4 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F, ___list_0)); }
	inline List_1_t82C8BE4340B2B0C5DB5EB0BC5EA0751F69E2B1A4 * get_list_0() const { return ___list_0; }
	inline List_1_t82C8BE4340B2B0C5DB5EB0BC5EA0751F69E2B1A4 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t82C8BE4340B2B0C5DB5EB0BC5EA0751F69E2B1A4 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F, ___current_3)); }
	inline Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * get_current_3() const { return ___current_3; }
	inline Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<Character>
struct Enumerator_t649D2193B2B6C28E89B82247B1D28A30D3548F50 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t649D2193B2B6C28E89B82247B1D28A30D3548F50, ___list_0)); }
	inline List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 * get_list_0() const { return ___list_0; }
	inline List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t649D2193B2B6C28E89B82247B1D28A30D3548F50, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t649D2193B2B6C28E89B82247B1D28A30D3548F50, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t649D2193B2B6C28E89B82247B1D28A30D3548F50, ___current_3)); }
	inline Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * get_current_3() const { return ___current_3; }
	inline Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___list_0)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_list_0() const { return ___list_0; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___current_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_current_3() const { return ___current_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Nullable`1<System.Single>
struct Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A 
{
public:
	// T System.Nullable`1::value
	float ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
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


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_LegacyContacts_6;

public:
	inline static int32_t get_offset_of_m_Impulse_0() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Impulse_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Impulse_0() const { return ___m_Impulse_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Impulse_0() { return &___m_Impulse_0; }
	inline void set_m_Impulse_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Impulse_0 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_1() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_RelativeVelocity_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_RelativeVelocity_1() const { return ___m_RelativeVelocity_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_RelativeVelocity_1() { return &___m_RelativeVelocity_1; }
	inline void set_m_RelativeVelocity_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_RelativeVelocity_1 = value;
	}

	inline static int32_t get_offset_of_m_Body_2() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Body_2)); }
	inline Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * get_m_Body_2() const { return ___m_Body_2; }
	inline Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 ** get_address_of_m_Body_2() { return &___m_Body_2; }
	inline void set_m_Body_2(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * value)
	{
		___m_Body_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Body_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Collider_3() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Collider_3)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_m_Collider_3() const { return ___m_Collider_3; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_m_Collider_3() { return &___m_Collider_3; }
	inline void set_m_Collider_3(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___m_Collider_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Collider_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContactCount_4() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ContactCount_4)); }
	inline int32_t get_m_ContactCount_4() const { return ___m_ContactCount_4; }
	inline int32_t* get_address_of_m_ContactCount_4() { return &___m_ContactCount_4; }
	inline void set_m_ContactCount_4(int32_t value)
	{
		___m_ContactCount_4 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_5() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ReusedContacts_5)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_ReusedContacts_5() const { return ___m_ReusedContacts_5; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_ReusedContacts_5() { return &___m_ReusedContacts_5; }
	inline void set_m_ReusedContacts_5(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_ReusedContacts_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_6() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_LegacyContacts_6)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_LegacyContacts_6() const { return ___m_LegacyContacts_6; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_LegacyContacts_6() { return &___m_LegacyContacts_6; }
	inline void set_m_LegacyContacts_6(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_LegacyContacts_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_pinvoke
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___m_Body_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_com
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___m_Body_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
};

// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.ForceMode
struct ForceMode_t7778317A4C46140D50D98811D65A7B22E38163D5 
{
public:
	// System.Int32 UnityEngine.ForceMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ForceMode_t7778317A4C46140D50D98811D65A7B22E38163D5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// UnityEngine.TouchPhase
struct TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchType
struct TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// IState/State
struct State_t4AA0B47C21142566FA6C3E706BAAA6DA80099EE9 
{
public:
	// System.Int32 IState/State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_t4AA0B47C21142566FA6C3E706BAAA6DA80099EE9, ___value___2)); }
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


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Touch
struct Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Position_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RawPosition_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_PositionDelta_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
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


// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
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


// SkillManager/Buff
struct Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6  : public MulticastDelegate_t
{
public:

public:
};


// TeamManager/BuildingWork
struct BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF  : public MulticastDelegate_t
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


// UnityEngine.BoxCollider
struct BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5  : public Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02
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


// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
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


// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// AI
struct AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AI.NavMeshAgent AI::nav
	NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * ___nav_4;
	// UnityEngine.Animator AI::ani
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___ani_5;
	// Character AI::character
	Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * ___character_6;
	// UnityEngine.GameObject AI::target
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___target_7;
	// System.Boolean AI::attackPosible
	bool ___attackPosible_8;
	// System.Single AI::PrevDelayTime
	float ___PrevDelayTime_9;
	// IState/State AI::<state>k__BackingField
	int32_t ___U3CstateU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_nav_4() { return static_cast<int32_t>(offsetof(AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F, ___nav_4)); }
	inline NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * get_nav_4() const { return ___nav_4; }
	inline NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B ** get_address_of_nav_4() { return &___nav_4; }
	inline void set_nav_4(NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * value)
	{
		___nav_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nav_4), (void*)value);
	}

	inline static int32_t get_offset_of_ani_5() { return static_cast<int32_t>(offsetof(AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F, ___ani_5)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_ani_5() const { return ___ani_5; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_ani_5() { return &___ani_5; }
	inline void set_ani_5(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___ani_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ani_5), (void*)value);
	}

	inline static int32_t get_offset_of_character_6() { return static_cast<int32_t>(offsetof(AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F, ___character_6)); }
	inline Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * get_character_6() const { return ___character_6; }
	inline Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 ** get_address_of_character_6() { return &___character_6; }
	inline void set_character_6(Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * value)
	{
		___character_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___character_6), (void*)value);
	}

	inline static int32_t get_offset_of_target_7() { return static_cast<int32_t>(offsetof(AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F, ___target_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_target_7() const { return ___target_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_target_7() { return &___target_7; }
	inline void set_target_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___target_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_7), (void*)value);
	}

	inline static int32_t get_offset_of_attackPosible_8() { return static_cast<int32_t>(offsetof(AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F, ___attackPosible_8)); }
	inline bool get_attackPosible_8() const { return ___attackPosible_8; }
	inline bool* get_address_of_attackPosible_8() { return &___attackPosible_8; }
	inline void set_attackPosible_8(bool value)
	{
		___attackPosible_8 = value;
	}

	inline static int32_t get_offset_of_PrevDelayTime_9() { return static_cast<int32_t>(offsetof(AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F, ___PrevDelayTime_9)); }
	inline float get_PrevDelayTime_9() const { return ___PrevDelayTime_9; }
	inline float* get_address_of_PrevDelayTime_9() { return &___PrevDelayTime_9; }
	inline void set_PrevDelayTime_9(float value)
	{
		___PrevDelayTime_9 = value;
	}

	inline static int32_t get_offset_of_U3CstateU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F, ___U3CstateU3Ek__BackingField_10)); }
	inline int32_t get_U3CstateU3Ek__BackingField_10() const { return ___U3CstateU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CstateU3Ek__BackingField_10() { return &___U3CstateU3Ek__BackingField_10; }
	inline void set_U3CstateU3Ek__BackingField_10(int32_t value)
	{
		___U3CstateU3Ek__BackingField_10 = value;
	}
};


// Arrow
struct Arrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Arrow::ArrowSpeed
	float ___ArrowSpeed_4;
	// System.Int32 Arrow::damage
	int32_t ___damage_5;
	// UnityEngine.GameObject Arrow::Target
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Target_6;
	// UnityEngine.SkinnedMeshRenderer[] Arrow::SkinnedMesh
	SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED* ___SkinnedMesh_7;
	// UnityEngine.MeshRenderer[] Arrow::Mesh
	MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* ___Mesh_8;
	// UnityEngine.Material[] Arrow::mat
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___mat_9;
	// UnityEngine.Transform Arrow::tr
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___tr_10;
	// UnityEngine.Collider Arrow::myCol
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___myCol_11;
	// UnityEngine.Rigidbody Arrow::rbody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___rbody_12;
	// System.Int32 Arrow::team
	int32_t ___team_13;

public:
	inline static int32_t get_offset_of_ArrowSpeed_4() { return static_cast<int32_t>(offsetof(Arrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A, ___ArrowSpeed_4)); }
	inline float get_ArrowSpeed_4() const { return ___ArrowSpeed_4; }
	inline float* get_address_of_ArrowSpeed_4() { return &___ArrowSpeed_4; }
	inline void set_ArrowSpeed_4(float value)
	{
		___ArrowSpeed_4 = value;
	}

	inline static int32_t get_offset_of_damage_5() { return static_cast<int32_t>(offsetof(Arrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A, ___damage_5)); }
	inline int32_t get_damage_5() const { return ___damage_5; }
	inline int32_t* get_address_of_damage_5() { return &___damage_5; }
	inline void set_damage_5(int32_t value)
	{
		___damage_5 = value;
	}

	inline static int32_t get_offset_of_Target_6() { return static_cast<int32_t>(offsetof(Arrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A, ___Target_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Target_6() const { return ___Target_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Target_6() { return &___Target_6; }
	inline void set_Target_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Target_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Target_6), (void*)value);
	}

	inline static int32_t get_offset_of_SkinnedMesh_7() { return static_cast<int32_t>(offsetof(Arrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A, ___SkinnedMesh_7)); }
	inline SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED* get_SkinnedMesh_7() const { return ___SkinnedMesh_7; }
	inline SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED** get_address_of_SkinnedMesh_7() { return &___SkinnedMesh_7; }
	inline void set_SkinnedMesh_7(SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED* value)
	{
		___SkinnedMesh_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SkinnedMesh_7), (void*)value);
	}

	inline static int32_t get_offset_of_Mesh_8() { return static_cast<int32_t>(offsetof(Arrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A, ___Mesh_8)); }
	inline MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* get_Mesh_8() const { return ___Mesh_8; }
	inline MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228** get_address_of_Mesh_8() { return &___Mesh_8; }
	inline void set_Mesh_8(MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* value)
	{
		___Mesh_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Mesh_8), (void*)value);
	}

	inline static int32_t get_offset_of_mat_9() { return static_cast<int32_t>(offsetof(Arrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A, ___mat_9)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_mat_9() const { return ___mat_9; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_mat_9() { return &___mat_9; }
	inline void set_mat_9(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___mat_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mat_9), (void*)value);
	}

	inline static int32_t get_offset_of_tr_10() { return static_cast<int32_t>(offsetof(Arrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A, ___tr_10)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_tr_10() const { return ___tr_10; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_tr_10() { return &___tr_10; }
	inline void set_tr_10(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___tr_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tr_10), (void*)value);
	}

	inline static int32_t get_offset_of_myCol_11() { return static_cast<int32_t>(offsetof(Arrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A, ___myCol_11)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_myCol_11() const { return ___myCol_11; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_myCol_11() { return &___myCol_11; }
	inline void set_myCol_11(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___myCol_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myCol_11), (void*)value);
	}

	inline static int32_t get_offset_of_rbody_12() { return static_cast<int32_t>(offsetof(Arrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A, ___rbody_12)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_rbody_12() const { return ___rbody_12; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_rbody_12() { return &___rbody_12; }
	inline void set_rbody_12(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___rbody_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rbody_12), (void*)value);
	}

	inline static int32_t get_offset_of_team_13() { return static_cast<int32_t>(offsetof(Arrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A, ___team_13)); }
	inline int32_t get_team_13() const { return ___team_13; }
	inline int32_t* get_address_of_team_13() { return &___team_13; }
	inline void set_team_13(int32_t value)
	{
		___team_13 = value;
	}
};


// Building
struct Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Building::team
	int32_t ___team_4;
	// System.Int32 Building::level
	int32_t ___level_5;
	// System.Int32 Building::maxHp
	int32_t ___maxHp_6;
	// System.Int32 Building::prevMaxHp
	int32_t ___prevMaxHp_7;
	// System.Int32 Building::hp
	int32_t ___hp_8;
	// System.Int32 Building::defense
	int32_t ___defense_9;
	// System.Int32 Building::prevDefense
	int32_t ___prevDefense_10;
	// UnityEngine.SkinnedMeshRenderer[] Building::BuildingSkinnedMesh
	SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED* ___BuildingSkinnedMesh_11;
	// UnityEngine.MeshRenderer[] Building::BuildingMesh
	MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* ___BuildingMesh_12;
	// UnityEngine.Material[] Building::mat
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___mat_13;

public:
	inline static int32_t get_offset_of_team_4() { return static_cast<int32_t>(offsetof(Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5, ___team_4)); }
	inline int32_t get_team_4() const { return ___team_4; }
	inline int32_t* get_address_of_team_4() { return &___team_4; }
	inline void set_team_4(int32_t value)
	{
		___team_4 = value;
	}

	inline static int32_t get_offset_of_level_5() { return static_cast<int32_t>(offsetof(Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5, ___level_5)); }
	inline int32_t get_level_5() const { return ___level_5; }
	inline int32_t* get_address_of_level_5() { return &___level_5; }
	inline void set_level_5(int32_t value)
	{
		___level_5 = value;
	}

	inline static int32_t get_offset_of_maxHp_6() { return static_cast<int32_t>(offsetof(Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5, ___maxHp_6)); }
	inline int32_t get_maxHp_6() const { return ___maxHp_6; }
	inline int32_t* get_address_of_maxHp_6() { return &___maxHp_6; }
	inline void set_maxHp_6(int32_t value)
	{
		___maxHp_6 = value;
	}

	inline static int32_t get_offset_of_prevMaxHp_7() { return static_cast<int32_t>(offsetof(Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5, ___prevMaxHp_7)); }
	inline int32_t get_prevMaxHp_7() const { return ___prevMaxHp_7; }
	inline int32_t* get_address_of_prevMaxHp_7() { return &___prevMaxHp_7; }
	inline void set_prevMaxHp_7(int32_t value)
	{
		___prevMaxHp_7 = value;
	}

	inline static int32_t get_offset_of_hp_8() { return static_cast<int32_t>(offsetof(Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5, ___hp_8)); }
	inline int32_t get_hp_8() const { return ___hp_8; }
	inline int32_t* get_address_of_hp_8() { return &___hp_8; }
	inline void set_hp_8(int32_t value)
	{
		___hp_8 = value;
	}

	inline static int32_t get_offset_of_defense_9() { return static_cast<int32_t>(offsetof(Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5, ___defense_9)); }
	inline int32_t get_defense_9() const { return ___defense_9; }
	inline int32_t* get_address_of_defense_9() { return &___defense_9; }
	inline void set_defense_9(int32_t value)
	{
		___defense_9 = value;
	}

	inline static int32_t get_offset_of_prevDefense_10() { return static_cast<int32_t>(offsetof(Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5, ___prevDefense_10)); }
	inline int32_t get_prevDefense_10() const { return ___prevDefense_10; }
	inline int32_t* get_address_of_prevDefense_10() { return &___prevDefense_10; }
	inline void set_prevDefense_10(int32_t value)
	{
		___prevDefense_10 = value;
	}

	inline static int32_t get_offset_of_BuildingSkinnedMesh_11() { return static_cast<int32_t>(offsetof(Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5, ___BuildingSkinnedMesh_11)); }
	inline SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED* get_BuildingSkinnedMesh_11() const { return ___BuildingSkinnedMesh_11; }
	inline SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED** get_address_of_BuildingSkinnedMesh_11() { return &___BuildingSkinnedMesh_11; }
	inline void set_BuildingSkinnedMesh_11(SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED* value)
	{
		___BuildingSkinnedMesh_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BuildingSkinnedMesh_11), (void*)value);
	}

	inline static int32_t get_offset_of_BuildingMesh_12() { return static_cast<int32_t>(offsetof(Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5, ___BuildingMesh_12)); }
	inline MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* get_BuildingMesh_12() const { return ___BuildingMesh_12; }
	inline MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228** get_address_of_BuildingMesh_12() { return &___BuildingMesh_12; }
	inline void set_BuildingMesh_12(MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* value)
	{
		___BuildingMesh_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BuildingMesh_12), (void*)value);
	}

	inline static int32_t get_offset_of_mat_13() { return static_cast<int32_t>(offsetof(Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5, ___mat_13)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_mat_13() const { return ___mat_13; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_mat_13() { return &___mat_13; }
	inline void set_mat_13(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___mat_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mat_13), (void*)value);
	}
};


// Character
struct Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Character::team
	int32_t ___team_4;
	// System.Int32 Character::level
	int32_t ___level_5;
	// System.Int32 Character::Population
	int32_t ___Population_6;
	// System.Int32 Character::maxHp
	int32_t ___maxHp_7;
	// System.Int32 Character::prevMaxHp
	int32_t ___prevMaxHp_8;
	// System.Int32 Character::hp
	int32_t ___hp_9;
	// System.Int32 Character::attackDamage
	int32_t ___attackDamage_10;
	// System.Int32 Character::prevAttackDamage
	int32_t ___prevAttackDamage_11;
	// System.Int32 Character::defense
	int32_t ___defense_12;
	// System.Int32 Character::prevDefense
	int32_t ___prevDefense_13;
	// System.Int32 Character::speed
	int32_t ___speed_14;
	// System.Int32 Character::prevSpeed
	int32_t ___prevSpeed_15;
	// System.Single Character::attackSpeed
	float ___attackSpeed_16;
	// System.Single Character::prevAttackSpeed
	float ___prevAttackSpeed_17;
	// System.Int32 Character::attackRange
	int32_t ___attackRange_18;
	// System.Single Character::attackDelay
	float ___attackDelay_19;
	// UnityEngine.SkinnedMeshRenderer[] Character::CharacterSkinnedMesh
	SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED* ___CharacterSkinnedMesh_20;
	// UnityEngine.MeshRenderer[] Character::CharaterMesh
	MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* ___CharaterMesh_21;
	// UnityEngine.Material[] Character::mat
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___mat_22;

public:
	inline static int32_t get_offset_of_team_4() { return static_cast<int32_t>(offsetof(Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8, ___team_4)); }
	inline int32_t get_team_4() const { return ___team_4; }
	inline int32_t* get_address_of_team_4() { return &___team_4; }
	inline void set_team_4(int32_t value)
	{
		___team_4 = value;
	}

	inline static int32_t get_offset_of_level_5() { return static_cast<int32_t>(offsetof(Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8, ___level_5)); }
	inline int32_t get_level_5() const { return ___level_5; }
	inline int32_t* get_address_of_level_5() { return &___level_5; }
	inline void set_level_5(int32_t value)
	{
		___level_5 = value;
	}

	inline static int32_t get_offset_of_Population_6() { return static_cast<int32_t>(offsetof(Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8, ___Population_6)); }
	inline int32_t get_Population_6() const { return ___Population_6; }
	inline int32_t* get_address_of_Population_6() { return &___Population_6; }
	inline void set_Population_6(int32_t value)
	{
		___Population_6 = value;
	}

	inline static int32_t get_offset_of_maxHp_7() { return static_cast<int32_t>(offsetof(Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8, ___maxHp_7)); }
	inline int32_t get_maxHp_7() const { return ___maxHp_7; }
	inline int32_t* get_address_of_maxHp_7() { return &___maxHp_7; }
	inline void set_maxHp_7(int32_t value)
	{
		___maxHp_7 = value;
	}

	inline static int32_t get_offset_of_prevMaxHp_8() { return static_cast<int32_t>(offsetof(Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8, ___prevMaxHp_8)); }
	inline int32_t get_prevMaxHp_8() const { return ___prevMaxHp_8; }
	inline int32_t* get_address_of_prevMaxHp_8() { return &___prevMaxHp_8; }
	inline void set_prevMaxHp_8(int32_t value)
	{
		___prevMaxHp_8 = value;
	}

	inline static int32_t get_offset_of_hp_9() { return static_cast<int32_t>(offsetof(Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8, ___hp_9)); }
	inline int32_t get_hp_9() const { return ___hp_9; }
	inline int32_t* get_address_of_hp_9() { return &___hp_9; }
	inline void set_hp_9(int32_t value)
	{
		___hp_9 = value;
	}

	inline static int32_t get_offset_of_attackDamage_10() { return static_cast<int32_t>(offsetof(Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8, ___attackDamage_10)); }
	inline int32_t get_attackDamage_10() const { return ___attackDamage_10; }
	inline int32_t* get_address_of_attackDamage_10() { return &___attackDamage_10; }
	inline void set_attackDamage_10(int32_t value)
	{
		___attackDamage_10 = value;
	}

	inline static int32_t get_offset_of_prevAttackDamage_11() { return static_cast<int32_t>(offsetof(Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8, ___prevAttackDamage_11)); }
	inline int32_t get_prevAttackDamage_11() const { return ___prevAttackDamage_11; }
	inline int32_t* get_address_of_prevAttackDamage_11() { return &___prevAttackDamage_11; }
	inline void set_prevAttackDamage_11(int32_t value)
	{
		___prevAttackDamage_11 = value;
	}

	inline static int32_t get_offset_of_defense_12() { return static_cast<int32_t>(offsetof(Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8, ___defense_12)); }
	inline int32_t get_defense_12() const { return ___defense_12; }
	inline int32_t* get_address_of_defense_12() { return &___defense_12; }
	inline void set_defense_12(int32_t value)
	{
		___defense_12 = value;
	}

	inline static int32_t get_offset_of_prevDefense_13() { return static_cast<int32_t>(offsetof(Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8, ___prevDefense_13)); }
	inline int32_t get_prevDefense_13() const { return ___prevDefense_13; }
	inline int32_t* get_address_of_prevDefense_13() { return &___prevDefense_13; }
	inline void set_prevDefense_13(int32_t value)
	{
		___prevDefense_13 = value;
	}

	inline static int32_t get_offset_of_speed_14() { return static_cast<int32_t>(offsetof(Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8, ___speed_14)); }
	inline int32_t get_speed_14() const { return ___speed_14; }
	inline int32_t* get_address_of_speed_14() { return &___speed_14; }
	inline void set_speed_14(int32_t value)
	{
		___speed_14 = value;
	}

	inline static int32_t get_offset_of_prevSpeed_15() { return static_cast<int32_t>(offsetof(Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8, ___prevSpeed_15)); }
	inline int32_t get_prevSpeed_15() const { return ___prevSpeed_15; }
	inline int32_t* get_address_of_prevSpeed_15() { return &___prevSpeed_15; }
	inline void set_prevSpeed_15(int32_t value)
	{
		___prevSpeed_15 = value;
	}

	inline static int32_t get_offset_of_attackSpeed_16() { return static_cast<int32_t>(offsetof(Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8, ___attackSpeed_16)); }
	inline float get_attackSpeed_16() const { return ___attackSpeed_16; }
	inline float* get_address_of_attackSpeed_16() { return &___attackSpeed_16; }
	inline void set_attackSpeed_16(float value)
	{
		___attackSpeed_16 = value;
	}

	inline static int32_t get_offset_of_prevAttackSpeed_17() { return static_cast<int32_t>(offsetof(Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8, ___prevAttackSpeed_17)); }
	inline float get_prevAttackSpeed_17() const { return ___prevAttackSpeed_17; }
	inline float* get_address_of_prevAttackSpeed_17() { return &___prevAttackSpeed_17; }
	inline void set_prevAttackSpeed_17(float value)
	{
		___prevAttackSpeed_17 = value;
	}

	inline static int32_t get_offset_of_attackRange_18() { return static_cast<int32_t>(offsetof(Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8, ___attackRange_18)); }
	inline int32_t get_attackRange_18() const { return ___attackRange_18; }
	inline int32_t* get_address_of_attackRange_18() { return &___attackRange_18; }
	inline void set_attackRange_18(int32_t value)
	{
		___attackRange_18 = value;
	}

	inline static int32_t get_offset_of_attackDelay_19() { return static_cast<int32_t>(offsetof(Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8, ___attackDelay_19)); }
	inline float get_attackDelay_19() const { return ___attackDelay_19; }
	inline float* get_address_of_attackDelay_19() { return &___attackDelay_19; }
	inline void set_attackDelay_19(float value)
	{
		___attackDelay_19 = value;
	}

	inline static int32_t get_offset_of_CharacterSkinnedMesh_20() { return static_cast<int32_t>(offsetof(Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8, ___CharacterSkinnedMesh_20)); }
	inline SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED* get_CharacterSkinnedMesh_20() const { return ___CharacterSkinnedMesh_20; }
	inline SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED** get_address_of_CharacterSkinnedMesh_20() { return &___CharacterSkinnedMesh_20; }
	inline void set_CharacterSkinnedMesh_20(SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED* value)
	{
		___CharacterSkinnedMesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CharacterSkinnedMesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_CharaterMesh_21() { return static_cast<int32_t>(offsetof(Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8, ___CharaterMesh_21)); }
	inline MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* get_CharaterMesh_21() const { return ___CharaterMesh_21; }
	inline MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228** get_address_of_CharaterMesh_21() { return &___CharaterMesh_21; }
	inline void set_CharaterMesh_21(MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* value)
	{
		___CharaterMesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CharaterMesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_mat_22() { return static_cast<int32_t>(offsetof(Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8, ___mat_22)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_mat_22() const { return ___mat_22; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_mat_22() { return &___mat_22; }
	inline void set_mat_22(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___mat_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mat_22), (void*)value);
	}
};


// LevelManager
struct LevelManager_t010B312A2B35B45291F58195216ABB5673174961  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject LevelManager::myTeam
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___myTeam_5;
	// UnityEngine.GameObject LevelManager::enemyTeam1
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___enemyTeam1_6;
	// UnityEngine.GameObject LevelManager::enemyTeam2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___enemyTeam2_7;
	// Building[] LevelManager::myTeamBuilding
	BuildingU5BU5D_tCB5AB568D849E6934CDC724E3EE2A4F93F735AAF* ___myTeamBuilding_8;

public:
	inline static int32_t get_offset_of_myTeam_5() { return static_cast<int32_t>(offsetof(LevelManager_t010B312A2B35B45291F58195216ABB5673174961, ___myTeam_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_myTeam_5() const { return ___myTeam_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_myTeam_5() { return &___myTeam_5; }
	inline void set_myTeam_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___myTeam_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myTeam_5), (void*)value);
	}

	inline static int32_t get_offset_of_enemyTeam1_6() { return static_cast<int32_t>(offsetof(LevelManager_t010B312A2B35B45291F58195216ABB5673174961, ___enemyTeam1_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_enemyTeam1_6() const { return ___enemyTeam1_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_enemyTeam1_6() { return &___enemyTeam1_6; }
	inline void set_enemyTeam1_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___enemyTeam1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyTeam1_6), (void*)value);
	}

	inline static int32_t get_offset_of_enemyTeam2_7() { return static_cast<int32_t>(offsetof(LevelManager_t010B312A2B35B45291F58195216ABB5673174961, ___enemyTeam2_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_enemyTeam2_7() const { return ___enemyTeam2_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_enemyTeam2_7() { return &___enemyTeam2_7; }
	inline void set_enemyTeam2_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___enemyTeam2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyTeam2_7), (void*)value);
	}

	inline static int32_t get_offset_of_myTeamBuilding_8() { return static_cast<int32_t>(offsetof(LevelManager_t010B312A2B35B45291F58195216ABB5673174961, ___myTeamBuilding_8)); }
	inline BuildingU5BU5D_tCB5AB568D849E6934CDC724E3EE2A4F93F735AAF* get_myTeamBuilding_8() const { return ___myTeamBuilding_8; }
	inline BuildingU5BU5D_tCB5AB568D849E6934CDC724E3EE2A4F93F735AAF** get_address_of_myTeamBuilding_8() { return &___myTeamBuilding_8; }
	inline void set_myTeamBuilding_8(BuildingU5BU5D_tCB5AB568D849E6934CDC724E3EE2A4F93F735AAF* value)
	{
		___myTeamBuilding_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myTeamBuilding_8), (void*)value);
	}
};

struct LevelManager_t010B312A2B35B45291F58195216ABB5673174961_StaticFields
{
public:
	// LevelManager LevelManager::levelManager
	LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * ___levelManager_4;

public:
	inline static int32_t get_offset_of_levelManager_4() { return static_cast<int32_t>(offsetof(LevelManager_t010B312A2B35B45291F58195216ABB5673174961_StaticFields, ___levelManager_4)); }
	inline LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * get_levelManager_4() const { return ___levelManager_4; }
	inline LevelManager_t010B312A2B35B45291F58195216ABB5673174961 ** get_address_of_levelManager_4() { return &___levelManager_4; }
	inline void set_levelManager_4(LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * value)
	{
		___levelManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelManager_4), (void*)value);
	}
};


// Player
struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Animator Player::ani
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___ani_4;
	// UnityEngine.Transform Player::tr
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___tr_5;
	// System.Single Player::h
	float ___h_6;
	// System.Single Player::v
	float ___v_7;
	// UnityEngine.Rigidbody Player::rbody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___rbody_8;
	// Character Player::character
	Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * ___character_9;
	// IState/State Player::<state>k__BackingField
	int32_t ___U3CstateU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_ani_4() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___ani_4)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_ani_4() const { return ___ani_4; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_ani_4() { return &___ani_4; }
	inline void set_ani_4(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___ani_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ani_4), (void*)value);
	}

	inline static int32_t get_offset_of_tr_5() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___tr_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_tr_5() const { return ___tr_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_tr_5() { return &___tr_5; }
	inline void set_tr_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___tr_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tr_5), (void*)value);
	}

	inline static int32_t get_offset_of_h_6() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___h_6)); }
	inline float get_h_6() const { return ___h_6; }
	inline float* get_address_of_h_6() { return &___h_6; }
	inline void set_h_6(float value)
	{
		___h_6 = value;
	}

	inline static int32_t get_offset_of_v_7() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___v_7)); }
	inline float get_v_7() const { return ___v_7; }
	inline float* get_address_of_v_7() { return &___v_7; }
	inline void set_v_7(float value)
	{
		___v_7 = value;
	}

	inline static int32_t get_offset_of_rbody_8() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___rbody_8)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_rbody_8() const { return ___rbody_8; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_rbody_8() { return &___rbody_8; }
	inline void set_rbody_8(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___rbody_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rbody_8), (void*)value);
	}

	inline static int32_t get_offset_of_character_9() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___character_9)); }
	inline Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * get_character_9() const { return ___character_9; }
	inline Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 ** get_address_of_character_9() { return &___character_9; }
	inline void set_character_9(Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * value)
	{
		___character_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___character_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstateU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___U3CstateU3Ek__BackingField_10)); }
	inline int32_t get_U3CstateU3Ek__BackingField_10() const { return ___U3CstateU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CstateU3Ek__BackingField_10() { return &___U3CstateU3Ek__BackingField_10; }
	inline void set_U3CstateU3Ek__BackingField_10(int32_t value)
	{
		___U3CstateU3Ek__BackingField_10 = value;
	}
};


// PoolManager
struct PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject PoolManager::arrowPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___arrowPrefab_5;
	// UnityEngine.GameObject PoolManager::Arrows
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Arrows_6;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> PoolManager::ArrowPool
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___ArrowPool_7;
	// UnityEngine.GameObject PoolManager::warriorPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___warriorPrefab_8;
	// UnityEngine.GameObject PoolManager::Warriors
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Warriors_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> PoolManager::WarriorPool
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___WarriorPool_10;
	// UnityEngine.GameObject PoolManager::archerPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___archerPrefab_11;
	// UnityEngine.GameObject PoolManager::Archers
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Archers_12;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> PoolManager::ArcherPool
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___ArcherPool_13;

public:
	inline static int32_t get_offset_of_arrowPrefab_5() { return static_cast<int32_t>(offsetof(PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7, ___arrowPrefab_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_arrowPrefab_5() const { return ___arrowPrefab_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_arrowPrefab_5() { return &___arrowPrefab_5; }
	inline void set_arrowPrefab_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___arrowPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arrowPrefab_5), (void*)value);
	}

	inline static int32_t get_offset_of_Arrows_6() { return static_cast<int32_t>(offsetof(PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7, ___Arrows_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Arrows_6() const { return ___Arrows_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Arrows_6() { return &___Arrows_6; }
	inline void set_Arrows_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Arrows_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Arrows_6), (void*)value);
	}

	inline static int32_t get_offset_of_ArrowPool_7() { return static_cast<int32_t>(offsetof(PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7, ___ArrowPool_7)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_ArrowPool_7() const { return ___ArrowPool_7; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_ArrowPool_7() { return &___ArrowPool_7; }
	inline void set_ArrowPool_7(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___ArrowPool_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ArrowPool_7), (void*)value);
	}

	inline static int32_t get_offset_of_warriorPrefab_8() { return static_cast<int32_t>(offsetof(PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7, ___warriorPrefab_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_warriorPrefab_8() const { return ___warriorPrefab_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_warriorPrefab_8() { return &___warriorPrefab_8; }
	inline void set_warriorPrefab_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___warriorPrefab_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___warriorPrefab_8), (void*)value);
	}

	inline static int32_t get_offset_of_Warriors_9() { return static_cast<int32_t>(offsetof(PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7, ___Warriors_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Warriors_9() const { return ___Warriors_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Warriors_9() { return &___Warriors_9; }
	inline void set_Warriors_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Warriors_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Warriors_9), (void*)value);
	}

	inline static int32_t get_offset_of_WarriorPool_10() { return static_cast<int32_t>(offsetof(PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7, ___WarriorPool_10)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_WarriorPool_10() const { return ___WarriorPool_10; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_WarriorPool_10() { return &___WarriorPool_10; }
	inline void set_WarriorPool_10(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___WarriorPool_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WarriorPool_10), (void*)value);
	}

	inline static int32_t get_offset_of_archerPrefab_11() { return static_cast<int32_t>(offsetof(PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7, ___archerPrefab_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_archerPrefab_11() const { return ___archerPrefab_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_archerPrefab_11() { return &___archerPrefab_11; }
	inline void set_archerPrefab_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___archerPrefab_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___archerPrefab_11), (void*)value);
	}

	inline static int32_t get_offset_of_Archers_12() { return static_cast<int32_t>(offsetof(PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7, ___Archers_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Archers_12() const { return ___Archers_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Archers_12() { return &___Archers_12; }
	inline void set_Archers_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Archers_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Archers_12), (void*)value);
	}

	inline static int32_t get_offset_of_ArcherPool_13() { return static_cast<int32_t>(offsetof(PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7, ___ArcherPool_13)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_ArcherPool_13() const { return ___ArcherPool_13; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_ArcherPool_13() { return &___ArcherPool_13; }
	inline void set_ArcherPool_13(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___ArcherPool_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ArcherPool_13), (void*)value);
	}
};

struct PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7_StaticFields
{
public:
	// PoolManager PoolManager::poolManager
	PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * ___poolManager_4;

public:
	inline static int32_t get_offset_of_poolManager_4() { return static_cast<int32_t>(offsetof(PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7_StaticFields, ___poolManager_4)); }
	inline PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * get_poolManager_4() const { return ___poolManager_4; }
	inline PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 ** get_address_of_poolManager_4() { return &___poolManager_4; }
	inline void set_poolManager_4(PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * value)
	{
		___poolManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___poolManager_4), (void*)value);
	}
};


// SkillManager
struct SkillManager_t922C3F2076730BE87514F83311A3752C621F7278  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<Character> SkillManager::heros
	List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 * ___heros_5;

public:
	inline static int32_t get_offset_of_heros_5() { return static_cast<int32_t>(offsetof(SkillManager_t922C3F2076730BE87514F83311A3752C621F7278, ___heros_5)); }
	inline List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 * get_heros_5() const { return ___heros_5; }
	inline List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 ** get_address_of_heros_5() { return &___heros_5; }
	inline void set_heros_5(List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 * value)
	{
		___heros_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___heros_5), (void*)value);
	}
};

struct SkillManager_t922C3F2076730BE87514F83311A3752C621F7278_StaticFields
{
public:
	// SkillManager SkillManager::skillManager
	SkillManager_t922C3F2076730BE87514F83311A3752C621F7278 * ___skillManager_4;

public:
	inline static int32_t get_offset_of_skillManager_4() { return static_cast<int32_t>(offsetof(SkillManager_t922C3F2076730BE87514F83311A3752C621F7278_StaticFields, ___skillManager_4)); }
	inline SkillManager_t922C3F2076730BE87514F83311A3752C621F7278 * get_skillManager_4() const { return ___skillManager_4; }
	inline SkillManager_t922C3F2076730BE87514F83311A3752C621F7278 ** get_address_of_skillManager_4() { return &___skillManager_4; }
	inline void set_skillManager_4(SkillManager_t922C3F2076730BE87514F83311A3752C621F7278 * value)
	{
		___skillManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___skillManager_4), (void*)value);
	}
};


// TeamManager
struct TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<Castle> TeamManager::Castles
	List_1_t82C8BE4340B2B0C5DB5EB0BC5EA0751F69E2B1A4 * ___Castles_4;

public:
	inline static int32_t get_offset_of_Castles_4() { return static_cast<int32_t>(offsetof(TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535, ___Castles_4)); }
	inline List_1_t82C8BE4340B2B0C5DB5EB0BC5EA0751F69E2B1A4 * get_Castles_4() const { return ___Castles_4; }
	inline List_1_t82C8BE4340B2B0C5DB5EB0BC5EA0751F69E2B1A4 ** get_address_of_Castles_4() { return &___Castles_4; }
	inline void set_Castles_4(List_1_t82C8BE4340B2B0C5DB5EB0BC5EA0751F69E2B1A4 * value)
	{
		___Castles_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Castles_4), (void*)value);
	}
};

struct TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_StaticFields
{
public:
	// TeamManager TeamManager::teamManager
	TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535 * ___teamManager_5;

public:
	inline static int32_t get_offset_of_teamManager_5() { return static_cast<int32_t>(offsetof(TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_StaticFields, ___teamManager_5)); }
	inline TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535 * get_teamManager_5() const { return ___teamManager_5; }
	inline TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535 ** get_address_of_teamManager_5() { return &___teamManager_5; }
	inline void set_teamManager_5(TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535 * value)
	{
		___teamManager_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___teamManager_5), (void*)value);
	}
};


// TouchManager
struct TouchManager_t251D826C6882E59C9018F77827CBC73959F7A9D1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Camera TouchManager::cam
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam_4;
	// UnityEngine.GameObject TouchManager::ClickBuilding
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ClickBuilding_5;
	// UnityEngine.RaycastHit TouchManager::hit
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  ___hit_6;
	// System.Boolean TouchManager::BuildingMoveOn
	bool ___BuildingMoveOn_7;

public:
	inline static int32_t get_offset_of_cam_4() { return static_cast<int32_t>(offsetof(TouchManager_t251D826C6882E59C9018F77827CBC73959F7A9D1, ___cam_4)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_cam_4() const { return ___cam_4; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_cam_4() { return &___cam_4; }
	inline void set_cam_4(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___cam_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cam_4), (void*)value);
	}

	inline static int32_t get_offset_of_ClickBuilding_5() { return static_cast<int32_t>(offsetof(TouchManager_t251D826C6882E59C9018F77827CBC73959F7A9D1, ___ClickBuilding_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ClickBuilding_5() const { return ___ClickBuilding_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ClickBuilding_5() { return &___ClickBuilding_5; }
	inline void set_ClickBuilding_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ClickBuilding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClickBuilding_5), (void*)value);
	}

	inline static int32_t get_offset_of_hit_6() { return static_cast<int32_t>(offsetof(TouchManager_t251D826C6882E59C9018F77827CBC73959F7A9D1, ___hit_6)); }
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  get_hit_6() const { return ___hit_6; }
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * get_address_of_hit_6() { return &___hit_6; }
	inline void set_hit_6(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  value)
	{
		___hit_6 = value;
	}

	inline static int32_t get_offset_of_BuildingMoveOn_7() { return static_cast<int32_t>(offsetof(TouchManager_t251D826C6882E59C9018F77827CBC73959F7A9D1, ___BuildingMoveOn_7)); }
	inline bool get_BuildingMoveOn_7() const { return ___BuildingMoveOn_7; }
	inline bool* get_address_of_BuildingMoveOn_7() { return &___BuildingMoveOn_7; }
	inline void set_BuildingMoveOn_7(bool value)
	{
		___BuildingMoveOn_7 = value;
	}
};


// TouchPad
struct TouchPad_t0BAA54FA8F10C824858FE60E2D158A2D935E026A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.RectTransform TouchPad::_touchPad
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ____touchPad_4;
	// System.Int32 TouchPad::_touchId
	int32_t ____touchId_5;
	// UnityEngine.Vector3 TouchPad::_StartPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____StartPos_6;
	// System.Single TouchPad::_dragRadius
	float ____dragRadius_7;
	// System.Boolean TouchPad::_buttonPressed
	bool ____buttonPressed_8;

public:
	inline static int32_t get_offset_of__touchPad_4() { return static_cast<int32_t>(offsetof(TouchPad_t0BAA54FA8F10C824858FE60E2D158A2D935E026A, ____touchPad_4)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get__touchPad_4() const { return ____touchPad_4; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of__touchPad_4() { return &____touchPad_4; }
	inline void set__touchPad_4(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		____touchPad_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____touchPad_4), (void*)value);
	}

	inline static int32_t get_offset_of__touchId_5() { return static_cast<int32_t>(offsetof(TouchPad_t0BAA54FA8F10C824858FE60E2D158A2D935E026A, ____touchId_5)); }
	inline int32_t get__touchId_5() const { return ____touchId_5; }
	inline int32_t* get_address_of__touchId_5() { return &____touchId_5; }
	inline void set__touchId_5(int32_t value)
	{
		____touchId_5 = value;
	}

	inline static int32_t get_offset_of__StartPos_6() { return static_cast<int32_t>(offsetof(TouchPad_t0BAA54FA8F10C824858FE60E2D158A2D935E026A, ____StartPos_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__StartPos_6() const { return ____StartPos_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__StartPos_6() { return &____StartPos_6; }
	inline void set__StartPos_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____StartPos_6 = value;
	}

	inline static int32_t get_offset_of__dragRadius_7() { return static_cast<int32_t>(offsetof(TouchPad_t0BAA54FA8F10C824858FE60E2D158A2D935E026A, ____dragRadius_7)); }
	inline float get__dragRadius_7() const { return ____dragRadius_7; }
	inline float* get_address_of__dragRadius_7() { return &____dragRadius_7; }
	inline void set__dragRadius_7(float value)
	{
		____dragRadius_7 = value;
	}

	inline static int32_t get_offset_of__buttonPressed_8() { return static_cast<int32_t>(offsetof(TouchPad_t0BAA54FA8F10C824858FE60E2D158A2D935E026A, ____buttonPressed_8)); }
	inline bool get__buttonPressed_8() const { return ____buttonPressed_8; }
	inline bool* get_address_of__buttonPressed_8() { return &____buttonPressed_8; }
	inline void set__buttonPressed_8(bool value)
	{
		____buttonPressed_8 = value;
	}
};

struct TouchPad_t0BAA54FA8F10C824858FE60E2D158A2D935E026A_StaticFields
{
public:
	// Player TouchPad::playerMovement
	Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * ___playerMovement_9;

public:
	inline static int32_t get_offset_of_playerMovement_9() { return static_cast<int32_t>(offsetof(TouchPad_t0BAA54FA8F10C824858FE60E2D158A2D935E026A_StaticFields, ___playerMovement_9)); }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * get_playerMovement_9() const { return ___playerMovement_9; }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F ** get_address_of_playerMovement_9() { return &___playerMovement_9; }
	inline void set_playerMovement_9(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * value)
	{
		___playerMovement_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerMovement_9), (void*)value);
	}
};


// Archer
struct Archer_t4C3B2405C88227C59EE61DB1A03C516282BCE6CB  : public Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8
{
public:
	// UnityEngine.Transform Archer::Pos
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___Pos_23;

public:
	inline static int32_t get_offset_of_Pos_23() { return static_cast<int32_t>(offsetof(Archer_t4C3B2405C88227C59EE61DB1A03C516282BCE6CB, ___Pos_23)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_Pos_23() const { return ___Pos_23; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_Pos_23() { return &___Pos_23; }
	inline void set_Pos_23(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___Pos_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Pos_23), (void*)value);
	}
};


// AttackBuilding
struct AttackBuilding_t35CB28B6CDF4EFB4E3A43E9864DB4A2BF03C15C7  : public Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5
{
public:
	// System.Int32 AttackBuilding::attackDamage
	int32_t ___attackDamage_14;
	// System.Int32 AttackBuilding::prevAttackDamage
	int32_t ___prevAttackDamage_15;
	// System.Int32 AttackBuilding::attackRange
	int32_t ___attackRange_16;
	// System.Int32 AttackBuilding::prevAttackRange
	int32_t ___prevAttackRange_17;
	// System.Single AttackBuilding::attackCoolTime
	float ___attackCoolTime_18;
	// System.Boolean AttackBuilding::work
	bool ___work_19;

public:
	inline static int32_t get_offset_of_attackDamage_14() { return static_cast<int32_t>(offsetof(AttackBuilding_t35CB28B6CDF4EFB4E3A43E9864DB4A2BF03C15C7, ___attackDamage_14)); }
	inline int32_t get_attackDamage_14() const { return ___attackDamage_14; }
	inline int32_t* get_address_of_attackDamage_14() { return &___attackDamage_14; }
	inline void set_attackDamage_14(int32_t value)
	{
		___attackDamage_14 = value;
	}

	inline static int32_t get_offset_of_prevAttackDamage_15() { return static_cast<int32_t>(offsetof(AttackBuilding_t35CB28B6CDF4EFB4E3A43E9864DB4A2BF03C15C7, ___prevAttackDamage_15)); }
	inline int32_t get_prevAttackDamage_15() const { return ___prevAttackDamage_15; }
	inline int32_t* get_address_of_prevAttackDamage_15() { return &___prevAttackDamage_15; }
	inline void set_prevAttackDamage_15(int32_t value)
	{
		___prevAttackDamage_15 = value;
	}

	inline static int32_t get_offset_of_attackRange_16() { return static_cast<int32_t>(offsetof(AttackBuilding_t35CB28B6CDF4EFB4E3A43E9864DB4A2BF03C15C7, ___attackRange_16)); }
	inline int32_t get_attackRange_16() const { return ___attackRange_16; }
	inline int32_t* get_address_of_attackRange_16() { return &___attackRange_16; }
	inline void set_attackRange_16(int32_t value)
	{
		___attackRange_16 = value;
	}

	inline static int32_t get_offset_of_prevAttackRange_17() { return static_cast<int32_t>(offsetof(AttackBuilding_t35CB28B6CDF4EFB4E3A43E9864DB4A2BF03C15C7, ___prevAttackRange_17)); }
	inline int32_t get_prevAttackRange_17() const { return ___prevAttackRange_17; }
	inline int32_t* get_address_of_prevAttackRange_17() { return &___prevAttackRange_17; }
	inline void set_prevAttackRange_17(int32_t value)
	{
		___prevAttackRange_17 = value;
	}

	inline static int32_t get_offset_of_attackCoolTime_18() { return static_cast<int32_t>(offsetof(AttackBuilding_t35CB28B6CDF4EFB4E3A43E9864DB4A2BF03C15C7, ___attackCoolTime_18)); }
	inline float get_attackCoolTime_18() const { return ___attackCoolTime_18; }
	inline float* get_address_of_attackCoolTime_18() { return &___attackCoolTime_18; }
	inline void set_attackCoolTime_18(float value)
	{
		___attackCoolTime_18 = value;
	}

	inline static int32_t get_offset_of_work_19() { return static_cast<int32_t>(offsetof(AttackBuilding_t35CB28B6CDF4EFB4E3A43E9864DB4A2BF03C15C7, ___work_19)); }
	inline bool get_work_19() const { return ___work_19; }
	inline bool* get_address_of_work_19() { return &___work_19; }
	inline void set_work_19(bool value)
	{
		___work_19 = value;
	}
};


// Castle
struct Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57  : public Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5
{
public:
	// System.Int32 Castle::MaxbuildingNum
	int32_t ___MaxbuildingNum_14;
	// System.Int32 Castle::PrevBuildingNum
	int32_t ___PrevBuildingNum_15;
	// System.Int32 Castle::MaxUnitNum
	int32_t ___MaxUnitNum_16;
	// System.Int32 Castle::PrevUnitNum
	int32_t ___PrevUnitNum_17;
	// System.Collections.Generic.List`1<Building> Castle::buildings
	List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE * ___buildings_18;
	// System.Collections.Generic.List`1<Character> Castle::units
	List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 * ___units_19;
	// TeamManager/BuildingWork Castle::unitProduce
	BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * ___unitProduce_20;
	// TeamManager/BuildingWork Castle::attackBuildingWork
	BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * ___attackBuildingWork_21;
	// System.Boolean Castle::unitproduce
	bool ___unitproduce_22;
	// System.Boolean Castle::attackWork
	bool ___attackWork_23;

public:
	inline static int32_t get_offset_of_MaxbuildingNum_14() { return static_cast<int32_t>(offsetof(Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57, ___MaxbuildingNum_14)); }
	inline int32_t get_MaxbuildingNum_14() const { return ___MaxbuildingNum_14; }
	inline int32_t* get_address_of_MaxbuildingNum_14() { return &___MaxbuildingNum_14; }
	inline void set_MaxbuildingNum_14(int32_t value)
	{
		___MaxbuildingNum_14 = value;
	}

	inline static int32_t get_offset_of_PrevBuildingNum_15() { return static_cast<int32_t>(offsetof(Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57, ___PrevBuildingNum_15)); }
	inline int32_t get_PrevBuildingNum_15() const { return ___PrevBuildingNum_15; }
	inline int32_t* get_address_of_PrevBuildingNum_15() { return &___PrevBuildingNum_15; }
	inline void set_PrevBuildingNum_15(int32_t value)
	{
		___PrevBuildingNum_15 = value;
	}

	inline static int32_t get_offset_of_MaxUnitNum_16() { return static_cast<int32_t>(offsetof(Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57, ___MaxUnitNum_16)); }
	inline int32_t get_MaxUnitNum_16() const { return ___MaxUnitNum_16; }
	inline int32_t* get_address_of_MaxUnitNum_16() { return &___MaxUnitNum_16; }
	inline void set_MaxUnitNum_16(int32_t value)
	{
		___MaxUnitNum_16 = value;
	}

	inline static int32_t get_offset_of_PrevUnitNum_17() { return static_cast<int32_t>(offsetof(Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57, ___PrevUnitNum_17)); }
	inline int32_t get_PrevUnitNum_17() const { return ___PrevUnitNum_17; }
	inline int32_t* get_address_of_PrevUnitNum_17() { return &___PrevUnitNum_17; }
	inline void set_PrevUnitNum_17(int32_t value)
	{
		___PrevUnitNum_17 = value;
	}

	inline static int32_t get_offset_of_buildings_18() { return static_cast<int32_t>(offsetof(Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57, ___buildings_18)); }
	inline List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE * get_buildings_18() const { return ___buildings_18; }
	inline List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE ** get_address_of_buildings_18() { return &___buildings_18; }
	inline void set_buildings_18(List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE * value)
	{
		___buildings_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buildings_18), (void*)value);
	}

	inline static int32_t get_offset_of_units_19() { return static_cast<int32_t>(offsetof(Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57, ___units_19)); }
	inline List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 * get_units_19() const { return ___units_19; }
	inline List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 ** get_address_of_units_19() { return &___units_19; }
	inline void set_units_19(List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 * value)
	{
		___units_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___units_19), (void*)value);
	}

	inline static int32_t get_offset_of_unitProduce_20() { return static_cast<int32_t>(offsetof(Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57, ___unitProduce_20)); }
	inline BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * get_unitProduce_20() const { return ___unitProduce_20; }
	inline BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF ** get_address_of_unitProduce_20() { return &___unitProduce_20; }
	inline void set_unitProduce_20(BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * value)
	{
		___unitProduce_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unitProduce_20), (void*)value);
	}

	inline static int32_t get_offset_of_attackBuildingWork_21() { return static_cast<int32_t>(offsetof(Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57, ___attackBuildingWork_21)); }
	inline BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * get_attackBuildingWork_21() const { return ___attackBuildingWork_21; }
	inline BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF ** get_address_of_attackBuildingWork_21() { return &___attackBuildingWork_21; }
	inline void set_attackBuildingWork_21(BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * value)
	{
		___attackBuildingWork_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attackBuildingWork_21), (void*)value);
	}

	inline static int32_t get_offset_of_unitproduce_22() { return static_cast<int32_t>(offsetof(Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57, ___unitproduce_22)); }
	inline bool get_unitproduce_22() const { return ___unitproduce_22; }
	inline bool* get_address_of_unitproduce_22() { return &___unitproduce_22; }
	inline void set_unitproduce_22(bool value)
	{
		___unitproduce_22 = value;
	}

	inline static int32_t get_offset_of_attackWork_23() { return static_cast<int32_t>(offsetof(Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57, ___attackWork_23)); }
	inline bool get_attackWork_23() const { return ___attackWork_23; }
	inline bool* get_address_of_attackWork_23() { return &___attackWork_23; }
	inline void set_attackWork_23(bool value)
	{
		___attackWork_23 = value;
	}
};


// MakeBuilding
struct MakeBuilding_tA7888BB568D7BDF05AF62A24D5F3C03075D9894C  : public Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5
{
public:
	// System.Single MakeBuilding::makeCoolTime
	float ___makeCoolTime_14;
	// System.Single MakeBuilding::prevMakeCoolTime
	float ___prevMakeCoolTime_15;
	// System.Boolean MakeBuilding::posibleProduce
	bool ___posibleProduce_16;

public:
	inline static int32_t get_offset_of_makeCoolTime_14() { return static_cast<int32_t>(offsetof(MakeBuilding_tA7888BB568D7BDF05AF62A24D5F3C03075D9894C, ___makeCoolTime_14)); }
	inline float get_makeCoolTime_14() const { return ___makeCoolTime_14; }
	inline float* get_address_of_makeCoolTime_14() { return &___makeCoolTime_14; }
	inline void set_makeCoolTime_14(float value)
	{
		___makeCoolTime_14 = value;
	}

	inline static int32_t get_offset_of_prevMakeCoolTime_15() { return static_cast<int32_t>(offsetof(MakeBuilding_tA7888BB568D7BDF05AF62A24D5F3C03075D9894C, ___prevMakeCoolTime_15)); }
	inline float get_prevMakeCoolTime_15() const { return ___prevMakeCoolTime_15; }
	inline float* get_address_of_prevMakeCoolTime_15() { return &___prevMakeCoolTime_15; }
	inline void set_prevMakeCoolTime_15(float value)
	{
		___prevMakeCoolTime_15 = value;
	}

	inline static int32_t get_offset_of_posibleProduce_16() { return static_cast<int32_t>(offsetof(MakeBuilding_tA7888BB568D7BDF05AF62A24D5F3C03075D9894C, ___posibleProduce_16)); }
	inline bool get_posibleProduce_16() const { return ___posibleProduce_16; }
	inline bool* get_address_of_posibleProduce_16() { return &___posibleProduce_16; }
	inline void set_posibleProduce_16(bool value)
	{
		___posibleProduce_16 = value;
	}
};


// Warrior
struct Warrior_tECD1FF939DB86C416627FC8DB54EAC1B03B3F3F8  : public Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8
{
public:
	// System.Int32 Warrior::BuidingTargetRange
	int32_t ___BuidingTargetRange_23;
	// System.Int32 Warrior::UnitTargetRange
	int32_t ___UnitTargetRange_24;

public:
	inline static int32_t get_offset_of_BuidingTargetRange_23() { return static_cast<int32_t>(offsetof(Warrior_tECD1FF939DB86C416627FC8DB54EAC1B03B3F3F8, ___BuidingTargetRange_23)); }
	inline int32_t get_BuidingTargetRange_23() const { return ___BuidingTargetRange_23; }
	inline int32_t* get_address_of_BuidingTargetRange_23() { return &___BuidingTargetRange_23; }
	inline void set_BuidingTargetRange_23(int32_t value)
	{
		___BuidingTargetRange_23 = value;
	}

	inline static int32_t get_offset_of_UnitTargetRange_24() { return static_cast<int32_t>(offsetof(Warrior_tECD1FF939DB86C416627FC8DB54EAC1B03B3F3F8, ___UnitTargetRange_24)); }
	inline int32_t get_UnitTargetRange_24() const { return ___UnitTargetRange_24; }
	inline int32_t* get_address_of_UnitTargetRange_24() { return &___UnitTargetRange_24; }
	inline void set_UnitTargetRange_24(int32_t value)
	{
		___UnitTargetRange_24 = value;
	}
};


// ArcherBuilding
struct ArcherBuilding_t927C6CDC9E67F62A4616818F8C55BBBE987840C2  : public MakeBuilding_tA7888BB568D7BDF05AF62A24D5F3C03075D9894C
{
public:

public:
};


// ArcherHero
struct ArcherHero_tE7562C3518DA3F2A90CDE1B5A445CE2900D74B9A  : public Archer_t4C3B2405C88227C59EE61DB1A03C516282BCE6CB
{
public:
	// System.Single ArcherHero::skill1CoolTime
	float ___skill1CoolTime_24;
	// System.Single ArcherHero::prevSkill1CoolTime
	float ___prevSkill1CoolTime_25;
	// System.Single ArcherHero::Skill1Duration
	float ___Skill1Duration_26;
	// System.Single ArcherHero::prevSkill1Duration
	float ___prevSkill1Duration_27;
	// System.Single ArcherHero::skill1XSpeed
	float ___skill1XSpeed_28;
	// System.Single ArcherHero::prevskill1XSpeed
	float ___prevskill1XSpeed_29;
	// System.Single ArcherHero::skill2CoolTime
	float ___skill2CoolTime_31;
	// System.Single ArcherHero::prevSkill2CoolTime
	float ___prevSkill2CoolTime_32;
	// System.Single ArcherHero::SkillAngle
	float ___SkillAngle_33;

public:
	inline static int32_t get_offset_of_skill1CoolTime_24() { return static_cast<int32_t>(offsetof(ArcherHero_tE7562C3518DA3F2A90CDE1B5A445CE2900D74B9A, ___skill1CoolTime_24)); }
	inline float get_skill1CoolTime_24() const { return ___skill1CoolTime_24; }
	inline float* get_address_of_skill1CoolTime_24() { return &___skill1CoolTime_24; }
	inline void set_skill1CoolTime_24(float value)
	{
		___skill1CoolTime_24 = value;
	}

	inline static int32_t get_offset_of_prevSkill1CoolTime_25() { return static_cast<int32_t>(offsetof(ArcherHero_tE7562C3518DA3F2A90CDE1B5A445CE2900D74B9A, ___prevSkill1CoolTime_25)); }
	inline float get_prevSkill1CoolTime_25() const { return ___prevSkill1CoolTime_25; }
	inline float* get_address_of_prevSkill1CoolTime_25() { return &___prevSkill1CoolTime_25; }
	inline void set_prevSkill1CoolTime_25(float value)
	{
		___prevSkill1CoolTime_25 = value;
	}

	inline static int32_t get_offset_of_Skill1Duration_26() { return static_cast<int32_t>(offsetof(ArcherHero_tE7562C3518DA3F2A90CDE1B5A445CE2900D74B9A, ___Skill1Duration_26)); }
	inline float get_Skill1Duration_26() const { return ___Skill1Duration_26; }
	inline float* get_address_of_Skill1Duration_26() { return &___Skill1Duration_26; }
	inline void set_Skill1Duration_26(float value)
	{
		___Skill1Duration_26 = value;
	}

	inline static int32_t get_offset_of_prevSkill1Duration_27() { return static_cast<int32_t>(offsetof(ArcherHero_tE7562C3518DA3F2A90CDE1B5A445CE2900D74B9A, ___prevSkill1Duration_27)); }
	inline float get_prevSkill1Duration_27() const { return ___prevSkill1Duration_27; }
	inline float* get_address_of_prevSkill1Duration_27() { return &___prevSkill1Duration_27; }
	inline void set_prevSkill1Duration_27(float value)
	{
		___prevSkill1Duration_27 = value;
	}

	inline static int32_t get_offset_of_skill1XSpeed_28() { return static_cast<int32_t>(offsetof(ArcherHero_tE7562C3518DA3F2A90CDE1B5A445CE2900D74B9A, ___skill1XSpeed_28)); }
	inline float get_skill1XSpeed_28() const { return ___skill1XSpeed_28; }
	inline float* get_address_of_skill1XSpeed_28() { return &___skill1XSpeed_28; }
	inline void set_skill1XSpeed_28(float value)
	{
		___skill1XSpeed_28 = value;
	}

	inline static int32_t get_offset_of_prevskill1XSpeed_29() { return static_cast<int32_t>(offsetof(ArcherHero_tE7562C3518DA3F2A90CDE1B5A445CE2900D74B9A, ___prevskill1XSpeed_29)); }
	inline float get_prevskill1XSpeed_29() const { return ___prevskill1XSpeed_29; }
	inline float* get_address_of_prevskill1XSpeed_29() { return &___prevskill1XSpeed_29; }
	inline void set_prevskill1XSpeed_29(float value)
	{
		___prevskill1XSpeed_29 = value;
	}

	inline static int32_t get_offset_of_skill2CoolTime_31() { return static_cast<int32_t>(offsetof(ArcherHero_tE7562C3518DA3F2A90CDE1B5A445CE2900D74B9A, ___skill2CoolTime_31)); }
	inline float get_skill2CoolTime_31() const { return ___skill2CoolTime_31; }
	inline float* get_address_of_skill2CoolTime_31() { return &___skill2CoolTime_31; }
	inline void set_skill2CoolTime_31(float value)
	{
		___skill2CoolTime_31 = value;
	}

	inline static int32_t get_offset_of_prevSkill2CoolTime_32() { return static_cast<int32_t>(offsetof(ArcherHero_tE7562C3518DA3F2A90CDE1B5A445CE2900D74B9A, ___prevSkill2CoolTime_32)); }
	inline float get_prevSkill2CoolTime_32() const { return ___prevSkill2CoolTime_32; }
	inline float* get_address_of_prevSkill2CoolTime_32() { return &___prevSkill2CoolTime_32; }
	inline void set_prevSkill2CoolTime_32(float value)
	{
		___prevSkill2CoolTime_32 = value;
	}

	inline static int32_t get_offset_of_SkillAngle_33() { return static_cast<int32_t>(offsetof(ArcherHero_tE7562C3518DA3F2A90CDE1B5A445CE2900D74B9A, ___SkillAngle_33)); }
	inline float get_SkillAngle_33() const { return ___SkillAngle_33; }
	inline float* get_address_of_SkillAngle_33() { return &___SkillAngle_33; }
	inline void set_SkillAngle_33(float value)
	{
		___SkillAngle_33 = value;
	}
};

struct ArcherHero_tE7562C3518DA3F2A90CDE1B5A445CE2900D74B9A_StaticFields
{
public:
	// SkillManager/Buff ArcherHero::ArcherBuff
	Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * ___ArcherBuff_30;

public:
	inline static int32_t get_offset_of_ArcherBuff_30() { return static_cast<int32_t>(offsetof(ArcherHero_tE7562C3518DA3F2A90CDE1B5A445CE2900D74B9A_StaticFields, ___ArcherBuff_30)); }
	inline Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * get_ArcherBuff_30() const { return ___ArcherBuff_30; }
	inline Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 ** get_address_of_ArcherBuff_30() { return &___ArcherBuff_30; }
	inline void set_ArcherBuff_30(Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * value)
	{
		___ArcherBuff_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ArcherBuff_30), (void*)value);
	}
};


// AttackTower
struct AttackTower_tBF17BD5CA09AC68FFDD23BB9D4F5E2DDF0059B6D  : public AttackBuilding_t35CB28B6CDF4EFB4E3A43E9864DB4A2BF03C15C7
{
public:
	// UnityEngine.Transform AttackTower::Pos
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___Pos_20;
	// UnityEngine.GameObject AttackTower::Target
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Target_21;

public:
	inline static int32_t get_offset_of_Pos_20() { return static_cast<int32_t>(offsetof(AttackTower_tBF17BD5CA09AC68FFDD23BB9D4F5E2DDF0059B6D, ___Pos_20)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_Pos_20() const { return ___Pos_20; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_Pos_20() { return &___Pos_20; }
	inline void set_Pos_20(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___Pos_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Pos_20), (void*)value);
	}

	inline static int32_t get_offset_of_Target_21() { return static_cast<int32_t>(offsetof(AttackTower_tBF17BD5CA09AC68FFDD23BB9D4F5E2DDF0059B6D, ___Target_21)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Target_21() const { return ___Target_21; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Target_21() { return &___Target_21; }
	inline void set_Target_21(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Target_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Target_21), (void*)value);
	}
};


// WarriorBuilding
struct WarriorBuilding_t4BA6BADAF2F807D1774E0C44DD7D1FE49A31F306  : public MakeBuilding_tA7888BB568D7BDF05AF62A24D5F3C03075D9894C
{
public:

public:
};


// WarriorHero
struct WarriorHero_t2FE6F90D6212AB1A498E1249F2F9CCE1406050D9  : public Warrior_tECD1FF939DB86C416627FC8DB54EAC1B03B3F3F8
{
public:
	// System.Single WarriorHero::attackAngle
	float ___attackAngle_25;
	// System.Single WarriorHero::skill1CoolTime
	float ___skill1CoolTime_26;
	// System.Single WarriorHero::prevSkill1CoolTime
	float ___prevSkill1CoolTime_27;
	// System.Single WarriorHero::Skill1Duration
	float ___Skill1Duration_28;
	// System.Single WarriorHero::prevSkill1Duration
	float ___prevSkill1Duration_29;
	// System.Single WarriorHero::skill1XSpeed
	float ___skill1XSpeed_30;
	// System.Single WarriorHero::prevskill1XSpeed
	float ___prevskill1XSpeed_31;
	// System.Single WarriorHero::skill2CoolTime
	float ___skill2CoolTime_33;
	// System.Single WarriorHero::prevSkill2CoolTime
	float ___prevSkill2CoolTime_34;
	// System.Single WarriorHero::Skill2Angle
	float ___Skill2Angle_35;
	// System.Int32 WarriorHero::Skill2Damage
	int32_t ___Skill2Damage_36;
	// System.Int32 WarriorHero::prevSkill2Damage
	int32_t ___prevSkill2Damage_37;
	// System.Single WarriorHero::Skill2Range
	float ___Skill2Range_38;

public:
	inline static int32_t get_offset_of_attackAngle_25() { return static_cast<int32_t>(offsetof(WarriorHero_t2FE6F90D6212AB1A498E1249F2F9CCE1406050D9, ___attackAngle_25)); }
	inline float get_attackAngle_25() const { return ___attackAngle_25; }
	inline float* get_address_of_attackAngle_25() { return &___attackAngle_25; }
	inline void set_attackAngle_25(float value)
	{
		___attackAngle_25 = value;
	}

	inline static int32_t get_offset_of_skill1CoolTime_26() { return static_cast<int32_t>(offsetof(WarriorHero_t2FE6F90D6212AB1A498E1249F2F9CCE1406050D9, ___skill1CoolTime_26)); }
	inline float get_skill1CoolTime_26() const { return ___skill1CoolTime_26; }
	inline float* get_address_of_skill1CoolTime_26() { return &___skill1CoolTime_26; }
	inline void set_skill1CoolTime_26(float value)
	{
		___skill1CoolTime_26 = value;
	}

	inline static int32_t get_offset_of_prevSkill1CoolTime_27() { return static_cast<int32_t>(offsetof(WarriorHero_t2FE6F90D6212AB1A498E1249F2F9CCE1406050D9, ___prevSkill1CoolTime_27)); }
	inline float get_prevSkill1CoolTime_27() const { return ___prevSkill1CoolTime_27; }
	inline float* get_address_of_prevSkill1CoolTime_27() { return &___prevSkill1CoolTime_27; }
	inline void set_prevSkill1CoolTime_27(float value)
	{
		___prevSkill1CoolTime_27 = value;
	}

	inline static int32_t get_offset_of_Skill1Duration_28() { return static_cast<int32_t>(offsetof(WarriorHero_t2FE6F90D6212AB1A498E1249F2F9CCE1406050D9, ___Skill1Duration_28)); }
	inline float get_Skill1Duration_28() const { return ___Skill1Duration_28; }
	inline float* get_address_of_Skill1Duration_28() { return &___Skill1Duration_28; }
	inline void set_Skill1Duration_28(float value)
	{
		___Skill1Duration_28 = value;
	}

	inline static int32_t get_offset_of_prevSkill1Duration_29() { return static_cast<int32_t>(offsetof(WarriorHero_t2FE6F90D6212AB1A498E1249F2F9CCE1406050D9, ___prevSkill1Duration_29)); }
	inline float get_prevSkill1Duration_29() const { return ___prevSkill1Duration_29; }
	inline float* get_address_of_prevSkill1Duration_29() { return &___prevSkill1Duration_29; }
	inline void set_prevSkill1Duration_29(float value)
	{
		___prevSkill1Duration_29 = value;
	}

	inline static int32_t get_offset_of_skill1XSpeed_30() { return static_cast<int32_t>(offsetof(WarriorHero_t2FE6F90D6212AB1A498E1249F2F9CCE1406050D9, ___skill1XSpeed_30)); }
	inline float get_skill1XSpeed_30() const { return ___skill1XSpeed_30; }
	inline float* get_address_of_skill1XSpeed_30() { return &___skill1XSpeed_30; }
	inline void set_skill1XSpeed_30(float value)
	{
		___skill1XSpeed_30 = value;
	}

	inline static int32_t get_offset_of_prevskill1XSpeed_31() { return static_cast<int32_t>(offsetof(WarriorHero_t2FE6F90D6212AB1A498E1249F2F9CCE1406050D9, ___prevskill1XSpeed_31)); }
	inline float get_prevskill1XSpeed_31() const { return ___prevskill1XSpeed_31; }
	inline float* get_address_of_prevskill1XSpeed_31() { return &___prevskill1XSpeed_31; }
	inline void set_prevskill1XSpeed_31(float value)
	{
		___prevskill1XSpeed_31 = value;
	}

	inline static int32_t get_offset_of_skill2CoolTime_33() { return static_cast<int32_t>(offsetof(WarriorHero_t2FE6F90D6212AB1A498E1249F2F9CCE1406050D9, ___skill2CoolTime_33)); }
	inline float get_skill2CoolTime_33() const { return ___skill2CoolTime_33; }
	inline float* get_address_of_skill2CoolTime_33() { return &___skill2CoolTime_33; }
	inline void set_skill2CoolTime_33(float value)
	{
		___skill2CoolTime_33 = value;
	}

	inline static int32_t get_offset_of_prevSkill2CoolTime_34() { return static_cast<int32_t>(offsetof(WarriorHero_t2FE6F90D6212AB1A498E1249F2F9CCE1406050D9, ___prevSkill2CoolTime_34)); }
	inline float get_prevSkill2CoolTime_34() const { return ___prevSkill2CoolTime_34; }
	inline float* get_address_of_prevSkill2CoolTime_34() { return &___prevSkill2CoolTime_34; }
	inline void set_prevSkill2CoolTime_34(float value)
	{
		___prevSkill2CoolTime_34 = value;
	}

	inline static int32_t get_offset_of_Skill2Angle_35() { return static_cast<int32_t>(offsetof(WarriorHero_t2FE6F90D6212AB1A498E1249F2F9CCE1406050D9, ___Skill2Angle_35)); }
	inline float get_Skill2Angle_35() const { return ___Skill2Angle_35; }
	inline float* get_address_of_Skill2Angle_35() { return &___Skill2Angle_35; }
	inline void set_Skill2Angle_35(float value)
	{
		___Skill2Angle_35 = value;
	}

	inline static int32_t get_offset_of_Skill2Damage_36() { return static_cast<int32_t>(offsetof(WarriorHero_t2FE6F90D6212AB1A498E1249F2F9CCE1406050D9, ___Skill2Damage_36)); }
	inline int32_t get_Skill2Damage_36() const { return ___Skill2Damage_36; }
	inline int32_t* get_address_of_Skill2Damage_36() { return &___Skill2Damage_36; }
	inline void set_Skill2Damage_36(int32_t value)
	{
		___Skill2Damage_36 = value;
	}

	inline static int32_t get_offset_of_prevSkill2Damage_37() { return static_cast<int32_t>(offsetof(WarriorHero_t2FE6F90D6212AB1A498E1249F2F9CCE1406050D9, ___prevSkill2Damage_37)); }
	inline int32_t get_prevSkill2Damage_37() const { return ___prevSkill2Damage_37; }
	inline int32_t* get_address_of_prevSkill2Damage_37() { return &___prevSkill2Damage_37; }
	inline void set_prevSkill2Damage_37(int32_t value)
	{
		___prevSkill2Damage_37 = value;
	}

	inline static int32_t get_offset_of_Skill2Range_38() { return static_cast<int32_t>(offsetof(WarriorHero_t2FE6F90D6212AB1A498E1249F2F9CCE1406050D9, ___Skill2Range_38)); }
	inline float get_Skill2Range_38() const { return ___Skill2Range_38; }
	inline float* get_address_of_Skill2Range_38() { return &___Skill2Range_38; }
	inline void set_Skill2Range_38(float value)
	{
		___Skill2Range_38 = value;
	}
};

struct WarriorHero_t2FE6F90D6212AB1A498E1249F2F9CCE1406050D9_StaticFields
{
public:
	// SkillManager/Buff WarriorHero::WarriorBuff
	Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * ___WarriorBuff_32;

public:
	inline static int32_t get_offset_of_WarriorBuff_32() { return static_cast<int32_t>(offsetof(WarriorHero_t2FE6F90D6212AB1A498E1249F2F9CCE1406050D9_StaticFields, ___WarriorBuff_32)); }
	inline Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * get_WarriorBuff_32() const { return ___WarriorBuff_32; }
	inline Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 ** get_address_of_WarriorBuff_32() { return &___WarriorBuff_32; }
	inline void set_WarriorBuff_32(Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * value)
	{
		___WarriorBuff_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WarriorBuff_32), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Building[]
struct BuildingU5BU5D_tCB5AB568D849E6934CDC724E3EE2A4F93F735AAF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * m_Items[1];

public:
	inline Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Character[]
struct CharacterU5BU5D_tC3A59DF23B17172AA72162D97D092689E416F84F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * m_Items[1];

public:
	inline Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SkinnedMeshRenderer[]
struct SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * m_Items[1];

public:
	inline SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.MeshRenderer[]
struct MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * m_Items[1];

public:
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Material_t8927C00353A72755313F046D0CE85178AE8218EE * m_Items[1];

public:
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// AI[]
struct AIU5BU5D_tDC519424C0BF13D583E3E51705FC1F919D1B4A8F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * m_Items[1];

public:
	inline AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Touch[]
struct TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  m_Items[1];

public:
	inline Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  value)
	{
		m_Items[index] = value;
	}
};
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
// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared (const RuntimeMethod* method);
// !0 System.Nullable`1<System.Single>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Nullable_1_GetValueOrDefault_mD05253A5EFE2AA2575CC36BD681FFB5638B9F560_gshared_inline (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_gshared_inline (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Single>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A_gshared (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, float ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Resources::LoadAll<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Resources_LoadAll_TisRuntimeObject_m70F6C48BD50F3B57D39D3B8A82D2F4DD2BDC3CC7_gshared (String_t* ___path0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Resources_Load_TisRuntimeObject_m39B6A35CFE684CD1FFF77873E20D7297B36A55E8_gshared (String_t* ___path0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);

// !!0 UnityEngine.Component::GetComponent<UnityEngine.AI.NavMeshAgent>()
inline NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<Character>()
inline Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * Component_GetComponent_TisCharacter_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8_mCE9C8FBED5DFAB4F42CAF2E2B6AF02948C416C12 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void AI::set_state(IState/State)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AI_set_state_mFC708276BB1FD713B9E3D9CD1E9ECD39F61F2414_inline (AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 Character::get_AttackRange()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Character_get_AttackRange_m8AE154780E830109F962389ED3B0EFB8C73A1653_inline (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AI.NavMeshAgent::set_stoppingDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_stoppingDistance_m9D26543E5329CE08A147EA11AECF8BB3996121C8 (NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * __this, float ___value0, const RuntimeMethod* method);
// System.Collections.IEnumerator AI::AIState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AI_AIState_m72149402E13A74788D23E7C63903C47F4BD80C95 (AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void AI/<AIState>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAIStateU3Ed__12__ctor_m21A59EA334015D8C1BE609F313A3E89879EC8884 (U3CAIStateU3Ed__12_tD220B377E4D70D3154CA17E2D0B34F0C86A63BE3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<Character>()
inline CharacterU5BU5D_tC3A59DF23B17172AA72162D97D092689E416F84F* Object_FindObjectsOfType_TisCharacter_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8_m54EC88C2F01AEFA7F175DD0AC517CBDDD588D555 (const RuntimeMethod* method)
{
	return ((  CharacterU5BU5D_tC3A59DF23B17172AA72162D97D092689E416F84F* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared)(method);
}
// !!0[] UnityEngine.Object::FindObjectsOfType<Building>()
inline BuildingU5BU5D_tCB5AB568D849E6934CDC724E3EE2A4F93F735AAF* Object_FindObjectsOfType_TisBuilding_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5_m4B4787CA74290A14A3F46C40943F1C248D0AA891 (const RuntimeMethod* method)
{
	return ((  BuildingU5BU5D_tCB5AB568D849E6934CDC724E3EE2A4F93F735AAF* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared)(method);
}
// System.Int32 Character::get_Team()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Character_get_Team_m7778D19EA7B882EC0979B5CCA0CF0BA9D41ECF5D_inline (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, const RuntimeMethod* method);
// System.Int32 Character::get_Hp()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Character_get_Hp_m258775AC8D73AE39E8088098A8EEEC0449CD1C37_inline (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Single>::GetValueOrDefault()
inline float Nullable_1_GetValueOrDefault_mD05253A5EFE2AA2575CC36BD681FFB5638B9F560_inline (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method)
{
	return ((  float (*) (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mD05253A5EFE2AA2575CC36BD681FFB5638B9F560_gshared_inline)(__this, method);
}
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
inline bool Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_inline (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *, const RuntimeMethod*))Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_gshared_inline)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Single>::.ctor(!0)
inline void Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, float ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *, float, const RuntimeMethod*))Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A_gshared)(__this, ___value0, method);
}
// System.Int32 Building::get_Team()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Building_get_Team_m29511AB7E5D15B834E7D1229493A037B64199BF0_inline (Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * __this, const RuntimeMethod* method);
// System.Int32 Building::get_Hp()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Building_get_Hp_m02B74A57F2F4BE3D26F4AF5E8D9CF4E9221D2191_inline (Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * __this, const RuntimeMethod* method);
// System.Void AI::TargetSet(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AI_TargetSet_mA87FE2352B3EA19F6A73B4B1C9BC9EBCC935C6A2 (AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Target0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_mD731F47ED44C2D629F8E1C6DB15629C3E1B992A0 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.AI.NavMeshAgent::set_isStopped(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_isStopped_m3258581121A85B9F8BC02FCC2111B15506A26896 (NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 Character::get_Speed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Character_get_Speed_mDF65D05479D45DB5079CC2B36A49B92B1C4ED7EA_inline (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AI.NavMeshAgent::set_speed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_speed_mE71CB504B0CC1E977293722F9BA81B7060A99E14 (NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AI.NavMeshAgent::set_destination(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_destination_m0EC1C668AD85AC1B26AABF54337D7D0849F760E7 (NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.AI.NavMeshAgent::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  NavMeshAgent_get_velocity_mA6F25F6B38D5092BBE6DECD77F8FDB93D5C515C9 (NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Single Character::get_AttackSpeed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Character_get_AttackSpeed_m0BFFD203BF86CD75E43C8506EA149319B7F39597_inline (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, const RuntimeMethod* method);
// System.Void AI::AttackDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AI_AttackDelay_m329FC6AE85637C6D07D78A04045096B8ED6FEDF5 (AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void Character::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_Start_m19E14D7EC1D199C77A447BAB99FBDCA7FC91FF3B (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, const RuntimeMethod* method);
// System.Void SkillManager/Buff::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buff__ctor_m7AF50D5CAE8E64F1299994E67AD0D08CB8062340 (Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void ArcherHero::add_ArcherBuff(SkillManager/Buff)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArcherHero_add_ArcherBuff_mAE580A3A07C6C6ED0B48271AE460EB14D0C7DB98 (Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_m49185D782014D16DA747C1296BEBAC3FB3CEDC1F (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target0, const RuntimeMethod* method);
// UnityEngine.GameObject PoolManager::GetArrow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PoolManager_GetArrow_mAABF78A265F23244D30DC8451D8753839598204E (PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<Arrow>()
inline Arrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A * GameObject_GetComponentInChildren_TisArrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A_mF3D956E1684A01B627E0B9C4F54870ADE244B88F (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Arrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared)(__this, method);
}
// System.Void Arrow::set_Team(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Arrow_set_Team_m5F43E4628FB394F4A8D4240772A145A25D3F49ED (Arrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 Character::get_AttackDamage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Character_get_AttackDamage_mC9305B6E2C8278E2CBA6961F0946E50A0D41A494_inline (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, const RuntimeMethod* method);
// System.Void Arrow::Damaged(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Arrow_Damaged_mF34FE8CB3D945CC4EA33FDFDDC3478850CF1F63C (Arrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A * __this, int32_t ___Damaged0, int32_t ___team1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void Arrow::TargetSet(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Arrow_TargetSet_mDB625A1637CF3949CC42DB8093359C5471F1248C (Arrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___target0, const RuntimeMethod* method);
// System.Void Character::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character__ctor_mC9E775D49A9CE6DD699D3C59405E734464FDCDC2 (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject PoolManager::GetArcher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PoolManager_GetArcher_mFF8F8120B106D233603D2ACAD65C733930E6C7A5 (PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * __this, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83 (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * __this, const RuntimeMethod* method);
// System.Void MakeBuilding::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MakeBuilding__ctor_m8C8B358F785D2DA3DA70894219D55FBA93847475 (MakeBuilding_tA7888BB568D7BDF05AF62A24D5F3C03075D9894C * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Single ArcherHero::get_Skill2CoolTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ArcherHero_get_Skill2CoolTime_m493DD31AE1658D3BAEEC7BB822BF607CE4001C0D_inline (ArcherHero_tE7562C3518DA3F2A90CDE1B5A445CE2900D74B9A * __this, const RuntimeMethod* method);
// System.Void Character::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_Awake_mC74EB243B311BCC8D789F0C75169EF2BBB3E6D76 (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, const RuntimeMethod* method);
// System.Void SkillManager/Buff::Invoke(System.Single,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buff_Invoke_m0AD44033D94CEA7BF28028E62E635F3A14534545 (Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * __this, float ___xSpeed0, int32_t ____team1, float ___Duration2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Character>::.ctor()
inline void List_1__ctor_mE576755FB05B5C38187D21DEAEF8DD460C905372 (List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Character>::Add(!0)
inline void List_1_Add_m670A03E313664D645E455FDA1F182BEB40EEE993 (List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 * __this, Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 *, Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void Character::UnitSet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_UnitSet_mB8DD65322A8F6F6DB08DB8902DE3B43766AE2BDB (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, const RuntimeMethod* method);
// System.Void Archer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Archer__ctor_mD936C2175E847819CF06DC2F8847FB2E189FB005 (Archer_t4C3B2405C88227C59EE61DB1A03C516282BCE6CB * __this, const RuntimeMethod* method);
// System.Void Arrow::SetTeamColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Arrow_SetTeamColor_m93DA8A7D8619464F1C21727BC7D2D98C9F334979 (Arrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, int32_t ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.SkinnedMeshRenderer>()
inline SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED* Component_GetComponentsInChildren_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_mDC1EE7E2332C6862976FA026EB6ED1B3EB4E142D (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared)(__this, method);
}
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.MeshRenderer>()
inline MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* Component_GetComponentsInChildren_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m5421192AB2FFE9765BB0D6C21CDE3D51D32BCF2A (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Transform>()
inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0[] UnityEngine.Resources::LoadAll<UnityEngine.Material>(System.String)
inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* Resources_LoadAll_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_mA1CF9E54996571EFE7094BDE018205CF1EB5D277 (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* (*) (String_t*, const RuntimeMethod*))Resources_LoadAll_TisRuntimeObject_m70F6C48BD50F3B57D39D3B8A82D2F4DD2BDC3CC7_gshared)(___path0, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Collider>()
inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * Component_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mCE49E8783A1794715E6D539C8BB8C78CC589AB60 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___value0, const RuntimeMethod* method);
// System.Int32 Arrow::get_Team()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Arrow_get_Team_m504EDAC6B76917193980926ADE305F75A5906AB4_inline (Arrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m78B9D94F505E19F3C63461362AD6DE7EA0836700 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___force0, int32_t ___mode1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___euler0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Collision_get_gameObject_m5682F872FD28419AA36F0651CE8B19825A21859D (Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SendMessage_m9727C08D6F0A5E8F309FA9FFF389ADF8130D7BE7 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___methodName0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1 (Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::Sleep()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_Sleep_m60350AEF3E52D57FBE448CADBC06BA98DAEA2115 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, const RuntimeMethod* method);
// System.Void Building::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Building_OnEnable_m0CD76EAB1A7337383EC0951E0A76900F45EC741C (Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator AttackBuilding::AttackTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AttackBuilding_AttackTarget_mF9C0C0621DAEFFBD5B3B9899837A9253EB6EC631 (AttackBuilding_t35CB28B6CDF4EFB4E3A43E9864DB4A2BF03C15C7 * __this, const RuntimeMethod* method);
// System.Void AttackBuilding/<AttackTarget>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackTargetU3Ed__13__ctor_mD38B377B72DBEAFBC7D902412B14EF1EA192F23B (U3CAttackTargetU3Ed__13_t28A1D1583ACED10AC092FC6F857F4BCA92D34023 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Angle_m3715AB03A36C59D8CF08F8D71E2F46454EB884C1 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___from0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___to1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<Character> TeamManager::enemyTeamCharacter(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 * TeamManager_enemyTeamCharacter_mD94E7B248BD43A76D59DB444873D46917AD8D36B (TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535 * __this, int32_t ____team0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Character>::GetEnumerator()
inline Enumerator_t649D2193B2B6C28E89B82247B1D28A30D3548F50  List_1_GetEnumerator_mAD390AB027224D023EB048D3F7DDC684D69CAF5F (List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t649D2193B2B6C28E89B82247B1D28A30D3548F50  (*) (List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Character>::get_Current()
inline Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * Enumerator_get_Current_m1319FB9221759F3330354B81668E10047A4B1F17_inline (Enumerator_t649D2193B2B6C28E89B82247B1D28A30D3548F50 * __this, const RuntimeMethod* method)
{
	return ((  Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * (*) (Enumerator_t649D2193B2B6C28E89B82247B1D28A30D3548F50 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Character>::MoveNext()
inline bool Enumerator_MoveNext_m61560064357E7BA96F0D31503834ED5AD39BF1D2 (Enumerator_t649D2193B2B6C28E89B82247B1D28A30D3548F50 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t649D2193B2B6C28E89B82247B1D28A30D3548F50 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Character>::Dispose()
inline void Enumerator_Dispose_m269393C54BD0A12D8236C0C4CF64AE91D132C8E8 (Enumerator_t649D2193B2B6C28E89B82247B1D28A30D3548F50 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t649D2193B2B6C28E89B82247B1D28A30D3548F50 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void Building::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Building__ctor_mB1BAA261A5F238A037725FDDD528390DCA177239 (Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Character>()
inline Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * GameObject_GetComponent_TisCharacter_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8_mBE9C21DF0A03E3EFD7D08B0754A1BB6D4D94CA78 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.GameObject AttackBuilding::NearlyTargetSet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * AttackBuilding_NearlyTargetSet_mF8D112DD46881488E0BF5B21E12EA3DBF592C872 (AttackBuilding_t35CB28B6CDF4EFB4E3A43E9864DB4A2BF03C15C7 * __this, const RuntimeMethod* method);
// System.Int32 AttackBuilding::get_AttackRange()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AttackBuilding_get_AttackRange_m48F21C52D55F0C98C1F2065620C9F93BCC3434B3_inline (AttackBuilding_t35CB28B6CDF4EFB4E3A43E9864DB4A2BF03C15C7 * __this, const RuntimeMethod* method);
// System.Boolean AttackBuilding::AttackRangeFucn(UnityEngine.Transform,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AttackBuilding_AttackRangeFucn_mED56C076E9B4552A59E13C0A16430091AC8049D2 (AttackBuilding_t35CB28B6CDF4EFB4E3A43E9864DB4A2BF03C15C7 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ____Target0, float ___Angle1, float ___Range2, const RuntimeMethod* method);
// System.Int32 AttackBuilding::get_AttackDamage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AttackBuilding_get_AttackDamage_m19C39B40E1E7F21E72A8B034EF73EB46E5907ABB_inline (AttackBuilding_t35CB28B6CDF4EFB4E3A43E9864DB4A2BF03C15C7 * __this, const RuntimeMethod* method);
// System.Void AttackBuilding::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackBuilding__ctor_m60CF33289783661559016A1C6D64F08B53DB5531 (AttackBuilding_t35CB28B6CDF4EFB4E3A43E9864DB4A2BF03C15C7 * __this, const RuntimeMethod* method);
// System.Void Building::SetTeamColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Building_SetTeamColor_m54BDEFC85A43633142BBF6D4B1D0B4573FE838C0 (Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * __this, const RuntimeMethod* method);
// System.Void TeamManager::AddBuilding(System.Int32,Building)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeamManager_AddBuilding_mCD0F1A401F1BB74212BF5F03F3AE1A895B700B0B (TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535 * __this, int32_t ____team0, Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * ___build1, const RuntimeMethod* method);
// System.Void TeamManager::RemoveBuilding(System.Int32,Building)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeamManager_RemoveBuilding_mE57A301F673960E8844B6158A934C315153D9DB9 (TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535 * __this, int32_t ____team0, Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * ___build1, const RuntimeMethod* method);
// System.Void Building::DieCh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Building_DieCh_m37385A3132C73C8D3C364B7E8043F23423747921 (Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<AI>()
inline AIU5BU5D_tDC519424C0BF13D583E3E51705FC1F919D1B4A8F* Object_FindObjectsOfType_TisAI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F_m6155B9340555F4C653D8C9AB5F7EA9666AE269F1 (const RuntimeMethod* method)
{
	return ((  AIU5BU5D_tDC519424C0BF13D583E3E51705FC1F919D1B4A8F* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared)(method);
}
// System.Void UnityEngine.Component::SendMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_SendMessage_m3B002D579E5933EEFCA4024A1845CACB4FBBC208 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, String_t* ___methodName0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Castle>::Add(!0)
inline void List_1_Add_m6875E13FB00CE436458433DD47D692957B942F4E (List_1_t82C8BE4340B2B0C5DB5EB0BC5EA0751F69E2B1A4 * __this, Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t82C8BE4340B2B0C5DB5EB0BC5EA0751F69E2B1A4 *, Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void Building::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Building_Start_mD3DB4D7309EA6F30A20E897C2B9DF6F6B0DDB595 (Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * __this, const RuntimeMethod* method);
// System.Int32 Building::get_Level()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Building_get_Level_m7F56EA533DE67D9B163557CB580F66ABA0C418C0_inline (Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Character>::get_Count()
inline int32_t List_1_get_Count_mAE69DFF149AE1C2D5898152E39C2E01C2BB605C4_inline (List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void TeamManager/BuildingWork::Invoke(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingWork_Invoke_m0A2231524F9EA584E4DB5E2FBD7D0546F46BE316 (BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * __this, bool ___isOn0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Building>::.ctor()
inline void List_1__ctor_mE3B71719DFF2545B6DBA377A659B0D909CCD9481 (List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void Character::SetTeamColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_SetTeamColor_mDF49909FE7881F0EB07727AA1F25973136F08002 (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, const RuntimeMethod* method);
// System.Void TeamManager::AddUnit(System.Int32,Character)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeamManager_AddUnit_m61DCDA66A055D5E57929C363FCBDE7A1677F1537 (TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535 * __this, int32_t ____team0, Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * ___ch1, const RuntimeMethod* method);
// Castle TeamManager::TeamCastle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * TeamManager_TeamCastle_mBB4BB2E822B3EFAA0FDDEA1DB15B9FFA5A538247 (TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535 * __this, int32_t ____team0, const RuntimeMethod* method);
// System.Void Castle::populationCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Castle_populationCheck_m5C185B1228C0D004F773030DBA2C54064C315ED5 (Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * __this, const RuntimeMethod* method);
// System.Void TeamManager::RemoveUnit(System.Int32,Character)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeamManager_RemoveUnit_m53E87E5DB65E75B49385791DC8E34E15632D66A7 (TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535 * __this, int32_t ____team0, Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * ___ch1, const RuntimeMethod* method);
// System.Void Character::DieCh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_DieCh_m93FC194CDE4045CD95984E481CDF19674C93948A (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<AI>()
inline AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * Component_GetComponent_TisAI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F_mE6A091B052494D68E8F2F2E14851B630190B5A89 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void AI::AttackOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AI_AttackOff_m30E38D676AF7F10396D1FA87299A8D0C08513C96 (AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Character::SpeedUpCoro(System.Single,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Character_SpeedUpCoro_mC381929E7F0C83F9F8E4BD971670320113A0E1C9 (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, float ___xSpeed0, int32_t ____team1, float ____duration2, const RuntimeMethod* method);
// System.Void Character/<SpeedUpCoro>d__63::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeedUpCoroU3Ed__63__ctor_mE7B8E18F57C89B6A86AC49A2419D3C172C5A0B7B (U3CSpeedUpCoroU3Ed__63_t45326A9F21E161301051820A730C323510A7B31F * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// System.Collections.IEnumerator LevelManager::MybuildingSet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LevelManager_MybuildingSet_m867E67303F359EB43008EA990EBC708F90B4738C (LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * __this, const RuntimeMethod* method);
// System.Void LevelManager/<MybuildingSet>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMybuildingSetU3Ed__6__ctor_mED934C759D778C779F4007703763B87DEC733215 (U3CMybuildingSetU3Ed__6_t825B2195F8CA034AB14A2A33E75296F67E232F9B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void LevelManager/<EnemybuildingSet>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnemybuildingSetU3Ed__7__ctor_m30D09CEE1B83CAC7D87C2305A951943590AA4788 (U3CEnemybuildingSetU3Ed__7_t20A60B7D3B834C10E98F383200134D5E79A02AB4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void LevelManager/<Enemybuilding2Set>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnemybuilding2SetU3Ed__8__ctor_m9B594E70D55B1975E6D22E2F864BCE0090D0E4FA (U3CEnemybuilding2SetU3Ed__8_t17E56F4A18DD4E1399A799ADD9F1D148CD114BE1 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Building::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Building_Awake_m451508EE813C560FE7824E90E162C14CA7A70DD0 (Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * __this, const RuntimeMethod* method);
// System.Single MakeBuilding::get_MakeCoolTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MakeBuilding_get_MakeCoolTime_m7C687EFDF1EC49DCF141A91BC81B8B656A7036DE_inline (MakeBuilding_tA7888BB568D7BDF05AF62A24D5F3C03075D9894C * __this, const RuntimeMethod* method);
// System.Void TeamManager/BuildingWork::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingWork__ctor_m5CBF2FFA795D08102E89B356A2F206351D147CEF (BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Castle::add_unitProduce(TeamManager/BuildingWork)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Castle_add_unitProduce_m303DEC91854A9B9DCA8B23FE06B29D887A8C25D1 (Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * __this, BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * ___value0, const RuntimeMethod* method);
// System.Collections.IEnumerator MakeBuilding::MakeUnit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MakeBuilding_MakeUnit_m019C624931961551DD94805C20142A42E6D1C98B (MakeBuilding_tA7888BB568D7BDF05AF62A24D5F3C03075D9894C * __this, const RuntimeMethod* method);
// System.Void MakeBuilding/<MakeUnit>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMakeUnitU3Ed__9__ctor_m33F90E2F03C236375CA8A11B71ACC3A12123FB55 (U3CMakeUnitU3Ed__9_t2F3D2193F6AFC4430320A08AE68D149BD13B8785 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Player::Idle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Idle_m10EF471CCAE716DABE927CE3BE7F0FF0B596F01C (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// IState/State Player::get_state()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Player_get_state_m063E47F7133ED89F2D4A197750EEC364776B6DC8_inline (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forward0, const RuntimeMethod* method);
// System.Void Player::set_state(IState/State)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_set_state_m0FD3AAAD092E7CE9A6986F4A0418BCD64D422898_inline (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, int32_t ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<UnityEngine.GameObject>(System.String)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m2A4C89C1E5F65890D408978197DB125739C6000C (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m39B6A35CFE684CD1FFF77873E20D7297B36A55E8_gshared)(___path0, method);
}
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared)(___original0, ___parent1, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7 (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9 (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void PoolManager::ArrowMake(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoolManager_ArrowMake_m8CB12EE4537D5916ACE8B0E51F87CD5B54FCDAC2 (PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * __this, int32_t ___count0, const RuntimeMethod* method);
// System.Void PoolManager::WarriorMake(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoolManager_WarriorMake_mD6FAF57331D238AA00A4DC67B511C4837C5CCAE8 (PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * __this, int32_t ___count0, const RuntimeMethod* method);
// UnityEngine.GameObject PoolManager::GetWarrior()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PoolManager_GetWarrior_m78551160324FD847C4B03474220DD58DD86F565B (PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * __this, const RuntimeMethod* method);
// System.Void PoolManager::ArcherMake(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoolManager_ArcherMake_m24B0A4C733867D71FDABD1BA5E1A8DB780F90354 (PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * __this, int32_t ___count0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<Player>()
inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void Player::AttackTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_AttackTarget_m1F856E158F48B2B1F9982B6B2013E8347626872B (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Castle>::GetEnumerator()
inline Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F  List_1_GetEnumerator_mAF7BA13C33A61A14950BE03FDE51F04A9DE25F40 (List_1_t82C8BE4340B2B0C5DB5EB0BC5EA0751F69E2B1A4 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F  (*) (List_1_t82C8BE4340B2B0C5DB5EB0BC5EA0751F69E2B1A4 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Castle>::get_Current()
inline Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * Enumerator_get_Current_m7E137625ACDF23890B0162DA1DE540CDCAFDF35F_inline (Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F * __this, const RuntimeMethod* method)
{
	return ((  Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * (*) (Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Castle>::MoveNext()
inline bool Enumerator_MoveNext_m7ADEBBEFCD5B1C94EB0C4070A2AD3F659B799E7D (Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Castle>::Dispose()
inline void Enumerator_Dispose_m367CFD03892FD7B80717306294EA139548991210 (Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Character>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m39F7981C55FB4AE901BA8C0F22E0F9C458684D55 (List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.List`1<Building>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_mD01167BFE924D3C076F5E54E7E6A85B29AF153FE (List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.List`1<Building>::Add(!0)
inline void List_1_Add_mF221B7BAEE75E2A07ACCB27A83657F02BF8ABC7E (List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE * __this, Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE *, Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<Character>::Remove(!0)
inline bool List_1_Remove_m9088D9D6AE3C56C6FEA17BBA4313FAC28C65B742 (List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 * __this, Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 *, Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<Building>::Remove(!0)
inline bool List_1_Remove_m50CAF71CB39E7429B007D300328A1C17810ADDCC (List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE * __this, Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE *, Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Castle>::.ctor()
inline void List_1__ctor_m33AEEF8E79303B429B300712427653DBE388D21F (List_1_t82C8BE4340B2B0C5DB5EB0BC5EA0751F69E2B1A4 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t82C8BE4340B2B0C5DB5EB0BC5EA0751F69E2B1A4 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void TouchManager::BuildingMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchManager_BuildingMove_mE302774C2C5F09AD83D0D9EE3D943AE81D98A00C (TouchManager_t251D826C6882E59C9018F77827CBC73959F7A9D1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m80EC8EEDA0ABA8B01838BA9054834CD1A381916E (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray0, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___hitInfo1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_NameToLayer_m6A2BBB60EC90F7EC48A6A91CA98149C547A04C0A (String_t* ___layerName0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Building>::GetEnumerator()
inline Enumerator_tDEA9EF7DA04121A1EA4A598DC8A80A7E572E1E4C  List_1_GetEnumerator_m5DA9279CEDB27114379436C7D97807EF929ADF45 (List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tDEA9EF7DA04121A1EA4A598DC8A80A7E572E1E4C  (*) (List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Building>::get_Current()
inline Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * Enumerator_get_Current_mB585AA20C90153194E76F74862FBAD50D70DC9A0_inline (Enumerator_tDEA9EF7DA04121A1EA4A598DC8A80A7E572E1E4C * __this, const RuntimeMethod* method)
{
	return ((  Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * (*) (Enumerator_tDEA9EF7DA04121A1EA4A598DC8A80A7E572E1E4C *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider>()
inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.BoxCollider::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BoxCollider_get_size_mBC38D4926D4BE54A6532F6E1D642F363CA3A58A1 (BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.BoxCollider::set_size(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxCollider_set_size_mD9153B4AE4C366ACAB9E5F49075D919A89168B2E (BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Building>::MoveNext()
inline bool Enumerator_MoveNext_mB7AFB4E0B550927FBF6504243B789E9BDAD32938 (Enumerator_tDEA9EF7DA04121A1EA4A598DC8A80A7E572E1E4C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tDEA9EF7DA04121A1EA4A598DC8A80A7E572E1E4C *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Building>::Dispose()
inline void Enumerator_Dispose_mAECA5070E95CE5C802D5573BC86EDEDEC88E9BDB (Enumerator_tDEA9EF7DA04121A1EA4A598DC8A80A7E572E1E4C * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tDEA9EF7DA04121A1EA4A598DC8A80A7E572E1E4C *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4 (const RuntimeMethod* method);
// System.Void TouchPad::HandleTouchInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_HandleTouchInput_m96615114C7BA1DEFD0D5A208E678F2F06FB65E10 (TouchPad_t0BAA54FA8F10C824858FE60E2D158A2D935E026A * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// System.Void TouchPad::HandleInput(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_HandleInput_m33F29EE0931E0E2D4152D559A0D65F69182048A9 (TouchPad_t0BAA54FA8F10C824858FE60E2D158A2D935E026A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___input0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6 (const RuntimeMethod* method);
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* Input_get_touches_m26E3034CAE32931E59A480327A3CF4BFC2045E8F (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257 (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void Player::OnStickChange(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnStickChange_m0D123A689730B747CC5AA341ABC55BE38F8F93EE (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___stickPos0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Void WarriorHero::add_WarriorBuff(SkillManager/Buff)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WarriorHero_add_WarriorBuff_m96D999E8A25F87EA5F8DC92F8FAE9BAB7B047D34 (Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * ___value0, const RuntimeMethod* method);
// System.Boolean Character::AttackRangeFucn(UnityEngine.Transform,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Character_AttackRangeFucn_m0D7F2A3327F55F44DA24095F95F6120516FE5543 (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ____Target0, float ___Angle1, float ___Range2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Building>()
inline Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * GameObject_GetComponent_TisBuilding_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5_mBF2ECB1B8CF12ABD9D9BE953CC5737F1C18DAE2E (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void Character::set_AttackRange(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Character_set_AttackRange_m0463316AED18682C58694BF5821DE0D584B5A40C_inline (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Single WarriorHero::get_Skill2CoolTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float WarriorHero_get_Skill2CoolTime_m8F831B5BE3445794D659ACDC426FB25233646832_inline (WarriorHero_t2FE6F90D6212AB1A498E1249F2F9CCE1406050D9 * __this, const RuntimeMethod* method);
// System.Void Character::Damaged(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_Damaged_mEFF6EFBBE2E05AF8A5F0949722E5BF435E000A63 (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, int32_t ___Damaged0, int32_t ___team1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<Building> TeamManager::enemyTeamBuilding(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE * TeamManager_enemyTeamBuilding_m63FBD1DAB412171C234D2BAD4DCD45DD4BD53918 (TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535 * __this, int32_t ____team0, const RuntimeMethod* method);
// System.Void Building::Damaged(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Building_Damaged_m2330CA9221AE802FE67916FA3F535E74AF70D212 (Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * __this, int32_t ___Damaged0, int32_t ___team1, const RuntimeMethod* method);
// System.Void Warrior::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Warrior__ctor_m8CE6BC20AFE75A67A9BE59BD39B8C637615341FE (Warrior_tECD1FF939DB86C416627FC8DB54EAC1B03B3F3F8 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// IState/State AI::get_state()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AI_get_state_m41FC2AB65FFBCC9ED3E3FDDDF51CBE1A90393947_inline (AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * __this, const RuntimeMethod* method);
// System.Void AI::StateSet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AI_StateSet_m4E28A561D30864760C473EE2E3ED1774ED906C23 (AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * __this, const RuntimeMethod* method);
// System.Void AI::Idle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AI_Idle_m44A7C5EE947ABC8404B870236304149224BD7803 (AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * __this, const RuntimeMethod* method);
// System.Void AI::AttackState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AI_AttackState_m62DB51F9EA52894033E44669F600F6728179690A (AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void Character::set_AttackSpeed(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Character_set_AttackSpeed_mA53BF996F9A6870B654E293B802C469645907378_inline (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, float ___value0, const RuntimeMethod* method);
// System.Void Character::set_Speed(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Character_set_Speed_mEF6A97E86EDE41EF40ADE9F489BB6BB6B5B7D434_inline (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, String_t* ___n0, const RuntimeMethod* method);
// System.Void Character::set_Team(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_set_Team_mAE79E882A1A3C90442577AE7879B3020D5D82942 (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Character::set_Level(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Character_set_Level_mB0C282123E520DAE512C639830DA8F982489171C_inline (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, int32_t ___value0, const RuntimeMethod* method);
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
// IState/State AI::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AI_get_state_m41FC2AB65FFBCC9ED3E3FDDDF51CBE1A90393947 (AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * __this, const RuntimeMethod* method)
{
	{
		// public IState.State state { get; set; }
		int32_t L_0 = __this->get_U3CstateU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void AI::set_state(IState/State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AI_set_state_mFC708276BB1FD713B9E3D9CD1E9ECD39F61F2414 (AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public IState.State state { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CstateU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.Void AI::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AI_Awake_m16704847C861F40E4280C23D80FF419F5DBEB7B8 (AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCharacter_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8_mCE9C8FBED5DFAB4F42CAF2E2B6AF02948C416C12_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// nav = GetComponent<NavMeshAgent>();
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_0;
		L_0 = Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F(__this, /*hidden argument*/Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F_RuntimeMethod_var);
		__this->set_nav_4(L_0);
		// ani = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1;
		L_1 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_ani_5(L_1);
		// character = GetComponent<Character>();
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_2;
		L_2 = Component_GetComponent_TisCharacter_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8_mCE9C8FBED5DFAB4F42CAF2E2B6AF02948C416C12(__this, /*hidden argument*/Component_GetComponent_TisCharacter_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8_mCE9C8FBED5DFAB4F42CAF2E2B6AF02948C416C12_RuntimeMethod_var);
		__this->set_character_6(L_2);
		// }
		return;
	}
}
// System.Void AI::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AI_OnEnable_m65AF72345901C65E53FD5897CCC533175D914777 (AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * __this, const RuntimeMethod* method)
{
	{
		// state = IState.State.Idle;
		AI_set_state_mFC708276BB1FD713B9E3D9CD1E9ECD39F61F2414_inline(__this, 0, /*hidden argument*/NULL);
		// nav.stoppingDistance = character.AttackRange;
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_0 = __this->get_nav_4();
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_1 = __this->get_character_6();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Character_get_AttackRange_m8AE154780E830109F962389ED3B0EFB8C73A1653_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		NavMeshAgent_set_stoppingDistance_m9D26543E5329CE08A147EA11AECF8BB3996121C8(L_0, ((float)((float)L_2)), /*hidden argument*/NULL);
		// StartCoroutine(AIState());
		RuntimeObject* L_3;
		L_3 = AI_AIState_m72149402E13A74788D23E7C63903C47F4BD80C95(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_4;
		L_4 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator AI::AIState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AI_AIState_m72149402E13A74788D23E7C63903C47F4BD80C95 (AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAIStateU3Ed__12_tD220B377E4D70D3154CA17E2D0B34F0C86A63BE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAIStateU3Ed__12_tD220B377E4D70D3154CA17E2D0B34F0C86A63BE3 * L_0 = (U3CAIStateU3Ed__12_tD220B377E4D70D3154CA17E2D0B34F0C86A63BE3 *)il2cpp_codegen_object_new(U3CAIStateU3Ed__12_tD220B377E4D70D3154CA17E2D0B34F0C86A63BE3_il2cpp_TypeInfo_var);
		U3CAIStateU3Ed__12__ctor_m21A59EA334015D8C1BE609F313A3E89879EC8884(L_0, 0, /*hidden argument*/NULL);
		U3CAIStateU3Ed__12_tD220B377E4D70D3154CA17E2D0B34F0C86A63BE3 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void AI::TargetSetting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AI_TargetSetting_mF190A61BABE9B71C5DEA39639C8DC0BDFD698E46 (AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mD05253A5EFE2AA2575CC36BD681FFB5638B9F560_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisBuilding_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5_m4B4787CA74290A14A3F46C40943F1C248D0AA891_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisCharacter_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8_m54EC88C2F01AEFA7F175DD0AC517CBDDD588D555_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BuildingU5BU5D_tCB5AB568D849E6934CDC724E3EE2A4F93F735AAF* V_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  V_2;
	memset((&V_2), 0, sizeof(V_2));
	CharacterU5BU5D_tC3A59DF23B17172AA72162D97D092689E416F84F* V_3 = NULL;
	int32_t V_4 = 0;
	Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * V_5 = NULL;
	float V_6 = 0.0f;
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	BuildingU5BU5D_tCB5AB568D849E6934CDC724E3EE2A4F93F735AAF* V_9 = NULL;
	Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * V_10 = NULL;
	float V_11 = 0.0f;
	{
		// Character[] characters = FindObjectsOfType<Character>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		CharacterU5BU5D_tC3A59DF23B17172AA72162D97D092689E416F84F* L_0;
		L_0 = Object_FindObjectsOfType_TisCharacter_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8_m54EC88C2F01AEFA7F175DD0AC517CBDDD588D555(/*hidden argument*/Object_FindObjectsOfType_TisCharacter_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8_m54EC88C2F01AEFA7F175DD0AC517CBDDD588D555_RuntimeMethod_var);
		// Building[] buildings = FindObjectsOfType<Building>();
		BuildingU5BU5D_tCB5AB568D849E6934CDC724E3EE2A4F93F735AAF* L_1;
		L_1 = Object_FindObjectsOfType_TisBuilding_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5_m4B4787CA74290A14A3F46C40943F1C248D0AA891(/*hidden argument*/Object_FindObjectsOfType_TisBuilding_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5_m4B4787CA74290A14A3F46C40943F1C248D0AA891_RuntimeMethod_var);
		V_0 = L_1;
		// GameObject Tar =null;
		V_1 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL;
		// float? nearestDis = null;   //���� ������ null���� �ֱ����� ?�� ���
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A ));
		// foreach (Character Enemy in characters)
		V_3 = L_0;
		V_4 = 0;
		goto IL_0099;
	}

IL_001b:
	{
		// foreach (Character Enemy in characters)
		CharacterU5BU5D_tC3A59DF23B17172AA72162D97D092689E416F84F* L_2 = V_3;
		int32_t L_3 = V_4;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_5 = L_5;
		// if(Enemy.Team != character.Team && Enemy.Hp > 0) //�ٸ����̰�, ü���� 0���� ������ ������ ������ �ν�
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_6 = V_5;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Character_get_Team_m7778D19EA7B882EC0979B5CCA0CF0BA9D41ECF5D_inline(L_6, /*hidden argument*/NULL);
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_8 = __this->get_character_6();
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Character_get_Team_m7778D19EA7B882EC0979B5CCA0CF0BA9D41ECF5D_inline(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_7) == ((int32_t)L_9)))
		{
			goto IL_0093;
		}
	}
	{
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_10 = V_5;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Character_get_Hp_m258775AC8D73AE39E8088098A8EEEC0449CD1C37_inline(L_10, /*hidden argument*/NULL);
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0093;
		}
	}
	{
		// float Dis = Vector3.Distance(Enemy.transform.position, transform.position);
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_12 = V_5;
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		float L_17;
		L_17 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_14, L_16, /*hidden argument*/NULL);
		V_6 = L_17;
		// if(nearestDis > Dis || nearestDis == null)
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  L_18 = V_2;
		V_7 = L_18;
		float L_19 = V_6;
		V_8 = L_19;
		float L_20;
		L_20 = Nullable_1_GetValueOrDefault_mD05253A5EFE2AA2575CC36BD681FFB5638B9F560_inline((Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *)(&V_7), /*hidden argument*/Nullable_1_GetValueOrDefault_mD05253A5EFE2AA2575CC36BD681FFB5638B9F560_RuntimeMethod_var);
		float L_21 = V_8;
		bool L_22;
		L_22 = Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_inline((Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *)(&V_7), /*hidden argument*/Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_RuntimeMethod_var);
		if (((int32_t)((int32_t)((((float)L_20) > ((float)L_21))? 1 : 0)&(int32_t)L_22)))
		{
			goto IL_0082;
		}
	}
	{
		bool L_23;
		L_23 = Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_inline((Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *)(&V_2), /*hidden argument*/Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_RuntimeMethod_var);
		if (L_23)
		{
			goto IL_0093;
		}
	}

IL_0082:
	{
		// Tar = Enemy.gameObject;
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_24 = V_5;
		NullCheck(L_24);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_24, /*hidden argument*/NULL);
		V_1 = L_25;
		// nearestDis = Dis;
		float L_26 = V_6;
		Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A((Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *)(&V_2), L_26, /*hidden argument*/Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A_RuntimeMethod_var);
	}

IL_0093:
	{
		int32_t L_27 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_0099:
	{
		// foreach (Character Enemy in characters)
		int32_t L_28 = V_4;
		CharacterU5BU5D_tC3A59DF23B17172AA72162D97D092689E416F84F* L_29 = V_3;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length))))))
		{
			goto IL_001b;
		}
	}
	{
		// foreach(Building EnemyBuilding in buildings)
		BuildingU5BU5D_tCB5AB568D849E6934CDC724E3EE2A4F93F735AAF* L_30 = V_0;
		V_9 = L_30;
		V_4 = 0;
		goto IL_012a;
	}

IL_00ab:
	{
		// foreach(Building EnemyBuilding in buildings)
		BuildingU5BU5D_tCB5AB568D849E6934CDC724E3EE2A4F93F735AAF* L_31 = V_9;
		int32_t L_32 = V_4;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_10 = L_34;
		// if (EnemyBuilding.Team != character.Team && EnemyBuilding.Hp >0 )
		Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * L_35 = V_10;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = Building_get_Team_m29511AB7E5D15B834E7D1229493A037B64199BF0_inline(L_35, /*hidden argument*/NULL);
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_37 = __this->get_character_6();
		NullCheck(L_37);
		int32_t L_38;
		L_38 = Character_get_Team_m7778D19EA7B882EC0979B5CCA0CF0BA9D41ECF5D_inline(L_37, /*hidden argument*/NULL);
		if ((((int32_t)L_36) == ((int32_t)L_38)))
		{
			goto IL_0124;
		}
	}
	{
		Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * L_39 = V_10;
		NullCheck(L_39);
		int32_t L_40;
		L_40 = Building_get_Hp_m02B74A57F2F4BE3D26F4AF5E8D9CF4E9221D2191_inline(L_39, /*hidden argument*/NULL);
		if ((((int32_t)L_40) <= ((int32_t)0)))
		{
			goto IL_0124;
		}
	}
	{
		// float Dis = Vector3.Distance(EnemyBuilding.transform.position, transform.position);
		Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * L_41 = V_10;
		NullCheck(L_41);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42;
		L_42 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_41, /*hidden argument*/NULL);
		NullCheck(L_42);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_42, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44;
		L_44 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_44);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_44, /*hidden argument*/NULL);
		float L_46;
		L_46 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_43, L_45, /*hidden argument*/NULL);
		V_11 = L_46;
		// if (nearestDis > Dis || nearestDis == null)
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  L_47 = V_2;
		V_7 = L_47;
		float L_48 = V_11;
		V_8 = L_48;
		float L_49;
		L_49 = Nullable_1_GetValueOrDefault_mD05253A5EFE2AA2575CC36BD681FFB5638B9F560_inline((Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *)(&V_7), /*hidden argument*/Nullable_1_GetValueOrDefault_mD05253A5EFE2AA2575CC36BD681FFB5638B9F560_RuntimeMethod_var);
		float L_50 = V_8;
		bool L_51;
		L_51 = Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_inline((Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *)(&V_7), /*hidden argument*/Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_RuntimeMethod_var);
		if (((int32_t)((int32_t)((((float)L_49) > ((float)L_50))? 1 : 0)&(int32_t)L_51)))
		{
			goto IL_0113;
		}
	}
	{
		bool L_52;
		L_52 = Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_inline((Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *)(&V_2), /*hidden argument*/Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_RuntimeMethod_var);
		if (L_52)
		{
			goto IL_0124;
		}
	}

IL_0113:
	{
		// Tar = EnemyBuilding.gameObject;
		Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * L_53 = V_10;
		NullCheck(L_53);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_54;
		L_54 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_53, /*hidden argument*/NULL);
		V_1 = L_54;
		// nearestDis = Dis;
		float L_55 = V_11;
		Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A((Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *)(&V_2), L_55, /*hidden argument*/Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A_RuntimeMethod_var);
	}

IL_0124:
	{
		int32_t L_56 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1));
	}

IL_012a:
	{
		// foreach(Building EnemyBuilding in buildings)
		int32_t L_57 = V_4;
		BuildingU5BU5D_tCB5AB568D849E6934CDC724E3EE2A4F93F735AAF* L_58 = V_9;
		NullCheck(L_58);
		if ((((int32_t)L_57) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_58)->max_length))))))
		{
			goto IL_00ab;
		}
	}
	{
		// TargetSet(Tar);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_59 = V_1;
		AI_TargetSet_mA87FE2352B3EA19F6A73B4B1C9BC9EBCC935C6A2(__this, L_59, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AI::TargetSet(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AI_TargetSet_mA87FE2352B3EA19F6A73B4B1C9BC9EBCC935C6A2 (AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target = Target;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___Target0;
		__this->set_target_7(L_0);
		// if(target !=null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_target_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// character.RangeSet();
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_3 = __this->get_character_6();
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(19 /* System.Void Character::RangeSet() */, L_3);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void AI::StateSet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AI_StateSet_m4E28A561D30864760C473EE2E3ED1774ED906C23 (AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (target == null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_target_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// state = IState.State.Idle;
		AI_set_state_mFC708276BB1FD713B9E3D9CD1E9ECD39F61F2414_inline(__this, 0, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		// float dist = Vector3.Distance(target.transform.position, transform.position);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_target_7();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		float L_7;
		L_7 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_4, L_6, /*hidden argument*/NULL);
		// if (dist < character.AttackRange) // �� ĳ������ �Ÿ��� ���ݰŸ� ���� ª�ٸ� ���ݻ��·� �ٲ��.
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_8 = __this->get_character_6();
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Character_get_AttackRange_m8AE154780E830109F962389ED3B0EFB8C73A1653_inline(L_8, /*hidden argument*/NULL);
		if ((!(((float)L_7) < ((float)((float)((float)L_9))))))
		{
			goto IL_004c;
		}
	}
	{
		// state = IState.State.Attack;
		AI_set_state_mFC708276BB1FD713B9E3D9CD1E9ECD39F61F2414_inline(__this, 1, /*hidden argument*/NULL);
		return;
	}

IL_004c:
	{
		// state = IState.State.Idle;
		AI_set_state_mFC708276BB1FD713B9E3D9CD1E9ECD39F61F2414_inline(__this, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AI::Idle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AI_Idle_m44A7C5EE947ABC8404B870236304149224BD7803 (AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (target == null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_target_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		// ani.SetFloat("Speed", 0);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_2 = __this->get_ani_5();
		NullCheck(L_2);
		Animator_SetFloat_mD731F47ED44C2D629F8E1C6DB15629C3E1B992A0(L_2, _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32, (0.0f), /*hidden argument*/NULL);
		// nav.isStopped = true;
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_3 = __this->get_nav_4();
		NullCheck(L_3);
		NavMeshAgent_set_isStopped_m3258581121A85B9F8BC02FCC2111B15506A26896(L_3, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0030:
	{
		// nav.isStopped = false;
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_4 = __this->get_nav_4();
		NullCheck(L_4);
		NavMeshAgent_set_isStopped_m3258581121A85B9F8BC02FCC2111B15506A26896(L_4, (bool)0, /*hidden argument*/NULL);
		// nav.speed = character.Speed;
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_5 = __this->get_nav_4();
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_6 = __this->get_character_6();
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Character_get_Speed_mDF65D05479D45DB5079CC2B36A49B92B1C4ED7EA_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		NavMeshAgent_set_speed_mE71CB504B0CC1E977293722F9BA81B7060A99E14(L_5, ((float)((float)L_7)), /*hidden argument*/NULL);
		// nav.destination = target.transform.position;
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_8 = __this->get_nav_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_target_7();
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		NavMeshAgent_set_destination_m0EC1C668AD85AC1B26AABF54337D7D0849F760E7(L_8, L_11, /*hidden argument*/NULL);
		// ani.SetFloat("Speed", nav.velocity.magnitude / character.Speed);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_12 = __this->get_ani_5();
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_13 = __this->get_nav_4();
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = NavMeshAgent_get_velocity_mA6F25F6B38D5092BBE6DECD77F8FDB93D5C515C9(L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		float L_15;
		L_15 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_16 = __this->get_character_6();
		NullCheck(L_16);
		int32_t L_17;
		L_17 = Character_get_Speed_mDF65D05479D45DB5079CC2B36A49B92B1C4ED7EA_inline(L_16, /*hidden argument*/NULL);
		NullCheck(L_12);
		Animator_SetFloat_mD731F47ED44C2D629F8E1C6DB15629C3E1B992A0(L_12, _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32, ((float)((float)L_15/(float)((float)((float)L_17)))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AI::AttackState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AI_AttackState_m62DB51F9EA52894033E44669F600F6728179690A (AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C5521C3D6E99A0FA3A8A60136CF4760AB524020);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (attackPosible)
		bool L_0 = __this->get_attackPosible_8();
		if (!L_0)
		{
			goto IL_0054;
		}
	}
	{
		// ani.SetTrigger("Attack");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1 = __this->get_ani_5();
		NullCheck(L_1);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_1, _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91, /*hidden argument*/NULL);
		// ani.SetFloat("AttackSpeed", character.AttackSpeed );
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_2 = __this->get_ani_5();
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_3 = __this->get_character_6();
		NullCheck(L_3);
		float L_4;
		L_4 = Character_get_AttackSpeed_m0BFFD203BF86CD75E43C8506EA149319B7F39597_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Animator_SetFloat_mD731F47ED44C2D629F8E1C6DB15629C3E1B992A0(L_2, _stringLiteral9C5521C3D6E99A0FA3A8A60136CF4760AB524020, L_4, /*hidden argument*/NULL);
		// ani.SetFloat("Speed", 0f);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_5 = __this->get_ani_5();
		NullCheck(L_5);
		Animator_SetFloat_mD731F47ED44C2D629F8E1C6DB15629C3E1B992A0(L_5, _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32, (0.0f), /*hidden argument*/NULL);
		// nav.isStopped = true;
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_6 = __this->get_nav_4();
		NullCheck(L_6);
		NavMeshAgent_set_isStopped_m3258581121A85B9F8BC02FCC2111B15506A26896(L_6, (bool)1, /*hidden argument*/NULL);
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void AI::AttackOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AI_AttackOff_m30E38D676AF7F10396D1FA87299A8D0C08513C96 (AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * __this, const RuntimeMethod* method)
{
	{
		// attackPosible = false;
		__this->set_attackPosible_8((bool)0);
		// PrevDelayTime = 0;
		__this->set_PrevDelayTime_9((0.0f));
		// }
		return;
	}
}
// System.Void AI::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AI_Update_m44C17A8324CC9BF2827D98A82A1B26A8236E1CD4 (AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * __this, const RuntimeMethod* method)
{
	{
		// AttackDelay();
		AI_AttackDelay_m329FC6AE85637C6D07D78A04045096B8ED6FEDF5(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AI::AttackDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AI_AttackDelay_m329FC6AE85637C6D07D78A04045096B8ED6FEDF5 (AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * __this, const RuntimeMethod* method)
{
	{
		// if (!attackPosible)
		bool L_0 = __this->get_attackPosible_8();
		if (L_0)
		{
			goto IL_003f;
		}
	}
	{
		// PrevDelayTime += Time.deltaTime;
		float L_1 = __this->get_PrevDelayTime_9();
		float L_2;
		L_2 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_PrevDelayTime_9(((float)il2cpp_codegen_add((float)L_1, (float)L_2)));
		// if (PrevDelayTime > character.attackDelay)
		float L_3 = __this->get_PrevDelayTime_9();
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_4 = __this->get_character_6();
		NullCheck(L_4);
		float L_5 = L_4->get_attackDelay_19();
		if ((!(((float)L_3) > ((float)L_5))))
		{
			goto IL_003f;
		}
	}
	{
		// PrevDelayTime = 0;
		__this->set_PrevDelayTime_9((0.0f));
		// attackPosible = true;
		__this->set_attackPosible_8((bool)1);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void AI::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AI_Die_m978918CF05D638B7D36C0DCCC94B177A1383B0D1 (AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * __this, const RuntimeMethod* method)
{
	{
		// state = IState.State.Die;
		AI_set_state_mFC708276BB1FD713B9E3D9CD1E9ECD39F61F2414_inline(__this, 2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AI__ctor_m8D5C288A0A62DF5D6327580B33CF073B77D18026 (AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * __this, const RuntimeMethod* method)
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
// System.Void Archer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Archer_Start_m0749BB0D702413B43BB65FC87824A82F468801F6 (Archer_t4C3B2405C88227C59EE61DB1A03C516282BCE6CB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Character_SpeedUp_m64B0B0461BA9320CD15BD2F57252A370B869E7A0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Start();
		Character_Start_m19E14D7EC1D199C77A447BAB99FBDCA7FC91FF3B(__this, /*hidden argument*/NULL);
		// ArcherHero.ArcherBuff += SpeedUp;
		Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * L_0 = (Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 *)il2cpp_codegen_object_new(Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6_il2cpp_TypeInfo_var);
		Buff__ctor_m7AF50D5CAE8E64F1299994E67AD0D08CB8062340(L_0, __this, (intptr_t)((intptr_t)Character_SpeedUp_m64B0B0461BA9320CD15BD2F57252A370B869E7A0_RuntimeMethod_var), /*hidden argument*/NULL);
		ArcherHero_add_ArcherBuff_mAE580A3A07C6C6ED0B48271AE460EB14D0C7DB98(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Archer::AttackTarget(UnityEngine.GameObject[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Archer_AttackTarget_m5CA7D8C4FCC4D26C397EA5B2D826DC51D4797800 (Archer_t4C3B2405C88227C59EE61DB1A03C516282BCE6CB * __this, GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___Targets0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisArrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A_mF3D956E1684A01B627E0B9C4F54870ADE244B88F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Targets == null)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = ___Targets0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// transform.LookAt(Targets[0].transform); //Ÿ���� �Ĵٺ��� ���.
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_2 = ___Targets0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_LookAt_m49185D782014D16DA747C1296BEBAC3FB3CEDC1F(L_1, L_5, /*hidden argument*/NULL);
		// GameObject arrowObj = PoolManager.poolManager.GetArrow();
		PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * L_6 = ((PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7_StaticFields*)il2cpp_codegen_static_fields_for(PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7_il2cpp_TypeInfo_var))->get_poolManager_4();
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = PoolManager_GetArrow_mAABF78A265F23244D30DC8451D8753839598204E(L_6, /*hidden argument*/NULL);
		// Arrow arrow = arrowObj.GetComponentInChildren<Arrow>();
		NullCheck(L_7);
		Arrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A * L_8;
		L_8 = GameObject_GetComponentInChildren_TisArrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A_mF3D956E1684A01B627E0B9C4F54870ADE244B88F(L_7, /*hidden argument*/GameObject_GetComponentInChildren_TisArrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A_mF3D956E1684A01B627E0B9C4F54870ADE244B88F_RuntimeMethod_var);
		// arrow.Team = Team;
		Arrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A * L_9 = L_8;
		int32_t L_10;
		L_10 = Character_get_Team_m7778D19EA7B882EC0979B5CCA0CF0BA9D41ECF5D_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Arrow_set_Team_m5F43E4628FB394F4A8D4240772A145A25D3F49ED(L_9, L_10, /*hidden argument*/NULL);
		// arrow.Damaged(AttackDamage);
		Arrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A * L_11 = L_9;
		int32_t L_12;
		L_12 = Character_get_AttackDamage_mC9305B6E2C8278E2CBA6961F0946E50A0D41A494_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Arrow_Damaged_mF34FE8CB3D945CC4EA33FDFDDC3478850CF1F63C(L_11, L_12, (-1), /*hidden argument*/NULL);
		// arrow.gameObject.SetActive(true);
		Arrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A * L_13 = L_11;
		NullCheck(L_13);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_14, (bool)1, /*hidden argument*/NULL);
		// arrow.transform.position = Pos.position;
		Arrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A * L_15 = L_13;
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_15, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17 = __this->get_Pos_23();
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_16, L_18, /*hidden argument*/NULL);
		// arrow.TargetSet(Targets[0]);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_19 = ___Targets0;
		NullCheck(L_19);
		int32_t L_20 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_15);
		Arrow_TargetSet_mDB625A1637CF3949CC42DB8093359C5471F1248C(L_15, L_21, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Archer::Upgrade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Archer_Upgrade_m8A7EE60F7A2583E88B623688A8918AAA29CE8667 (Archer_t4C3B2405C88227C59EE61DB1A03C516282BCE6CB * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Archer::RangeSet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Archer_RangeSet_m46E174A3AE829B7413B3C717E4FB6AADCBB1893C (Archer_t4C3B2405C88227C59EE61DB1A03C516282BCE6CB * __this, const RuntimeMethod* method)
{
	{
		// return;
		return;
	}
}
// System.Void Archer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Archer__ctor_mD936C2175E847819CF06DC2F8847FB2E189FB005 (Archer_t4C3B2405C88227C59EE61DB1A03C516282BCE6CB * __this, const RuntimeMethod* method)
{
	{
		Character__ctor_mC9E775D49A9CE6DD699D3C59405E734464FDCDC2(__this, /*hidden argument*/NULL);
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
// UnityEngine.GameObject ArcherBuilding::MakeUnitReturn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ArcherBuilding_MakeUnitReturn_m23FAEEE498A0E04BF774DE1B71D6B12B8E56120F (ArcherBuilding_t927C6CDC9E67F62A4616818F8C55BBBE987840C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PoolManager.poolManager.GetArcher();
		PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * L_0 = ((PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7_StaticFields*)il2cpp_codegen_static_fields_for(PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7_il2cpp_TypeInfo_var))->get_poolManager_4();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = PoolManager_GetArcher_mFF8F8120B106D233603D2ACAD65C733930E6C7A5(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void ArcherBuilding::Upgrade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArcherBuilding_Upgrade_m336EA7B1FCBC6C324E6636A2F83FBE3AD2CF3A83 (ArcherBuilding_t927C6CDC9E67F62A4616818F8C55BBBE987840C2 * __this, const RuntimeMethod* method)
{
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArcherBuilding_Upgrade_m336EA7B1FCBC6C324E6636A2F83FBE3AD2CF3A83_RuntimeMethod_var)));
	}
}
// System.Void ArcherBuilding::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArcherBuilding__ctor_m231A5DBAE199C182730902D166CB5F4A81F3009B (ArcherBuilding_t927C6CDC9E67F62A4616818F8C55BBBE987840C2 * __this, const RuntimeMethod* method)
{
	{
		MakeBuilding__ctor_m8C8B358F785D2DA3DA70894219D55FBA93847475(__this, /*hidden argument*/NULL);
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
// System.Single ArcherHero::get_Skill1CoolTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ArcherHero_get_Skill1CoolTime_mCBDF9BE4E60BD3C478DD4032737C34BDCBC10668 (ArcherHero_tE7562C3518DA3F2A90CDE1B5A445CE2900D74B9A * __this, const RuntimeMethod* method)
{
	{
		// public float Skill1CoolTime { get { return skill1CoolTime; } set { skill1CoolTime = value; } }
		float L_0 = __this->get_skill1CoolTime_24();
		return L_0;
	}
}
// System.Void ArcherHero::set_Skill1CoolTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArcherHero_set_Skill1CoolTime_mE22CBEB46DAF8804BCF5E720B4084EE6A223B032 (ArcherHero_tE7562C3518DA3F2A90CDE1B5A445CE2900D74B9A * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float Skill1CoolTime { get { return skill1CoolTime; } set { skill1CoolTime = value; } }
		float L_0 = ___value0;
		__this->set_skill1CoolTime_24(L_0);
		// public float Skill1CoolTime { get { return skill1CoolTime; } set { skill1CoolTime = value; } }
		return;
	}
}
// System.Void ArcherHero::add_ArcherBuff(SkillManager/Buff)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArcherHero_add_ArcherBuff_mAE580A3A07C6C6ED0B48271AE460EB14D0C7DB98 (Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArcherHero_tE7562C3518DA3F2A90CDE1B5A445CE2900D74B9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * V_0 = NULL;
	Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * V_1 = NULL;
	Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * V_2 = NULL;
	{
		Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * L_0 = ((ArcherHero_tE7562C3518DA3F2A90CDE1B5A445CE2900D74B9A_StaticFields*)il2cpp_codegen_static_fields_for(ArcherHero_tE7562C3518DA3F2A90CDE1B5A445CE2900D74B9A_il2cpp_TypeInfo_var))->get_ArcherBuff_30();
		V_0 = L_0;
	}

IL_0006:
	{
		Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * L_1 = V_0;
		V_1 = L_1;
		Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * L_2 = V_1;
		Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 *)CastclassSealed((RuntimeObject*)L_4, Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6_il2cpp_TypeInfo_var));
		Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * L_5 = V_2;
		Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * L_6 = V_1;
		Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 *>((Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 **)(((ArcherHero_tE7562C3518DA3F2A90CDE1B5A445CE2900D74B9A_StaticFields*)il2cpp_codegen_static_fields_for(ArcherHero_tE7562C3518DA3F2A90CDE1B5A445CE2900D74B9A_il2cpp_TypeInfo_var))->get_address_of_ArcherBuff_30()), L_5, L_6);
		V_0 = L_7;
		Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * L_8 = V_0;
		Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 *)L_8) == ((RuntimeObject*)(Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void ArcherHero::remove_ArcherBuff(SkillManager/Buff)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArcherHero_remove_ArcherBuff_m33B706F4B131F5934615292EB20E9663C69BAFD7 (Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArcherHero_tE7562C3518DA3F2A90CDE1B5A445CE2900D74B9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * V_0 = NULL;
	Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * V_1 = NULL;
	Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * V_2 = NULL;
	{
		Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * L_0 = ((ArcherHero_tE7562C3518DA3F2A90CDE1B5A445CE2900D74B9A_StaticFields*)il2cpp_codegen_static_fields_for(ArcherHero_tE7562C3518DA3F2A90CDE1B5A445CE2900D74B9A_il2cpp_TypeInfo_var))->get_ArcherBuff_30();
		V_0 = L_0;
	}

IL_0006:
	{
		Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * L_1 = V_0;
		V_1 = L_1;
		Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * L_2 = V_1;
		Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 *)CastclassSealed((RuntimeObject*)L_4, Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6_il2cpp_TypeInfo_var));
		Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * L_5 = V_2;
		Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * L_6 = V_1;
		Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 *>((Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 **)(((ArcherHero_tE7562C3518DA3F2A90CDE1B5A445CE2900D74B9A_StaticFields*)il2cpp_codegen_static_fields_for(ArcherHero_tE7562C3518DA3F2A90CDE1B5A445CE2900D74B9A_il2cpp_TypeInfo_var))->get_address_of_ArcherBuff_30()), L_5, L_6);
		V_0 = L_7;
		Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * L_8 = V_0;
		Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 *)L_8) == ((RuntimeObject*)(Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Single ArcherHero::get_Skill2CoolTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ArcherHero_get_Skill2CoolTime_m493DD31AE1658D3BAEEC7BB822BF607CE4001C0D (ArcherHero_tE7562C3518DA3F2A90CDE1B5A445CE2900D74B9A * __this, const RuntimeMethod* method)
{
	{
		// public float Skill2CoolTime { get { return skill2CoolTime; } set { skill2CoolTime = value; } }
		float L_0 = __this->get_skill2CoolTime_31();
		return L_0;
	}
}
// System.Void ArcherHero::set_Skill2CoolTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArcherHero_set_Skill2CoolTime_mF246431321A630D15C94110D1BDAC5FE6CEBCF2F (ArcherHero_tE7562C3518DA3F2A90CDE1B5A445CE2900D74B9A * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float Skill2CoolTime { get { return skill2CoolTime; } set { skill2CoolTime = value; } }
		float L_0 = ___value0;
		__this->set_skill2CoolTime_31(L_0);
		// public float Skill2CoolTime { get { return skill2CoolTime; } set { skill2CoolTime = value; } }
		return;
	}
}
// System.Void ArcherHero::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArcherHero_Awake_m12E8307A77371781361D97C3F6D18375A86CA0E4 (ArcherHero_tE7562C3518DA3F2A90CDE1B5A445CE2900D74B9A * __this, const RuntimeMethod* method)
{
	{
		// prevSkill1CoolTime = skill1CoolTime;
		float L_0 = __this->get_skill1CoolTime_24();
		__this->set_prevSkill1CoolTime_25(L_0);
		// prevSkill1Duration = Skill1Duration;
		float L_1 = __this->get_Skill1Duration_26();
		__this->set_prevSkill1Duration_27(L_1);
		// prevskill1XSpeed = skill1XSpeed;
		float L_2 = __this->get_skill1XSpeed_28();
		__this->set_prevskill1XSpeed_29(L_2);
		// prevSkill2CoolTime = Skill2CoolTime;
		float L_3;
		L_3 = ArcherHero_get_Skill2CoolTime_m493DD31AE1658D3BAEEC7BB822BF607CE4001C0D_inline(__this, /*hidden argument*/NULL);
		__this->set_prevSkill2CoolTime_32(L_3);
		// base.Awake();
		Character_Awake_mC74EB243B311BCC8D789F0C75169EF2BBB3E6D76(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ArcherHero::Skill1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArcherHero_Skill1_m417F9ACFEDCB99FAA5C1E62200E7E88056E60149 (ArcherHero_tE7562C3518DA3F2A90CDE1B5A445CE2900D74B9A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArcherHero_tE7562C3518DA3F2A90CDE1B5A445CE2900D74B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Hp <= 0)
		int32_t L_0;
		L_0 = Character_get_Hp_m258775AC8D73AE39E8088098A8EEEC0449CD1C37_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// ArcherBuff(skill1XSpeed, Team , Skill1Duration); //���� �� ��ó ���� ���� ���
		Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * L_1 = ((ArcherHero_tE7562C3518DA3F2A90CDE1B5A445CE2900D74B9A_StaticFields*)il2cpp_codegen_static_fields_for(ArcherHero_tE7562C3518DA3F2A90CDE1B5A445CE2900D74B9A_il2cpp_TypeInfo_var))->get_ArcherBuff_30();
		float L_2 = __this->get_skill1XSpeed_28();
		int32_t L_3;
		L_3 = Character_get_Team_m7778D19EA7B882EC0979B5CCA0CF0BA9D41ECF5D_inline(__this, /*hidden argument*/NULL);
		float L_4 = __this->get_Skill1Duration_26();
		NullCheck(L_1);
		Buff_Invoke_m0AD44033D94CEA7BF28028E62E635F3A14534545(L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ArcherHero::Skill2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArcherHero_Skill2_m3605FBC51BFBB8E56C218D13C9F6C65083A66C12 (ArcherHero_tE7562C3518DA3F2A90CDE1B5A445CE2900D74B9A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE576755FB05B5C38187D21DEAEF8DD460C905372_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<Character> TargetList = new List<Character>();
		List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 * L_0 = (List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 *)il2cpp_codegen_object_new(List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664_il2cpp_TypeInfo_var);
		List_1__ctor_mE576755FB05B5C38187D21DEAEF8DD460C905372(L_0, /*hidden argument*/List_1__ctor_mE576755FB05B5C38187D21DEAEF8DD460C905372_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ArcherHero::UnitSet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArcherHero_UnitSet_m96705E36A42F883563224190FCAA92489CF831C2 (ArcherHero_tE7562C3518DA3F2A90CDE1B5A445CE2900D74B9A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m670A03E313664D645E455FDA1F182BEB40EEE993_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkillManager_t922C3F2076730BE87514F83311A3752C621F7278_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SkillManager.skillManager.heros.Add(this);
		SkillManager_t922C3F2076730BE87514F83311A3752C621F7278 * L_0 = ((SkillManager_t922C3F2076730BE87514F83311A3752C621F7278_StaticFields*)il2cpp_codegen_static_fields_for(SkillManager_t922C3F2076730BE87514F83311A3752C621F7278_il2cpp_TypeInfo_var))->get_skillManager_4();
		NullCheck(L_0);
		List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 * L_1 = L_0->get_heros_5();
		NullCheck(L_1);
		List_1_Add_m670A03E313664D645E455FDA1F182BEB40EEE993(L_1, __this, /*hidden argument*/List_1_Add_m670A03E313664D645E455FDA1F182BEB40EEE993_RuntimeMethod_var);
		// base.UnitSet();
		Character_UnitSet_mB8DD65322A8F6F6DB08DB8902DE3B43766AE2BDB(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ArcherHero::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArcherHero__ctor_m4FBD4D4BB05A468A2F81ABF9FE9F5B062C59E9F6 (ArcherHero_tE7562C3518DA3F2A90CDE1B5A445CE2900D74B9A * __this, const RuntimeMethod* method)
{
	{
		// public float SkillAngle = 70;
		__this->set_SkillAngle_33((70.0f));
		Archer__ctor_mD936C2175E847819CF06DC2F8847FB2E189FB005(__this, /*hidden argument*/NULL);
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
// System.Int32 Arrow::get_Team()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Arrow_get_Team_m504EDAC6B76917193980926ADE305F75A5906AB4 (Arrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A * __this, const RuntimeMethod* method)
{
	{
		// public int Team { get { return team; }
		int32_t L_0 = __this->get_team_13();
		return L_0;
	}
}
// System.Void Arrow::set_Team(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Arrow_set_Team_m5F43E4628FB394F4A8D4240772A145A25D3F49ED (Arrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// team = value;
		int32_t L_0 = ___value0;
		__this->set_team_13(L_0);
		// SetTeamColor();
		Arrow_SetTeamColor_m93DA8A7D8619464F1C21727BC7D2D98C9F334979(__this, /*hidden argument*/NULL);
		// gameObject.layer = 9 + team;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_team_13();
		NullCheck(L_1);
		GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6(L_1, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)9), (int32_t)L_2)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Arrow::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Arrow_Awake_mFFBED386A76BCF53F60454F968E0FF6F843A10AE (Arrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mCE49E8783A1794715E6D539C8BB8C78CC589AB60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m5421192AB2FFE9765BB0D6C21CDE3D51D32BCF2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_mDC1EE7E2332C6862976FA026EB6ED1B3EB4E142D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_LoadAll_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_mA1CF9E54996571EFE7094BDE018205CF1EB5D277_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8856132A0554AAE312A22D3B249A14176429A289);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECAC9756AB416770CE66B9411AB7AEB8B8181309);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rbody = GetComponent<Rigidbody>();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0;
		L_0 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		__this->set_rbody_12(L_0);
		// SkinnedMesh = GetComponentsInChildren<SkinnedMeshRenderer>();
		SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED* L_1;
		L_1 = Component_GetComponentsInChildren_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_mDC1EE7E2332C6862976FA026EB6ED1B3EB4E142D(__this, /*hidden argument*/Component_GetComponentsInChildren_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_mDC1EE7E2332C6862976FA026EB6ED1B3EB4E142D_RuntimeMethod_var);
		__this->set_SkinnedMesh_7(L_1);
		// Mesh = GetComponentsInChildren<MeshRenderer>();
		MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* L_2;
		L_2 = Component_GetComponentsInChildren_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m5421192AB2FFE9765BB0D6C21CDE3D51D32BCF2A(__this, /*hidden argument*/Component_GetComponentsInChildren_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m5421192AB2FFE9765BB0D6C21CDE3D51D32BCF2A_RuntimeMethod_var);
		__this->set_Mesh_8(L_2);
		// tr = GetComponent<Transform>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213(__this, /*hidden argument*/Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213_RuntimeMethod_var);
		__this->set_tr_10(L_3);
		// mat = Resources.LoadAll<Material>("0.TeamColor/Color");
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_4;
		L_4 = Resources_LoadAll_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_mA1CF9E54996571EFE7094BDE018205CF1EB5D277(_stringLiteral8856132A0554AAE312A22D3B249A14176429A289, /*hidden argument*/Resources_LoadAll_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_mA1CF9E54996571EFE7094BDE018205CF1EB5D277_RuntimeMethod_var);
		__this->set_mat_9(L_4);
		// myCol = GetComponent<Collider>();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_5;
		L_5 = Component_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mCE49E8783A1794715E6D539C8BB8C78CC589AB60(__this, /*hidden argument*/Component_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mCE49E8783A1794715E6D539C8BB8C78CC589AB60_RuntimeMethod_var);
		__this->set_myCol_11(L_5);
		// Invoke("Disable", 4f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralECAC9756AB416770CE66B9411AB7AEB8B8181309, (4.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Arrow::SetTeamColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Arrow_SetTeamColor_m93DA8A7D8619464F1C21727BC7D2D98C9F334979 (Arrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int i = 0; i < SkinnedMesh.Length; i++)
		V_0 = 0;
		goto IL_0022;
	}

IL_0004:
	{
		// SkinnedMesh[i].material = mat[team];
		SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED* L_0 = __this->get_SkinnedMesh_7();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_4 = __this->get_mat_9();
		int32_t L_5 = __this->get_team_13();
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_3);
		Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA(L_3, L_7, /*hidden argument*/NULL);
		// for (int i = 0; i < SkinnedMesh.Length; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0022:
	{
		// for (int i = 0; i < SkinnedMesh.Length; i++)
		int32_t L_9 = V_0;
		SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED* L_10 = __this->get_SkinnedMesh_7();
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		// for (int i = 0; i < Mesh.Length; i++)
		V_1 = 0;
		goto IL_004f;
	}

IL_0031:
	{
		// Mesh[i].material = mat[team];
		MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* L_11 = __this->get_Mesh_8();
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_15 = __this->get_mat_9();
		int32_t L_16 = __this->get_team_13();
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_14);
		Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA(L_14, L_18, /*hidden argument*/NULL);
		// for (int i = 0; i < Mesh.Length; i++)
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_004f:
	{
		// for (int i = 0; i < Mesh.Length; i++)
		int32_t L_20 = V_1;
		MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* L_21 = __this->get_Mesh_8();
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))))))
		{
			goto IL_0031;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Arrow::Damaged(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Arrow_Damaged_mF34FE8CB3D945CC4EA33FDFDDC3478850CF1F63C (Arrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A * __this, int32_t ___Damaged0, int32_t ___team1, const RuntimeMethod* method)
{
	{
		// if(team != Team)
		int32_t L_0 = ___team1;
		int32_t L_1;
		L_1 = Arrow_get_Team_m504EDAC6B76917193980926ADE305F75A5906AB4_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0010;
		}
	}
	{
		// damage = Damaged;
		int32_t L_2 = ___Damaged0;
		__this->set_damage_5(L_2);
	}

IL_0010:
	{
		// }//ȭ���� ������ ����
		return;
	}
}
// System.Void Arrow::TargetSet(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Arrow_TargetSet_mDB625A1637CF3949CC42DB8093359C5471F1248C (Arrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___target0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Target = target;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___target0;
		__this->set_Target_6(L_0);
		// Vector3 vec = Target.transform.position - tr.position + Vector3.up*1 ;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_Target_6();
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_tr_10();
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_3, L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_7, (1.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_6, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// rbody.AddForce(vec * ArrowSpeed, ForceMode.Impulse);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_10 = __this->get_rbody_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_0;
		float L_12 = __this->get_ArrowSpeed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_10);
		Rigidbody_AddForce_m78B9D94F505E19F3C63461362AD6DE7EA0836700(L_10, L_13, 1, /*hidden argument*/NULL);
		// tr.LookAt(Target.transform);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = __this->get_tr_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_Target_6();
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_LookAt_m49185D782014D16DA747C1296BEBAC3FB3CEDC1F(L_14, L_16, /*hidden argument*/NULL);
		// tr.rotation *= Quaternion.Euler(new Vector3(0f, 90f, 0f));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17 = __this->get_tr_10();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18 = L_17;
		NullCheck(L_18);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_19;
		L_19 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_18, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_20), (0.0f), (90.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_21;
		L_21 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_20, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_22;
		L_22 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_19, L_21, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_18, L_22, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Arrow::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Arrow_OnCollisionEnter_m7A90FA8ABC5510B86C4BE0A45FDDB2E5EA8B09F8 (Arrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95130C6675E4A5F5C710AAB2FDF1EBCD3E1D32EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECAC9756AB416770CE66B9411AB7AEB8B8181309);
		s_Il2CppMethodInitialized = true;
	}
	{
		// col.gameObject.SendMessage("Damaged", damage);
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_0 = ___col0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Collision_get_gameObject_m5682F872FD28419AA36F0651CE8B19825A21859D(L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_damage_5();
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		GameObject_SendMessage_m9727C08D6F0A5E8F309FA9FFF389ADF8130D7BE7(L_1, _stringLiteral95130C6675E4A5F5C710AAB2FDF1EBCD3E1D32EA, L_4, /*hidden argument*/NULL);
		// myCol.enabled = false;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_5 = __this->get_myCol_11();
		NullCheck(L_5);
		Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1(L_5, (bool)0, /*hidden argument*/NULL);
		// Invoke("Disable", 2f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralECAC9756AB416770CE66B9411AB7AEB8B8181309, (2.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Arrow::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Arrow_Disable_m38B5AF7F5464468382E48382FDDFC6C870F90CDF (Arrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A * __this, const RuntimeMethod* method)
{
	{
		// rbody.Sleep();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0 = __this->get_rbody_12();
		NullCheck(L_0);
		Rigidbody_Sleep_m60350AEF3E52D57FBE448CADBC06BA98DAEA2115(L_0, /*hidden argument*/NULL);
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Arrow::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Arrow_OnDisable_m57B85DA4D7917235ED892471B0233DDE42258915 (Arrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A * __this, const RuntimeMethod* method)
{
	{
		// myCol.enabled = true;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = __this->get_myCol_11();
		NullCheck(L_0);
		Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Arrow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Arrow__ctor_m5142CD3440C6AF4782993D2409B9FD785577892C (Arrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A * __this, const RuntimeMethod* method)
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
// System.Int32 AttackBuilding::get_AttackDamage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AttackBuilding_get_AttackDamage_m19C39B40E1E7F21E72A8B034EF73EB46E5907ABB (AttackBuilding_t35CB28B6CDF4EFB4E3A43E9864DB4A2BF03C15C7 * __this, const RuntimeMethod* method)
{
	{
		// public int AttackDamage { get { return attackDamage; } set { attackDamage = value; } } //���ݷ�
		int32_t L_0 = __this->get_attackDamage_14();
		return L_0;
	}
}
// System.Void AttackBuilding::set_AttackDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackBuilding_set_AttackDamage_m69085F5A58531CCF4D7C4A1218EC23C38D4EB5F0 (AttackBuilding_t35CB28B6CDF4EFB4E3A43E9864DB4A2BF03C15C7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int AttackDamage { get { return attackDamage; } set { attackDamage = value; } } //���ݷ�
		int32_t L_0 = ___value0;
		__this->set_attackDamage_14(L_0);
		// public int AttackDamage { get { return attackDamage; } set { attackDamage = value; } } //���ݷ�
		return;
	}
}
// System.Int32 AttackBuilding::get_AttackRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AttackBuilding_get_AttackRange_m48F21C52D55F0C98C1F2065620C9F93BCC3434B3 (AttackBuilding_t35CB28B6CDF4EFB4E3A43E9864DB4A2BF03C15C7 * __this, const RuntimeMethod* method)
{
	{
		// public int AttackRange { get { return attackRange; } set { attackRange = value; } } //���ݹ���
		int32_t L_0 = __this->get_attackRange_16();
		return L_0;
	}
}
// System.Void AttackBuilding::set_AttackRange(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackBuilding_set_AttackRange_m04B98AA123EF7108682F9EF18ED08D60B6A3F52E (AttackBuilding_t35CB28B6CDF4EFB4E3A43E9864DB4A2BF03C15C7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int AttackRange { get { return attackRange; } set { attackRange = value; } } //���ݹ���
		int32_t L_0 = ___value0;
		__this->set_attackRange_16(L_0);
		// public int AttackRange { get { return attackRange; } set { attackRange = value; } } //���ݹ���
		return;
	}
}
// System.Void AttackBuilding::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackBuilding_OnEnable_m30C7081B3461928DB74751FA0EC398626ACC6E15 (AttackBuilding_t35CB28B6CDF4EFB4E3A43E9864DB4A2BF03C15C7 * __this, const RuntimeMethod* method)
{
	{
		// base.OnEnable();
		Building_OnEnable_m0CD76EAB1A7337383EC0951E0A76900F45EC741C(__this, /*hidden argument*/NULL);
		// prevAttackDamage = attackDamage;
		int32_t L_0 = __this->get_attackDamage_14();
		__this->set_prevAttackDamage_15(L_0);
		// prevAttackRange = attackRange;
		int32_t L_1 = __this->get_attackRange_16();
		__this->set_prevAttackRange_17(L_1);
		// StartCoroutine(AttackTarget());
		RuntimeObject* L_2;
		L_2 = AttackBuilding_AttackTarget_mF9C0C0621DAEFFBD5B3B9899837A9253EB6EC631(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_3;
		L_3 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator AttackBuilding::AttackTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AttackBuilding_AttackTarget_mF9C0C0621DAEFFBD5B3B9899837A9253EB6EC631 (AttackBuilding_t35CB28B6CDF4EFB4E3A43E9864DB4A2BF03C15C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAttackTargetU3Ed__13_t28A1D1583ACED10AC092FC6F857F4BCA92D34023_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAttackTargetU3Ed__13_t28A1D1583ACED10AC092FC6F857F4BCA92D34023 * L_0 = (U3CAttackTargetU3Ed__13_t28A1D1583ACED10AC092FC6F857F4BCA92D34023 *)il2cpp_codegen_object_new(U3CAttackTargetU3Ed__13_t28A1D1583ACED10AC092FC6F857F4BCA92D34023_il2cpp_TypeInfo_var);
		U3CAttackTargetU3Ed__13__ctor_mD38B377B72DBEAFBC7D902412B14EF1EA192F23B(L_0, 0, /*hidden argument*/NULL);
		U3CAttackTargetU3Ed__13_t28A1D1583ACED10AC092FC6F857F4BCA92D34023 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Boolean AttackBuilding::SameTeam(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AttackBuilding_SameTeam_mD195EA508B0BD1323DB1CB5DC5966688B99C1129 (AttackBuilding_t35CB28B6CDF4EFB4E3A43E9864DB4A2BF03C15C7 * __this, int32_t ____team0, const RuntimeMethod* method)
{
	{
		// if (Team == _team)
		int32_t L_0;
		L_0 = Building_get_Team_m29511AB7E5D15B834E7D1229493A037B64199BF0_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = ____team0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean AttackBuilding::AttackRangeFucn(UnityEngine.Transform,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AttackBuilding_AttackRangeFucn_mED56C076E9B4552A59E13C0A16430091AC8049D2 (AttackBuilding_t35CB28B6CDF4EFB4E3A43E9864DB4A2BF03C15C7 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ____Target0, float ___Angle1, float ___Range2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// if (Range == -1) // ���࿡ ���� �Ÿ��� �Է����� �ʾҴٸ� �⺻ ���ݰŸ��� ����Ѵ�.
		float L_0 = ___Range2;
		if ((!(((float)L_0) == ((float)(-1.0f)))))
		{
			goto IL_0011;
		}
	}
	{
		// Range = attackRange;
		int32_t L_1 = __this->get_attackRange_16();
		___Range2 = ((float)((float)L_1));
	}

IL_0011:
	{
		// float angle = Vector3.Angle(_Target.position - transform.position, transform.forward);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = ____Target0;
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_3, L_5, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_7, /*hidden argument*/NULL);
		float L_9;
		L_9 = Vector3_Angle_m3715AB03A36C59D8CF08F8D71E2F46454EB884C1(L_6, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// if (Vector3.Distance(_Target.position, transform.position) <= Range + 0.2f && ((angle <= Angle)))
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = ____Target0;
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		float L_14;
		L_14 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_11, L_13, /*hidden argument*/NULL);
		float L_15 = ___Range2;
		if ((!(((float)L_14) <= ((float)((float)il2cpp_codegen_add((float)L_15, (float)(0.200000003f)))))))
		{
			goto IL_005d;
		}
	}
	{
		float L_16 = V_0;
		float L_17 = ___Angle1;
		if ((!(((float)L_16) <= ((float)L_17))))
		{
			goto IL_005d;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// return false;
		return (bool)0;
	}
}
// UnityEngine.GameObject AttackBuilding::NearlyTargetSet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * AttackBuilding_NearlyTargetSet_mF8D112DD46881488E0BF5B21E12EA3DBF592C872 (AttackBuilding_t35CB28B6CDF4EFB4E3A43E9864DB4A2BF03C15C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m269393C54BD0A12D8236C0C4CF64AE91D132C8E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m61560064357E7BA96F0D31503834ED5AD39BF1D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1319FB9221759F3330354B81668E10047A4B1F17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mAD390AB027224D023EB048D3F7DDC684D69CAF5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mD05253A5EFE2AA2575CC36BD681FFB5638B9F560_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	Enumerator_t649D2193B2B6C28E89B82247B1D28A30D3548F50  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * V_3 = NULL;
	float V_4 = 0.0f;
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  V_5;
	memset((&V_5), 0, sizeof(V_5));
	float V_6 = 0.0f;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// float? nearestDis = null;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A ));
		// GameObject Tr = null ;
		V_1 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL;
		// foreach (Character Enemy in TeamManager.teamManager.enemyTeamCharacter(Team))
		TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535 * L_0 = ((TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_StaticFields*)il2cpp_codegen_static_fields_for(TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_il2cpp_TypeInfo_var))->get_teamManager_5();
		int32_t L_1;
		L_1 = Building_get_Team_m29511AB7E5D15B834E7D1229493A037B64199BF0_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 * L_2;
		L_2 = TeamManager_enemyTeamCharacter_mD94E7B248BD43A76D59DB444873D46917AD8D36B(L_0, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Enumerator_t649D2193B2B6C28E89B82247B1D28A30D3548F50  L_3;
		L_3 = List_1_GetEnumerator_mAD390AB027224D023EB048D3F7DDC684D69CAF5F(L_2, /*hidden argument*/List_1_GetEnumerator_mAD390AB027224D023EB048D3F7DDC684D69CAF5F_RuntimeMethod_var);
		V_2 = L_3;
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0084;
		}

IL_0022:
		{
			// foreach (Character Enemy in TeamManager.teamManager.enemyTeamCharacter(Team))
			Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_4;
			L_4 = Enumerator_get_Current_m1319FB9221759F3330354B81668E10047A4B1F17_inline((Enumerator_t649D2193B2B6C28E89B82247B1D28A30D3548F50 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m1319FB9221759F3330354B81668E10047A4B1F17_RuntimeMethod_var);
			V_3 = L_4;
			// if (Enemy.Hp > 0) //ü���� 0���� ������ ������ ������ �ν�
			Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_5 = V_3;
			NullCheck(L_5);
			int32_t L_6;
			L_6 = Character_get_Hp_m258775AC8D73AE39E8088098A8EEEC0449CD1C37_inline(L_5, /*hidden argument*/NULL);
			if ((((int32_t)L_6) <= ((int32_t)0)))
			{
				goto IL_0084;
			}
		}

IL_0033:
		{
			// float Dis = Vector3.Distance(Enemy.transform.position, transform.position);
			Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_7 = V_3;
			NullCheck(L_7);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
			L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_7, /*hidden argument*/NULL);
			NullCheck(L_8);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
			L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
			L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
			NullCheck(L_10);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
			L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
			float L_12;
			L_12 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_9, L_11, /*hidden argument*/NULL);
			V_4 = L_12;
			// if (nearestDis > Dis || nearestDis == null)
			Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  L_13 = V_0;
			V_5 = L_13;
			float L_14 = V_4;
			V_6 = L_14;
			float L_15;
			L_15 = Nullable_1_GetValueOrDefault_mD05253A5EFE2AA2575CC36BD681FFB5638B9F560_inline((Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *)(&V_5), /*hidden argument*/Nullable_1_GetValueOrDefault_mD05253A5EFE2AA2575CC36BD681FFB5638B9F560_RuntimeMethod_var);
			float L_16 = V_6;
			bool L_17;
			L_17 = Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_inline((Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *)(&V_5), /*hidden argument*/Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_RuntimeMethod_var);
			if (((int32_t)((int32_t)((((float)L_15) > ((float)L_16))? 1 : 0)&(int32_t)L_17)))
			{
				goto IL_0075;
			}
		}

IL_006c:
		{
			bool L_18;
			L_18 = Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_inline((Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_RuntimeMethod_var);
			if (L_18)
			{
				goto IL_0084;
			}
		}

IL_0075:
		{
			// Tr = Enemy.gameObject;
			Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_19 = V_3;
			NullCheck(L_19);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
			L_20 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_19, /*hidden argument*/NULL);
			V_1 = L_20;
			// nearestDis = Dis;
			float L_21 = V_4;
			Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  L_22;
			memset((&L_22), 0, sizeof(L_22));
			Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A((&L_22), L_21, /*hidden argument*/Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A_RuntimeMethod_var);
			V_0 = L_22;
		}

IL_0084:
		{
			// foreach (Character Enemy in TeamManager.teamManager.enemyTeamCharacter(Team))
			bool L_23;
			L_23 = Enumerator_MoveNext_m61560064357E7BA96F0D31503834ED5AD39BF1D2((Enumerator_t649D2193B2B6C28E89B82247B1D28A30D3548F50 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m61560064357E7BA96F0D31503834ED5AD39BF1D2_RuntimeMethod_var);
			if (L_23)
			{
				goto IL_0022;
			}
		}

IL_008d:
		{
			IL2CPP_LEAVE(0x9D, FINALLY_008f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008f;
	}

FINALLY_008f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m269393C54BD0A12D8236C0C4CF64AE91D132C8E8((Enumerator_t649D2193B2B6C28E89B82247B1D28A30D3548F50 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m269393C54BD0A12D8236C0C4CF64AE91D132C8E8_RuntimeMethod_var);
		IL2CPP_END_FINALLY(143)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(143)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x9D, IL_009d)
	}

IL_009d:
	{
		// return Tr;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = V_1;
		return L_24;
	}
}
// System.Void AttackBuilding::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackBuilding__ctor_m60CF33289783661559016A1C6D64F08B53DB5531 (AttackBuilding_t35CB28B6CDF4EFB4E3A43E9864DB4A2BF03C15C7 * __this, const RuntimeMethod* method)
{
	{
		// public bool work = true;
		__this->set_work_19((bool)1);
		Building__ctor_mB1BAA261A5F238A037725FDDD528390DCA177239(__this, /*hidden argument*/NULL);
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
// System.Void AttackTower::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackTower_Attack_m0C1B437489838940D161241422A540A7E8B0D4F9 (AttackTower_tBF17BD5CA09AC68FFDD23BB9D4F5E2DDF0059B6D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisArrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A_mF3D956E1684A01B627E0B9C4F54870ADE244B88F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCharacter_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8_mBE9C21DF0A03E3EFD7D08B0754A1BB6D4D94CA78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Target == null || Target.GetComponent<Character>().Hp<=0)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_Target_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_Target_21();
		NullCheck(L_2);
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_3;
		L_3 = GameObject_GetComponent_TisCharacter_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8_mBE9C21DF0A03E3EFD7D08B0754A1BB6D4D94CA78(L_2, /*hidden argument*/GameObject_GetComponent_TisCharacter_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8_mBE9C21DF0A03E3EFD7D08B0754A1BB6D4D94CA78_RuntimeMethod_var);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Character_get_Hp_m258775AC8D73AE39E8088098A8EEEC0449CD1C37_inline(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_002d;
		}
	}

IL_0021:
	{
		// Target = NearlyTargetSet();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = AttackBuilding_NearlyTargetSet_mF8D112DD46881488E0BF5B21E12EA3DBF592C872(__this, /*hidden argument*/NULL);
		__this->set_Target_21(L_5);
	}

IL_002d:
	{
		// if (Target != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_Target_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_00af;
		}
	}
	{
		// if (AttackRangeFucn(Target.transform, Range: AttackRange))
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_Target_21();
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		int32_t L_10;
		L_10 = AttackBuilding_get_AttackRange_m48F21C52D55F0C98C1F2065620C9F93BCC3434B3_inline(__this, /*hidden argument*/NULL);
		bool L_11;
		L_11 = AttackBuilding_AttackRangeFucn_mED56C076E9B4552A59E13C0A16430091AC8049D2(__this, L_9, (180.0f), ((float)((float)L_10)), /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_00af;
		}
	}
	{
		// GameObject arrowObj = PoolManager.poolManager.GetArrow();
		PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * L_12 = ((PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7_StaticFields*)il2cpp_codegen_static_fields_for(PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7_il2cpp_TypeInfo_var))->get_poolManager_4();
		NullCheck(L_12);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = PoolManager_GetArrow_mAABF78A265F23244D30DC8451D8753839598204E(L_12, /*hidden argument*/NULL);
		// Arrow arrow = arrowObj.GetComponentInChildren<Arrow>();
		NullCheck(L_13);
		Arrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A * L_14;
		L_14 = GameObject_GetComponentInChildren_TisArrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A_mF3D956E1684A01B627E0B9C4F54870ADE244B88F(L_13, /*hidden argument*/GameObject_GetComponentInChildren_TisArrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A_mF3D956E1684A01B627E0B9C4F54870ADE244B88F_RuntimeMethod_var);
		// arrow.Team = Team;
		Arrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A * L_15 = L_14;
		int32_t L_16;
		L_16 = Building_get_Team_m29511AB7E5D15B834E7D1229493A037B64199BF0_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Arrow_set_Team_m5F43E4628FB394F4A8D4240772A145A25D3F49ED(L_15, L_16, /*hidden argument*/NULL);
		// arrow.Damaged(AttackDamage);
		Arrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A * L_17 = L_15;
		int32_t L_18;
		L_18 = AttackBuilding_get_AttackDamage_m19C39B40E1E7F21E72A8B034EF73EB46E5907ABB_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Arrow_Damaged_mF34FE8CB3D945CC4EA33FDFDDC3478850CF1F63C(L_17, L_18, (-1), /*hidden argument*/NULL);
		// arrow.gameObject.SetActive(true);
		Arrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A * L_19 = L_17;
		NullCheck(L_19);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_20, (bool)1, /*hidden argument*/NULL);
		// arrow.transform.position = Pos.position;
		Arrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A * L_21 = L_19;
		NullCheck(L_21);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_21, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23 = __this->get_Pos_20();
		NullCheck(L_23);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_22, L_24, /*hidden argument*/NULL);
		// arrow.TargetSet(Target);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = __this->get_Target_21();
		NullCheck(L_21);
		Arrow_TargetSet_mDB625A1637CF3949CC42DB8093359C5471F1248C(L_21, L_25, /*hidden argument*/NULL);
	}

IL_00af:
	{
		// }
		return;
	}
}
// System.Void AttackTower::Upgrade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackTower_Upgrade_m323E71FDD5ED0EA528235900D355DF368CF2B8D9 (AttackTower_tBF17BD5CA09AC68FFDD23BB9D4F5E2DDF0059B6D * __this, const RuntimeMethod* method)
{
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AttackTower_Upgrade_m323E71FDD5ED0EA528235900D355DF368CF2B8D9_RuntimeMethod_var)));
	}
}
// System.Void AttackTower::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackTower__ctor_m4FA95F0F5A22127078CB63617507F1E9557274B6 (AttackTower_tBF17BD5CA09AC68FFDD23BB9D4F5E2DDF0059B6D * __this, const RuntimeMethod* method)
{
	{
		AttackBuilding__ctor_m60CF33289783661559016A1C6D64F08B53DB5531(__this, /*hidden argument*/NULL);
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
// System.Int32 Building::get_Team()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Building_get_Team_m29511AB7E5D15B834E7D1229493A037B64199BF0 (Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * __this, const RuntimeMethod* method)
{
	{
		// public int Team { get { return team; } set { team = value; SetTeamColor(); } } //������, ������, ���̾��
		int32_t L_0 = __this->get_team_4();
		return L_0;
	}
}
// System.Void Building::set_Team(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Building_set_Team_mC638FEFA93D7CA74939AE857C5C29D758701A19C (Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Team { get { return team; } set { team = value; SetTeamColor(); } } //������, ������, ���̾��
		int32_t L_0 = ___value0;
		__this->set_team_4(L_0);
		// public int Team { get { return team; } set { team = value; SetTeamColor(); } } //������, ������, ���̾��
		Building_SetTeamColor_m54BDEFC85A43633142BBF6D4B1D0B4573FE838C0(__this, /*hidden argument*/NULL);
		// public int Team { get { return team; } set { team = value; SetTeamColor(); } } //������, ������, ���̾��
		return;
	}
}
// System.Int32 Building::get_Level()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Building_get_Level_m7F56EA533DE67D9B163557CB580F66ABA0C418C0 (Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * __this, const RuntimeMethod* method)
{
	{
		// public int Level { get { return level; } set { level = value; } }
		int32_t L_0 = __this->get_level_5();
		return L_0;
	}
}
// System.Void Building::set_Level(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Building_set_Level_mE17A9952837E18D27830DBE7F745CBD7AF5470B1 (Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Level { get { return level; } set { level = value; } }
		int32_t L_0 = ___value0;
		__this->set_level_5(L_0);
		// public int Level { get { return level; } set { level = value; } }
		return;
	}
}
// System.Int32 Building::get_MaxHp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Building_get_MaxHp_m9EE453FE687971B09B4A75184CAFD10FC43FC96A (Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * __this, const RuntimeMethod* method)
{
	{
		// public int MaxHp { get { return maxHp; } set { maxHp = value; } } //�ִ�ü��
		int32_t L_0 = __this->get_maxHp_6();
		return L_0;
	}
}
// System.Void Building::set_MaxHp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Building_set_MaxHp_mC7F24ABEE4C1738158A8E83CF6E7A491EF50BA0C (Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int MaxHp { get { return maxHp; } set { maxHp = value; } } //�ִ�ü��
		int32_t L_0 = ___value0;
		__this->set_maxHp_6(L_0);
		// public int MaxHp { get { return maxHp; } set { maxHp = value; } } //�ִ�ü��
		return;
	}
}
// System.Int32 Building::get_Hp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Building_get_Hp_m02B74A57F2F4BE3D26F4AF5E8D9CF4E9221D2191 (Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * __this, const RuntimeMethod* method)
{
	{
		// public int Hp { get { return hp; } set { hp = value; } }//ü��
		int32_t L_0 = __this->get_hp_8();
		return L_0;
	}
}
// System.Void Building::set_Hp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Building_set_Hp_m7AAA0EAC7275B3D010DBE9B810AC04434AA644E3 (Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Hp { get { return hp; } set { hp = value; } }//ü��
		int32_t L_0 = ___value0;
		__this->set_hp_8(L_0);
		// public int Hp { get { return hp; } set { hp = value; } }//ü��
		return;
	}
}
// System.Int32 Building::get_Defense()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Building_get_Defense_mFAFDBB57F1BEB8292C504EE3419222A590077552 (Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * __this, const RuntimeMethod* method)
{
	{
		// public int Defense { get { return defense; } set { defense = value; } } //����
		int32_t L_0 = __this->get_defense_9();
		return L_0;
	}
}
// System.Void Building::set_Defense(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Building_set_Defense_m4F1A5F0DB4F2218B652BC9F2CCAE780E3E98698B (Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Defense { get { return defense; } set { defense = value; } } //����
		int32_t L_0 = ___value0;
		__this->set_defense_9(L_0);
		// public int Defense { get { return defense; } set { defense = value; } } //����
		return;
	}
}
// System.Void Building::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Building_Awake_m451508EE813C560FE7824E90E162C14CA7A70DD0 (Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m5421192AB2FFE9765BB0D6C21CDE3D51D32BCF2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_mDC1EE7E2332C6862976FA026EB6ED1B3EB4E142D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_LoadAll_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_mA1CF9E54996571EFE7094BDE018205CF1EB5D277_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8272BF3175F37940DC10163DFD94722BD508EA85);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BuildingSkinnedMesh = GetComponentsInChildren<SkinnedMeshRenderer>();
		SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED* L_0;
		L_0 = Component_GetComponentsInChildren_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_mDC1EE7E2332C6862976FA026EB6ED1B3EB4E142D(__this, /*hidden argument*/Component_GetComponentsInChildren_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_mDC1EE7E2332C6862976FA026EB6ED1B3EB4E142D_RuntimeMethod_var);
		__this->set_BuildingSkinnedMesh_11(L_0);
		// BuildingMesh = GetComponentsInChildren<MeshRenderer>();
		MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* L_1;
		L_1 = Component_GetComponentsInChildren_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m5421192AB2FFE9765BB0D6C21CDE3D51D32BCF2A(__this, /*hidden argument*/Component_GetComponentsInChildren_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m5421192AB2FFE9765BB0D6C21CDE3D51D32BCF2A_RuntimeMethod_var);
		__this->set_BuildingMesh_12(L_1);
		// mat = Resources.LoadAll<Material>("0.TeamColor/BuildingColor");
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_2;
		L_2 = Resources_LoadAll_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_mA1CF9E54996571EFE7094BDE018205CF1EB5D277(_stringLiteral8272BF3175F37940DC10163DFD94722BD508EA85, /*hidden argument*/Resources_LoadAll_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_mA1CF9E54996571EFE7094BDE018205CF1EB5D277_RuntimeMethod_var);
		__this->set_mat_13(L_2);
		// prevMaxHp = maxHp;
		int32_t L_3 = __this->get_maxHp_6();
		__this->set_prevMaxHp_7(L_3);
		// prevDefense = defense;
		int32_t L_4 = __this->get_defense_9();
		__this->set_prevDefense_10(L_4);
		// }
		return;
	}
}
// System.Void Building::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Building_OnEnable_m0CD76EAB1A7337383EC0951E0A76900F45EC741C (Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * __this, const RuntimeMethod* method)
{
	{
		// hp = maxHp;
		int32_t L_0 = __this->get_maxHp_6();
		__this->set_hp_8(L_0);
		// SetTeamColor();
		Building_SetTeamColor_m54BDEFC85A43633142BBF6D4B1D0B4573FE838C0(__this, /*hidden argument*/NULL);
		// BuildingSet();
		VirtActionInvoker0::Invoke(14 /* System.Void Building::BuildingSet() */, __this);
		// }
		return;
	}
}
// System.Void Building::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Building_OnDisable_m8F3A93B28E1EF94632805EC940CC92A8D719171C (Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * __this, const RuntimeMethod* method)
{
	{
		// BuildingUnSet();
		VirtActionInvoker0::Invoke(15 /* System.Void Building::BuildingUnSet() */, __this);
		// }
		return;
	}
}
// System.Void Building::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Building_Start_mD3DB4D7309EA6F30A20E897C2B9DF6F6B0DDB595 (Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Building::BuildingSet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Building_BuildingSet_m4EFDEABA69F272A169BCAD93154A6A7CAA83BBA8 (Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TeamManager.teamManager.AddBuilding(team, this);
		TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535 * L_0 = ((TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_StaticFields*)il2cpp_codegen_static_fields_for(TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_il2cpp_TypeInfo_var))->get_teamManager_5();
		int32_t L_1 = __this->get_team_4();
		NullCheck(L_0);
		TeamManager_AddBuilding_mCD0F1A401F1BB74212BF5F03F3AE1A895B700B0B(L_0, L_1, __this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Building::BuildingUnSet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Building_BuildingUnSet_m34907AA0BDB5CBC89A8C79C8CA06EB7858502E2F (Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TeamManager.teamManager.RemoveBuilding(team, this);
		TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535 * L_0 = ((TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_StaticFields*)il2cpp_codegen_static_fields_for(TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_il2cpp_TypeInfo_var))->get_teamManager_5();
		int32_t L_1 = __this->get_team_4();
		NullCheck(L_0);
		TeamManager_RemoveBuilding_mE57A301F673960E8844B6158A934C315153D9DB9(L_0, L_1, __this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Building::SetTeamColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Building_SetTeamColor_m54BDEFC85A43633142BBF6D4B1D0B4573FE838C0 (Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int i = 0; i < BuildingSkinnedMesh.Length; i++)
		V_0 = 0;
		goto IL_0022;
	}

IL_0004:
	{
		// BuildingSkinnedMesh[i].material = mat[team];
		SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED* L_0 = __this->get_BuildingSkinnedMesh_11();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_4 = __this->get_mat_13();
		int32_t L_5 = __this->get_team_4();
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_3);
		Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA(L_3, L_7, /*hidden argument*/NULL);
		// for (int i = 0; i < BuildingSkinnedMesh.Length; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0022:
	{
		// for (int i = 0; i < BuildingSkinnedMesh.Length; i++)
		int32_t L_9 = V_0;
		SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED* L_10 = __this->get_BuildingSkinnedMesh_11();
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		// for (int i = 0; i < BuildingMesh.Length; i++)
		V_1 = 0;
		goto IL_004f;
	}

IL_0031:
	{
		// BuildingMesh[i].material = mat[team];
		MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* L_11 = __this->get_BuildingMesh_12();
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_15 = __this->get_mat_13();
		int32_t L_16 = __this->get_team_4();
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_14);
		Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA(L_14, L_18, /*hidden argument*/NULL);
		// for (int i = 0; i < BuildingMesh.Length; i++)
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_004f:
	{
		// for (int i = 0; i < BuildingMesh.Length; i++)
		int32_t L_20 = V_1;
		MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* L_21 = __this->get_BuildingMesh_12();
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))))))
		{
			goto IL_0031;
		}
	}
	{
		// gameObject.layer = 6 + team;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		int32_t L_23 = __this->get_team_4();
		NullCheck(L_22);
		GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6(L_22, ((int32_t)il2cpp_codegen_add((int32_t)6, (int32_t)L_23)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Building::Damaged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Building_Damaged_m9E15325561B8D068A713CC518B451C2229ADC6CE (Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * __this, int32_t ___Damaged0, const RuntimeMethod* method)
{
	{
		// if (hp > 0)
		int32_t L_0 = __this->get_hp_8();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		// hp -= Damaged + defense;
		int32_t L_1 = __this->get_hp_8();
		int32_t L_2 = ___Damaged0;
		int32_t L_3 = __this->get_defense_9();
		__this->set_hp_8(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)))));
		// if (hp <= 0)
		int32_t L_4 = __this->get_hp_8();
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		// DieCh();
		Building_DieCh_m37385A3132C73C8D3C364B7E8043F23423747921(__this, /*hidden argument*/NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void Building::Damaged(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Building_Damaged_m2330CA9221AE802FE67916FA3F535E74AF70D212 (Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * __this, int32_t ___Damaged0, int32_t ___team1, const RuntimeMethod* method)
{
	{
		// if (hp > 0)
		int32_t L_0 = __this->get_hp_8();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		// hp -= Damaged + defense;
		int32_t L_1 = __this->get_hp_8();
		int32_t L_2 = ___Damaged0;
		int32_t L_3 = __this->get_defense_9();
		__this->set_hp_8(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)))));
		// if (hp <= 0)
		int32_t L_4 = __this->get_hp_8();
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		// DieCh();
		Building_DieCh_m37385A3132C73C8D3C364B7E8043F23423747921(__this, /*hidden argument*/NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void Building::DieCh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Building_DieCh_m37385A3132C73C8D3C364B7E8043F23423747921 (Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisAI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F_m6155B9340555F4C653D8C9AB5F7EA9666AE269F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE16FB5215DA91784505C8DC7A1AE4D386BCCACF);
		s_Il2CppMethodInitialized = true;
	}
	AIU5BU5D_tDC519424C0BF13D583E3E51705FC1F919D1B4A8F* V_0 = NULL;
	int32_t V_1 = 0;
	AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * V_2 = NULL;
	{
		// AI[] allAI = FindObjectsOfType<AI>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		AIU5BU5D_tDC519424C0BF13D583E3E51705FC1F919D1B4A8F* L_0;
		L_0 = Object_FindObjectsOfType_TisAI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F_m6155B9340555F4C653D8C9AB5F7EA9666AE269F1(/*hidden argument*/Object_FindObjectsOfType_TisAI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F_m6155B9340555F4C653D8C9AB5F7EA9666AE269F1_RuntimeMethod_var);
		// foreach (AI targetAI in allAI)
		V_0 = L_0;
		V_1 = 0;
		goto IL_0030;
	}

IL_000a:
	{
		// foreach (AI targetAI in allAI)
		AIU5BU5D_tDC519424C0BF13D583E3E51705FC1F919D1B4A8F* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if (targetAI.target == gameObject) // ���� ĳ���Ͱ� Ÿ���̶��
		AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * L_5 = V_2;
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = L_5->get_target_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_002c;
		}
	}
	{
		// targetAI.SendMessage("TargetSetting"); //Ÿ�� �� ���� �޼����� �����ϴ�.
		AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * L_9 = V_2;
		NullCheck(L_9);
		Component_SendMessage_m3B002D579E5933EEFCA4024A1845CACB4FBBC208(L_9, _stringLiteralFE16FB5215DA91784505C8DC7A1AE4D386BCCACF, /*hidden argument*/NULL);
	}

IL_002c:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0030:
	{
		// foreach (AI targetAI in allAI)
		int32_t L_11 = V_1;
		AIU5BU5D_tDC519424C0BF13D583E3E51705FC1F919D1B4A8F* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Building::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Building__ctor_mB1BAA261A5F238A037725FDDD528390DCA177239 (Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * __this, const RuntimeMethod* method)
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
// System.Void Castle::add_unitProduce(TeamManager/BuildingWork)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Castle_add_unitProduce_m303DEC91854A9B9DCA8B23FE06B29D887A8C25D1 (Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * __this, BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * V_0 = NULL;
	BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * V_1 = NULL;
	BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * V_2 = NULL;
	{
		BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * L_0 = __this->get_unitProduce_20();
		V_0 = L_0;
	}

IL_0007:
	{
		BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * L_1 = V_0;
		V_1 = L_1;
		BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * L_2 = V_1;
		BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF *)CastclassSealed((RuntimeObject*)L_4, BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF_il2cpp_TypeInfo_var));
		BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF ** L_5 = __this->get_address_of_unitProduce_20();
		BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * L_6 = V_2;
		BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * L_7 = V_1;
		BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * L_8;
		L_8 = InterlockedCompareExchangeImpl<BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF *>((BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF **)L_5, L_6, L_7);
		V_0 = L_8;
		BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * L_9 = V_0;
		BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * L_10 = V_1;
		if ((!(((RuntimeObject*)(BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF *)L_9) == ((RuntimeObject*)(BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Castle::remove_unitProduce(TeamManager/BuildingWork)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Castle_remove_unitProduce_m4D70FCE6A91F7A2E254AA96CBCFF14C48460D314 (Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * __this, BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * V_0 = NULL;
	BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * V_1 = NULL;
	BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * V_2 = NULL;
	{
		BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * L_0 = __this->get_unitProduce_20();
		V_0 = L_0;
	}

IL_0007:
	{
		BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * L_1 = V_0;
		V_1 = L_1;
		BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * L_2 = V_1;
		BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF *)CastclassSealed((RuntimeObject*)L_4, BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF_il2cpp_TypeInfo_var));
		BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF ** L_5 = __this->get_address_of_unitProduce_20();
		BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * L_6 = V_2;
		BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * L_7 = V_1;
		BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * L_8;
		L_8 = InterlockedCompareExchangeImpl<BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF *>((BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF **)L_5, L_6, L_7);
		V_0 = L_8;
		BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * L_9 = V_0;
		BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * L_10 = V_1;
		if ((!(((RuntimeObject*)(BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF *)L_9) == ((RuntimeObject*)(BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Castle::add_attackBuildingWork(TeamManager/BuildingWork)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Castle_add_attackBuildingWork_mDD964B1620A8C0C90D12791B84E6207BE60A354D (Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * __this, BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * V_0 = NULL;
	BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * V_1 = NULL;
	BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * V_2 = NULL;
	{
		BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * L_0 = __this->get_attackBuildingWork_21();
		V_0 = L_0;
	}

IL_0007:
	{
		BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * L_1 = V_0;
		V_1 = L_1;
		BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * L_2 = V_1;
		BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF *)CastclassSealed((RuntimeObject*)L_4, BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF_il2cpp_TypeInfo_var));
		BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF ** L_5 = __this->get_address_of_attackBuildingWork_21();
		BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * L_6 = V_2;
		BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * L_7 = V_1;
		BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * L_8;
		L_8 = InterlockedCompareExchangeImpl<BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF *>((BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF **)L_5, L_6, L_7);
		V_0 = L_8;
		BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * L_9 = V_0;
		BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * L_10 = V_1;
		if ((!(((RuntimeObject*)(BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF *)L_9) == ((RuntimeObject*)(BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Castle::remove_attackBuildingWork(TeamManager/BuildingWork)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Castle_remove_attackBuildingWork_mB14962EA3AE27F4FB0C6E14DA78C382C7D6EEB71 (Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * __this, BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * V_0 = NULL;
	BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * V_1 = NULL;
	BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * V_2 = NULL;
	{
		BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * L_0 = __this->get_attackBuildingWork_21();
		V_0 = L_0;
	}

IL_0007:
	{
		BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * L_1 = V_0;
		V_1 = L_1;
		BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * L_2 = V_1;
		BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF *)CastclassSealed((RuntimeObject*)L_4, BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF_il2cpp_TypeInfo_var));
		BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF ** L_5 = __this->get_address_of_attackBuildingWork_21();
		BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * L_6 = V_2;
		BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * L_7 = V_1;
		BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * L_8;
		L_8 = InterlockedCompareExchangeImpl<BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF *>((BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF **)L_5, L_6, L_7);
		V_0 = L_8;
		BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * L_9 = V_0;
		BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * L_10 = V_1;
		if ((!(((RuntimeObject*)(BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF *)L_9) == ((RuntimeObject*)(BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Castle::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Castle_OnEnable_m8CC5BDD901FEB478B81884816175B5B1A69484C9 (Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6875E13FB00CE436458433DD47D692957B942F4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TeamManager.teamManager.Castles.Add(this);
		TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535 * L_0 = ((TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_StaticFields*)il2cpp_codegen_static_fields_for(TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_il2cpp_TypeInfo_var))->get_teamManager_5();
		NullCheck(L_0);
		List_1_t82C8BE4340B2B0C5DB5EB0BC5EA0751F69E2B1A4 * L_1 = L_0->get_Castles_4();
		NullCheck(L_1);
		List_1_Add_m6875E13FB00CE436458433DD47D692957B942F4E(L_1, __this, /*hidden argument*/List_1_Add_m6875E13FB00CE436458433DD47D692957B942F4E_RuntimeMethod_var);
		// base.OnEnable();
		Building_OnEnable_m0CD76EAB1A7337383EC0951E0A76900F45EC741C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Castle::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Castle_Start_mDB5D080A977A17C8D545A318C520D58874F03978 (Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * __this, const RuntimeMethod* method)
{
	{
		// PrevBuildingNum = MaxbuildingNum;
		int32_t L_0 = __this->get_MaxbuildingNum_14();
		__this->set_PrevBuildingNum_15(L_0);
		// PrevUnitNum = MaxUnitNum;
		int32_t L_1 = __this->get_MaxUnitNum_16();
		__this->set_PrevUnitNum_17(L_1);
		// base.Start();
		Building_Start_mD3DB4D7309EA6F30A20E897C2B9DF6F6B0DDB595(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Castle::Upgrade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Castle_Upgrade_mD0C44BDD652748F5CBDB4A5CAFEBFAAFDB28E916 (Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * __this, const RuntimeMethod* method)
{
	{
		// MaxbuildingNum = PrevUnitNum + Level;
		int32_t L_0 = __this->get_PrevUnitNum_17();
		int32_t L_1;
		L_1 = Building_get_Level_m7F56EA533DE67D9B163557CB580F66ABA0C418C0_inline(__this, /*hidden argument*/NULL);
		__this->set_MaxbuildingNum_14(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		// MaxUnitNum = PrevUnitNum + (4 * Level);
		int32_t L_2 = __this->get_PrevUnitNum_17();
		int32_t L_3;
		L_3 = Building_get_Level_m7F56EA533DE67D9B163557CB580F66ABA0C418C0_inline(__this, /*hidden argument*/NULL);
		__this->set_MaxUnitNum_16(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)4, (int32_t)L_3)))));
		// }
		return;
	}
}
// System.Void Castle::populationCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Castle_populationCheck_m5C185B1228C0D004F773030DBA2C54064C315ED5 (Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mAE69DFF149AE1C2D5898152E39C2E01C2BB605C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (units.Count < MaxUnitNum) //���� ������ �ִ� ���� ���� ������ ���ֻ��� ���� �ƴϸ� ���ֻ��� ����
		List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 * L_0 = __this->get_units_19();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mAE69DFF149AE1C2D5898152E39C2E01C2BB605C4_inline(L_0, /*hidden argument*/List_1_get_Count_mAE69DFF149AE1C2D5898152E39C2E01C2BB605C4_RuntimeMethod_var);
		int32_t L_2 = __this->get_MaxUnitNum_16();
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002f;
		}
	}
	{
		// if (!unitproduce) //�̰� ������ �ʹ� ���� �̺�Ʈ�Լ��� ����ؾ� �ϹǷ� �ɾ���Ҵ�.
		bool L_3 = __this->get_unitproduce_22();
		if (L_3)
		{
			goto IL_004a;
		}
	}
	{
		// unitProduce(true);
		BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * L_4 = __this->get_unitProduce_20();
		NullCheck(L_4);
		BuildingWork_Invoke_m0A2231524F9EA584E4DB5E2FBD7D0546F46BE316(L_4, (bool)1, /*hidden argument*/NULL);
		// unitproduce = true;
		__this->set_unitproduce_22((bool)1);
		// }
		return;
	}

IL_002f:
	{
		// if (unitproduce)
		bool L_5 = __this->get_unitproduce_22();
		if (!L_5)
		{
			goto IL_004a;
		}
	}
	{
		// unitProduce(false);
		BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * L_6 = __this->get_unitProduce_20();
		NullCheck(L_6);
		BuildingWork_Invoke_m0A2231524F9EA584E4DB5E2FBD7D0546F46BE316(L_6, (bool)0, /*hidden argument*/NULL);
		// unitproduce = false;
		__this->set_unitproduce_22((bool)0);
	}

IL_004a:
	{
		// } //�α��� üũ�ؼ� ���� �ǹ��� ���� �������� �Ұ������� ������ �Լ�
		return;
	}
}
// System.Void Castle::AttackBuildingCheck(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Castle_AttackBuildingCheck_m576A7DF69FADABFC1413F6A167D28EC390A8074D (Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * __this, bool ___isattack0, const RuntimeMethod* method)
{
	{
		// attackBuildingWork(isattack); //���ݰǹ� ���ÿ� ���� �Լ�
		BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * L_0 = __this->get_attackBuildingWork_21();
		bool L_1 = ___isattack0;
		NullCheck(L_0);
		BuildingWork_Invoke_m0A2231524F9EA584E4DB5E2FBD7D0546F46BE316(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Castle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Castle__ctor_m87771D323B29FD9FFFFA043872A3955CF9D9AD7C (Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE3B71719DFF2545B6DBA377A659B0D909CCD9481_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE576755FB05B5C38187D21DEAEF8DD460C905372_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int MaxbuildingNum = 2;
		__this->set_MaxbuildingNum_14(2);
		// public int MaxUnitNum = 8;
		__this->set_MaxUnitNum_16(8);
		// public List<Building> buildings = new List<Building>();
		List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE * L_0 = (List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE *)il2cpp_codegen_object_new(List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE_il2cpp_TypeInfo_var);
		List_1__ctor_mE3B71719DFF2545B6DBA377A659B0D909CCD9481(L_0, /*hidden argument*/List_1__ctor_mE3B71719DFF2545B6DBA377A659B0D909CCD9481_RuntimeMethod_var);
		__this->set_buildings_18(L_0);
		// public List<Character> units = new List<Character>();
		List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 * L_1 = (List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 *)il2cpp_codegen_object_new(List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664_il2cpp_TypeInfo_var);
		List_1__ctor_mE576755FB05B5C38187D21DEAEF8DD460C905372(L_1, /*hidden argument*/List_1__ctor_mE576755FB05B5C38187D21DEAEF8DD460C905372_RuntimeMethod_var);
		__this->set_units_19(L_1);
		// private bool unitproduce = true; //���°� �޶����� ������ ���� event�� �ҷ��� �ð��� �ɸ��Ƿ� �̰������� �˼��ְ� ������ �־���.
		__this->set_unitproduce_22((bool)1);
		// private bool attackWork = true;
		__this->set_attackWork_23((bool)1);
		Building__ctor_mB1BAA261A5F238A037725FDDD528390DCA177239(__this, /*hidden argument*/NULL);
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
// System.Int32 Character::get_Team()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Character_get_Team_m7778D19EA7B882EC0979B5CCA0CF0BA9D41ECF5D (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, const RuntimeMethod* method)
{
	{
		// get { return team; }
		int32_t L_0 = __this->get_team_4();
		return L_0;
	}
}
// System.Void Character::set_Team(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_set_Team_mAE79E882A1A3C90442577AE7879B3020D5D82942 (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// team = value; SetTeamColor();
		int32_t L_0 = ___value0;
		__this->set_team_4(L_0);
		// team = value; SetTeamColor();
		Character_SetTeamColor_mDF49909FE7881F0EB07727AA1F25973136F08002(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 Character::get_Level()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Character_get_Level_mB91F9EDC05CC93556C7400B639766B0D4420B562 (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, const RuntimeMethod* method)
{
	{
		// public int Level { get { return level; } set { level = value; } }
		int32_t L_0 = __this->get_level_5();
		return L_0;
	}
}
// System.Void Character::set_Level(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_set_Level_mB0C282123E520DAE512C639830DA8F982489171C (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Level { get { return level; } set { level = value; } }
		int32_t L_0 = ___value0;
		__this->set_level_5(L_0);
		// public int Level { get { return level; } set { level = value; } }
		return;
	}
}
// System.Int32 Character::get_MaxHp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Character_get_MaxHp_m743BC419062DBB06B0A78133D2C5B11DCB0E606A (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, const RuntimeMethod* method)
{
	{
		// public int MaxHp { get { return maxHp; } set { maxHp = value; } } //�ִ�ü��
		int32_t L_0 = __this->get_maxHp_7();
		return L_0;
	}
}
// System.Void Character::set_MaxHp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_set_MaxHp_m4CB01081580763CADD544427CC658637CDFE0844 (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int MaxHp { get { return maxHp; } set { maxHp = value; } } //�ִ�ü��
		int32_t L_0 = ___value0;
		__this->set_maxHp_7(L_0);
		// public int MaxHp { get { return maxHp; } set { maxHp = value; } } //�ִ�ü��
		return;
	}
}
// System.Int32 Character::get_Hp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Character_get_Hp_m258775AC8D73AE39E8088098A8EEEC0449CD1C37 (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, const RuntimeMethod* method)
{
	{
		// public int Hp { get { return hp; } set { hp = value; } }//ü��
		int32_t L_0 = __this->get_hp_9();
		return L_0;
	}
}
// System.Void Character::set_Hp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_set_Hp_m5E467757E5AF9563F728A2C75968A0BCEBDBE41A (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Hp { get { return hp; } set { hp = value; } }//ü��
		int32_t L_0 = ___value0;
		__this->set_hp_9(L_0);
		// public int Hp { get { return hp; } set { hp = value; } }//ü��
		return;
	}
}
// System.Int32 Character::get_AttackDamage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Character_get_AttackDamage_mC9305B6E2C8278E2CBA6961F0946E50A0D41A494 (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, const RuntimeMethod* method)
{
	{
		// public int AttackDamage { get { return attackDamage; } set { attackDamage = value; } } //���ݷ�
		int32_t L_0 = __this->get_attackDamage_10();
		return L_0;
	}
}
// System.Void Character::set_AttackDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_set_AttackDamage_m316DCD6914220DBE15D3DC11F0AD061484F44397 (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int AttackDamage { get { return attackDamage; } set { attackDamage = value; } } //���ݷ�
		int32_t L_0 = ___value0;
		__this->set_attackDamage_10(L_0);
		// public int AttackDamage { get { return attackDamage; } set { attackDamage = value; } } //���ݷ�
		return;
	}
}
// System.Int32 Character::get_Defense()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Character_get_Defense_mEC057DDAAD4E1308E0B7D98814848908609CAFC9 (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, const RuntimeMethod* method)
{
	{
		// public int Defense { get { return defense; } set { defense = value; } } //����
		int32_t L_0 = __this->get_defense_12();
		return L_0;
	}
}
// System.Void Character::set_Defense(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_set_Defense_m36CB8CEC83B08BAC709D5CF93D6C60A92CEA57B9 (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Defense { get { return defense; } set { defense = value; } } //����
		int32_t L_0 = ___value0;
		__this->set_defense_12(L_0);
		// public int Defense { get { return defense; } set { defense = value; } } //����
		return;
	}
}
// System.Int32 Character::get_Speed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Character_get_Speed_mDF65D05479D45DB5079CC2B36A49B92B1C4ED7EA (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, const RuntimeMethod* method)
{
	{
		// public int Speed { get { return speed; } set { speed = value;} } //�̵��ӵ�
		int32_t L_0 = __this->get_speed_14();
		return L_0;
	}
}
// System.Void Character::set_Speed(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_set_Speed_mEF6A97E86EDE41EF40ADE9F489BB6BB6B5B7D434 (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Speed { get { return speed; } set { speed = value;} } //�̵��ӵ�
		int32_t L_0 = ___value0;
		__this->set_speed_14(L_0);
		// public int Speed { get { return speed; } set { speed = value;} } //�̵��ӵ�
		return;
	}
}
// System.Single Character::get_AttackSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Character_get_AttackSpeed_m0BFFD203BF86CD75E43C8506EA149319B7F39597 (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, const RuntimeMethod* method)
{
	{
		// public float AttackSpeed { get { return attackSpeed; } set { attackSpeed = value; } } //���ݼӵ�
		float L_0 = __this->get_attackSpeed_16();
		return L_0;
	}
}
// System.Void Character::set_AttackSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_set_AttackSpeed_mA53BF996F9A6870B654E293B802C469645907378 (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float AttackSpeed { get { return attackSpeed; } set { attackSpeed = value; } } //���ݼӵ�
		float L_0 = ___value0;
		__this->set_attackSpeed_16(L_0);
		// public float AttackSpeed { get { return attackSpeed; } set { attackSpeed = value; } } //���ݼӵ�
		return;
	}
}
// System.Int32 Character::get_AttackRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Character_get_AttackRange_m8AE154780E830109F962389ED3B0EFB8C73A1653 (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, const RuntimeMethod* method)
{
	{
		// public int AttackRange { get { return attackRange; } set { attackRange = value; } } //���ݹ���
		int32_t L_0 = __this->get_attackRange_18();
		return L_0;
	}
}
// System.Void Character::set_AttackRange(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_set_AttackRange_m0463316AED18682C58694BF5821DE0D584B5A40C (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int AttackRange { get { return attackRange; } set { attackRange = value; } } //���ݹ���
		int32_t L_0 = ___value0;
		__this->set_attackRange_18(L_0);
		// public int AttackRange { get { return attackRange; } set { attackRange = value; } } //���ݹ���
		return;
	}
}
// System.Void Character::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_Awake_mC74EB243B311BCC8D789F0C75169EF2BBB3E6D76 (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m5421192AB2FFE9765BB0D6C21CDE3D51D32BCF2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_mDC1EE7E2332C6862976FA026EB6ED1B3EB4E142D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_LoadAll_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_mA1CF9E54996571EFE7094BDE018205CF1EB5D277_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70AF86903F537EF766441FA06F9BBDB5C25E2D04);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CharacterSkinnedMesh = GetComponentsInChildren<SkinnedMeshRenderer>();
		SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED* L_0;
		L_0 = Component_GetComponentsInChildren_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_mDC1EE7E2332C6862976FA026EB6ED1B3EB4E142D(__this, /*hidden argument*/Component_GetComponentsInChildren_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_mDC1EE7E2332C6862976FA026EB6ED1B3EB4E142D_RuntimeMethod_var);
		__this->set_CharacterSkinnedMesh_20(L_0);
		// CharaterMesh = GetComponentsInChildren<MeshRenderer>();
		MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* L_1;
		L_1 = Component_GetComponentsInChildren_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m5421192AB2FFE9765BB0D6C21CDE3D51D32BCF2A(__this, /*hidden argument*/Component_GetComponentsInChildren_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m5421192AB2FFE9765BB0D6C21CDE3D51D32BCF2A_RuntimeMethod_var);
		__this->set_CharaterMesh_21(L_1);
		// mat = Resources.LoadAll<Material>("0.TeamColor/CharacterColor");
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_2;
		L_2 = Resources_LoadAll_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_mA1CF9E54996571EFE7094BDE018205CF1EB5D277(_stringLiteral70AF86903F537EF766441FA06F9BBDB5C25E2D04, /*hidden argument*/Resources_LoadAll_TisMaterial_t8927C00353A72755313F046D0CE85178AE8218EE_mA1CF9E54996571EFE7094BDE018205CF1EB5D277_RuntimeMethod_var);
		__this->set_mat_22(L_2);
		// prevMaxHp = maxHp;
		int32_t L_3 = __this->get_maxHp_7();
		__this->set_prevMaxHp_8(L_3);
		// prevAttackDamage = attackDamage;
		int32_t L_4 = __this->get_attackDamage_10();
		__this->set_prevAttackDamage_11(L_4);
		// prevAttackSpeed = attackSpeed;
		float L_5 = __this->get_attackSpeed_16();
		__this->set_prevAttackSpeed_17(L_5);
		// prevDefense = defense;
		int32_t L_6 = __this->get_defense_12();
		__this->set_prevDefense_13(L_6);
		// prevSpeed = speed;
		int32_t L_7 = __this->get_speed_14();
		__this->set_prevSpeed_15(L_7);
		// }
		return;
	}
}
// System.Void Character::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_OnEnable_m398D92B894E20C86376B31A4247EBFA71609C199 (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, const RuntimeMethod* method)
{
	{
		// hp = maxHp;
		int32_t L_0 = __this->get_maxHp_7();
		__this->set_hp_9(L_0);
		// SetTeamColor();
		Character_SetTeamColor_mDF49909FE7881F0EB07727AA1F25973136F08002(__this, /*hidden argument*/NULL);
		// UnitSet();
		VirtActionInvoker0::Invoke(16 /* System.Void Character::UnitSet() */, __this);
		// }
		return;
	}
}
// System.Void Character::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_Start_m19E14D7EC1D199C77A447BAB99FBDCA7FC91FF3B (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Character::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_OnDisable_m3EE2713AF2E749F9ECAC54872ED4EA9F10325540 (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, const RuntimeMethod* method)
{
	{
		// UnitUnSet();
		VirtActionInvoker0::Invoke(17 /* System.Void Character::UnitUnSet() */, __this);
		// }
		return;
	}
}
// System.Void Character::UnitSet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_UnitSet_mB8DD65322A8F6F6DB08DB8902DE3B43766AE2BDB (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TeamManager.teamManager.AddUnit(team, this);                //������ ������
		TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535 * L_0 = ((TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_StaticFields*)il2cpp_codegen_static_fields_for(TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_il2cpp_TypeInfo_var))->get_teamManager_5();
		int32_t L_1 = __this->get_team_4();
		NullCheck(L_0);
		TeamManager_AddUnit_m61DCDA66A055D5E57929C363FCBDE7A1677F1537(L_0, L_1, __this, /*hidden argument*/NULL);
		// TeamManager.teamManager.TeamCastle(team).populationCheck(); //�α��� üũ
		TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535 * L_2 = ((TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_StaticFields*)il2cpp_codegen_static_fields_for(TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_il2cpp_TypeInfo_var))->get_teamManager_5();
		int32_t L_3 = __this->get_team_4();
		NullCheck(L_2);
		Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * L_4;
		L_4 = TeamManager_TeamCastle_mBB4BB2E822B3EFAA0FDDEA1DB15B9FFA5A538247(L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Castle_populationCheck_m5C185B1228C0D004F773030DBA2C54064C315ED5(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Character::UnitUnSet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_UnitUnSet_m48279557C2A3DFC1B06E696C54B18644BC8CEAFC (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TeamManager.teamManager.RemoveUnit(team, this);             //������ ����
		TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535 * L_0 = ((TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_StaticFields*)il2cpp_codegen_static_fields_for(TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_il2cpp_TypeInfo_var))->get_teamManager_5();
		int32_t L_1 = __this->get_team_4();
		NullCheck(L_0);
		TeamManager_RemoveUnit_m53E87E5DB65E75B49385791DC8E34E15632D66A7(L_0, L_1, __this, /*hidden argument*/NULL);
		// TeamManager.teamManager.TeamCastle(team).populationCheck(); //�α��� üũ
		TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535 * L_2 = ((TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_StaticFields*)il2cpp_codegen_static_fields_for(TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_il2cpp_TypeInfo_var))->get_teamManager_5();
		int32_t L_3 = __this->get_team_4();
		NullCheck(L_2);
		Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * L_4;
		L_4 = TeamManager_TeamCastle_mBB4BB2E822B3EFAA0FDDEA1DB15B9FFA5A538247(L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Castle_populationCheck_m5C185B1228C0D004F773030DBA2C54064C315ED5(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Character::SetTeamColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_SetTeamColor_mDF49909FE7881F0EB07727AA1F25973136F08002 (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int i = 0; i < CharacterSkinnedMesh.Length; i++)
		V_0 = 0;
		goto IL_0022;
	}

IL_0004:
	{
		// CharacterSkinnedMesh[i].material = mat[team];
		SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED* L_0 = __this->get_CharacterSkinnedMesh_20();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_4 = __this->get_mat_22();
		int32_t L_5 = __this->get_team_4();
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_3);
		Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA(L_3, L_7, /*hidden argument*/NULL);
		// for (int i = 0; i < CharacterSkinnedMesh.Length; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0022:
	{
		// for (int i = 0; i < CharacterSkinnedMesh.Length; i++)
		int32_t L_9 = V_0;
		SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED* L_10 = __this->get_CharacterSkinnedMesh_20();
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		// for (int i = 0; i < CharaterMesh.Length; i++)
		V_1 = 0;
		goto IL_004f;
	}

IL_0031:
	{
		// CharaterMesh[i].material = mat[team];
		MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* L_11 = __this->get_CharaterMesh_21();
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_15 = __this->get_mat_22();
		int32_t L_16 = __this->get_team_4();
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_14);
		Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA(L_14, L_18, /*hidden argument*/NULL);
		// for (int i = 0; i < CharaterMesh.Length; i++)
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_004f:
	{
		// for (int i = 0; i < CharaterMesh.Length; i++)
		int32_t L_20 = V_1;
		MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* L_21 = __this->get_CharaterMesh_21();
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))))))
		{
			goto IL_0031;
		}
	}
	{
		// gameObject.layer = 6 + team;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		int32_t L_23 = __this->get_team_4();
		NullCheck(L_22);
		GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6(L_22, ((int32_t)il2cpp_codegen_add((int32_t)6, (int32_t)L_23)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Character::Damaged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_Damaged_m2CF5924EDA33DD5E2548F10069373BA298811EBF (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, int32_t ___Damaged0, const RuntimeMethod* method)
{
	{
		// if (hp > 0)
		int32_t L_0 = __this->get_hp_9();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		// hp -= Damaged+defense;
		int32_t L_1 = __this->get_hp_9();
		int32_t L_2 = ___Damaged0;
		int32_t L_3 = __this->get_defense_12();
		__this->set_hp_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)))));
		// if (hp <= 0)
		int32_t L_4 = __this->get_hp_9();
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		// DieCh();
		Character_DieCh_m93FC194CDE4045CD95984E481CDF19674C93948A(__this, /*hidden argument*/NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void Character::Damaged(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_Damaged_mEFF6EFBBE2E05AF8A5F0949722E5BF435E000A63 (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, int32_t ___Damaged0, int32_t ___team1, const RuntimeMethod* method)
{
	{
		// if (team != Team && hp > 0)
		int32_t L_0 = ___team1;
		int32_t L_1;
		L_1 = Character_get_Team_m7778D19EA7B882EC0979B5CCA0CF0BA9D41ECF5D_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_2 = __this->get_hp_9();
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		// hp -= Damaged+ defense;
		int32_t L_3 = __this->get_hp_9();
		int32_t L_4 = ___Damaged0;
		int32_t L_5 = __this->get_defense_12();
		__this->set_hp_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5)))));
		// if (hp <= 0)
		int32_t L_6 = __this->get_hp_9();
		if ((((int32_t)L_6) > ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		// DieCh();
		Character_DieCh_m93FC194CDE4045CD95984E481CDF19674C93948A(__this, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void Character::DieCh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_DieCh_m93FC194CDE4045CD95984E481CDF19674C93948A (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisAI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F_m6155B9340555F4C653D8C9AB5F7EA9666AE269F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08EF1409295A748F17C961491378A3B6215AA838);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE16FB5215DA91784505C8DC7A1AE4D386BCCACF);
		s_Il2CppMethodInitialized = true;
	}
	AIU5BU5D_tDC519424C0BF13D583E3E51705FC1F919D1B4A8F* V_0 = NULL;
	int32_t V_1 = 0;
	AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * V_2 = NULL;
	{
		// GetComponent<Animator>().SetTrigger("Die");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0;
		L_0 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		NullCheck(L_0);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_0, _stringLiteral08EF1409295A748F17C961491378A3B6215AA838, /*hidden argument*/NULL);
		// this.SendMessage("Die"); //AI���� ������ �˸���.
		Component_SendMessage_m3B002D579E5933EEFCA4024A1845CACB4FBBC208(__this, _stringLiteral08EF1409295A748F17C961491378A3B6215AA838, /*hidden argument*/NULL);
		// AI[] allAI = FindObjectsOfType<AI>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		AIU5BU5D_tDC519424C0BF13D583E3E51705FC1F919D1B4A8F* L_1;
		L_1 = Object_FindObjectsOfType_TisAI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F_m6155B9340555F4C653D8C9AB5F7EA9666AE269F1(/*hidden argument*/Object_FindObjectsOfType_TisAI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F_m6155B9340555F4C653D8C9AB5F7EA9666AE269F1_RuntimeMethod_var);
		// foreach (AI targetAI in allAI)
		V_0 = L_1;
		V_1 = 0;
		goto IL_004b;
	}

IL_0025:
	{
		// foreach (AI targetAI in allAI)
		AIU5BU5D_tDC519424C0BF13D583E3E51705FC1F919D1B4A8F* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// if (targetAI.target == gameObject) // ���� ĳ���Ͱ� Ÿ���̶��
		AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * L_6 = V_2;
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = L_6->get_target_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0047;
		}
	}
	{
		// targetAI.SendMessage("TargetSetting"); //Ÿ�� �� ���� �޼����� �����ϴ�.
		AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * L_10 = V_2;
		NullCheck(L_10);
		Component_SendMessage_m3B002D579E5933EEFCA4024A1845CACB4FBBC208(L_10, _stringLiteralFE16FB5215DA91784505C8DC7A1AE4D386BCCACF, /*hidden argument*/NULL);
	}

IL_0047:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_004b:
	{
		// foreach (AI targetAI in allAI)
		int32_t L_12 = V_1;
		AIU5BU5D_tDC519424C0BF13D583E3E51705FC1F919D1B4A8F* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))
		{
			goto IL_0025;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Character::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_Attack_mAAFE77A76A13670499D378994453AFC56D3B476D (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F_mE6A091B052494D68E8F2F2E14851B630190B5A89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	{
		// if (GetComponent<AI>())
		AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * L_0;
		L_0 = Component_GetComponent_TisAI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F_mE6A091B052494D68E8F2F2E14851B630190B5A89(__this, /*hidden argument*/Component_GetComponent_TisAI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F_mE6A091B052494D68E8F2F2E14851B630190B5A89_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0048;
		}
	}
	{
		// if (GetComponent<AI>().target != null)
		AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * L_2;
		L_2 = Component_GetComponent_TisAI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F_mE6A091B052494D68E8F2F2E14851B630190B5A89(__this, /*hidden argument*/Component_GetComponent_TisAI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F_mE6A091B052494D68E8F2F2E14851B630190B5A89_RuntimeMethod_var);
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = L_2->get_target_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0048;
		}
	}
	{
		// GameObject[] tr = { GetComponent<AI>().target };
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_5 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)1);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_6 = L_5;
		AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * L_7;
		L_7 = Component_GetComponent_TisAI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F_mE6A091B052494D68E8F2F2E14851B630190B5A89(__this, /*hidden argument*/Component_GetComponent_TisAI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F_mE6A091B052494D68E8F2F2E14851B630190B5A89_RuntimeMethod_var);
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = L_7->get_target_7();
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_8);
		V_0 = L_6;
		// AttackTarget(tr);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_9 = V_0;
		VirtActionInvoker1< GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* >::Invoke(20 /* System.Void Character::AttackTarget(UnityEngine.GameObject[]) */, __this, L_9);
		// GetComponent<AI>().AttackOff();
		AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * L_10;
		L_10 = Component_GetComponent_TisAI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F_mE6A091B052494D68E8F2F2E14851B630190B5A89(__this, /*hidden argument*/Component_GetComponent_TisAI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F_mE6A091B052494D68E8F2F2E14851B630190B5A89_RuntimeMethod_var);
		NullCheck(L_10);
		AI_AttackOff_m30E38D676AF7F10396D1FA87299A8D0C08513C96(L_10, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0048:
	{
		// AttackTarget(null);
		VirtActionInvoker1< GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* >::Invoke(20 /* System.Void Character::AttackTarget(UnityEngine.GameObject[]) */, __this, (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)NULL);
		// }
		return;
	}
}
// System.Boolean Character::SameTeam(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Character_SameTeam_mFBAAB09AF245C01A54AB51501EBE1A16D7A63804 (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, int32_t ____team0, const RuntimeMethod* method)
{
	{
		// if (team == _team)
		int32_t L_0 = __this->get_team_4();
		int32_t L_1 = ____team0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Character::AttackRangeFucn(UnityEngine.Transform,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Character_AttackRangeFucn_m0D7F2A3327F55F44DA24095F95F6120516FE5543 (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ____Target0, float ___Angle1, float ___Range2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// if (Range == -1) // ���࿡ ���� �Ÿ��� �Է����� �ʾҴٸ� �⺻ ���ݰŸ��� ����Ѵ�.
		float L_0 = ___Range2;
		if ((!(((float)L_0) == ((float)(-1.0f)))))
		{
			goto IL_0011;
		}
	}
	{
		// Range = attackRange;
		int32_t L_1 = __this->get_attackRange_18();
		___Range2 = ((float)((float)L_1));
	}

IL_0011:
	{
		// float angle  = Vector3.Angle(_Target.position - transform.position, transform.forward);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = ____Target0;
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_3, L_5, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_7, /*hidden argument*/NULL);
		float L_9;
		L_9 = Vector3_Angle_m3715AB03A36C59D8CF08F8D71E2F46454EB884C1(L_6, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// if (Vector3.Distance(_Target.position, transform.position) <= Range + 0.2f && ((angle <= Angle)))
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = ____Target0;
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		float L_14;
		L_14 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_11, L_13, /*hidden argument*/NULL);
		float L_15 = ___Range2;
		if ((!(((float)L_14) <= ((float)((float)il2cpp_codegen_add((float)L_15, (float)(0.200000003f)))))))
		{
			goto IL_005d;
		}
	}
	{
		float L_16 = V_0;
		float L_17 = ___Angle1;
		if ((!(((float)L_16) <= ((float)L_17))))
		{
			goto IL_005d;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Character::SpeedUp(System.Single,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character_SpeedUp_m64B0B0461BA9320CD15BD2F57252A370B869E7A0 (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, float ___xSpeed0, int32_t ____team1, float ____duration2, const RuntimeMethod* method)
{
	{
		// StartCoroutine(SpeedUpCoro(xSpeed, _team, _duration));
		float L_0 = ___xSpeed0;
		int32_t L_1 = ____team1;
		float L_2 = ____duration2;
		RuntimeObject* L_3;
		L_3 = Character_SpeedUpCoro_mC381929E7F0C83F9F8E4BD971670320113A0E1C9(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_4;
		L_4 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Character::SpeedUpCoro(System.Single,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Character_SpeedUpCoro_mC381929E7F0C83F9F8E4BD971670320113A0E1C9 (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, float ___xSpeed0, int32_t ____team1, float ____duration2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpeedUpCoroU3Ed__63_t45326A9F21E161301051820A730C323510A7B31F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpeedUpCoroU3Ed__63_t45326A9F21E161301051820A730C323510A7B31F * L_0 = (U3CSpeedUpCoroU3Ed__63_t45326A9F21E161301051820A730C323510A7B31F *)il2cpp_codegen_object_new(U3CSpeedUpCoroU3Ed__63_t45326A9F21E161301051820A730C323510A7B31F_il2cpp_TypeInfo_var);
		U3CSpeedUpCoroU3Ed__63__ctor_mE7B8E18F57C89B6A86AC49A2419D3C172C5A0B7B(L_0, 0, /*hidden argument*/NULL);
		U3CSpeedUpCoroU3Ed__63_t45326A9F21E161301051820A730C323510A7B31F * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CSpeedUpCoroU3Ed__63_t45326A9F21E161301051820A730C323510A7B31F * L_2 = L_1;
		float L_3 = ___xSpeed0;
		NullCheck(L_2);
		L_2->set_xSpeed_4(L_3);
		U3CSpeedUpCoroU3Ed__63_t45326A9F21E161301051820A730C323510A7B31F * L_4 = L_2;
		int32_t L_5 = ____team1;
		NullCheck(L_4);
		L_4->set__team_3(L_5);
		U3CSpeedUpCoroU3Ed__63_t45326A9F21E161301051820A730C323510A7B31F * L_6 = L_4;
		float L_7 = ____duration2;
		NullCheck(L_6);
		L_6->set__duration_5(L_7);
		return L_6;
	}
}
// System.Void Character::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character__ctor_mC9E775D49A9CE6DD699D3C59405E734464FDCDC2 (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, const RuntimeMethod* method)
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
// System.Void LevelManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_Awake_mE7368816FE1E54297E99A87A07760EDC3A4E6A86 (LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelManager_t010B312A2B35B45291F58195216ABB5673174961_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11874EA980D0109E3A7A6EF131C8A02D167E7564);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81FE94B16385AF5FD003A4402F84B93F2F3C9BCF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8FEBC1393ED0786A9F796C00369C2AD61BD2B85);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (levelManager == null)
		LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * L_0 = ((LevelManager_t010B312A2B35B45291F58195216ABB5673174961_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t010B312A2B35B45291F58195216ABB5673174961_il2cpp_TypeInfo_var))->get_levelManager_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// levelManager = this;
		((LevelManager_t010B312A2B35B45291F58195216ABB5673174961_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t010B312A2B35B45291F58195216ABB5673174961_il2cpp_TypeInfo_var))->set_levelManager_4(__this);
	}

IL_0013:
	{
		// if (levelManager != this)
		LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * L_2 = ((LevelManager_t010B312A2B35B45291F58195216ABB5673174961_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t010B312A2B35B45291F58195216ABB5673174961_il2cpp_TypeInfo_var))->get_levelManager_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, __this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
	}

IL_002b:
	{
		// myTeam = GameObject.Find("MyBuilding");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral81FE94B16385AF5FD003A4402F84B93F2F3C9BCF, /*hidden argument*/NULL);
		__this->set_myTeam_5(L_5);
		// enemyTeam1 = GameObject.Find("EnemyBuilding");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralF8FEBC1393ED0786A9F796C00369C2AD61BD2B85, /*hidden argument*/NULL);
		__this->set_enemyTeam1_6(L_6);
		// enemyTeam2 = GameObject.Find("EnemyBuilding2");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral11874EA980D0109E3A7A6EF131C8A02D167E7564, /*hidden argument*/NULL);
		__this->set_enemyTeam2_7(L_7);
		// StartCoroutine(MybuildingSet());
		RuntimeObject* L_8;
		L_8 = LevelManager_MybuildingSet_m867E67303F359EB43008EA990EBC708F90B4738C(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_9;
		L_9 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator LevelManager::MybuildingSet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LevelManager_MybuildingSet_m867E67303F359EB43008EA990EBC708F90B4738C (LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMybuildingSetU3Ed__6_t825B2195F8CA034AB14A2A33E75296F67E232F9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMybuildingSetU3Ed__6_t825B2195F8CA034AB14A2A33E75296F67E232F9B * L_0 = (U3CMybuildingSetU3Ed__6_t825B2195F8CA034AB14A2A33E75296F67E232F9B *)il2cpp_codegen_object_new(U3CMybuildingSetU3Ed__6_t825B2195F8CA034AB14A2A33E75296F67E232F9B_il2cpp_TypeInfo_var);
		U3CMybuildingSetU3Ed__6__ctor_mED934C759D778C779F4007703763B87DEC733215(L_0, 0, /*hidden argument*/NULL);
		U3CMybuildingSetU3Ed__6_t825B2195F8CA034AB14A2A33E75296F67E232F9B * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator LevelManager::EnemybuildingSet(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LevelManager_EnemybuildingSet_mEDE850B4FC2FFDE7FA9E27D4F8E6204BB529BCCA (LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * __this, String_t* ___level0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEnemybuildingSetU3Ed__7_t20A60B7D3B834C10E98F383200134D5E79A02AB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CEnemybuildingSetU3Ed__7_t20A60B7D3B834C10E98F383200134D5E79A02AB4 * L_0 = (U3CEnemybuildingSetU3Ed__7_t20A60B7D3B834C10E98F383200134D5E79A02AB4 *)il2cpp_codegen_object_new(U3CEnemybuildingSetU3Ed__7_t20A60B7D3B834C10E98F383200134D5E79A02AB4_il2cpp_TypeInfo_var);
		U3CEnemybuildingSetU3Ed__7__ctor_m30D09CEE1B83CAC7D87C2305A951943590AA4788(L_0, 0, /*hidden argument*/NULL);
		U3CEnemybuildingSetU3Ed__7_t20A60B7D3B834C10E98F383200134D5E79A02AB4 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CEnemybuildingSetU3Ed__7_t20A60B7D3B834C10E98F383200134D5E79A02AB4 * L_2 = L_1;
		String_t* L_3 = ___level0;
		NullCheck(L_2);
		L_2->set_level_3(L_3);
		return L_2;
	}
}
// System.Collections.IEnumerator LevelManager::Enemybuilding2Set(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LevelManager_Enemybuilding2Set_mA6AF313C465013846C941144F5E86935B1642012 (LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * __this, String_t* ___level0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEnemybuilding2SetU3Ed__8_t17E56F4A18DD4E1399A799ADD9F1D148CD114BE1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CEnemybuilding2SetU3Ed__8_t17E56F4A18DD4E1399A799ADD9F1D148CD114BE1 * L_0 = (U3CEnemybuilding2SetU3Ed__8_t17E56F4A18DD4E1399A799ADD9F1D148CD114BE1 *)il2cpp_codegen_object_new(U3CEnemybuilding2SetU3Ed__8_t17E56F4A18DD4E1399A799ADD9F1D148CD114BE1_il2cpp_TypeInfo_var);
		U3CEnemybuilding2SetU3Ed__8__ctor_m9B594E70D55B1975E6D22E2F864BCE0090D0E4FA(L_0, 0, /*hidden argument*/NULL);
		U3CEnemybuilding2SetU3Ed__8_t17E56F4A18DD4E1399A799ADD9F1D148CD114BE1 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CEnemybuilding2SetU3Ed__8_t17E56F4A18DD4E1399A799ADD9F1D148CD114BE1 * L_2 = L_1;
		String_t* L_3 = ___level0;
		NullCheck(L_2);
		L_2->set_level_3(L_3);
		return L_2;
	}
}
// System.Void LevelManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager__ctor_mD6FAECFAF24E1996EC8147344018498B20E3DE49 (LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * __this, const RuntimeMethod* method)
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
// System.Single MakeBuilding::get_MakeCoolTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MakeBuilding_get_MakeCoolTime_m7C687EFDF1EC49DCF141A91BC81B8B656A7036DE (MakeBuilding_tA7888BB568D7BDF05AF62A24D5F3C03075D9894C * __this, const RuntimeMethod* method)
{
	{
		// public float MakeCoolTime { get {return makeCoolTime; } set { makeCoolTime = value; } }
		float L_0 = __this->get_makeCoolTime_14();
		return L_0;
	}
}
// System.Void MakeBuilding::set_MakeCoolTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MakeBuilding_set_MakeCoolTime_mF71B98330AFDE621069D3DF3A9044FDE69ADC798 (MakeBuilding_tA7888BB568D7BDF05AF62A24D5F3C03075D9894C * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float MakeCoolTime { get {return makeCoolTime; } set { makeCoolTime = value; } }
		float L_0 = ___value0;
		__this->set_makeCoolTime_14(L_0);
		// public float MakeCoolTime { get {return makeCoolTime; } set { makeCoolTime = value; } }
		return;
	}
}
// System.Void MakeBuilding::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MakeBuilding_Awake_mF04D5E460D73E1EB9F86E467ED08334DCD0925CF (MakeBuilding_tA7888BB568D7BDF05AF62A24D5F3C03075D9894C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MakeBuilding_UnitProduce_mFF47244849C73C75B9F38849855FB5CFA78FA91C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		Building_Awake_m451508EE813C560FE7824E90E162C14CA7A70DD0(__this, /*hidden argument*/NULL);
		// prevMakeCoolTime = MakeCoolTime;
		float L_0;
		L_0 = MakeBuilding_get_MakeCoolTime_m7C687EFDF1EC49DCF141A91BC81B8B656A7036DE_inline(__this, /*hidden argument*/NULL);
		__this->set_prevMakeCoolTime_15(L_0);
		// TeamManager.teamManager.TeamCastle(Team).unitProduce += UnitProduce;  //���� ���� ĳ���� ���ø� �޴´�.
		TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535 * L_1 = ((TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_StaticFields*)il2cpp_codegen_static_fields_for(TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_il2cpp_TypeInfo_var))->get_teamManager_5();
		int32_t L_2;
		L_2 = Building_get_Team_m29511AB7E5D15B834E7D1229493A037B64199BF0_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * L_3;
		L_3 = TeamManager_TeamCastle_mBB4BB2E822B3EFAA0FDDEA1DB15B9FFA5A538247(L_1, L_2, /*hidden argument*/NULL);
		BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * L_4 = (BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF *)il2cpp_codegen_object_new(BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF_il2cpp_TypeInfo_var);
		BuildingWork__ctor_m5CBF2FFA795D08102E89B356A2F206351D147CEF(L_4, __this, (intptr_t)((intptr_t)MakeBuilding_UnitProduce_mFF47244849C73C75B9F38849855FB5CFA78FA91C_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_3);
		Castle_add_unitProduce_m303DEC91854A9B9DCA8B23FE06B29D887A8C25D1(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MakeBuilding::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MakeBuilding_OnEnable_m20814C82F3E4A3919719A9E789690193F37FC754 (MakeBuilding_tA7888BB568D7BDF05AF62A24D5F3C03075D9894C * __this, const RuntimeMethod* method)
{
	{
		// base.OnEnable();
		Building_OnEnable_m0CD76EAB1A7337383EC0951E0A76900F45EC741C(__this, /*hidden argument*/NULL);
		// StartCoroutine(MakeUnit());
		RuntimeObject* L_0;
		L_0 = MakeBuilding_MakeUnit_m019C624931961551DD94805C20142A42E6D1C98B(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MakeBuilding::UnitProduce(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MakeBuilding_UnitProduce_mFF47244849C73C75B9F38849855FB5CFA78FA91C (MakeBuilding_tA7888BB568D7BDF05AF62A24D5F3C03075D9894C * __this, bool ___isOn0, const RuntimeMethod* method)
{
	{
		// posibleProduce = isOn;
		bool L_0 = ___isOn0;
		__this->set_posibleProduce_16(L_0);
		// } //���� ���� ����,�Ұ����� �����ϴ� �Լ�
		return;
	}
}
// System.Collections.IEnumerator MakeBuilding::MakeUnit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MakeBuilding_MakeUnit_m019C624931961551DD94805C20142A42E6D1C98B (MakeBuilding_tA7888BB568D7BDF05AF62A24D5F3C03075D9894C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMakeUnitU3Ed__9_t2F3D2193F6AFC4430320A08AE68D149BD13B8785_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMakeUnitU3Ed__9_t2F3D2193F6AFC4430320A08AE68D149BD13B8785 * L_0 = (U3CMakeUnitU3Ed__9_t2F3D2193F6AFC4430320A08AE68D149BD13B8785 *)il2cpp_codegen_object_new(U3CMakeUnitU3Ed__9_t2F3D2193F6AFC4430320A08AE68D149BD13B8785_il2cpp_TypeInfo_var);
		U3CMakeUnitU3Ed__9__ctor_m33F90E2F03C236375CA8A11B71ACC3A12123FB55(L_0, 0, /*hidden argument*/NULL);
		U3CMakeUnitU3Ed__9_t2F3D2193F6AFC4430320A08AE68D149BD13B8785 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void MakeBuilding::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MakeBuilding__ctor_m8C8B358F785D2DA3DA70894219D55FBA93847475 (MakeBuilding_tA7888BB568D7BDF05AF62A24D5F3C03075D9894C * __this, const RuntimeMethod* method)
{
	{
		// public bool posibleProduce=true; //�α����� ���� ���� �Ұ���,���� ������ ��������.
		__this->set_posibleProduce_16((bool)1);
		Building__ctor_mB1BAA261A5F238A037725FDDD528390DCA177239(__this, /*hidden argument*/NULL);
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
// IState/State Player::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Player_get_state_m063E47F7133ED89F2D4A197750EEC364776B6DC8 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// public IState.State state { get; set; }
		int32_t L_0 = __this->get_U3CstateU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void Player::set_state(IState/State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_set_state_m0FD3AAAD092E7CE9A6986F4A0418BCD64D422898 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public IState.State state { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CstateU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.Void Player::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Awake_m1131F11CF6BF6FBE6454601C7D9A94AC8F468A24 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCharacter_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8_mCE9C8FBED5DFAB4F42CAF2E2B6AF02948C416C12_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ani = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0;
		L_0 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_ani_4(L_0);
		// tr = GetComponent<Transform>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213(__this, /*hidden argument*/Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213_RuntimeMethod_var);
		__this->set_tr_5(L_1);
		// rbody = GetComponent<Rigidbody>();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_2;
		L_2 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		__this->set_rbody_8(L_2);
		// character = GetComponent<Character>();
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_3;
		L_3 = Component_GetComponent_TisCharacter_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8_mCE9C8FBED5DFAB4F42CAF2E2B6AF02948C416C12(__this, /*hidden argument*/Component_GetComponent_TisCharacter_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8_mCE9C8FBED5DFAB4F42CAF2E2B6AF02948C416C12_RuntimeMethod_var);
		__this->set_character_9(L_3);
		// }
		return;
	}
}
// System.Void Player::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnEnable_m7F11EF0AA6B08B6C205F1E33812E134357366D86 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchPad_t0BAA54FA8F10C824858FE60E2D158A2D935E026A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TouchPad.playerMovement = this;
		((TouchPad_t0BAA54FA8F10C824858FE60E2D158A2D935E026A_StaticFields*)il2cpp_codegen_static_fields_for(TouchPad_t0BAA54FA8F10C824858FE60E2D158A2D935E026A_il2cpp_TypeInfo_var))->set_playerMovement_9(__this);
		// }
		return;
	}
}
// System.Void Player::OnStickChange(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnStickChange_m0D123A689730B747CC5AA341ABC55BE38F8F93EE (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___stickPos0, const RuntimeMethod* method)
{
	{
		// h = stickPos.x;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___stickPos0;
		float L_1 = L_0.get_x_0();
		__this->set_h_6(L_1);
		// v = stickPos.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___stickPos0;
		float L_3 = L_2.get_y_1();
		__this->set_v_7(L_3);
		// }
		return;
	}
}
// System.Void Player::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_FixedUpdate_mD7447EDFC86F29A3E5FBDEF7E0139535BD4C5088 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// Idle();
		Player_Idle_m10EF471CCAE716DABE927CE3BE7F0FF0B596F01C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::Idle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Idle_m10EF471CCAE716DABE927CE3BE7F0FF0B596F01C (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (ani != null && state == IState.State.Idle) //�Ϲ� �����϶��� �����δ�.
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_ani_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00e3;
		}
	}
	{
		int32_t L_2;
		L_2 = Player_get_state_m063E47F7133ED89F2D4A197750EEC364776B6DC8_inline(__this, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_00e3;
		}
	}
	{
		// ani.SetFloat("Speed", (h * h) + (v * v));
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_3 = __this->get_ani_4();
		float L_4 = __this->get_h_6();
		float L_5 = __this->get_h_6();
		float L_6 = __this->get_v_7();
		float L_7 = __this->get_v_7();
		NullCheck(L_3);
		Animator_SetFloat_mD731F47ED44C2D629F8E1C6DB15629C3E1B992A0(L_3, _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32, ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), (float)((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)))), /*hidden argument*/NULL);
		// if (rbody)
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_8 = __this->get_rbody_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_00e3;
		}
	}
	{
		// Vector3 Speed = rbody.velocity;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_10 = __this->get_rbody_8();
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C(L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		// Speed.x = character.Speed * h;
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_12 = __this->get_character_9();
		NullCheck(L_12);
		int32_t L_13;
		L_13 = Character_get_Speed_mDF65D05479D45DB5079CC2B36A49B92B1C4ED7EA_inline(L_12, /*hidden argument*/NULL);
		float L_14 = __this->get_h_6();
		(&V_0)->set_x_2(((float)il2cpp_codegen_multiply((float)((float)((float)L_13)), (float)L_14)));
		// Speed.z = character.Speed * v;
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_15 = __this->get_character_9();
		NullCheck(L_15);
		int32_t L_16;
		L_16 = Character_get_Speed_mDF65D05479D45DB5079CC2B36A49B92B1C4ED7EA_inline(L_15, /*hidden argument*/NULL);
		float L_17 = __this->get_v_7();
		(&V_0)->set_z_4(((float)il2cpp_codegen_multiply((float)((float)((float)L_16)), (float)L_17)));
		// rbody.velocity = Speed;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_18 = __this->get_rbody_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = V_0;
		NullCheck(L_18);
		Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D(L_18, L_19, /*hidden argument*/NULL);
		// if (h != 0 && v != 0)
		float L_20 = __this->get_h_6();
		if ((((float)L_20) == ((float)(0.0f))))
		{
			goto IL_00e3;
		}
	}
	{
		float L_21 = __this->get_v_7();
		if ((((float)L_21) == ((float)(0.0f))))
		{
			goto IL_00e3;
		}
	}
	{
		// tr.rotation = Quaternion.LookRotation(new Vector3(h, 0f, v));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22 = __this->get_tr_5();
		float L_23 = __this->get_h_6();
		float L_24 = __this->get_v_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_25), L_23, (0.0f), L_24, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_26;
		L_26 = Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF(L_25, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_22, L_26, /*hidden argument*/NULL);
	}

IL_00e3:
	{
		// }
		return;
	}
}
// System.Void Player::AttackTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_AttackTarget_m1F856E158F48B2B1F9982B6B2013E8347626872B (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ani.SetTrigger("Attack");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_ani_4();
		NullCheck(L_0);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_0, _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::Skill1Ani()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Skill1Ani_mA9260FBE5659AA5BEB7AF8B06CBA17B58880047D (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99F8385E86F9A594795915717EE6639D9AB80324);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ani.SetTrigger("Skill1");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_ani_4();
		NullCheck(L_0);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_0, _stringLiteral99F8385E86F9A594795915717EE6639D9AB80324, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::Skill2Ani()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Skill2Ani_mC1735302AB536150A38842F44AEA707D1DD4A6C7 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8857C3E1FFEB7E77373A99F4755ED8BF28ECBC64);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ani.SetTrigger("Skill2");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_ani_4();
		NullCheck(L_0);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_0, _stringLiteral8857C3E1FFEB7E77373A99F4755ED8BF28ECBC64, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Die_m16A200929DBDF9FF88C8191A26327C2CCCC80C19 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// state = IState.State.Die;
		Player_set_state_m0FD3AAAD092E7CE9A6986F4A0418BCD64D422898_inline(__this, 2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_mDE8EB5B351975D4E7E24DE341B8B49B8A29CC2B7 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
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
// System.Void PoolManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoolManager_Awake_m786B4A25FE5ECC36089F119C13947812B49CC13C (PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m2A4C89C1E5F65890D408978197DB125739C6000C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40F5431A5203B1B661E92C45EF446F7D326E2C50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41CA67E6104A34556A3AF8C12AD6C84261BD4519);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EE07144AE807CDC95D0059EDF028A67002575F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5063F4D155A731E19E2323DB0BAB1BA3B30C580);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7F05700850B615CE25FF717046A5553EFB1FF63);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED3ACB9973FB2CC7AAA8DB4066FEB71918F2815D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (poolManager == null)    //�̱����� ������ �ʿ� �Ѱ��� �ֵ��� �մϴ�.
		PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * L_0 = ((PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7_StaticFields*)il2cpp_codegen_static_fields_for(PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7_il2cpp_TypeInfo_var))->get_poolManager_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// poolManager = this;
		((PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7_StaticFields*)il2cpp_codegen_static_fields_for(PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7_il2cpp_TypeInfo_var))->set_poolManager_4(__this);
		goto IL_002d;
	}

IL_0015:
	{
		// else if(poolManager !=this)
		PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * L_2 = ((PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7_StaticFields*)il2cpp_codegen_static_fields_for(PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7_il2cpp_TypeInfo_var))->get_poolManager_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, __this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
	}

IL_002d:
	{
		// arrowPrefab = Resources.Load<GameObject>("Arrow");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m2A4C89C1E5F65890D408978197DB125739C6000C(_stringLiteral40F5431A5203B1B661E92C45EF446F7D326E2C50, /*hidden argument*/Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m2A4C89C1E5F65890D408978197DB125739C6000C_RuntimeMethod_var);
		__this->set_arrowPrefab_5(L_5);
		// warriorPrefab = Resources.Load<GameObject>("2.Unit/Character/Warrior");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m2A4C89C1E5F65890D408978197DB125739C6000C(_stringLiteralED3ACB9973FB2CC7AAA8DB4066FEB71918F2815D, /*hidden argument*/Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m2A4C89C1E5F65890D408978197DB125739C6000C_RuntimeMethod_var);
		__this->set_warriorPrefab_8(L_6);
		// archerPrefab = Resources.Load<GameObject>("2.Unit/Character/Archer");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m2A4C89C1E5F65890D408978197DB125739C6000C(_stringLiteralD7F05700850B615CE25FF717046A5553EFB1FF63, /*hidden argument*/Resources_Load_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m2A4C89C1E5F65890D408978197DB125739C6000C_RuntimeMethod_var);
		__this->set_archerPrefab_11(L_7);
		// Arrows = new GameObject("Arrows");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_8, _stringLiteral4EE07144AE807CDC95D0059EDF028A67002575F2, /*hidden argument*/NULL);
		__this->set_Arrows_6(L_8);
		// Warriors= new GameObject("Warriors");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_9, _stringLiteral41CA67E6104A34556A3AF8C12AD6C84261BD4519, /*hidden argument*/NULL);
		__this->set_Warriors_9(L_9);
		// Archers = new GameObject("Archers");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_10, _stringLiteralD5063F4D155A731E19E2323DB0BAB1BA3B30C580, /*hidden argument*/NULL);
		__this->set_Archers_12(L_10);
		// }
		return;
	}
}
// System.Void PoolManager::ArrowMake(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoolManager_ArrowMake_m8CB12EE4537D5916ACE8B0E51F87CD5B54FCDAC2 (PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * __this, int32_t ___count0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	{
		// for (int i = 0; i < count; i++)
		V_0 = 0;
		goto IL_0032;
	}

IL_0004:
	{
		// GameObject arrow = Instantiate<GameObject>(arrowPrefab,Arrows.transform);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_arrowPrefab_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_Arrows_6();
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_0, L_2, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		V_1 = L_3;
		// ArrowPool.Add(arrow);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_4 = __this->get_ArrowPool_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = V_1;
		NullCheck(L_4);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_4, L_5, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// arrow.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = V_1;
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)0, /*hidden argument*/NULL);
		// for (int i = 0; i < count; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0032:
	{
		// for (int i = 0; i < count; i++)
		int32_t L_8 = V_0;
		int32_t L_9 = ___count0;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.GameObject PoolManager::GetArrow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PoolManager_GetArrow_mAABF78A265F23244D30DC8451D8753839598204E (PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// foreach (GameObject arrow in ArrowPool)
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get_ArrowPool_7();
		NullCheck(L_0);
		Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  L_1;
		L_1 = List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6(L_0, /*hidden argument*/List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0022;
		}

IL_000e:
		{
			// foreach (GameObject arrow in ArrowPool)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
			L_2 = Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
			V_1 = L_2;
			// if (!arrow.activeSelf)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = V_1;
			NullCheck(L_3);
			bool L_4;
			L_4 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_3, /*hidden argument*/NULL);
			if (L_4)
			{
				goto IL_0022;
			}
		}

IL_001e:
		{
			// return arrow;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = V_1;
			V_2 = L_5;
			IL2CPP_LEAVE(0x4A, FINALLY_002d);
		}

IL_0022:
		{
			// foreach (GameObject arrow in ArrowPool)
			bool L_6;
			L_6 = Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_000e;
			}
		}

IL_002b:
		{
			IL2CPP_LEAVE(0x3B, FINALLY_002d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(45)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4A, IL_004a)
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
	}

IL_003b:
	{
		// ArrowMake(10);
		PoolManager_ArrowMake_m8CB12EE4537D5916ACE8B0E51F87CD5B54FCDAC2(__this, ((int32_t)10), /*hidden argument*/NULL);
		// return GetArrow();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = PoolManager_GetArrow_mAABF78A265F23244D30DC8451D8753839598204E(__this, /*hidden argument*/NULL);
		return L_7;
	}

IL_004a:
	{
		// }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = V_2;
		return L_8;
	}
}
// System.Void PoolManager::WarriorMake(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoolManager_WarriorMake_mD6FAF57331D238AA00A4DC67B511C4837C5CCAE8 (PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * __this, int32_t ___count0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	{
		// for (int i = 0; i < count; i++)
		V_0 = 0;
		goto IL_0032;
	}

IL_0004:
	{
		// GameObject warrior = Instantiate<GameObject>(warriorPrefab, Warriors.transform);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_warriorPrefab_8();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_Warriors_9();
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_0, L_2, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		V_1 = L_3;
		// WarriorPool.Add(warrior);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_4 = __this->get_WarriorPool_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = V_1;
		NullCheck(L_4);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_4, L_5, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// warrior.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = V_1;
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)0, /*hidden argument*/NULL);
		// for (int i = 0; i < count; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0032:
	{
		// for (int i = 0; i < count; i++)
		int32_t L_8 = V_0;
		int32_t L_9 = ___count0;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.GameObject PoolManager::GetWarrior()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PoolManager_GetWarrior_m78551160324FD847C4B03474220DD58DD86F565B (PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// foreach (GameObject warrior in WarriorPool)
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get_WarriorPool_10();
		NullCheck(L_0);
		Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  L_1;
		L_1 = List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6(L_0, /*hidden argument*/List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0022;
		}

IL_000e:
		{
			// foreach (GameObject warrior in WarriorPool)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
			L_2 = Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
			V_1 = L_2;
			// if (!warrior.activeSelf)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = V_1;
			NullCheck(L_3);
			bool L_4;
			L_4 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_3, /*hidden argument*/NULL);
			if (L_4)
			{
				goto IL_0022;
			}
		}

IL_001e:
		{
			// return warrior;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = V_1;
			V_2 = L_5;
			IL2CPP_LEAVE(0x4A, FINALLY_002d);
		}

IL_0022:
		{
			// foreach (GameObject warrior in WarriorPool)
			bool L_6;
			L_6 = Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_000e;
			}
		}

IL_002b:
		{
			IL2CPP_LEAVE(0x3B, FINALLY_002d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(45)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4A, IL_004a)
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
	}

IL_003b:
	{
		// WarriorMake(10);
		PoolManager_WarriorMake_mD6FAF57331D238AA00A4DC67B511C4837C5CCAE8(__this, ((int32_t)10), /*hidden argument*/NULL);
		// return GetWarrior();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = PoolManager_GetWarrior_m78551160324FD847C4B03474220DD58DD86F565B(__this, /*hidden argument*/NULL);
		return L_7;
	}

IL_004a:
	{
		// }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = V_2;
		return L_8;
	}
}
// System.Void PoolManager::ArcherMake(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoolManager_ArcherMake_m24B0A4C733867D71FDABD1BA5E1A8DB780F90354 (PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * __this, int32_t ___count0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	{
		// for (int i = 0; i < count; i++)
		V_0 = 0;
		goto IL_0032;
	}

IL_0004:
	{
		// GameObject archer = Instantiate<GameObject>(archerPrefab, Archers.transform);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_archerPrefab_11();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_Archers_12();
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_0, L_2, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		V_1 = L_3;
		// ArcherPool.Add(archer);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_4 = __this->get_ArcherPool_13();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = V_1;
		NullCheck(L_4);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_4, L_5, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// archer.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = V_1;
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)0, /*hidden argument*/NULL);
		// for (int i = 0; i < count; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0032:
	{
		// for (int i = 0; i < count; i++)
		int32_t L_8 = V_0;
		int32_t L_9 = ___count0;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.GameObject PoolManager::GetArcher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PoolManager_GetArcher_mFF8F8120B106D233603D2ACAD65C733930E6C7A5 (PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// foreach (GameObject archer in ArcherPool)
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get_ArcherPool_13();
		NullCheck(L_0);
		Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  L_1;
		L_1 = List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6(L_0, /*hidden argument*/List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0022;
		}

IL_000e:
		{
			// foreach (GameObject archer in ArcherPool)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
			L_2 = Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
			V_1 = L_2;
			// if (!archer.activeSelf)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = V_1;
			NullCheck(L_3);
			bool L_4;
			L_4 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_3, /*hidden argument*/NULL);
			if (L_4)
			{
				goto IL_0022;
			}
		}

IL_001e:
		{
			// return archer;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = V_1;
			V_2 = L_5;
			IL2CPP_LEAVE(0x4A, FINALLY_002d);
		}

IL_0022:
		{
			// foreach (GameObject archer in ArcherPool)
			bool L_6;
			L_6 = Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_000e;
			}
		}

IL_002b:
		{
			IL2CPP_LEAVE(0x3B, FINALLY_002d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(45)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4A, IL_004a)
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
	}

IL_003b:
	{
		// ArcherMake(10);
		PoolManager_ArcherMake_m24B0A4C733867D71FDABD1BA5E1A8DB780F90354(__this, ((int32_t)10), /*hidden argument*/NULL);
		// return GetArcher();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = PoolManager_GetArcher_mFF8F8120B106D233603D2ACAD65C733930E6C7A5(__this, /*hidden argument*/NULL);
		return L_7;
	}

IL_004a:
	{
		// }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = V_2;
		return L_8;
	}
}
// System.Void PoolManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoolManager__ctor_mB63FFA1BD11E3C07306CA9E388496F85BD09A7FF (PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<GameObject> ArrowPool = new List<GameObject>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_0, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		__this->set_ArrowPool_7(L_0);
		// public List<GameObject> WarriorPool = new List<GameObject>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_1 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_1, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		__this->set_WarriorPool_10(L_1);
		// public List<GameObject> ArcherPool = new List<GameObject>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_2 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_2, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		__this->set_ArcherPool_13(L_2);
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
// System.Void SkillManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillManager_Awake_m65D428A2292404C1C4FCBF6F4AD638F30F57D59F (SkillManager_t922C3F2076730BE87514F83311A3752C621F7278 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkillManager_t922C3F2076730BE87514F83311A3752C621F7278_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (skillManager == null)        //��ų�Ŵ��� �̱���
		SkillManager_t922C3F2076730BE87514F83311A3752C621F7278 * L_0 = ((SkillManager_t922C3F2076730BE87514F83311A3752C621F7278_StaticFields*)il2cpp_codegen_static_fields_for(SkillManager_t922C3F2076730BE87514F83311A3752C621F7278_il2cpp_TypeInfo_var))->get_skillManager_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// skillManager = this;
		((SkillManager_t922C3F2076730BE87514F83311A3752C621F7278_StaticFields*)il2cpp_codegen_static_fields_for(SkillManager_t922C3F2076730BE87514F83311A3752C621F7278_il2cpp_TypeInfo_var))->set_skillManager_4(__this);
		return;
	}

IL_0014:
	{
		// else if (skillManager !=this)
		SkillManager_t922C3F2076730BE87514F83311A3752C621F7278 * L_2 = ((SkillManager_t922C3F2076730BE87514F83311A3752C621F7278_StaticFields*)il2cpp_codegen_static_fields_for(SkillManager_t922C3F2076730BE87514F83311A3752C621F7278_il2cpp_TypeInfo_var))->get_skillManager_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, __this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void SkillManager::AttackTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillManager_AttackTarget_m8C8F1C41ED4A6E1F87209CD905FECCE89645C9F7 (SkillManager_t922C3F2076730BE87514F83311A3752C621F7278 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m269393C54BD0A12D8236C0C4CF64AE91D132C8E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m61560064357E7BA96F0D31503834ED5AD39BF1D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1319FB9221759F3330354B81668E10047A4B1F17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mAD390AB027224D023EB048D3F7DDC684D69CAF5F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t649D2193B2B6C28E89B82247B1D28A30D3548F50  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (Character hero in heros)
		List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 * L_0 = __this->get_heros_5();
		NullCheck(L_0);
		Enumerator_t649D2193B2B6C28E89B82247B1D28A30D3548F50  L_1;
		L_1 = List_1_GetEnumerator_mAD390AB027224D023EB048D3F7DDC684D69CAF5F(L_0, /*hidden argument*/List_1_GetEnumerator_mAD390AB027224D023EB048D3F7DDC684D69CAF5F_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0026;
		}

IL_000e:
		{
			// foreach (Character hero in heros)
			Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_2;
			L_2 = Enumerator_get_Current_m1319FB9221759F3330354B81668E10047A4B1F17_inline((Enumerator_t649D2193B2B6C28E89B82247B1D28A30D3548F50 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m1319FB9221759F3330354B81668E10047A4B1F17_RuntimeMethod_var);
			// hero.AttackTarget(null);
			Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_3 = L_2;
			NullCheck(L_3);
			VirtActionInvoker1< GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* >::Invoke(20 /* System.Void Character::AttackTarget(UnityEngine.GameObject[]) */, L_3, (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)NULL);
			// hero.GetComponent<Player>().AttackTarget();
			NullCheck(L_3);
			Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_4;
			L_4 = Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B(L_3, /*hidden argument*/Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B_RuntimeMethod_var);
			NullCheck(L_4);
			Player_AttackTarget_m1F856E158F48B2B1F9982B6B2013E8347626872B(L_4, /*hidden argument*/NULL);
		}

IL_0026:
		{
			// foreach (Character hero in heros)
			bool L_5;
			L_5 = Enumerator_MoveNext_m61560064357E7BA96F0D31503834ED5AD39BF1D2((Enumerator_t649D2193B2B6C28E89B82247B1D28A30D3548F50 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m61560064357E7BA96F0D31503834ED5AD39BF1D2_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_000e;
			}
		}

IL_002f:
		{
			IL2CPP_LEAVE(0x3F, FINALLY_0031);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m269393C54BD0A12D8236C0C4CF64AE91D132C8E8((Enumerator_t649D2193B2B6C28E89B82247B1D28A30D3548F50 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m269393C54BD0A12D8236C0C4CF64AE91D132C8E8_RuntimeMethod_var);
		IL2CPP_END_FINALLY(49)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3F, IL_003f)
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void SkillManager::Skill1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillManager_Skill1_mE26BEE861425F6F1B7BAC4628C51D02C5A59CD02 (SkillManager_t922C3F2076730BE87514F83311A3752C621F7278 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m269393C54BD0A12D8236C0C4CF64AE91D132C8E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m61560064357E7BA96F0D31503834ED5AD39BF1D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1319FB9221759F3330354B81668E10047A4B1F17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mAD390AB027224D023EB048D3F7DDC684D69CAF5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral224F8DFCD7E66469D16DA5A2CCD3A28D27C9D893);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t649D2193B2B6C28E89B82247B1D28A30D3548F50  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach(Character hero in heros)
		List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 * L_0 = __this->get_heros_5();
		NullCheck(L_0);
		Enumerator_t649D2193B2B6C28E89B82247B1D28A30D3548F50  L_1;
		L_1 = List_1_GetEnumerator_mAD390AB027224D023EB048D3F7DDC684D69CAF5F(L_0, /*hidden argument*/List_1_GetEnumerator_mAD390AB027224D023EB048D3F7DDC684D69CAF5F_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001f;
		}

IL_000e:
		{
			// foreach(Character hero in heros)
			Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_2;
			L_2 = Enumerator_get_Current_m1319FB9221759F3330354B81668E10047A4B1F17_inline((Enumerator_t649D2193B2B6C28E89B82247B1D28A30D3548F50 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m1319FB9221759F3330354B81668E10047A4B1F17_RuntimeMethod_var);
			// hero.SendMessage("Skill1Ani"); // Player��ũ��Ʈ���� �߻��Ѵ�.
			NullCheck(L_2);
			Component_SendMessage_m3B002D579E5933EEFCA4024A1845CACB4FBBC208(L_2, _stringLiteral224F8DFCD7E66469D16DA5A2CCD3A28D27C9D893, /*hidden argument*/NULL);
		}

IL_001f:
		{
			// foreach(Character hero in heros)
			bool L_3;
			L_3 = Enumerator_MoveNext_m61560064357E7BA96F0D31503834ED5AD39BF1D2((Enumerator_t649D2193B2B6C28E89B82247B1D28A30D3548F50 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m61560064357E7BA96F0D31503834ED5AD39BF1D2_RuntimeMethod_var);
			if (L_3)
			{
				goto IL_000e;
			}
		}

IL_0028:
		{
			IL2CPP_LEAVE(0x38, FINALLY_002a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m269393C54BD0A12D8236C0C4CF64AE91D132C8E8((Enumerator_t649D2193B2B6C28E89B82247B1D28A30D3548F50 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m269393C54BD0A12D8236C0C4CF64AE91D132C8E8_RuntimeMethod_var);
		IL2CPP_END_FINALLY(42)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x38, IL_0038)
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void SkillManager::Skill2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillManager_Skill2_mA61E5A9D642E79E2F8F6B6C2CF470A8D95E883D8 (SkillManager_t922C3F2076730BE87514F83311A3752C621F7278 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m269393C54BD0A12D8236C0C4CF64AE91D132C8E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m61560064357E7BA96F0D31503834ED5AD39BF1D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1319FB9221759F3330354B81668E10047A4B1F17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mAD390AB027224D023EB048D3F7DDC684D69CAF5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7994233DE9DD1611D3CB661AB4AFDFCF720DBF18);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t649D2193B2B6C28E89B82247B1D28A30D3548F50  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (Character hero in heros)
		List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 * L_0 = __this->get_heros_5();
		NullCheck(L_0);
		Enumerator_t649D2193B2B6C28E89B82247B1D28A30D3548F50  L_1;
		L_1 = List_1_GetEnumerator_mAD390AB027224D023EB048D3F7DDC684D69CAF5F(L_0, /*hidden argument*/List_1_GetEnumerator_mAD390AB027224D023EB048D3F7DDC684D69CAF5F_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001f;
		}

IL_000e:
		{
			// foreach (Character hero in heros)
			Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_2;
			L_2 = Enumerator_get_Current_m1319FB9221759F3330354B81668E10047A4B1F17_inline((Enumerator_t649D2193B2B6C28E89B82247B1D28A30D3548F50 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m1319FB9221759F3330354B81668E10047A4B1F17_RuntimeMethod_var);
			// hero.SendMessage("Skill2Ani");
			NullCheck(L_2);
			Component_SendMessage_m3B002D579E5933EEFCA4024A1845CACB4FBBC208(L_2, _stringLiteral7994233DE9DD1611D3CB661AB4AFDFCF720DBF18, /*hidden argument*/NULL);
		}

IL_001f:
		{
			// foreach (Character hero in heros)
			bool L_3;
			L_3 = Enumerator_MoveNext_m61560064357E7BA96F0D31503834ED5AD39BF1D2((Enumerator_t649D2193B2B6C28E89B82247B1D28A30D3548F50 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m61560064357E7BA96F0D31503834ED5AD39BF1D2_RuntimeMethod_var);
			if (L_3)
			{
				goto IL_000e;
			}
		}

IL_0028:
		{
			IL2CPP_LEAVE(0x38, FINALLY_002a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m269393C54BD0A12D8236C0C4CF64AE91D132C8E8((Enumerator_t649D2193B2B6C28E89B82247B1D28A30D3548F50 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m269393C54BD0A12D8236C0C4CF64AE91D132C8E8_RuntimeMethod_var);
		IL2CPP_END_FINALLY(42)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x38, IL_0038)
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void SkillManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillManager__ctor_mFE3B96A94B3FF54A184397BC5721501F1262A064 (SkillManager_t922C3F2076730BE87514F83311A3752C621F7278 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE576755FB05B5C38187D21DEAEF8DD460C905372_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<Character> heros = new List<Character>();
		List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 * L_0 = (List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 *)il2cpp_codegen_object_new(List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664_il2cpp_TypeInfo_var);
		List_1__ctor_mE576755FB05B5C38187D21DEAEF8DD460C905372(L_0, /*hidden argument*/List_1__ctor_mE576755FB05B5C38187D21DEAEF8DD460C905372_RuntimeMethod_var);
		__this->set_heros_5(L_0);
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
// System.Void TeamManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeamManager_Awake_m5825F96D1B16E7928F19D653BD01E2A02374168D (TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (teamManager == null)
		TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535 * L_0 = ((TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_StaticFields*)il2cpp_codegen_static_fields_for(TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_il2cpp_TypeInfo_var))->get_teamManager_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// teamManager = this;
		((TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_StaticFields*)il2cpp_codegen_static_fields_for(TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_il2cpp_TypeInfo_var))->set_teamManager_5(__this);
	}

IL_0013:
	{
		// if (teamManager != this)
		TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535 * L_2 = ((TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_StaticFields*)il2cpp_codegen_static_fields_for(TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_il2cpp_TypeInfo_var))->get_teamManager_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, __this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// Castle TeamManager::TeamCastle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * TeamManager_TeamCastle_mBB4BB2E822B3EFAA0FDDEA1DB15B9FFA5A538247 (TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535 * __this, int32_t ____team0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m367CFD03892FD7B80717306294EA139548991210_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7ADEBBEFCD5B1C94EB0C4070A2AD3F659B799E7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7E137625ACDF23890B0162DA1DE540CDCAFDF35F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mAF7BA13C33A61A14950BE03FDE51F04A9DE25F40_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * V_1 = NULL;
	Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// foreach (Castle castle in Castles)
		List_1_t82C8BE4340B2B0C5DB5EB0BC5EA0751F69E2B1A4 * L_0 = __this->get_Castles_4();
		NullCheck(L_0);
		Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F  L_1;
		L_1 = List_1_GetEnumerator_mAF7BA13C33A61A14950BE03FDE51F04A9DE25F40(L_0, /*hidden argument*/List_1_GetEnumerator_mAF7BA13C33A61A14950BE03FDE51F04A9DE25F40_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0023;
		}

IL_000e:
		{
			// foreach (Castle castle in Castles)
			Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * L_2;
			L_2 = Enumerator_get_Current_m7E137625ACDF23890B0162DA1DE540CDCAFDF35F_inline((Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F *)(&V_0), /*hidden argument*/Enumerator_get_Current_m7E137625ACDF23890B0162DA1DE540CDCAFDF35F_RuntimeMethod_var);
			V_1 = L_2;
			// if (castle.Team == _team)
			Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * L_3 = V_1;
			NullCheck(L_3);
			int32_t L_4;
			L_4 = Building_get_Team_m29511AB7E5D15B834E7D1229493A037B64199BF0_inline(L_3, /*hidden argument*/NULL);
			int32_t L_5 = ____team0;
			if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
			{
				goto IL_0023;
			}
		}

IL_001f:
		{
			// return castle;
			Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * L_6 = V_1;
			V_2 = L_6;
			IL2CPP_LEAVE(0x3E, FINALLY_002e);
		}

IL_0023:
		{
			// foreach (Castle castle in Castles)
			bool L_7;
			L_7 = Enumerator_MoveNext_m7ADEBBEFCD5B1C94EB0C4070A2AD3F659B799E7D((Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m7ADEBBEFCD5B1C94EB0C4070A2AD3F659B799E7D_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_000e;
			}
		}

IL_002c:
		{
			IL2CPP_LEAVE(0x3C, FINALLY_002e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002e;
	}

FINALLY_002e:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m367CFD03892FD7B80717306294EA139548991210((Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F *)(&V_0), /*hidden argument*/Enumerator_Dispose_m367CFD03892FD7B80717306294EA139548991210_RuntimeMethod_var);
		IL2CPP_END_FINALLY(46)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(46)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3E, IL_003e)
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
	}

IL_003c:
	{
		// return null;
		return (Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 *)NULL;
	}

IL_003e:
	{
		// }
		Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * L_8 = V_2;
		return L_8;
	}
}
// System.Collections.Generic.List`1<Character> TeamManager::enemyTeamCharacter(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 * TeamManager_enemyTeamCharacter_mD94E7B248BD43A76D59DB444873D46917AD8D36B (TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535 * __this, int32_t ____team0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m367CFD03892FD7B80717306294EA139548991210_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7ADEBBEFCD5B1C94EB0C4070A2AD3F659B799E7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7E137625ACDF23890B0162DA1DE540CDCAFDF35F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m39F7981C55FB4AE901BA8C0F22E0F9C458684D55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mAF7BA13C33A61A14950BE03FDE51F04A9DE25F40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE576755FB05B5C38187D21DEAEF8DD460C905372_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 * V_0 = NULL;
	Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// List<Character> EnemyCharacterPool = new List<Character>();
		List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 * L_0 = (List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 *)il2cpp_codegen_object_new(List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664_il2cpp_TypeInfo_var);
		List_1__ctor_mE576755FB05B5C38187D21DEAEF8DD460C905372(L_0, /*hidden argument*/List_1__ctor_mE576755FB05B5C38187D21DEAEF8DD460C905372_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (Castle castle in Castles)
		List_1_t82C8BE4340B2B0C5DB5EB0BC5EA0751F69E2B1A4 * L_1 = __this->get_Castles_4();
		NullCheck(L_1);
		Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F  L_2;
		L_2 = List_1_GetEnumerator_mAF7BA13C33A61A14950BE03FDE51F04A9DE25F40(L_1, /*hidden argument*/List_1_GetEnumerator_mAF7BA13C33A61A14950BE03FDE51F04A9DE25F40_RuntimeMethod_var);
		V_1 = L_2;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0031;
		}

IL_0014:
		{
			// foreach (Castle castle in Castles)
			Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * L_3;
			L_3 = Enumerator_get_Current_m7E137625ACDF23890B0162DA1DE540CDCAFDF35F_inline((Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F *)(&V_1), /*hidden argument*/Enumerator_get_Current_m7E137625ACDF23890B0162DA1DE540CDCAFDF35F_RuntimeMethod_var);
			V_2 = L_3;
			// if (castle.Team != _team)
			Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * L_4 = V_2;
			NullCheck(L_4);
			int32_t L_5;
			L_5 = Building_get_Team_m29511AB7E5D15B834E7D1229493A037B64199BF0_inline(L_4, /*hidden argument*/NULL);
			int32_t L_6 = ____team0;
			if ((((int32_t)L_5) == ((int32_t)L_6)))
			{
				goto IL_0031;
			}
		}

IL_0025:
		{
			// EnemyCharacterPool.AddRange(castle.units);
			List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 * L_7 = V_0;
			Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * L_8 = V_2;
			NullCheck(L_8);
			List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 * L_9 = L_8->get_units_19();
			NullCheck(L_7);
			List_1_AddRange_m39F7981C55FB4AE901BA8C0F22E0F9C458684D55(L_7, L_9, /*hidden argument*/List_1_AddRange_m39F7981C55FB4AE901BA8C0F22E0F9C458684D55_RuntimeMethod_var);
		}

IL_0031:
		{
			// foreach (Castle castle in Castles)
			bool L_10;
			L_10 = Enumerator_MoveNext_m7ADEBBEFCD5B1C94EB0C4070A2AD3F659B799E7D((Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m7ADEBBEFCD5B1C94EB0C4070A2AD3F659B799E7D_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_0014;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x4A, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m367CFD03892FD7B80717306294EA139548991210((Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F *)(&V_1), /*hidden argument*/Enumerator_Dispose_m367CFD03892FD7B80717306294EA139548991210_RuntimeMethod_var);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4A, IL_004a)
	}

IL_004a:
	{
		// return EnemyCharacterPool;
		List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 * L_11 = V_0;
		return L_11;
	}
}
// System.Collections.Generic.List`1<Character> TeamManager::MyTeamCharacter(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 * TeamManager_MyTeamCharacter_m5C1915115C8D3D7B04484EBA3948D21BEFE44AE5 (TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535 * __this, int32_t ____team0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m367CFD03892FD7B80717306294EA139548991210_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7ADEBBEFCD5B1C94EB0C4070A2AD3F659B799E7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7E137625ACDF23890B0162DA1DE540CDCAFDF35F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m39F7981C55FB4AE901BA8C0F22E0F9C458684D55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mAF7BA13C33A61A14950BE03FDE51F04A9DE25F40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE576755FB05B5C38187D21DEAEF8DD460C905372_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 * V_0 = NULL;
	Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// List<Character> MyCharacterPool = new List<Character>();
		List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 * L_0 = (List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 *)il2cpp_codegen_object_new(List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664_il2cpp_TypeInfo_var);
		List_1__ctor_mE576755FB05B5C38187D21DEAEF8DD460C905372(L_0, /*hidden argument*/List_1__ctor_mE576755FB05B5C38187D21DEAEF8DD460C905372_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (Castle castle in Castles)
		List_1_t82C8BE4340B2B0C5DB5EB0BC5EA0751F69E2B1A4 * L_1 = __this->get_Castles_4();
		NullCheck(L_1);
		Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F  L_2;
		L_2 = List_1_GetEnumerator_mAF7BA13C33A61A14950BE03FDE51F04A9DE25F40(L_1, /*hidden argument*/List_1_GetEnumerator_mAF7BA13C33A61A14950BE03FDE51F04A9DE25F40_RuntimeMethod_var);
		V_1 = L_2;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0031;
		}

IL_0014:
		{
			// foreach (Castle castle in Castles)
			Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * L_3;
			L_3 = Enumerator_get_Current_m7E137625ACDF23890B0162DA1DE540CDCAFDF35F_inline((Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F *)(&V_1), /*hidden argument*/Enumerator_get_Current_m7E137625ACDF23890B0162DA1DE540CDCAFDF35F_RuntimeMethod_var);
			V_2 = L_3;
			// if (castle.Team == _team)
			Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * L_4 = V_2;
			NullCheck(L_4);
			int32_t L_5;
			L_5 = Building_get_Team_m29511AB7E5D15B834E7D1229493A037B64199BF0_inline(L_4, /*hidden argument*/NULL);
			int32_t L_6 = ____team0;
			if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
			{
				goto IL_0031;
			}
		}

IL_0025:
		{
			// MyCharacterPool.AddRange(castle.units);
			List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 * L_7 = V_0;
			Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * L_8 = V_2;
			NullCheck(L_8);
			List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 * L_9 = L_8->get_units_19();
			NullCheck(L_7);
			List_1_AddRange_m39F7981C55FB4AE901BA8C0F22E0F9C458684D55(L_7, L_9, /*hidden argument*/List_1_AddRange_m39F7981C55FB4AE901BA8C0F22E0F9C458684D55_RuntimeMethod_var);
		}

IL_0031:
		{
			// foreach (Castle castle in Castles)
			bool L_10;
			L_10 = Enumerator_MoveNext_m7ADEBBEFCD5B1C94EB0C4070A2AD3F659B799E7D((Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m7ADEBBEFCD5B1C94EB0C4070A2AD3F659B799E7D_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_0014;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x4A, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m367CFD03892FD7B80717306294EA139548991210((Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F *)(&V_1), /*hidden argument*/Enumerator_Dispose_m367CFD03892FD7B80717306294EA139548991210_RuntimeMethod_var);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4A, IL_004a)
	}

IL_004a:
	{
		// return MyCharacterPool;
		List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 * L_11 = V_0;
		return L_11;
	}
}
// System.Collections.Generic.List`1<Building> TeamManager::enemyTeamBuilding(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE * TeamManager_enemyTeamBuilding_m63FBD1DAB412171C234D2BAD4DCD45DD4BD53918 (TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535 * __this, int32_t ____team0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m367CFD03892FD7B80717306294EA139548991210_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7ADEBBEFCD5B1C94EB0C4070A2AD3F659B799E7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7E137625ACDF23890B0162DA1DE540CDCAFDF35F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mD01167BFE924D3C076F5E54E7E6A85B29AF153FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mAF7BA13C33A61A14950BE03FDE51F04A9DE25F40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE3B71719DFF2545B6DBA377A659B0D909CCD9481_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE * V_0 = NULL;
	Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// List<Building> MyCharacterPool = new List<Building>();
		List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE * L_0 = (List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE *)il2cpp_codegen_object_new(List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE_il2cpp_TypeInfo_var);
		List_1__ctor_mE3B71719DFF2545B6DBA377A659B0D909CCD9481(L_0, /*hidden argument*/List_1__ctor_mE3B71719DFF2545B6DBA377A659B0D909CCD9481_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (Castle castle in Castles)
		List_1_t82C8BE4340B2B0C5DB5EB0BC5EA0751F69E2B1A4 * L_1 = __this->get_Castles_4();
		NullCheck(L_1);
		Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F  L_2;
		L_2 = List_1_GetEnumerator_mAF7BA13C33A61A14950BE03FDE51F04A9DE25F40(L_1, /*hidden argument*/List_1_GetEnumerator_mAF7BA13C33A61A14950BE03FDE51F04A9DE25F40_RuntimeMethod_var);
		V_1 = L_2;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0031;
		}

IL_0014:
		{
			// foreach (Castle castle in Castles)
			Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * L_3;
			L_3 = Enumerator_get_Current_m7E137625ACDF23890B0162DA1DE540CDCAFDF35F_inline((Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F *)(&V_1), /*hidden argument*/Enumerator_get_Current_m7E137625ACDF23890B0162DA1DE540CDCAFDF35F_RuntimeMethod_var);
			V_2 = L_3;
			// if (castle.Team != _team)
			Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * L_4 = V_2;
			NullCheck(L_4);
			int32_t L_5;
			L_5 = Building_get_Team_m29511AB7E5D15B834E7D1229493A037B64199BF0_inline(L_4, /*hidden argument*/NULL);
			int32_t L_6 = ____team0;
			if ((((int32_t)L_5) == ((int32_t)L_6)))
			{
				goto IL_0031;
			}
		}

IL_0025:
		{
			// MyCharacterPool.AddRange(castle.buildings);
			List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE * L_7 = V_0;
			Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * L_8 = V_2;
			NullCheck(L_8);
			List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE * L_9 = L_8->get_buildings_18();
			NullCheck(L_7);
			List_1_AddRange_mD01167BFE924D3C076F5E54E7E6A85B29AF153FE(L_7, L_9, /*hidden argument*/List_1_AddRange_mD01167BFE924D3C076F5E54E7E6A85B29AF153FE_RuntimeMethod_var);
		}

IL_0031:
		{
			// foreach (Castle castle in Castles)
			bool L_10;
			L_10 = Enumerator_MoveNext_m7ADEBBEFCD5B1C94EB0C4070A2AD3F659B799E7D((Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m7ADEBBEFCD5B1C94EB0C4070A2AD3F659B799E7D_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_0014;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x4A, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m367CFD03892FD7B80717306294EA139548991210((Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F *)(&V_1), /*hidden argument*/Enumerator_Dispose_m367CFD03892FD7B80717306294EA139548991210_RuntimeMethod_var);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4A, IL_004a)
	}

IL_004a:
	{
		// return MyCharacterPool;
		List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE * L_11 = V_0;
		return L_11;
	}
}
// System.Collections.Generic.List`1<Building> TeamManager::MyTeamBuilding(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE * TeamManager_MyTeamBuilding_m2DCE0F4837862FFBAE678186D48CB1981A1794D2 (TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535 * __this, int32_t ____team0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m367CFD03892FD7B80717306294EA139548991210_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7ADEBBEFCD5B1C94EB0C4070A2AD3F659B799E7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7E137625ACDF23890B0162DA1DE540CDCAFDF35F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mD01167BFE924D3C076F5E54E7E6A85B29AF153FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mAF7BA13C33A61A14950BE03FDE51F04A9DE25F40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE3B71719DFF2545B6DBA377A659B0D909CCD9481_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE * V_0 = NULL;
	Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// List<Building> MyCharacterPool = new List<Building>();
		List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE * L_0 = (List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE *)il2cpp_codegen_object_new(List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE_il2cpp_TypeInfo_var);
		List_1__ctor_mE3B71719DFF2545B6DBA377A659B0D909CCD9481(L_0, /*hidden argument*/List_1__ctor_mE3B71719DFF2545B6DBA377A659B0D909CCD9481_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (Castle castle in Castles)
		List_1_t82C8BE4340B2B0C5DB5EB0BC5EA0751F69E2B1A4 * L_1 = __this->get_Castles_4();
		NullCheck(L_1);
		Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F  L_2;
		L_2 = List_1_GetEnumerator_mAF7BA13C33A61A14950BE03FDE51F04A9DE25F40(L_1, /*hidden argument*/List_1_GetEnumerator_mAF7BA13C33A61A14950BE03FDE51F04A9DE25F40_RuntimeMethod_var);
		V_1 = L_2;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0031;
		}

IL_0014:
		{
			// foreach (Castle castle in Castles)
			Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * L_3;
			L_3 = Enumerator_get_Current_m7E137625ACDF23890B0162DA1DE540CDCAFDF35F_inline((Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F *)(&V_1), /*hidden argument*/Enumerator_get_Current_m7E137625ACDF23890B0162DA1DE540CDCAFDF35F_RuntimeMethod_var);
			V_2 = L_3;
			// if (castle.Team == _team)
			Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * L_4 = V_2;
			NullCheck(L_4);
			int32_t L_5;
			L_5 = Building_get_Team_m29511AB7E5D15B834E7D1229493A037B64199BF0_inline(L_4, /*hidden argument*/NULL);
			int32_t L_6 = ____team0;
			if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
			{
				goto IL_0031;
			}
		}

IL_0025:
		{
			// MyCharacterPool.AddRange(castle.buildings);
			List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE * L_7 = V_0;
			Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * L_8 = V_2;
			NullCheck(L_8);
			List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE * L_9 = L_8->get_buildings_18();
			NullCheck(L_7);
			List_1_AddRange_mD01167BFE924D3C076F5E54E7E6A85B29AF153FE(L_7, L_9, /*hidden argument*/List_1_AddRange_mD01167BFE924D3C076F5E54E7E6A85B29AF153FE_RuntimeMethod_var);
		}

IL_0031:
		{
			// foreach (Castle castle in Castles)
			bool L_10;
			L_10 = Enumerator_MoveNext_m7ADEBBEFCD5B1C94EB0C4070A2AD3F659B799E7D((Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m7ADEBBEFCD5B1C94EB0C4070A2AD3F659B799E7D_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_0014;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x4A, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m367CFD03892FD7B80717306294EA139548991210((Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F *)(&V_1), /*hidden argument*/Enumerator_Dispose_m367CFD03892FD7B80717306294EA139548991210_RuntimeMethod_var);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4A, IL_004a)
	}

IL_004a:
	{
		// return MyCharacterPool;
		List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE * L_11 = V_0;
		return L_11;
	}
}
// System.Void TeamManager::AddUnit(System.Int32,Character)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeamManager_AddUnit_m61DCDA66A055D5E57929C363FCBDE7A1677F1537 (TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535 * __this, int32_t ____team0, Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * ___ch1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m367CFD03892FD7B80717306294EA139548991210_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7ADEBBEFCD5B1C94EB0C4070A2AD3F659B799E7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7E137625ACDF23890B0162DA1DE540CDCAFDF35F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m670A03E313664D645E455FDA1F182BEB40EEE993_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mAF7BA13C33A61A14950BE03FDE51F04A9DE25F40_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (Castle castle in Castles)
		List_1_t82C8BE4340B2B0C5DB5EB0BC5EA0751F69E2B1A4 * L_0 = __this->get_Castles_4();
		NullCheck(L_0);
		Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F  L_1;
		L_1 = List_1_GetEnumerator_mAF7BA13C33A61A14950BE03FDE51F04A9DE25F40(L_0, /*hidden argument*/List_1_GetEnumerator_mAF7BA13C33A61A14950BE03FDE51F04A9DE25F40_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002b;
		}

IL_000e:
		{
			// foreach (Castle castle in Castles)
			Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * L_2;
			L_2 = Enumerator_get_Current_m7E137625ACDF23890B0162DA1DE540CDCAFDF35F_inline((Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F *)(&V_0), /*hidden argument*/Enumerator_get_Current_m7E137625ACDF23890B0162DA1DE540CDCAFDF35F_RuntimeMethod_var);
			V_1 = L_2;
			// if (castle.Team == _team)
			Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * L_3 = V_1;
			NullCheck(L_3);
			int32_t L_4;
			L_4 = Building_get_Team_m29511AB7E5D15B834E7D1229493A037B64199BF0_inline(L_3, /*hidden argument*/NULL);
			int32_t L_5 = ____team0;
			if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
			{
				goto IL_002b;
			}
		}

IL_001f:
		{
			// castle.units.Add(ch);
			Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * L_6 = V_1;
			NullCheck(L_6);
			List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 * L_7 = L_6->get_units_19();
			Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_8 = ___ch1;
			NullCheck(L_7);
			List_1_Add_m670A03E313664D645E455FDA1F182BEB40EEE993(L_7, L_8, /*hidden argument*/List_1_Add_m670A03E313664D645E455FDA1F182BEB40EEE993_RuntimeMethod_var);
		}

IL_002b:
		{
			// foreach (Castle castle in Castles)
			bool L_9;
			L_9 = Enumerator_MoveNext_m7ADEBBEFCD5B1C94EB0C4070A2AD3F659B799E7D((Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m7ADEBBEFCD5B1C94EB0C4070A2AD3F659B799E7D_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_000e;
			}
		}

IL_0034:
		{
			IL2CPP_LEAVE(0x44, FINALLY_0036);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0036;
	}

FINALLY_0036:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m367CFD03892FD7B80717306294EA139548991210((Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F *)(&V_0), /*hidden argument*/Enumerator_Dispose_m367CFD03892FD7B80717306294EA139548991210_RuntimeMethod_var);
		IL2CPP_END_FINALLY(54)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(54)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x44, IL_0044)
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void TeamManager::AddBuilding(System.Int32,Building)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeamManager_AddBuilding_mCD0F1A401F1BB74212BF5F03F3AE1A895B700B0B (TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535 * __this, int32_t ____team0, Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * ___build1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m367CFD03892FD7B80717306294EA139548991210_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7ADEBBEFCD5B1C94EB0C4070A2AD3F659B799E7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7E137625ACDF23890B0162DA1DE540CDCAFDF35F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF221B7BAEE75E2A07ACCB27A83657F02BF8ABC7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mAF7BA13C33A61A14950BE03FDE51F04A9DE25F40_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (Castle castle in Castles)
		List_1_t82C8BE4340B2B0C5DB5EB0BC5EA0751F69E2B1A4 * L_0 = __this->get_Castles_4();
		NullCheck(L_0);
		Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F  L_1;
		L_1 = List_1_GetEnumerator_mAF7BA13C33A61A14950BE03FDE51F04A9DE25F40(L_0, /*hidden argument*/List_1_GetEnumerator_mAF7BA13C33A61A14950BE03FDE51F04A9DE25F40_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002b;
		}

IL_000e:
		{
			// foreach (Castle castle in Castles)
			Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * L_2;
			L_2 = Enumerator_get_Current_m7E137625ACDF23890B0162DA1DE540CDCAFDF35F_inline((Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F *)(&V_0), /*hidden argument*/Enumerator_get_Current_m7E137625ACDF23890B0162DA1DE540CDCAFDF35F_RuntimeMethod_var);
			V_1 = L_2;
			// if (castle.Team == _team)
			Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * L_3 = V_1;
			NullCheck(L_3);
			int32_t L_4;
			L_4 = Building_get_Team_m29511AB7E5D15B834E7D1229493A037B64199BF0_inline(L_3, /*hidden argument*/NULL);
			int32_t L_5 = ____team0;
			if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
			{
				goto IL_002b;
			}
		}

IL_001f:
		{
			// castle.buildings.Add(build);
			Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * L_6 = V_1;
			NullCheck(L_6);
			List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE * L_7 = L_6->get_buildings_18();
			Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * L_8 = ___build1;
			NullCheck(L_7);
			List_1_Add_mF221B7BAEE75E2A07ACCB27A83657F02BF8ABC7E(L_7, L_8, /*hidden argument*/List_1_Add_mF221B7BAEE75E2A07ACCB27A83657F02BF8ABC7E_RuntimeMethod_var);
		}

IL_002b:
		{
			// foreach (Castle castle in Castles)
			bool L_9;
			L_9 = Enumerator_MoveNext_m7ADEBBEFCD5B1C94EB0C4070A2AD3F659B799E7D((Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m7ADEBBEFCD5B1C94EB0C4070A2AD3F659B799E7D_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_000e;
			}
		}

IL_0034:
		{
			IL2CPP_LEAVE(0x44, FINALLY_0036);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0036;
	}

FINALLY_0036:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m367CFD03892FD7B80717306294EA139548991210((Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F *)(&V_0), /*hidden argument*/Enumerator_Dispose_m367CFD03892FD7B80717306294EA139548991210_RuntimeMethod_var);
		IL2CPP_END_FINALLY(54)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(54)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x44, IL_0044)
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void TeamManager::RemoveUnit(System.Int32,Character)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeamManager_RemoveUnit_m53E87E5DB65E75B49385791DC8E34E15632D66A7 (TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535 * __this, int32_t ____team0, Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * ___ch1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m367CFD03892FD7B80717306294EA139548991210_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7ADEBBEFCD5B1C94EB0C4070A2AD3F659B799E7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7E137625ACDF23890B0162DA1DE540CDCAFDF35F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mAF7BA13C33A61A14950BE03FDE51F04A9DE25F40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m9088D9D6AE3C56C6FEA17BBA4313FAC28C65B742_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (Castle castle in Castles)
		List_1_t82C8BE4340B2B0C5DB5EB0BC5EA0751F69E2B1A4 * L_0 = __this->get_Castles_4();
		NullCheck(L_0);
		Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F  L_1;
		L_1 = List_1_GetEnumerator_mAF7BA13C33A61A14950BE03FDE51F04A9DE25F40(L_0, /*hidden argument*/List_1_GetEnumerator_mAF7BA13C33A61A14950BE03FDE51F04A9DE25F40_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002c;
		}

IL_000e:
		{
			// foreach (Castle castle in Castles)
			Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * L_2;
			L_2 = Enumerator_get_Current_m7E137625ACDF23890B0162DA1DE540CDCAFDF35F_inline((Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F *)(&V_0), /*hidden argument*/Enumerator_get_Current_m7E137625ACDF23890B0162DA1DE540CDCAFDF35F_RuntimeMethod_var);
			V_1 = L_2;
			// if (castle.Team == _team)
			Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * L_3 = V_1;
			NullCheck(L_3);
			int32_t L_4;
			L_4 = Building_get_Team_m29511AB7E5D15B834E7D1229493A037B64199BF0_inline(L_3, /*hidden argument*/NULL);
			int32_t L_5 = ____team0;
			if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
			{
				goto IL_002c;
			}
		}

IL_001f:
		{
			// castle.units.Remove(ch);
			Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * L_6 = V_1;
			NullCheck(L_6);
			List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 * L_7 = L_6->get_units_19();
			Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_8 = ___ch1;
			NullCheck(L_7);
			bool L_9;
			L_9 = List_1_Remove_m9088D9D6AE3C56C6FEA17BBA4313FAC28C65B742(L_7, L_8, /*hidden argument*/List_1_Remove_m9088D9D6AE3C56C6FEA17BBA4313FAC28C65B742_RuntimeMethod_var);
		}

IL_002c:
		{
			// foreach (Castle castle in Castles)
			bool L_10;
			L_10 = Enumerator_MoveNext_m7ADEBBEFCD5B1C94EB0C4070A2AD3F659B799E7D((Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m7ADEBBEFCD5B1C94EB0C4070A2AD3F659B799E7D_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_000e;
			}
		}

IL_0035:
		{
			IL2CPP_LEAVE(0x45, FINALLY_0037);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0037;
	}

FINALLY_0037:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m367CFD03892FD7B80717306294EA139548991210((Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F *)(&V_0), /*hidden argument*/Enumerator_Dispose_m367CFD03892FD7B80717306294EA139548991210_RuntimeMethod_var);
		IL2CPP_END_FINALLY(55)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(55)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x45, IL_0045)
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void TeamManager::RemoveBuilding(System.Int32,Building)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeamManager_RemoveBuilding_mE57A301F673960E8844B6158A934C315153D9DB9 (TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535 * __this, int32_t ____team0, Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * ___build1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m367CFD03892FD7B80717306294EA139548991210_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7ADEBBEFCD5B1C94EB0C4070A2AD3F659B799E7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7E137625ACDF23890B0162DA1DE540CDCAFDF35F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mAF7BA13C33A61A14950BE03FDE51F04A9DE25F40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m50CAF71CB39E7429B007D300328A1C17810ADDCC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (Castle castle in Castles)
		List_1_t82C8BE4340B2B0C5DB5EB0BC5EA0751F69E2B1A4 * L_0 = __this->get_Castles_4();
		NullCheck(L_0);
		Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F  L_1;
		L_1 = List_1_GetEnumerator_mAF7BA13C33A61A14950BE03FDE51F04A9DE25F40(L_0, /*hidden argument*/List_1_GetEnumerator_mAF7BA13C33A61A14950BE03FDE51F04A9DE25F40_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002c;
		}

IL_000e:
		{
			// foreach (Castle castle in Castles)
			Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * L_2;
			L_2 = Enumerator_get_Current_m7E137625ACDF23890B0162DA1DE540CDCAFDF35F_inline((Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F *)(&V_0), /*hidden argument*/Enumerator_get_Current_m7E137625ACDF23890B0162DA1DE540CDCAFDF35F_RuntimeMethod_var);
			V_1 = L_2;
			// if (castle.Team == _team)
			Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * L_3 = V_1;
			NullCheck(L_3);
			int32_t L_4;
			L_4 = Building_get_Team_m29511AB7E5D15B834E7D1229493A037B64199BF0_inline(L_3, /*hidden argument*/NULL);
			int32_t L_5 = ____team0;
			if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
			{
				goto IL_002c;
			}
		}

IL_001f:
		{
			// castle.buildings.Remove(build);
			Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * L_6 = V_1;
			NullCheck(L_6);
			List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE * L_7 = L_6->get_buildings_18();
			Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * L_8 = ___build1;
			NullCheck(L_7);
			bool L_9;
			L_9 = List_1_Remove_m50CAF71CB39E7429B007D300328A1C17810ADDCC(L_7, L_8, /*hidden argument*/List_1_Remove_m50CAF71CB39E7429B007D300328A1C17810ADDCC_RuntimeMethod_var);
		}

IL_002c:
		{
			// foreach (Castle castle in Castles)
			bool L_10;
			L_10 = Enumerator_MoveNext_m7ADEBBEFCD5B1C94EB0C4070A2AD3F659B799E7D((Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m7ADEBBEFCD5B1C94EB0C4070A2AD3F659B799E7D_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_000e;
			}
		}

IL_0035:
		{
			IL2CPP_LEAVE(0x45, FINALLY_0037);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0037;
	}

FINALLY_0037:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m367CFD03892FD7B80717306294EA139548991210((Enumerator_tE43072514BBA398F2338B5CFE3B10B137AE6574F *)(&V_0), /*hidden argument*/Enumerator_Dispose_m367CFD03892FD7B80717306294EA139548991210_RuntimeMethod_var);
		IL2CPP_END_FINALLY(55)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(55)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x45, IL_0045)
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void TeamManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeamManager__ctor_mABF7BDA58793B1CAC8694A39D6B6329766BB2A4B (TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m33AEEF8E79303B429B300712427653DBE388D21F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t82C8BE4340B2B0C5DB5EB0BC5EA0751F69E2B1A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<Castle> Castles = new List<Castle>();
		List_1_t82C8BE4340B2B0C5DB5EB0BC5EA0751F69E2B1A4 * L_0 = (List_1_t82C8BE4340B2B0C5DB5EB0BC5EA0751F69E2B1A4 *)il2cpp_codegen_object_new(List_1_t82C8BE4340B2B0C5DB5EB0BC5EA0751F69E2B1A4_il2cpp_TypeInfo_var);
		List_1__ctor_m33AEEF8E79303B429B300712427653DBE388D21F(L_0, /*hidden argument*/List_1__ctor_m33AEEF8E79303B429B300712427653DBE388D21F_RuntimeMethod_var);
		__this->set_Castles_4(L_0);
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
// System.Void TouchManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchManager_Update_mF0061ABA3F8A0A936CBF37DCDAB189E38D83879A (TouchManager_t251D826C6882E59C9018F77827CBC73959F7A9D1 * __this, const RuntimeMethod* method)
{
	{
		// if (BuildingMoveOn)
		bool L_0 = __this->get_BuildingMoveOn_7();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// BuildingMove();
		TouchManager_BuildingMove_mE302774C2C5F09AD83D0D9EE3D943AE81D98A00C(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void TouchManager::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchManager_OnEnable_mCE85E0BB827FC909586DF847B06BF000B31C133E (TouchManager_t251D826C6882E59C9018F77827CBC73959F7A9D1 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void TouchManager::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchManager_OnDisable_mFB9F13DF668BC30BAB125F14D2A0F4A6A8F86C6F (TouchManager_t251D826C6882E59C9018F77827CBC73959F7A9D1 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void TouchManager::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchManager_OnDrag_m0B4E4D4875C386068D0B4B6114242950E890AC2B (TouchManager_t251D826C6882E59C9018F77827CBC73959F7A9D1 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ClickBuilding != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_ClickBuilding_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		// Ray ray = cam.ScreenPointToRay(eventData.position);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = __this->get_cam_4();
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_3 = ___eventData0;
		NullCheck(L_3);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_6;
		L_6 = Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB(L_2, L_5, /*hidden argument*/NULL);
		// Physics.Raycast(ray, out hit);
		RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * L_7 = __this->get_address_of_hit_6();
		bool L_8;
		L_8 = Physics_Raycast_m80EC8EEDA0ABA8B01838BA9054834CD1A381916E(L_6, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)L_7, /*hidden argument*/NULL);
		// BuildingMoveOn = true;
		__this->set_BuildingMoveOn_7((bool)1);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void TouchManager::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchManager_OnPointerDown_mA61FA4B5DA80D0EEC77C0929684E56ECDDB6CB87 (TouchManager_t251D826C6882E59C9018F77827CBC73959F7A9D1 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mAECA5070E95CE5C802D5573BC86EDEDEC88E9BDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB7AFB4E0B550927FBF6504243B789E9BDAD32938_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB585AA20C90153194E76F74862FBAD50D70DC9A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5DA9279CEDB27114379436C7D97807EF929ADF45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3B5E02E6C686BD136D17A26E3D1A8A96DC44FD0);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tDEA9EF7DA04121A1EA4A598DC8A80A7E572E1E4C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// Ray ray = cam.ScreenPointToRay(eventData.position);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = __this->get_cam_4();
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_1 = ___eventData0;
		NullCheck(L_1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_4;
		L_4 = Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB(L_0, L_3, /*hidden argument*/NULL);
		// Physics.Raycast(ray, out hit);
		RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * L_5 = __this->get_address_of_hit_6();
		bool L_6;
		L_6 = Physics_Raycast_m80EC8EEDA0ABA8B01838BA9054834CD1A381916E(L_4, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)L_5, /*hidden argument*/NULL);
		// if (hit.transform.gameObject.layer == LayerMask.NameToLayer("TEAM1") )
		RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * L_7 = __this->get_address_of_hit_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F(L_9, /*hidden argument*/NULL);
		int32_t L_11;
		L_11 = LayerMask_NameToLayer_m6A2BBB60EC90F7EC48A6A91CA98149C547A04C0A(_stringLiteralA3B5E02E6C686BD136D17A26E3D1A8A96DC44FD0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_00ab;
		}
	}
	{
		// ClickBuilding = hit.transform.gameObject;
		RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * L_12 = __this->get_address_of_hit_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_13, /*hidden argument*/NULL);
		__this->set_ClickBuilding_5(L_14);
		// foreach (Building building in TeamManager.teamManager.TeamCastle(0).buildings)
		TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535 * L_15 = ((TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_StaticFields*)il2cpp_codegen_static_fields_for(TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_il2cpp_TypeInfo_var))->get_teamManager_5();
		NullCheck(L_15);
		Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * L_16;
		L_16 = TeamManager_TeamCastle_mBB4BB2E822B3EFAA0FDDEA1DB15B9FFA5A538247(L_15, 0, /*hidden argument*/NULL);
		NullCheck(L_16);
		List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE * L_17 = L_16->get_buildings_18();
		NullCheck(L_17);
		Enumerator_tDEA9EF7DA04121A1EA4A598DC8A80A7E572E1E4C  L_18;
		L_18 = List_1_GetEnumerator_m5DA9279CEDB27114379436C7D97807EF929ADF45(L_17, /*hidden argument*/List_1_GetEnumerator_m5DA9279CEDB27114379436C7D97807EF929ADF45_RuntimeMethod_var);
		V_0 = L_18;
	}

IL_006f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0092;
		}

IL_0071:
		{
			// foreach (Building building in TeamManager.teamManager.TeamCastle(0).buildings)
			Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * L_19;
			L_19 = Enumerator_get_Current_mB585AA20C90153194E76F74862FBAD50D70DC9A0_inline((Enumerator_tDEA9EF7DA04121A1EA4A598DC8A80A7E572E1E4C *)(&V_0), /*hidden argument*/Enumerator_get_Current_mB585AA20C90153194E76F74862FBAD50D70DC9A0_RuntimeMethod_var);
			// building.GetComponent<BoxCollider>().size *= 2;
			NullCheck(L_19);
			BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * L_20;
			L_20 = Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861(L_19, /*hidden argument*/Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861_RuntimeMethod_var);
			BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * L_21 = L_20;
			NullCheck(L_21);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
			L_22 = BoxCollider_get_size_mBC38D4926D4BE54A6532F6E1D642F363CA3A58A1(L_21, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
			L_23 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_22, (2.0f), /*hidden argument*/NULL);
			NullCheck(L_21);
			BoxCollider_set_size_mD9153B4AE4C366ACAB9E5F49075D919A89168B2E(L_21, L_23, /*hidden argument*/NULL);
		}

IL_0092:
		{
			// foreach (Building building in TeamManager.teamManager.TeamCastle(0).buildings)
			bool L_24;
			L_24 = Enumerator_MoveNext_mB7AFB4E0B550927FBF6504243B789E9BDAD32938((Enumerator_tDEA9EF7DA04121A1EA4A598DC8A80A7E572E1E4C *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mB7AFB4E0B550927FBF6504243B789E9BDAD32938_RuntimeMethod_var);
			if (L_24)
			{
				goto IL_0071;
			}
		}

IL_009b:
		{
			IL2CPP_LEAVE(0xAB, FINALLY_009d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009d;
	}

FINALLY_009d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mAECA5070E95CE5C802D5573BC86EDEDEC88E9BDB((Enumerator_tDEA9EF7DA04121A1EA4A598DC8A80A7E572E1E4C *)(&V_0), /*hidden argument*/Enumerator_Dispose_mAECA5070E95CE5C802D5573BC86EDEDEC88E9BDB_RuntimeMethod_var);
		IL2CPP_END_FINALLY(157)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(157)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xAB, IL_00ab)
	}

IL_00ab:
	{
		// }
		return;
	}
}
// System.Void TouchManager::BuildingMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchManager_BuildingMove_mE302774C2C5F09AD83D0D9EE3D943AE81D98A00C (TouchManager_t251D826C6882E59C9018F77827CBC73959F7A9D1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3BCDF09A6C4BD969F67C120DBB3B660BDEC8C9E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (hit.transform.gameObject.layer == LayerMask.NameToLayer("GROUND"))
		RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * L_0 = __this->get_address_of_hit_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F(L_2, /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = LayerMask_NameToLayer_m6A2BBB60EC90F7EC48A6A91CA98149C547A04C0A(_stringLiteralA3BCDF09A6C4BD969F67C120DBB3B660BDEC8C9E, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_005d;
		}
	}
	{
		// Vector3 moveVec = hit.point - ClickBuilding.transform.position;
		RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * L_5 = __this->get_address_of_hit_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)L_5, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_ClickBuilding_5();
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_6, L_9, /*hidden argument*/NULL);
		// ClickBuilding.transform.position = hit.point;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_ClickBuilding_5();
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_11, /*hidden argument*/NULL);
		RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * L_13 = __this->get_address_of_hit_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_12, L_14, /*hidden argument*/NULL);
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Void TouchManager::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchManager_OnPointerUp_mB5671C9B21F51E7F99B78FF7731AC1F1558F78BC (TouchManager_t251D826C6882E59C9018F77827CBC73959F7A9D1 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mAECA5070E95CE5C802D5573BC86EDEDEC88E9BDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB7AFB4E0B550927FBF6504243B789E9BDAD32938_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB585AA20C90153194E76F74862FBAD50D70DC9A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5DA9279CEDB27114379436C7D97807EF929ADF45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tDEA9EF7DA04121A1EA4A598DC8A80A7E572E1E4C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (ClickBuilding != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_ClickBuilding_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0067;
		}
	}
	{
		// ClickBuilding = null;
		__this->set_ClickBuilding_5((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		// foreach (Building building in TeamManager.teamManager.TeamCastle(0).buildings)
		TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535 * L_2 = ((TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_StaticFields*)il2cpp_codegen_static_fields_for(TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_il2cpp_TypeInfo_var))->get_teamManager_5();
		NullCheck(L_2);
		Castle_tC464E94C6CBE45C690FFA74CEA6ADE7560A08D57 * L_3;
		L_3 = TeamManager_TeamCastle_mBB4BB2E822B3EFAA0FDDEA1DB15B9FFA5A538247(L_2, 0, /*hidden argument*/NULL);
		NullCheck(L_3);
		List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE * L_4 = L_3->get_buildings_18();
		NullCheck(L_4);
		Enumerator_tDEA9EF7DA04121A1EA4A598DC8A80A7E572E1E4C  L_5;
		L_5 = List_1_GetEnumerator_m5DA9279CEDB27114379436C7D97807EF929ADF45(L_4, /*hidden argument*/List_1_GetEnumerator_m5DA9279CEDB27114379436C7D97807EF929ADF45_RuntimeMethod_var);
		V_0 = L_5;
	}

IL_002b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004e;
		}

IL_002d:
		{
			// foreach (Building building in TeamManager.teamManager.TeamCastle(0).buildings)
			Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * L_6;
			L_6 = Enumerator_get_Current_mB585AA20C90153194E76F74862FBAD50D70DC9A0_inline((Enumerator_tDEA9EF7DA04121A1EA4A598DC8A80A7E572E1E4C *)(&V_0), /*hidden argument*/Enumerator_get_Current_mB585AA20C90153194E76F74862FBAD50D70DC9A0_RuntimeMethod_var);
			// building.GetComponent<BoxCollider>().size /= 2;
			NullCheck(L_6);
			BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * L_7;
			L_7 = Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861(L_6, /*hidden argument*/Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861_RuntimeMethod_var);
			BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * L_8 = L_7;
			NullCheck(L_8);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
			L_9 = BoxCollider_get_size_mBC38D4926D4BE54A6532F6E1D642F363CA3A58A1(L_8, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
			L_10 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_9, (2.0f), /*hidden argument*/NULL);
			NullCheck(L_8);
			BoxCollider_set_size_mD9153B4AE4C366ACAB9E5F49075D919A89168B2E(L_8, L_10, /*hidden argument*/NULL);
		}

IL_004e:
		{
			// foreach (Building building in TeamManager.teamManager.TeamCastle(0).buildings)
			bool L_11;
			L_11 = Enumerator_MoveNext_mB7AFB4E0B550927FBF6504243B789E9BDAD32938((Enumerator_tDEA9EF7DA04121A1EA4A598DC8A80A7E572E1E4C *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mB7AFB4E0B550927FBF6504243B789E9BDAD32938_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_002d;
			}
		}

IL_0057:
		{
			IL2CPP_LEAVE(0x67, FINALLY_0059);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0059;
	}

FINALLY_0059:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mAECA5070E95CE5C802D5573BC86EDEDEC88E9BDB((Enumerator_tDEA9EF7DA04121A1EA4A598DC8A80A7E572E1E4C *)(&V_0), /*hidden argument*/Enumerator_Dispose_mAECA5070E95CE5C802D5573BC86EDEDEC88E9BDB_RuntimeMethod_var);
		IL2CPP_END_FINALLY(89)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(89)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x67, IL_0067)
	}

IL_0067:
	{
		// BuildingMoveOn = false;
		__this->set_BuildingMoveOn_7((bool)0);
		// }
		return;
	}
}
// System.Void TouchManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchManager__ctor_m0BC1C6019ABA47FC3DED68F0D46F3A7D56357CC8 (TouchManager_t251D826C6882E59C9018F77827CBC73959F7A9D1 * __this, const RuntimeMethod* method)
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
// System.Void TouchPad::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_OnEnable_m64B958454281CCC20DF081FEF96BCECC12CDFB7C (TouchPad_t0BAA54FA8F10C824858FE60E2D158A2D935E026A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _touchPad = GetComponent<RectTransform>();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0;
		L_0 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		__this->set__touchPad_4(L_0);
		// _StartPos = _touchPad.position;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1 = __this->get__touchPad_4();
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		__this->set__StartPos_6(L_2);
		// }
		return;
	}
}
// System.Void TouchPad::ButtonDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_ButtonDown_m909AE4BB332F7D1C04EDCD66C9A0B06E5B6E0945 (TouchPad_t0BAA54FA8F10C824858FE60E2D158A2D935E026A * __this, const RuntimeMethod* method)
{
	{
		// _buttonPressed = true;
		__this->set__buttonPressed_8((bool)1);
		// }
		return;
	}
}
// System.Void TouchPad::ButtonUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_ButtonUp_m7079C8C3DC8686181CAA356AB68EBC22BEA09DC5 (TouchPad_t0BAA54FA8F10C824858FE60E2D158A2D935E026A * __this, const RuntimeMethod* method)
{
	{
		// _buttonPressed = false;
		__this->set__buttonPressed_8((bool)0);
		// }
		return;
	}
}
// System.Void TouchPad::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_FixedUpdate_mC27B4CB1FD02DD5D4F9EFCD33D48FEB5A552D4AA (TouchPad_t0BAA54FA8F10C824858FE60E2D158A2D935E026A * __this, const RuntimeMethod* method)
{
	{
		// if (Application.platform == RuntimePlatform.Android)
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0010;
		}
	}
	{
		// HandleTouchInput();
		TouchPad_HandleTouchInput_m96615114C7BA1DEFD0D5A208E678F2F06FB65E10(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0010:
	{
		// else if (Application.platform == RuntimePlatform.WindowsEditor)
		int32_t L_1;
		L_1 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)7))))
		{
			goto IL_0023;
		}
	}
	{
		// HandleInput(Input.mousePosition);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		TouchPad_HandleInput_m33F29EE0931E0E2D4152D559A0D65F69182048A9(__this, L_2, /*hidden argument*/NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void TouchPad::HandleTouchInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_HandleTouchInput_m96615114C7BA1DEFD0D5A208E678F2F06FB65E10 (TouchPad_t0BAA54FA8F10C824858FE60E2D158A2D935E026A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* V_1 = NULL;
	int32_t V_2 = 0;
	Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// int i = 0;
		V_0 = 0;
		// if (Input.touchCount > 0) //�ѹ��̶� ��ġ�� ���ִٸ�
		int32_t L_0;
		L_0 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6(/*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_00e5;
		}
	}
	{
		// foreach (Touch _touch in Input.touches)//�Էµ� ��ġ ��ǥ�� ��� �迭
		TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* L_1;
		L_1 = Input_get_touches_m26E3034CAE32931E59A480327A3CF4BFC2045E8F(/*hidden argument*/NULL);
		V_1 = L_1;
		V_2 = 0;
		goto IL_00db;
	}

IL_001a:
	{
		// foreach (Touch _touch in Input.touches)//�Էµ� ��ġ ��ǥ�� ��� �迭
		TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		// i++;
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		// Vector2 touchPos = new Vector2(_touch.position.x, _touch.position.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_3), /*hidden argument*/NULL);
		float L_8 = L_7.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_3), /*hidden argument*/NULL);
		float L_10 = L_9.get_y_1();
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_4), L_8, L_10, /*hidden argument*/NULL);
		// if (_touch.phase == TouchPhase.Began) //���� ��ġ�϶�
		int32_t L_11;
		L_11 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_3), /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_009c;
		}
	}
	{
		// if (_touch.position.x <= (_StartPos.x + _dragRadius)) //��ġ ��׶��� �ȿ��ִٸ�
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		L_12 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_3), /*hidden argument*/NULL);
		float L_13 = L_12.get_x_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_14 = __this->get_address_of__StartPos_6();
		float L_15 = L_14->get_x_2();
		float L_16 = __this->get__dragRadius_7();
		if ((!(((float)L_13) <= ((float)((float)il2cpp_codegen_add((float)L_15, (float)L_16))))))
		{
			goto IL_0075;
		}
	}
	{
		// _touchId = i;                                      // ������� �����Ѵ�.
		int32_t L_17 = V_0;
		__this->set__touchId_5(L_17);
	}

IL_0075:
	{
		// if (_touch.position.y <= (_StartPos.y + _dragRadius))
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18;
		L_18 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_3), /*hidden argument*/NULL);
		float L_19 = L_18.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_20 = __this->get_address_of__StartPos_6();
		float L_21 = L_20->get_y_3();
		float L_22 = __this->get__dragRadius_7();
		if ((!(((float)L_19) <= ((float)((float)il2cpp_codegen_add((float)L_21, (float)L_22))))))
		{
			goto IL_009c;
		}
	}
	{
		// _touchId = i;
		int32_t L_23 = V_0;
		__this->set__touchId_5(L_23);
	}

IL_009c:
	{
		// if (_touch.phase == TouchPhase.Moved || _touch.phase == TouchPhase.Stationary)
		int32_t L_24;
		L_24 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_3), /*hidden argument*/NULL);
		if ((((int32_t)L_24) == ((int32_t)1)))
		{
			goto IL_00b0;
		}
	}
	{
		int32_t L_25;
		L_25 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_3), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_25) == ((uint32_t)2))))
		{
			goto IL_00c6;
		}
	}

IL_00b0:
	{
		// if (_touchId == i)
		int32_t L_26 = __this->get__touchId_5();
		int32_t L_27 = V_0;
		if ((!(((uint32_t)L_26) == ((uint32_t)L_27))))
		{
			goto IL_00c6;
		}
	}
	{
		// HandleInput(touchPos);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_28 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_28, /*hidden argument*/NULL);
		TouchPad_HandleInput_m33F29EE0931E0E2D4152D559A0D65F69182048A9(__this, L_29, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		// if (_touch.phase == TouchPhase.Ended) //��ġ�е��� ��ġ�� �����ٸ�
		int32_t L_30;
		L_30 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_3), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_30) == ((uint32_t)3))))
		{
			goto IL_00d7;
		}
	}
	{
		// _touchId = -1;
		__this->set__touchId_5((-1));
	}

IL_00d7:
	{
		int32_t L_31 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_00db:
	{
		// foreach (Touch _touch in Input.touches)//�Էµ� ��ġ ��ǥ�� ��� �迭
		int32_t L_32 = V_2;
		TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* L_33 = V_1;
		NullCheck(L_33);
		if ((((int32_t)L_32) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_001a;
		}
	}
	{
		// }
		return;
	}

IL_00e5:
	{
		// HandleInput(_StartPos);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = __this->get__StartPos_6();
		TouchPad_HandleInput_m33F29EE0931E0E2D4152D559A0D65F69182048A9(__this, L_34, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TouchPad::HandleInput(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_HandleInput_m33F29EE0931E0E2D4152D559A0D65F69182048A9 (TouchPad_t0BAA54FA8F10C824858FE60E2D158A2D935E026A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchPad_t0BAA54FA8F10C824858FE60E2D158A2D935E026A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (_buttonPressed) // ��ġ�е尡 �������ٸ�
		bool L_0 = __this->get__buttonPressed_8();
		if (!L_0)
		{
			goto IL_0064;
		}
	}
	{
		// Vector3 diffVector = input - _StartPos;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___input0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = __this->get__StartPos_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_1, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		// if (diffVector.sqrMagnitude > _dragRadius * _dragRadius)
		float L_4;
		L_4 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), /*hidden argument*/NULL);
		float L_5 = __this->get__dragRadius_7();
		float L_6 = __this->get__dragRadius_7();
		if ((!(((float)L_4) > ((float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_6))))))
		{
			goto IL_0056;
		}
	}
	{
		// diffVector.Normalize();
		Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), /*hidden argument*/NULL);
		// _touchPad.position = _StartPos + diffVector * _dragRadius;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_7 = __this->get__touchPad_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = __this->get__StartPos_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_2;
		float L_10 = __this->get__dragRadius_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_9, L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_8, L_11, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_7, L_12, /*hidden argument*/NULL);
		// }
		goto IL_0075;
	}

IL_0056:
	{
		// _touchPad.position = input;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_13 = __this->get__touchPad_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = ___input0;
		NullCheck(L_13);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_13, L_14, /*hidden argument*/NULL);
		// }
		goto IL_0075;
	}

IL_0064:
	{
		// _touchPad.position = _StartPos;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_15 = __this->get__touchPad_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = __this->get__StartPos_6();
		NullCheck(L_15);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_15, L_16, /*hidden argument*/NULL);
	}

IL_0075:
	{
		// Vector3 diff = _touchPad.position - _StartPos;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_17 = __this->get__touchPad_4();
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_17, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = __this->get__StartPos_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_18, L_19, /*hidden argument*/NULL);
		V_0 = L_20;
		// Vector3 nomaldiff = new Vector3(diff.x / _dragRadius, diff.y / _dragRadius);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = V_0;
		float L_22 = L_21.get_x_2();
		float L_23 = __this->get__dragRadius_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		float L_25 = L_24.get_y_3();
		float L_26 = __this->get__dragRadius_7();
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), ((float)((float)L_22/(float)L_23)), ((float)((float)L_25/(float)L_26)), /*hidden argument*/NULL);
		// if (playerMovement != null)
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_27 = ((TouchPad_t0BAA54FA8F10C824858FE60E2D158A2D935E026A_StaticFields*)il2cpp_codegen_static_fields_for(TouchPad_t0BAA54FA8F10C824858FE60E2D158A2D935E026A_il2cpp_TypeInfo_var))->get_playerMovement_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_27, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00ca;
		}
	}
	{
		// playerMovement.OnStickChange(nomaldiff);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_29 = ((TouchPad_t0BAA54FA8F10C824858FE60E2D158A2D935E026A_StaticFields*)il2cpp_codegen_static_fields_for(TouchPad_t0BAA54FA8F10C824858FE60E2D158A2D935E026A_il2cpp_TypeInfo_var))->get_playerMovement_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_31;
		L_31 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_30, /*hidden argument*/NULL);
		NullCheck(L_29);
		Player_OnStickChange_m0D123A689730B747CC5AA341ABC55BE38F8F93EE(L_29, L_31, /*hidden argument*/NULL);
	}

IL_00ca:
	{
		// }
		return;
	}
}
// System.Void TouchPad::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad__ctor_m78ACEA9A109FB1882058B1150EE0AEF0E3943117 (TouchPad_t0BAA54FA8F10C824858FE60E2D158A2D935E026A * __this, const RuntimeMethod* method)
{
	{
		// public int _touchId = -1; //��ġ �ߴ� �� �Ǵ�
		__this->set__touchId_5((-1));
		// Vector3 _StartPos = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set__StartPos_6(L_0);
		// public float _dragRadius = 100f;
		__this->set__dragRadius_7((100.0f));
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
// System.Void Warrior::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Warrior_Start_mF14D4F7D316D0707CB910EE71424A7AB242E5F82 (Warrior_tECD1FF939DB86C416627FC8DB54EAC1B03B3F3F8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Character_SpeedUp_m64B0B0461BA9320CD15BD2F57252A370B869E7A0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Start();
		Character_Start_m19E14D7EC1D199C77A447BAB99FBDCA7FC91FF3B(__this, /*hidden argument*/NULL);
		// WarriorHero.WarriorBuff += SpeedUp;
		Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * L_0 = (Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 *)il2cpp_codegen_object_new(Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6_il2cpp_TypeInfo_var);
		Buff__ctor_m7AF50D5CAE8E64F1299994E67AD0D08CB8062340(L_0, __this, (intptr_t)((intptr_t)Character_SpeedUp_m64B0B0461BA9320CD15BD2F57252A370B869E7A0_RuntimeMethod_var), /*hidden argument*/NULL);
		WarriorHero_add_WarriorBuff_m96D999E8A25F87EA5F8DC92F8FAE9BAB7B047D34(L_0, /*hidden argument*/NULL);
		// UnitTargetRange = AttackRange;
		int32_t L_1;
		L_1 = Character_get_AttackRange_m8AE154780E830109F962389ED3B0EFB8C73A1653_inline(__this, /*hidden argument*/NULL);
		__this->set_UnitTargetRange_24(L_1);
		// }
		return;
	}
}
// System.Void Warrior::AttackTarget(UnityEngine.GameObject[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Warrior_AttackTarget_m31C48B3F3FB76091B31BC5813C4451C8A51A8E19 (Warrior_tECD1FF939DB86C416627FC8DB54EAC1B03B3F3F8 * __this, GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___Targets0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95130C6675E4A5F5C710AAB2FDF1EBCD3E1D32EA);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	{
		// if (Targets == null)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = ___Targets0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// foreach (GameObject target in Targets) //Damaged �������̽��� �ٰŸ��϶��� ������ ��������, ���Ÿ��϶��� ����ü�� �������� �����ϴ� ������ �Ѵ�.
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = ___Targets0;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0051;
	}

IL_000a:
	{
		// foreach (GameObject target in Targets) //Damaged �������̽��� �ٰŸ��϶��� ������ ��������, ���Ÿ��϶��� ����ü�� �������� �����ϴ� ������ �Ѵ�.
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// transform.LookAt(target.transform);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = V_2;
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_LookAt_m49185D782014D16DA747C1296BEBAC3FB3CEDC1F(L_6, L_8, /*hidden argument*/NULL);
		// if (AttackRangeFucn(target.transform))
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = V_2;
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		bool L_11;
		L_11 = Character_AttackRangeFucn_m0D7F2A3327F55F44DA24095F95F6120516FE5543(__this, L_10, (90.0f), (-1.0f), /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_004d;
		}
	}
	{
		// target.SendMessage("Damaged", AttackDamage);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = V_2;
		int32_t L_13;
		L_13 = Character_get_AttackDamage_mC9305B6E2C8278E2CBA6961F0946E50A0D41A494_inline(__this, /*hidden argument*/NULL);
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		GameObject_SendMessage_m9727C08D6F0A5E8F309FA9FFF389ADF8130D7BE7(L_12, _stringLiteral95130C6675E4A5F5C710AAB2FDF1EBCD3E1D32EA, L_15, /*hidden argument*/NULL);
	}

IL_004d:
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0051:
	{
		// foreach (GameObject target in Targets) //Damaged �������̽��� �ٰŸ��϶��� ������ ��������, ���Ÿ��϶��� ����ü�� �������� �����ϴ� ������ �Ѵ�.
		int32_t L_17 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_18 = V_0;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Warrior::Upgrade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Warrior_Upgrade_m2371DA4F111C483CE6A60AADF4236EF113BC618D (Warrior_tECD1FF939DB86C416627FC8DB54EAC1B03B3F3F8 * __this, const RuntimeMethod* method)
{
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Warrior_Upgrade_m2371DA4F111C483CE6A60AADF4236EF113BC618D_RuntimeMethod_var)));
	}
}
// System.Void Warrior::RangeSet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Warrior_RangeSet_m7E1E0BF7E85C9EFC9D1CF6F4BE9595C21E2B6620 (Warrior_tECD1FF939DB86C416627FC8DB54EAC1B03B3F3F8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F_mE6A091B052494D68E8F2F2E14851B630190B5A89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBuilding_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5_mBF2ECB1B8CF12ABD9D9BE953CC5737F1C18DAE2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GetComponent<AI>().target.GetComponent<Building>())
		AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * L_0;
		L_0 = Component_GetComponent_TisAI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F_mE6A091B052494D68E8F2F2E14851B630190B5A89(__this, /*hidden argument*/Component_GetComponent_TisAI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F_mE6A091B052494D68E8F2F2E14851B630190B5A89_RuntimeMethod_var);
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = L_0->get_target_7();
		NullCheck(L_1);
		Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * L_2;
		L_2 = GameObject_GetComponent_TisBuilding_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5_mBF2ECB1B8CF12ABD9D9BE953CC5737F1C18DAE2E(L_1, /*hidden argument*/GameObject_GetComponent_TisBuilding_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5_mBF2ECB1B8CF12ABD9D9BE953CC5737F1C18DAE2E_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// AttackRange = BuidingTargetRange;
		int32_t L_4 = __this->get_BuidingTargetRange_23();
		Character_set_AttackRange_m0463316AED18682C58694BF5821DE0D584B5A40C_inline(__this, L_4, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0024:
	{
		// AttackRange = UnitTargetRange;
		int32_t L_5 = __this->get_UnitTargetRange_24();
		Character_set_AttackRange_m0463316AED18682C58694BF5821DE0D584B5A40C_inline(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Warrior::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Warrior__ctor_m8CE6BC20AFE75A67A9BE59BD39B8C637615341FE (Warrior_tECD1FF939DB86C416627FC8DB54EAC1B03B3F3F8 * __this, const RuntimeMethod* method)
{
	{
		// public int BuidingTargetRange = 6;
		__this->set_BuidingTargetRange_23(6);
		Character__ctor_mC9E775D49A9CE6DD699D3C59405E734464FDCDC2(__this, /*hidden argument*/NULL);
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
// UnityEngine.GameObject WarriorBuilding::MakeUnitReturn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * WarriorBuilding_MakeUnitReturn_mF2E796019284E7FF1306E3FA1847DAD2E6AD5F0A (WarriorBuilding_t4BA6BADAF2F807D1774E0C44DD7D1FE49A31F306 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PoolManager.poolManager.GetWarrior();
		PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * L_0 = ((PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7_StaticFields*)il2cpp_codegen_static_fields_for(PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7_il2cpp_TypeInfo_var))->get_poolManager_4();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = PoolManager_GetWarrior_m78551160324FD847C4B03474220DD58DD86F565B(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void WarriorBuilding::Upgrade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WarriorBuilding_Upgrade_m02E313758315F2A932A76472F51AB5588682378F (WarriorBuilding_t4BA6BADAF2F807D1774E0C44DD7D1FE49A31F306 * __this, const RuntimeMethod* method)
{
	{
		// public override void Upgrade() { }
		return;
	}
}
// System.Void WarriorBuilding::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WarriorBuilding__ctor_mC18204C723692907E2043F0172F7E3A625265923 (WarriorBuilding_t4BA6BADAF2F807D1774E0C44DD7D1FE49A31F306 * __this, const RuntimeMethod* method)
{
	{
		MakeBuilding__ctor_m8C8B358F785D2DA3DA70894219D55FBA93847475(__this, /*hidden argument*/NULL);
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
// System.Single WarriorHero::get_Skill1CoolTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WarriorHero_get_Skill1CoolTime_mD66C32F4DA06421D13E93CDCD162211F788F5EF9 (WarriorHero_t2FE6F90D6212AB1A498E1249F2F9CCE1406050D9 * __this, const RuntimeMethod* method)
{
	{
		// public float Skill1CoolTime { get { return skill1CoolTime; } set { skill1CoolTime = value; } }
		float L_0 = __this->get_skill1CoolTime_26();
		return L_0;
	}
}
// System.Void WarriorHero::set_Skill1CoolTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WarriorHero_set_Skill1CoolTime_m7838DFC1F02637EB6EF635E5EF4386FF30C8BC40 (WarriorHero_t2FE6F90D6212AB1A498E1249F2F9CCE1406050D9 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float Skill1CoolTime { get { return skill1CoolTime; } set { skill1CoolTime = value; } }
		float L_0 = ___value0;
		__this->set_skill1CoolTime_26(L_0);
		// public float Skill1CoolTime { get { return skill1CoolTime; } set { skill1CoolTime = value; } }
		return;
	}
}
// System.Void WarriorHero::add_WarriorBuff(SkillManager/Buff)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WarriorHero_add_WarriorBuff_m96D999E8A25F87EA5F8DC92F8FAE9BAB7B047D34 (Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WarriorHero_t2FE6F90D6212AB1A498E1249F2F9CCE1406050D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * V_0 = NULL;
	Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * V_1 = NULL;
	Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * V_2 = NULL;
	{
		Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * L_0 = ((WarriorHero_t2FE6F90D6212AB1A498E1249F2F9CCE1406050D9_StaticFields*)il2cpp_codegen_static_fields_for(WarriorHero_t2FE6F90D6212AB1A498E1249F2F9CCE1406050D9_il2cpp_TypeInfo_var))->get_WarriorBuff_32();
		V_0 = L_0;
	}

IL_0006:
	{
		Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * L_1 = V_0;
		V_1 = L_1;
		Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * L_2 = V_1;
		Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 *)CastclassSealed((RuntimeObject*)L_4, Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6_il2cpp_TypeInfo_var));
		Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * L_5 = V_2;
		Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * L_6 = V_1;
		Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 *>((Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 **)(((WarriorHero_t2FE6F90D6212AB1A498E1249F2F9CCE1406050D9_StaticFields*)il2cpp_codegen_static_fields_for(WarriorHero_t2FE6F90D6212AB1A498E1249F2F9CCE1406050D9_il2cpp_TypeInfo_var))->get_address_of_WarriorBuff_32()), L_5, L_6);
		V_0 = L_7;
		Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * L_8 = V_0;
		Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 *)L_8) == ((RuntimeObject*)(Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WarriorHero::remove_WarriorBuff(SkillManager/Buff)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WarriorHero_remove_WarriorBuff_mBCFDA78AEB1F138604245C2B46C8CDF62C51F630 (Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WarriorHero_t2FE6F90D6212AB1A498E1249F2F9CCE1406050D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * V_0 = NULL;
	Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * V_1 = NULL;
	Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * V_2 = NULL;
	{
		Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * L_0 = ((WarriorHero_t2FE6F90D6212AB1A498E1249F2F9CCE1406050D9_StaticFields*)il2cpp_codegen_static_fields_for(WarriorHero_t2FE6F90D6212AB1A498E1249F2F9CCE1406050D9_il2cpp_TypeInfo_var))->get_WarriorBuff_32();
		V_0 = L_0;
	}

IL_0006:
	{
		Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * L_1 = V_0;
		V_1 = L_1;
		Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * L_2 = V_1;
		Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 *)CastclassSealed((RuntimeObject*)L_4, Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6_il2cpp_TypeInfo_var));
		Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * L_5 = V_2;
		Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * L_6 = V_1;
		Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 *>((Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 **)(((WarriorHero_t2FE6F90D6212AB1A498E1249F2F9CCE1406050D9_StaticFields*)il2cpp_codegen_static_fields_for(WarriorHero_t2FE6F90D6212AB1A498E1249F2F9CCE1406050D9_il2cpp_TypeInfo_var))->get_address_of_WarriorBuff_32()), L_5, L_6);
		V_0 = L_7;
		Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * L_8 = V_0;
		Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 *)L_8) == ((RuntimeObject*)(Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Single WarriorHero::get_Skill2CoolTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WarriorHero_get_Skill2CoolTime_m8F831B5BE3445794D659ACDC426FB25233646832 (WarriorHero_t2FE6F90D6212AB1A498E1249F2F9CCE1406050D9 * __this, const RuntimeMethod* method)
{
	{
		// public float Skill2CoolTime { get { return skill2CoolTime; } set { skill2CoolTime = value; } }
		float L_0 = __this->get_skill2CoolTime_33();
		return L_0;
	}
}
// System.Void WarriorHero::set_Skill2CoolTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WarriorHero_set_Skill2CoolTime_m16BB3A9567F5DC081E713898B8D4338965A0722D (WarriorHero_t2FE6F90D6212AB1A498E1249F2F9CCE1406050D9 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float Skill2CoolTime { get { return skill2CoolTime; } set { skill2CoolTime = value; } }
		float L_0 = ___value0;
		__this->set_skill2CoolTime_33(L_0);
		// public float Skill2CoolTime { get { return skill2CoolTime; } set { skill2CoolTime = value; } }
		return;
	}
}
// System.Void WarriorHero::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WarriorHero_Awake_mAF437E825D58C40E3CE43C2F900C5C3C050345E9 (WarriorHero_t2FE6F90D6212AB1A498E1249F2F9CCE1406050D9 * __this, const RuntimeMethod* method)
{
	{
		// prevSkill1CoolTime = skill1CoolTime;
		float L_0 = __this->get_skill1CoolTime_26();
		__this->set_prevSkill1CoolTime_27(L_0);
		// prevSkill1Duration = Skill1Duration;
		float L_1 = __this->get_Skill1Duration_28();
		__this->set_prevSkill1Duration_29(L_1);
		// prevskill1XSpeed = skill1XSpeed;
		float L_2 = __this->get_skill1XSpeed_30();
		__this->set_prevskill1XSpeed_31(L_2);
		// prevSkill2CoolTime = Skill2CoolTime;
		float L_3;
		L_3 = WarriorHero_get_Skill2CoolTime_m8F831B5BE3445794D659ACDC426FB25233646832_inline(__this, /*hidden argument*/NULL);
		__this->set_prevSkill2CoolTime_34(L_3);
		// prevSkill2Damage = Skill2Damage;
		int32_t L_4 = __this->get_Skill2Damage_36();
		__this->set_prevSkill2Damage_37(L_4);
		// base.Awake();
		Character_Awake_mC74EB243B311BCC8D789F0C75169EF2BBB3E6D76(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WarriorHero::AttackTarget(UnityEngine.GameObject[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WarriorHero_AttackTarget_mA17A09614C0E97328A2D70013C93642BD960B004 (WarriorHero_t2FE6F90D6212AB1A498E1249F2F9CCE1406050D9 * __this, GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___Targets0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m269393C54BD0A12D8236C0C4CF64AE91D132C8E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mAECA5070E95CE5C802D5573BC86EDEDEC88E9BDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m61560064357E7BA96F0D31503834ED5AD39BF1D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB7AFB4E0B550927FBF6504243B789E9BDAD32938_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1319FB9221759F3330354B81668E10047A4B1F17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB585AA20C90153194E76F74862FBAD50D70DC9A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5DA9279CEDB27114379436C7D97807EF929ADF45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mAD390AB027224D023EB048D3F7DDC684D69CAF5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t649D2193B2B6C28E89B82247B1D28A30D3548F50  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * V_1 = NULL;
	Enumerator_tDEA9EF7DA04121A1EA4A598DC8A80A7E572E1E4C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// if (Hp <= 0)
		int32_t L_0;
		L_0 = Character_get_Hp_m258775AC8D73AE39E8088098A8EEEC0449CD1C37_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// foreach (Character Unit in TeamManager.teamManager.enemyTeamCharacter(Team))
		TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535 * L_1 = ((TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_StaticFields*)il2cpp_codegen_static_fields_for(TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_il2cpp_TypeInfo_var))->get_teamManager_5();
		int32_t L_2;
		L_2 = Character_get_Team_m7778D19EA7B882EC0979B5CCA0CF0BA9D41ECF5D_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 * L_3;
		L_3 = TeamManager_enemyTeamCharacter_mD94E7B248BD43A76D59DB444873D46917AD8D36B(L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Enumerator_t649D2193B2B6C28E89B82247B1D28A30D3548F50  L_4;
		L_4 = List_1_GetEnumerator_mAD390AB027224D023EB048D3F7DDC684D69CAF5F(L_3, /*hidden argument*/List_1_GetEnumerator_mAD390AB027224D023EB048D3F7DDC684D69CAF5F_RuntimeMethod_var);
		V_0 = L_4;
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0057;
		}

IL_0022:
		{
			// foreach (Character Unit in TeamManager.teamManager.enemyTeamCharacter(Team))
			Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_5;
			L_5 = Enumerator_get_Current_m1319FB9221759F3330354B81668E10047A4B1F17_inline((Enumerator_t649D2193B2B6C28E89B82247B1D28A30D3548F50 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m1319FB9221759F3330354B81668E10047A4B1F17_RuntimeMethod_var);
			V_1 = L_5;
			// if (AttackRangeFucn(Unit.transform, attackAngle, AttackRange))
			Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_6 = V_1;
			NullCheck(L_6);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
			L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_6, /*hidden argument*/NULL);
			float L_8 = __this->get_attackAngle_25();
			int32_t L_9;
			L_9 = Character_get_AttackRange_m8AE154780E830109F962389ED3B0EFB8C73A1653_inline(__this, /*hidden argument*/NULL);
			bool L_10;
			L_10 = Character_AttackRangeFucn_m0D7F2A3327F55F44DA24095F95F6120516FE5543(__this, L_7, L_8, ((float)((float)L_9)), /*hidden argument*/NULL);
			if (!L_10)
			{
				goto IL_0057;
			}
		}

IL_0045:
		{
			// Unit.Damaged(AttackDamage, Team);
			Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_11 = V_1;
			int32_t L_12;
			L_12 = Character_get_AttackDamage_mC9305B6E2C8278E2CBA6961F0946E50A0D41A494_inline(__this, /*hidden argument*/NULL);
			int32_t L_13;
			L_13 = Character_get_Team_m7778D19EA7B882EC0979B5CCA0CF0BA9D41ECF5D_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_11);
			Character_Damaged_mEFF6EFBBE2E05AF8A5F0949722E5BF435E000A63(L_11, L_12, L_13, /*hidden argument*/NULL);
		}

IL_0057:
		{
			// foreach (Character Unit in TeamManager.teamManager.enemyTeamCharacter(Team))
			bool L_14;
			L_14 = Enumerator_MoveNext_m61560064357E7BA96F0D31503834ED5AD39BF1D2((Enumerator_t649D2193B2B6C28E89B82247B1D28A30D3548F50 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m61560064357E7BA96F0D31503834ED5AD39BF1D2_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_0022;
			}
		}

IL_0060:
		{
			IL2CPP_LEAVE(0x70, FINALLY_0062);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0062;
	}

FINALLY_0062:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m269393C54BD0A12D8236C0C4CF64AE91D132C8E8((Enumerator_t649D2193B2B6C28E89B82247B1D28A30D3548F50 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m269393C54BD0A12D8236C0C4CF64AE91D132C8E8_RuntimeMethod_var);
		IL2CPP_END_FINALLY(98)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(98)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x70, IL_0070)
	}

IL_0070:
	{
		// foreach (Building building in TeamManager.teamManager.enemyTeamBuilding(Team))
		TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535 * L_15 = ((TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_StaticFields*)il2cpp_codegen_static_fields_for(TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_il2cpp_TypeInfo_var))->get_teamManager_5();
		int32_t L_16;
		L_16 = Character_get_Team_m7778D19EA7B882EC0979B5CCA0CF0BA9D41ECF5D_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE * L_17;
		L_17 = TeamManager_enemyTeamBuilding_m63FBD1DAB412171C234D2BAD4DCD45DD4BD53918(L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Enumerator_tDEA9EF7DA04121A1EA4A598DC8A80A7E572E1E4C  L_18;
		L_18 = List_1_GetEnumerator_m5DA9279CEDB27114379436C7D97807EF929ADF45(L_17, /*hidden argument*/List_1_GetEnumerator_m5DA9279CEDB27114379436C7D97807EF929ADF45_RuntimeMethod_var);
		V_2 = L_18;
	}

IL_0086:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00bc;
		}

IL_0088:
		{
			// foreach (Building building in TeamManager.teamManager.enemyTeamBuilding(Team))
			Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * L_19;
			L_19 = Enumerator_get_Current_mB585AA20C90153194E76F74862FBAD50D70DC9A0_inline((Enumerator_tDEA9EF7DA04121A1EA4A598DC8A80A7E572E1E4C *)(&V_2), /*hidden argument*/Enumerator_get_Current_mB585AA20C90153194E76F74862FBAD50D70DC9A0_RuntimeMethod_var);
			V_3 = L_19;
			// if (AttackRangeFucn(building.transform, Range: AttackRange))
			Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * L_20 = V_3;
			NullCheck(L_20);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
			L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_20, /*hidden argument*/NULL);
			int32_t L_22;
			L_22 = Character_get_AttackRange_m8AE154780E830109F962389ED3B0EFB8C73A1653_inline(__this, /*hidden argument*/NULL);
			bool L_23;
			L_23 = Character_AttackRangeFucn_m0D7F2A3327F55F44DA24095F95F6120516FE5543(__this, L_21, (90.0f), ((float)((float)L_22)), /*hidden argument*/NULL);
			if (!L_23)
			{
				goto IL_00bc;
			}
		}

IL_00aa:
		{
			// building.Damaged(AttackDamage, Team);
			Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * L_24 = V_3;
			int32_t L_25;
			L_25 = Character_get_AttackDamage_mC9305B6E2C8278E2CBA6961F0946E50A0D41A494_inline(__this, /*hidden argument*/NULL);
			int32_t L_26;
			L_26 = Character_get_Team_m7778D19EA7B882EC0979B5CCA0CF0BA9D41ECF5D_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_24);
			Building_Damaged_m2330CA9221AE802FE67916FA3F535E74AF70D212(L_24, L_25, L_26, /*hidden argument*/NULL);
		}

IL_00bc:
		{
			// foreach (Building building in TeamManager.teamManager.enemyTeamBuilding(Team))
			bool L_27;
			L_27 = Enumerator_MoveNext_mB7AFB4E0B550927FBF6504243B789E9BDAD32938((Enumerator_tDEA9EF7DA04121A1EA4A598DC8A80A7E572E1E4C *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mB7AFB4E0B550927FBF6504243B789E9BDAD32938_RuntimeMethod_var);
			if (L_27)
			{
				goto IL_0088;
			}
		}

IL_00c5:
		{
			IL2CPP_LEAVE(0xD5, FINALLY_00c7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00c7;
	}

FINALLY_00c7:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mAECA5070E95CE5C802D5573BC86EDEDEC88E9BDB((Enumerator_tDEA9EF7DA04121A1EA4A598DC8A80A7E572E1E4C *)(&V_2), /*hidden argument*/Enumerator_Dispose_mAECA5070E95CE5C802D5573BC86EDEDEC88E9BDB_RuntimeMethod_var);
		IL2CPP_END_FINALLY(199)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(199)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xD5, IL_00d5)
	}

IL_00d5:
	{
		// }
		return;
	}
}
// System.Void WarriorHero::Skill1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WarriorHero_Skill1_m5107AC816E276D05A7D9DF1E18F46200E8254ACC (WarriorHero_t2FE6F90D6212AB1A498E1249F2F9CCE1406050D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WarriorHero_t2FE6F90D6212AB1A498E1249F2F9CCE1406050D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Hp <= 0)
		int32_t L_0;
		L_0 = Character_get_Hp_m258775AC8D73AE39E8088098A8EEEC0449CD1C37_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// WarriorBuff(skill1XSpeed, Team, Skill1Duration);
		Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * L_1 = ((WarriorHero_t2FE6F90D6212AB1A498E1249F2F9CCE1406050D9_StaticFields*)il2cpp_codegen_static_fields_for(WarriorHero_t2FE6F90D6212AB1A498E1249F2F9CCE1406050D9_il2cpp_TypeInfo_var))->get_WarriorBuff_32();
		float L_2 = __this->get_skill1XSpeed_30();
		int32_t L_3;
		L_3 = Character_get_Team_m7778D19EA7B882EC0979B5CCA0CF0BA9D41ECF5D_inline(__this, /*hidden argument*/NULL);
		float L_4 = __this->get_Skill1Duration_28();
		NullCheck(L_1);
		Buff_Invoke_m0AD44033D94CEA7BF28028E62E635F3A14534545(L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WarriorHero::Skill2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WarriorHero_Skill2_m5F26B42F62C21A479D6C6BEF66A1FF795980254D (WarriorHero_t2FE6F90D6212AB1A498E1249F2F9CCE1406050D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m269393C54BD0A12D8236C0C4CF64AE91D132C8E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mAECA5070E95CE5C802D5573BC86EDEDEC88E9BDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m61560064357E7BA96F0D31503834ED5AD39BF1D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB7AFB4E0B550927FBF6504243B789E9BDAD32938_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1319FB9221759F3330354B81668E10047A4B1F17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB585AA20C90153194E76F74862FBAD50D70DC9A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5DA9279CEDB27114379436C7D97807EF929ADF45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mAD390AB027224D023EB048D3F7DDC684D69CAF5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t649D2193B2B6C28E89B82247B1D28A30D3548F50  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * V_1 = NULL;
	Enumerator_tDEA9EF7DA04121A1EA4A598DC8A80A7E572E1E4C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// if (Hp <= 0)
		int32_t L_0;
		L_0 = Character_get_Hp_m258775AC8D73AE39E8088098A8EEEC0449CD1C37_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// foreach (Character Unit in TeamManager.teamManager.enemyTeamCharacter(Team))
		TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535 * L_1 = ((TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_StaticFields*)il2cpp_codegen_static_fields_for(TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_il2cpp_TypeInfo_var))->get_teamManager_5();
		int32_t L_2;
		L_2 = Character_get_Team_m7778D19EA7B882EC0979B5CCA0CF0BA9D41ECF5D_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 * L_3;
		L_3 = TeamManager_enemyTeamCharacter_mD94E7B248BD43A76D59DB444873D46917AD8D36B(L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Enumerator_t649D2193B2B6C28E89B82247B1D28A30D3548F50  L_4;
		L_4 = List_1_GetEnumerator_mAD390AB027224D023EB048D3F7DDC684D69CAF5F(L_3, /*hidden argument*/List_1_GetEnumerator_mAD390AB027224D023EB048D3F7DDC684D69CAF5F_RuntimeMethod_var);
		V_0 = L_4;
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0056;
		}

IL_0022:
		{
			// foreach (Character Unit in TeamManager.teamManager.enemyTeamCharacter(Team))
			Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_5;
			L_5 = Enumerator_get_Current_m1319FB9221759F3330354B81668E10047A4B1F17_inline((Enumerator_t649D2193B2B6C28E89B82247B1D28A30D3548F50 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m1319FB9221759F3330354B81668E10047A4B1F17_RuntimeMethod_var);
			V_1 = L_5;
			// if(AttackRangeFucn(Unit.transform , Skill2Angle, Skill2Range))
			Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_6 = V_1;
			NullCheck(L_6);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
			L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_6, /*hidden argument*/NULL);
			float L_8 = __this->get_Skill2Angle_35();
			float L_9 = __this->get_Skill2Range_38();
			bool L_10;
			L_10 = Character_AttackRangeFucn_m0D7F2A3327F55F44DA24095F95F6120516FE5543(__this, L_7, L_8, L_9, /*hidden argument*/NULL);
			if (!L_10)
			{
				goto IL_0056;
			}
		}

IL_0044:
		{
			// Unit.Damaged(Skill2Damage, Team);
			Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_11 = V_1;
			int32_t L_12 = __this->get_Skill2Damage_36();
			int32_t L_13;
			L_13 = Character_get_Team_m7778D19EA7B882EC0979B5CCA0CF0BA9D41ECF5D_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_11);
			Character_Damaged_mEFF6EFBBE2E05AF8A5F0949722E5BF435E000A63(L_11, L_12, L_13, /*hidden argument*/NULL);
		}

IL_0056:
		{
			// foreach (Character Unit in TeamManager.teamManager.enemyTeamCharacter(Team))
			bool L_14;
			L_14 = Enumerator_MoveNext_m61560064357E7BA96F0D31503834ED5AD39BF1D2((Enumerator_t649D2193B2B6C28E89B82247B1D28A30D3548F50 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m61560064357E7BA96F0D31503834ED5AD39BF1D2_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_0022;
			}
		}

IL_005f:
		{
			IL2CPP_LEAVE(0x6F, FINALLY_0061);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0061;
	}

FINALLY_0061:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m269393C54BD0A12D8236C0C4CF64AE91D132C8E8((Enumerator_t649D2193B2B6C28E89B82247B1D28A30D3548F50 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m269393C54BD0A12D8236C0C4CF64AE91D132C8E8_RuntimeMethod_var);
		IL2CPP_END_FINALLY(97)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(97)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6F, IL_006f)
	}

IL_006f:
	{
		// foreach (Building building in TeamManager.teamManager.enemyTeamBuilding(Team))
		TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535 * L_15 = ((TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_StaticFields*)il2cpp_codegen_static_fields_for(TeamManager_t7A26179B10C7982A5F87372B0FD90C603D9A3535_il2cpp_TypeInfo_var))->get_teamManager_5();
		int32_t L_16;
		L_16 = Character_get_Team_m7778D19EA7B882EC0979B5CCA0CF0BA9D41ECF5D_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		List_1_t2439FFB62875657A0F05BF5284C8DEF573EDF9CE * L_17;
		L_17 = TeamManager_enemyTeamBuilding_m63FBD1DAB412171C234D2BAD4DCD45DD4BD53918(L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Enumerator_tDEA9EF7DA04121A1EA4A598DC8A80A7E572E1E4C  L_18;
		L_18 = List_1_GetEnumerator_m5DA9279CEDB27114379436C7D97807EF929ADF45(L_17, /*hidden argument*/List_1_GetEnumerator_m5DA9279CEDB27114379436C7D97807EF929ADF45_RuntimeMethod_var);
		V_2 = L_18;
	}

IL_0085:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00ba;
		}

IL_0087:
		{
			// foreach (Building building in TeamManager.teamManager.enemyTeamBuilding(Team))
			Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * L_19;
			L_19 = Enumerator_get_Current_mB585AA20C90153194E76F74862FBAD50D70DC9A0_inline((Enumerator_tDEA9EF7DA04121A1EA4A598DC8A80A7E572E1E4C *)(&V_2), /*hidden argument*/Enumerator_get_Current_mB585AA20C90153194E76F74862FBAD50D70DC9A0_RuntimeMethod_var);
			V_3 = L_19;
			// if (AttackRangeFucn(building.transform, Range: Skill2Range))
			Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * L_20 = V_3;
			NullCheck(L_20);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
			L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_20, /*hidden argument*/NULL);
			float L_22 = __this->get_Skill2Range_38();
			bool L_23;
			L_23 = Character_AttackRangeFucn_m0D7F2A3327F55F44DA24095F95F6120516FE5543(__this, L_21, (90.0f), L_22, /*hidden argument*/NULL);
			if (!L_23)
			{
				goto IL_00ba;
			}
		}

IL_00a8:
		{
			// building.Damaged(Skill2Damage, Team);
			Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * L_24 = V_3;
			int32_t L_25 = __this->get_Skill2Damage_36();
			int32_t L_26;
			L_26 = Character_get_Team_m7778D19EA7B882EC0979B5CCA0CF0BA9D41ECF5D_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_24);
			Building_Damaged_m2330CA9221AE802FE67916FA3F535E74AF70D212(L_24, L_25, L_26, /*hidden argument*/NULL);
		}

IL_00ba:
		{
			// foreach (Building building in TeamManager.teamManager.enemyTeamBuilding(Team))
			bool L_27;
			L_27 = Enumerator_MoveNext_mB7AFB4E0B550927FBF6504243B789E9BDAD32938((Enumerator_tDEA9EF7DA04121A1EA4A598DC8A80A7E572E1E4C *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mB7AFB4E0B550927FBF6504243B789E9BDAD32938_RuntimeMethod_var);
			if (L_27)
			{
				goto IL_0087;
			}
		}

IL_00c3:
		{
			IL2CPP_LEAVE(0xD3, FINALLY_00c5);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00c5;
	}

FINALLY_00c5:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mAECA5070E95CE5C802D5573BC86EDEDEC88E9BDB((Enumerator_tDEA9EF7DA04121A1EA4A598DC8A80A7E572E1E4C *)(&V_2), /*hidden argument*/Enumerator_Dispose_mAECA5070E95CE5C802D5573BC86EDEDEC88E9BDB_RuntimeMethod_var);
		IL2CPP_END_FINALLY(197)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(197)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xD3, IL_00d3)
	}

IL_00d3:
	{
		// }
		return;
	}
}
// System.Void WarriorHero::UnitSet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WarriorHero_UnitSet_mFCE0BAD7F2B0E38E439890F5ADFC42A94F8CAC4A (WarriorHero_t2FE6F90D6212AB1A498E1249F2F9CCE1406050D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m670A03E313664D645E455FDA1F182BEB40EEE993_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkillManager_t922C3F2076730BE87514F83311A3752C621F7278_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SkillManager.skillManager.heros.Add(this);
		SkillManager_t922C3F2076730BE87514F83311A3752C621F7278 * L_0 = ((SkillManager_t922C3F2076730BE87514F83311A3752C621F7278_StaticFields*)il2cpp_codegen_static_fields_for(SkillManager_t922C3F2076730BE87514F83311A3752C621F7278_il2cpp_TypeInfo_var))->get_skillManager_4();
		NullCheck(L_0);
		List_1_t48B3E647CC87E68B2C20997CA581F218CB4CC664 * L_1 = L_0->get_heros_5();
		NullCheck(L_1);
		List_1_Add_m670A03E313664D645E455FDA1F182BEB40EEE993(L_1, __this, /*hidden argument*/List_1_Add_m670A03E313664D645E455FDA1F182BEB40EEE993_RuntimeMethod_var);
		// base.UnitSet();
		Character_UnitSet_mB8DD65322A8F6F6DB08DB8902DE3B43766AE2BDB(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WarriorHero::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WarriorHero__ctor_m384D5B66135DA026F016B1CF56F5467E3CCA6AAD (WarriorHero_t2FE6F90D6212AB1A498E1249F2F9CCE1406050D9 * __this, const RuntimeMethod* method)
{
	{
		// public float attackAngle=80f;
		__this->set_attackAngle_25((80.0f));
		// public float Skill2Angle = 80f;
		__this->set_Skill2Angle_35((80.0f));
		// public int Skill2Damage = 200;
		__this->set_Skill2Damage_36(((int32_t)200));
		// public float Skill2Range = 5f;
		__this->set_Skill2Range_38((5.0f));
		Warrior__ctor_m8CE6BC20AFE75A67A9BE59BD39B8C637615341FE(__this, /*hidden argument*/NULL);
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
// System.Void AI/<AIState>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAIStateU3Ed__12__ctor_m21A59EA334015D8C1BE609F313A3E89879EC8884 (U3CAIStateU3Ed__12_tD220B377E4D70D3154CA17E2D0B34F0C86A63BE3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void AI/<AIState>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAIStateU3Ed__12_System_IDisposable_Dispose_m8935EF8CEE700CDFCBA2712542F41DAB82B10E24 (U3CAIStateU3Ed__12_tD220B377E4D70D3154CA17E2D0B34F0C86A63BE3 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean AI/<AIState>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAIStateU3Ed__12_MoveNext_m28A912D4F8E5F086371A1EABD0B12D1857DB51EF (U3CAIStateU3Ed__12_tD220B377E4D70D3154CA17E2D0B34F0C86A63BE3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0047;
			}
			case 2:
			{
				goto IL_00f1;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_00c0;
	}

IL_002e:
	{
		// yield return new WaitForSeconds(0.3f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (0.300000012f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0047:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (state == IState.State.Die) //�׾����� ����
		AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = AI_get_state_m41FC2AB65FFBCC9ED3E3FDDDF51CBE1A90393947_inline(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_00cc;
		}
	}
	{
		// if (target == null) // Ÿ���� ������ Ÿ���� �����Ѵ�.
		AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * L_6 = V_1;
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = L_6->get_target_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_7, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_009c;
		}
	}
	{
		// TargetSetting();
		AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * L_9 = V_1;
		NullCheck(L_9);
		VirtActionInvoker0::Invoke(7 /* System.Void AI::TargetSetting() */, L_9);
		// if (target == null) //�����ڿ��� Ÿ���� ������ �� ĳ���Ͱ� ���� �� �̹Ƿ� continue�Ѵ�.
		AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * L_10 = V_1;
		NullCheck(L_10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = L_10->get_target_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_11, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_009c;
		}
	}
	{
		// ani.SetFloat("Speed", 0);
		AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * L_13 = V_1;
		NullCheck(L_13);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_14 = L_13->get_ani_5();
		NullCheck(L_14);
		Animator_SetFloat_mD731F47ED44C2D629F8E1C6DB15629C3E1B992A0(L_14, _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32, (0.0f), /*hidden argument*/NULL);
		// nav.isStopped = true; //Ÿ���� ������ �����.
		AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * L_15 = V_1;
		NullCheck(L_15);
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_16 = L_15->get_nav_4();
		NullCheck(L_16);
		NavMeshAgent_set_isStopped_m3258581121A85B9F8BC02FCC2111B15506A26896(L_16, (bool)1, /*hidden argument*/NULL);
		// continue;
		goto IL_00c0;
	}

IL_009c:
	{
		// StateSet();
		AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * L_17 = V_1;
		NullCheck(L_17);
		AI_StateSet_m4E28A561D30864760C473EE2E3ED1774ED906C23(L_17, /*hidden argument*/NULL);
		// switch (state)
		AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * L_18 = V_1;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = AI_get_state_m41FC2AB65FFBCC9ED3E3FDDDF51CBE1A90393947_inline(L_18, /*hidden argument*/NULL);
		V_2 = L_19;
		int32_t L_20 = V_2;
		if (!L_20)
		{
			goto IL_00b2;
		}
	}
	{
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)1)))
		{
			goto IL_00ba;
		}
	}
	{
		goto IL_00c0;
	}

IL_00b2:
	{
		// Idle();
		AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * L_22 = V_1;
		NullCheck(L_22);
		AI_Idle_m44A7C5EE947ABC8404B870236304149224BD7803(L_22, /*hidden argument*/NULL);
		// break;
		goto IL_00c0;
	}

IL_00ba:
	{
		// AttackState();
		AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * L_23 = V_1;
		NullCheck(L_23);
		AI_AttackState_m62DB51F9EA52894033E44669F600F6728179690A(L_23, /*hidden argument*/NULL);
	}

IL_00c0:
	{
		// while ( state !=IState.State.Die )
		AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * L_24 = V_1;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = AI_get_state_m41FC2AB65FFBCC9ED3E3FDDDF51CBE1A90393947_inline(L_24, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_25) == ((uint32_t)2))))
		{
			goto IL_002e;
		}
	}

IL_00cc:
	{
		// nav.isStopped = true;
		AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * L_26 = V_1;
		NullCheck(L_26);
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_27 = L_26->get_nav_4();
		NullCheck(L_27);
		NavMeshAgent_set_isStopped_m3258581121A85B9F8BC02FCC2111B15506A26896(L_27, (bool)1, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(2f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_28 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_28, (2.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_28);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00f1:
	{
		__this->set_U3CU3E1__state_0((-1));
		// gameObject.SetActive(false);
		AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * L_29 = V_1;
		NullCheck(L_29);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30;
		L_30 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_30, (bool)0, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object AI/<AIState>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAIStateU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3825B5CCAA82B8D2C6420561FE5E9251982F1701 (U3CAIStateU3Ed__12_tD220B377E4D70D3154CA17E2D0B34F0C86A63BE3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void AI/<AIState>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAIStateU3Ed__12_System_Collections_IEnumerator_Reset_m91449508B5EE59AD9A0B35909D869DB4DDFDB64E (U3CAIStateU3Ed__12_tD220B377E4D70D3154CA17E2D0B34F0C86A63BE3 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAIStateU3Ed__12_System_Collections_IEnumerator_Reset_m91449508B5EE59AD9A0B35909D869DB4DDFDB64E_RuntimeMethod_var)));
	}
}
// System.Object AI/<AIState>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAIStateU3Ed__12_System_Collections_IEnumerator_get_Current_m728DB4F95726D1A6F9D77A7B8A0FF2F9A864AE53 (U3CAIStateU3Ed__12_tD220B377E4D70D3154CA17E2D0B34F0C86A63BE3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void AttackBuilding/<AttackTarget>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackTargetU3Ed__13__ctor_mD38B377B72DBEAFBC7D902412B14EF1EA192F23B (U3CAttackTargetU3Ed__13_t28A1D1583ACED10AC092FC6F857F4BCA92D34023 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void AttackBuilding/<AttackTarget>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackTargetU3Ed__13_System_IDisposable_Dispose_mB6BCF615DF28B607FFF230DD6D3C203DD2DAB975 (U3CAttackTargetU3Ed__13_t28A1D1583ACED10AC092FC6F857F4BCA92D34023 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean AttackBuilding/<AttackTarget>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAttackTargetU3Ed__13_MoveNext_mF5C705444F265937F02E74D1FC428C743D66AD0C (U3CAttackTargetU3Ed__13_t28A1D1583ACED10AC092FC6F857F4BCA92D34023 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AttackBuilding_t35CB28B6CDF4EFB4E3A43E9864DB4A2BF03C15C7 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AttackBuilding_t35CB28B6CDF4EFB4E3A43E9864DB4A2BF03C15C7 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_003a;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0058;
	}

IL_0020:
	{
		// yield return new WaitForSeconds(attackCoolTime);
		AttackBuilding_t35CB28B6CDF4EFB4E3A43E9864DB4A2BF03C15C7 * L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->get_attackCoolTime_18();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (Hp <= 0)
		AttackBuilding_t35CB28B6CDF4EFB4E3A43E9864DB4A2BF03C15C7 * L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Building_get_Hp_m02B74A57F2F4BE3D26F4AF5E8D9CF4E9221D2191_inline(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0061;
		}
	}
	{
		// if (work == false)
		AttackBuilding_t35CB28B6CDF4EFB4E3A43E9864DB4A2BF03C15C7 * L_9 = V_1;
		NullCheck(L_9);
		bool L_10 = L_9->get_work_19();
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		// Attack();
		AttackBuilding_t35CB28B6CDF4EFB4E3A43E9864DB4A2BF03C15C7 * L_11 = V_1;
		NullCheck(L_11);
		VirtActionInvoker0::Invoke(19 /* System.Void AttackBuilding::Attack() */, L_11);
	}

IL_0058:
	{
		// while (Hp > 0)
		AttackBuilding_t35CB28B6CDF4EFB4E3A43E9864DB4A2BF03C15C7 * L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = Building_get_Hp_m02B74A57F2F4BE3D26F4AF5E8D9CF4E9221D2191_inline(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) > ((int32_t)0)))
		{
			goto IL_0020;
		}
	}

IL_0061:
	{
		// }
		return (bool)0;
	}
}
// System.Object AttackBuilding/<AttackTarget>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAttackTargetU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m951730DA2CD83F73BAD79316D75BC002A05E0A85 (U3CAttackTargetU3Ed__13_t28A1D1583ACED10AC092FC6F857F4BCA92D34023 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void AttackBuilding/<AttackTarget>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackTargetU3Ed__13_System_Collections_IEnumerator_Reset_mFA462C46E10DFDFBF15FB2D54F868512308D9760 (U3CAttackTargetU3Ed__13_t28A1D1583ACED10AC092FC6F857F4BCA92D34023 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAttackTargetU3Ed__13_System_Collections_IEnumerator_Reset_mFA462C46E10DFDFBF15FB2D54F868512308D9760_RuntimeMethod_var)));
	}
}
// System.Object AttackBuilding/<AttackTarget>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAttackTargetU3Ed__13_System_Collections_IEnumerator_get_Current_m46E12CB44EC82E8C8707B929AB44FF2DB21D00C3 (U3CAttackTargetU3Ed__13_t28A1D1583ACED10AC092FC6F857F4BCA92D34023 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Character/<SpeedUpCoro>d__63::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeedUpCoroU3Ed__63__ctor_mE7B8E18F57C89B6A86AC49A2419D3C172C5A0B7B (U3CSpeedUpCoroU3Ed__63_t45326A9F21E161301051820A730C323510A7B31F * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Character/<SpeedUpCoro>d__63::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeedUpCoroU3Ed__63_System_IDisposable_Dispose_m49D205C1500A756710FC13DABF6459DAADF21AC4 (U3CSpeedUpCoroU3Ed__63_t45326A9F21E161301051820A730C323510A7B31F * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Character/<SpeedUpCoro>d__63::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpeedUpCoroU3Ed__63_MoveNext_mF52B72AD20D309E46D655C6C3204E5F5D543FCE8 (U3CSpeedUpCoroU3Ed__63_t45326A9F21E161301051820A730C323510A7B31F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_006d;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (Team == _team)
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Character_get_Team_m7778D19EA7B882EC0979B5CCA0CF0BA9D41ECF5D_inline(L_4, /*hidden argument*/NULL);
		int32_t L_6 = __this->get__team_3();
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_009b;
		}
	}
	{
		// AttackSpeed *= xSpeed;
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_7 = V_1;
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_8 = V_1;
		NullCheck(L_8);
		float L_9;
		L_9 = Character_get_AttackSpeed_m0BFFD203BF86CD75E43C8506EA149319B7F39597_inline(L_8, /*hidden argument*/NULL);
		float L_10 = __this->get_xSpeed_4();
		NullCheck(L_7);
		Character_set_AttackSpeed_mA53BF996F9A6870B654E293B802C469645907378_inline(L_7, ((float)il2cpp_codegen_multiply((float)L_9, (float)L_10)), /*hidden argument*/NULL);
		// Speed *= (int)xSpeed;
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_11 = V_1;
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = Character_get_Speed_mDF65D05479D45DB5079CC2B36A49B92B1C4ED7EA_inline(L_12, /*hidden argument*/NULL);
		float L_14 = __this->get_xSpeed_4();
		NullCheck(L_11);
		Character_set_Speed_mEF6A97E86EDE41EF40ADE9F489BB6BB6B5B7D434_inline(L_11, ((int32_t)il2cpp_codegen_multiply((int32_t)L_13, (int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_14))), /*hidden argument*/NULL);
		// yield return new WaitForSeconds(_duration);
		float L_15 = __this->get__duration_5();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_16 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_16, L_15, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_16);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_006d:
	{
		__this->set_U3CU3E1__state_0((-1));
		// AttackSpeed /= xSpeed;
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_17 = V_1;
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_18 = V_1;
		NullCheck(L_18);
		float L_19;
		L_19 = Character_get_AttackSpeed_m0BFFD203BF86CD75E43C8506EA149319B7F39597_inline(L_18, /*hidden argument*/NULL);
		float L_20 = __this->get_xSpeed_4();
		NullCheck(L_17);
		Character_set_AttackSpeed_mA53BF996F9A6870B654E293B802C469645907378_inline(L_17, ((float)((float)L_19/(float)L_20)), /*hidden argument*/NULL);
		// Speed /= (int)xSpeed;
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_21 = V_1;
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = Character_get_Speed_mDF65D05479D45DB5079CC2B36A49B92B1C4ED7EA_inline(L_22, /*hidden argument*/NULL);
		float L_24 = __this->get_xSpeed_4();
		NullCheck(L_21);
		Character_set_Speed_mEF6A97E86EDE41EF40ADE9F489BB6BB6B5B7D434_inline(L_21, ((int32_t)((int32_t)L_23/(int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_24))), /*hidden argument*/NULL);
	}

IL_009b:
	{
		// }
		return (bool)0;
	}
}
// System.Object Character/<SpeedUpCoro>d__63::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSpeedUpCoroU3Ed__63_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4033CF099D0156BA3EE4B2EB3D504DCEBFAA5EB9 (U3CSpeedUpCoroU3Ed__63_t45326A9F21E161301051820A730C323510A7B31F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Character/<SpeedUpCoro>d__63::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeedUpCoroU3Ed__63_System_Collections_IEnumerator_Reset_m966B16BB64D78957C4FF9D2F42EDA2E8680EBB79 (U3CSpeedUpCoroU3Ed__63_t45326A9F21E161301051820A730C323510A7B31F * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpeedUpCoroU3Ed__63_System_Collections_IEnumerator_Reset_m966B16BB64D78957C4FF9D2F42EDA2E8680EBB79_RuntimeMethod_var)));
	}
}
// System.Object Character/<SpeedUpCoro>d__63::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSpeedUpCoroU3Ed__63_System_Collections_IEnumerator_get_Current_m5E815746CC199F6EC8027DCDF6537C465C57A668 (U3CSpeedUpCoroU3Ed__63_t45326A9F21E161301051820A730C323510A7B31F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void LevelManager/<Enemybuilding2Set>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnemybuilding2SetU3Ed__8__ctor_m9B594E70D55B1975E6D22E2F864BCE0090D0E4FA (U3CEnemybuilding2SetU3Ed__8_t17E56F4A18DD4E1399A799ADD9F1D148CD114BE1 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void LevelManager/<Enemybuilding2Set>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnemybuilding2SetU3Ed__8_System_IDisposable_Dispose_m993EA6E56F3D5281CE040B83AAC045B1E4D54BE4 (U3CEnemybuilding2SetU3Ed__8_t17E56F4A18DD4E1399A799ADD9F1D148CD114BE1 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean LevelManager/<Enemybuilding2Set>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnemybuilding2SetU3Ed__8_MoveNext_m8185BA7EC894D0F26866AF261D2CDE0981F5785B (U3CEnemybuilding2SetU3Ed__8_t17E56F4A18DD4E1399A799ADD9F1D148CD114BE1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54A6C1853715D8D2E934ADA7D072FF2F65EFCB8B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0042;
			}
			case 2:
			{
				goto IL_0082;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0042:
	{
		__this->set_U3CU3E1__state_0((-1));
		// enemyTeam2.transform.Find("Castle").gameObject.SetActive(true);
		LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * L_4 = V_1;
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_4->get_enemyTeam2_7();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_6, _stringLiteral54A6C1853715D8D2E934ADA7D072FF2F65EFCB8B, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)1, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_9 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_9, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_9);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0082:
	{
		__this->set_U3CU3E1__state_0((-1));
		// enemyTeam2.transform.Find(level).gameObject.SetActive(true);
		LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * L_10 = V_1;
		NullCheck(L_10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = L_10->get_enemyTeam2_7();
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_11, /*hidden argument*/NULL);
		String_t* L_13 = __this->get_level_3();
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15;
		L_15 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_15, (bool)1, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object LevelManager/<Enemybuilding2Set>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CEnemybuilding2SetU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA4CA5B3722852E22BB972A555265E175A67F43CE (U3CEnemybuilding2SetU3Ed__8_t17E56F4A18DD4E1399A799ADD9F1D148CD114BE1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void LevelManager/<Enemybuilding2Set>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnemybuilding2SetU3Ed__8_System_Collections_IEnumerator_Reset_mB1CD9CF5CB9E01ABEB645D3F7352A1FC52A18163 (U3CEnemybuilding2SetU3Ed__8_t17E56F4A18DD4E1399A799ADD9F1D148CD114BE1 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEnemybuilding2SetU3Ed__8_System_Collections_IEnumerator_Reset_mB1CD9CF5CB9E01ABEB645D3F7352A1FC52A18163_RuntimeMethod_var)));
	}
}
// System.Object LevelManager/<Enemybuilding2Set>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CEnemybuilding2SetU3Ed__8_System_Collections_IEnumerator_get_Current_mB05611C798D2632069DE7FE2C935222B674E93A8 (U3CEnemybuilding2SetU3Ed__8_t17E56F4A18DD4E1399A799ADD9F1D148CD114BE1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void LevelManager/<EnemybuildingSet>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnemybuildingSetU3Ed__7__ctor_m30D09CEE1B83CAC7D87C2305A951943590AA4788 (U3CEnemybuildingSetU3Ed__7_t20A60B7D3B834C10E98F383200134D5E79A02AB4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void LevelManager/<EnemybuildingSet>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnemybuildingSetU3Ed__7_System_IDisposable_Dispose_m9C6B673A13DEBDA4BA3A4E1709846304783B4FE4 (U3CEnemybuildingSetU3Ed__7_t20A60B7D3B834C10E98F383200134D5E79A02AB4 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean LevelManager/<EnemybuildingSet>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnemybuildingSetU3Ed__7_MoveNext_mF704EF0A740C2EC16D9DC414AEEA6C5261A87366 (U3CEnemybuildingSetU3Ed__7_t20A60B7D3B834C10E98F383200134D5E79A02AB4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54A6C1853715D8D2E934ADA7D072FF2F65EFCB8B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0042;
			}
			case 2:
			{
				goto IL_0082;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0042:
	{
		__this->set_U3CU3E1__state_0((-1));
		// enemyTeam1.transform.Find("Castle").gameObject.SetActive(true);
		LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * L_4 = V_1;
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_4->get_enemyTeam1_6();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_6, _stringLiteral54A6C1853715D8D2E934ADA7D072FF2F65EFCB8B, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)1, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_9 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_9, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_9);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0082:
	{
		__this->set_U3CU3E1__state_0((-1));
		// enemyTeam1.transform.Find(level).gameObject.SetActive(true);
		LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * L_10 = V_1;
		NullCheck(L_10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = L_10->get_enemyTeam1_6();
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_11, /*hidden argument*/NULL);
		String_t* L_13 = __this->get_level_3();
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15;
		L_15 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_15, (bool)1, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object LevelManager/<EnemybuildingSet>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CEnemybuildingSetU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8C9E621992C70391C4F009EC2C6458C574593E00 (U3CEnemybuildingSetU3Ed__7_t20A60B7D3B834C10E98F383200134D5E79A02AB4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void LevelManager/<EnemybuildingSet>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnemybuildingSetU3Ed__7_System_Collections_IEnumerator_Reset_mAB85AA6B45FB0C653B17B0434AEE16A075AB04B2 (U3CEnemybuildingSetU3Ed__7_t20A60B7D3B834C10E98F383200134D5E79A02AB4 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEnemybuildingSetU3Ed__7_System_Collections_IEnumerator_Reset_mAB85AA6B45FB0C653B17B0434AEE16A075AB04B2_RuntimeMethod_var)));
	}
}
// System.Object LevelManager/<EnemybuildingSet>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CEnemybuildingSetU3Ed__7_System_Collections_IEnumerator_get_Current_mA96D2420A305B8741D1C19BC222CD309CB364DD2 (U3CEnemybuildingSetU3Ed__7_t20A60B7D3B834C10E98F383200134D5E79A02AB4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void LevelManager/<MybuildingSet>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMybuildingSetU3Ed__6__ctor_mED934C759D778C779F4007703763B87DEC733215 (U3CMybuildingSetU3Ed__6_t825B2195F8CA034AB14A2A33E75296F67E232F9B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void LevelManager/<MybuildingSet>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMybuildingSetU3Ed__6_System_IDisposable_Dispose_mF037AE8D668CDBCE3C66AACF513F29F325FDF75F (U3CMybuildingSetU3Ed__6_t825B2195F8CA034AB14A2A33E75296F67E232F9B * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean LevelManager/<MybuildingSet>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMybuildingSetU3Ed__6_MoveNext_m1FAE0FA201F935B166FD394CCAD966E11DA49C61 (U3CMybuildingSetU3Ed__6_t825B2195F8CA034AB14A2A33E75296F67E232F9B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CCDE1B3CB1052EFA6B5174A8A67F30A4F9F1CBC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54A6C1853715D8D2E934ADA7D072FF2F65EFCB8B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0042;
			}
			case 2:
			{
				goto IL_0082;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0042:
	{
		__this->set_U3CU3E1__state_0((-1));
		// myTeam.transform.Find("Castle").gameObject.SetActive(true);
		LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * L_4 = V_1;
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_4->get_myTeam_5();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_6, _stringLiteral54A6C1853715D8D2E934ADA7D072FF2F65EFCB8B, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)1, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_9 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_9, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_9);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0082:
	{
		__this->set_U3CU3E1__state_0((-1));
		// myTeam.transform.Find("Building").gameObject.SetActive(true);
		LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * L_10 = V_1;
		NullCheck(L_10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = L_10->get_myTeam_5();
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_12, _stringLiteral2CCDE1B3CB1052EFA6B5174A8A67F30A4F9F1CBC, /*hidden argument*/NULL);
		NullCheck(L_13);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_14, (bool)1, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object LevelManager/<MybuildingSet>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMybuildingSetU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAAE8E29050B0F0E58CC563AF23EEE0A86AFC51A0 (U3CMybuildingSetU3Ed__6_t825B2195F8CA034AB14A2A33E75296F67E232F9B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void LevelManager/<MybuildingSet>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMybuildingSetU3Ed__6_System_Collections_IEnumerator_Reset_m1610369C052AC3C9DFA3304A20B0F0C31097535A (U3CMybuildingSetU3Ed__6_t825B2195F8CA034AB14A2A33E75296F67E232F9B * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMybuildingSetU3Ed__6_System_Collections_IEnumerator_Reset_m1610369C052AC3C9DFA3304A20B0F0C31097535A_RuntimeMethod_var)));
	}
}
// System.Object LevelManager/<MybuildingSet>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMybuildingSetU3Ed__6_System_Collections_IEnumerator_get_Current_m19A7D5F263E2E8264785B7C5EE7EF0AA0966E6DF (U3CMybuildingSetU3Ed__6_t825B2195F8CA034AB14A2A33E75296F67E232F9B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void MakeBuilding/<MakeUnit>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMakeUnitU3Ed__9__ctor_m33F90E2F03C236375CA8A11B71ACC3A12123FB55 (U3CMakeUnitU3Ed__9_t2F3D2193F6AFC4430320A08AE68D149BD13B8785 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void MakeBuilding/<MakeUnit>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMakeUnitU3Ed__9_System_IDisposable_Dispose_mEBF78D7C8FAEF5BAB8911ABFD5629E5B5412A8A2 (U3CMakeUnitU3Ed__9_t2F3D2193F6AFC4430320A08AE68D149BD13B8785 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean MakeBuilding/<MakeUnit>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMakeUnitU3Ed__9_MoveNext_m4F8A50BBF5A617C87C067A617462507DD9ACBE77 (U3CMakeUnitU3Ed__9_t2F3D2193F6AFC4430320A08AE68D149BD13B8785 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCharacter_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8_mBE9C21DF0A03E3EFD7D08B0754A1BB6D4D94CA78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MakeBuilding_tA7888BB568D7BDF05AF62A24D5F3C03075D9894C * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MakeBuilding_tA7888BB568D7BDF05AF62A24D5F3C03075D9894C * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0048;
			}
			case 2:
			{
				goto IL_00ec;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0106;
	}

IL_002e:
	{
		// yield return new WaitForSeconds(makeCoolTime);
		MakeBuilding_tA7888BB568D7BDF05AF62A24D5F3C03075D9894C * L_3 = V_1;
		NullCheck(L_3);
		float L_4 = L_3->get_makeCoolTime_14();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_5 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_5, L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0048:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (Hp <= 0)
		MakeBuilding_tA7888BB568D7BDF05AF62A24D5F3C03075D9894C * L_6 = V_1;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Building_get_Hp_m02B74A57F2F4BE3D26F4AF5E8D9CF4E9221D2191_inline(L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0112;
		}
	}
	{
		// if (!posibleProduce)
		MakeBuilding_tA7888BB568D7BDF05AF62A24D5F3C03075D9894C * L_8 = V_1;
		NullCheck(L_8);
		bool L_9 = L_8->get_posibleProduce_16();
		if (!L_9)
		{
			goto IL_0106;
		}
	}
	{
		// GameObject Unit = MakeUnitReturn();
		MakeBuilding_tA7888BB568D7BDF05AF62A24D5F3C03075D9894C * L_10 = V_1;
		NullCheck(L_10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = VirtFuncInvoker0< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(18 /* UnityEngine.GameObject MakeBuilding::MakeUnitReturn() */, L_10);
		__this->set_U3CUnitU3E5__2_3(L_11);
		// Unit.transform.position = transform.position + transform.forward * 5f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_U3CUnitU3E5__2_3();
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_12, /*hidden argument*/NULL);
		MakeBuilding_tA7888BB568D7BDF05AF62A24D5F3C03075D9894C * L_14 = V_1;
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		MakeBuilding_tA7888BB568D7BDF05AF62A24D5F3C03075D9894C * L_17 = V_1;
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_18, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_19, (5.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_16, L_20, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_13, L_21, /*hidden argument*/NULL);
		// Unit.GetComponent<Character>().Team = Team;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = __this->get_U3CUnitU3E5__2_3();
		NullCheck(L_22);
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_23;
		L_23 = GameObject_GetComponent_TisCharacter_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8_mBE9C21DF0A03E3EFD7D08B0754A1BB6D4D94CA78(L_22, /*hidden argument*/GameObject_GetComponent_TisCharacter_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8_mBE9C21DF0A03E3EFD7D08B0754A1BB6D4D94CA78_RuntimeMethod_var);
		MakeBuilding_tA7888BB568D7BDF05AF62A24D5F3C03075D9894C * L_24 = V_1;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = Building_get_Team_m29511AB7E5D15B834E7D1229493A037B64199BF0_inline(L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		Character_set_Team_mAE79E882A1A3C90442577AE7879B3020D5D82942(L_23, L_25, /*hidden argument*/NULL);
		// Unit.GetComponent<Character>().Level = Level;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = __this->get_U3CUnitU3E5__2_3();
		NullCheck(L_26);
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_27;
		L_27 = GameObject_GetComponent_TisCharacter_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8_mBE9C21DF0A03E3EFD7D08B0754A1BB6D4D94CA78(L_26, /*hidden argument*/GameObject_GetComponent_TisCharacter_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8_mBE9C21DF0A03E3EFD7D08B0754A1BB6D4D94CA78_RuntimeMethod_var);
		MakeBuilding_tA7888BB568D7BDF05AF62A24D5F3C03075D9894C * L_28 = V_1;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = Building_get_Level_m7F56EA533DE67D9B163557CB580F66ABA0C418C0_inline(L_28, /*hidden argument*/NULL);
		NullCheck(L_27);
		Character_set_Level_mB0C282123E520DAE512C639830DA8F982489171C_inline(L_27, L_29, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.01f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_30 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_30, (0.00999999978f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_30);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00ec:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Unit.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = __this->get_U3CUnitU3E5__2_3();
		NullCheck(L_31);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_31, (bool)1, /*hidden argument*/NULL);
		// }
		__this->set_U3CUnitU3E5__2_3((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
	}

IL_0106:
	{
		// while (Hp > 0)
		MakeBuilding_tA7888BB568D7BDF05AF62A24D5F3C03075D9894C * L_32 = V_1;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = Building_get_Hp_m02B74A57F2F4BE3D26F4AF5E8D9CF4E9221D2191_inline(L_32, /*hidden argument*/NULL);
		if ((((int32_t)L_33) > ((int32_t)0)))
		{
			goto IL_002e;
		}
	}

IL_0112:
	{
		// } //������ ����� �Լ�
		return (bool)0;
	}
}
// System.Object MakeBuilding/<MakeUnit>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMakeUnitU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7F1F7981DBDA84B1A0EC0A3195532D3568D3EEB1 (U3CMakeUnitU3Ed__9_t2F3D2193F6AFC4430320A08AE68D149BD13B8785 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void MakeBuilding/<MakeUnit>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMakeUnitU3Ed__9_System_Collections_IEnumerator_Reset_m340D02DBDEDC6BADB06F2503069D0C9D27128F93 (U3CMakeUnitU3Ed__9_t2F3D2193F6AFC4430320A08AE68D149BD13B8785 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMakeUnitU3Ed__9_System_Collections_IEnumerator_Reset_m340D02DBDEDC6BADB06F2503069D0C9D27128F93_RuntimeMethod_var)));
	}
}
// System.Object MakeBuilding/<MakeUnit>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMakeUnitU3Ed__9_System_Collections_IEnumerator_get_Current_m30CDFBC1476E247109D290226C453E9FC345B762 (U3CMakeUnitU3Ed__9_t2F3D2193F6AFC4430320A08AE68D149BD13B8785 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 (Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * __this, float ___xSpeed0, int32_t ____team1, float ___Duration2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(float, int32_t, float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___xSpeed0, ____team1, ___Duration2);

}
// System.Void SkillManager/Buff::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buff__ctor_m7AF50D5CAE8E64F1299994E67AD0D08CB8062340 (Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void SkillManager/Buff::Invoke(System.Single,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buff_Invoke_m0AD44033D94CEA7BF28028E62E635F3A14534545 (Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * __this, float ___xSpeed0, int32_t ____team1, float ___Duration2, const RuntimeMethod* method)
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
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (float, int32_t, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___xSpeed0, ____team1, ___Duration2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, float, int32_t, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___xSpeed0, ____team1, ___Duration2, targetMethod);
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
						GenericInterfaceActionInvoker3< float, int32_t, float >::Invoke(targetMethod, targetThis, ___xSpeed0, ____team1, ___Duration2);
					else
						GenericVirtActionInvoker3< float, int32_t, float >::Invoke(targetMethod, targetThis, ___xSpeed0, ____team1, ___Duration2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< float, int32_t, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___xSpeed0, ____team1, ___Duration2);
					else
						VirtActionInvoker3< float, int32_t, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___xSpeed0, ____team1, ___Duration2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, float, int32_t, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___xSpeed0, ____team1, ___Duration2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult SkillManager/Buff::BeginInvoke(System.Single,System.Int32,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Buff_BeginInvoke_m996F11481720F2CC01A9F26E26114A4F9ACC1FB2 (Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * __this, float ___xSpeed0, int32_t ____team1, float ___Duration2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___xSpeed0);
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &____team1);
	__d_args[2] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___Duration2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void SkillManager/Buff::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buff_EndInvoke_mF81F14A8326A679F4030A7CFDAC8AF579106ACF4 (Buff_t508A257C1CCF9FE66E647AA9B7E0F86D63396AA6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF (BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * __this, bool ___isOn0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___isOn0));

}
// System.Void TeamManager/BuildingWork::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingWork__ctor_m5CBF2FFA795D08102E89B356A2F206351D147CEF (BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void TeamManager/BuildingWork::Invoke(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingWork_Invoke_m0A2231524F9EA584E4DB5E2FBD7D0546F46BE316 (BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * __this, bool ___isOn0, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___isOn0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___isOn0, targetMethod);
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
						GenericInterfaceActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___isOn0);
					else
						GenericVirtActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___isOn0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___isOn0);
					else
						VirtActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___isOn0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___isOn0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult TeamManager/BuildingWork::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BuildingWork_BeginInvoke_m3A3B8B5B11263DD507E7726575EB09F352032194 (BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * __this, bool ___isOn0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___isOn0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void TeamManager/BuildingWork::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingWork_EndInvoke_m60AE145623E7370099D9B7D0F4652DED344EE0AF (BuildingWork_t11D4F8EFE886A4F3D56725A0279083D23C36D3BF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AI_set_state_mFC708276BB1FD713B9E3D9CD1E9ECD39F61F2414_inline (AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public IState.State state { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CstateU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Character_get_AttackRange_m8AE154780E830109F962389ED3B0EFB8C73A1653_inline (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, const RuntimeMethod* method)
{
	{
		// public int AttackRange { get { return attackRange; } set { attackRange = value; } } //���ݹ���
		int32_t L_0 = __this->get_attackRange_18();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Character_get_Team_m7778D19EA7B882EC0979B5CCA0CF0BA9D41ECF5D_inline (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, const RuntimeMethod* method)
{
	{
		// get { return team; }
		int32_t L_0 = __this->get_team_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Character_get_Hp_m258775AC8D73AE39E8088098A8EEEC0449CD1C37_inline (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, const RuntimeMethod* method)
{
	{
		// public int Hp { get { return hp; } set { hp = value; } }//ü��
		int32_t L_0 = __this->get_hp_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Building_get_Team_m29511AB7E5D15B834E7D1229493A037B64199BF0_inline (Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * __this, const RuntimeMethod* method)
{
	{
		// public int Team { get { return team; } set { team = value; SetTeamColor(); } } //������, ������, ���̾��
		int32_t L_0 = __this->get_team_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Building_get_Hp_m02B74A57F2F4BE3D26F4AF5E8D9CF4E9221D2191_inline (Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * __this, const RuntimeMethod* method)
{
	{
		// public int Hp { get { return hp; } set { hp = value; } }//ü��
		int32_t L_0 = __this->get_hp_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Character_get_Speed_mDF65D05479D45DB5079CC2B36A49B92B1C4ED7EA_inline (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, const RuntimeMethod* method)
{
	{
		// public int Speed { get { return speed; } set { speed = value;} } //�̵��ӵ�
		int32_t L_0 = __this->get_speed_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Character_get_AttackSpeed_m0BFFD203BF86CD75E43C8506EA149319B7F39597_inline (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, const RuntimeMethod* method)
{
	{
		// public float AttackSpeed { get { return attackSpeed; } set { attackSpeed = value; } } //���ݼӵ�
		float L_0 = __this->get_attackSpeed_16();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Character_get_AttackDamage_mC9305B6E2C8278E2CBA6961F0946E50A0D41A494_inline (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, const RuntimeMethod* method)
{
	{
		// public int AttackDamage { get { return attackDamage; } set { attackDamage = value; } } //���ݷ�
		int32_t L_0 = __this->get_attackDamage_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ArcherHero_get_Skill2CoolTime_m493DD31AE1658D3BAEEC7BB822BF607CE4001C0D_inline (ArcherHero_tE7562C3518DA3F2A90CDE1B5A445CE2900D74B9A * __this, const RuntimeMethod* method)
{
	{
		// public float Skill2CoolTime { get { return skill2CoolTime; } set { skill2CoolTime = value; } }
		float L_0 = __this->get_skill2CoolTime_31();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Arrow_get_Team_m504EDAC6B76917193980926ADE305F75A5906AB4_inline (Arrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A * __this, const RuntimeMethod* method)
{
	{
		// public int Team { get { return team; }
		int32_t L_0 = __this->get_team_13();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AttackBuilding_get_AttackRange_m48F21C52D55F0C98C1F2065620C9F93BCC3434B3_inline (AttackBuilding_t35CB28B6CDF4EFB4E3A43E9864DB4A2BF03C15C7 * __this, const RuntimeMethod* method)
{
	{
		// public int AttackRange { get { return attackRange; } set { attackRange = value; } } //���ݹ���
		int32_t L_0 = __this->get_attackRange_16();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AttackBuilding_get_AttackDamage_m19C39B40E1E7F21E72A8B034EF73EB46E5907ABB_inline (AttackBuilding_t35CB28B6CDF4EFB4E3A43E9864DB4A2BF03C15C7 * __this, const RuntimeMethod* method)
{
	{
		// public int AttackDamage { get { return attackDamage; } set { attackDamage = value; } } //���ݷ�
		int32_t L_0 = __this->get_attackDamage_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Building_get_Level_m7F56EA533DE67D9B163557CB580F66ABA0C418C0_inline (Building_t28647A44474D4397FA27F4E9D8E6D3EF2EC3C7C5 * __this, const RuntimeMethod* method)
{
	{
		// public int Level { get { return level; } set { level = value; } }
		int32_t L_0 = __this->get_level_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MakeBuilding_get_MakeCoolTime_m7C687EFDF1EC49DCF141A91BC81B8B656A7036DE_inline (MakeBuilding_tA7888BB568D7BDF05AF62A24D5F3C03075D9894C * __this, const RuntimeMethod* method)
{
	{
		// public float MakeCoolTime { get {return makeCoolTime; } set { makeCoolTime = value; } }
		float L_0 = __this->get_makeCoolTime_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Player_get_state_m063E47F7133ED89F2D4A197750EEC364776B6DC8_inline (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// public IState.State state { get; set; }
		int32_t L_0 = __this->get_U3CstateU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_set_state_m0FD3AAAD092E7CE9A6986F4A0418BCD64D422898_inline (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public IState.State state { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CstateU3Ek__BackingField_10(L_0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
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
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)((float)L_1/(float)L_2)), ((float)((float)L_4/(float)L_5)), ((float)((float)L_7/(float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		__this->set_z_4((0.0f));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Character_set_AttackRange_m0463316AED18682C58694BF5821DE0D584B5A40C_inline (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int AttackRange { get { return attackRange; } set { attackRange = value; } } //���ݹ���
		int32_t L_0 = ___value0;
		__this->set_attackRange_18(L_0);
		// public int AttackRange { get { return attackRange; } set { attackRange = value; } } //���ݹ���
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float WarriorHero_get_Skill2CoolTime_m8F831B5BE3445794D659ACDC426FB25233646832_inline (WarriorHero_t2FE6F90D6212AB1A498E1249F2F9CCE1406050D9 * __this, const RuntimeMethod* method)
{
	{
		// public float Skill2CoolTime { get { return skill2CoolTime; } set { skill2CoolTime = value; } }
		float L_0 = __this->get_skill2CoolTime_33();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AI_get_state_m41FC2AB65FFBCC9ED3E3FDDDF51CBE1A90393947_inline (AI_t4A4B38FAB6D716C943E2B4CDA9933AF2FC493B8F * __this, const RuntimeMethod* method)
{
	{
		// public IState.State state { get; set; }
		int32_t L_0 = __this->get_U3CstateU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Character_set_AttackSpeed_mA53BF996F9A6870B654E293B802C469645907378_inline (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float AttackSpeed { get { return attackSpeed; } set { attackSpeed = value; } } //���ݼӵ�
		float L_0 = ___value0;
		__this->set_attackSpeed_16(L_0);
		// public float AttackSpeed { get { return attackSpeed; } set { attackSpeed = value; } } //���ݼӵ�
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Character_set_Speed_mEF6A97E86EDE41EF40ADE9F489BB6BB6B5B7D434_inline (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Speed { get { return speed; } set { speed = value;} } //�̵��ӵ�
		int32_t L_0 = ___value0;
		__this->set_speed_14(L_0);
		// public int Speed { get { return speed; } set { speed = value;} } //�̵��ӵ�
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Character_set_Level_mB0C282123E520DAE512C639830DA8F982489171C_inline (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Level { get { return level; } set { level = value; } }
		int32_t L_0 = ___value0;
		__this->set_level_5(L_0);
		// public int Level { get { return level; } set { level = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Nullable_1_GetValueOrDefault_mD05253A5EFE2AA2575CC36BD681FFB5638B9F560_gshared_inline (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method)
{
	{
		float L_0 = (float)__this->get_value_0();
		return (float)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_gshared_inline (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
