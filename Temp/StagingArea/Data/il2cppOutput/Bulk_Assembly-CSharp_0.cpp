#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// AggressiveCPUPlayer
struct AggressiveCPUPlayer_tBDE793DDA745B385FC729056AF9F131CEEEB9981;
// BaseControl
struct BaseControl_tA80FAE98EF4187F0C02A06E15CA0EBABDF1AA171;
// CameraControl
struct CameraControl_t747F330F97DFEE9545303C2301EE6AF2740E573E;
// DiceControl
struct DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A;
// GameControl
struct GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248;
// GameState
struct GameState_t26C77D92567E12173718C059731CF9EB15949FF1;
// HumanPlayer
struct HumanPlayer_t6448D36C66FD3A6DEFB3ABA99F62999E1241A498;
// JailControl
struct JailControl_tB91171D46728EC0A770E97697349D03D30A694AE;
// MoveControl
struct MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401;
// MoveControl/<RollDice>d__43
struct U3CRollDiceU3Ed__43_t514A39DE6611616314A8018F4CB2DE9DC4BA3891;
// PieceContainerControl
struct PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313;
// PieceContainerControl[]
struct PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51;
// PieceContainerObject
struct PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740;
// PieceContainerObject[]
struct PieceContainerObjectU5BU5D_t04002C7EAC175CFD098187B608736779B7C0338C;
// Player
struct Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873;
// Player/<SelectedPiece>d__10
struct U3CSelectedPieceU3Ed__10_t38BD5B408C9AF6575D183F9FEFCAEFF9CDB992D1;
// Player/<SelectedSpot>d__11
struct U3CSelectedSpotU3Ed__11_tFCDA30F36C6CAFBEE5F6801B22C4D9349F628040;
// PlayerSelectionControl
struct PlayerSelectionControl_tDFC4922DD5B43F4348987D9DC32E99F231A69D78;
// RandomCPUPlayer
struct RandomCPUPlayer_t51F7C1747AF62AD10CC453DAC97741A0607B45B0;
// SimpleCPUPlayer
struct SimpleCPUPlayer_tB953C232605B5C16CC52004A155589235FE7B596;
// SpotControl
struct SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86;
// System.Boolean[]
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.List`1<PieceContainerControl>
struct List_1_t0CB551171B4CABEF84BD812574C218CD745F2C52;
// System.Collections.Generic.List`1<PieceContainerObject>
struct List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226;
// System.Collections.Generic.List`1<System.Int32>[0...,0...]
struct List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MeshRenderer
struct MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4;
// UnityEngine.Sprite
struct Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F;
// UnityEngine.TextGenerator
struct TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.FontData
struct FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739;

extern RuntimeClass* AggressiveCPUPlayer_tBDE793DDA745B385FC729056AF9F131CEEEB9981_il2cpp_TypeInfo_var;
extern RuntimeClass* BaseControl_tA80FAE98EF4187F0C02A06E15CA0EBABDF1AA171_il2cpp_TypeInfo_var;
extern RuntimeClass* BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040_il2cpp_TypeInfo_var;
extern RuntimeClass* Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var;
extern RuntimeClass* GameState_t26C77D92567E12173718C059731CF9EB15949FF1_il2cpp_TypeInfo_var;
extern RuntimeClass* HumanPlayer_t6448D36C66FD3A6DEFB3ABA99F62999E1241A498_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
extern RuntimeClass* JailControl_tB91171D46728EC0A770E97697349D03D30A694AE_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t0CB551171B4CABEF84BD812574C218CD745F2C52_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
extern RuntimeClass* PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51_il2cpp_TypeInfo_var;
extern RuntimeClass* PieceContainerObjectU5BU5D_t04002C7EAC175CFD098187B608736779B7C0338C_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
extern RuntimeClass* RandomCPUPlayer_t51F7C1747AF62AD10CC453DAC97741A0607B45B0_il2cpp_TypeInfo_var;
extern RuntimeClass* SimpleCPUPlayer_tB953C232605B5C16CC52004A155589235FE7B596_il2cpp_TypeInfo_var;
extern RuntimeClass* SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CRollDiceU3Ed__43_t514A39DE6611616314A8018F4CB2DE9DC4BA3891_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CSelectedPieceU3Ed__10_t38BD5B408C9AF6575D183F9FEFCAEFF9CDB992D1_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CSelectedSpotU3Ed__11_tFCDA30F36C6CAFBEE5F6801B22C4D9349F628040_il2cpp_TypeInfo_var;
extern RuntimeClass* WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral077FE9C54ED5ED26FA547F4DED3EF9A9BB066D65;
extern String_t* _stringLiteral0A8B24CAAB147A2B5FE98397ECA6F3E47BFABC31;
extern String_t* _stringLiteral0FD2C76748F7563C39C82E965B0937F0BF55A97F;
extern String_t* _stringLiteral2038BDEC9210202D0D9D74839E3925FF0CD91BA1;
extern String_t* _stringLiteral37619FC13053F82B7CB7DA3D24CEB1598AB6D05C;
extern String_t* _stringLiteral3871C44CEA6A673FC43587B6A2A5C78D106C2ED2;
extern String_t* _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727;
extern String_t* _stringLiteral5BF543A8414335C6A20B6D10CDA1FFF69F86EC3A;
extern String_t* _stringLiteral5C6E98F29683FBA68BB4EA2C2572EAE20DB649D8;
extern String_t* _stringLiteral78C8FBCA74B2D998F287E6059667873A24708652;
extern String_t* _stringLiteral79D761AD64BBCC188AA2537AABB07E94319C017E;
extern String_t* _stringLiteral8BCE33E50EAA5B91493F48F1319DC8B45F38E7D3;
extern String_t* _stringLiteral8C0482C57EFC203278D839A16F3ED1ADF4B6E4F6;
extern String_t* _stringLiteral9C757C6A146852B8EF747675D1BC310DDC71E5C5;
extern String_t* _stringLiteralB406FB57B29FC76F71864FBB37F0238045F84D9D;
extern String_t* _stringLiteralBF93E5CE8BC1228C2585B3F5A368053C9FE8346A;
extern String_t* _stringLiteralC5C5BA59D015EC3E31392896DD74F8FE32234709;
extern String_t* _stringLiteralCBC705775DB6FEFEACF19A1AB792730717A67052;
extern String_t* _stringLiteralCDD6290B6B2860663A3FF7C60CBE70AF640E9C39;
extern String_t* _stringLiteralD3FB54C4AA99015F8753D081CF7CE71A76523E96;
extern String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
extern String_t* _stringLiteralDB7C7387003F64619EA67325579B4C59488FEE65;
extern String_t* _stringLiteralDCC46D764E04310FC106E2E2657503D0AA8BEB66;
extern String_t* _stringLiteralE31663B107B924EB1B3620999DDD56B3E2A6F2E6;
extern String_t* _stringLiteralE61EE8E422A5A84A0A96F467693C427D4FD5961B;
extern String_t* _stringLiteralE7655F75401D985DB042CB36F697728C58AC1ADD;
extern String_t* _stringLiteralE879B0BE0190766AF9D315ADBC46DCD7314F0B3F;
extern String_t* _stringLiteralEB73AD20C8E687DD8CE92723970B0B741D5519AC;
extern String_t* _stringLiteralEBDFBF11C47253D6ABEF02B7C49EFAD27CFFE303;
extern String_t* _stringLiteralF17254F7E3058386B52CD62F9CA1C7C575BA9211;
extern const RuntimeMethod* Component_GetComponentInChildren_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_mC210673BE9A285437FF73A2988A9DBAAF9FE337E_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m4BCA8F337F4B38409E86A82CAAD0E8B0FAD73A9A_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisDiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A_mDB97F259E9DB59D7D2294DA8A522156520D8CA38_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m0C9F007B48F37CD7F09430C3C1B407ACE6213812_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_mBA3B0129DABD8274AF3497CC93E6A2DEA0A23892_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_mDB5F6C444FF08182A17C89BBBE4361D21B22D9C1_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_mE4B284926D2E4102C056748493BDCE45EDCF00A1_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m113E33A615748C69D63D1245F5FD820B4B3D43F7_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m274ED660B6223B4FFCDFE8D7B9F938336F13D8E1_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m5716AD325B321CFD021419D90C0A79E1686F853F_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_mF998290EE501F2F7CA8A67995AAE77B29547C3C8_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2423588CAA3D28740E46D88133E7B22998378380_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m65896A36F23F309356BFD5A230FE9ECAFB54070A_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m88A0089A1A4EEBC3017E2DA569A01C7919B10945_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_mF0DE1937EBF26D34F5E9DFBC22625FB24B00741E_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisDiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A_mA7294B4DDA340D3490D437E1FB38545C36FF114C_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisGameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248_m9FF2D738368C8C59E83F21E2F67C8801B66795FE_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisMoveControl_t61FB98930C721FC56C880750FD267C839C2E4401_mAF69BF76C830F714A0ACFD04D822963962CCE88B_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisPieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740_mEBE6A83435EF657F4C4E1901E2974C48884D6509_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mBAC50AEEACC94DE12B47C6D6A5227051B1C6DE12_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m5D4827E13E6EF65373ACF3260BB3048664B2717A_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m92423B6E35D20B33D4FD89EA94A93D79784337C4_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m94A913D452C8522AD16D2EB42D46016D83D86112_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_mC455BD77767538B1E02BE31A5E915DEE70E7D88C_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_mEA71FAB9784BA98028A2DCE5AD1BACFA52B6BA7D_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Contains_m275CA0DC5737E7EF9DBEAC629F8DE280CFFA96D6_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Contains_mD404D6E44C2171AA3E6D6B6018BAB093F6DD7F35_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m83178F038A7D4A7E9B0731B7D3078EDCF6FFD0EC_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_mAB7898C7CE9AB2E9C46746EE8A59B15F3D0FDC77_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_mD6AC64C64168AED925239A40FD05D6CB30410727_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_mF3F7C6A691B033A8369791D6DDBFE927804CDAB6_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Insert_m7D289E1660E13E8B4B08110336ACC2D4FE341B61_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Remove_mC05369CBB846172964FD487ACC41F6E543298935_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m077452966B5850AC891DA08DC799A8C50E03D7EE_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m70B8A20433AEEDEB942CD3EEC229497AB693E9D6_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_mE8F1273D4966F545C67F80329001C3B6D3064EAC_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m0C31F7C9173DD07B725516D783DFB61620B590EF_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m7984BA6C664D8EAE284C168D0568FE2B9136A033_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m44957D0808C9611F1153F47A4ADAEAB5E45F1154_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_mB62D52423AF52EEC13B4317DD86E6A5BBDF41BD2_RuntimeMethod_var;
extern const RuntimeMethod* U3CRollDiceU3Ed__43_System_Collections_IEnumerator_Reset_m1D719939514C36DC240406EE622C32F7C7EC9C1F_RuntimeMethod_var;
extern const RuntimeMethod* U3CSelectedPieceU3Ed__10_System_Collections_IEnumerator_Reset_m34750627EC5A843C6931CB952A3F1147531847E0_RuntimeMethod_var;
extern const RuntimeMethod* U3CSelectedSpotU3Ed__11_System_Collections_IEnumerator_Reset_m5EC3B62B0A68F64601378CC9FDA980DCFC8B3C82_RuntimeMethod_var;
extern const uint32_t AggressiveCPUPlayer_CalculateMove_m1298E0225AE45989969864A8160E48FC3B321F82_MetadataUsageId;
extern const uint32_t AggressiveCPUPlayer_PickPieceOrSpot_m26D651C47FAAA51B7DADFF1F44011B7528464E70_MetadataUsageId;
extern const uint32_t BaseControl_BearingOff_mE095CAF6C658C1332F1158ED5CDE7B4775A5B92E_MetadataUsageId;
extern const uint32_t BaseControl_CalcPossibleMoves_m911BF0ADB8C609A764D905E2B366ADBEDE9B8ECF_MetadataUsageId;
extern const uint32_t BaseControl_CheckAbove_m67FC1EFDA64F4B227F473DF216CB70BDF27ED654_MetadataUsageId;
extern const uint32_t BaseControl_GetPossibleMoves_m7D3139A192333C98789D22F593DACEA5E620F555_MetadataUsageId;
extern const uint32_t BaseControl__ctor_m30135AA5F780B53080E1EC5AA9593CE1293A6DC3_MetadataUsageId;
extern const uint32_t BaseControl__ctor_m470069230D642C2E9C16F7727721E3CBEC649A2E_MetadataUsageId;
extern const uint32_t CameraControl_Update_mDF36AB9C0EF21143B8CB4C8530D657121544CD6D_MetadataUsageId;
extern const uint32_t DiceControl_Start_m7AFB1209438CE7EBA85B09E9C15FDDDF05A1DACE_MetadataUsageId;
extern const uint32_t GameControl_BlankDiceRollDisplays_mC5486A40E237FD1CDFA1EA55A16544CF1112F5A1_MetadataUsageId;
extern const uint32_t GameControl_FindDice_m3AADDCB64CB0CE6352E0C4A281704DF8BC2711C7_MetadataUsageId;
extern const uint32_t GameControl_GetAllSpots_m9321FCE683DCA21668EC75C663AB798029834C4E_MetadataUsageId;
extern const uint32_t GameControl_SetBaseSpots_mAFFF48DA97026BD259DC9AFFDB92D73522833F07_MetadataUsageId;
extern const uint32_t GameControl_SetJailSpots_m97A0994A0ADFEB630B354385CA897B18D23F6F47_MetadataUsageId;
extern const uint32_t GameControl_SwitchTurns_mB5DB02B8B5D0D52835996DFC60BE6D3D076D6380_MetadataUsageId;
extern const uint32_t GameControl_Update_mE5B4D50121676A73EF376E1FF1BA5903DCCCCF02_MetadataUsageId;
extern const uint32_t GameState_GetNumOpponentsInJail_mF7D0B70199FE317645897A1CE537E744067308D1_MetadataUsageId;
extern const uint32_t GameState_MakeMove_m24F6C2551DFCED28DA0D08C865CCEEADC6929F22_MetadataUsageId;
extern const uint32_t GameState_UndoLastMove_m2F456E6E61C8542A580E3880417D513C8505571D_MetadataUsageId;
extern const uint32_t GameState__ctor_mDA02CC179CF6995410F44B4BCEEAD2BCFF5EE062_MetadataUsageId;
extern const uint32_t HumanPlayer_PickPieceOrSpot_mCE65EBFC2D47EABF970791B906D062BCCD355D93_MetadataUsageId;
extern const uint32_t JailControl_CalcPossibleMoves_mED2F3DD3143B4D134FC10CA37B7282B643F00E42_MetadataUsageId;
extern const uint32_t JailControl_GetPossibleMoves_m472408EFD5071022538E61CF653AE22D0507400D_MetadataUsageId;
extern const uint32_t JailControl__ctor_m59F6E56058E8FBBC7E637DAE39816D667C74B1D4_MetadataUsageId;
extern const uint32_t JailControl__ctor_m7D87CBA6AF7F7472EE890079EC67633EE00D57C4_MetadataUsageId;
extern const uint32_t MoveControl_GetAvailableSpots_mC1E766807D7E189A557CF0A2DEA9D8F3C6CFB740_MetadataUsageId;
extern const uint32_t MoveControl_GetNumAvailable_m2AC170C4F83EEDF65768B2ED70F9A4ED24A4B417_MetadataUsageId;
extern const uint32_t MoveControl_PickingFromJail_m901F3B16893EFC198B47031889655F03CB171A97_MetadataUsageId;
extern const uint32_t MoveControl_RollDice_m5CA0045C2643BD5A22020689083A70C9D7AB46A5_MetadataUsageId;
extern const uint32_t MoveControl_SelectFirstMove_m4B43D38DC0A36FEE6B7D2FAF38B1E9AF057262CA_MetadataUsageId;
extern const uint32_t MoveControl_SelectFirstSpot_mE4AF031F7958B630BE469C1C15C1ED1E16EE6457_MetadataUsageId;
extern const uint32_t MoveControl_SelectMove_m876440D568B9B4A54DCFE586D8F75FAC5117EBB8_MetadataUsageId;
extern const uint32_t MoveControl_SelectNextMove_mFFE4350A74AE9DE5A37313F49B66D0D109723785_MetadataUsageId;
extern const uint32_t MoveControl_SelectNextSpot_m7ED64A857875FA5E14F881B2505E72FD6E20D358_MetadataUsageId;
extern const uint32_t MoveControl_SelectPiece_m0393DE8C62C80286EB7F4334DDFB67CFA59FC92F_MetadataUsageId;
extern const uint32_t MoveControl_SetAvailableLists_mA8EB1A2A28AD3D5AD3F62783239D1180BC0D6691_MetadataUsageId;
extern const uint32_t MoveControl_SetAvailableMoves_mFAE5AB39D16ADE9C818BBB9A4A5953F24DE640B9_MetadataUsageId;
extern const uint32_t MoveControl_SetInitialLocation_mA74441CD66879E56C07F20F1E9D0CB0582F92F53_MetadataUsageId;
extern const uint32_t MoveControl_SetUsedRoll_mC7EDCDE6309C11C4F19CDF4E86A42FBFCAC0071F_MetadataUsageId;
extern const uint32_t MoveControl_Start_m828BD227CE691A94368D9A8177CAF4BCA016C88A_MetadataUsageId;
extern const uint32_t MoveControl_Update_m023F77D4E8B0DB78718AA69567C9FC6E15EE9AEF_MetadataUsageId;
extern const uint32_t MoveControl__ctor_m66FC9B6FD8DAF02711205A0E2FEB34DFA6E98ADF_MetadataUsageId;
extern const uint32_t PieceContainerControl_AddPiece_mA7D75E4F2499BCC1CD5BC616C23010DDF595D5E5_MetadataUsageId;
extern const uint32_t PieceContainerControl_RemovePiece_mEE439CB3E1ED9AEF76E93C5BFE1E7B77F9E28CF5_MetadataUsageId;
extern const uint32_t PieceContainerControl__ctor_mD4344D0526B59AEFC1F00D4521A7572D37FD6742_MetadataUsageId;
extern const uint32_t PieceContainerFactory_GetPieceContainer_m3903C61F41EBACD3D23853AE9F0D408AF3285B88_MetadataUsageId;
extern const uint32_t PieceContainerFactory_GetPieceContainer_m9D4595FDDD7FB2CEB306759CE755BD016722D823_MetadataUsageId;
extern const uint32_t PieceContainerObject_InitializeAllSpotsOnControl_mB135EF5CEC7482685E373C277589C0907B65F5F9_MetadataUsageId;
extern const uint32_t PieceContainerObject_Outline_m31733DE41B7718E396AB1407E80DA126EB5932F0_MetadataUsageId;
extern const uint32_t PieceContainerObject_Start_mE870A955FB9A359FFD7660E6422924E50C5B0164_MetadataUsageId;
extern const uint32_t PieceContainerObject_Update_m6B0A5612831A15DFF806C3C1C9591E088024016C_MetadataUsageId;
extern const uint32_t PlayerFactory_GetPlayer_m97FF956EFDD2208AF1833C4519D09D7F5A53E183_MetadataUsageId;
extern const uint32_t PlayerSelectionControl_Start_mBBEC653B1F5CCC22DB3A1032CB37424564523FF5_MetadataUsageId;
extern const uint32_t PlayerSelectionControl_Update_m4A291AEAF52143CA7CA3CD48C09346D1D92260BC_MetadataUsageId;
extern const uint32_t Player_SelectedPiece_m140C2295FCC24479EB232A20F62A6572476EF2BC_MetadataUsageId;
extern const uint32_t Player_SelectedSpot_mD7BBEEB45769462312B02A821E8D1919488865F1_MetadataUsageId;
extern const uint32_t RandomCPUPlayer_PickPieceOrSpot_mB4600595F4F0FB138F472EDBC2C10EC5B8022A82_MetadataUsageId;
extern const uint32_t SpotControl_AddPiece_m4655C96993E52D927E2DB296A43FCFF060362913_MetadataUsageId;
extern const uint32_t SpotControl_CalcPossibleMoves_m826B37DBC07571A18013CD31E87EB9D946B26FE0_MetadataUsageId;
extern const uint32_t SpotControl_GetPossibleMoves_m93652622D4FB910A909113C44D86B0FD11FF914A_MetadataUsageId;
extern const uint32_t SpotControl_InitializeOtherPieceContainerControls_m812745CC816273E29158E3E7FADAFC4CF6A7FEF3_MetadataUsageId;
extern const uint32_t SpotControl_RemovePiece_mDE3818C6B2B45DB4FD4F86488D1CC2B7437FE83A_MetadataUsageId;
extern const uint32_t SpotControl_SetControlledVariables_m9BE1609DC644A479FABBFA4365877A490FF390FA_MetadataUsageId;
extern const uint32_t SpotControl_Start_m2B2F284F658918605818C853BDB2F82E57AA2840_MetadataUsageId;
extern const uint32_t SpotControl__ctor_m2BA36A175BD88743D6E1C49BA3460A84740AB7EC_MetadataUsageId;
extern const uint32_t SpotControl__ctor_m98F34514ADC10157E25A9C1844DDF75F8CA74FDD_MetadataUsageId;
extern const uint32_t U3CRollDiceU3Ed__43_MoveNext_mA68879F9891DFA1FC6793B8C99386B579EB5B8AC_MetadataUsageId;
extern const uint32_t U3CRollDiceU3Ed__43_System_Collections_IEnumerator_Reset_m1D719939514C36DC240406EE622C32F7C7EC9C1F_MetadataUsageId;
extern const uint32_t U3CSelectedPieceU3Ed__10_MoveNext_mC67A13222BB1A9A0D3F4C54522D54F29FF1063E6_MetadataUsageId;
extern const uint32_t U3CSelectedPieceU3Ed__10_System_Collections_IEnumerator_Reset_m34750627EC5A843C6931CB952A3F1147531847E0_MetadataUsageId;
extern const uint32_t U3CSelectedSpotU3Ed__11_MoveNext_m2AC33E5AF3B898A1DC380D4E8C90FDF9F60E652E_MetadataUsageId;
extern const uint32_t U3CSelectedSpotU3Ed__11_System_Collections_IEnumerator_Reset_m5EC3B62B0A68F64601378CC9FDA980DCFC8B3C82_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51;
struct PieceContainerObjectU5BU5D_t04002C7EAC175CFD098187B608736779B7C0338C;
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040;
struct List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;


#ifndef U3CMODULEU3E_T6CDDDF959E7E18A6744E43B613F41CDAC780256A_H
#define U3CMODULEU3E_T6CDDDF959E7E18A6744E43B613F41CDAC780256A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6CDDDF959E7E18A6744E43B613F41CDAC780256A 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T6CDDDF959E7E18A6744E43B613F41CDAC780256A_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef GAMESTATE_T26C77D92567E12173718C059731CF9EB15949FF1_H
#define GAMESTATE_T26C77D92567E12173718C059731CF9EB15949FF1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameState
struct  GameState_t26C77D92567E12173718C059731CF9EB15949FF1  : public RuntimeObject
{
public:
	// PieceContainerControl[] GameState::allSpots
	PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* ___allSpots_0;
	// PieceContainerControl GameState::blackJail
	PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * ___blackJail_1;
	// PieceContainerControl GameState::whiteJail
	PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * ___whiteJail_2;
	// PieceContainerControl GameState::blackBase
	PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * ___blackBase_3;
	// PieceContainerControl GameState::whiteBase
	PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * ___whiteBase_4;

public:
	inline static int32_t get_offset_of_allSpots_0() { return static_cast<int32_t>(offsetof(GameState_t26C77D92567E12173718C059731CF9EB15949FF1, ___allSpots_0)); }
	inline PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* get_allSpots_0() const { return ___allSpots_0; }
	inline PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51** get_address_of_allSpots_0() { return &___allSpots_0; }
	inline void set_allSpots_0(PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* value)
	{
		___allSpots_0 = value;
		Il2CppCodeGenWriteBarrier((&___allSpots_0), value);
	}

	inline static int32_t get_offset_of_blackJail_1() { return static_cast<int32_t>(offsetof(GameState_t26C77D92567E12173718C059731CF9EB15949FF1, ___blackJail_1)); }
	inline PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * get_blackJail_1() const { return ___blackJail_1; }
	inline PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 ** get_address_of_blackJail_1() { return &___blackJail_1; }
	inline void set_blackJail_1(PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * value)
	{
		___blackJail_1 = value;
		Il2CppCodeGenWriteBarrier((&___blackJail_1), value);
	}

	inline static int32_t get_offset_of_whiteJail_2() { return static_cast<int32_t>(offsetof(GameState_t26C77D92567E12173718C059731CF9EB15949FF1, ___whiteJail_2)); }
	inline PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * get_whiteJail_2() const { return ___whiteJail_2; }
	inline PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 ** get_address_of_whiteJail_2() { return &___whiteJail_2; }
	inline void set_whiteJail_2(PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * value)
	{
		___whiteJail_2 = value;
		Il2CppCodeGenWriteBarrier((&___whiteJail_2), value);
	}

	inline static int32_t get_offset_of_blackBase_3() { return static_cast<int32_t>(offsetof(GameState_t26C77D92567E12173718C059731CF9EB15949FF1, ___blackBase_3)); }
	inline PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * get_blackBase_3() const { return ___blackBase_3; }
	inline PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 ** get_address_of_blackBase_3() { return &___blackBase_3; }
	inline void set_blackBase_3(PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * value)
	{
		___blackBase_3 = value;
		Il2CppCodeGenWriteBarrier((&___blackBase_3), value);
	}

	inline static int32_t get_offset_of_whiteBase_4() { return static_cast<int32_t>(offsetof(GameState_t26C77D92567E12173718C059731CF9EB15949FF1, ___whiteBase_4)); }
	inline PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * get_whiteBase_4() const { return ___whiteBase_4; }
	inline PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 ** get_address_of_whiteBase_4() { return &___whiteBase_4; }
	inline void set_whiteBase_4(PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * value)
	{
		___whiteBase_4 = value;
		Il2CppCodeGenWriteBarrier((&___whiteBase_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMESTATE_T26C77D92567E12173718C059731CF9EB15949FF1_H
#ifndef U3CROLLDICEU3ED__43_T514A39DE6611616314A8018F4CB2DE9DC4BA3891_H
#define U3CROLLDICEU3ED__43_T514A39DE6611616314A8018F4CB2DE9DC4BA3891_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoveControl/<RollDice>d__43
struct  U3CRollDiceU3Ed__43_t514A39DE6611616314A8018F4CB2DE9DC4BA3891  : public RuntimeObject
{
public:
	// System.Int32 MoveControl/<RollDice>d__43::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MoveControl/<RollDice>d__43::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// MoveControl MoveControl/<RollDice>d__43::<>4__this
	MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRollDiceU3Ed__43_t514A39DE6611616314A8018F4CB2DE9DC4BA3891, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRollDiceU3Ed__43_t514A39DE6611616314A8018F4CB2DE9DC4BA3891, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRollDiceU3Ed__43_t514A39DE6611616314A8018F4CB2DE9DC4BA3891, ___U3CU3E4__this_2)); }
	inline MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CROLLDICEU3ED__43_T514A39DE6611616314A8018F4CB2DE9DC4BA3891_H
#ifndef PIECECONTAINERCONTROL_TB1A99C90399608DA760C39AB6E8185F69D941313_H
#define PIECECONTAINERCONTROL_TB1A99C90399608DA760C39AB6E8185F69D941313_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PieceContainerControl
struct  PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313  : public RuntimeObject
{
public:
	// PieceContainerControl[] PieceContainerControl::allSpots
	PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* ___allSpots_0;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> PieceContainerControl::pieces
	List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * ___pieces_1;
	// System.Collections.Generic.List`1<System.Int32> PieceContainerControl::actualPossibleMoves
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___actualPossibleMoves_2;
	// System.Single PieceContainerControl::betweenPieces
	float ___betweenPieces_3;
	// System.Single PieceContainerControl::stackPieces
	float ___stackPieces_4;
	// System.Single PieceContainerControl::y
	float ___y_5;
	// System.Single PieceContainerControl::initialPiece
	float ___initialPiece_6;
	// System.Single PieceContainerControl::z
	float ___z_7;
	// System.Int32 PieceContainerControl::position
	int32_t ___position_8;
	// System.Boolean PieceContainerControl::changed
	bool ___changed_9;
	// System.Boolean PieceContainerControl::isBlack
	bool ___isBlack_10;

public:
	inline static int32_t get_offset_of_allSpots_0() { return static_cast<int32_t>(offsetof(PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313, ___allSpots_0)); }
	inline PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* get_allSpots_0() const { return ___allSpots_0; }
	inline PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51** get_address_of_allSpots_0() { return &___allSpots_0; }
	inline void set_allSpots_0(PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* value)
	{
		___allSpots_0 = value;
		Il2CppCodeGenWriteBarrier((&___allSpots_0), value);
	}

	inline static int32_t get_offset_of_pieces_1() { return static_cast<int32_t>(offsetof(PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313, ___pieces_1)); }
	inline List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * get_pieces_1() const { return ___pieces_1; }
	inline List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 ** get_address_of_pieces_1() { return &___pieces_1; }
	inline void set_pieces_1(List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * value)
	{
		___pieces_1 = value;
		Il2CppCodeGenWriteBarrier((&___pieces_1), value);
	}

	inline static int32_t get_offset_of_actualPossibleMoves_2() { return static_cast<int32_t>(offsetof(PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313, ___actualPossibleMoves_2)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_actualPossibleMoves_2() const { return ___actualPossibleMoves_2; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_actualPossibleMoves_2() { return &___actualPossibleMoves_2; }
	inline void set_actualPossibleMoves_2(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___actualPossibleMoves_2 = value;
		Il2CppCodeGenWriteBarrier((&___actualPossibleMoves_2), value);
	}

	inline static int32_t get_offset_of_betweenPieces_3() { return static_cast<int32_t>(offsetof(PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313, ___betweenPieces_3)); }
	inline float get_betweenPieces_3() const { return ___betweenPieces_3; }
	inline float* get_address_of_betweenPieces_3() { return &___betweenPieces_3; }
	inline void set_betweenPieces_3(float value)
	{
		___betweenPieces_3 = value;
	}

	inline static int32_t get_offset_of_stackPieces_4() { return static_cast<int32_t>(offsetof(PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313, ___stackPieces_4)); }
	inline float get_stackPieces_4() const { return ___stackPieces_4; }
	inline float* get_address_of_stackPieces_4() { return &___stackPieces_4; }
	inline void set_stackPieces_4(float value)
	{
		___stackPieces_4 = value;
	}

	inline static int32_t get_offset_of_y_5() { return static_cast<int32_t>(offsetof(PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313, ___y_5)); }
	inline float get_y_5() const { return ___y_5; }
	inline float* get_address_of_y_5() { return &___y_5; }
	inline void set_y_5(float value)
	{
		___y_5 = value;
	}

	inline static int32_t get_offset_of_initialPiece_6() { return static_cast<int32_t>(offsetof(PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313, ___initialPiece_6)); }
	inline float get_initialPiece_6() const { return ___initialPiece_6; }
	inline float* get_address_of_initialPiece_6() { return &___initialPiece_6; }
	inline void set_initialPiece_6(float value)
	{
		___initialPiece_6 = value;
	}

	inline static int32_t get_offset_of_z_7() { return static_cast<int32_t>(offsetof(PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313, ___z_7)); }
	inline float get_z_7() const { return ___z_7; }
	inline float* get_address_of_z_7() { return &___z_7; }
	inline void set_z_7(float value)
	{
		___z_7 = value;
	}

	inline static int32_t get_offset_of_position_8() { return static_cast<int32_t>(offsetof(PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313, ___position_8)); }
	inline int32_t get_position_8() const { return ___position_8; }
	inline int32_t* get_address_of_position_8() { return &___position_8; }
	inline void set_position_8(int32_t value)
	{
		___position_8 = value;
	}

	inline static int32_t get_offset_of_changed_9() { return static_cast<int32_t>(offsetof(PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313, ___changed_9)); }
	inline bool get_changed_9() const { return ___changed_9; }
	inline bool* get_address_of_changed_9() { return &___changed_9; }
	inline void set_changed_9(bool value)
	{
		___changed_9 = value;
	}

	inline static int32_t get_offset_of_isBlack_10() { return static_cast<int32_t>(offsetof(PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313, ___isBlack_10)); }
	inline bool get_isBlack_10() const { return ___isBlack_10; }
	inline bool* get_address_of_isBlack_10() { return &___isBlack_10; }
	inline void set_isBlack_10(bool value)
	{
		___isBlack_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PIECECONTAINERCONTROL_TB1A99C90399608DA760C39AB6E8185F69D941313_H
#ifndef PIECECONTAINERFACTORY_T2B8A6B73716D44045447E7DBE1A2176B87107786_H
#define PIECECONTAINERFACTORY_T2B8A6B73716D44045447E7DBE1A2176B87107786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PieceContainerFactory
struct  PieceContainerFactory_t2B8A6B73716D44045447E7DBE1A2176B87107786  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PIECECONTAINERFACTORY_T2B8A6B73716D44045447E7DBE1A2176B87107786_H
#ifndef PLAYER_T8321F4671F549F5A7793BB8BA33D32CCCD538873_H
#define PLAYER_T8321F4671F549F5A7793BB8BA33D32CCCD538873_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player
struct  Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873  : public RuntimeObject
{
public:
	// MoveControl Player::moveCont
	MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * ___moveCont_0;
	// System.Boolean Player::pieceSelected
	bool ___pieceSelected_1;
	// System.Boolean Player::listenForPick
	bool ___listenForPick_2;
	// System.Single Player::secondsToWait
	float ___secondsToWait_3;

public:
	inline static int32_t get_offset_of_moveCont_0() { return static_cast<int32_t>(offsetof(Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873, ___moveCont_0)); }
	inline MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * get_moveCont_0() const { return ___moveCont_0; }
	inline MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 ** get_address_of_moveCont_0() { return &___moveCont_0; }
	inline void set_moveCont_0(MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * value)
	{
		___moveCont_0 = value;
		Il2CppCodeGenWriteBarrier((&___moveCont_0), value);
	}

	inline static int32_t get_offset_of_pieceSelected_1() { return static_cast<int32_t>(offsetof(Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873, ___pieceSelected_1)); }
	inline bool get_pieceSelected_1() const { return ___pieceSelected_1; }
	inline bool* get_address_of_pieceSelected_1() { return &___pieceSelected_1; }
	inline void set_pieceSelected_1(bool value)
	{
		___pieceSelected_1 = value;
	}

	inline static int32_t get_offset_of_listenForPick_2() { return static_cast<int32_t>(offsetof(Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873, ___listenForPick_2)); }
	inline bool get_listenForPick_2() const { return ___listenForPick_2; }
	inline bool* get_address_of_listenForPick_2() { return &___listenForPick_2; }
	inline void set_listenForPick_2(bool value)
	{
		___listenForPick_2 = value;
	}

	inline static int32_t get_offset_of_secondsToWait_3() { return static_cast<int32_t>(offsetof(Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873, ___secondsToWait_3)); }
	inline float get_secondsToWait_3() const { return ___secondsToWait_3; }
	inline float* get_address_of_secondsToWait_3() { return &___secondsToWait_3; }
	inline void set_secondsToWait_3(float value)
	{
		___secondsToWait_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYER_T8321F4671F549F5A7793BB8BA33D32CCCD538873_H
#ifndef U3CSELECTEDPIECEU3ED__10_T38BD5B408C9AF6575D183F9FEFCAEFF9CDB992D1_H
#define U3CSELECTEDPIECEU3ED__10_T38BD5B408C9AF6575D183F9FEFCAEFF9CDB992D1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player/<SelectedPiece>d__10
struct  U3CSelectedPieceU3Ed__10_t38BD5B408C9AF6575D183F9FEFCAEFF9CDB992D1  : public RuntimeObject
{
public:
	// System.Int32 Player/<SelectedPiece>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Player/<SelectedPiece>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Player Player/<SelectedPiece>d__10::<>4__this
	Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSelectedPieceU3Ed__10_t38BD5B408C9AF6575D183F9FEFCAEFF9CDB992D1, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSelectedPieceU3Ed__10_t38BD5B408C9AF6575D183F9FEFCAEFF9CDB992D1, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSelectedPieceU3Ed__10_t38BD5B408C9AF6575D183F9FEFCAEFF9CDB992D1, ___U3CU3E4__this_2)); }
	inline Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSELECTEDPIECEU3ED__10_T38BD5B408C9AF6575D183F9FEFCAEFF9CDB992D1_H
#ifndef U3CSELECTEDSPOTU3ED__11_TFCDA30F36C6CAFBEE5F6801B22C4D9349F628040_H
#define U3CSELECTEDSPOTU3ED__11_TFCDA30F36C6CAFBEE5F6801B22C4D9349F628040_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player/<SelectedSpot>d__11
struct  U3CSelectedSpotU3Ed__11_tFCDA30F36C6CAFBEE5F6801B22C4D9349F628040  : public RuntimeObject
{
public:
	// System.Int32 Player/<SelectedSpot>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Player/<SelectedSpot>d__11::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Player Player/<SelectedSpot>d__11::<>4__this
	Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSelectedSpotU3Ed__11_tFCDA30F36C6CAFBEE5F6801B22C4D9349F628040, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSelectedSpotU3Ed__11_tFCDA30F36C6CAFBEE5F6801B22C4D9349F628040, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSelectedSpotU3Ed__11_tFCDA30F36C6CAFBEE5F6801B22C4D9349F628040, ___U3CU3E4__this_2)); }
	inline Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSELECTEDSPOTU3ED__11_TFCDA30F36C6CAFBEE5F6801B22C4D9349F628040_H
#ifndef PLAYERFACTORY_T4060D0C92346A5919AA0C92F85CC3738E674758C_H
#define PLAYERFACTORY_T4060D0C92346A5919AA0C92F85CC3738E674758C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerFactory
struct  PlayerFactory_t4060D0C92346A5919AA0C92F85CC3738E674758C  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERFACTORY_T4060D0C92346A5919AA0C92F85CC3738E674758C_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef LIST_1_T0CB551171B4CABEF84BD812574C218CD745F2C52_H
#define LIST_1_T0CB551171B4CABEF84BD812574C218CD745F2C52_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<PieceContainerControl>
struct  List_1_t0CB551171B4CABEF84BD812574C218CD745F2C52  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t0CB551171B4CABEF84BD812574C218CD745F2C52, ____items_1)); }
	inline PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* get__items_1() const { return ____items_1; }
	inline PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t0CB551171B4CABEF84BD812574C218CD745F2C52, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t0CB551171B4CABEF84BD812574C218CD745F2C52, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t0CB551171B4CABEF84BD812574C218CD745F2C52, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t0CB551171B4CABEF84BD812574C218CD745F2C52_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t0CB551171B4CABEF84BD812574C218CD745F2C52_StaticFields, ____emptyArray_5)); }
	inline PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T0CB551171B4CABEF84BD812574C218CD745F2C52_H
#ifndef LIST_1_T7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29_H
#define LIST_1_T7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<PieceContainerObject>
struct  List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PieceContainerObjectU5BU5D_t04002C7EAC175CFD098187B608736779B7C0338C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29, ____items_1)); }
	inline PieceContainerObjectU5BU5D_t04002C7EAC175CFD098187B608736779B7C0338C* get__items_1() const { return ____items_1; }
	inline PieceContainerObjectU5BU5D_t04002C7EAC175CFD098187B608736779B7C0338C** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PieceContainerObjectU5BU5D_t04002C7EAC175CFD098187B608736779B7C0338C* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PieceContainerObjectU5BU5D_t04002C7EAC175CFD098187B608736779B7C0338C* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29_StaticFields, ____emptyArray_5)); }
	inline PieceContainerObjectU5BU5D_t04002C7EAC175CFD098187B608736779B7C0338C* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PieceContainerObjectU5BU5D_t04002C7EAC175CFD098187B608736779B7C0338C** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PieceContainerObjectU5BU5D_t04002C7EAC175CFD098187B608736779B7C0338C* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29_H
#ifndef LIST_1_TE1526161A558A17A39A8B69D8EEF3801393B6226_H
#define LIST_1_TE1526161A558A17A39A8B69D8EEF3801393B6226_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Int32>
struct  List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____items_1)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_TE1526161A558A17A39A8B69D8EEF3801393B6226_H
#ifndef LIST_1_TBA8D772D87B6502B2A4D0EFE166C846285F50650_H
#define LIST_1_TBA8D772D87B6502B2A4D0EFE166C846285F50650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct  List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650, ____items_1)); }
	inline GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_TBA8D772D87B6502B2A4D0EFE166C846285F50650_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
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
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
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
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
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
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
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
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef CUSTOMYIELDINSTRUCTION_T819BB0973AFF22766749FF087B8AEFEAF3C2CB7D_H
#define CUSTOMYIELDINSTRUCTION_T819BB0973AFF22766749FF087B8AEFEAF3C2CB7D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMYIELDINSTRUCTION_T819BB0973AFF22766749FF087B8AEFEAF3C2CB7D_H
#ifndef YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#define YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#ifndef AGGRESSIVECPUPLAYER_TBDE793DDA745B385FC729056AF9F131CEEEB9981_H
#define AGGRESSIVECPUPLAYER_TBDE793DDA745B385FC729056AF9F131CEEEB9981_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AggressiveCPUPlayer
struct  AggressiveCPUPlayer_tBDE793DDA745B385FC729056AF9F131CEEEB9981  : public Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873
{
public:
	// System.Int32 AggressiveCPUPlayer::selectedSpot
	int32_t ___selectedSpot_4;
	// System.Int32 AggressiveCPUPlayer::selectedMove
	int32_t ___selectedMove_5;
	// System.Int32 AggressiveCPUPlayer::ups
	int32_t ___ups_6;
	// System.Boolean AggressiveCPUPlayer::moveChosen
	bool ___moveChosen_7;

public:
	inline static int32_t get_offset_of_selectedSpot_4() { return static_cast<int32_t>(offsetof(AggressiveCPUPlayer_tBDE793DDA745B385FC729056AF9F131CEEEB9981, ___selectedSpot_4)); }
	inline int32_t get_selectedSpot_4() const { return ___selectedSpot_4; }
	inline int32_t* get_address_of_selectedSpot_4() { return &___selectedSpot_4; }
	inline void set_selectedSpot_4(int32_t value)
	{
		___selectedSpot_4 = value;
	}

	inline static int32_t get_offset_of_selectedMove_5() { return static_cast<int32_t>(offsetof(AggressiveCPUPlayer_tBDE793DDA745B385FC729056AF9F131CEEEB9981, ___selectedMove_5)); }
	inline int32_t get_selectedMove_5() const { return ___selectedMove_5; }
	inline int32_t* get_address_of_selectedMove_5() { return &___selectedMove_5; }
	inline void set_selectedMove_5(int32_t value)
	{
		___selectedMove_5 = value;
	}

	inline static int32_t get_offset_of_ups_6() { return static_cast<int32_t>(offsetof(AggressiveCPUPlayer_tBDE793DDA745B385FC729056AF9F131CEEEB9981, ___ups_6)); }
	inline int32_t get_ups_6() const { return ___ups_6; }
	inline int32_t* get_address_of_ups_6() { return &___ups_6; }
	inline void set_ups_6(int32_t value)
	{
		___ups_6 = value;
	}

	inline static int32_t get_offset_of_moveChosen_7() { return static_cast<int32_t>(offsetof(AggressiveCPUPlayer_tBDE793DDA745B385FC729056AF9F131CEEEB9981, ___moveChosen_7)); }
	inline bool get_moveChosen_7() const { return ___moveChosen_7; }
	inline bool* get_address_of_moveChosen_7() { return &___moveChosen_7; }
	inline void set_moveChosen_7(bool value)
	{
		___moveChosen_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AGGRESSIVECPUPLAYER_TBDE793DDA745B385FC729056AF9F131CEEEB9981_H
#ifndef BASECONTROL_TA80FAE98EF4187F0C02A06E15CA0EBABDF1AA171_H
#define BASECONTROL_TA80FAE98EF4187F0C02A06E15CA0EBABDF1AA171_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BaseControl
struct  BaseControl_tA80FAE98EF4187F0C02A06E15CA0EBABDF1AA171  : public PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313
{
public:
	// System.Collections.Generic.List`1<System.Int32> BaseControl::possibleMoves
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___possibleMoves_11;

public:
	inline static int32_t get_offset_of_possibleMoves_11() { return static_cast<int32_t>(offsetof(BaseControl_tA80FAE98EF4187F0C02A06E15CA0EBABDF1AA171, ___possibleMoves_11)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_possibleMoves_11() const { return ___possibleMoves_11; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_possibleMoves_11() { return &___possibleMoves_11; }
	inline void set_possibleMoves_11(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___possibleMoves_11 = value;
		Il2CppCodeGenWriteBarrier((&___possibleMoves_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASECONTROL_TA80FAE98EF4187F0C02A06E15CA0EBABDF1AA171_H
#ifndef HUMANPLAYER_T6448D36C66FD3A6DEFB3ABA99F62999E1241A498_H
#define HUMANPLAYER_T6448D36C66FD3A6DEFB3ABA99F62999E1241A498_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HumanPlayer
struct  HumanPlayer_t6448D36C66FD3A6DEFB3ABA99F62999E1241A498  : public Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HUMANPLAYER_T6448D36C66FD3A6DEFB3ABA99F62999E1241A498_H
#ifndef JAILCONTROL_TB91171D46728EC0A770E97697349D03D30A694AE_H
#define JAILCONTROL_TB91171D46728EC0A770E97697349D03D30A694AE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// JailControl
struct  JailControl_tB91171D46728EC0A770E97697349D03D30A694AE  : public PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313
{
public:
	// System.Collections.Generic.List`1<System.Int32> JailControl::possibleMoves
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___possibleMoves_11;

public:
	inline static int32_t get_offset_of_possibleMoves_11() { return static_cast<int32_t>(offsetof(JailControl_tB91171D46728EC0A770E97697349D03D30A694AE, ___possibleMoves_11)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_possibleMoves_11() const { return ___possibleMoves_11; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_possibleMoves_11() { return &___possibleMoves_11; }
	inline void set_possibleMoves_11(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___possibleMoves_11 = value;
		Il2CppCodeGenWriteBarrier((&___possibleMoves_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JAILCONTROL_TB91171D46728EC0A770E97697349D03D30A694AE_H
#ifndef RANDOMCPUPLAYER_T51F7C1747AF62AD10CC453DAC97741A0607B45B0_H
#define RANDOMCPUPLAYER_T51F7C1747AF62AD10CC453DAC97741A0607B45B0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RandomCPUPlayer
struct  RandomCPUPlayer_t51F7C1747AF62AD10CC453DAC97741A0607B45B0  : public Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873
{
public:
	// System.Int32 RandomCPUPlayer::rand
	int32_t ___rand_4;

public:
	inline static int32_t get_offset_of_rand_4() { return static_cast<int32_t>(offsetof(RandomCPUPlayer_t51F7C1747AF62AD10CC453DAC97741A0607B45B0, ___rand_4)); }
	inline int32_t get_rand_4() const { return ___rand_4; }
	inline int32_t* get_address_of_rand_4() { return &___rand_4; }
	inline void set_rand_4(int32_t value)
	{
		___rand_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOMCPUPLAYER_T51F7C1747AF62AD10CC453DAC97741A0607B45B0_H
#ifndef SIMPLECPUPLAYER_TB953C232605B5C16CC52004A155589235FE7B596_H
#define SIMPLECPUPLAYER_TB953C232605B5C16CC52004A155589235FE7B596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleCPUPlayer
struct  SimpleCPUPlayer_tB953C232605B5C16CC52004A155589235FE7B596  : public Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLECPUPLAYER_TB953C232605B5C16CC52004A155589235FE7B596_H
#ifndef SPOTCONTROL_T48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86_H
#define SPOTCONTROL_T48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpotControl
struct  SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86  : public PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313
{
public:
	// System.Boolean SpotControl::controlled
	bool ___controlled_11;
	// System.Collections.Generic.List`1<System.Int32>[0...,0...] SpotControl::possibleMovesWhite
	List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2* ___possibleMovesWhite_12;
	// System.Collections.Generic.List`1<System.Int32>[0...,0...] SpotControl::possibleMovesBlack
	List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2* ___possibleMovesBlack_13;
	// PieceContainerControl SpotControl::whiteJailControl
	PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * ___whiteJailControl_14;
	// PieceContainerControl SpotControl::blackJailControl
	PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * ___blackJailControl_15;
	// PieceContainerControl SpotControl::jailControl
	PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * ___jailControl_16;
	// System.Int32 SpotControl::quadrant
	int32_t ___quadrant_17;
	// System.Int32 SpotControl::numInQuadrant
	int32_t ___numInQuadrant_18;

public:
	inline static int32_t get_offset_of_controlled_11() { return static_cast<int32_t>(offsetof(SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86, ___controlled_11)); }
	inline bool get_controlled_11() const { return ___controlled_11; }
	inline bool* get_address_of_controlled_11() { return &___controlled_11; }
	inline void set_controlled_11(bool value)
	{
		___controlled_11 = value;
	}

	inline static int32_t get_offset_of_possibleMovesWhite_12() { return static_cast<int32_t>(offsetof(SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86, ___possibleMovesWhite_12)); }
	inline List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2* get_possibleMovesWhite_12() const { return ___possibleMovesWhite_12; }
	inline List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2** get_address_of_possibleMovesWhite_12() { return &___possibleMovesWhite_12; }
	inline void set_possibleMovesWhite_12(List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2* value)
	{
		___possibleMovesWhite_12 = value;
		Il2CppCodeGenWriteBarrier((&___possibleMovesWhite_12), value);
	}

	inline static int32_t get_offset_of_possibleMovesBlack_13() { return static_cast<int32_t>(offsetof(SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86, ___possibleMovesBlack_13)); }
	inline List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2* get_possibleMovesBlack_13() const { return ___possibleMovesBlack_13; }
	inline List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2** get_address_of_possibleMovesBlack_13() { return &___possibleMovesBlack_13; }
	inline void set_possibleMovesBlack_13(List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2* value)
	{
		___possibleMovesBlack_13 = value;
		Il2CppCodeGenWriteBarrier((&___possibleMovesBlack_13), value);
	}

	inline static int32_t get_offset_of_whiteJailControl_14() { return static_cast<int32_t>(offsetof(SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86, ___whiteJailControl_14)); }
	inline PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * get_whiteJailControl_14() const { return ___whiteJailControl_14; }
	inline PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 ** get_address_of_whiteJailControl_14() { return &___whiteJailControl_14; }
	inline void set_whiteJailControl_14(PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * value)
	{
		___whiteJailControl_14 = value;
		Il2CppCodeGenWriteBarrier((&___whiteJailControl_14), value);
	}

	inline static int32_t get_offset_of_blackJailControl_15() { return static_cast<int32_t>(offsetof(SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86, ___blackJailControl_15)); }
	inline PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * get_blackJailControl_15() const { return ___blackJailControl_15; }
	inline PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 ** get_address_of_blackJailControl_15() { return &___blackJailControl_15; }
	inline void set_blackJailControl_15(PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * value)
	{
		___blackJailControl_15 = value;
		Il2CppCodeGenWriteBarrier((&___blackJailControl_15), value);
	}

	inline static int32_t get_offset_of_jailControl_16() { return static_cast<int32_t>(offsetof(SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86, ___jailControl_16)); }
	inline PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * get_jailControl_16() const { return ___jailControl_16; }
	inline PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 ** get_address_of_jailControl_16() { return &___jailControl_16; }
	inline void set_jailControl_16(PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * value)
	{
		___jailControl_16 = value;
		Il2CppCodeGenWriteBarrier((&___jailControl_16), value);
	}

	inline static int32_t get_offset_of_quadrant_17() { return static_cast<int32_t>(offsetof(SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86, ___quadrant_17)); }
	inline int32_t get_quadrant_17() const { return ___quadrant_17; }
	inline int32_t* get_address_of_quadrant_17() { return &___quadrant_17; }
	inline void set_quadrant_17(int32_t value)
	{
		___quadrant_17 = value;
	}

	inline static int32_t get_offset_of_numInQuadrant_18() { return static_cast<int32_t>(offsetof(SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86, ___numInQuadrant_18)); }
	inline int32_t get_numInQuadrant_18() const { return ___numInQuadrant_18; }
	inline int32_t* get_address_of_numInQuadrant_18() { return &___numInQuadrant_18; }
	inline void set_numInQuadrant_18(int32_t value)
	{
		___numInQuadrant_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPOTCONTROL_T48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#define CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((&___categoryForLatin1_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#ifndef ENUMERATOR_T422BFABDF038794D7A98B5F09879A0938CEFB2EA_H
#define ENUMERATOR_T422BFABDF038794D7A98B5F09879A0938CEFB2EA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<PieceContainerControl>
struct  Enumerator_t422BFABDF038794D7A98B5F09879A0938CEFB2EA 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t0CB551171B4CABEF84BD812574C218CD745F2C52 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t422BFABDF038794D7A98B5F09879A0938CEFB2EA, ___list_0)); }
	inline List_1_t0CB551171B4CABEF84BD812574C218CD745F2C52 * get_list_0() const { return ___list_0; }
	inline List_1_t0CB551171B4CABEF84BD812574C218CD745F2C52 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t0CB551171B4CABEF84BD812574C218CD745F2C52 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t422BFABDF038794D7A98B5F09879A0938CEFB2EA, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t422BFABDF038794D7A98B5F09879A0938CEFB2EA, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t422BFABDF038794D7A98B5F09879A0938CEFB2EA, ___current_3)); }
	inline PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * get_current_3() const { return ___current_3; }
	inline PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T422BFABDF038794D7A98B5F09879A0938CEFB2EA_H
#ifndef ENUMERATOR_T1F0FA6B924150C3B8AC6B978C7B357655AE09E7E_H
#define ENUMERATOR_T1F0FA6B924150C3B8AC6B978C7B357655AE09E7E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<PieceContainerObject>
struct  Enumerator_t1F0FA6B924150C3B8AC6B978C7B357655AE09E7E 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t1F0FA6B924150C3B8AC6B978C7B357655AE09E7E, ___list_0)); }
	inline List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * get_list_0() const { return ___list_0; }
	inline List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t1F0FA6B924150C3B8AC6B978C7B357655AE09E7E, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t1F0FA6B924150C3B8AC6B978C7B357655AE09E7E, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1F0FA6B924150C3B8AC6B978C7B357655AE09E7E, ___current_3)); }
	inline PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * get_current_3() const { return ___current_3; }
	inline PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1F0FA6B924150C3B8AC6B978C7B357655AE09E7E_H
#ifndef ENUMERATOR_T1A13F370EC7EA46EA20204D8881CCE685A3C348C_H
#define ENUMERATOR_T1A13F370EC7EA46EA20204D8881CCE685A3C348C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Int32>
struct  Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	int32_t ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C, ___list_0)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_list_0() const { return ___list_0; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C, ___current_3)); }
	inline int32_t get_current_3() const { return ___current_3; }
	inline int32_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(int32_t value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1A13F370EC7EA46EA20204D8881CCE685A3C348C_H
#ifndef ENUMERATOR_TE0C99528D3DCE5863566CE37BD94162A4C0431CD_H
#define ENUMERATOR_TE0C99528D3DCE5863566CE37BD94162A4C0431CD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_TE0C99528D3DCE5863566CE37BD94162A4C0431CD_H
#ifndef ENUMERATOR_T42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60_H
#define ENUMERATOR_T42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct  Enumerator_t42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60, ___list_0)); }
	inline List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * get_list_0() const { return ___list_0; }
	inline List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60, ___current_3)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_current_3() const { return ___current_3; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60_H
#ifndef DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#define DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef INT16_T823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_H
#define INT16_T823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#define SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifndef SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#define SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#define COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifndef QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#define QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifndef VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#define VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifndef WAITFORSECONDSREALTIME_T0CF361107C4A9E25E0D4CF2F37732CE785235739_H
#define WAITFORSECONDSREALTIME_T0CF361107C4A9E25E0D4CF2F37732CE785235739_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSecondsRealtime
struct  WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739  : public CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D
{
public:
	// System.Single UnityEngine.WaitForSecondsRealtime::<waitTime>k__BackingField
	float ___U3CwaitTimeU3Ek__BackingField_0;
	// System.Single UnityEngine.WaitForSecondsRealtime::m_WaitUntilTime
	float ___m_WaitUntilTime_1;

public:
	inline static int32_t get_offset_of_U3CwaitTimeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739, ___U3CwaitTimeU3Ek__BackingField_0)); }
	inline float get_U3CwaitTimeU3Ek__BackingField_0() const { return ___U3CwaitTimeU3Ek__BackingField_0; }
	inline float* get_address_of_U3CwaitTimeU3Ek__BackingField_0() { return &___U3CwaitTimeU3Ek__BackingField_0; }
	inline void set_U3CwaitTimeU3Ek__BackingField_0(float value)
	{
		___U3CwaitTimeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_WaitUntilTime_1() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739, ___m_WaitUntilTime_1)); }
	inline float get_m_WaitUntilTime_1() const { return ___m_WaitUntilTime_1; }
	inline float* get_address_of_m_WaitUntilTime_1() { return &___m_WaitUntilTime_1; }
	inline void set_m_WaitUntilTime_1(float value)
	{
		___m_WaitUntilTime_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITFORSECONDSREALTIME_T0CF361107C4A9E25E0D4CF2F37732CE785235739_H
#ifndef NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#define NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#ifndef COROUTINE_TAE7DB2FC70A0AE6477F896F852057CB0754F06EC_H
#define COROUTINE_TAE7DB2FC70A0AE6477F896F852057CB0754F06EC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_TAE7DB2FC70A0AE6477F896F852057CB0754F06EC_H
#ifndef KEYCODE_TC93EA87C5A6901160B583ADFCD3EF6726570DC3C_H
#define KEYCODE_TC93EA87C5A6901160B583ADFCD3EF6726570DC3C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCODE_TC93EA87C5A6901160B583ADFCD3EF6726570DC3C_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#define COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifndef GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#define GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifndef MATERIAL_TF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_H
#define MATERIAL_TF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_TF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_H
#ifndef SPRITE_TCA09498D612D08DE668653AF1E9C12BF53434198_H
#define SPRITE_TCA09498D612D08DE668653AF1E9C12BF53434198_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Sprite
struct  Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITE_TCA09498D612D08DE668653AF1E9C12BF53434198_H
#ifndef BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#define BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifndef RENDERER_T0556D67DD582620D1F495627EDE30D03284151F4_H
#define RENDERER_T0556D67DD582620D1F495627EDE30D03284151F4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T0556D67DD582620D1F495627EDE30D03284151F4_H
#ifndef TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#define TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifndef MESHRENDERER_T9D67CA54E83315F743623BDE8EADCD5074659EED_H
#define MESHRENDERER_T9D67CA54E83315F743623BDE8EADCD5074659EED_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshRenderer
struct  MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED  : public Renderer_t0556D67DD582620D1F495627EDE30D03284151F4
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHRENDERER_T9D67CA54E83315F743623BDE8EADCD5074659EED_H
#ifndef MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#define MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifndef SPRITERENDERER_TCD51E875611195DBB91123B68434881D3441BC6F_H
#define SPRITERENDERER_TCD51E875611195DBB91123B68434881D3441BC6F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpriteRenderer
struct  SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F  : public Renderer_t0556D67DD582620D1F495627EDE30D03284151F4
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITERENDERER_TCD51E875611195DBB91123B68434881D3441BC6F_H
#ifndef CAMERACONTROL_T747F330F97DFEE9545303C2301EE6AF2740E573E_H
#define CAMERACONTROL_T747F330F97DFEE9545303C2301EE6AF2740E573E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraControl
struct  CameraControl_t747F330F97DFEE9545303C2301EE6AF2740E573E  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean CameraControl::flipping
	bool ___flipping_4;
	// System.Single CameraControl::y
	float ___y_5;
	// System.Single CameraControl::speed
	float ___speed_6;

public:
	inline static int32_t get_offset_of_flipping_4() { return static_cast<int32_t>(offsetof(CameraControl_t747F330F97DFEE9545303C2301EE6AF2740E573E, ___flipping_4)); }
	inline bool get_flipping_4() const { return ___flipping_4; }
	inline bool* get_address_of_flipping_4() { return &___flipping_4; }
	inline void set_flipping_4(bool value)
	{
		___flipping_4 = value;
	}

	inline static int32_t get_offset_of_y_5() { return static_cast<int32_t>(offsetof(CameraControl_t747F330F97DFEE9545303C2301EE6AF2740E573E, ___y_5)); }
	inline float get_y_5() const { return ___y_5; }
	inline float* get_address_of_y_5() { return &___y_5; }
	inline void set_y_5(float value)
	{
		___y_5 = value;
	}

	inline static int32_t get_offset_of_speed_6() { return static_cast<int32_t>(offsetof(CameraControl_t747F330F97DFEE9545303C2301EE6AF2740E573E, ___speed_6)); }
	inline float get_speed_6() const { return ___speed_6; }
	inline float* get_address_of_speed_6() { return &___speed_6; }
	inline void set_speed_6(float value)
	{
		___speed_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERACONTROL_T747F330F97DFEE9545303C2301EE6AF2740E573E_H
#ifndef DICECONTROL_T1BB26D165C463443AC5CDDA73CFD7027C443906A_H
#define DICECONTROL_T1BB26D165C463443AC5CDDA73CFD7027C443906A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DiceControl
struct  DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.SpriteRenderer DiceControl::spr
	SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * ___spr_4;
	// UnityEngine.Sprite DiceControl::r1
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___r1_5;
	// UnityEngine.Sprite DiceControl::r2
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___r2_6;
	// UnityEngine.Sprite DiceControl::r3
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___r3_7;
	// UnityEngine.Sprite DiceControl::r4
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___r4_8;
	// UnityEngine.Sprite DiceControl::r5
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___r5_9;
	// UnityEngine.Sprite DiceControl::r6
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___r6_10;

public:
	inline static int32_t get_offset_of_spr_4() { return static_cast<int32_t>(offsetof(DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A, ___spr_4)); }
	inline SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * get_spr_4() const { return ___spr_4; }
	inline SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F ** get_address_of_spr_4() { return &___spr_4; }
	inline void set_spr_4(SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * value)
	{
		___spr_4 = value;
		Il2CppCodeGenWriteBarrier((&___spr_4), value);
	}

	inline static int32_t get_offset_of_r1_5() { return static_cast<int32_t>(offsetof(DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A, ___r1_5)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_r1_5() const { return ___r1_5; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_r1_5() { return &___r1_5; }
	inline void set_r1_5(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___r1_5 = value;
		Il2CppCodeGenWriteBarrier((&___r1_5), value);
	}

	inline static int32_t get_offset_of_r2_6() { return static_cast<int32_t>(offsetof(DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A, ___r2_6)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_r2_6() const { return ___r2_6; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_r2_6() { return &___r2_6; }
	inline void set_r2_6(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___r2_6 = value;
		Il2CppCodeGenWriteBarrier((&___r2_6), value);
	}

	inline static int32_t get_offset_of_r3_7() { return static_cast<int32_t>(offsetof(DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A, ___r3_7)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_r3_7() const { return ___r3_7; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_r3_7() { return &___r3_7; }
	inline void set_r3_7(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___r3_7 = value;
		Il2CppCodeGenWriteBarrier((&___r3_7), value);
	}

	inline static int32_t get_offset_of_r4_8() { return static_cast<int32_t>(offsetof(DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A, ___r4_8)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_r4_8() const { return ___r4_8; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_r4_8() { return &___r4_8; }
	inline void set_r4_8(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___r4_8 = value;
		Il2CppCodeGenWriteBarrier((&___r4_8), value);
	}

	inline static int32_t get_offset_of_r5_9() { return static_cast<int32_t>(offsetof(DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A, ___r5_9)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_r5_9() const { return ___r5_9; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_r5_9() { return &___r5_9; }
	inline void set_r5_9(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___r5_9 = value;
		Il2CppCodeGenWriteBarrier((&___r5_9), value);
	}

	inline static int32_t get_offset_of_r6_10() { return static_cast<int32_t>(offsetof(DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A, ___r6_10)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_r6_10() const { return ___r6_10; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_r6_10() { return &___r6_10; }
	inline void set_r6_10(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___r6_10 = value;
		Il2CppCodeGenWriteBarrier((&___r6_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICECONTROL_T1BB26D165C463443AC5CDDA73CFD7027C443906A_H
#ifndef GAMECONTROL_T60391CE7B0B029798FBC6F92207CDB38C6B1F248_H
#define GAMECONTROL_T60391CE7B0B029798FBC6F92207CDB38C6B1F248_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameControl
struct  GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject[] GameControl::whitePieces
	GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067* ___whitePieces_4;
	// UnityEngine.GameObject[] GameControl::blackPieces
	GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067* ___blackPieces_5;
	// CameraControl GameControl::cam
	CameraControl_t747F330F97DFEE9545303C2301EE6AF2740E573E * ___cam_6;
	// MoveControl GameControl::currentMover
	MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * ___currentMover_7;
	// UnityEngine.GameObject GameControl::blackMover
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___blackMover_8;
	// UnityEngine.GameObject GameControl::whiteMover
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___whiteMover_9;
	// UnityEngine.UI.Text GameControl::uiText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___uiText_10;
	// DiceControl GameControl::die1
	DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A * ___die1_11;
	// DiceControl GameControl::die2
	DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A * ___die2_12;
	// DiceControl GameControl::die3
	DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A * ___die3_13;
	// DiceControl GameControl::die4
	DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A * ___die4_14;
	// PieceContainerObject[] GameControl::allSpots
	PieceContainerObjectU5BU5D_t04002C7EAC175CFD098187B608736779B7C0338C* ___allSpots_15;
	// PieceContainerObject GameControl::whiteJailControl
	PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * ___whiteJailControl_16;
	// PieceContainerObject GameControl::whiteBaseControl
	PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * ___whiteBaseControl_17;
	// PieceContainerObject GameControl::blackJailControl
	PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * ___blackJailControl_18;
	// PieceContainerObject GameControl::blackBaseControl
	PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * ___blackBaseControl_19;

public:
	inline static int32_t get_offset_of_whitePieces_4() { return static_cast<int32_t>(offsetof(GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248, ___whitePieces_4)); }
	inline GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067* get_whitePieces_4() const { return ___whitePieces_4; }
	inline GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067** get_address_of_whitePieces_4() { return &___whitePieces_4; }
	inline void set_whitePieces_4(GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067* value)
	{
		___whitePieces_4 = value;
		Il2CppCodeGenWriteBarrier((&___whitePieces_4), value);
	}

	inline static int32_t get_offset_of_blackPieces_5() { return static_cast<int32_t>(offsetof(GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248, ___blackPieces_5)); }
	inline GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067* get_blackPieces_5() const { return ___blackPieces_5; }
	inline GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067** get_address_of_blackPieces_5() { return &___blackPieces_5; }
	inline void set_blackPieces_5(GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067* value)
	{
		___blackPieces_5 = value;
		Il2CppCodeGenWriteBarrier((&___blackPieces_5), value);
	}

	inline static int32_t get_offset_of_cam_6() { return static_cast<int32_t>(offsetof(GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248, ___cam_6)); }
	inline CameraControl_t747F330F97DFEE9545303C2301EE6AF2740E573E * get_cam_6() const { return ___cam_6; }
	inline CameraControl_t747F330F97DFEE9545303C2301EE6AF2740E573E ** get_address_of_cam_6() { return &___cam_6; }
	inline void set_cam_6(CameraControl_t747F330F97DFEE9545303C2301EE6AF2740E573E * value)
	{
		___cam_6 = value;
		Il2CppCodeGenWriteBarrier((&___cam_6), value);
	}

	inline static int32_t get_offset_of_currentMover_7() { return static_cast<int32_t>(offsetof(GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248, ___currentMover_7)); }
	inline MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * get_currentMover_7() const { return ___currentMover_7; }
	inline MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 ** get_address_of_currentMover_7() { return &___currentMover_7; }
	inline void set_currentMover_7(MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * value)
	{
		___currentMover_7 = value;
		Il2CppCodeGenWriteBarrier((&___currentMover_7), value);
	}

	inline static int32_t get_offset_of_blackMover_8() { return static_cast<int32_t>(offsetof(GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248, ___blackMover_8)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_blackMover_8() const { return ___blackMover_8; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_blackMover_8() { return &___blackMover_8; }
	inline void set_blackMover_8(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___blackMover_8 = value;
		Il2CppCodeGenWriteBarrier((&___blackMover_8), value);
	}

	inline static int32_t get_offset_of_whiteMover_9() { return static_cast<int32_t>(offsetof(GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248, ___whiteMover_9)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_whiteMover_9() const { return ___whiteMover_9; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_whiteMover_9() { return &___whiteMover_9; }
	inline void set_whiteMover_9(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___whiteMover_9 = value;
		Il2CppCodeGenWriteBarrier((&___whiteMover_9), value);
	}

	inline static int32_t get_offset_of_uiText_10() { return static_cast<int32_t>(offsetof(GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248, ___uiText_10)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_uiText_10() const { return ___uiText_10; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_uiText_10() { return &___uiText_10; }
	inline void set_uiText_10(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___uiText_10 = value;
		Il2CppCodeGenWriteBarrier((&___uiText_10), value);
	}

	inline static int32_t get_offset_of_die1_11() { return static_cast<int32_t>(offsetof(GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248, ___die1_11)); }
	inline DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A * get_die1_11() const { return ___die1_11; }
	inline DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A ** get_address_of_die1_11() { return &___die1_11; }
	inline void set_die1_11(DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A * value)
	{
		___die1_11 = value;
		Il2CppCodeGenWriteBarrier((&___die1_11), value);
	}

	inline static int32_t get_offset_of_die2_12() { return static_cast<int32_t>(offsetof(GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248, ___die2_12)); }
	inline DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A * get_die2_12() const { return ___die2_12; }
	inline DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A ** get_address_of_die2_12() { return &___die2_12; }
	inline void set_die2_12(DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A * value)
	{
		___die2_12 = value;
		Il2CppCodeGenWriteBarrier((&___die2_12), value);
	}

	inline static int32_t get_offset_of_die3_13() { return static_cast<int32_t>(offsetof(GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248, ___die3_13)); }
	inline DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A * get_die3_13() const { return ___die3_13; }
	inline DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A ** get_address_of_die3_13() { return &___die3_13; }
	inline void set_die3_13(DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A * value)
	{
		___die3_13 = value;
		Il2CppCodeGenWriteBarrier((&___die3_13), value);
	}

	inline static int32_t get_offset_of_die4_14() { return static_cast<int32_t>(offsetof(GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248, ___die4_14)); }
	inline DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A * get_die4_14() const { return ___die4_14; }
	inline DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A ** get_address_of_die4_14() { return &___die4_14; }
	inline void set_die4_14(DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A * value)
	{
		___die4_14 = value;
		Il2CppCodeGenWriteBarrier((&___die4_14), value);
	}

	inline static int32_t get_offset_of_allSpots_15() { return static_cast<int32_t>(offsetof(GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248, ___allSpots_15)); }
	inline PieceContainerObjectU5BU5D_t04002C7EAC175CFD098187B608736779B7C0338C* get_allSpots_15() const { return ___allSpots_15; }
	inline PieceContainerObjectU5BU5D_t04002C7EAC175CFD098187B608736779B7C0338C** get_address_of_allSpots_15() { return &___allSpots_15; }
	inline void set_allSpots_15(PieceContainerObjectU5BU5D_t04002C7EAC175CFD098187B608736779B7C0338C* value)
	{
		___allSpots_15 = value;
		Il2CppCodeGenWriteBarrier((&___allSpots_15), value);
	}

	inline static int32_t get_offset_of_whiteJailControl_16() { return static_cast<int32_t>(offsetof(GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248, ___whiteJailControl_16)); }
	inline PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * get_whiteJailControl_16() const { return ___whiteJailControl_16; }
	inline PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 ** get_address_of_whiteJailControl_16() { return &___whiteJailControl_16; }
	inline void set_whiteJailControl_16(PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * value)
	{
		___whiteJailControl_16 = value;
		Il2CppCodeGenWriteBarrier((&___whiteJailControl_16), value);
	}

	inline static int32_t get_offset_of_whiteBaseControl_17() { return static_cast<int32_t>(offsetof(GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248, ___whiteBaseControl_17)); }
	inline PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * get_whiteBaseControl_17() const { return ___whiteBaseControl_17; }
	inline PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 ** get_address_of_whiteBaseControl_17() { return &___whiteBaseControl_17; }
	inline void set_whiteBaseControl_17(PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * value)
	{
		___whiteBaseControl_17 = value;
		Il2CppCodeGenWriteBarrier((&___whiteBaseControl_17), value);
	}

	inline static int32_t get_offset_of_blackJailControl_18() { return static_cast<int32_t>(offsetof(GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248, ___blackJailControl_18)); }
	inline PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * get_blackJailControl_18() const { return ___blackJailControl_18; }
	inline PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 ** get_address_of_blackJailControl_18() { return &___blackJailControl_18; }
	inline void set_blackJailControl_18(PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * value)
	{
		___blackJailControl_18 = value;
		Il2CppCodeGenWriteBarrier((&___blackJailControl_18), value);
	}

	inline static int32_t get_offset_of_blackBaseControl_19() { return static_cast<int32_t>(offsetof(GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248, ___blackBaseControl_19)); }
	inline PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * get_blackBaseControl_19() const { return ___blackBaseControl_19; }
	inline PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 ** get_address_of_blackBaseControl_19() { return &___blackBaseControl_19; }
	inline void set_blackBaseControl_19(PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * value)
	{
		___blackBaseControl_19 = value;
		Il2CppCodeGenWriteBarrier((&___blackBaseControl_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMECONTROL_T60391CE7B0B029798FBC6F92207CDB38C6B1F248_H
#ifndef MOVECONTROL_T61FB98930C721FC56C880750FD267C839C2E4401_H
#define MOVECONTROL_T61FB98930C721FC56C880750FD267C839C2E4401_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoveControl
struct  MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// GameControl MoveControl::gameMaster
	GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * ___gameMaster_4;
	// UnityEngine.GameObject MoveControl::currentPiece
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___currentPiece_5;
	// System.Collections.Generic.List`1<PieceContainerObject> MoveControl::availableSpots
	List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * ___availableSpots_6;
	// System.Collections.Generic.List`1<PieceContainerObject> MoveControl::availableMoves
	List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * ___availableMoves_7;
	// System.Single MoveControl::y
	float ___y_8;
	// System.Single MoveControl::locationX
	float ___locationX_9;
	// System.Single MoveControl::locationY
	float ___locationY_10;
	// System.Single MoveControl::locationZ
	float ___locationZ_11;
	// System.Int16 MoveControl::spot
	int16_t ___spot_12;
	// System.Int32 MoveControl::roll1
	int32_t ___roll1_13;
	// System.Int32 MoveControl::roll2
	int32_t ___roll2_14;
	// UnityEngine.Transform MoveControl::oldParent
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___oldParent_15;
	// PieceContainerControl MoveControl::oldSpot
	PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * ___oldSpot_16;
	// PieceContainerControl MoveControl::currentSpot
	PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * ___currentSpot_17;
	// System.Boolean MoveControl::myTurn
	bool ___myTurn_18;
	// System.Boolean MoveControl::diceRolled
	bool ___diceRolled_19;
	// System.Boolean MoveControl::doubles
	bool ___doubles_20;
	// System.Boolean MoveControl::playerRolledDice
	bool ___playerRolledDice_21;
	// System.Boolean MoveControl::turnOver
	bool ___turnOver_22;
	// System.Boolean MoveControl::winner
	bool ___winner_23;
	// System.Boolean MoveControl::listsSet
	bool ___listsSet_24;
	// System.Boolean MoveControl::initialSet
	bool ___initialSet_25;
	// System.Boolean MoveControl::diceViewed
	bool ___diceViewed_26;
	// System.Boolean MoveControl::isBlack
	bool ___isBlack_27;
	// PieceContainerObject MoveControl::jailControl
	PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * ___jailControl_28;
	// PieceContainerObject MoveControl::baseControl
	PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * ___baseControl_29;
	// Player MoveControl::player
	Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * ___player_30;
	// UnityEngine.MeshRenderer MoveControl::meshRend
	MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * ___meshRend_31;
	// System.Boolean[] MoveControl::rollsUsed
	BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* ___rollsUsed_32;

public:
	inline static int32_t get_offset_of_gameMaster_4() { return static_cast<int32_t>(offsetof(MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401, ___gameMaster_4)); }
	inline GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * get_gameMaster_4() const { return ___gameMaster_4; }
	inline GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 ** get_address_of_gameMaster_4() { return &___gameMaster_4; }
	inline void set_gameMaster_4(GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * value)
	{
		___gameMaster_4 = value;
		Il2CppCodeGenWriteBarrier((&___gameMaster_4), value);
	}

	inline static int32_t get_offset_of_currentPiece_5() { return static_cast<int32_t>(offsetof(MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401, ___currentPiece_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_currentPiece_5() const { return ___currentPiece_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_currentPiece_5() { return &___currentPiece_5; }
	inline void set_currentPiece_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___currentPiece_5 = value;
		Il2CppCodeGenWriteBarrier((&___currentPiece_5), value);
	}

	inline static int32_t get_offset_of_availableSpots_6() { return static_cast<int32_t>(offsetof(MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401, ___availableSpots_6)); }
	inline List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * get_availableSpots_6() const { return ___availableSpots_6; }
	inline List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 ** get_address_of_availableSpots_6() { return &___availableSpots_6; }
	inline void set_availableSpots_6(List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * value)
	{
		___availableSpots_6 = value;
		Il2CppCodeGenWriteBarrier((&___availableSpots_6), value);
	}

	inline static int32_t get_offset_of_availableMoves_7() { return static_cast<int32_t>(offsetof(MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401, ___availableMoves_7)); }
	inline List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * get_availableMoves_7() const { return ___availableMoves_7; }
	inline List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 ** get_address_of_availableMoves_7() { return &___availableMoves_7; }
	inline void set_availableMoves_7(List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * value)
	{
		___availableMoves_7 = value;
		Il2CppCodeGenWriteBarrier((&___availableMoves_7), value);
	}

	inline static int32_t get_offset_of_y_8() { return static_cast<int32_t>(offsetof(MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401, ___y_8)); }
	inline float get_y_8() const { return ___y_8; }
	inline float* get_address_of_y_8() { return &___y_8; }
	inline void set_y_8(float value)
	{
		___y_8 = value;
	}

	inline static int32_t get_offset_of_locationX_9() { return static_cast<int32_t>(offsetof(MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401, ___locationX_9)); }
	inline float get_locationX_9() const { return ___locationX_9; }
	inline float* get_address_of_locationX_9() { return &___locationX_9; }
	inline void set_locationX_9(float value)
	{
		___locationX_9 = value;
	}

	inline static int32_t get_offset_of_locationY_10() { return static_cast<int32_t>(offsetof(MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401, ___locationY_10)); }
	inline float get_locationY_10() const { return ___locationY_10; }
	inline float* get_address_of_locationY_10() { return &___locationY_10; }
	inline void set_locationY_10(float value)
	{
		___locationY_10 = value;
	}

	inline static int32_t get_offset_of_locationZ_11() { return static_cast<int32_t>(offsetof(MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401, ___locationZ_11)); }
	inline float get_locationZ_11() const { return ___locationZ_11; }
	inline float* get_address_of_locationZ_11() { return &___locationZ_11; }
	inline void set_locationZ_11(float value)
	{
		___locationZ_11 = value;
	}

	inline static int32_t get_offset_of_spot_12() { return static_cast<int32_t>(offsetof(MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401, ___spot_12)); }
	inline int16_t get_spot_12() const { return ___spot_12; }
	inline int16_t* get_address_of_spot_12() { return &___spot_12; }
	inline void set_spot_12(int16_t value)
	{
		___spot_12 = value;
	}

	inline static int32_t get_offset_of_roll1_13() { return static_cast<int32_t>(offsetof(MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401, ___roll1_13)); }
	inline int32_t get_roll1_13() const { return ___roll1_13; }
	inline int32_t* get_address_of_roll1_13() { return &___roll1_13; }
	inline void set_roll1_13(int32_t value)
	{
		___roll1_13 = value;
	}

	inline static int32_t get_offset_of_roll2_14() { return static_cast<int32_t>(offsetof(MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401, ___roll2_14)); }
	inline int32_t get_roll2_14() const { return ___roll2_14; }
	inline int32_t* get_address_of_roll2_14() { return &___roll2_14; }
	inline void set_roll2_14(int32_t value)
	{
		___roll2_14 = value;
	}

	inline static int32_t get_offset_of_oldParent_15() { return static_cast<int32_t>(offsetof(MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401, ___oldParent_15)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_oldParent_15() const { return ___oldParent_15; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_oldParent_15() { return &___oldParent_15; }
	inline void set_oldParent_15(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___oldParent_15 = value;
		Il2CppCodeGenWriteBarrier((&___oldParent_15), value);
	}

	inline static int32_t get_offset_of_oldSpot_16() { return static_cast<int32_t>(offsetof(MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401, ___oldSpot_16)); }
	inline PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * get_oldSpot_16() const { return ___oldSpot_16; }
	inline PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 ** get_address_of_oldSpot_16() { return &___oldSpot_16; }
	inline void set_oldSpot_16(PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * value)
	{
		___oldSpot_16 = value;
		Il2CppCodeGenWriteBarrier((&___oldSpot_16), value);
	}

	inline static int32_t get_offset_of_currentSpot_17() { return static_cast<int32_t>(offsetof(MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401, ___currentSpot_17)); }
	inline PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * get_currentSpot_17() const { return ___currentSpot_17; }
	inline PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 ** get_address_of_currentSpot_17() { return &___currentSpot_17; }
	inline void set_currentSpot_17(PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * value)
	{
		___currentSpot_17 = value;
		Il2CppCodeGenWriteBarrier((&___currentSpot_17), value);
	}

	inline static int32_t get_offset_of_myTurn_18() { return static_cast<int32_t>(offsetof(MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401, ___myTurn_18)); }
	inline bool get_myTurn_18() const { return ___myTurn_18; }
	inline bool* get_address_of_myTurn_18() { return &___myTurn_18; }
	inline void set_myTurn_18(bool value)
	{
		___myTurn_18 = value;
	}

	inline static int32_t get_offset_of_diceRolled_19() { return static_cast<int32_t>(offsetof(MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401, ___diceRolled_19)); }
	inline bool get_diceRolled_19() const { return ___diceRolled_19; }
	inline bool* get_address_of_diceRolled_19() { return &___diceRolled_19; }
	inline void set_diceRolled_19(bool value)
	{
		___diceRolled_19 = value;
	}

	inline static int32_t get_offset_of_doubles_20() { return static_cast<int32_t>(offsetof(MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401, ___doubles_20)); }
	inline bool get_doubles_20() const { return ___doubles_20; }
	inline bool* get_address_of_doubles_20() { return &___doubles_20; }
	inline void set_doubles_20(bool value)
	{
		___doubles_20 = value;
	}

	inline static int32_t get_offset_of_playerRolledDice_21() { return static_cast<int32_t>(offsetof(MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401, ___playerRolledDice_21)); }
	inline bool get_playerRolledDice_21() const { return ___playerRolledDice_21; }
	inline bool* get_address_of_playerRolledDice_21() { return &___playerRolledDice_21; }
	inline void set_playerRolledDice_21(bool value)
	{
		___playerRolledDice_21 = value;
	}

	inline static int32_t get_offset_of_turnOver_22() { return static_cast<int32_t>(offsetof(MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401, ___turnOver_22)); }
	inline bool get_turnOver_22() const { return ___turnOver_22; }
	inline bool* get_address_of_turnOver_22() { return &___turnOver_22; }
	inline void set_turnOver_22(bool value)
	{
		___turnOver_22 = value;
	}

	inline static int32_t get_offset_of_winner_23() { return static_cast<int32_t>(offsetof(MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401, ___winner_23)); }
	inline bool get_winner_23() const { return ___winner_23; }
	inline bool* get_address_of_winner_23() { return &___winner_23; }
	inline void set_winner_23(bool value)
	{
		___winner_23 = value;
	}

	inline static int32_t get_offset_of_listsSet_24() { return static_cast<int32_t>(offsetof(MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401, ___listsSet_24)); }
	inline bool get_listsSet_24() const { return ___listsSet_24; }
	inline bool* get_address_of_listsSet_24() { return &___listsSet_24; }
	inline void set_listsSet_24(bool value)
	{
		___listsSet_24 = value;
	}

	inline static int32_t get_offset_of_initialSet_25() { return static_cast<int32_t>(offsetof(MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401, ___initialSet_25)); }
	inline bool get_initialSet_25() const { return ___initialSet_25; }
	inline bool* get_address_of_initialSet_25() { return &___initialSet_25; }
	inline void set_initialSet_25(bool value)
	{
		___initialSet_25 = value;
	}

	inline static int32_t get_offset_of_diceViewed_26() { return static_cast<int32_t>(offsetof(MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401, ___diceViewed_26)); }
	inline bool get_diceViewed_26() const { return ___diceViewed_26; }
	inline bool* get_address_of_diceViewed_26() { return &___diceViewed_26; }
	inline void set_diceViewed_26(bool value)
	{
		___diceViewed_26 = value;
	}

	inline static int32_t get_offset_of_isBlack_27() { return static_cast<int32_t>(offsetof(MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401, ___isBlack_27)); }
	inline bool get_isBlack_27() const { return ___isBlack_27; }
	inline bool* get_address_of_isBlack_27() { return &___isBlack_27; }
	inline void set_isBlack_27(bool value)
	{
		___isBlack_27 = value;
	}

	inline static int32_t get_offset_of_jailControl_28() { return static_cast<int32_t>(offsetof(MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401, ___jailControl_28)); }
	inline PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * get_jailControl_28() const { return ___jailControl_28; }
	inline PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 ** get_address_of_jailControl_28() { return &___jailControl_28; }
	inline void set_jailControl_28(PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * value)
	{
		___jailControl_28 = value;
		Il2CppCodeGenWriteBarrier((&___jailControl_28), value);
	}

	inline static int32_t get_offset_of_baseControl_29() { return static_cast<int32_t>(offsetof(MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401, ___baseControl_29)); }
	inline PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * get_baseControl_29() const { return ___baseControl_29; }
	inline PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 ** get_address_of_baseControl_29() { return &___baseControl_29; }
	inline void set_baseControl_29(PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * value)
	{
		___baseControl_29 = value;
		Il2CppCodeGenWriteBarrier((&___baseControl_29), value);
	}

	inline static int32_t get_offset_of_player_30() { return static_cast<int32_t>(offsetof(MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401, ___player_30)); }
	inline Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * get_player_30() const { return ___player_30; }
	inline Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 ** get_address_of_player_30() { return &___player_30; }
	inline void set_player_30(Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * value)
	{
		___player_30 = value;
		Il2CppCodeGenWriteBarrier((&___player_30), value);
	}

	inline static int32_t get_offset_of_meshRend_31() { return static_cast<int32_t>(offsetof(MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401, ___meshRend_31)); }
	inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * get_meshRend_31() const { return ___meshRend_31; }
	inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED ** get_address_of_meshRend_31() { return &___meshRend_31; }
	inline void set_meshRend_31(MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * value)
	{
		___meshRend_31 = value;
		Il2CppCodeGenWriteBarrier((&___meshRend_31), value);
	}

	inline static int32_t get_offset_of_rollsUsed_32() { return static_cast<int32_t>(offsetof(MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401, ___rollsUsed_32)); }
	inline BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* get_rollsUsed_32() const { return ___rollsUsed_32; }
	inline BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040** get_address_of_rollsUsed_32() { return &___rollsUsed_32; }
	inline void set_rollsUsed_32(BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* value)
	{
		___rollsUsed_32 = value;
		Il2CppCodeGenWriteBarrier((&___rollsUsed_32), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOVECONTROL_T61FB98930C721FC56C880750FD267C839C2E4401_H
#ifndef PIECECONTAINEROBJECT_TA444C3338C786026ABF7E0FD0ED6D7F2E7E88740_H
#define PIECECONTAINEROBJECT_TA444C3338C786026ABF7E0FD0ED6D7F2E7E88740_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PieceContainerObject
struct  PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// PieceContainerControl PieceContainerObject::pcc
	PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * ___pcc_4;
	// GameControl PieceContainerObject::gameMaster
	GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * ___gameMaster_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> PieceContainerObject::pieces
	List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * ___pieces_6;
	// System.String PieceContainerObject::pcType
	String_t* ___pcType_7;

public:
	inline static int32_t get_offset_of_pcc_4() { return static_cast<int32_t>(offsetof(PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740, ___pcc_4)); }
	inline PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * get_pcc_4() const { return ___pcc_4; }
	inline PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 ** get_address_of_pcc_4() { return &___pcc_4; }
	inline void set_pcc_4(PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * value)
	{
		___pcc_4 = value;
		Il2CppCodeGenWriteBarrier((&___pcc_4), value);
	}

	inline static int32_t get_offset_of_gameMaster_5() { return static_cast<int32_t>(offsetof(PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740, ___gameMaster_5)); }
	inline GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * get_gameMaster_5() const { return ___gameMaster_5; }
	inline GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 ** get_address_of_gameMaster_5() { return &___gameMaster_5; }
	inline void set_gameMaster_5(GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * value)
	{
		___gameMaster_5 = value;
		Il2CppCodeGenWriteBarrier((&___gameMaster_5), value);
	}

	inline static int32_t get_offset_of_pieces_6() { return static_cast<int32_t>(offsetof(PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740, ___pieces_6)); }
	inline List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * get_pieces_6() const { return ___pieces_6; }
	inline List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 ** get_address_of_pieces_6() { return &___pieces_6; }
	inline void set_pieces_6(List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * value)
	{
		___pieces_6 = value;
		Il2CppCodeGenWriteBarrier((&___pieces_6), value);
	}

	inline static int32_t get_offset_of_pcType_7() { return static_cast<int32_t>(offsetof(PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740, ___pcType_7)); }
	inline String_t* get_pcType_7() const { return ___pcType_7; }
	inline String_t** get_address_of_pcType_7() { return &___pcType_7; }
	inline void set_pcType_7(String_t* value)
	{
		___pcType_7 = value;
		Il2CppCodeGenWriteBarrier((&___pcType_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PIECECONTAINEROBJECT_TA444C3338C786026ABF7E0FD0ED6D7F2E7E88740_H
#ifndef PLAYERSELECTIONCONTROL_TDFC4922DD5B43F4348987D9DC32E99F231A69D78_H
#define PLAYERSELECTIONCONTROL_TDFC4922DD5B43F4348987D9DC32E99F231A69D78_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerSelectionControl
struct  PlayerSelectionControl_tDFC4922DD5B43F4348987D9DC32E99F231A69D78  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// GameControl PlayerSelectionControl::gameMaster
	GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * ___gameMaster_4;
	// UnityEngine.UI.Text PlayerSelectionControl::colorText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___colorText_5;
	// UnityEngine.UI.Text PlayerSelectionControl::playerTypeText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___playerTypeText_6;
	// System.String[] PlayerSelectionControl::playerTypes
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___playerTypes_7;
	// System.Int32 PlayerSelectionControl::typeIndex
	int32_t ___typeIndex_8;

public:
	inline static int32_t get_offset_of_gameMaster_4() { return static_cast<int32_t>(offsetof(PlayerSelectionControl_tDFC4922DD5B43F4348987D9DC32E99F231A69D78, ___gameMaster_4)); }
	inline GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * get_gameMaster_4() const { return ___gameMaster_4; }
	inline GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 ** get_address_of_gameMaster_4() { return &___gameMaster_4; }
	inline void set_gameMaster_4(GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * value)
	{
		___gameMaster_4 = value;
		Il2CppCodeGenWriteBarrier((&___gameMaster_4), value);
	}

	inline static int32_t get_offset_of_colorText_5() { return static_cast<int32_t>(offsetof(PlayerSelectionControl_tDFC4922DD5B43F4348987D9DC32E99F231A69D78, ___colorText_5)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_colorText_5() const { return ___colorText_5; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_colorText_5() { return &___colorText_5; }
	inline void set_colorText_5(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___colorText_5 = value;
		Il2CppCodeGenWriteBarrier((&___colorText_5), value);
	}

	inline static int32_t get_offset_of_playerTypeText_6() { return static_cast<int32_t>(offsetof(PlayerSelectionControl_tDFC4922DD5B43F4348987D9DC32E99F231A69D78, ___playerTypeText_6)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_playerTypeText_6() const { return ___playerTypeText_6; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_playerTypeText_6() { return &___playerTypeText_6; }
	inline void set_playerTypeText_6(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___playerTypeText_6 = value;
		Il2CppCodeGenWriteBarrier((&___playerTypeText_6), value);
	}

	inline static int32_t get_offset_of_playerTypes_7() { return static_cast<int32_t>(offsetof(PlayerSelectionControl_tDFC4922DD5B43F4348987D9DC32E99F231A69D78, ___playerTypes_7)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_playerTypes_7() const { return ___playerTypes_7; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_playerTypes_7() { return &___playerTypes_7; }
	inline void set_playerTypes_7(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___playerTypes_7 = value;
		Il2CppCodeGenWriteBarrier((&___playerTypes_7), value);
	}

	inline static int32_t get_offset_of_typeIndex_8() { return static_cast<int32_t>(offsetof(PlayerSelectionControl_tDFC4922DD5B43F4348987D9DC32E99F231A69D78, ___typeIndex_8)); }
	inline int32_t get_typeIndex_8() const { return ___typeIndex_8; }
	inline int32_t* get_address_of_typeIndex_8() { return &___typeIndex_8; }
	inline void set_typeIndex_8(int32_t value)
	{
		___typeIndex_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERSELECTIONCONTROL_TDFC4922DD5B43F4348987D9DC32E99F231A69D78_H
#ifndef UIBEHAVIOUR_T3C3C339CD5677BA7FC27C352FED8B78052A3FE70_H
#define UIBEHAVIOUR_T3C3C339CD5677BA7FC27C352FED8B78052A3FE70_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3C3C339CD5677BA7FC27C352FED8B78052A3FE70_H
#ifndef GRAPHIC_TBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_H
#define GRAPHIC_TBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_8;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_9;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_10;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_11;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_12;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_14;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_16;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_19;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_6), value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_8)); }
	inline bool get_m_RaycastTarget_8() const { return ___m_RaycastTarget_8; }
	inline bool* get_address_of_m_RaycastTarget_8() { return &___m_RaycastTarget_8; }
	inline void set_m_RaycastTarget_8(bool value)
	{
		___m_RaycastTarget_8 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_9)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_9() const { return ___m_RectTransform_9; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_9() { return &___m_RectTransform_9; }
	inline void set_m_RectTransform_9(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_9), value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_10)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_10() const { return ___m_CanvasRenderer_10; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_10() { return &___m_CanvasRenderer_10; }
	inline void set_m_CanvasRenderer_10(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRenderer_10), value);
	}

	inline static int32_t get_offset_of_m_Canvas_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_11)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_11() const { return ___m_Canvas_11; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_11() { return &___m_Canvas_11; }
	inline void set_m_Canvas_11(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_11), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_12)); }
	inline bool get_m_VertsDirty_12() const { return ___m_VertsDirty_12; }
	inline bool* get_address_of_m_VertsDirty_12() { return &___m_VertsDirty_12; }
	inline void set_m_VertsDirty_12(bool value)
	{
		___m_VertsDirty_12 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_13)); }
	inline bool get_m_MaterialDirty_13() const { return ___m_MaterialDirty_13; }
	inline bool* get_address_of_m_MaterialDirty_13() { return &___m_MaterialDirty_13; }
	inline void set_m_MaterialDirty_13(bool value)
	{
		___m_MaterialDirty_13 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_14)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_14() const { return ___m_OnDirtyLayoutCallback_14; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_14() { return &___m_OnDirtyLayoutCallback_14; }
	inline void set_m_OnDirtyLayoutCallback_14(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_14), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_15)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_15() const { return ___m_OnDirtyVertsCallback_15; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_15() { return &___m_OnDirtyVertsCallback_15; }
	inline void set_m_OnDirtyVertsCallback_15(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_15), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_16() const { return ___m_OnDirtyMaterialCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_16() { return &___m_OnDirtyMaterialCallback_16; }
	inline void set_m_OnDirtyMaterialCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_16), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_19)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_19() const { return ___m_ColorTweenRunner_19; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_19() { return &___m_ColorTweenRunner_19; }
	inline void set_m_ColorTweenRunner_19(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_19), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_20(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_20 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_17;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_18;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_4), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_5), value);
	}

	inline static int32_t get_offset_of_s_Mesh_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_17)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_17() const { return ___s_Mesh_17; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_17() { return &___s_Mesh_17; }
	inline void set_s_Mesh_17(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_17 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_17), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_18)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_18() const { return ___s_VertexHelper_18; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_18() { return &___s_VertexHelper_18; }
	inline void set_s_VertexHelper_18(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_18 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_TBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_H
#ifndef MASKABLEGRAPHIC_TDA46A5925C6A2101217C9F52C855B5C1A36A7A0F_H
#define MASKABLEGRAPHIC_TDA46A5925C6A2101217C9F52C855B5C1A36A7A0F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_21;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_22;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_23;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_25;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_26;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_27;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_28;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_29;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_21)); }
	inline bool get_m_ShouldRecalculateStencil_21() const { return ___m_ShouldRecalculateStencil_21; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_21() { return &___m_ShouldRecalculateStencil_21; }
	inline void set_m_ShouldRecalculateStencil_21(bool value)
	{
		___m_ShouldRecalculateStencil_21 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_22)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_22() const { return ___m_MaskMaterial_22; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_22() { return &___m_MaskMaterial_22; }
	inline void set_m_MaskMaterial_22(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_22), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_23)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_23() const { return ___m_ParentMask_23; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_23() { return &___m_ParentMask_23; }
	inline void set_m_ParentMask_23(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_23), value);
	}

	inline static int32_t get_offset_of_m_Maskable_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_24)); }
	inline bool get_m_Maskable_24() const { return ___m_Maskable_24; }
	inline bool* get_address_of_m_Maskable_24() { return &___m_Maskable_24; }
	inline void set_m_Maskable_24(bool value)
	{
		___m_Maskable_24 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_25)); }
	inline bool get_m_IncludeForMasking_25() const { return ___m_IncludeForMasking_25; }
	inline bool* get_address_of_m_IncludeForMasking_25() { return &___m_IncludeForMasking_25; }
	inline void set_m_IncludeForMasking_25(bool value)
	{
		___m_IncludeForMasking_25 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_26)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_26() const { return ___m_OnCullStateChanged_26; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_26() { return &___m_OnCullStateChanged_26; }
	inline void set_m_OnCullStateChanged_26(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_26), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_27)); }
	inline bool get_m_ShouldRecalculate_27() const { return ___m_ShouldRecalculate_27; }
	inline bool* get_address_of_m_ShouldRecalculate_27() { return &___m_ShouldRecalculate_27; }
	inline void set_m_ShouldRecalculate_27(bool value)
	{
		___m_ShouldRecalculate_27 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_28)); }
	inline int32_t get_m_StencilValue_28() const { return ___m_StencilValue_28; }
	inline int32_t* get_address_of_m_StencilValue_28() { return &___m_StencilValue_28; }
	inline void set_m_StencilValue_28(int32_t value)
	{
		___m_StencilValue_28 = value;
	}

	inline static int32_t get_offset_of_m_Corners_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_29)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_29() const { return ___m_Corners_29; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_29() { return &___m_Corners_29; }
	inline void set_m_Corners_29(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_29), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_TDA46A5925C6A2101217C9F52C855B5C1A36A7A0F_H
#ifndef TEXT_TE9317B57477F4B50AA4C16F460DE6F82DAD6D030_H
#define TEXT_TE9317B57477F4B50AA4C16F460DE6F82DAD6D030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * ___m_FontData_30;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_31;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCache_32;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCacheForLayout_33;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_35;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_TempVerts_36;

public:
	inline static int32_t get_offset_of_m_FontData_30() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_FontData_30)); }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * get_m_FontData_30() const { return ___m_FontData_30; }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 ** get_address_of_m_FontData_30() { return &___m_FontData_30; }
	inline void set_m_FontData_30(FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * value)
	{
		___m_FontData_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_30), value);
	}

	inline static int32_t get_offset_of_m_Text_31() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_Text_31)); }
	inline String_t* get_m_Text_31() const { return ___m_Text_31; }
	inline String_t** get_address_of_m_Text_31() { return &___m_Text_31; }
	inline void set_m_Text_31(String_t* value)
	{
		___m_Text_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_31), value);
	}

	inline static int32_t get_offset_of_m_TextCache_32() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCache_32)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCache_32() const { return ___m_TextCache_32; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCache_32() { return &___m_TextCache_32; }
	inline void set_m_TextCache_32(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCache_32 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_32), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_33() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCacheForLayout_33)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCacheForLayout_33() const { return ___m_TextCacheForLayout_33; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCacheForLayout_33() { return &___m_TextCacheForLayout_33; }
	inline void set_m_TextCacheForLayout_33(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCacheForLayout_33 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_33), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_35() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_DisableFontTextureRebuiltCallback_35)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_35() const { return ___m_DisableFontTextureRebuiltCallback_35; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_35() { return &___m_DisableFontTextureRebuiltCallback_35; }
	inline void set_m_DisableFontTextureRebuiltCallback_35(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_35 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_36() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TempVerts_36)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_TempVerts_36() const { return ___m_TempVerts_36; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_TempVerts_36() { return &___m_TempVerts_36; }
	inline void set_m_TempVerts_36(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_TempVerts_36 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_36), value);
	}
};

struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultText_34;

public:
	inline static int32_t get_offset_of_s_DefaultText_34() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields, ___s_DefaultText_34)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultText_34() const { return ___s_DefaultText_34; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultText_34() { return &___s_DefaultText_34; }
	inline void set_s_DefaultText_34(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultText_34 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_34), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_TE9317B57477F4B50AA4C16F460DE6F82DAD6D030_H
// PieceContainerControl[]
struct PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * m_Items[1];

public:
	inline PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// PieceContainerObject[]
struct PieceContainerObjectU5BU5D_t04002C7EAC175CFD098187B608736779B7C0338C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * m_Items[1];

public:
	inline PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Boolean[]
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Collections.Generic.List`1<System.Int32>[0...,0...]
struct List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * m_Items[1];

public:
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C  List_1_GetEnumerator_m83178F038A7D4A7E9B0731B7D3078EDCF6FFD0EC_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
extern "C" IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m88A0089A1A4EEBC3017E2DA569A01C7919B10945_gshared (Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m113E33A615748C69D63D1245F5FD820B4B3D43F7_gshared (Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_mBA3B0129DABD8274AF3497CC93E6A2DEA0A23892_gshared (Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" IL2CPP_METHOD_ATTR void List_1_Clear_mC455BD77767538B1E02BE31A5E915DEE70E7D88C_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mB62D52423AF52EEC13B4317DD86E6A5BBDF41BD2_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7984BA6C664D8EAE284C168D0568FE2B9136A033_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m41E09C4CA476451FE275573062956CED105CB79A_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_m0A52F3C5B5FF663BE30EF619B4D961185A4C97EC_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
extern "C" IL2CPP_METHOD_ATTR bool List_1_Contains_mE08D561E86879A26245096C572A8593279383FDB_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Insert_m327E513FB78F72441BBF2756AFCC788F89A4FA52_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(!0)
extern "C" IL2CPP_METHOD_ATTR bool List_1_Contains_m275CA0DC5737E7EF9DBEAC629F8DE280CFFA96D6_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
extern "C" IL2CPP_METHOD_ATTR bool List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * p0, const RuntimeMethod* method);

// System.Void AggressiveCPUPlayer::CalculateMove()
extern "C" IL2CPP_METHOD_ATTR void AggressiveCPUPlayer_CalculateMove_m1298E0225AE45989969864A8160E48FC3B321F82 (AggressiveCPUPlayer_tBDE793DDA745B385FC729056AF9F131CEEEB9981 * __this, const RuntimeMethod* method);
// System.Void Player::SelectNext(System.String)
extern "C" IL2CPP_METHOD_ATTR void Player_SelectNext_mD827DEF00E75438BAF40DBB152B91AFAD064A24F (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, String_t* ___direction0, const RuntimeMethod* method);
// System.Void MoveControl::SelectPiece()
extern "C" IL2CPP_METHOD_ATTR void MoveControl_SelectPiece_m0393DE8C62C80286EB7F4334DDFB67CFA59FC92F (MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * __this, const RuntimeMethod* method);
// System.Void MoveControl::SelectMove()
extern "C" IL2CPP_METHOD_ATTR void MoveControl_SelectMove_m876440D568B9B4A54DCFE586D8F75FAC5117EBB8 (MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<PieceContainerControl> MoveControl::GetAvailableSpots()
extern "C" IL2CPP_METHOD_ATTR List_1_t0CB551171B4CABEF84BD812574C218CD745F2C52 * MoveControl_GetAvailableSpots_mC1E766807D7E189A557CF0A2DEA9D8F3C6CFB740 (MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<PieceContainerControl>::GetEnumerator()
inline Enumerator_t422BFABDF038794D7A98B5F09879A0938CEFB2EA  List_1_GetEnumerator_mD6AC64C64168AED925239A40FD05D6CB30410727 (List_1_t0CB551171B4CABEF84BD812574C218CD745F2C52 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t422BFABDF038794D7A98B5F09879A0938CEFB2EA  (*) (List_1_t0CB551171B4CABEF84BD812574C218CD745F2C52 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<PieceContainerControl>::get_Current()
inline PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * Enumerator_get_Current_m65896A36F23F309356BFD5A230FE9ECAFB54070A (Enumerator_t422BFABDF038794D7A98B5F09879A0938CEFB2EA * __this, const RuntimeMethod* method)
{
	return ((  PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * (*) (Enumerator_t422BFABDF038794D7A98B5F09879A0938CEFB2EA *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
inline Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C  List_1_GetEnumerator_m83178F038A7D4A7E9B0731B7D3078EDCF6FFD0EC (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C  (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))List_1_GetEnumerator_m83178F038A7D4A7E9B0731B7D3078EDCF6FFD0EC_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
inline int32_t Enumerator_get_Current_m88A0089A1A4EEBC3017E2DA569A01C7919B10945 (Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C *, const RuntimeMethod*))Enumerator_get_Current_m88A0089A1A4EEBC3017E2DA569A01C7919B10945_gshared)(__this, method);
}
// System.Void GameState::.ctor(GameControl)
extern "C" IL2CPP_METHOD_ATTR void GameState__ctor_mDA02CC179CF6995410F44B4BCEEAD2BCFF5EE062 (GameState_t26C77D92567E12173718C059731CF9EB15949FF1 * __this, GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * ___initGameMaster0, const RuntimeMethod* method);
// System.Int32 GameState::GetNumOpponentsInJail(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR int32_t GameState_GetNumOpponentsInJail_mF7D0B70199FE317645897A1CE537E744067308D1 (GameState_t26C77D92567E12173718C059731CF9EB15949FF1 * __this, bool ___isBlack0, const RuntimeMethod* method);
// System.Void GameState::MakeMove(System.Int32,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GameState_MakeMove_m24F6C2551DFCED28DA0D08C865CCEEADC6929F22 (GameState_t26C77D92567E12173718C059731CF9EB15949FF1 * __this, int32_t ___initPosition0, int32_t ___endPosition1, bool ___isBlack2, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
inline bool Enumerator_MoveNext_m113E33A615748C69D63D1245F5FD820B4B3D43F7 (Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C *, const RuntimeMethod*))Enumerator_MoveNext_m113E33A615748C69D63D1245F5FD820B4B3D43F7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::Dispose()
inline void Enumerator_Dispose_mBA3B0129DABD8274AF3497CC93E6A2DEA0A23892 (Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C *, const RuntimeMethod*))Enumerator_Dispose_mBA3B0129DABD8274AF3497CC93E6A2DEA0A23892_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<PieceContainerControl>::MoveNext()
inline bool Enumerator_MoveNext_m274ED660B6223B4FFCDFE8D7B9F938336F13D8E1 (Enumerator_t422BFABDF038794D7A98B5F09879A0938CEFB2EA * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t422BFABDF038794D7A98B5F09879A0938CEFB2EA *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<PieceContainerControl>::Dispose()
inline void Enumerator_Dispose_mDB5F6C444FF08182A17C89BBBE4361D21B22D9C1 (Enumerator_t422BFABDF038794D7A98B5F09879A0938CEFB2EA * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t422BFABDF038794D7A98B5F09879A0938CEFB2EA *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Void Player::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Player__ctor_m8F4AB650C5E2DE406B3C65EA8F662013458D85E2 (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4 (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_gshared)(__this, method);
}
// System.Void PieceContainerControl::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PieceContainerControl__ctor_mD4344D0526B59AEFC1F00D4521A7572D37FD6742 (PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * __this, const RuntimeMethod* method);
// System.Boolean System.String::EndsWith(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_EndsWith_mE4F039DCC2A9FCB8C1ED2D04B00A35E3CE16DE99 (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m70B8A20433AEEDEB942CD3EEC229497AB693E9D6 (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60  List_1_GetEnumerator_mF3F7C6A691B033A8369791D6DDBFE927804CDAB6 (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60  (*) (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Enumerator_get_Current_m2423588CAA3D28740E46D88133E7B22998378380 (Enumerator_t42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60 * __this, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (Enumerator_t42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_m94A913D452C8522AD16D2EB42D46016D83D86112 (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 *, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_mF998290EE501F2F7CA8A67995AAE77B29547C3C8 (Enumerator_t42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m0C9F007B48F37CD7F09430C3C1B407ACE6213812 (Enumerator_t42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
inline void List_1_Clear_mC455BD77767538B1E02BE31A5E915DEE70E7D88C (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))List_1_Clear_mC455BD77767538B1E02BE31A5E915DEE70E7D88C_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_mB62D52423AF52EEC13B4317DD86E6A5BBDF41BD2 (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))List_1_get_Item_mB62D52423AF52EEC13B4317DD86E6A5BBDF41BD2_gshared)(__this, p0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35 (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
inline void List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771 (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_gshared)(__this, p0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_m7984BA6C664D8EAE284C168D0568FE2B9136A033 (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))List_1_get_Count_m7984BA6C664D8EAE284C168D0568FE2B9136A033_gshared)(__this, method);
}
// System.Void BaseControl::CheckAbove(System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void BaseControl_CheckAbove_m67FC1EFDA64F4B227F473DF216CB70BDF27ED654 (BaseControl_tA80FAE98EF4187F0C02A06E15CA0EBABDF1AA171 * __this, int32_t ___roll0, bool ___black1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05 (float p0, float p1, float p2, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::RotateTowards(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_RotateTowards_m3AFE60D0BA85FC9B7056433278144249942DCE91 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * GameObject_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mBAC50AEEACC94DE12B47C6D6A5227051B1C6DE12 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m41E09C4CA476451FE275573062956CED105CB79A_gshared)(__this, method);
}
// System.Void DiceControl::SetSprite(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void DiceControl_SetSprite_m4BBE869E0A0C58726B5B9D6F0F50618B94059DD7 (DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A * __this, int32_t ___rollnum0, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
extern "C" IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_m9F5C8B2007AA03FAB66F0CB61260349DF1E28611 (SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * __this, Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * p0, const RuntimeMethod* method);
// System.Void GameControl::GetAllSpots()
extern "C" IL2CPP_METHOD_ATTR void GameControl_GetAllSpots_m9321FCE683DCA21668EC75C663AB798029834C4E (GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * __this, const RuntimeMethod* method);
// System.Void GameControl::SetBaseSpots()
extern "C" IL2CPP_METHOD_ATTR void GameControl_SetBaseSpots_mAFFF48DA97026BD259DC9AFFDB92D73522833F07 (GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * __this, const RuntimeMethod* method);
// System.Void GameControl::SetJailSpots()
extern "C" IL2CPP_METHOD_ATTR void GameControl_SetJailSpots_m97A0994A0ADFEB630B354385CA897B18D23F6F47 (GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * __this, const RuntimeMethod* method);
// System.Void GameControl::InitializeAllSpotsSpotObjects()
extern "C" IL2CPP_METHOD_ATTR void GameControl_InitializeAllSpotsSpotObjects_m4B4B395D328B6FA08EAC28E03EF5DD8CAB2CAF20 (GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool p0, const RuntimeMethod* method);
// System.Void GameControl::FindDice()
extern "C" IL2CPP_METHOD_ATTR void GameControl_FindDice_m3AADDCB64CB0CE6352E0C4A281704DF8BC2711C7 (GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void GameControl::SetMessage(System.String)
extern "C" IL2CPP_METHOD_ATTR void GameControl_SetMessage_m2B68D9292611602C838B56E43E9906187EC57710 (GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * __this, String_t* ___message0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.MeshRenderer>()
inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * Component_GetComponentInChildren_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_mC210673BE9A285437FF73A2988A9DBAAF9FE337E (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m0A52F3C5B5FF663BE30EF619B4D961185A4C97EC_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, bool p0, const RuntimeMethod* method);
// System.Void GameControl::BlankDiceRollDisplays()
extern "C" IL2CPP_METHOD_ATTR void GameControl_BlankDiceRollDisplays_mC5486A40E237FD1CDFA1EA55A16544CF1112F5A1 (GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD (String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<DiceControl>()
inline DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A * GameObject_GetComponent_TisDiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A_mA7294B4DDA340D3490D437E1FB38545C36FF114C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m41E09C4CA476451FE275573062956CED105CB79A_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<DiceControl>()
inline DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A * Component_GetComponent_TisDiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A_mDB97F259E9DB59D7D2294DA8A522156520D8CA38 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// System.String System.String::Concat(System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<PieceContainerObject>()
inline PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * GameObject_GetComponent_TisPieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740_mEBE6A83435EF657F4C4E1901E2974C48884D6509 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m41E09C4CA476451FE275573062956CED105CB79A_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, bool p0, const RuntimeMethod* method);
// System.Void PieceContainerObject::InitializeAllSpotsOnControl()
extern "C" IL2CPP_METHOD_ATTR void PieceContainerObject_InitializeAllSpotsOnControl_mB135EF5CEC7482685E373C277589C0907B65F5F9 (PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * __this, const RuntimeMethod* method);
// System.Void CameraControl::flip()
extern "C" IL2CPP_METHOD_ATTR void CameraControl_flip_mCE37E4EC3052C0F62C1E3D0F817AFB9C91FC197F (CameraControl_t747F330F97DFEE9545303C2301EE6AF2740E573E * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// PieceContainerControl PieceContainerFactory::GetPieceContainer(PieceContainerObject)
extern "C" IL2CPP_METHOD_ATTR PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * PieceContainerFactory_GetPieceContainer_m3903C61F41EBACD3D23853AE9F0D408AF3285B88 (PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * ___pObj0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8 (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared)(__this, p0, method);
}
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
extern "C" IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mD82B14BB87E1C811668BD1A2CFBC0CF3D4983FEA (int32_t p0, const RuntimeMethod* method);
// System.Void HumanPlayer::CancelSelection()
extern "C" IL2CPP_METHOD_ATTR void HumanPlayer_CancelSelection_m1DEA45382366491D0F09066E23D09EFC7B5AC073 (HumanPlayer_t6448D36C66FD3A6DEFB3ABA99F62999E1241A498 * __this, const RuntimeMethod* method);
// System.Void MoveControl::CancelSelection()
extern "C" IL2CPP_METHOD_ATTR void MoveControl_CancelSelection_m1C25FC982FC36F29ACC130093D62E16E9F10478A (MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * __this, const RuntimeMethod* method);
// System.Void Player::TurnOver()
extern "C" IL2CPP_METHOD_ATTR void Player_TurnOver_m06B503905EE06A60A81F8F84B9B13EEFDC610DAA (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator MoveControl::RollDice()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* MoveControl_RollDice_m5CA0045C2643BD5A22020689083A70C9D7AB46A5 (MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void MoveControl::SetAvailableLists()
extern "C" IL2CPP_METHOD_ATTR void MoveControl_SetAvailableLists_mA8EB1A2A28AD3D5AD3F62783239D1180BC0D6691 (MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * __this, const RuntimeMethod* method);
// System.Void MoveControl::SetInitialLocation()
extern "C" IL2CPP_METHOD_ATTR void MoveControl_SetInitialLocation_mA74441CD66879E56C07F20F1E9D0CB0582F92F53 (MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.Void Player::ResetVariables()
extern "C" IL2CPP_METHOD_ATTR void Player_ResetVariables_m39548A01AEBF1AF75527CD40B33B3162F0BF839C (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C" IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
extern "C" IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_red_m5562DD438931CF0D1FBBBB29BF7F8B752AF38957 (const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void Material_set_color_m127EAC5D3CC68359E72D12A2B3CE7428EFBB81C3 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  p0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * p0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<PieceContainerObject>::get_Count()
inline int32_t List_1_get_Count_m0C31F7C9173DD07B725516D783DFB61620B590EF (List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<PieceContainerObject>::get_Item(System.Int32)
inline PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * List_1_get_Item_m44957D0808C9611F1153F47A4ADAEAB5E45F1154 (List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * (*) (List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared)(__this, p0, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void MoveControl::SetAvailableMoves()
extern "C" IL2CPP_METHOD_ATTR void MoveControl_SetAvailableMoves_mFAE5AB39D16ADE9C818BBB9A4A5953F24DE640B9 (MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.Renderer>()
inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * Component_GetComponentInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m4BCA8F337F4B38409E86A82CAAD0E8B0FAD73A9A (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m0A52F3C5B5FF663BE30EF619B4D961185A4C97EC_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_yellow()
extern "C" IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_yellow_mC8BD62CCC364EA5FC4273D4C2E116D0E2DE135AE (const RuntimeMethod* method);
// System.Collections.IEnumerator Player::SelectedPiece()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Player_SelectedPiece_m140C2295FCC24479EB232A20F62A6572476EF2BC (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<PieceContainerObject>::GetEnumerator()
inline Enumerator_t1F0FA6B924150C3B8AC6B978C7B357655AE09E7E  List_1_GetEnumerator_mAB7898C7CE9AB2E9C46746EE8A59B15F3D0FDC77 (List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1F0FA6B924150C3B8AC6B978C7B357655AE09E7E  (*) (List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<PieceContainerObject>::get_Current()
inline PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * Enumerator_get_Current_mF0DE1937EBF26D34F5E9DFBC22625FB24B00741E (Enumerator_t1F0FA6B924150C3B8AC6B978C7B357655AE09E7E * __this, const RuntimeMethod* method)
{
	return ((  PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * (*) (Enumerator_t1F0FA6B924150C3B8AC6B978C7B357655AE09E7E *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared)(__this, method);
}
// System.Void PieceContainerObject::Outline(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void PieceContainerObject_Outline_m31733DE41B7718E396AB1407E80DA126EB5932F0 (PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * __this, bool ___on0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<PieceContainerObject>::MoveNext()
inline bool Enumerator_MoveNext_m5716AD325B321CFD021419D90C0A79E1686F853F (Enumerator_t1F0FA6B924150C3B8AC6B978C7B357655AE09E7E * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1F0FA6B924150C3B8AC6B978C7B357655AE09E7E *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<PieceContainerObject>::Dispose()
inline void Enumerator_Dispose_mE4B284926D2E4102C056748493BDCE45EDCF00A1 (Enumerator_t1F0FA6B924150C3B8AC6B978C7B357655AE09E7E * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1F0FA6B924150C3B8AC6B978C7B357655AE09E7E *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Int32 UnityEngine.Mathf::Abs(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Mathf_Abs_mC7DD2FB3789B5409055836D0E7D8227AD2099FDC (int32_t p0, const RuntimeMethod* method);
// System.Collections.IEnumerator Player::SelectedSpot()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Player_SelectedSpot_mD7BBEEB45769462312B02A821E8D1919488865F1 (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method);
// System.Void MoveControl::SetRollsUsed(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MoveControl_SetRollsUsed_mB1E1A593715ACC9FC0623A53F1053FDFEE58A69A (MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * __this, int32_t ___spotsmoved0, const RuntimeMethod* method);
// Player PlayerFactory::GetPlayer(System.String)
extern "C" IL2CPP_METHOD_ATTR Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * PlayerFactory_GetPlayer_m97FF956EFDD2208AF1833C4519D09D7F5A53E183 (String_t* ___playerType0, const RuntimeMethod* method);
// System.Void Player::SetMover(MoveControl)
extern "C" IL2CPP_METHOD_ATTR void Player_SetMover_mF3F58D86F0CA15BD025CAF8527410C7EF8D55425 (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * ___paramMoveCont0, const RuntimeMethod* method);
// System.Void MoveControl::SetUsedRoll(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MoveControl_SetUsedRoll_mC7EDCDE6309C11C4F19CDF4E86A42FBFCAC0071F (MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * __this, int32_t ___x0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void MoveControl/<RollDice>d__43::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CRollDiceU3Ed__43__ctor_mD5A32F5C603E0785C09046DDC321538D90220887 (U3CRollDiceU3Ed__43_t514A39DE6611616314A8018F4CB2DE9DC4BA3891 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<PieceContainerObject>::Clear()
inline void List_1_Clear_mEA71FAB9784BA98028A2DCE5AD1BACFA52B6BA7D (List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 *, const RuntimeMethod*))List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared)(__this, method);
}
// System.Boolean MoveControl::PickingFromJail()
extern "C" IL2CPP_METHOD_ATTR bool MoveControl_PickingFromJail_m901F3B16893EFC198B47031889655F03CB171A97 (MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<PieceContainerObject>::Add(!0)
inline void List_1_Add_m92423B6E35D20B33D4FD89EA94A93D79784337C4 (List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * __this, PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 *, PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.List`1<PieceContainerObject>::Contains(!0)
inline bool List_1_Contains_mD404D6E44C2171AA3E6D6B6018BAB093F6DD7F35 (List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * __this, PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 *, PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 *, const RuntimeMethod*))List_1_Contains_mE08D561E86879A26245096C572A8593279383FDB_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<PieceContainerObject>::Insert(System.Int32,!0)
inline void List_1_Insert_m7D289E1660E13E8B4B08110336ACC2D4FE341B61 (List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * __this, int32_t p0, PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * p1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 *, int32_t, PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 *, const RuntimeMethod*))List_1_Insert_m327E513FB78F72441BBF2756AFCC788F89A4FA52_gshared)(__this, p0, p1, method);
}
// System.Boolean BaseControl::BearingOff()
extern "C" IL2CPP_METHOD_ATTR bool BaseControl_BearingOff_mE095CAF6C658C1332F1158ED5CDE7B4775A5B92E (BaseControl_tA80FAE98EF4187F0C02A06E15CA0EBABDF1AA171 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(!0)
inline bool List_1_Contains_m275CA0DC5737E7EF9DBEAC629F8DE280CFFA96D6 (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))List_1_Contains_m275CA0DC5737E7EF9DBEAC629F8DE280CFFA96D6_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<PieceContainerControl>::.ctor()
inline void List_1__ctor_mE8F1273D4966F545C67F80329001C3B6D3064EAC (List_1_t0CB551171B4CABEF84BD812574C218CD745F2C52 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0CB551171B4CABEF84BD812574C218CD745F2C52 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<PieceContainerControl>::Add(!0)
inline void List_1_Add_m5D4827E13E6EF65373ACF3260BB3048664B2717A (List_1_t0CB551171B4CABEF84BD812574C218CD745F2C52 * __this, PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0CB551171B4CABEF84BD812574C218CD745F2C52 *, PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<PieceContainerObject>::.ctor()
inline void List_1__ctor_m077452966B5850AC891DA08DC799A8C50E03D7EE (List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780 (int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Void GameControl::DisplayDice()
extern "C" IL2CPP_METHOD_ATTR void GameControl_DisplayDice_m03BC666E8C65F6B00F3206BCEAD49AFAE0596856 (GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSecondsRealtime::.ctor(System.Single)
extern "C" IL2CPP_METHOD_ATTR void WaitForSecondsRealtime__ctor_m775503EC1F4963D8E5BBDD7989B40F6A000E0525 (WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * __this, float p0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Remove(!0)
inline bool List_1_Remove_mC05369CBB846172964FD487ACC41F6E543298935 (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 *, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared)(__this, p0, method);
}
// System.Void SpotControl::.ctor(System.String,System.Collections.Generic.List`1<UnityEngine.GameObject>)
extern "C" IL2CPP_METHOD_ATTR void SpotControl__ctor_m98F34514ADC10157E25A9C1844DDF75F8CA74FDD (SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * __this, String_t* ___name0, List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * ___initPieces1, const RuntimeMethod* method);
// System.Void BaseControl::.ctor(System.String,GameControl,System.Collections.Generic.List`1<UnityEngine.GameObject>)
extern "C" IL2CPP_METHOD_ATTR void BaseControl__ctor_m470069230D642C2E9C16F7727721E3CBEC649A2E (BaseControl_tA80FAE98EF4187F0C02A06E15CA0EBABDF1AA171 * __this, String_t* ___name0, GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * ___gm1, List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * ___initPieces2, const RuntimeMethod* method);
// System.Void JailControl::.ctor(System.String,GameControl,System.Collections.Generic.List`1<UnityEngine.GameObject>)
extern "C" IL2CPP_METHOD_ATTR void JailControl__ctor_m59F6E56058E8FBBC7E637DAE39816D667C74B1D4 (JailControl_tB91171D46728EC0A770E97697349D03D30A694AE * __this, String_t* ___name0, GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * ___gm1, List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * ___initPieces2, const RuntimeMethod* method);
// System.Void SpotControl::.ctor(SpotControl)
extern "C" IL2CPP_METHOD_ATTR void SpotControl__ctor_m2BA36A175BD88743D6E1C49BA3460A84740AB7EC (SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * __this, SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * ___pcc0, const RuntimeMethod* method);
// System.Void BaseControl::.ctor(PieceContainerControl)
extern "C" IL2CPP_METHOD_ATTR void BaseControl__ctor_m30135AA5F780B53080E1EC5AA9593CE1293A6DC3 (BaseControl_tA80FAE98EF4187F0C02A06E15CA0EBABDF1AA171 * __this, PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * ___pcc0, const RuntimeMethod* method);
// System.Void JailControl::.ctor(PieceContainerControl)
extern "C" IL2CPP_METHOD_ATTR void JailControl__ctor_m7D87CBA6AF7F7472EE890079EC67633EE00D57C4 (JailControl_tB91171D46728EC0A770E97697349D03D30A694AE * __this, PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * ___pcc0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<GameControl>()
inline GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * GameObject_GetComponent_TisGameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248_m9FF2D738368C8C59E83F21E2F67C8801B66795FE (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m41E09C4CA476451FE275573062956CED105CB79A_gshared)(__this, method);
}
// System.String UnityEngine.Object::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// PieceContainerControl PieceContainerFactory::GetPieceContainer(System.String,System.String,GameControl,System.Collections.Generic.List`1<UnityEngine.GameObject>)
extern "C" IL2CPP_METHOD_ATTR PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * PieceContainerFactory_GetPieceContainer_m9D4595FDDD7FB2CEB306759CE755BD016722D823 (String_t* ___pcType0, String_t* ___name1, GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * ___gm2, List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * ___pieces3, const RuntimeMethod* method);
// System.Void SpotControl::InitializeOtherPieceContainerControls(GameControl)
extern "C" IL2CPP_METHOD_ATTR void SpotControl_InitializeOtherPieceContainerControls_m812745CC816273E29158E3E7FADAFC4CF6A7FEF3 (SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * __this, GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * ___gm0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Transform_Rotate_m6F7F297A2AF39309B4B8F537CCF49A143896CFBA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, float p1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_Find_m673797B6329C2669A543904532ABA1680DA4EAD1 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, String_t* p0, const RuntimeMethod* method);
// System.Void GameControl::SwitchTurns()
extern "C" IL2CPP_METHOD_ATTR void GameControl_SwitchTurns_mB5DB02B8B5D0D52835996DFC60BE6D3D076D6380 (GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * __this, const RuntimeMethod* method);
// System.Void Player/<SelectedPiece>d__10::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CSelectedPieceU3Ed__10__ctor_mD6B2DC3E5112A48B5741FEE4BF967102072A33E0 (U3CSelectedPieceU3Ed__10_t38BD5B408C9AF6575D183F9FEFCAEFF9CDB992D1 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Player/<SelectedSpot>d__11::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CSelectedSpotU3Ed__11__ctor_m6814CB3B281EA6EA8CCC8B1DDDDA34DFDD824A0F (U3CSelectedSpotU3Ed__11_tFCDA30F36C6CAFBEE5F6801B22C4D9349F628040 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void MoveControl::SelectNextSpot(System.String)
extern "C" IL2CPP_METHOD_ATTR void MoveControl_SelectNextSpot_m7ED64A857875FA5E14F881B2505E72FD6E20D358 (MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * __this, String_t* ___direction0, const RuntimeMethod* method);
// System.Void MoveControl::SelectNextMove(System.String)
extern "C" IL2CPP_METHOD_ATTR void MoveControl_SelectNextMove_mFFE4350A74AE9DE5A37313F49B66D0D109723785 (MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * __this, String_t* ___direction0, const RuntimeMethod* method);
// System.Void MoveControl::SelectFirstSpot()
extern "C" IL2CPP_METHOD_ATTR void MoveControl_SelectFirstSpot_mE4AF031F7958B630BE469C1C15C1ED1E16EE6457 (MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * __this, const RuntimeMethod* method);
// System.Void MoveControl::SelectFirstMove()
extern "C" IL2CPP_METHOD_ATTR void MoveControl_SelectFirstMove_m4B43D38DC0A36FEE6B7D2FAF38B1E9AF057262CA (MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * __this, const RuntimeMethod* method);
// System.Void Player::SelectFirst()
extern "C" IL2CPP_METHOD_ATTR void Player_SelectFirst_m30506D0C281AF5496EEC58A459B4577346710EFB (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method);
// System.Void HumanPlayer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void HumanPlayer__ctor_m9F4474FEF291FA1C478FBE37DD105F8AA5BF8C80 (HumanPlayer_t6448D36C66FD3A6DEFB3ABA99F62999E1241A498 * __this, const RuntimeMethod* method);
// System.Void RandomCPUPlayer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void RandomCPUPlayer__ctor_mF7A3A7DDED2E6A0A340C1DE99ACC19E69B51676C (RandomCPUPlayer_t51F7C1747AF62AD10CC453DAC97741A0607B45B0 * __this, const RuntimeMethod* method);
// System.Void SimpleCPUPlayer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SimpleCPUPlayer__ctor_m6E65AADBE5C33E4A2650E3F282CA024BB18C551C (SimpleCPUPlayer_tB953C232605B5C16CC52004A155589235FE7B596 * __this, const RuntimeMethod* method);
// System.Void AggressiveCPUPlayer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AggressiveCPUPlayer__ctor_m71290793AB5566FA528586854EC832AEAD049F42 (AggressiveCPUPlayer_tBDE793DDA745B385FC729056AF9F131CEEEB9981 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<MoveControl>()
inline MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * GameObject_GetComponent_TisMoveControl_t61FB98930C721FC56C880750FD267C839C2E4401_mAF69BF76C830F714A0ACFD04D822963962CCE88B (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m41E09C4CA476451FE275573062956CED105CB79A_gshared)(__this, method);
}
// System.Void MoveControl::SetPlayer(System.String)
extern "C" IL2CPP_METHOD_ATTR void MoveControl_SetPlayer_mCB89B4ECBC11BDD92227B4EC5273B21AF30A6041 (MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * __this, String_t* ___playerType0, const RuntimeMethod* method);
// System.Int32 MoveControl::GetNumAvailable(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR int32_t MoveControl_GetNumAvailable_m2AC170C4F83EEDF65768B2ED70F9A4ED24A4B417 (MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * __this, bool ___PieceSelected0, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96 (String_t* __this, int32_t p0, const RuntimeMethod* method);
// System.Double System.Char::GetNumericValue(System.Char)
extern "C" IL2CPP_METHOD_ATTR double Char_GetNumericValue_mFE39C323BE137F0034BB68158EBF3DAE3016B0DB (Il2CppChar p0, const RuntimeMethod* method);
// System.Void SpotControl::SetControlledVariables()
extern "C" IL2CPP_METHOD_ATTR void SpotControl_SetControlledVariables_m9BE1609DC644A479FABBFA4365877A490FF390FA (SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * __this, const RuntimeMethod* method);
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
// System.Void AggressiveCPUPlayer::PickPieceOrSpot()
extern "C" IL2CPP_METHOD_ATTR void AggressiveCPUPlayer_PickPieceOrSpot_m26D651C47FAAA51B7DADFF1F44011B7528464E70 (AggressiveCPUPlayer_tBDE793DDA745B385FC729056AF9F131CEEEB9981 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AggressiveCPUPlayer_PickPieceOrSpot_m26D651C47FAAA51B7DADFF1F44011B7528464E70_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 *)__this)->get_listenForPick_2();
		if (!L_0)
		{
			goto IL_003f;
		}
	}
	{
		((Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 *)__this)->set_listenForPick_2((bool)0);
		bool L_1 = __this->get_moveChosen_7();
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		AggressiveCPUPlayer_CalculateMove_m1298E0225AE45989969864A8160E48FC3B321F82(__this, /*hidden argument*/NULL);
	}

IL_001d:
	{
		bool L_2 = ((Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 *)__this)->get_pieceSelected_1();
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_3 = __this->get_selectedSpot_4();
		__this->set_ups_6(L_3);
		return;
	}

IL_0032:
	{
		int32_t L_4 = __this->get_selectedMove_5();
		__this->set_ups_6(L_4);
		return;
	}

IL_003f:
	{
		int32_t L_5 = __this->get_ups_6();
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0062;
		}
	}
	{
		Player_SelectNext_mD827DEF00E75438BAF40DBB152B91AFAD064A24F(__this, _stringLiteral2038BDEC9210202D0D9D74839E3925FF0CD91BA1, /*hidden argument*/NULL);
		int32_t L_6 = __this->get_ups_6();
		__this->set_ups_6(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)));
		return;
	}

IL_0062:
	{
		int32_t L_7 = __this->get_ups_6();
		if (L_7)
		{
			goto IL_0098;
		}
	}
	{
		bool L_8 = ((Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 *)__this)->get_pieceSelected_1();
		if (L_8)
		{
			goto IL_007f;
		}
	}
	{
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_9 = ((Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 *)__this)->get_moveCont_0();
		MoveControl_SelectPiece_m0393DE8C62C80286EB7F4334DDFB67CFA59FC92F(L_9, /*hidden argument*/NULL);
		goto IL_0091;
	}

IL_007f:
	{
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_10 = ((Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 *)__this)->get_moveCont_0();
		MoveControl_SelectMove_m876440D568B9B4A54DCFE586D8F75FAC5117EBB8(L_10, /*hidden argument*/NULL);
		__this->set_moveChosen_7((bool)0);
	}

IL_0091:
	{
		__this->set_ups_6((-1));
	}

IL_0098:
	{
		return;
	}
}
// System.Void AggressiveCPUPlayer::CalculateMove()
extern "C" IL2CPP_METHOD_ATTR void AggressiveCPUPlayer_CalculateMove_m1298E0225AE45989969864A8160E48FC3B321F82 (AggressiveCPUPlayer_tBDE793DDA745B385FC729056AF9F131CEEEB9981 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AggressiveCPUPlayer_CalculateMove_m1298E0225AE45989969864A8160E48FC3B321F82_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t422BFABDF038794D7A98B5F09879A0938CEFB2EA  V_0;
	memset(&V_0, 0, sizeof(V_0));
	PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * V_1 = NULL;
	Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C  V_2;
	memset(&V_2, 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		__this->set_moveChosen_7((bool)0);
		__this->set_selectedMove_5(0);
		__this->set_selectedSpot_4(0);
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_0 = ((Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 *)__this)->get_moveCont_0();
		List_1_t0CB551171B4CABEF84BD812574C218CD745F2C52 * L_1 = MoveControl_GetAvailableSpots_mC1E766807D7E189A557CF0A2DEA9D8F3C6CFB740(L_0, /*hidden argument*/NULL);
		Enumerator_t422BFABDF038794D7A98B5F09879A0938CEFB2EA  L_2 = List_1_GetEnumerator_mD6AC64C64168AED925239A40FD05D6CB30410727(L_1, /*hidden argument*/List_1_GetEnumerator_mD6AC64C64168AED925239A40FD05D6CB30410727_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0026:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00e7;
		}

IL_002b:
		{
			PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_3 = Enumerator_get_Current_m65896A36F23F309356BFD5A230FE9ECAFB54070A((Enumerator_t422BFABDF038794D7A98B5F09879A0938CEFB2EA *)(&V_0), /*hidden argument*/Enumerator_get_Current_m65896A36F23F309356BFD5A230FE9ECAFB54070A_RuntimeMethod_var);
			V_1 = L_3;
			PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_4 = V_1;
			List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_5 = L_4->get_actualPossibleMoves_2();
			Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C  L_6 = List_1_GetEnumerator_m83178F038A7D4A7E9B0731B7D3078EDCF6FFD0EC(L_5, /*hidden argument*/List_1_GetEnumerator_m83178F038A7D4A7E9B0731B7D3078EDCF6FFD0EC_RuntimeMethod_var);
			V_2 = L_6;
		}

IL_003f:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00af;
			}

IL_0041:
			{
				int32_t L_7 = Enumerator_get_Current_m88A0089A1A4EEBC3017E2DA569A01C7919B10945((Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C *)(&V_2), /*hidden argument*/Enumerator_get_Current_m88A0089A1A4EEBC3017E2DA569A01C7919B10945_RuntimeMethod_var);
				V_3 = L_7;
				MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_8 = ((Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 *)__this)->get_moveCont_0();
				GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * L_9 = L_8->get_gameMaster_4();
				GameState_t26C77D92567E12173718C059731CF9EB15949FF1 * L_10 = (GameState_t26C77D92567E12173718C059731CF9EB15949FF1 *)il2cpp_codegen_object_new(GameState_t26C77D92567E12173718C059731CF9EB15949FF1_il2cpp_TypeInfo_var);
				GameState__ctor_mDA02CC179CF6995410F44B4BCEEAD2BCFF5EE062(L_10, L_9, /*hidden argument*/NULL);
				GameState_t26C77D92567E12173718C059731CF9EB15949FF1 * L_11 = L_10;
				MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_12 = ((Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 *)__this)->get_moveCont_0();
				bool L_13 = L_12->get_isBlack_27();
				int32_t L_14 = GameState_GetNumOpponentsInJail_mF7D0B70199FE317645897A1CE537E744067308D1(L_11, L_13, /*hidden argument*/NULL);
				V_4 = L_14;
				GameState_t26C77D92567E12173718C059731CF9EB15949FF1 * L_15 = L_11;
				PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_16 = V_1;
				int32_t L_17 = L_16->get_position_8();
				int32_t L_18 = V_3;
				MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_19 = ((Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 *)__this)->get_moveCont_0();
				bool L_20 = L_19->get_isBlack_27();
				GameState_MakeMove_m24F6C2551DFCED28DA0D08C865CCEEADC6929F22(L_15, L_17, L_18, L_20, /*hidden argument*/NULL);
				MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_21 = ((Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 *)__this)->get_moveCont_0();
				bool L_22 = L_21->get_isBlack_27();
				int32_t L_23 = GameState_GetNumOpponentsInJail_mF7D0B70199FE317645897A1CE537E744067308D1(L_15, L_22, /*hidden argument*/NULL);
				int32_t L_24 = V_4;
				if ((((int32_t)L_23) <= ((int32_t)L_24)))
				{
					goto IL_00a1;
				}
			}

IL_0098:
			{
				__this->set_moveChosen_7((bool)1);
				IL2CPP_LEAVE(0xC8, FINALLY_00ba);
			}

IL_00a1:
			{
				int32_t L_25 = __this->get_selectedMove_5();
				__this->set_selectedMove_5(((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1)));
			}

IL_00af:
			{
				bool L_26 = Enumerator_MoveNext_m113E33A615748C69D63D1245F5FD820B4B3D43F7((Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m113E33A615748C69D63D1245F5FD820B4B3D43F7_RuntimeMethod_var);
				if (L_26)
				{
					goto IL_0041;
				}
			}

IL_00b8:
			{
				IL2CPP_LEAVE(0xC8, FINALLY_00ba);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00ba;
		}

FINALLY_00ba:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_mBA3B0129DABD8274AF3497CC93E6A2DEA0A23892((Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C *)(&V_2), /*hidden argument*/Enumerator_Dispose_mBA3B0129DABD8274AF3497CC93E6A2DEA0A23892_RuntimeMethod_var);
			IL2CPP_END_FINALLY(186)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(186)
		{
			IL2CPP_JUMP_TBL(0xC8, IL_00c8)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_00c8:
		{
			bool L_27 = __this->get_moveChosen_7();
			if (!L_27)
			{
				goto IL_00d2;
			}
		}

IL_00d0:
		{
			IL2CPP_LEAVE(0x103, FINALLY_00f5);
		}

IL_00d2:
		{
			__this->set_selectedMove_5(0);
			int32_t L_28 = __this->get_selectedSpot_4();
			__this->set_selectedSpot_4(((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1)));
		}

IL_00e7:
		{
			bool L_29 = Enumerator_MoveNext_m274ED660B6223B4FFCDFE8D7B9F938336F13D8E1((Enumerator_t422BFABDF038794D7A98B5F09879A0938CEFB2EA *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m274ED660B6223B4FFCDFE8D7B9F938336F13D8E1_RuntimeMethod_var);
			if (L_29)
			{
				goto IL_002b;
			}
		}

IL_00f3:
		{
			IL2CPP_LEAVE(0x103, FINALLY_00f5);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00f5;
	}

FINALLY_00f5:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mDB5F6C444FF08182A17C89BBBE4361D21B22D9C1((Enumerator_t422BFABDF038794D7A98B5F09879A0938CEFB2EA *)(&V_0), /*hidden argument*/Enumerator_Dispose_mDB5F6C444FF08182A17C89BBBE4361D21B22D9C1_RuntimeMethod_var);
		IL2CPP_END_FINALLY(245)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(245)
	{
		IL2CPP_JUMP_TBL(0x103, IL_0103)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0103:
	{
		bool L_30 = __this->get_moveChosen_7();
		if (L_30)
		{
			goto IL_0119;
		}
	}
	{
		__this->set_moveChosen_7((bool)1);
		__this->set_selectedSpot_4(0);
	}

IL_0119:
	{
		return;
	}
}
// System.Void AggressiveCPUPlayer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AggressiveCPUPlayer__ctor_m71290793AB5566FA528586854EC832AEAD049F42 (AggressiveCPUPlayer_tBDE793DDA745B385FC729056AF9F131CEEEB9981 * __this, const RuntimeMethod* method)
{
	{
		__this->set_ups_6((-1));
		Player__ctor_m8F4AB650C5E2DE406B3C65EA8F662013458D85E2(__this, /*hidden argument*/NULL);
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
// System.Void BaseControl::.ctor(System.String,GameControl,System.Collections.Generic.List`1<UnityEngine.GameObject>)
extern "C" IL2CPP_METHOD_ATTR void BaseControl__ctor_m470069230D642C2E9C16F7727721E3CBEC649A2E (BaseControl_tA80FAE98EF4187F0C02A06E15CA0EBABDF1AA171 * __this, String_t* ___name0, GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * ___gm1, List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * ___initPieces2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseControl__ctor_m470069230D642C2E9C16F7727721E3CBEC649A2E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)il2cpp_codegen_object_new(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_il2cpp_TypeInfo_var);
		List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4(L_0, /*hidden argument*/List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_RuntimeMethod_var);
		__this->set_possibleMoves_11(L_0);
		PieceContainerControl__ctor_mD4344D0526B59AEFC1F00D4521A7572D37FD6742(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___name0;
		bool L_2 = String_EndsWith_mE4F039DCC2A9FCB8C1ED2D04B00A35E3CE16DE99(L_1, _stringLiteralB406FB57B29FC76F71864FBB37F0238045F84D9D, /*hidden argument*/NULL);
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_isBlack_10(L_2);
		PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* L_3 = (PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51*)SZArrayNew(PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51_il2cpp_TypeInfo_var, (uint32_t)((int32_t)24));
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_allSpots_0(L_3);
		V_0 = 0;
		goto IL_004c;
	}

IL_0033:
	{
		PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* L_4 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_allSpots_0();
		int32_t L_5 = V_0;
		GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * L_6 = ___gm1;
		PieceContainerObjectU5BU5D_t04002C7EAC175CFD098187B608736779B7C0338C* L_7 = L_6->get_allSpots_15();
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_11 = L_10->get_pcc_4();
		ArrayElementTypeCheck (L_4, L_11);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)L_11);
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_004c:
	{
		int32_t L_13 = V_0;
		GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * L_14 = ___gm1;
		PieceContainerObjectU5BU5D_t04002C7EAC175CFD098187B608736779B7C0338C* L_15 = L_14->get_allSpots_15();
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))))))
		{
			goto IL_0033;
		}
	}
	{
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_16 = ___initPieces2;
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_pieces_1(L_16);
		return;
	}
}
// System.Void BaseControl::.ctor(PieceContainerControl)
extern "C" IL2CPP_METHOD_ATTR void BaseControl__ctor_m30135AA5F780B53080E1EC5AA9593CE1293A6DC3 (BaseControl_tA80FAE98EF4187F0C02A06E15CA0EBABDF1AA171 * __this, PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * ___pcc0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseControl__ctor_m30135AA5F780B53080E1EC5AA9593CE1293A6DC3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60  V_0;
	memset(&V_0, 0, sizeof(V_0));
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)il2cpp_codegen_object_new(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_il2cpp_TypeInfo_var);
		List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4(L_0, /*hidden argument*/List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_RuntimeMethod_var);
		__this->set_possibleMoves_11(L_0);
		PieceContainerControl__ctor_mD4344D0526B59AEFC1F00D4521A7572D37FD6742(__this, /*hidden argument*/NULL);
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_1 = (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 *)il2cpp_codegen_object_new(List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650_il2cpp_TypeInfo_var);
		List_1__ctor_m70B8A20433AEEDEB942CD3EEC229497AB693E9D6(L_1, /*hidden argument*/List_1__ctor_m70B8A20433AEEDEB942CD3EEC229497AB693E9D6_RuntimeMethod_var);
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_pieces_1(L_1);
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_2 = ___pcc0;
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_3 = L_2->get_pieces_1();
		Enumerator_t42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60  L_4 = List_1_GetEnumerator_mF3F7C6A691B033A8369791D6DDBFE927804CDAB6(L_3, /*hidden argument*/List_1_GetEnumerator_mF3F7C6A691B033A8369791D6DDBFE927804CDAB6_RuntimeMethod_var);
		V_0 = L_4;
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003e;
		}

IL_002a:
		{
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Enumerator_get_Current_m2423588CAA3D28740E46D88133E7B22998378380((Enumerator_t42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m2423588CAA3D28740E46D88133E7B22998378380_RuntimeMethod_var);
			V_1 = L_5;
			List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_6 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_pieces_1();
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = V_1;
			List_1_Add_m94A913D452C8522AD16D2EB42D46016D83D86112(L_6, L_7, /*hidden argument*/List_1_Add_m94A913D452C8522AD16D2EB42D46016D83D86112_RuntimeMethod_var);
		}

IL_003e:
		{
			bool L_8 = Enumerator_MoveNext_mF998290EE501F2F7CA8A67995AAE77B29547C3C8((Enumerator_t42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mF998290EE501F2F7CA8A67995AAE77B29547C3C8_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_002a;
			}
		}

IL_0047:
		{
			IL2CPP_LEAVE(0x57, FINALLY_0049);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0049;
	}

FINALLY_0049:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m0C9F007B48F37CD7F09430C3C1B407ACE6213812((Enumerator_t42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m0C9F007B48F37CD7F09430C3C1B407ACE6213812_RuntimeMethod_var);
		IL2CPP_END_FINALLY(73)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(73)
	{
		IL2CPP_JUMP_TBL(0x57, IL_0057)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0057:
	{
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_9 = ___pcc0;
		int32_t L_10 = L_9->get_position_8();
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_position_8(L_10);
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_11 = ___pcc0;
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_12 = L_11->get_actualPossibleMoves_2();
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_actualPossibleMoves_2(L_12);
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_13 = ___pcc0;
		bool L_14 = L_13->get_isBlack_10();
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_isBlack_10(L_14);
		return;
	}
}
// System.Void BaseControl::InitializeOtherPieceContainerControls(PieceContainerControl[],PieceContainerControl,PieceContainerControl)
extern "C" IL2CPP_METHOD_ATTR void BaseControl_InitializeOtherPieceContainerControls_m600A99A20F96E2E0086A50831CA40958AF39195C (BaseControl_tA80FAE98EF4187F0C02A06E15CA0EBABDF1AA171 * __this, PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* ___arrPcc0, PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * ___whiteJail1, PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * ___blackJail2, const RuntimeMethod* method)
{
	{
		PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* L_0 = ___arrPcc0;
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_allSpots_0(L_0);
		return;
	}
}
// System.Void BaseControl::Start()
extern "C" IL2CPP_METHOD_ATTR void BaseControl_Start_m8E3DCE7F9019F58A5C9E878335C6641ACA1D3ABC (BaseControl_tA80FAE98EF4187F0C02A06E15CA0EBABDF1AA171 * __this, const RuntimeMethod* method)
{
	{
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_stackPieces_4((1.0f));
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_y_5((0.6f));
		bool L_0 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_isBlack_10();
		if (!L_0)
		{
			goto IL_003d;
		}
	}
	{
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_position_8((-1));
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_betweenPieces_3((0.22f));
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_initialPiece_6((-6.25f));
		goto IL_005b;
	}

IL_003d:
	{
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_position_8(((int32_t)24));
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_betweenPieces_3((-0.22f));
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_initialPiece_6((6.25f));
	}

IL_005b:
	{
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_changed_9((bool)1);
		return;
	}
}
// UnityEngine.Vector3 BaseControl::CalculatePiecePosition(System.Int32,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  BaseControl_CalculatePiecePosition_m9B00E446DC5EE07A25012F4E8E28B7D521329250 (BaseControl_tA80FAE98EF4187F0C02A06E15CA0EBABDF1AA171 * __this, int32_t ___x0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, const RuntimeMethod* method)
{
	{
		float L_0 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_initialPiece_6();
		float L_1 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_betweenPieces_3();
		int32_t L_2 = ___x0;
		float L_3 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_y_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___position1;
		float L_5 = L_4.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_6), ((float)il2cpp_codegen_add((float)L_0, (float)((float)il2cpp_codegen_multiply((float)L_1, (float)(((float)((float)L_2))))))), L_3, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void BaseControl::GetPossibleMoves(System.Boolean,System.Int32,System.Int32,System.Boolean[])
extern "C" IL2CPP_METHOD_ATTR void BaseControl_GetPossibleMoves_m7D3139A192333C98789D22F593DACEA5E620F555 (BaseControl_tA80FAE98EF4187F0C02A06E15CA0EBABDF1AA171 * __this, bool ___black0, int32_t ___roll11, int32_t ___roll22, BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* ___rollsUsed3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseControl_GetPossibleMoves_m7D3139A192333C98789D22F593DACEA5E620F555_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * V_1 = NULL;
	SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * V_2 = NULL;
	{
		int32_t L_0 = ___roll11;
		int32_t L_1 = ___roll22;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_2 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_actualPossibleMoves_2();
		List_1_Clear_mC455BD77767538B1E02BE31A5E915DEE70E7D88C(L_2, /*hidden argument*/List_1_Clear_mC455BD77767538B1E02BE31A5E915DEE70E7D88C_RuntimeMethod_var);
		PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* L_3 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_allSpots_0();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_4 = __this->get_possibleMoves_11();
		int32_t L_5 = ___roll11;
		int32_t L_6 = List_1_get_Item_mB62D52423AF52EEC13B4317DD86E6A5BBDF41BD2(L_4, ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)), /*hidden argument*/List_1_get_Item_mB62D52423AF52EEC13B4317DD86E6A5BBDF41BD2_RuntimeMethod_var);
		int32_t L_7 = L_6;
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_8 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = ((SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 *)CastclassClass((RuntimeObject*)L_8, SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86_il2cpp_TypeInfo_var));
		PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* L_9 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_allSpots_0();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_10 = __this->get_possibleMoves_11();
		int32_t L_11 = ___roll22;
		int32_t L_12 = List_1_get_Item_mB62D52423AF52EEC13B4317DD86E6A5BBDF41BD2(L_10, ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1)), /*hidden argument*/List_1_get_Item_mB62D52423AF52EEC13B4317DD86E6A5BBDF41BD2_RuntimeMethod_var);
		int32_t L_13 = L_12;
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_14 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		V_2 = ((SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 *)CastclassClass((RuntimeObject*)L_14, SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86_il2cpp_TypeInfo_var));
		SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * L_15 = V_1;
		bool L_16 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)L_15)->get_isBlack_10();
		bool L_17 = ___black0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_00a0;
		}
	}
	{
		SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * L_18 = V_1;
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_19 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)L_18)->get_pieces_1();
		int32_t L_20 = List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35(L_19, /*hidden argument*/List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35_RuntimeMethod_var);
		if ((((int32_t)L_20) <= ((int32_t)0)))
		{
			goto IL_00a0;
		}
	}
	{
		bool L_21 = V_0;
		if (L_21)
		{
			goto IL_0081;
		}
	}
	{
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_22 = ___rollsUsed3;
		int32_t L_23 = 0;
		uint8_t L_24 = (uint8_t)(L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		if (L_24)
		{
			goto IL_00a0;
		}
	}
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_25 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_actualPossibleMoves_2();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_26 = __this->get_possibleMoves_11();
		int32_t L_27 = ___roll11;
		int32_t L_28 = List_1_get_Item_mB62D52423AF52EEC13B4317DD86E6A5BBDF41BD2(L_26, ((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)1)), /*hidden argument*/List_1_get_Item_mB62D52423AF52EEC13B4317DD86E6A5BBDF41BD2_RuntimeMethod_var);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_25, L_28, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		goto IL_00a0;
	}

IL_0081:
	{
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_29 = ___rollsUsed3;
		int32_t L_30 = 3;
		uint8_t L_31 = (uint8_t)(L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		if (L_31)
		{
			goto IL_00a0;
		}
	}
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_32 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_actualPossibleMoves_2();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_33 = __this->get_possibleMoves_11();
		int32_t L_34 = ___roll11;
		int32_t L_35 = List_1_get_Item_mB62D52423AF52EEC13B4317DD86E6A5BBDF41BD2(L_33, ((int32_t)il2cpp_codegen_subtract((int32_t)L_34, (int32_t)1)), /*hidden argument*/List_1_get_Item_mB62D52423AF52EEC13B4317DD86E6A5BBDF41BD2_RuntimeMethod_var);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_32, L_35, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
	}

IL_00a0:
	{
		bool L_36 = V_0;
		if (L_36)
		{
			goto IL_00d9;
		}
	}
	{
		SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * L_37 = V_2;
		bool L_38 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)L_37)->get_isBlack_10();
		bool L_39 = ___black0;
		if ((!(((uint32_t)L_38) == ((uint32_t)L_39))))
		{
			goto IL_00d9;
		}
	}
	{
		SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * L_40 = V_2;
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_41 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)L_40)->get_pieces_1();
		int32_t L_42 = List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35(L_41, /*hidden argument*/List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35_RuntimeMethod_var);
		if ((((int32_t)L_42) <= ((int32_t)0)))
		{
			goto IL_00d9;
		}
	}
	{
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_43 = ___rollsUsed3;
		int32_t L_44 = 1;
		uint8_t L_45 = (uint8_t)(L_43)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_44));
		if (L_45)
		{
			goto IL_00d9;
		}
	}
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_46 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_actualPossibleMoves_2();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_47 = __this->get_possibleMoves_11();
		int32_t L_48 = ___roll22;
		int32_t L_49 = List_1_get_Item_mB62D52423AF52EEC13B4317DD86E6A5BBDF41BD2(L_47, ((int32_t)il2cpp_codegen_subtract((int32_t)L_48, (int32_t)1)), /*hidden argument*/List_1_get_Item_mB62D52423AF52EEC13B4317DD86E6A5BBDF41BD2_RuntimeMethod_var);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_46, L_49, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
	}

IL_00d9:
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_50 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_actualPossibleMoves_2();
		int32_t L_51 = List_1_get_Count_m7984BA6C664D8EAE284C168D0568FE2B9136A033(L_50, /*hidden argument*/List_1_get_Count_m7984BA6C664D8EAE284C168D0568FE2B9136A033_RuntimeMethod_var);
		if (L_51)
		{
			goto IL_0143;
		}
	}
	{
		bool L_52 = V_0;
		if (L_52)
		{
			goto IL_0135;
		}
	}
	{
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_53 = ___rollsUsed3;
		int32_t L_54 = 0;
		uint8_t L_55 = (uint8_t)(L_53)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_54));
		if (!L_55)
		{
			goto IL_00fe;
		}
	}
	{
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_56 = ___rollsUsed3;
		int32_t L_57 = 1;
		uint8_t L_58 = (uint8_t)(L_56)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_57));
		if (L_58)
		{
			goto IL_00fe;
		}
	}
	{
		int32_t L_59 = ___roll22;
		bool L_60 = ___black0;
		BaseControl_CheckAbove_m67FC1EFDA64F4B227F473DF216CB70BDF27ED654(__this, L_59, L_60, /*hidden argument*/NULL);
		return;
	}

IL_00fe:
	{
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_61 = ___rollsUsed3;
		int32_t L_62 = 0;
		uint8_t L_63 = (uint8_t)(L_61)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_62));
		if (L_63)
		{
			goto IL_0113;
		}
	}
	{
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_64 = ___rollsUsed3;
		int32_t L_65 = 1;
		uint8_t L_66 = (uint8_t)(L_64)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_65));
		if (!L_66)
		{
			goto IL_0113;
		}
	}
	{
		int32_t L_67 = ___roll11;
		bool L_68 = ___black0;
		BaseControl_CheckAbove_m67FC1EFDA64F4B227F473DF216CB70BDF27ED654(__this, L_67, L_68, /*hidden argument*/NULL);
		return;
	}

IL_0113:
	{
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_69 = ___rollsUsed3;
		int32_t L_70 = 0;
		uint8_t L_71 = (uint8_t)(L_69)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_70));
		if (L_71)
		{
			goto IL_0143;
		}
	}
	{
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_72 = ___rollsUsed3;
		int32_t L_73 = 1;
		uint8_t L_74 = (uint8_t)(L_72)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_73));
		if (L_74)
		{
			goto IL_0143;
		}
	}
	{
		int32_t L_75 = ___roll11;
		int32_t L_76 = ___roll22;
		if ((((int32_t)L_75) >= ((int32_t)L_76)))
		{
			goto IL_012c;
		}
	}
	{
		int32_t L_77 = ___roll11;
		bool L_78 = ___black0;
		BaseControl_CheckAbove_m67FC1EFDA64F4B227F473DF216CB70BDF27ED654(__this, L_77, L_78, /*hidden argument*/NULL);
		return;
	}

IL_012c:
	{
		int32_t L_79 = ___roll22;
		bool L_80 = ___black0;
		BaseControl_CheckAbove_m67FC1EFDA64F4B227F473DF216CB70BDF27ED654(__this, L_79, L_80, /*hidden argument*/NULL);
		return;
	}

IL_0135:
	{
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_81 = ___rollsUsed3;
		int32_t L_82 = 3;
		uint8_t L_83 = (uint8_t)(L_81)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_82));
		if (L_83)
		{
			goto IL_0143;
		}
	}
	{
		int32_t L_84 = ___roll11;
		bool L_85 = ___black0;
		BaseControl_CheckAbove_m67FC1EFDA64F4B227F473DF216CB70BDF27ED654(__this, L_84, L_85, /*hidden argument*/NULL);
	}

IL_0143:
	{
		return;
	}
}
// System.Void BaseControl::CalcPossibleMoves()
extern "C" IL2CPP_METHOD_ATTR void BaseControl_CalcPossibleMoves_m911BF0ADB8C609A764D905E2B366ADBEDE9B8ECF (BaseControl_tA80FAE98EF4187F0C02A06E15CA0EBABDF1AA171 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseControl_CalcPossibleMoves_m911BF0ADB8C609A764D905E2B366ADBEDE9B8ECF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 6;
		int32_t L_0 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_position_8();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)24)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)23);
		V_1 = ((int32_t)17);
		goto IL_0030;
	}

IL_0016:
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_1 = __this->get_possibleMoves_11();
		int32_t L_2 = V_0;
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_1, L_2, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		int32_t L_3 = V_1;
		int32_t L_4 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		goto IL_0030;
	}

IL_002c:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1));
	}

IL_0030:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_0016;
		}
	}
	{
		return;
	}
}
// System.Void BaseControl::CheckAbove(System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void BaseControl_CheckAbove_m67FC1EFDA64F4B227F473DF216CB70BDF27ED654 (BaseControl_tA80FAE98EF4187F0C02A06E15CA0EBABDF1AA171 * __this, int32_t ___roll0, bool ___black1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseControl_CheckAbove_m67FC1EFDA64F4B227F473DF216CB70BDF27ED654_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___roll0;
		V_1 = L_0;
		goto IL_0039;
	}

IL_0004:
	{
		PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* L_1 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_allSpots_0();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_2 = __this->get_possibleMoves_11();
		int32_t L_3 = V_1;
		int32_t L_4 = List_1_get_Item_mB62D52423AF52EEC13B4317DD86E6A5BBDF41BD2(L_2, L_3, /*hidden argument*/List_1_get_Item_mB62D52423AF52EEC13B4317DD86E6A5BBDF41BD2_RuntimeMethod_var);
		int32_t L_5 = L_4;
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_6 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = ((SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 *)CastclassClass((RuntimeObject*)L_6, SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86_il2cpp_TypeInfo_var));
		SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * L_7 = V_0;
		bool L_8 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)L_7)->get_isBlack_10();
		bool L_9 = ___black1;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0035;
		}
	}
	{
		SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * L_10 = V_0;
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_11 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)L_10)->get_pieces_1();
		int32_t L_12 = List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35(L_11, /*hidden argument*/List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35_RuntimeMethod_var);
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_0035;
		}
	}
	{
		return;
	}

IL_0035:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0039:
	{
		int32_t L_14 = V_1;
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_15 = __this->get_possibleMoves_11();
		int32_t L_16 = List_1_get_Count_m7984BA6C664D8EAE284C168D0568FE2B9136A033(L_15, /*hidden argument*/List_1_get_Count_m7984BA6C664D8EAE284C168D0568FE2B9136A033_RuntimeMethod_var);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_17 = ___roll0;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)2));
		goto IL_0099;
	}

IL_004d:
	{
		PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* L_18 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_allSpots_0();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_19 = __this->get_possibleMoves_11();
		int32_t L_20 = V_2;
		int32_t L_21 = List_1_get_Item_mB62D52423AF52EEC13B4317DD86E6A5BBDF41BD2(L_19, L_20, /*hidden argument*/List_1_get_Item_mB62D52423AF52EEC13B4317DD86E6A5BBDF41BD2_RuntimeMethod_var);
		int32_t L_22 = L_21;
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_23 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		V_0 = ((SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 *)CastclassClass((RuntimeObject*)L_23, SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86_il2cpp_TypeInfo_var));
		SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * L_24 = V_0;
		bool L_25 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)L_24)->get_isBlack_10();
		bool L_26 = ___black1;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_26))))
		{
			goto IL_0095;
		}
	}
	{
		SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * L_27 = V_0;
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_28 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)L_27)->get_pieces_1();
		int32_t L_29 = List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35(L_28, /*hidden argument*/List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35_RuntimeMethod_var);
		if ((((int32_t)L_29) <= ((int32_t)0)))
		{
			goto IL_0095;
		}
	}
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_30 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_actualPossibleMoves_2();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_31 = __this->get_possibleMoves_11();
		int32_t L_32 = V_2;
		int32_t L_33 = List_1_get_Item_mB62D52423AF52EEC13B4317DD86E6A5BBDF41BD2(L_31, L_32, /*hidden argument*/List_1_get_Item_mB62D52423AF52EEC13B4317DD86E6A5BBDF41BD2_RuntimeMethod_var);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_30, L_33, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		return;
	}

IL_0095:
	{
		int32_t L_34 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_34, (int32_t)1));
	}

IL_0099:
	{
		int32_t L_35 = V_2;
		if ((((int32_t)L_35) >= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		return;
	}
}
// System.Boolean BaseControl::BearingOff()
extern "C" IL2CPP_METHOD_ATTR bool BaseControl_BearingOff_mE095CAF6C658C1332F1158ED5CDE7B4775A5B92E (BaseControl_tA80FAE98EF4187F0C02A06E15CA0EBABDF1AA171 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseControl_BearingOff_mE095CAF6C658C1332F1158ED5CDE7B4775A5B92E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = 0;
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = __this->get_possibleMoves_11();
		Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C  L_1 = List_1_GetEnumerator_m83178F038A7D4A7E9B0731B7D3078EDCF6FFD0EC(L_0, /*hidden argument*/List_1_GetEnumerator_m83178F038A7D4A7E9B0731B7D3078EDCF6FFD0EC_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0042;
		}

IL_0010:
		{
			int32_t L_2 = Enumerator_get_Current_m88A0089A1A4EEBC3017E2DA569A01C7919B10945((Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C *)(&V_1), /*hidden argument*/Enumerator_get_Current_m88A0089A1A4EEBC3017E2DA569A01C7919B10945_RuntimeMethod_var);
			V_2 = L_2;
			PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* L_3 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_allSpots_0();
			int32_t L_4 = V_2;
			int32_t L_5 = L_4;
			PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
			V_3 = ((SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 *)CastclassClass((RuntimeObject*)L_6, SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86_il2cpp_TypeInfo_var));
			SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * L_7 = V_3;
			bool L_8 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)L_7)->get_isBlack_10();
			bool L_9 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_isBlack_10();
			if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
			{
				goto IL_0042;
			}
		}

IL_0034:
		{
			int32_t L_10 = V_0;
			SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * L_11 = V_3;
			List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_12 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)L_11)->get_pieces_1();
			int32_t L_13 = List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35(L_12, /*hidden argument*/List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35_RuntimeMethod_var);
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_13));
		}

IL_0042:
		{
			bool L_14 = Enumerator_MoveNext_m113E33A615748C69D63D1245F5FD820B4B3D43F7((Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m113E33A615748C69D63D1245F5FD820B4B3D43F7_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_0010;
			}
		}

IL_004b:
		{
			IL2CPP_LEAVE(0x5B, FINALLY_004d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004d;
	}

FINALLY_004d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mBA3B0129DABD8274AF3497CC93E6A2DEA0A23892((Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C *)(&V_1), /*hidden argument*/Enumerator_Dispose_mBA3B0129DABD8274AF3497CC93E6A2DEA0A23892_RuntimeMethod_var);
		IL2CPP_END_FINALLY(77)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(77)
	{
		IL2CPP_JUMP_TBL(0x5B, IL_005b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005b:
	{
		int32_t L_15 = V_0;
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_16 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_pieces_1();
		int32_t L_17 = List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35(L_16, /*hidden argument*/List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_17));
		int32_t L_18 = V_0;
		return (bool)((((int32_t)L_18) == ((int32_t)((int32_t)15)))? 1 : 0);
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
// System.Void CameraControl::Start()
extern "C" IL2CPP_METHOD_ATTR void CameraControl_Start_mA6F7229E81BC85DB9323E37B34613D5921CA8B8B (CameraControl_t747F330F97DFEE9545303C2301EE6AF2740E573E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void CameraControl::Update()
extern "C" IL2CPP_METHOD_ATTR void CameraControl_Update_mDF36AB9C0EF21143B8CB4C8530D657121544CD6D (CameraControl_t747F330F97DFEE9545303C2301EE6AF2740E573E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraControl_Update_mDF36AB9C0EF21143B8CB4C8530D657121544CD6D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		bool L_0 = __this->get_flipping_4();
		if (!L_0)
		{
			goto IL_006c;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_0), /*hidden argument*/NULL);
		float L_4 = L_3.get_y_3();
		float L_5 = __this->get_y_5();
		if ((((float)L_4) == ((float)L_5)))
		{
			goto IL_0065;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_8 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_7, /*hidden argument*/NULL);
		float L_9 = __this->get_y_5();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((90.0f), L_9, (0.0f), /*hidden argument*/NULL);
		float L_11 = __this->get_speed_6();
		float L_12 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = Quaternion_RotateTowards_m3AFE60D0BA85FC9B7056433278144249942DCE91(L_8, L_10, ((float)il2cpp_codegen_multiply((float)L_11, (float)L_12)), /*hidden argument*/NULL);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_6, L_13, /*hidden argument*/NULL);
		return;
	}

IL_0065:
	{
		__this->set_flipping_4((bool)0);
	}

IL_006c:
	{
		return;
	}
}
// System.Void CameraControl::flip()
extern "C" IL2CPP_METHOD_ATTR void CameraControl_flip_mCE37E4EC3052C0F62C1E3D0F817AFB9C91FC197F (CameraControl_t747F330F97DFEE9545303C2301EE6AF2740E573E * __this, const RuntimeMethod* method)
{
	{
		__this->set_flipping_4((bool)1);
		float L_0 = __this->get_y_5();
		if ((!(((float)L_0) == ((float)(90.0f)))))
		{
			goto IL_0027;
		}
	}
	{
		float L_1 = __this->get_y_5();
		__this->set_y_5(((float)il2cpp_codegen_add((float)L_1, (float)(180.0f))));
		return;
	}

IL_0027:
	{
		float L_2 = __this->get_y_5();
		__this->set_y_5(((float)il2cpp_codegen_subtract((float)L_2, (float)(180.0f))));
		return;
	}
}
// System.Void CameraControl::.ctor()
extern "C" IL2CPP_METHOD_ATTR void CameraControl__ctor_mAA25C9FF64D1BFEC8EB58B5CFBBDD473CAB17115 (CameraControl_t747F330F97DFEE9545303C2301EE6AF2740E573E * __this, const RuntimeMethod* method)
{
	{
		__this->set_y_5((90.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void DiceControl::Start()
extern "C" IL2CPP_METHOD_ATTR void DiceControl_Start_m7AFB1209438CE7EBA85B09E9C15FDDDF05A1DACE (DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiceControl_Start_m7AFB1209438CE7EBA85B09E9C15FDDDF05A1DACE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_1 = GameObject_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mBAC50AEEACC94DE12B47C6D6A5227051B1C6DE12(L_0, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mBAC50AEEACC94DE12B47C6D6A5227051B1C6DE12_RuntimeMethod_var);
		__this->set_spr_4(L_1);
		DiceControl_SetSprite_m4BBE869E0A0C58726B5B9D6F0F50618B94059DD7(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DiceControl::Update()
extern "C" IL2CPP_METHOD_ATTR void DiceControl_Update_m9AC12D0C636AC6A3F05D60C558ED2133A4566B50 (DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void DiceControl::SetSprite(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void DiceControl_SetSprite_m4BBE869E0A0C58726B5B9D6F0F50618B94059DD7 (DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A * __this, int32_t ___rollnum0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___rollnum0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0034;
			}
			case 2:
			{
				goto IL_0046;
			}
			case 3:
			{
				goto IL_0058;
			}
			case 4:
			{
				goto IL_006a;
			}
			case 5:
			{
				goto IL_007c;
			}
		}
	}
	{
		goto IL_008e;
	}

IL_0022:
	{
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_1 = __this->get_spr_4();
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_2 = __this->get_r1_5();
		SpriteRenderer_set_sprite_m9F5C8B2007AA03FAB66F0CB61260349DF1E28611(L_1, L_2, /*hidden argument*/NULL);
		return;
	}

IL_0034:
	{
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_3 = __this->get_spr_4();
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_4 = __this->get_r2_6();
		SpriteRenderer_set_sprite_m9F5C8B2007AA03FAB66F0CB61260349DF1E28611(L_3, L_4, /*hidden argument*/NULL);
		return;
	}

IL_0046:
	{
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_5 = __this->get_spr_4();
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_6 = __this->get_r3_7();
		SpriteRenderer_set_sprite_m9F5C8B2007AA03FAB66F0CB61260349DF1E28611(L_5, L_6, /*hidden argument*/NULL);
		return;
	}

IL_0058:
	{
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_7 = __this->get_spr_4();
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_8 = __this->get_r4_8();
		SpriteRenderer_set_sprite_m9F5C8B2007AA03FAB66F0CB61260349DF1E28611(L_7, L_8, /*hidden argument*/NULL);
		return;
	}

IL_006a:
	{
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_9 = __this->get_spr_4();
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_10 = __this->get_r5_9();
		SpriteRenderer_set_sprite_m9F5C8B2007AA03FAB66F0CB61260349DF1E28611(L_9, L_10, /*hidden argument*/NULL);
		return;
	}

IL_007c:
	{
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_11 = __this->get_spr_4();
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_12 = __this->get_r6_10();
		SpriteRenderer_set_sprite_m9F5C8B2007AA03FAB66F0CB61260349DF1E28611(L_11, L_12, /*hidden argument*/NULL);
		return;
	}

IL_008e:
	{
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_13 = __this->get_spr_4();
		SpriteRenderer_set_sprite_m9F5C8B2007AA03FAB66F0CB61260349DF1E28611(L_13, (Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DiceControl::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DiceControl__ctor_m1D0FA921AC8E2DA741FEAD0F05F5141BF26A576C (DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void GameControl::Awake()
extern "C" IL2CPP_METHOD_ATTR void GameControl_Awake_m7DCD4282485D4BFA123E5E7DE9933F241E7C44DD (GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * __this, const RuntimeMethod* method)
{
	{
		GameControl_GetAllSpots_m9321FCE683DCA21668EC75C663AB798029834C4E(__this, /*hidden argument*/NULL);
		GameControl_SetBaseSpots_mAFFF48DA97026BD259DC9AFFDB92D73522833F07(__this, /*hidden argument*/NULL);
		GameControl_SetJailSpots_m97A0994A0ADFEB630B354385CA897B18D23F6F47(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameControl::Start()
extern "C" IL2CPP_METHOD_ATTR void GameControl_Start_m9812137EC9462727989C9257365F63228B9857FC (GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * __this, const RuntimeMethod* method)
{
	{
		GameControl_InitializeAllSpotsSpotObjects_m4B4B395D328B6FA08EAC28E03EF5DD8CAB2CAF20(__this, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_blackMover_8();
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_0, (bool)1, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_whiteMover_9();
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_1, (bool)1, /*hidden argument*/NULL);
		GameControl_FindDice_m3AADDCB64CB0CE6352E0C4A281704DF8BC2711C7(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameControl::Update()
extern "C" IL2CPP_METHOD_ATTR void GameControl_Update_mE5B4D50121676A73EF376E1FF1BA5903DCCCCF02 (GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameControl_Update_mE5B4D50121676A73EF376E1FF1BA5903DCCCCF02_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * G_B3_0 = NULL;
	GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * G_B2_0 = NULL;
	String_t* G_B4_0 = NULL;
	GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * G_B4_1 = NULL;
	GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * G_B12_0 = NULL;
	GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * G_B11_0 = NULL;
	String_t* G_B13_0 = NULL;
	GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * G_B13_1 = NULL;
	{
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_0 = __this->get_currentMover_7();
		bool L_1 = L_0->get_winner_23();
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_2 = __this->get_currentMover_7();
		bool L_3 = L_2->get_isBlack_27();
		G_B2_0 = __this;
		if (L_3)
		{
			G_B3_0 = __this;
			goto IL_0022;
		}
	}
	{
		G_B4_0 = _stringLiteral79D761AD64BBCC188AA2537AABB07E94319C017E;
		G_B4_1 = G_B2_0;
		goto IL_0027;
	}

IL_0022:
	{
		G_B4_0 = _stringLiteral0A8B24CAAB147A2B5FE98397ECA6F3E47BFABC31;
		G_B4_1 = G_B3_0;
	}

IL_0027:
	{
		String_t* L_4 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(G_B4_0, _stringLiteral8BCE33E50EAA5B91493F48F1319DC8B45F38E7D3, /*hidden argument*/NULL);
		GameControl_SetMessage_m2B68D9292611602C838B56E43E9906187EC57710(G_B4_1, L_4, /*hidden argument*/NULL);
		return;
	}

IL_0037:
	{
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_5 = __this->get_currentMover_7();
		bool L_6 = L_5->get_turnOver_22();
		if (!L_6)
		{
			goto IL_0056;
		}
	}
	{
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_7 = __this->get_currentMover_7();
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_8 = Component_GetComponentInChildren_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_mC210673BE9A285437FF73A2988A9DBAAF9FE337E(L_7, /*hidden argument*/Component_GetComponentInChildren_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_mC210673BE9A285437FF73A2988A9DBAAF9FE337E_RuntimeMethod_var);
		Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303(L_8, (bool)0, /*hidden argument*/NULL);
		return;
	}

IL_0056:
	{
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_9 = __this->get_currentMover_7();
		bool L_10 = L_9->get_diceRolled_19();
		if (L_10)
		{
			goto IL_00ad;
		}
	}
	{
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_11 = __this->get_currentMover_7();
		bool L_12 = L_11->get_playerRolledDice_21();
		if (L_12)
		{
			goto IL_00ad;
		}
	}
	{
		CameraControl_t747F330F97DFEE9545303C2301EE6AF2740E573E * L_13 = __this->get_cam_6();
		bool L_14 = L_13->get_flipping_4();
		if (L_14)
		{
			goto IL_00ad;
		}
	}
	{
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_15 = __this->get_currentMover_7();
		bool L_16 = L_15->get_isBlack_27();
		G_B11_0 = __this;
		if (L_16)
		{
			G_B12_0 = __this;
			goto IL_0092;
		}
	}
	{
		G_B13_0 = _stringLiteralCBC705775DB6FEFEACF19A1AB792730717A67052;
		G_B13_1 = G_B11_0;
		goto IL_0097;
	}

IL_0092:
	{
		G_B13_0 = _stringLiteralD3FB54C4AA99015F8753D081CF7CE71A76523E96;
		G_B13_1 = G_B12_0;
	}

IL_0097:
	{
		String_t* L_17 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(G_B13_0, _stringLiteral5BF543A8414335C6A20B6D10CDA1FFF69F86EC3A, /*hidden argument*/NULL);
		GameControl_SetMessage_m2B68D9292611602C838B56E43E9906187EC57710(G_B13_1, L_17, /*hidden argument*/NULL);
		GameControl_BlankDiceRollDisplays_mC5486A40E237FD1CDFA1EA55A16544CF1112F5A1(__this, /*hidden argument*/NULL);
		return;
	}

IL_00ad:
	{
		GameControl_SetMessage_m2B68D9292611602C838B56E43E9906187EC57710(__this, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameControl::FindDice()
extern "C" IL2CPP_METHOD_ATTR void GameControl_FindDice_m3AADDCB64CB0CE6352E0C4A281704DF8BC2711C7 (GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameControl_FindDice_m3AADDCB64CB0CE6352E0C4A281704DF8BC2711C7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral0FD2C76748F7563C39C82E965B0937F0BF55A97F, /*hidden argument*/NULL);
		DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A * L_1 = GameObject_GetComponent_TisDiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A_mA7294B4DDA340D3490D437E1FB38545C36FF114C(L_0, /*hidden argument*/GameObject_GetComponent_TisDiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A_mA7294B4DDA340D3490D437E1FB38545C36FF114C_RuntimeMethod_var);
		__this->set_die1_11(L_1);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral8C0482C57EFC203278D839A16F3ED1ADF4B6E4F6, /*hidden argument*/NULL);
		DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A * L_3 = GameObject_GetComponent_TisDiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A_mA7294B4DDA340D3490D437E1FB38545C36FF114C(L_2, /*hidden argument*/GameObject_GetComponent_TisDiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A_mA7294B4DDA340D3490D437E1FB38545C36FF114C_RuntimeMethod_var);
		__this->set_die2_12(L_3);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteralEBDFBF11C47253D6ABEF02B7C49EFAD27CFFE303, /*hidden argument*/NULL);
		DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A * L_5 = GameObject_GetComponent_TisDiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A_mA7294B4DDA340D3490D437E1FB38545C36FF114C(L_4, /*hidden argument*/GameObject_GetComponent_TisDiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A_mA7294B4DDA340D3490D437E1FB38545C36FF114C_RuntimeMethod_var);
		__this->set_die3_13(L_5);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteralF17254F7E3058386B52CD62F9CA1C7C575BA9211, /*hidden argument*/NULL);
		DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A * L_7 = GameObject_GetComponent_TisDiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A_mA7294B4DDA340D3490D437E1FB38545C36FF114C(L_6, /*hidden argument*/GameObject_GetComponent_TisDiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A_mA7294B4DDA340D3490D437E1FB38545C36FF114C_RuntimeMethod_var);
		__this->set_die4_14(L_7);
		return;
	}
}
// System.Void GameControl::DisplayDice()
extern "C" IL2CPP_METHOD_ATTR void GameControl_DisplayDice_m03BC666E8C65F6B00F3206BCEAD49AFAE0596856 (GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A * L_0 = __this->get_die1_11();
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_1 = __this->get_currentMover_7();
		int32_t L_2 = L_1->get_roll1_13();
		DiceControl_SetSprite_m4BBE869E0A0C58726B5B9D6F0F50618B94059DD7(L_0, L_2, /*hidden argument*/NULL);
		DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A * L_3 = __this->get_die2_12();
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_4 = __this->get_currentMover_7();
		int32_t L_5 = L_4->get_roll2_14();
		DiceControl_SetSprite_m4BBE869E0A0C58726B5B9D6F0F50618B94059DD7(L_3, L_5, /*hidden argument*/NULL);
		V_0 = 0;
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_6 = __this->get_currentMover_7();
		bool L_7 = L_6->get_doubles_20();
		if (!L_7)
		{
			goto IL_0047;
		}
	}
	{
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_8 = __this->get_currentMover_7();
		int32_t L_9 = L_8->get_roll1_13();
		V_0 = L_9;
	}

IL_0047:
	{
		DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A * L_10 = __this->get_die3_13();
		int32_t L_11 = V_0;
		DiceControl_SetSprite_m4BBE869E0A0C58726B5B9D6F0F50618B94059DD7(L_10, L_11, /*hidden argument*/NULL);
		DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A * L_12 = __this->get_die4_14();
		int32_t L_13 = V_0;
		DiceControl_SetSprite_m4BBE869E0A0C58726B5B9D6F0F50618B94059DD7(L_12, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameControl::BlankDiceRollDisplays()
extern "C" IL2CPP_METHOD_ATTR void GameControl_BlankDiceRollDisplays_mC5486A40E237FD1CDFA1EA55A16544CF1112F5A1 (GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameControl_BlankDiceRollDisplays_mC5486A40E237FD1CDFA1EA55A16544CF1112F5A1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A * L_0 = __this->get_die1_11();
		DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A * L_1 = Component_GetComponent_TisDiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A_mDB97F259E9DB59D7D2294DA8A522156520D8CA38(L_0, /*hidden argument*/Component_GetComponent_TisDiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A_mDB97F259E9DB59D7D2294DA8A522156520D8CA38_RuntimeMethod_var);
		DiceControl_SetSprite_m4BBE869E0A0C58726B5B9D6F0F50618B94059DD7(L_1, 0, /*hidden argument*/NULL);
		DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A * L_2 = __this->get_die2_12();
		DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A * L_3 = Component_GetComponent_TisDiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A_mDB97F259E9DB59D7D2294DA8A522156520D8CA38(L_2, /*hidden argument*/Component_GetComponent_TisDiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A_mDB97F259E9DB59D7D2294DA8A522156520D8CA38_RuntimeMethod_var);
		DiceControl_SetSprite_m4BBE869E0A0C58726B5B9D6F0F50618B94059DD7(L_3, 0, /*hidden argument*/NULL);
		DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A * L_4 = __this->get_die3_13();
		DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A * L_5 = Component_GetComponent_TisDiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A_mDB97F259E9DB59D7D2294DA8A522156520D8CA38(L_4, /*hidden argument*/Component_GetComponent_TisDiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A_mDB97F259E9DB59D7D2294DA8A522156520D8CA38_RuntimeMethod_var);
		DiceControl_SetSprite_m4BBE869E0A0C58726B5B9D6F0F50618B94059DD7(L_5, 0, /*hidden argument*/NULL);
		DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A * L_6 = __this->get_die4_14();
		DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A * L_7 = Component_GetComponent_TisDiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A_mDB97F259E9DB59D7D2294DA8A522156520D8CA38(L_6, /*hidden argument*/Component_GetComponent_TisDiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A_mDB97F259E9DB59D7D2294DA8A522156520D8CA38_RuntimeMethod_var);
		DiceControl_SetSprite_m4BBE869E0A0C58726B5B9D6F0F50618B94059DD7(L_7, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameControl::GetAllSpots()
extern "C" IL2CPP_METHOD_ATTR void GameControl_GetAllSpots_m9321FCE683DCA21668EC75C663AB798029834C4E (GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameControl_GetAllSpots_m9321FCE683DCA21668EC75C663AB798029834C4E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * V_2 = NULL;
	{
		PieceContainerObjectU5BU5D_t04002C7EAC175CFD098187B608736779B7C0338C* L_0 = (PieceContainerObjectU5BU5D_t04002C7EAC175CFD098187B608736779B7C0338C*)SZArrayNew(PieceContainerObjectU5BU5D_t04002C7EAC175CFD098187B608736779B7C0338C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)24));
		__this->set_allSpots_15(L_0);
		V_0 = 1;
		goto IL_0071;
	}

IL_0011:
	{
		V_1 = 1;
		goto IL_0069;
	}

IL_0015:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = L_1;
		ArrayElementTypeCheck (L_2, _stringLiteralC5C5BA59D015EC3E31392896DD74F8FE32234709);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralC5C5BA59D015EC3E31392896DD74F8FE32234709);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_2;
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_5);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_3;
		ArrayElementTypeCheck (L_7, _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_7;
		int32_t L_9 = V_1;
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_10);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_11);
		String_t* L_12 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_8, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_13 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(L_12, /*hidden argument*/NULL);
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_14 = GameObject_GetComponent_TisPieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740_mEBE6A83435EF657F4C4E1901E2974C48884D6509(L_13, /*hidden argument*/GameObject_GetComponent_TisPieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740_mEBE6A83435EF657F4C4E1901E2974C48884D6509_RuntimeMethod_var);
		V_2 = L_14;
		PieceContainerObjectU5BU5D_t04002C7EAC175CFD098187B608736779B7C0338C* L_15 = __this->get_allSpots_15();
		int32_t L_16 = V_0;
		int32_t L_17 = V_1;
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_18 = V_2;
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1)), (int32_t)6)), (int32_t)L_17)), (int32_t)1))), (PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 *)L_18);
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_19 = V_2;
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_19, (bool)1, /*hidden argument*/NULL);
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0069:
	{
		int32_t L_21 = V_1;
		if ((((int32_t)L_21) <= ((int32_t)6)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0071:
	{
		int32_t L_23 = V_0;
		if ((((int32_t)L_23) <= ((int32_t)4)))
		{
			goto IL_0011;
		}
	}
	{
		return;
	}
}
// System.Void GameControl::SetBaseSpots()
extern "C" IL2CPP_METHOD_ATTR void GameControl_SetBaseSpots_mAFFF48DA97026BD259DC9AFFDB92D73522833F07 (GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameControl_SetBaseSpots_mAFFF48DA97026BD259DC9AFFDB92D73522833F07_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral5C6E98F29683FBA68BB4EA2C2572EAE20DB649D8, /*hidden argument*/NULL);
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_1 = GameObject_GetComponent_TisPieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740_mEBE6A83435EF657F4C4E1901E2974C48884D6509(L_0, /*hidden argument*/GameObject_GetComponent_TisPieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740_mEBE6A83435EF657F4C4E1901E2974C48884D6509_RuntimeMethod_var);
		__this->set_whiteBaseControl_17(L_1);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteralE61EE8E422A5A84A0A96F467693C427D4FD5961B, /*hidden argument*/NULL);
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_3 = GameObject_GetComponent_TisPieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740_mEBE6A83435EF657F4C4E1901E2974C48884D6509(L_2, /*hidden argument*/GameObject_GetComponent_TisPieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740_mEBE6A83435EF657F4C4E1901E2974C48884D6509_RuntimeMethod_var);
		__this->set_blackBaseControl_19(L_3);
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_4 = __this->get_whiteBaseControl_17();
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_4, (bool)1, /*hidden argument*/NULL);
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_5 = __this->get_blackBaseControl_19();
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_5, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameControl::SetJailSpots()
extern "C" IL2CPP_METHOD_ATTR void GameControl_SetJailSpots_m97A0994A0ADFEB630B354385CA897B18D23F6F47 (GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameControl_SetJailSpots_m97A0994A0ADFEB630B354385CA897B18D23F6F47_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteralDB7C7387003F64619EA67325579B4C59488FEE65, /*hidden argument*/NULL);
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_1 = GameObject_GetComponent_TisPieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740_mEBE6A83435EF657F4C4E1901E2974C48884D6509(L_0, /*hidden argument*/GameObject_GetComponent_TisPieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740_mEBE6A83435EF657F4C4E1901E2974C48884D6509_RuntimeMethod_var);
		__this->set_whiteJailControl_16(L_1);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteralDCC46D764E04310FC106E2E2657503D0AA8BEB66, /*hidden argument*/NULL);
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_3 = GameObject_GetComponent_TisPieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740_mEBE6A83435EF657F4C4E1901E2974C48884D6509(L_2, /*hidden argument*/GameObject_GetComponent_TisPieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740_mEBE6A83435EF657F4C4E1901E2974C48884D6509_RuntimeMethod_var);
		__this->set_blackJailControl_18(L_3);
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_4 = __this->get_whiteJailControl_16();
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_4, (bool)1, /*hidden argument*/NULL);
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_5 = __this->get_blackJailControl_18();
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_5, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameControl::InitializeAllSpotsSpotObjects()
extern "C" IL2CPP_METHOD_ATTR void GameControl_InitializeAllSpotsSpotObjects_m4B4B395D328B6FA08EAC28E03EF5DD8CAB2CAF20 (GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * __this, const RuntimeMethod* method)
{
	PieceContainerObjectU5BU5D_t04002C7EAC175CFD098187B608736779B7C0338C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		PieceContainerObjectU5BU5D_t04002C7EAC175CFD098187B608736779B7C0338C* L_0 = __this->get_allSpots_15();
		V_0 = L_0;
		V_1 = 0;
		goto IL_0017;
	}

IL_000b:
	{
		PieceContainerObjectU5BU5D_t04002C7EAC175CFD098187B608736779B7C0338C* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		PieceContainerObject_InitializeAllSpotsOnControl_mB135EF5CEC7482685E373C277589C0907B65F5F9(L_4, /*hidden argument*/NULL);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0017:
	{
		int32_t L_6 = V_1;
		PieceContainerObjectU5BU5D_t04002C7EAC175CFD098187B608736779B7C0338C* L_7 = V_0;
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length)))))))
		{
			goto IL_000b;
		}
	}
	{
		return;
	}
}
// System.Void GameControl::SetMessage(System.String)
extern "C" IL2CPP_METHOD_ATTR void GameControl_SetMessage_m2B68D9292611602C838B56E43E9906187EC57710 (GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = __this->get_uiText_10();
		String_t* L_1 = ___message0;
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void GameControl::SwitchTurns()
extern "C" IL2CPP_METHOD_ATTR void GameControl_SwitchTurns_mB5DB02B8B5D0D52835996DFC60BE6D3D076D6380 (GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameControl_SwitchTurns_mB5DB02B8B5D0D52835996DFC60BE6D3D076D6380_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_0 = __this->get_currentMover_7();
		L_0->set_myTurn_18((bool)0);
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_1 = __this->get_currentMover_7();
		L_1->set_turnOver_22((bool)0);
		GameControl_SetMessage_m2B68D9292611602C838B56E43E9906187EC57710(__this, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		CameraControl_t747F330F97DFEE9545303C2301EE6AF2740E573E * L_2 = __this->get_cam_6();
		CameraControl_flip_mCE37E4EC3052C0F62C1E3D0F817AFB9C91FC197F(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameControl::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GameControl__ctor_m6DCEE981B44B5B587E589B227A098AE27ED86C78 (GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void GameState::.ctor(GameControl)
extern "C" IL2CPP_METHOD_ATTR void GameState__ctor_mDA02CC179CF6995410F44B4BCEEAD2BCFF5EE062 (GameState_t26C77D92567E12173718C059731CF9EB15949FF1 * __this, GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * ___initGameMaster0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameState__ctor_mDA02CC179CF6995410F44B4BCEEAD2BCFF5EE062_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PieceContainerObjectU5BU5D_t04002C7EAC175CFD098187B608736779B7C0338C* V_0 = NULL;
	int32_t V_1 = 0;
	PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * V_2 = NULL;
	PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* V_3 = NULL;
	{
		PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* L_0 = (PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51*)SZArrayNew(PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51_il2cpp_TypeInfo_var, (uint32_t)((int32_t)24));
		__this->set_allSpots_0(L_0);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * L_1 = ___initGameMaster0;
		PieceContainerObjectU5BU5D_t04002C7EAC175CFD098187B608736779B7C0338C* L_2 = L_1->get_allSpots_15();
		V_0 = L_2;
		V_1 = 0;
		goto IL_003e;
	}

IL_001e:
	{
		PieceContainerObjectU5BU5D_t04002C7EAC175CFD098187B608736779B7C0338C* L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* L_7 = __this->get_allSpots_0();
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_8 = V_2;
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_9 = L_8->get_pcc_4();
		int32_t L_10 = L_9->get_position_8();
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_11 = V_2;
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_12 = PieceContainerFactory_GetPieceContainer_m3903C61F41EBACD3D23853AE9F0D408AF3285B88(L_11, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_7, L_12);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10), (PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)L_12);
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_003e:
	{
		int32_t L_14 = V_1;
		PieceContainerObjectU5BU5D_t04002C7EAC175CFD098187B608736779B7C0338C* L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))))))
		{
			goto IL_001e;
		}
	}
	{
		GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * L_16 = ___initGameMaster0;
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_17 = L_16->get_blackJailControl_18();
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_18 = PieceContainerFactory_GetPieceContainer_m3903C61F41EBACD3D23853AE9F0D408AF3285B88(L_17, /*hidden argument*/NULL);
		__this->set_blackJail_1(L_18);
		GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * L_19 = ___initGameMaster0;
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_20 = L_19->get_whiteJailControl_16();
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_21 = PieceContainerFactory_GetPieceContainer_m3903C61F41EBACD3D23853AE9F0D408AF3285B88(L_20, /*hidden argument*/NULL);
		__this->set_whiteJail_2(L_21);
		GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * L_22 = ___initGameMaster0;
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_23 = L_22->get_blackBaseControl_19();
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_24 = PieceContainerFactory_GetPieceContainer_m3903C61F41EBACD3D23853AE9F0D408AF3285B88(L_23, /*hidden argument*/NULL);
		__this->set_blackBase_3(L_24);
		GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * L_25 = ___initGameMaster0;
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_26 = L_25->get_whiteBaseControl_17();
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_27 = PieceContainerFactory_GetPieceContainer_m3903C61F41EBACD3D23853AE9F0D408AF3285B88(L_26, /*hidden argument*/NULL);
		__this->set_whiteBase_4(L_27);
		PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* L_28 = __this->get_allSpots_0();
		V_3 = L_28;
		V_1 = 0;
		goto IL_00b1;
	}

IL_0093:
	{
		PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* L_29 = V_3;
		int32_t L_30 = V_1;
		int32_t L_31 = L_30;
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_32 = (L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
		PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* L_33 = __this->get_allSpots_0();
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_34 = __this->get_whiteJail_2();
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_35 = __this->get_blackJail_1();
		VirtActionInvoker3< PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51*, PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *, PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * >::Invoke(10 /* System.Void PieceContainerControl::InitializeOtherPieceContainerControls(PieceContainerControl[],PieceContainerControl,PieceContainerControl) */, L_32, L_33, L_34, L_35);
		int32_t L_36 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_00b1:
	{
		int32_t L_37 = V_1;
		PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* L_38 = V_3;
		if ((((int32_t)L_37) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_38)->max_length)))))))
		{
			goto IL_0093;
		}
	}
	{
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_39 = __this->get_blackJail_1();
		PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* L_40 = __this->get_allSpots_0();
		VirtActionInvoker3< PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51*, PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *, PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * >::Invoke(10 /* System.Void PieceContainerControl::InitializeOtherPieceContainerControls(PieceContainerControl[],PieceContainerControl,PieceContainerControl) */, L_39, L_40, (PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)NULL, (PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)NULL);
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_41 = __this->get_whiteJail_2();
		PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* L_42 = __this->get_allSpots_0();
		VirtActionInvoker3< PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51*, PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *, PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * >::Invoke(10 /* System.Void PieceContainerControl::InitializeOtherPieceContainerControls(PieceContainerControl[],PieceContainerControl,PieceContainerControl) */, L_41, L_42, (PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)NULL, (PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)NULL);
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_43 = __this->get_blackBase_3();
		PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* L_44 = __this->get_allSpots_0();
		VirtActionInvoker3< PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51*, PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *, PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * >::Invoke(10 /* System.Void PieceContainerControl::InitializeOtherPieceContainerControls(PieceContainerControl[],PieceContainerControl,PieceContainerControl) */, L_43, L_44, (PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)NULL, (PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)NULL);
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_45 = __this->get_whiteBase_4();
		PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* L_46 = __this->get_allSpots_0();
		VirtActionInvoker3< PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51*, PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *, PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * >::Invoke(10 /* System.Void PieceContainerControl::InitializeOtherPieceContainerControls(PieceContainerControl[],PieceContainerControl,PieceContainerControl) */, L_45, L_46, (PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)NULL, (PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)NULL);
		return;
	}
}
// System.Int32 GameState::GetNumOpponentsInJail(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR int32_t GameState_GetNumOpponentsInJail_mF7D0B70199FE317645897A1CE537E744067308D1 (GameState_t26C77D92567E12173718C059731CF9EB15949FF1 * __this, bool ___isBlack0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameState_GetNumOpponentsInJail_mF7D0B70199FE317645897A1CE537E744067308D1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___isBlack0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_1 = __this->get_whiteJail_2();
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_2 = L_1->get_pieces_1();
		int32_t L_3 = List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35(L_2, /*hidden argument*/List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35_RuntimeMethod_var);
		return L_3;
	}

IL_0014:
	{
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_4 = __this->get_blackJail_1();
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_5 = L_4->get_pieces_1();
		int32_t L_6 = List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35(L_5, /*hidden argument*/List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35_RuntimeMethod_var);
		return L_6;
	}
}
// System.Void GameState::UndoLastMove(System.Int32,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GameState_UndoLastMove_m2F456E6E61C8542A580E3880417D513C8505571D (GameState_t26C77D92567E12173718C059731CF9EB15949FF1 * __this, int32_t ___initPosition0, int32_t ___endPosition1, bool ___isBlack2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameState_UndoLastMove_m2F456E6E61C8542A580E3880417D513C8505571D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	{
		int32_t L_0 = ___endPosition1;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_1 = ___endPosition1;
		PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* L_2 = __this->get_allSpots_0();
		if ((((int32_t)L_1) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))))))
		{
			goto IL_0046;
		}
	}
	{
		PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* L_3 = __this->get_allSpots_0();
		int32_t L_4 = ___endPosition1;
		int32_t L_5 = L_4;
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_7 = L_6->get_pieces_1();
		PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* L_8 = __this->get_allSpots_0();
		int32_t L_9 = ___endPosition1;
		int32_t L_10 = L_9;
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_12 = L_11->get_pieces_1();
		int32_t L_13 = List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35(L_12, /*hidden argument*/List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35_RuntimeMethod_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_14 = List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8(L_7, ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1)), /*hidden argument*/List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8_RuntimeMethod_var);
		V_0 = L_14;
		PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* L_15 = __this->get_allSpots_0();
		int32_t L_16 = ___endPosition1;
		int32_t L_17 = L_16;
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_19 = V_0;
		VirtActionInvoker1< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(5 /* System.Void PieceContainerControl::RemovePiece(UnityEngine.GameObject) */, L_18, L_19);
		goto IL_00a9;
	}

IL_0046:
	{
		bool L_20 = ___isBlack2;
		if (!L_20)
		{
			goto IL_007a;
		}
	}
	{
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_21 = __this->get_blackBase_3();
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_22 = L_21->get_pieces_1();
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_23 = __this->get_blackBase_3();
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_24 = L_23->get_pieces_1();
		int32_t L_25 = List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35(L_24, /*hidden argument*/List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35_RuntimeMethod_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_26 = List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8(L_22, ((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)1)), /*hidden argument*/List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8_RuntimeMethod_var);
		V_0 = L_26;
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_27 = __this->get_blackBase_3();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_28 = V_0;
		VirtActionInvoker1< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(5 /* System.Void PieceContainerControl::RemovePiece(UnityEngine.GameObject) */, L_27, L_28);
		goto IL_00a9;
	}

IL_007a:
	{
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_29 = __this->get_whiteBase_4();
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_30 = L_29->get_pieces_1();
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_31 = __this->get_whiteBase_4();
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_32 = L_31->get_pieces_1();
		int32_t L_33 = List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35(L_32, /*hidden argument*/List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35_RuntimeMethod_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_34 = List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8(L_30, ((int32_t)il2cpp_codegen_subtract((int32_t)L_33, (int32_t)1)), /*hidden argument*/List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8_RuntimeMethod_var);
		V_0 = L_34;
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_35 = __this->get_whiteBase_4();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_36 = V_0;
		VirtActionInvoker1< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(5 /* System.Void PieceContainerControl::RemovePiece(UnityEngine.GameObject) */, L_35, L_36);
	}

IL_00a9:
	{
		int32_t L_37 = ___initPosition0;
		if ((((int32_t)L_37) < ((int32_t)0)))
		{
			goto IL_00c7;
		}
	}
	{
		int32_t L_38 = ___initPosition0;
		PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* L_39 = __this->get_allSpots_0();
		if ((((int32_t)L_38) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_39)->max_length)))))))
		{
			goto IL_00c7;
		}
	}
	{
		PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* L_40 = __this->get_allSpots_0();
		int32_t L_41 = ___initPosition0;
		int32_t L_42 = L_41;
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_43 = (L_40)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_42));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_44 = V_0;
		VirtActionInvoker1< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(4 /* System.Void PieceContainerControl::AddPiece(UnityEngine.GameObject) */, L_43, L_44);
		return;
	}

IL_00c7:
	{
		bool L_45 = ___isBlack2;
		if (!L_45)
		{
			goto IL_00d7;
		}
	}
	{
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_46 = __this->get_blackJail_1();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_47 = V_0;
		VirtActionInvoker1< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(4 /* System.Void PieceContainerControl::AddPiece(UnityEngine.GameObject) */, L_46, L_47);
		return;
	}

IL_00d7:
	{
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_48 = __this->get_whiteJail_2();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_49 = V_0;
		VirtActionInvoker1< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(4 /* System.Void PieceContainerControl::AddPiece(UnityEngine.GameObject) */, L_48, L_49);
		return;
	}
}
// System.Void GameState::MakeMove(System.Int32,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GameState_MakeMove_m24F6C2551DFCED28DA0D08C865CCEEADC6929F22 (GameState_t26C77D92567E12173718C059731CF9EB15949FF1 * __this, int32_t ___initPosition0, int32_t ___endPosition1, bool ___isBlack2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameState_MakeMove_m24F6C2551DFCED28DA0D08C865CCEEADC6929F22_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	{
		int32_t L_0 = ___initPosition0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_1 = ___initPosition0;
		PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* L_2 = __this->get_allSpots_0();
		if ((((int32_t)L_1) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))))))
		{
			goto IL_0033;
		}
	}
	{
		PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* L_3 = __this->get_allSpots_0();
		int32_t L_4 = ___initPosition0;
		int32_t L_5 = L_4;
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_7 = L_6->get_pieces_1();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8(L_7, 0, /*hidden argument*/List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8_RuntimeMethod_var);
		V_0 = L_8;
		PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* L_9 = __this->get_allSpots_0();
		int32_t L_10 = ___initPosition0;
		int32_t L_11 = L_10;
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_13 = V_0;
		VirtActionInvoker1< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(5 /* System.Void PieceContainerControl::RemovePiece(UnityEngine.GameObject) */, L_12, L_13);
		goto IL_0074;
	}

IL_0033:
	{
		bool L_14 = ___isBlack2;
		if (!L_14)
		{
			goto IL_0056;
		}
	}
	{
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_15 = __this->get_blackJail_1();
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_16 = L_15->get_pieces_1();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_17 = List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8(L_16, 0, /*hidden argument*/List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8_RuntimeMethod_var);
		V_0 = L_17;
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_18 = __this->get_blackJail_1();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_19 = V_0;
		VirtActionInvoker1< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(5 /* System.Void PieceContainerControl::RemovePiece(UnityEngine.GameObject) */, L_18, L_19);
		goto IL_0074;
	}

IL_0056:
	{
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_20 = __this->get_whiteJail_2();
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_21 = L_20->get_pieces_1();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_22 = List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8(L_21, 0, /*hidden argument*/List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8_RuntimeMethod_var);
		V_0 = L_22;
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_23 = __this->get_whiteJail_2();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_24 = V_0;
		VirtActionInvoker1< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(5 /* System.Void PieceContainerControl::RemovePiece(UnityEngine.GameObject) */, L_23, L_24);
	}

IL_0074:
	{
		int32_t L_25 = ___endPosition1;
		if ((((int32_t)L_25) < ((int32_t)0)))
		{
			goto IL_0092;
		}
	}
	{
		int32_t L_26 = ___endPosition1;
		PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* L_27 = __this->get_allSpots_0();
		if ((((int32_t)L_26) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_27)->max_length)))))))
		{
			goto IL_0092;
		}
	}
	{
		PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* L_28 = __this->get_allSpots_0();
		int32_t L_29 = ___endPosition1;
		int32_t L_30 = L_29;
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_31 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_32 = V_0;
		VirtActionInvoker1< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(4 /* System.Void PieceContainerControl::AddPiece(UnityEngine.GameObject) */, L_31, L_32);
		return;
	}

IL_0092:
	{
		bool L_33 = ___isBlack2;
		if (!L_33)
		{
			goto IL_00a2;
		}
	}
	{
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_34 = __this->get_blackBase_3();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_35 = V_0;
		VirtActionInvoker1< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(4 /* System.Void PieceContainerControl::AddPiece(UnityEngine.GameObject) */, L_34, L_35);
		return;
	}

IL_00a2:
	{
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_36 = __this->get_whiteBase_4();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_37 = V_0;
		VirtActionInvoker1< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(4 /* System.Void PieceContainerControl::AddPiece(UnityEngine.GameObject) */, L_36, L_37);
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
// System.Void HumanPlayer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void HumanPlayer__ctor_m9F4474FEF291FA1C478FBE37DD105F8AA5BF8C80 (HumanPlayer_t6448D36C66FD3A6DEFB3ABA99F62999E1241A498 * __this, const RuntimeMethod* method)
{
	{
		Player__ctor_m8F4AB650C5E2DE406B3C65EA8F662013458D85E2(__this, /*hidden argument*/NULL);
		((Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 *)__this)->set_secondsToWait_3((0.1f));
		return;
	}
}
// System.Void HumanPlayer::RollDice()
extern "C" IL2CPP_METHOD_ATTR void HumanPlayer_RollDice_m9815D531040482588F788F78742CA75C8465477A (HumanPlayer_t6448D36C66FD3A6DEFB3ABA99F62999E1241A498 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = Input_GetKeyDown_mD82B14BB87E1C811668BD1A2CFBC0CF3D4983FEA(((int32_t)32), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_1 = ((Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 *)__this)->get_moveCont_0();
		L_1->set_playerRolledDice_21((bool)1);
	}

IL_0015:
	{
		return;
	}
}
// System.Void HumanPlayer::PickPieceOrSpot()
extern "C" IL2CPP_METHOD_ATTR void HumanPlayer_PickPieceOrSpot_mCE65EBFC2D47EABF970791B906D062BCCD355D93 (HumanPlayer_t6448D36C66FD3A6DEFB3ABA99F62999E1241A498 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HumanPlayer_PickPieceOrSpot_mCE65EBFC2D47EABF970791B906D062BCCD355D93_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = Input_GetKeyDown_mD82B14BB87E1C811668BD1A2CFBC0CF3D4983FEA(((int32_t)273), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Player_SelectNext_mD827DEF00E75438BAF40DBB152B91AFAD064A24F(__this, _stringLiteral2038BDEC9210202D0D9D74839E3925FF0CD91BA1, /*hidden argument*/NULL);
	}

IL_0017:
	{
		bool L_1 = Input_GetKeyDown_mD82B14BB87E1C811668BD1A2CFBC0CF3D4983FEA(((int32_t)274), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		Player_SelectNext_mD827DEF00E75438BAF40DBB152B91AFAD064A24F(__this, _stringLiteralBF93E5CE8BC1228C2585B3F5A368053C9FE8346A, /*hidden argument*/NULL);
	}

IL_002e:
	{
		bool L_2 = Input_GetKeyDown_mD82B14BB87E1C811668BD1A2CFBC0CF3D4983FEA(((int32_t)32), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0065;
		}
	}
	{
		bool L_3 = ((Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 *)__this)->get_listenForPick_2();
		if (!L_3)
		{
			goto IL_0065;
		}
	}
	{
		((Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 *)__this)->set_listenForPick_2((bool)0);
		bool L_4 = ((Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 *)__this)->get_pieceSelected_1();
		if (L_4)
		{
			goto IL_005a;
		}
	}
	{
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_5 = ((Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 *)__this)->get_moveCont_0();
		MoveControl_SelectPiece_m0393DE8C62C80286EB7F4334DDFB67CFA59FC92F(L_5, /*hidden argument*/NULL);
		return;
	}

IL_005a:
	{
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_6 = ((Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 *)__this)->get_moveCont_0();
		MoveControl_SelectMove_m876440D568B9B4A54DCFE586D8F75FAC5117EBB8(L_6, /*hidden argument*/NULL);
	}

IL_0065:
	{
		return;
	}
}
// System.Void HumanPlayer::CancelInquiry()
extern "C" IL2CPP_METHOD_ATTR void HumanPlayer_CancelInquiry_m305EA305584A1DFB0E9086061C0E79BF0B95E5E1 (HumanPlayer_t6448D36C66FD3A6DEFB3ABA99F62999E1241A498 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = Input_GetKeyDown_mD82B14BB87E1C811668BD1A2CFBC0CF3D4983FEA(((int32_t)120), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		bool L_1 = ((Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 *)__this)->get_pieceSelected_1();
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		HumanPlayer_CancelSelection_m1DEA45382366491D0F09066E23D09EFC7B5AC073(__this, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void HumanPlayer::CancelSelection()
extern "C" IL2CPP_METHOD_ATTR void HumanPlayer_CancelSelection_m1DEA45382366491D0F09066E23D09EFC7B5AC073 (HumanPlayer_t6448D36C66FD3A6DEFB3ABA99F62999E1241A498 * __this, const RuntimeMethod* method)
{
	{
		((Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 *)__this)->set_pieceSelected_1((bool)0);
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_0 = ((Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 *)__this)->get_moveCont_0();
		MoveControl_CancelSelection_m1C25FC982FC36F29ACC130093D62E16E9F10478A(L_0, /*hidden argument*/NULL);
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
// System.Void JailControl::.ctor(System.String,GameControl,System.Collections.Generic.List`1<UnityEngine.GameObject>)
extern "C" IL2CPP_METHOD_ATTR void JailControl__ctor_m59F6E56058E8FBBC7E637DAE39816D667C74B1D4 (JailControl_tB91171D46728EC0A770E97697349D03D30A694AE * __this, String_t* ___name0, GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * ___gm1, List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * ___initPieces2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JailControl__ctor_m59F6E56058E8FBBC7E637DAE39816D667C74B1D4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)il2cpp_codegen_object_new(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_il2cpp_TypeInfo_var);
		List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4(L_0, /*hidden argument*/List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_RuntimeMethod_var);
		__this->set_possibleMoves_11(L_0);
		PieceContainerControl__ctor_mD4344D0526B59AEFC1F00D4521A7572D37FD6742(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___name0;
		bool L_2 = String_EndsWith_mE4F039DCC2A9FCB8C1ED2D04B00A35E3CE16DE99(L_1, _stringLiteralB406FB57B29FC76F71864FBB37F0238045F84D9D, /*hidden argument*/NULL);
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_isBlack_10(L_2);
		PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* L_3 = (PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51*)SZArrayNew(PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51_il2cpp_TypeInfo_var, (uint32_t)((int32_t)24));
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_allSpots_0(L_3);
		V_0 = 0;
		goto IL_004c;
	}

IL_0033:
	{
		PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* L_4 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_allSpots_0();
		int32_t L_5 = V_0;
		GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * L_6 = ___gm1;
		PieceContainerObjectU5BU5D_t04002C7EAC175CFD098187B608736779B7C0338C* L_7 = L_6->get_allSpots_15();
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_11 = L_10->get_pcc_4();
		ArrayElementTypeCheck (L_4, L_11);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)L_11);
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_004c:
	{
		int32_t L_13 = V_0;
		GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * L_14 = ___gm1;
		PieceContainerObjectU5BU5D_t04002C7EAC175CFD098187B608736779B7C0338C* L_15 = L_14->get_allSpots_15();
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))))))
		{
			goto IL_0033;
		}
	}
	{
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_16 = ___initPieces2;
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_pieces_1(L_16);
		return;
	}
}
// System.Void JailControl::.ctor(PieceContainerControl)
extern "C" IL2CPP_METHOD_ATTR void JailControl__ctor_m7D87CBA6AF7F7472EE890079EC67633EE00D57C4 (JailControl_tB91171D46728EC0A770E97697349D03D30A694AE * __this, PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * ___pcc0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JailControl__ctor_m7D87CBA6AF7F7472EE890079EC67633EE00D57C4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60  V_0;
	memset(&V_0, 0, sizeof(V_0));
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)il2cpp_codegen_object_new(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_il2cpp_TypeInfo_var);
		List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4(L_0, /*hidden argument*/List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_RuntimeMethod_var);
		__this->set_possibleMoves_11(L_0);
		PieceContainerControl__ctor_mD4344D0526B59AEFC1F00D4521A7572D37FD6742(__this, /*hidden argument*/NULL);
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_1 = (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 *)il2cpp_codegen_object_new(List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650_il2cpp_TypeInfo_var);
		List_1__ctor_m70B8A20433AEEDEB942CD3EEC229497AB693E9D6(L_1, /*hidden argument*/List_1__ctor_m70B8A20433AEEDEB942CD3EEC229497AB693E9D6_RuntimeMethod_var);
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_pieces_1(L_1);
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_2 = ___pcc0;
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_3 = L_2->get_pieces_1();
		Enumerator_t42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60  L_4 = List_1_GetEnumerator_mF3F7C6A691B033A8369791D6DDBFE927804CDAB6(L_3, /*hidden argument*/List_1_GetEnumerator_mF3F7C6A691B033A8369791D6DDBFE927804CDAB6_RuntimeMethod_var);
		V_0 = L_4;
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003e;
		}

IL_002a:
		{
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Enumerator_get_Current_m2423588CAA3D28740E46D88133E7B22998378380((Enumerator_t42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m2423588CAA3D28740E46D88133E7B22998378380_RuntimeMethod_var);
			V_1 = L_5;
			List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_6 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_pieces_1();
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = V_1;
			List_1_Add_m94A913D452C8522AD16D2EB42D46016D83D86112(L_6, L_7, /*hidden argument*/List_1_Add_m94A913D452C8522AD16D2EB42D46016D83D86112_RuntimeMethod_var);
		}

IL_003e:
		{
			bool L_8 = Enumerator_MoveNext_mF998290EE501F2F7CA8A67995AAE77B29547C3C8((Enumerator_t42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mF998290EE501F2F7CA8A67995AAE77B29547C3C8_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_002a;
			}
		}

IL_0047:
		{
			IL2CPP_LEAVE(0x57, FINALLY_0049);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0049;
	}

FINALLY_0049:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m0C9F007B48F37CD7F09430C3C1B407ACE6213812((Enumerator_t42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m0C9F007B48F37CD7F09430C3C1B407ACE6213812_RuntimeMethod_var);
		IL2CPP_END_FINALLY(73)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(73)
	{
		IL2CPP_JUMP_TBL(0x57, IL_0057)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0057:
	{
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_9 = ___pcc0;
		int32_t L_10 = L_9->get_position_8();
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_position_8(L_10);
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_11 = ___pcc0;
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_12 = L_11->get_actualPossibleMoves_2();
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_actualPossibleMoves_2(L_12);
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_13 = ___pcc0;
		bool L_14 = L_13->get_isBlack_10();
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_isBlack_10(L_14);
		return;
	}
}
// System.Void JailControl::InitializeOtherPieceContainerControls(PieceContainerControl[],PieceContainerControl,PieceContainerControl)
extern "C" IL2CPP_METHOD_ATTR void JailControl_InitializeOtherPieceContainerControls_mC8F6DC3C45E944A839D4198E643D4ADD4119545D (JailControl_tB91171D46728EC0A770E97697349D03D30A694AE * __this, PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* ___arrPcc0, PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * ___whiteJail1, PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * ___blackJail2, const RuntimeMethod* method)
{
	{
		PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* L_0 = ___arrPcc0;
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_allSpots_0(L_0);
		return;
	}
}
// System.Void JailControl::Start()
extern "C" IL2CPP_METHOD_ATTR void JailControl_Start_m4DB87270FADF4492940330F8F3D6446819BB2FD3 (JailControl_tB91171D46728EC0A770E97697349D03D30A694AE * __this, const RuntimeMethod* method)
{
	{
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_stackPieces_4((0.2f));
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_y_5((1.0f));
		bool L_0 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_isBlack_10();
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_position_8(((int32_t)24));
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_betweenPieces_3((-1.2f));
		goto IL_0045;
	}

IL_0033:
	{
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_position_8((-1));
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_betweenPieces_3((1.2f));
	}

IL_0045:
	{
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_changed_9((bool)1);
		return;
	}
}
// UnityEngine.Vector3 JailControl::CalculatePiecePosition(System.Int32,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  JailControl_CalculatePiecePosition_m9ACD0F82A94F5EBDAF6F25ED2A55576FC19D163F (JailControl_tB91171D46728EC0A770E97697349D03D30A694AE * __this, int32_t ___x0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___x0;
		if ((((int32_t)L_0) >= ((int32_t)5)))
		{
			goto IL_0026;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___position1;
		float L_2 = L_1.get_x_2();
		float L_3 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_betweenPieces_3();
		int32_t L_4 = ___x0;
		float L_5 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_y_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = ___position1;
		float L_7 = L_6.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_8), ((float)il2cpp_codegen_add((float)L_2, (float)((float)il2cpp_codegen_multiply((float)L_3, (float)(((float)((float)L_4))))))), L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0026:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = ___position1;
		float L_10 = L_9.get_x_2();
		float L_11 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_betweenPieces_3();
		int32_t L_12 = ___x0;
		float L_13 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_y_5();
		float L_14 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_stackPieces_4();
		int32_t L_15 = ___x0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = ___position1;
		float L_17 = L_16.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18;
		memset(&L_18, 0, sizeof(L_18));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_18), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)L_11, (float)(((float)((float)((int32_t)((int32_t)L_12%(int32_t)5))))))))), ((float)il2cpp_codegen_add((float)L_13, (float)((float)il2cpp_codegen_multiply((float)L_14, (float)(((float)((float)((int32_t)((int32_t)L_15/(int32_t)5))))))))), L_17, /*hidden argument*/NULL);
		return L_18;
	}
}
// System.Void JailControl::GetPossibleMoves(System.Boolean,System.Int32,System.Int32,System.Boolean[])
extern "C" IL2CPP_METHOD_ATTR void JailControl_GetPossibleMoves_m472408EFD5071022538E61CF653AE22D0507400D (JailControl_tB91171D46728EC0A770E97697349D03D30A694AE * __this, bool ___black0, int32_t ___roll11, int32_t ___roll22, BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* ___rollsUsed3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JailControl_GetPossibleMoves_m472408EFD5071022538E61CF653AE22D0507400D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * V_0 = NULL;
	SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * V_1 = NULL;
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_actualPossibleMoves_2();
		List_1_Clear_mC455BD77767538B1E02BE31A5E915DEE70E7D88C(L_0, /*hidden argument*/List_1_Clear_mC455BD77767538B1E02BE31A5E915DEE70E7D88C_RuntimeMethod_var);
		PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* L_1 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_allSpots_0();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_2 = __this->get_possibleMoves_11();
		int32_t L_3 = ___roll11;
		int32_t L_4 = List_1_get_Item_mB62D52423AF52EEC13B4317DD86E6A5BBDF41BD2(L_2, ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)), /*hidden argument*/List_1_get_Item_mB62D52423AF52EEC13B4317DD86E6A5BBDF41BD2_RuntimeMethod_var);
		int32_t L_5 = L_4;
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_6 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = ((SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 *)CastclassClass((RuntimeObject*)L_6, SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86_il2cpp_TypeInfo_var));
		PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* L_7 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_allSpots_0();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_8 = __this->get_possibleMoves_11();
		int32_t L_9 = ___roll22;
		int32_t L_10 = List_1_get_Item_mB62D52423AF52EEC13B4317DD86E6A5BBDF41BD2(L_8, ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1)), /*hidden argument*/List_1_get_Item_mB62D52423AF52EEC13B4317DD86E6A5BBDF41BD2_RuntimeMethod_var);
		int32_t L_11 = L_10;
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_12 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_1 = ((SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 *)CastclassClass((RuntimeObject*)L_12, SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86_il2cpp_TypeInfo_var));
		int32_t L_13 = ___roll11;
		int32_t L_14 = ___roll22;
		if ((((int32_t)L_13) == ((int32_t)L_14)))
		{
			goto IL_00a6;
		}
	}
	{
		SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * L_15 = V_0;
		bool L_16 = L_15->get_controlled_11();
		if (!L_16)
		{
			goto IL_0056;
		}
	}
	{
		SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * L_17 = V_0;
		bool L_18 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)L_17)->get_isBlack_10();
		bool L_19 = ___black0;
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_0075;
		}
	}

IL_0056:
	{
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_20 = ___rollsUsed3;
		int32_t L_21 = 0;
		uint8_t L_22 = (uint8_t)(L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		if (L_22)
		{
			goto IL_0075;
		}
	}
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_23 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_actualPossibleMoves_2();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_24 = __this->get_possibleMoves_11();
		int32_t L_25 = ___roll11;
		int32_t L_26 = List_1_get_Item_mB62D52423AF52EEC13B4317DD86E6A5BBDF41BD2(L_24, ((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)1)), /*hidden argument*/List_1_get_Item_mB62D52423AF52EEC13B4317DD86E6A5BBDF41BD2_RuntimeMethod_var);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_23, L_26, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
	}

IL_0075:
	{
		SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * L_27 = V_1;
		bool L_28 = L_27->get_controlled_11();
		if (!L_28)
		{
			goto IL_0086;
		}
	}
	{
		SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * L_29 = V_1;
		bool L_30 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)L_29)->get_isBlack_10();
		bool L_31 = ___black0;
		if ((!(((uint32_t)L_30) == ((uint32_t)L_31))))
		{
			goto IL_00d6;
		}
	}

IL_0086:
	{
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_32 = ___rollsUsed3;
		int32_t L_33 = 1;
		uint8_t L_34 = (uint8_t)(L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		if (L_34)
		{
			goto IL_00d6;
		}
	}
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_35 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_actualPossibleMoves_2();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_36 = __this->get_possibleMoves_11();
		int32_t L_37 = ___roll22;
		int32_t L_38 = List_1_get_Item_mB62D52423AF52EEC13B4317DD86E6A5BBDF41BD2(L_36, ((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)1)), /*hidden argument*/List_1_get_Item_mB62D52423AF52EEC13B4317DD86E6A5BBDF41BD2_RuntimeMethod_var);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_35, L_38, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		return;
	}

IL_00a6:
	{
		SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * L_39 = V_0;
		bool L_40 = L_39->get_controlled_11();
		if (!L_40)
		{
			goto IL_00b7;
		}
	}
	{
		SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * L_41 = V_0;
		bool L_42 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)L_41)->get_isBlack_10();
		bool L_43 = ___black0;
		if ((!(((uint32_t)L_42) == ((uint32_t)L_43))))
		{
			goto IL_00d6;
		}
	}

IL_00b7:
	{
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_44 = ___rollsUsed3;
		int32_t L_45 = 3;
		uint8_t L_46 = (uint8_t)(L_44)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_45));
		if (L_46)
		{
			goto IL_00d6;
		}
	}
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_47 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_actualPossibleMoves_2();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_48 = __this->get_possibleMoves_11();
		int32_t L_49 = ___roll11;
		int32_t L_50 = List_1_get_Item_mB62D52423AF52EEC13B4317DD86E6A5BBDF41BD2(L_48, ((int32_t)il2cpp_codegen_subtract((int32_t)L_49, (int32_t)1)), /*hidden argument*/List_1_get_Item_mB62D52423AF52EEC13B4317DD86E6A5BBDF41BD2_RuntimeMethod_var);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_47, L_50, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
	}

IL_00d6:
	{
		return;
	}
}
// System.Void JailControl::CalcPossibleMoves()
extern "C" IL2CPP_METHOD_ATTR void JailControl_CalcPossibleMoves_mED2F3DD3143B4D134FC10CA37B7282B643F00E42 (JailControl_tB91171D46728EC0A770E97697349D03D30A694AE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JailControl_CalcPossibleMoves_mED2F3DD3143B4D134FC10CA37B7282B643F00E42_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 6;
		bool L_0 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_isBlack_10();
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		V_0 = ((int32_t)23);
		V_1 = ((int32_t)17);
		goto IL_002e;
	}

IL_0014:
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_1 = __this->get_possibleMoves_11();
		int32_t L_2 = V_0;
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_1, L_2, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		int32_t L_3 = V_1;
		int32_t L_4 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		goto IL_002e;
	}

IL_002a:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_0014;
		}
	}
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
// System.Void MoveControl::Start()
extern "C" IL2CPP_METHOD_ATTR void MoveControl_Start_m828BD227CE691A94368D9A8177CAF4BCA016C88A (MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MoveControl_Start_m828BD227CE691A94368D9A8177CAF4BCA016C88A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_isBlack_27();
		__this->set_myTurn_18(L_0);
		bool L_1 = __this->get_isBlack_27();
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * L_2 = __this->get_gameMaster_4();
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_3 = L_2->get_blackJailControl_18();
		__this->set_jailControl_28(L_3);
		GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * L_4 = __this->get_gameMaster_4();
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_5 = L_4->get_blackBaseControl_19();
		__this->set_baseControl_29(L_5);
		goto IL_005a;
	}

IL_0038:
	{
		GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * L_6 = __this->get_gameMaster_4();
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_7 = L_6->get_whiteJailControl_16();
		__this->set_jailControl_28(L_7);
		GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * L_8 = __this->get_gameMaster_4();
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_9 = L_8->get_whiteBaseControl_17();
		__this->set_baseControl_29(L_9);
	}

IL_005a:
	{
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_10 = Component_GetComponentInChildren_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_mC210673BE9A285437FF73A2988A9DBAAF9FE337E(__this, /*hidden argument*/Component_GetComponentInChildren_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_mC210673BE9A285437FF73A2988A9DBAAF9FE337E_RuntimeMethod_var);
		__this->set_meshRend_31(L_10);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_11 = __this->get_meshRend_31();
		Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303(L_11, (bool)0, /*hidden argument*/NULL);
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_12 = (BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040*)SZArrayNew(BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->set_rollsUsed_32(L_12);
		return;
	}
}
// System.Void MoveControl::Update()
extern "C" IL2CPP_METHOD_ATTR void MoveControl_Update_m023F77D4E8B0DB78718AA69567C9FC6E15EE9AEF (MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MoveControl_Update_m023F77D4E8B0DB78718AA69567C9FC6E15EE9AEF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = __this->get_winner_23();
		if (L_0)
		{
			goto IL_015c;
		}
	}
	{
		bool L_1 = __this->get_myTurn_18();
		if (!L_1)
		{
			goto IL_00dc;
		}
	}
	{
		GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * L_2 = __this->get_gameMaster_4();
		L_2->set_currentMover_7(__this);
		bool L_3 = __this->get_turnOver_22();
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * L_4 = __this->get_player_30();
		Player_TurnOver_m06B503905EE06A60A81F8F84B9B13EEFDC610DAA(L_4, /*hidden argument*/NULL);
		return;
	}

IL_0036:
	{
		bool L_5 = __this->get_diceRolled_19();
		if (L_5)
		{
			goto IL_0062;
		}
	}
	{
		bool L_6 = __this->get_playerRolledDice_21();
		if (!L_6)
		{
			goto IL_0055;
		}
	}
	{
		RuntimeObject* L_7 = MoveControl_RollDice_m5CA0045C2643BD5A22020689083A70C9D7AB46A5(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_7, /*hidden argument*/NULL);
		goto IL_00ae;
	}

IL_0055:
	{
		Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * L_8 = __this->get_player_30();
		VirtActionInvoker0::Invoke(5 /* System.Void Player::RollDice() */, L_8);
		goto IL_00ae;
	}

IL_0062:
	{
		bool L_9 = __this->get_diceViewed_26();
		if (!L_9)
		{
			goto IL_007a;
		}
	}
	{
		bool L_10 = __this->get_listsSet_24();
		if (L_10)
		{
			goto IL_007a;
		}
	}
	{
		MoveControl_SetAvailableLists_mA8EB1A2A28AD3D5AD3F62783239D1180BC0D6691(__this, /*hidden argument*/NULL);
		goto IL_00ae;
	}

IL_007a:
	{
		bool L_11 = __this->get_listsSet_24();
		bool L_12 = __this->get_initialSet_25();
		if (!((int32_t)((int32_t)L_11&(int32_t)((((int32_t)L_12) == ((int32_t)0))? 1 : 0))))
		{
			goto IL_0094;
		}
	}
	{
		MoveControl_SetInitialLocation_mA74441CD66879E56C07F20F1E9D0CB0582F92F53(__this, /*hidden argument*/NULL);
		goto IL_00ae;
	}

IL_0094:
	{
		bool L_13 = __this->get_listsSet_24();
		bool L_14 = __this->get_initialSet_25();
		if (!((int32_t)((int32_t)L_13&(int32_t)L_14)))
		{
			goto IL_00ae;
		}
	}
	{
		Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * L_15 = __this->get_player_30();
		VirtActionInvoker0::Invoke(4 /* System.Void Player::PickPieceOrSpot() */, L_15);
	}

IL_00ae:
	{
		Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * L_16 = __this->get_player_30();
		VirtActionInvoker0::Invoke(6 /* System.Void Player::CancelInquiry() */, L_16);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		float L_18 = __this->get_locationX_9();
		float L_19 = __this->get_locationY_10();
		float L_20 = __this->get_locationZ_11();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21;
		memset(&L_21, 0, sizeof(L_21));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_21), L_18, L_19, L_20, /*hidden argument*/NULL);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_17, L_21, /*hidden argument*/NULL);
		return;
	}

IL_00dc:
	{
		GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * L_22 = __this->get_gameMaster_4();
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_23 = L_22->get_currentMover_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_24 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_23, __this, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_011a;
		}
	}
	{
		GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * L_25 = __this->get_gameMaster_4();
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_26 = L_25->get_currentMover_7();
		bool L_27 = L_26->get_myTurn_18();
		if (L_27)
		{
			goto IL_011a;
		}
	}
	{
		GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * L_28 = __this->get_gameMaster_4();
		CameraControl_t747F330F97DFEE9545303C2301EE6AF2740E573E * L_29 = L_28->get_cam_6();
		bool L_30 = L_29->get_flipping_4();
		if (L_30)
		{
			goto IL_011a;
		}
	}
	{
		__this->set_myTurn_18((bool)1);
	}

IL_011a:
	{
		Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * L_31 = __this->get_player_30();
		Player_ResetVariables_m39548A01AEBF1AF75527CD40B33B3162F0BF839C(L_31, /*hidden argument*/NULL);
		int32_t L_32 = 0;
		V_0 = (bool)L_32;
		__this->set_initialSet_25((bool)L_32);
		bool L_33 = V_0;
		bool L_34 = L_33;
		V_0 = L_34;
		__this->set_listsSet_24(L_34);
		bool L_35 = V_0;
		bool L_36 = L_35;
		V_0 = L_36;
		__this->set_playerRolledDice_21(L_36);
		bool L_37 = V_0;
		bool L_38 = L_37;
		V_0 = L_38;
		__this->set_diceViewed_26(L_38);
		bool L_39 = V_0;
		__this->set_diceRolled_19(L_39);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_40 = __this->get_meshRend_31();
		Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303(L_40, (bool)0, /*hidden argument*/NULL);
	}

IL_015c:
	{
		return;
	}
}
// System.Void MoveControl::CancelSelection()
extern "C" IL2CPP_METHOD_ATTR void MoveControl_CancelSelection_m1C25FC982FC36F29ACC130093D62E16E9F10478A (MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * __this, const RuntimeMethod* method)
{
	{
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_0 = __this->get_meshRend_31();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_1 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_0, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_2 = Color_get_red_m5562DD438931CF0D1FBBBB29BF7F8B752AF38957(/*hidden argument*/NULL);
		Material_set_color_m127EAC5D3CC68359E72D12A2B3CE7428EFBB81C3(L_1, L_2, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_currentPiece_5();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_3, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = __this->get_oldParent_15();
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_4, L_5, /*hidden argument*/NULL);
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_6 = __this->get_oldSpot_16();
		L_6->set_changed_9((bool)1);
		__this->set_initialSet_25((bool)0);
		return;
	}
}
// System.Void MoveControl::SelectNextSpot(System.String)
extern "C" IL2CPP_METHOD_ATTR void MoveControl_SelectNextSpot_m7ED64A857875FA5E14F881B2505E72FD6E20D358 (MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * __this, String_t* ___direction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MoveControl_SelectNextSpot_m7ED64A857875FA5E14F881B2505E72FD6E20D358_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___direction0;
		bool L_1 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_0, _stringLiteral2038BDEC9210202D0D9D74839E3925FF0CD91BA1, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_2 = ___direction0;
		bool L_3 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_2, _stringLiteralBF93E5CE8BC1228C2585B3F5A368053C9FE8346A, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_004b;
		}
	}
	{
		goto IL_0079;
	}

IL_001c:
	{
		int16_t L_4 = __this->get_spot_12();
		List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * L_5 = __this->get_availableSpots_6();
		int32_t L_6 = List_1_get_Count_m0C31F7C9173DD07B725516D783DFB61620B590EF(L_5, /*hidden argument*/List_1_get_Count_m0C31F7C9173DD07B725516D783DFB61620B590EF_RuntimeMethod_var);
		if ((((int32_t)L_4) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)))))
		{
			goto IL_0042;
		}
	}
	{
		int16_t L_7 = __this->get_spot_12();
		__this->set_spot_12((((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1))))));
		goto IL_0079;
	}

IL_0042:
	{
		__this->set_spot_12((int16_t)0);
		goto IL_0079;
	}

IL_004b:
	{
		int16_t L_8 = __this->get_spot_12();
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0065;
		}
	}
	{
		int16_t L_9 = __this->get_spot_12();
		__this->set_spot_12((((int16_t)((int16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1))))));
		goto IL_0079;
	}

IL_0065:
	{
		List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * L_10 = __this->get_availableSpots_6();
		int32_t L_11 = List_1_get_Count_m0C31F7C9173DD07B725516D783DFB61620B590EF(L_10, /*hidden argument*/List_1_get_Count_m0C31F7C9173DD07B725516D783DFB61620B590EF_RuntimeMethod_var);
		__this->set_spot_12((((int16_t)((int16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1))))));
	}

IL_0079:
	{
		List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * L_12 = __this->get_availableSpots_6();
		int16_t L_13 = __this->get_spot_12();
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_14 = List_1_get_Item_m44957D0808C9611F1153F47A4ADAEAB5E45F1154(L_12, L_13, /*hidden argument*/List_1_get_Item_m44957D0808C9611F1153F47A4ADAEAB5E45F1154_RuntimeMethod_var);
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_15 = L_14->get_pcc_4();
		__this->set_currentSpot_17(L_15);
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_16 = __this->get_currentSpot_17();
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_17 = L_16->get_pieces_1();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_18 = List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8(L_17, 0, /*hidden argument*/List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8_RuntimeMethod_var);
		__this->set_currentPiece_5(L_18);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_19 = __this->get_currentPiece_5();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_19, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_20, /*hidden argument*/NULL);
		float L_22 = L_21.get_x_2();
		__this->set_locationX_9(L_22);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_23 = __this->get_currentPiece_5();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_24 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_23, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_24, /*hidden argument*/NULL);
		float L_26 = L_25.get_y_3();
		float L_27 = __this->get_y_8();
		__this->set_locationY_10(((float)il2cpp_codegen_add((float)L_26, (float)L_27)));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_28 = __this->get_currentPiece_5();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_29 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_28, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_29, /*hidden argument*/NULL);
		float L_31 = L_30.get_z_4();
		__this->set_locationZ_11(L_31);
		MoveControl_SetAvailableMoves_mFAE5AB39D16ADE9C818BBB9A4A5953F24DE640B9(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoveControl::SelectFirstSpot()
extern "C" IL2CPP_METHOD_ATTR void MoveControl_SelectFirstSpot_mE4AF031F7958B630BE469C1C15C1ED1E16EE6457 (MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MoveControl_SelectFirstSpot_mE4AF031F7958B630BE469C1C15C1ED1E16EE6457_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_spot_12((int16_t)0);
		List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * L_0 = __this->get_availableSpots_6();
		int16_t L_1 = __this->get_spot_12();
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_2 = List_1_get_Item_m44957D0808C9611F1153F47A4ADAEAB5E45F1154(L_0, L_1, /*hidden argument*/List_1_get_Item_m44957D0808C9611F1153F47A4ADAEAB5E45F1154_RuntimeMethod_var);
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_3 = L_2->get_pcc_4();
		__this->set_currentSpot_17(L_3);
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_4 = __this->get_currentSpot_17();
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_5 = L_4->get_pieces_1();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8(L_5, 0, /*hidden argument*/List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8_RuntimeMethod_var);
		__this->set_currentPiece_5(L_6);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = __this->get_currentPiece_5();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_7, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_x_2();
		__this->set_locationX_9(L_10);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = __this->get_currentPiece_5();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_11, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_y_3();
		float L_15 = __this->get_y_8();
		__this->set_locationY_10(((float)il2cpp_codegen_add((float)L_14, (float)L_15)));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_16 = __this->get_currentPiece_5();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_16, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_z_4();
		__this->set_locationZ_11(L_19);
		MoveControl_SetAvailableMoves_mFAE5AB39D16ADE9C818BBB9A4A5953F24DE640B9(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoveControl::SelectFirstMove()
extern "C" IL2CPP_METHOD_ATTR void MoveControl_SelectFirstMove_m4B43D38DC0A36FEE6B7D2FAF38B1E9AF057262CA (MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MoveControl_SelectFirstMove_m4B43D38DC0A36FEE6B7D2FAF38B1E9AF057262CA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_spot_12((int16_t)0);
		List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * L_0 = __this->get_availableMoves_7();
		int16_t L_1 = __this->get_spot_12();
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_2 = List_1_get_Item_m44957D0808C9611F1153F47A4ADAEAB5E45F1154(L_0, L_1, /*hidden argument*/List_1_get_Item_m44957D0808C9611F1153F47A4ADAEAB5E45F1154_RuntimeMethod_var);
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_3 = L_2->get_pcc_4();
		__this->set_currentSpot_17(L_3);
		List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * L_4 = __this->get_availableMoves_7();
		int16_t L_5 = __this->get_spot_12();
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_6 = List_1_get_Item_m44957D0808C9611F1153F47A4ADAEAB5E45F1154(L_4, L_5, /*hidden argument*/List_1_get_Item_m44957D0808C9611F1153F47A4ADAEAB5E45F1154_RuntimeMethod_var);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_6, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_x_2();
		__this->set_locationX_9(L_9);
		List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * L_10 = __this->get_availableMoves_7();
		int16_t L_11 = __this->get_spot_12();
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_12 = List_1_get_Item_m44957D0808C9611F1153F47A4ADAEAB5E45F1154(L_10, L_11, /*hidden argument*/List_1_get_Item_m44957D0808C9611F1153F47A4ADAEAB5E45F1154_RuntimeMethod_var);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_12, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_y_3();
		float L_16 = __this->get_y_8();
		__this->set_locationY_10(((float)il2cpp_codegen_add((float)L_15, (float)L_16)));
		List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * L_17 = __this->get_availableMoves_7();
		int16_t L_18 = __this->get_spot_12();
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_19 = List_1_get_Item_m44957D0808C9611F1153F47A4ADAEAB5E45F1154(L_17, L_18, /*hidden argument*/List_1_get_Item_m44957D0808C9611F1153F47A4ADAEAB5E45F1154_RuntimeMethod_var);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_19, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_20, /*hidden argument*/NULL);
		float L_22 = L_21.get_z_4();
		__this->set_locationZ_11(L_22);
		return;
	}
}
// System.Void MoveControl::SelectNextMove(System.String)
extern "C" IL2CPP_METHOD_ATTR void MoveControl_SelectNextMove_mFFE4350A74AE9DE5A37313F49B66D0D109723785 (MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * __this, String_t* ___direction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MoveControl_SelectNextMove_mFFE4350A74AE9DE5A37313F49B66D0D109723785_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___direction0;
		bool L_1 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_0, _stringLiteral2038BDEC9210202D0D9D74839E3925FF0CD91BA1, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_2 = ___direction0;
		bool L_3 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_2, _stringLiteralBF93E5CE8BC1228C2585B3F5A368053C9FE8346A, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_004b;
		}
	}
	{
		goto IL_0079;
	}

IL_001c:
	{
		int16_t L_4 = __this->get_spot_12();
		List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * L_5 = __this->get_availableMoves_7();
		int32_t L_6 = List_1_get_Count_m0C31F7C9173DD07B725516D783DFB61620B590EF(L_5, /*hidden argument*/List_1_get_Count_m0C31F7C9173DD07B725516D783DFB61620B590EF_RuntimeMethod_var);
		if ((((int32_t)L_4) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)))))
		{
			goto IL_0042;
		}
	}
	{
		int16_t L_7 = __this->get_spot_12();
		__this->set_spot_12((((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1))))));
		goto IL_0079;
	}

IL_0042:
	{
		__this->set_spot_12((int16_t)0);
		goto IL_0079;
	}

IL_004b:
	{
		int16_t L_8 = __this->get_spot_12();
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0065;
		}
	}
	{
		int16_t L_9 = __this->get_spot_12();
		__this->set_spot_12((((int16_t)((int16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1))))));
		goto IL_0079;
	}

IL_0065:
	{
		List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * L_10 = __this->get_availableMoves_7();
		int32_t L_11 = List_1_get_Count_m0C31F7C9173DD07B725516D783DFB61620B590EF(L_10, /*hidden argument*/List_1_get_Count_m0C31F7C9173DD07B725516D783DFB61620B590EF_RuntimeMethod_var);
		__this->set_spot_12((((int16_t)((int16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1))))));
	}

IL_0079:
	{
		List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * L_12 = __this->get_availableMoves_7();
		int16_t L_13 = __this->get_spot_12();
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_14 = List_1_get_Item_m44957D0808C9611F1153F47A4ADAEAB5E45F1154(L_12, L_13, /*hidden argument*/List_1_get_Item_m44957D0808C9611F1153F47A4ADAEAB5E45F1154_RuntimeMethod_var);
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_15 = L_14->get_pcc_4();
		__this->set_currentSpot_17(L_15);
		List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * L_16 = __this->get_availableMoves_7();
		int16_t L_17 = __this->get_spot_12();
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_18 = List_1_get_Item_m44957D0808C9611F1153F47A4ADAEAB5E45F1154(L_16, L_17, /*hidden argument*/List_1_get_Item_m44957D0808C9611F1153F47A4ADAEAB5E45F1154_RuntimeMethod_var);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_19 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_18, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_19, /*hidden argument*/NULL);
		float L_21 = L_20.get_x_2();
		__this->set_locationX_9(L_21);
		List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * L_22 = __this->get_availableMoves_7();
		int16_t L_23 = __this->get_spot_12();
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_24 = List_1_get_Item_m44957D0808C9611F1153F47A4ADAEAB5E45F1154(L_22, L_23, /*hidden argument*/List_1_get_Item_m44957D0808C9611F1153F47A4ADAEAB5E45F1154_RuntimeMethod_var);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_25 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_24, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_25, /*hidden argument*/NULL);
		float L_27 = L_26.get_y_3();
		float L_28 = __this->get_y_8();
		__this->set_locationY_10(((float)il2cpp_codegen_add((float)L_27, (float)L_28)));
		List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * L_29 = __this->get_availableMoves_7();
		int16_t L_30 = __this->get_spot_12();
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_31 = List_1_get_Item_m44957D0808C9611F1153F47A4ADAEAB5E45F1154(L_29, L_30, /*hidden argument*/List_1_get_Item_m44957D0808C9611F1153F47A4ADAEAB5E45F1154_RuntimeMethod_var);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_32 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_31, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_32, /*hidden argument*/NULL);
		float L_34 = L_33.get_z_4();
		__this->set_locationZ_11(L_34);
		return;
	}
}
// System.Void MoveControl::SelectPiece()
extern "C" IL2CPP_METHOD_ATTR void MoveControl_SelectPiece_m0393DE8C62C80286EB7F4334DDFB67CFA59FC92F (MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MoveControl_SelectPiece_m0393DE8C62C80286EB7F4334DDFB67CFA59FC92F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_0 = __this->get_currentSpot_17();
		__this->set_oldSpot_16(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_currentPiece_5();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_1, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403(L_2, /*hidden argument*/NULL);
		__this->set_oldParent_15(L_3);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_currentPiece_5();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_4, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_5, L_6, /*hidden argument*/NULL);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_7 = Component_GetComponentInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m4BCA8F337F4B38409E86A82CAAD0E8B0FAD73A9A(__this, /*hidden argument*/Component_GetComponentInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m4BCA8F337F4B38409E86A82CAAD0E8B0FAD73A9A_RuntimeMethod_var);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_8 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_7, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_9 = Color_get_yellow_mC8BD62CCC364EA5FC4273D4C2E116D0E2DE135AE(/*hidden argument*/NULL);
		Material_set_color_m127EAC5D3CC68359E72D12A2B3CE7428EFBB81C3(L_8, L_9, /*hidden argument*/NULL);
		Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * L_10 = __this->get_player_30();
		RuntimeObject* L_11 = Player_SelectedPiece_m140C2295FCC24479EB232A20F62A6572476EF2BC(L_10, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoveControl::SelectMove()
extern "C" IL2CPP_METHOD_ATTR void MoveControl_SelectMove_m876440D568B9B4A54DCFE586D8F75FAC5117EBB8 (MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MoveControl_SelectMove_m876440D568B9B4A54DCFE586D8F75FAC5117EBB8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_t1F0FA6B924150C3B8AC6B978C7B357655AE09E7E  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * L_0 = __this->get_availableMoves_7();
		Enumerator_t1F0FA6B924150C3B8AC6B978C7B357655AE09E7E  L_1 = List_1_GetEnumerator_mAB7898C7CE9AB2E9C46746EE8A59B15F3D0FDC77(L_0, /*hidden argument*/List_1_GetEnumerator_mAB7898C7CE9AB2E9C46746EE8A59B15F3D0FDC77_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001b;
		}

IL_000e:
		{
			PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_2 = Enumerator_get_Current_mF0DE1937EBF26D34F5E9DFBC22625FB24B00741E((Enumerator_t1F0FA6B924150C3B8AC6B978C7B357655AE09E7E *)(&V_1), /*hidden argument*/Enumerator_get_Current_mF0DE1937EBF26D34F5E9DFBC22625FB24B00741E_RuntimeMethod_var);
			PieceContainerObject_Outline_m31733DE41B7718E396AB1407E80DA126EB5932F0(L_2, (bool)0, /*hidden argument*/NULL);
		}

IL_001b:
		{
			bool L_3 = Enumerator_MoveNext_m5716AD325B321CFD021419D90C0A79E1686F853F((Enumerator_t1F0FA6B924150C3B8AC6B978C7B357655AE09E7E *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m5716AD325B321CFD021419D90C0A79E1686F853F_RuntimeMethod_var);
			if (L_3)
			{
				goto IL_000e;
			}
		}

IL_0024:
		{
			IL2CPP_LEAVE(0x34, FINALLY_0026);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mE4B284926D2E4102C056748493BDCE45EDCF00A1((Enumerator_t1F0FA6B924150C3B8AC6B978C7B357655AE09E7E *)(&V_1), /*hidden argument*/Enumerator_Dispose_mE4B284926D2E4102C056748493BDCE45EDCF00A1_RuntimeMethod_var);
		IL2CPP_END_FINALLY(38)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x34, IL_0034)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0034:
	{
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_4 = __this->get_currentSpot_17();
		int32_t L_5 = L_4->get_position_8();
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_6 = __this->get_oldSpot_16();
		int32_t L_7 = L_6->get_position_8();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_8 = Mathf_Abs_mC7DD2FB3789B5409055836D0E7D8227AD2099FDC(((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_9 = __this->get_oldSpot_16();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = __this->get_currentPiece_5();
		VirtActionInvoker1< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(5 /* System.Void PieceContainerControl::RemovePiece(UnityEngine.GameObject) */, L_9, L_10);
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_11 = __this->get_currentSpot_17();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = __this->get_currentPiece_5();
		VirtActionInvoker1< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(4 /* System.Void PieceContainerControl::AddPiece(UnityEngine.GameObject) */, L_11, L_12);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_13 = __this->get_currentPiece_5();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_13, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = __this->get_oldParent_15();
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_14, L_15, /*hidden argument*/NULL);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_16 = Component_GetComponentInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m4BCA8F337F4B38409E86A82CAAD0E8B0FAD73A9A(__this, /*hidden argument*/Component_GetComponentInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m4BCA8F337F4B38409E86A82CAAD0E8B0FAD73A9A_RuntimeMethod_var);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_17 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_16, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_18 = Color_get_red_m5562DD438931CF0D1FBBBB29BF7F8B752AF38957(/*hidden argument*/NULL);
		Material_set_color_m127EAC5D3CC68359E72D12A2B3CE7428EFBB81C3(L_17, L_18, /*hidden argument*/NULL);
		Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * L_19 = __this->get_player_30();
		RuntimeObject* L_20 = Player_SelectedSpot_mD7BBEEB45769462312B02A821E8D1919488865F1(L_19, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_20, /*hidden argument*/NULL);
		int32_t L_21 = V_0;
		MoveControl_SetRollsUsed_mB1E1A593715ACC9FC0623A53F1053FDFEE58A69A(__this, L_21, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoveControl::SetPlayer(System.String)
extern "C" IL2CPP_METHOD_ATTR void MoveControl_SetPlayer_mCB89B4ECBC11BDD92227B4EC5273B21AF30A6041 (MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * __this, String_t* ___playerType0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___playerType0;
		Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * L_1 = PlayerFactory_GetPlayer_m97FF956EFDD2208AF1833C4519D09D7F5A53E183(L_0, /*hidden argument*/NULL);
		__this->set_player_30(L_1);
		Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * L_2 = __this->get_player_30();
		Player_SetMover_mF3F58D86F0CA15BD025CAF8527410C7EF8D55425(L_2, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MoveControl::PickingFromJail()
extern "C" IL2CPP_METHOD_ATTR bool MoveControl_PickingFromJail_m901F3B16893EFC198B47031889655F03CB171A97 (MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MoveControl_PickingFromJail_m901F3B16893EFC198B47031889655F03CB171A97_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_0 = __this->get_jailControl_28();
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_1 = L_0->get_pieces_6();
		int32_t L_2 = List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35(L_1, /*hidden argument*/List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35_RuntimeMethod_var);
		return (bool)((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
	}
}
// System.Void MoveControl::SetRollsUsed(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MoveControl_SetRollsUsed_mB1E1A593715ACC9FC0623A53F1053FDFEE58A69A (MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * __this, int32_t ___spotsmoved0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = __this->get_doubles_20();
		if (L_0)
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_1 = ___spotsmoved0;
		int32_t L_2 = __this->get_roll1_13();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_002a;
		}
	}
	{
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_3 = __this->get_rollsUsed_32();
		int32_t L_4 = 0;
		uint8_t L_5 = (uint8_t)(L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		if (L_5)
		{
			goto IL_002a;
		}
	}
	{
		MoveControl_SetUsedRoll_mC7EDCDE6309C11C4F19CDF4E86A42FBFCAC0071F(__this, 0, /*hidden argument*/NULL);
		goto IL_00d0;
	}

IL_002a:
	{
		int32_t L_6 = ___spotsmoved0;
		int32_t L_7 = __this->get_roll2_14();
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0049;
		}
	}
	{
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_8 = __this->get_rollsUsed_32();
		int32_t L_9 = 1;
		uint8_t L_10 = (uint8_t)(L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		if (L_10)
		{
			goto IL_0049;
		}
	}
	{
		MoveControl_SetUsedRoll_mC7EDCDE6309C11C4F19CDF4E86A42FBFCAC0071F(__this, 1, /*hidden argument*/NULL);
		goto IL_00d0;
	}

IL_0049:
	{
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_11 = __this->get_rollsUsed_32();
		int32_t L_12 = 0;
		uint8_t L_13 = (uint8_t)(L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		if (!L_13)
		{
			goto IL_0066;
		}
	}
	{
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_14 = __this->get_rollsUsed_32();
		int32_t L_15 = 1;
		uint8_t L_16 = (uint8_t)(L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		if (L_16)
		{
			goto IL_0066;
		}
	}
	{
		MoveControl_SetUsedRoll_mC7EDCDE6309C11C4F19CDF4E86A42FBFCAC0071F(__this, 1, /*hidden argument*/NULL);
		goto IL_00d0;
	}

IL_0066:
	{
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_17 = __this->get_rollsUsed_32();
		int32_t L_18 = 0;
		uint8_t L_19 = (uint8_t)(L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		if (L_19)
		{
			goto IL_0083;
		}
	}
	{
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_20 = __this->get_rollsUsed_32();
		int32_t L_21 = 1;
		uint8_t L_22 = (uint8_t)(L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		if (!L_22)
		{
			goto IL_0083;
		}
	}
	{
		MoveControl_SetUsedRoll_mC7EDCDE6309C11C4F19CDF4E86A42FBFCAC0071F(__this, 0, /*hidden argument*/NULL);
		goto IL_00d0;
	}

IL_0083:
	{
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_23 = __this->get_rollsUsed_32();
		int32_t L_24 = 0;
		uint8_t L_25 = (uint8_t)(L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		if (L_25)
		{
			goto IL_00d0;
		}
	}
	{
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_26 = __this->get_rollsUsed_32();
		int32_t L_27 = 1;
		uint8_t L_28 = (uint8_t)(L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		if (L_28)
		{
			goto IL_00d0;
		}
	}
	{
		int32_t L_29 = __this->get_roll1_13();
		int32_t L_30 = __this->get_roll2_14();
		if ((((int32_t)L_29) >= ((int32_t)L_30)))
		{
			goto IL_00ae;
		}
	}
	{
		MoveControl_SetUsedRoll_mC7EDCDE6309C11C4F19CDF4E86A42FBFCAC0071F(__this, 0, /*hidden argument*/NULL);
		goto IL_00d0;
	}

IL_00ae:
	{
		MoveControl_SetUsedRoll_mC7EDCDE6309C11C4F19CDF4E86A42FBFCAC0071F(__this, 1, /*hidden argument*/NULL);
		goto IL_00d0;
	}

IL_00b7:
	{
		V_0 = 0;
		goto IL_00bf;
	}

IL_00bb:
	{
		int32_t L_31 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_00bf:
	{
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_32 = __this->get_rollsUsed_32();
		int32_t L_33 = V_0;
		int32_t L_34 = L_33;
		uint8_t L_35 = (uint8_t)(L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		if (L_35)
		{
			goto IL_00bb;
		}
	}
	{
		int32_t L_36 = V_0;
		MoveControl_SetUsedRoll_mC7EDCDE6309C11C4F19CDF4E86A42FBFCAC0071F(__this, L_36, /*hidden argument*/NULL);
	}

IL_00d0:
	{
		__this->set_listsSet_24((bool)0);
		return;
	}
}
// System.Void MoveControl::SetUsedRoll(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MoveControl_SetUsedRoll_mC7EDCDE6309C11C4F19CDF4E86A42FBFCAC0071F (MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * __this, int32_t ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MoveControl_SetUsedRoll_mC7EDCDE6309C11C4F19CDF4E86A42FBFCAC0071F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_0 = __this->get_rollsUsed_32();
		int32_t L_1 = ___x0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (bool)1);
		int32_t L_2 = ___x0;
		int32_t L_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		RuntimeObject * L_4 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral78C8FBCA74B2D998F287E6059667873A24708652, L_4, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(L_5, /*hidden argument*/NULL);
		DiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A * L_7 = GameObject_GetComponent_TisDiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A_mA7294B4DDA340D3490D437E1FB38545C36FF114C(L_6, /*hidden argument*/GameObject_GetComponent_TisDiceControl_t1BB26D165C463443AC5CDDA73CFD7027C443906A_mA7294B4DDA340D3490D437E1FB38545C36FF114C_RuntimeMethod_var);
		DiceControl_SetSprite_m4BBE869E0A0C58726B5B9D6F0F50618B94059DD7(L_7, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoveControl::SetInitialLocation()
extern "C" IL2CPP_METHOD_ATTR void MoveControl_SetInitialLocation_mA74441CD66879E56C07F20F1E9D0CB0582F92F53 (MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MoveControl_SetInitialLocation_mA74441CD66879E56C07F20F1E9D0CB0582F92F53_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_spot_12((int16_t)0);
		List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * L_0 = __this->get_availableSpots_6();
		int16_t L_1 = __this->get_spot_12();
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_2 = List_1_get_Item_m44957D0808C9611F1153F47A4ADAEAB5E45F1154(L_0, L_1, /*hidden argument*/List_1_get_Item_m44957D0808C9611F1153F47A4ADAEAB5E45F1154_RuntimeMethod_var);
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_3 = L_2->get_pcc_4();
		__this->set_currentSpot_17(L_3);
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_4 = __this->get_currentSpot_17();
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_5 = L_4->get_pieces_1();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8(L_5, 0, /*hidden argument*/List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8_RuntimeMethod_var);
		__this->set_currentPiece_5(L_6);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = __this->get_currentPiece_5();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_7, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_x_2();
		__this->set_locationX_9(L_10);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = __this->get_currentPiece_5();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_11, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_y_3();
		float L_15 = __this->get_y_8();
		__this->set_locationY_10(((float)il2cpp_codegen_add((float)L_14, (float)L_15)));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_16 = __this->get_currentPiece_5();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_16, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_z_4();
		__this->set_locationZ_11(L_19);
		MoveControl_SetAvailableMoves_mFAE5AB39D16ADE9C818BBB9A4A5953F24DE640B9(__this, /*hidden argument*/NULL);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_20 = __this->get_meshRend_31();
		Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303(L_20, (bool)1, /*hidden argument*/NULL);
		__this->set_initialSet_25((bool)1);
		return;
	}
}
// System.Collections.IEnumerator MoveControl::RollDice()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* MoveControl_RollDice_m5CA0045C2643BD5A22020689083A70C9D7AB46A5 (MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MoveControl_RollDice_m5CA0045C2643BD5A22020689083A70C9D7AB46A5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRollDiceU3Ed__43_t514A39DE6611616314A8018F4CB2DE9DC4BA3891 * L_0 = (U3CRollDiceU3Ed__43_t514A39DE6611616314A8018F4CB2DE9DC4BA3891 *)il2cpp_codegen_object_new(U3CRollDiceU3Ed__43_t514A39DE6611616314A8018F4CB2DE9DC4BA3891_il2cpp_TypeInfo_var);
		U3CRollDiceU3Ed__43__ctor_mD5A32F5C603E0785C09046DDC321538D90220887(L_0, 0, /*hidden argument*/NULL);
		U3CRollDiceU3Ed__43_t514A39DE6611616314A8018F4CB2DE9DC4BA3891 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void MoveControl::SetAvailableLists()
extern "C" IL2CPP_METHOD_ATTR void MoveControl_SetAvailableLists_mA8EB1A2A28AD3D5AD3F62783239D1180BC0D6691 (MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MoveControl_SetAvailableLists_mA8EB1A2A28AD3D5AD3F62783239D1180BC0D6691_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PieceContainerObjectU5BU5D_t04002C7EAC175CFD098187B608736779B7C0338C* V_0 = NULL;
	int32_t V_1 = 0;
	PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * V_2 = NULL;
	Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C  V_3;
	memset(&V_3, 0, sizeof(V_3));
	int32_t V_4 = 0;
	SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_0 = __this->get_baseControl_29();
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_1 = L_0->get_pieces_6();
		int32_t L_2 = List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35(L_1, /*hidden argument*/List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35_RuntimeMethod_var);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_001c;
		}
	}
	{
		__this->set_winner_23((bool)1);
		return;
	}

IL_001c:
	{
		List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * L_3 = __this->get_availableSpots_6();
		List_1_Clear_mEA71FAB9784BA98028A2DCE5AD1BACFA52B6BA7D(L_3, /*hidden argument*/List_1_Clear_mEA71FAB9784BA98028A2DCE5AD1BACFA52B6BA7D_RuntimeMethod_var);
		__this->set_currentPiece_5((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
		bool L_4 = MoveControl_PickingFromJail_m901F3B16893EFC198B47031889655F03CB171A97(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_008f;
		}
	}
	{
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_5 = __this->get_jailControl_28();
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_6 = L_5->get_pcc_4();
		bool L_7 = __this->get_isBlack_27();
		int32_t L_8 = __this->get_roll1_13();
		int32_t L_9 = __this->get_roll2_14();
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_10 = __this->get_rollsUsed_32();
		VirtActionInvoker4< bool, int32_t, int32_t, BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* >::Invoke(8 /* System.Void PieceContainerControl::GetPossibleMoves(System.Boolean,System.Int32,System.Int32,System.Boolean[]) */, L_6, L_7, L_8, L_9, L_10);
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_11 = __this->get_jailControl_28();
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_12 = L_11->get_pcc_4();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_13 = L_12->get_actualPossibleMoves_2();
		int32_t L_14 = List_1_get_Count_m7984BA6C664D8EAE284C168D0568FE2B9136A033(L_13, /*hidden argument*/List_1_get_Count_m7984BA6C664D8EAE284C168D0568FE2B9136A033_RuntimeMethod_var);
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_0243;
		}
	}
	{
		List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * L_15 = __this->get_availableSpots_6();
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_16 = __this->get_jailControl_28();
		List_1_Add_m92423B6E35D20B33D4FD89EA94A93D79784337C4(L_15, L_16, /*hidden argument*/List_1_Add_m92423B6E35D20B33D4FD89EA94A93D79784337C4_RuntimeMethod_var);
		goto IL_0243;
	}

IL_008f:
	{
		GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * L_17 = __this->get_gameMaster_4();
		PieceContainerObjectU5BU5D_t04002C7EAC175CFD098187B608736779B7C0338C* L_18 = L_17->get_allSpots_15();
		V_0 = L_18;
		V_1 = 0;
		goto IL_011c;
	}

IL_009f:
	{
		PieceContainerObjectU5BU5D_t04002C7EAC175CFD098187B608736779B7C0338C* L_19 = V_0;
		int32_t L_20 = V_1;
		int32_t L_21 = L_20;
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		V_2 = L_22;
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_23 = V_2;
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_24 = L_23->get_pcc_4();
		bool L_25 = __this->get_isBlack_27();
		int32_t L_26 = __this->get_roll1_13();
		int32_t L_27 = __this->get_roll2_14();
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_28 = __this->get_rollsUsed_32();
		VirtActionInvoker4< bool, int32_t, int32_t, BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* >::Invoke(8 /* System.Void PieceContainerControl::GetPossibleMoves(System.Boolean,System.Int32,System.Int32,System.Boolean[]) */, L_24, L_25, L_26, L_27, L_28);
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_29 = V_2;
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_30 = L_29->get_pcc_4();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_31 = L_30->get_actualPossibleMoves_2();
		int32_t L_32 = List_1_get_Count_m7984BA6C664D8EAE284C168D0568FE2B9136A033(L_31, /*hidden argument*/List_1_get_Count_m7984BA6C664D8EAE284C168D0568FE2B9136A033_RuntimeMethod_var);
		if ((((int32_t)L_32) <= ((int32_t)0)))
		{
			goto IL_0118;
		}
	}
	{
		List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * L_33 = __this->get_availableSpots_6();
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_34 = V_2;
		bool L_35 = List_1_Contains_mD404D6E44C2171AA3E6D6B6018BAB093F6DD7F35(L_33, L_34, /*hidden argument*/List_1_Contains_mD404D6E44C2171AA3E6D6B6018BAB093F6DD7F35_RuntimeMethod_var);
		if (L_35)
		{
			goto IL_0118;
		}
	}
	{
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_36 = V_2;
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_37 = L_36->get_pieces_6();
		int32_t L_38 = List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35(L_37, /*hidden argument*/List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35_RuntimeMethod_var);
		if ((((int32_t)L_38) <= ((int32_t)0)))
		{
			goto IL_0118;
		}
	}
	{
		bool L_39 = __this->get_isBlack_27();
		if (L_39)
		{
			goto IL_010b;
		}
	}
	{
		List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * L_40 = __this->get_availableSpots_6();
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_41 = V_2;
		List_1_Add_m92423B6E35D20B33D4FD89EA94A93D79784337C4(L_40, L_41, /*hidden argument*/List_1_Add_m92423B6E35D20B33D4FD89EA94A93D79784337C4_RuntimeMethod_var);
		goto IL_0118;
	}

IL_010b:
	{
		List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * L_42 = __this->get_availableSpots_6();
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_43 = V_2;
		List_1_Insert_m7D289E1660E13E8B4B08110336ACC2D4FE341B61(L_42, 0, L_43, /*hidden argument*/List_1_Insert_m7D289E1660E13E8B4B08110336ACC2D4FE341B61_RuntimeMethod_var);
	}

IL_0118:
	{
		int32_t L_44 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
	}

IL_011c:
	{
		int32_t L_45 = V_1;
		PieceContainerObjectU5BU5D_t04002C7EAC175CFD098187B608736779B7C0338C* L_46 = V_0;
		if ((((int32_t)L_45) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_46)->max_length)))))))
		{
			goto IL_009f;
		}
	}
	{
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_47 = __this->get_baseControl_29();
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_48 = L_47->get_pcc_4();
		bool L_49 = BaseControl_BearingOff_mE095CAF6C658C1332F1158ED5CDE7B4775A5B92E(((BaseControl_tA80FAE98EF4187F0C02A06E15CA0EBABDF1AA171 *)CastclassClass((RuntimeObject*)L_48, BaseControl_tA80FAE98EF4187F0C02A06E15CA0EBABDF1AA171_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		if (!L_49)
		{
			goto IL_0243;
		}
	}
	{
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_50 = __this->get_baseControl_29();
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_51 = L_50->get_pcc_4();
		bool L_52 = __this->get_isBlack_27();
		int32_t L_53 = __this->get_roll1_13();
		int32_t L_54 = __this->get_roll2_14();
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_55 = __this->get_rollsUsed_32();
		VirtActionInvoker4< bool, int32_t, int32_t, BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* >::Invoke(8 /* System.Void PieceContainerControl::GetPossibleMoves(System.Boolean,System.Int32,System.Int32,System.Boolean[]) */, L_51, L_52, L_53, L_54, L_55);
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_56 = __this->get_baseControl_29();
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_57 = L_56->get_pcc_4();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_58 = L_57->get_actualPossibleMoves_2();
		int32_t L_59 = List_1_get_Count_m7984BA6C664D8EAE284C168D0568FE2B9136A033(L_58, /*hidden argument*/List_1_get_Count_m7984BA6C664D8EAE284C168D0568FE2B9136A033_RuntimeMethod_var);
		if ((((int32_t)L_59) <= ((int32_t)0)))
		{
			goto IL_0243;
		}
	}
	{
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_60 = __this->get_baseControl_29();
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_61 = L_60->get_pcc_4();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_62 = L_61->get_actualPossibleMoves_2();
		Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C  L_63 = List_1_GetEnumerator_m83178F038A7D4A7E9B0731B7D3078EDCF6FFD0EC(L_62, /*hidden argument*/List_1_GetEnumerator_m83178F038A7D4A7E9B0731B7D3078EDCF6FFD0EC_RuntimeMethod_var);
		V_3 = L_63;
	}

IL_0198:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0227;
		}

IL_019d:
		{
			int32_t L_64 = Enumerator_get_Current_m88A0089A1A4EEBC3017E2DA569A01C7919B10945((Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C *)(&V_3), /*hidden argument*/Enumerator_get_Current_m88A0089A1A4EEBC3017E2DA569A01C7919B10945_RuntimeMethod_var);
			V_4 = L_64;
			GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * L_65 = __this->get_gameMaster_4();
			PieceContainerObjectU5BU5D_t04002C7EAC175CFD098187B608736779B7C0338C* L_66 = L_65->get_allSpots_15();
			int32_t L_67 = V_4;
			int32_t L_68 = L_67;
			PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_69 = (L_66)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_68));
			PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_70 = L_69->get_pcc_4();
			V_5 = ((SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 *)CastclassClass((RuntimeObject*)L_70, SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86_il2cpp_TypeInfo_var));
			List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * L_71 = __this->get_availableSpots_6();
			GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * L_72 = __this->get_gameMaster_4();
			PieceContainerObjectU5BU5D_t04002C7EAC175CFD098187B608736779B7C0338C* L_73 = L_72->get_allSpots_15();
			int32_t L_74 = V_4;
			int32_t L_75 = L_74;
			PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_76 = (L_73)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_75));
			bool L_77 = List_1_Contains_mD404D6E44C2171AA3E6D6B6018BAB093F6DD7F35(L_71, L_76, /*hidden argument*/List_1_Contains_mD404D6E44C2171AA3E6D6B6018BAB093F6DD7F35_RuntimeMethod_var);
			if (L_77)
			{
				goto IL_0227;
			}
		}

IL_01db:
		{
			SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * L_78 = V_5;
			List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_79 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)L_78)->get_pieces_1();
			int32_t L_80 = List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35(L_79, /*hidden argument*/List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35_RuntimeMethod_var);
			if ((((int32_t)L_80) <= ((int32_t)0)))
			{
				goto IL_0227;
			}
		}

IL_01ea:
		{
			bool L_81 = __this->get_isBlack_27();
			if (L_81)
			{
				goto IL_020d;
			}
		}

IL_01f2:
		{
			List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * L_82 = __this->get_availableSpots_6();
			GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * L_83 = __this->get_gameMaster_4();
			PieceContainerObjectU5BU5D_t04002C7EAC175CFD098187B608736779B7C0338C* L_84 = L_83->get_allSpots_15();
			int32_t L_85 = V_4;
			int32_t L_86 = L_85;
			PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_87 = (L_84)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_86));
			List_1_Add_m92423B6E35D20B33D4FD89EA94A93D79784337C4(L_82, L_87, /*hidden argument*/List_1_Add_m92423B6E35D20B33D4FD89EA94A93D79784337C4_RuntimeMethod_var);
			goto IL_0227;
		}

IL_020d:
		{
			List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * L_88 = __this->get_availableSpots_6();
			GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * L_89 = __this->get_gameMaster_4();
			PieceContainerObjectU5BU5D_t04002C7EAC175CFD098187B608736779B7C0338C* L_90 = L_89->get_allSpots_15();
			int32_t L_91 = V_4;
			int32_t L_92 = L_91;
			PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_93 = (L_90)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_92));
			List_1_Insert_m7D289E1660E13E8B4B08110336ACC2D4FE341B61(L_88, 0, L_93, /*hidden argument*/List_1_Insert_m7D289E1660E13E8B4B08110336ACC2D4FE341B61_RuntimeMethod_var);
		}

IL_0227:
		{
			bool L_94 = Enumerator_MoveNext_m113E33A615748C69D63D1245F5FD820B4B3D43F7((Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m113E33A615748C69D63D1245F5FD820B4B3D43F7_RuntimeMethod_var);
			if (L_94)
			{
				goto IL_019d;
			}
		}

IL_0233:
		{
			IL2CPP_LEAVE(0x243, FINALLY_0235);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0235;
	}

FINALLY_0235:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mBA3B0129DABD8274AF3497CC93E6A2DEA0A23892((Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C *)(&V_3), /*hidden argument*/Enumerator_Dispose_mBA3B0129DABD8274AF3497CC93E6A2DEA0A23892_RuntimeMethod_var);
		IL2CPP_END_FINALLY(565)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(565)
	{
		IL2CPP_JUMP_TBL(0x243, IL_0243)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0243:
	{
		List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * L_95 = __this->get_availableSpots_6();
		int32_t L_96 = List_1_get_Count_m0C31F7C9173DD07B725516D783DFB61620B590EF(L_95, /*hidden argument*/List_1_get_Count_m0C31F7C9173DD07B725516D783DFB61620B590EF_RuntimeMethod_var);
		if (L_96)
		{
			goto IL_0258;
		}
	}
	{
		__this->set_turnOver_22((bool)1);
		return;
	}

IL_0258:
	{
		__this->set_listsSet_24((bool)1);
		__this->set_initialSet_25((bool)0);
		return;
	}
}
// System.Void MoveControl::SetAvailableMoves()
extern "C" IL2CPP_METHOD_ATTR void MoveControl_SetAvailableMoves_mFAE5AB39D16ADE9C818BBB9A4A5953F24DE640B9 (MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MoveControl_SetAvailableMoves_mFAE5AB39D16ADE9C818BBB9A4A5953F24DE640B9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BaseControl_tA80FAE98EF4187F0C02A06E15CA0EBABDF1AA171 * V_0 = NULL;
	Enumerator_t1F0FA6B924150C3B8AC6B978C7B357655AE09E7E  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C  V_2;
	memset(&V_2, 0, sizeof(V_2));
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * L_0 = __this->get_availableMoves_7();
		Enumerator_t1F0FA6B924150C3B8AC6B978C7B357655AE09E7E  L_1 = List_1_GetEnumerator_mAB7898C7CE9AB2E9C46746EE8A59B15F3D0FDC77(L_0, /*hidden argument*/List_1_GetEnumerator_mAB7898C7CE9AB2E9C46746EE8A59B15F3D0FDC77_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001b;
		}

IL_000e:
		{
			PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_2 = Enumerator_get_Current_mF0DE1937EBF26D34F5E9DFBC22625FB24B00741E((Enumerator_t1F0FA6B924150C3B8AC6B978C7B357655AE09E7E *)(&V_1), /*hidden argument*/Enumerator_get_Current_mF0DE1937EBF26D34F5E9DFBC22625FB24B00741E_RuntimeMethod_var);
			PieceContainerObject_Outline_m31733DE41B7718E396AB1407E80DA126EB5932F0(L_2, (bool)0, /*hidden argument*/NULL);
		}

IL_001b:
		{
			bool L_3 = Enumerator_MoveNext_m5716AD325B321CFD021419D90C0A79E1686F853F((Enumerator_t1F0FA6B924150C3B8AC6B978C7B357655AE09E7E *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m5716AD325B321CFD021419D90C0A79E1686F853F_RuntimeMethod_var);
			if (L_3)
			{
				goto IL_000e;
			}
		}

IL_0024:
		{
			IL2CPP_LEAVE(0x34, FINALLY_0026);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mE4B284926D2E4102C056748493BDCE45EDCF00A1((Enumerator_t1F0FA6B924150C3B8AC6B978C7B357655AE09E7E *)(&V_1), /*hidden argument*/Enumerator_Dispose_mE4B284926D2E4102C056748493BDCE45EDCF00A1_RuntimeMethod_var);
		IL2CPP_END_FINALLY(38)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x34, IL_0034)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0034:
	{
		List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * L_4 = __this->get_availableMoves_7();
		List_1_Clear_mEA71FAB9784BA98028A2DCE5AD1BACFA52B6BA7D(L_4, /*hidden argument*/List_1_Clear_mEA71FAB9784BA98028A2DCE5AD1BACFA52B6BA7D_RuntimeMethod_var);
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_5 = __this->get_currentSpot_17();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_6 = L_5->get_actualPossibleMoves_2();
		Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C  L_7 = List_1_GetEnumerator_m83178F038A7D4A7E9B0731B7D3078EDCF6FFD0EC(L_6, /*hidden argument*/List_1_GetEnumerator_m83178F038A7D4A7E9B0731B7D3078EDCF6FFD0EC_RuntimeMethod_var);
		V_2 = L_7;
	}

IL_0050:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0072;
		}

IL_0052:
		{
			int32_t L_8 = Enumerator_get_Current_m88A0089A1A4EEBC3017E2DA569A01C7919B10945((Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C *)(&V_2), /*hidden argument*/Enumerator_get_Current_m88A0089A1A4EEBC3017E2DA569A01C7919B10945_RuntimeMethod_var);
			V_3 = L_8;
			List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * L_9 = __this->get_availableMoves_7();
			GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * L_10 = __this->get_gameMaster_4();
			PieceContainerObjectU5BU5D_t04002C7EAC175CFD098187B608736779B7C0338C* L_11 = L_10->get_allSpots_15();
			int32_t L_12 = V_3;
			int32_t L_13 = L_12;
			PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
			List_1_Add_m92423B6E35D20B33D4FD89EA94A93D79784337C4(L_9, L_14, /*hidden argument*/List_1_Add_m92423B6E35D20B33D4FD89EA94A93D79784337C4_RuntimeMethod_var);
		}

IL_0072:
		{
			bool L_15 = Enumerator_MoveNext_m113E33A615748C69D63D1245F5FD820B4B3D43F7((Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m113E33A615748C69D63D1245F5FD820B4B3D43F7_RuntimeMethod_var);
			if (L_15)
			{
				goto IL_0052;
			}
		}

IL_007b:
		{
			IL2CPP_LEAVE(0x8B, FINALLY_007d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007d;
	}

FINALLY_007d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mBA3B0129DABD8274AF3497CC93E6A2DEA0A23892((Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C *)(&V_2), /*hidden argument*/Enumerator_Dispose_mBA3B0129DABD8274AF3497CC93E6A2DEA0A23892_RuntimeMethod_var);
		IL2CPP_END_FINALLY(125)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(125)
	{
		IL2CPP_JUMP_TBL(0x8B, IL_008b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008b:
	{
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_16 = __this->get_baseControl_29();
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_17 = L_16->get_pcc_4();
		V_0 = ((BaseControl_tA80FAE98EF4187F0C02A06E15CA0EBABDF1AA171 *)CastclassClass((RuntimeObject*)L_17, BaseControl_tA80FAE98EF4187F0C02A06E15CA0EBABDF1AA171_il2cpp_TypeInfo_var));
		BaseControl_tA80FAE98EF4187F0C02A06E15CA0EBABDF1AA171 * L_18 = V_0;
		bool L_19 = BaseControl_BearingOff_mE095CAF6C658C1332F1158ED5CDE7B4775A5B92E(L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00cd;
		}
	}
	{
		BaseControl_tA80FAE98EF4187F0C02A06E15CA0EBABDF1AA171 * L_20 = V_0;
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_21 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)L_20)->get_actualPossibleMoves_2();
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_22 = __this->get_currentSpot_17();
		int32_t L_23 = L_22->get_position_8();
		bool L_24 = List_1_Contains_m275CA0DC5737E7EF9DBEAC629F8DE280CFFA96D6(L_21, L_23, /*hidden argument*/List_1_Contains_m275CA0DC5737E7EF9DBEAC629F8DE280CFFA96D6_RuntimeMethod_var);
		if (!L_24)
		{
			goto IL_00cd;
		}
	}
	{
		List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * L_25 = __this->get_availableMoves_7();
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_26 = __this->get_baseControl_29();
		List_1_Add_m92423B6E35D20B33D4FD89EA94A93D79784337C4(L_25, L_26, /*hidden argument*/List_1_Add_m92423B6E35D20B33D4FD89EA94A93D79784337C4_RuntimeMethod_var);
	}

IL_00cd:
	{
		List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * L_27 = __this->get_availableMoves_7();
		Enumerator_t1F0FA6B924150C3B8AC6B978C7B357655AE09E7E  L_28 = List_1_GetEnumerator_mAB7898C7CE9AB2E9C46746EE8A59B15F3D0FDC77(L_27, /*hidden argument*/List_1_GetEnumerator_mAB7898C7CE9AB2E9C46746EE8A59B15F3D0FDC77_RuntimeMethod_var);
		V_1 = L_28;
	}

IL_00d9:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00e8;
		}

IL_00db:
		{
			PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_29 = Enumerator_get_Current_mF0DE1937EBF26D34F5E9DFBC22625FB24B00741E((Enumerator_t1F0FA6B924150C3B8AC6B978C7B357655AE09E7E *)(&V_1), /*hidden argument*/Enumerator_get_Current_mF0DE1937EBF26D34F5E9DFBC22625FB24B00741E_RuntimeMethod_var);
			PieceContainerObject_Outline_m31733DE41B7718E396AB1407E80DA126EB5932F0(L_29, (bool)1, /*hidden argument*/NULL);
		}

IL_00e8:
		{
			bool L_30 = Enumerator_MoveNext_m5716AD325B321CFD021419D90C0A79E1686F853F((Enumerator_t1F0FA6B924150C3B8AC6B978C7B357655AE09E7E *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m5716AD325B321CFD021419D90C0A79E1686F853F_RuntimeMethod_var);
			if (L_30)
			{
				goto IL_00db;
			}
		}

IL_00f1:
		{
			IL2CPP_LEAVE(0x101, FINALLY_00f3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00f3;
	}

FINALLY_00f3:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mE4B284926D2E4102C056748493BDCE45EDCF00A1((Enumerator_t1F0FA6B924150C3B8AC6B978C7B357655AE09E7E *)(&V_1), /*hidden argument*/Enumerator_Dispose_mE4B284926D2E4102C056748493BDCE45EDCF00A1_RuntimeMethod_var);
		IL2CPP_END_FINALLY(243)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(243)
	{
		IL2CPP_JUMP_TBL(0x101, IL_0101)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0101:
	{
		return;
	}
}
// System.Int32 MoveControl::GetNumAvailable(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR int32_t MoveControl_GetNumAvailable_m2AC170C4F83EEDF65768B2ED70F9A4ED24A4B417 (MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * __this, bool ___PieceSelected0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MoveControl_GetNumAvailable_m2AC170C4F83EEDF65768B2ED70F9A4ED24A4B417_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___PieceSelected0;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * L_1 = __this->get_availableSpots_6();
		int32_t L_2 = List_1_get_Count_m0C31F7C9173DD07B725516D783DFB61620B590EF(L_1, /*hidden argument*/List_1_get_Count_m0C31F7C9173DD07B725516D783DFB61620B590EF_RuntimeMethod_var);
		return L_2;
	}

IL_000f:
	{
		List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * L_3 = __this->get_availableMoves_7();
		int32_t L_4 = List_1_get_Count_m0C31F7C9173DD07B725516D783DFB61620B590EF(L_3, /*hidden argument*/List_1_get_Count_m0C31F7C9173DD07B725516D783DFB61620B590EF_RuntimeMethod_var);
		return L_4;
	}
}
// System.Collections.Generic.List`1<PieceContainerControl> MoveControl::GetAvailableSpots()
extern "C" IL2CPP_METHOD_ATTR List_1_t0CB551171B4CABEF84BD812574C218CD745F2C52 * MoveControl_GetAvailableSpots_mC1E766807D7E189A557CF0A2DEA9D8F3C6CFB740 (MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MoveControl_GetAvailableSpots_mC1E766807D7E189A557CF0A2DEA9D8F3C6CFB740_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t0CB551171B4CABEF84BD812574C218CD745F2C52 * V_0 = NULL;
	Enumerator_t1F0FA6B924150C3B8AC6B978C7B357655AE09E7E  V_1;
	memset(&V_1, 0, sizeof(V_1));
	PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t0CB551171B4CABEF84BD812574C218CD745F2C52 * L_0 = (List_1_t0CB551171B4CABEF84BD812574C218CD745F2C52 *)il2cpp_codegen_object_new(List_1_t0CB551171B4CABEF84BD812574C218CD745F2C52_il2cpp_TypeInfo_var);
		List_1__ctor_mE8F1273D4966F545C67F80329001C3B6D3064EAC(L_0, /*hidden argument*/List_1__ctor_mE8F1273D4966F545C67F80329001C3B6D3064EAC_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * L_1 = __this->get_availableSpots_6();
		Enumerator_t1F0FA6B924150C3B8AC6B978C7B357655AE09E7E  L_2 = List_1_GetEnumerator_mAB7898C7CE9AB2E9C46746EE8A59B15F3D0FDC77(L_1, /*hidden argument*/List_1_GetEnumerator_mAB7898C7CE9AB2E9C46746EE8A59B15F3D0FDC77_RuntimeMethod_var);
		V_1 = L_2;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0028;
		}

IL_0014:
		{
			PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_3 = Enumerator_get_Current_mF0DE1937EBF26D34F5E9DFBC22625FB24B00741E((Enumerator_t1F0FA6B924150C3B8AC6B978C7B357655AE09E7E *)(&V_1), /*hidden argument*/Enumerator_get_Current_mF0DE1937EBF26D34F5E9DFBC22625FB24B00741E_RuntimeMethod_var);
			V_2 = L_3;
			List_1_t0CB551171B4CABEF84BD812574C218CD745F2C52 * L_4 = V_0;
			PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_5 = V_2;
			PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_6 = L_5->get_pcc_4();
			List_1_Add_m5D4827E13E6EF65373ACF3260BB3048664B2717A(L_4, L_6, /*hidden argument*/List_1_Add_m5D4827E13E6EF65373ACF3260BB3048664B2717A_RuntimeMethod_var);
		}

IL_0028:
		{
			bool L_7 = Enumerator_MoveNext_m5716AD325B321CFD021419D90C0A79E1686F853F((Enumerator_t1F0FA6B924150C3B8AC6B978C7B357655AE09E7E *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m5716AD325B321CFD021419D90C0A79E1686F853F_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0014;
			}
		}

IL_0031:
		{
			IL2CPP_LEAVE(0x41, FINALLY_0033);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0033;
	}

FINALLY_0033:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mE4B284926D2E4102C056748493BDCE45EDCF00A1((Enumerator_t1F0FA6B924150C3B8AC6B978C7B357655AE09E7E *)(&V_1), /*hidden argument*/Enumerator_Dispose_mE4B284926D2E4102C056748493BDCE45EDCF00A1_RuntimeMethod_var);
		IL2CPP_END_FINALLY(51)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(51)
	{
		IL2CPP_JUMP_TBL(0x41, IL_0041)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0041:
	{
		List_1_t0CB551171B4CABEF84BD812574C218CD745F2C52 * L_8 = V_0;
		return L_8;
	}
}
// System.Void MoveControl::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MoveControl__ctor_m66FC9B6FD8DAF02711205A0E2FEB34DFA6E98ADF (MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MoveControl__ctor_m66FC9B6FD8DAF02711205A0E2FEB34DFA6E98ADF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * L_0 = (List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 *)il2cpp_codegen_object_new(List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29_il2cpp_TypeInfo_var);
		List_1__ctor_m077452966B5850AC891DA08DC799A8C50E03D7EE(L_0, /*hidden argument*/List_1__ctor_m077452966B5850AC891DA08DC799A8C50E03D7EE_RuntimeMethod_var);
		__this->set_availableSpots_6(L_0);
		List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 * L_1 = (List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29 *)il2cpp_codegen_object_new(List_1_t7D41D4F0A1DEA3F2F4492455360C1CF2FA00AE29_il2cpp_TypeInfo_var);
		List_1__ctor_m077452966B5850AC891DA08DC799A8C50E03D7EE(L_1, /*hidden argument*/List_1__ctor_m077452966B5850AC891DA08DC799A8C50E03D7EE_RuntimeMethod_var);
		__this->set_availableMoves_7(L_1);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void MoveControl/<RollDice>d__43::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CRollDiceU3Ed__43__ctor_mD5A32F5C603E0785C09046DDC321538D90220887 (U3CRollDiceU3Ed__43_t514A39DE6611616314A8018F4CB2DE9DC4BA3891 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void MoveControl/<RollDice>d__43::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CRollDiceU3Ed__43_System_IDisposable_Dispose_mB7C2FD26C73227939CEE64511399F78B67BD03C7 (U3CRollDiceU3Ed__43_t514A39DE6611616314A8018F4CB2DE9DC4BA3891 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean MoveControl/<RollDice>d__43::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CRollDiceU3Ed__43_MoveNext_mA68879F9891DFA1FC6793B8C99386B579EB5B8AC (U3CRollDiceU3Ed__43_t514A39DE6611616314A8018F4CB2DE9DC4BA3891 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRollDiceU3Ed__43_MoveNext_mA68879F9891DFA1FC6793B8C99386B579EB5B8AC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * V_1 = NULL;
	bool V_2 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_1 = __this->get_U3CU3E4__this_2();
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
				goto IL_00b2;
			}
			case 2:
			{
				goto IL_00d9;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_3 = V_1;
		L_3->set_diceViewed_26((bool)0);
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_4 = V_1;
		int32_t L_5 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(1, 6, /*hidden argument*/NULL);
		L_4->set_roll1_13(L_5);
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_6 = V_1;
		int32_t L_7 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(1, 6, /*hidden argument*/NULL);
		L_6->set_roll2_14(L_7);
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_8 = V_1;
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_9 = V_1;
		int32_t L_10 = L_9->get_roll1_13();
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_11 = V_1;
		int32_t L_12 = L_11->get_roll2_14();
		L_8->set_doubles_20((bool)((((int32_t)L_10) == ((int32_t)L_12))? 1 : 0));
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_13 = V_1;
		GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * L_14 = L_13->get_gameMaster_4();
		GameControl_DisplayDice_m03BC666E8C65F6B00F3206BCEAD49AFAE0596856(L_14, /*hidden argument*/NULL);
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_15 = V_1;
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_16 = L_15->get_rollsUsed_32();
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_17 = V_1;
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_18 = L_17->get_rollsUsed_32();
		int32_t L_19 = 0;
		V_2 = (bool)L_19;
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (bool)L_19);
		bool L_20 = V_2;
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (bool)L_20);
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_21 = V_1;
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_22 = L_21->get_rollsUsed_32();
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_23 = V_1;
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_24 = L_23->get_rollsUsed_32();
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_25 = V_1;
		bool L_26 = L_25->get_doubles_20();
		int32_t L_27 = ((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
		V_2 = (bool)L_27;
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (bool)L_27);
		bool L_28 = V_2;
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (bool)L_28);
		WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * L_29 = (WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 *)il2cpp_codegen_object_new(WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739_il2cpp_TypeInfo_var);
		WaitForSecondsRealtime__ctor_m775503EC1F4963D8E5BBDD7989B40F6A000E0525(L_29, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_29);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00b2:
	{
		__this->set_U3CU3E1__state_0((-1));
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_30 = V_1;
		L_30->set_diceRolled_19((bool)1);
		WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * L_31 = (WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 *)il2cpp_codegen_object_new(WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739_il2cpp_TypeInfo_var);
		WaitForSecondsRealtime__ctor_m775503EC1F4963D8E5BBDD7989B40F6A000E0525(L_31, (0.5f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_31);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00d9:
	{
		__this->set_U3CU3E1__state_0((-1));
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_32 = V_1;
		L_32->set_diceViewed_26((bool)1);
		return (bool)0;
	}
}
// System.Object MoveControl/<RollDice>d__43::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CRollDiceU3Ed__43_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0151456D769F6CE40242CC0D099BEB487B27FDA0 (U3CRollDiceU3Ed__43_t514A39DE6611616314A8018F4CB2DE9DC4BA3891 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void MoveControl/<RollDice>d__43::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CRollDiceU3Ed__43_System_Collections_IEnumerator_Reset_m1D719939514C36DC240406EE622C32F7C7EC9C1F (U3CRollDiceU3Ed__43_t514A39DE6611616314A8018F4CB2DE9DC4BA3891 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRollDiceU3Ed__43_System_Collections_IEnumerator_Reset_m1D719939514C36DC240406EE622C32F7C7EC9C1F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CRollDiceU3Ed__43_System_Collections_IEnumerator_Reset_m1D719939514C36DC240406EE622C32F7C7EC9C1F_RuntimeMethod_var);
	}
}
// System.Object MoveControl/<RollDice>d__43::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CRollDiceU3Ed__43_System_Collections_IEnumerator_get_Current_mE75823687BF88A196BFFE6AA9871304B4BC3D841 (U3CRollDiceU3Ed__43_t514A39DE6611616314A8018F4CB2DE9DC4BA3891 * __this, const RuntimeMethod* method)
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
// System.Void PieceContainerControl::AddPiece(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void PieceContainerControl_AddPiece_mA7D75E4F2499BCC1CD5BC616C23010DDF595D5E5 (PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___piece0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PieceContainerControl_AddPiece_mA7D75E4F2499BCC1CD5BC616C23010DDF595D5E5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_0 = __this->get_pieces_1();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = ___piece0;
		List_1_Add_m94A913D452C8522AD16D2EB42D46016D83D86112(L_0, L_1, /*hidden argument*/List_1_Add_m94A913D452C8522AD16D2EB42D46016D83D86112_RuntimeMethod_var);
		__this->set_changed_9((bool)1);
		return;
	}
}
// System.Void PieceContainerControl::RemovePiece(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void PieceContainerControl_RemovePiece_mEE439CB3E1ED9AEF76E93C5BFE1E7B77F9E28CF5 (PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___piece0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PieceContainerControl_RemovePiece_mEE439CB3E1ED9AEF76E93C5BFE1E7B77F9E28CF5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_0 = __this->get_pieces_1();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = ___piece0;
		List_1_Remove_mC05369CBB846172964FD487ACC41F6E543298935(L_0, L_1, /*hidden argument*/List_1_Remove_mC05369CBB846172964FD487ACC41F6E543298935_RuntimeMethod_var);
		__this->set_changed_9((bool)1);
		return;
	}
}
// System.Void PieceContainerControl::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PieceContainerControl__ctor_mD4344D0526B59AEFC1F00D4521A7572D37FD6742 (PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PieceContainerControl__ctor_mD4344D0526B59AEFC1F00D4521A7572D37FD6742_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)il2cpp_codegen_object_new(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_il2cpp_TypeInfo_var);
		List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4(L_0, /*hidden argument*/List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_RuntimeMethod_var);
		__this->set_actualPossibleMoves_2(L_0);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// PieceContainerControl PieceContainerFactory::GetPieceContainer(System.String,System.String,GameControl,System.Collections.Generic.List`1<UnityEngine.GameObject>)
extern "C" IL2CPP_METHOD_ATTR PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * PieceContainerFactory_GetPieceContainer_m9D4595FDDD7FB2CEB306759CE755BD016722D823 (String_t* ___pcType0, String_t* ___name1, GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * ___gm2, List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * ___pieces3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PieceContainerFactory_GetPieceContainer_m9D4595FDDD7FB2CEB306759CE755BD016722D823_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___pcType0;
		bool L_1 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_0, _stringLiteralC5C5BA59D015EC3E31392896DD74F8FE32234709, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_2 = ___pcType0;
		bool L_3 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_2, _stringLiteral077FE9C54ED5ED26FA547F4DED3EF9A9BB066D65, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_4 = ___pcType0;
		bool L_5 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_4, _stringLiteralE7655F75401D985DB042CB36F697728C58AC1ADD, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_003a;
		}
	}
	{
		goto IL_0043;
	}

IL_0029:
	{
		String_t* L_6 = ___name1;
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_7 = ___pieces3;
		SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * L_8 = (SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 *)il2cpp_codegen_object_new(SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86_il2cpp_TypeInfo_var);
		SpotControl__ctor_m98F34514ADC10157E25A9C1844DDF75F8CA74FDD(L_8, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0031:
	{
		String_t* L_9 = ___name1;
		GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * L_10 = ___gm2;
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_11 = ___pieces3;
		BaseControl_tA80FAE98EF4187F0C02A06E15CA0EBABDF1AA171 * L_12 = (BaseControl_tA80FAE98EF4187F0C02A06E15CA0EBABDF1AA171 *)il2cpp_codegen_object_new(BaseControl_tA80FAE98EF4187F0C02A06E15CA0EBABDF1AA171_il2cpp_TypeInfo_var);
		BaseControl__ctor_m470069230D642C2E9C16F7727721E3CBEC649A2E(L_12, L_9, L_10, L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_003a:
	{
		String_t* L_13 = ___name1;
		GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * L_14 = ___gm2;
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_15 = ___pieces3;
		JailControl_tB91171D46728EC0A770E97697349D03D30A694AE * L_16 = (JailControl_tB91171D46728EC0A770E97697349D03D30A694AE *)il2cpp_codegen_object_new(JailControl_tB91171D46728EC0A770E97697349D03D30A694AE_il2cpp_TypeInfo_var);
		JailControl__ctor_m59F6E56058E8FBBC7E637DAE39816D667C74B1D4(L_16, L_13, L_14, L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_0043:
	{
		return (PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)NULL;
	}
}
// PieceContainerControl PieceContainerFactory::GetPieceContainer(PieceContainerObject)
extern "C" IL2CPP_METHOD_ATTR PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * PieceContainerFactory_GetPieceContainer_m3903C61F41EBACD3D23853AE9F0D408AF3285B88 (PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * ___pObj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PieceContainerFactory_GetPieceContainer_m3903C61F41EBACD3D23853AE9F0D408AF3285B88_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_0 = ___pObj0;
		String_t* L_1 = L_0->get_pcType_7();
		V_0 = L_1;
		String_t* L_2 = V_0;
		bool L_3 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_2, _stringLiteralC5C5BA59D015EC3E31392896DD74F8FE32234709, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_4 = V_0;
		bool L_5 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_4, _stringLiteral077FE9C54ED5ED26FA547F4DED3EF9A9BB066D65, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		String_t* L_6 = V_0;
		bool L_7 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_6, _stringLiteralE7655F75401D985DB042CB36F697728C58AC1ADD, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_004d;
		}
	}
	{
		goto IL_0059;
	}

IL_0030:
	{
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_8 = ___pObj0;
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_9 = L_8->get_pcc_4();
		SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * L_10 = (SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 *)il2cpp_codegen_object_new(SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86_il2cpp_TypeInfo_var);
		SpotControl__ctor_m2BA36A175BD88743D6E1C49BA3460A84740AB7EC(L_10, ((SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 *)CastclassClass((RuntimeObject*)L_9, SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_10;
	}

IL_0041:
	{
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_11 = ___pObj0;
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_12 = L_11->get_pcc_4();
		BaseControl_tA80FAE98EF4187F0C02A06E15CA0EBABDF1AA171 * L_13 = (BaseControl_tA80FAE98EF4187F0C02A06E15CA0EBABDF1AA171 *)il2cpp_codegen_object_new(BaseControl_tA80FAE98EF4187F0C02A06E15CA0EBABDF1AA171_il2cpp_TypeInfo_var);
		BaseControl__ctor_m30135AA5F780B53080E1EC5AA9593CE1293A6DC3(L_13, L_12, /*hidden argument*/NULL);
		return L_13;
	}

IL_004d:
	{
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_14 = ___pObj0;
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_15 = L_14->get_pcc_4();
		JailControl_tB91171D46728EC0A770E97697349D03D30A694AE * L_16 = (JailControl_tB91171D46728EC0A770E97697349D03D30A694AE *)il2cpp_codegen_object_new(JailControl_tB91171D46728EC0A770E97697349D03D30A694AE_il2cpp_TypeInfo_var);
		JailControl__ctor_m7D87CBA6AF7F7472EE890079EC67633EE00D57C4(L_16, L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_0059:
	{
		return (PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)NULL;
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
// System.Void PieceContainerObject::Start()
extern "C" IL2CPP_METHOD_ATTR void PieceContainerObject_Start_mE870A955FB9A359FFD7660E6422924E50C5B0164 (PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PieceContainerObject_Start_mE870A955FB9A359FFD7660E6422924E50C5B0164_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteralE879B0BE0190766AF9D315ADBC46DCD7314F0B3F, /*hidden argument*/NULL);
		GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * L_1 = GameObject_GetComponent_TisGameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248_m9FF2D738368C8C59E83F21E2F67C8801B66795FE(L_0, /*hidden argument*/GameObject_GetComponent_TisGameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248_m9FF2D738368C8C59E83F21E2F67C8801B66795FE_RuntimeMethod_var);
		__this->set_gameMaster_5(L_1);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		String_t* L_3 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_2, /*hidden argument*/NULL);
		String_t* L_4 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_3, 0, 4, /*hidden argument*/NULL);
		__this->set_pcType_7(L_4);
		String_t* L_5 = __this->get_pcType_7();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		String_t* L_7 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_6, /*hidden argument*/NULL);
		GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * L_8 = __this->get_gameMaster_5();
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_9 = __this->get_pieces_6();
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_10 = PieceContainerFactory_GetPieceContainer_m9D4595FDDD7FB2CEB306759CE755BD016722D823(L_5, L_7, L_8, L_9, /*hidden argument*/NULL);
		__this->set_pcc_4(L_10);
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_11 = __this->get_pcc_4();
		VirtActionInvoker0::Invoke(6 /* System.Void PieceContainerControl::Start() */, L_11);
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_12 = __this->get_pcc_4();
		VirtActionInvoker0::Invoke(9 /* System.Void PieceContainerControl::CalcPossibleMoves() */, L_12);
		return;
	}
}
// System.Void PieceContainerObject::InitializeAllSpotsOnControl()
extern "C" IL2CPP_METHOD_ATTR void PieceContainerObject_InitializeAllSpotsOnControl_mB135EF5CEC7482685E373C277589C0907B65F5F9 (PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PieceContainerObject_InitializeAllSpotsOnControl_mB135EF5CEC7482685E373C277589C0907B65F5F9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_0 = __this->get_pcc_4();
		GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * L_1 = __this->get_gameMaster_5();
		SpotControl_InitializeOtherPieceContainerControls_m812745CC816273E29158E3E7FADAFC4CF6A7FEF3(((SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 *)CastclassClass((RuntimeObject*)L_0, SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86_il2cpp_TypeInfo_var)), L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PieceContainerObject::Update()
extern "C" IL2CPP_METHOD_ATTR void PieceContainerObject_Update_m6B0A5612831A15DFF806C3C1C9591E088024016C (PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PieceContainerObject_Update_m6B0A5612831A15DFF806C3C1C9591E088024016C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_0 = __this->get_pcc_4();
		bool L_1 = L_0->get_changed_9();
		if (!L_1)
		{
			goto IL_00e1;
		}
	}
	{
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_2 = __this->get_pcc_4();
		L_2->set_changed_9((bool)0);
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_3 = __this->get_pcc_4();
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_4 = L_3->get_pieces_1();
		__this->set_pieces_6(L_4);
		V_0 = 0;
		goto IL_00d0;
	}

IL_0034:
	{
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_5 = __this->get_pieces_6();
		int32_t L_6 = V_0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8(L_5, L_6, /*hidden argument*/List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8_RuntimeMethod_var);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_7, /*hidden argument*/NULL);
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_9 = __this->get_pcc_4();
		int32_t L_10 = V_0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_11, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = VirtFuncInvoker2< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(7 /* UnityEngine.Vector3 PieceContainerControl::CalculatePiecePosition(System.Int32,UnityEngine.Vector3) */, L_9, L_10, L_12);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_8, L_13, /*hidden argument*/NULL);
		String_t* L_14 = __this->get_pcType_7();
		bool L_15 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_14, _stringLiteral077FE9C54ED5ED26FA547F4DED3EF9A9BB066D65, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00cc;
		}
	}
	{
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_16 = __this->get_pieces_6();
		int32_t L_17 = V_0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_18 = List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8(L_16, L_17, /*hidden argument*/List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8_RuntimeMethod_var);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_19 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_18, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_20 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_19, /*hidden argument*/NULL);
		V_1 = L_20;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_1), /*hidden argument*/NULL);
		float L_22 = L_21.get_z_4();
		if ((!(((float)L_22) == ((float)(0.0f)))))
		{
			goto IL_00cc;
		}
	}
	{
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_23 = __this->get_pieces_6();
		int32_t L_24 = V_0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_25 = List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8(L_23, L_24, /*hidden argument*/List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8_RuntimeMethod_var);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_26 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_25, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27;
		memset(&L_27, 0, sizeof(L_27));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_27), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		Transform_Rotate_m6F7F297A2AF39309B4B8F537CCF49A143896CFBA(L_26, L_27, (90.0f), /*hidden argument*/NULL);
	}

IL_00cc:
	{
		int32_t L_28 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_00d0:
	{
		int32_t L_29 = V_0;
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_30 = __this->get_pieces_6();
		int32_t L_31 = List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35(L_30, /*hidden argument*/List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35_RuntimeMethod_var);
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_0034;
		}
	}

IL_00e1:
	{
		return;
	}
}
// System.Void PieceContainerObject::Outline(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void PieceContainerObject_Outline_m31733DE41B7718E396AB1407E80DA126EB5932F0 (PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * __this, bool ___on0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PieceContainerObject_Outline_m31733DE41B7718E396AB1407E80DA126EB5932F0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_0, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Transform_Find_m673797B6329C2669A543904532ABA1680DA4EAD1(L_1, _stringLiteralCDD6290B6B2860663A3FF7C60CBE70AF640E9C39, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_2, /*hidden argument*/NULL);
		bool L_4 = ___on0;
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PieceContainerObject::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PieceContainerObject__ctor_m90BB5932665420A1ACB2271EF9D65C87FA6C18CF (PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Player::SetMover(MoveControl)
extern "C" IL2CPP_METHOD_ATTR void Player_SetMover_mF3F58D86F0CA15BD025CAF8527410C7EF8D55425 (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * ___paramMoveCont0, const RuntimeMethod* method)
{
	{
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_0 = ___paramMoveCont0;
		__this->set_moveCont_0(L_0);
		return;
	}
}
// System.Void Player::TurnOver()
extern "C" IL2CPP_METHOD_ATTR void Player_TurnOver_m06B503905EE06A60A81F8F84B9B13EEFDC610DAA (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method)
{
	{
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_0 = __this->get_moveCont_0();
		GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * L_1 = L_0->get_gameMaster_4();
		GameControl_SwitchTurns_mB5DB02B8B5D0D52835996DFC60BE6D3D076D6380(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Player::RollDice()
extern "C" IL2CPP_METHOD_ATTR void Player_RollDice_m2CCAC4DEF58C42218AC3425DE515B100683180C8 (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method)
{
	{
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_0 = __this->get_moveCont_0();
		L_0->set_playerRolledDice_21((bool)1);
		return;
	}
}
// System.Void Player::CancelInquiry()
extern "C" IL2CPP_METHOD_ATTR void Player_CancelInquiry_mDA417BC0DE9D36A1F45177A177A11CF51C81D0B1 (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Player::ResetVariables()
extern "C" IL2CPP_METHOD_ATTR void Player_ResetVariables_m39548A01AEBF1AF75527CD40B33B3162F0BF839C (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method)
{
	{
		__this->set_pieceSelected_1((bool)0);
		return;
	}
}
// System.Collections.IEnumerator Player::SelectedPiece()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Player_SelectedPiece_m140C2295FCC24479EB232A20F62A6572476EF2BC (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_SelectedPiece_m140C2295FCC24479EB232A20F62A6572476EF2BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSelectedPieceU3Ed__10_t38BD5B408C9AF6575D183F9FEFCAEFF9CDB992D1 * L_0 = (U3CSelectedPieceU3Ed__10_t38BD5B408C9AF6575D183F9FEFCAEFF9CDB992D1 *)il2cpp_codegen_object_new(U3CSelectedPieceU3Ed__10_t38BD5B408C9AF6575D183F9FEFCAEFF9CDB992D1_il2cpp_TypeInfo_var);
		U3CSelectedPieceU3Ed__10__ctor_mD6B2DC3E5112A48B5741FEE4BF967102072A33E0(L_0, 0, /*hidden argument*/NULL);
		U3CSelectedPieceU3Ed__10_t38BD5B408C9AF6575D183F9FEFCAEFF9CDB992D1 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Player::SelectedSpot()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Player_SelectedSpot_mD7BBEEB45769462312B02A821E8D1919488865F1 (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_SelectedSpot_mD7BBEEB45769462312B02A821E8D1919488865F1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSelectedSpotU3Ed__11_tFCDA30F36C6CAFBEE5F6801B22C4D9349F628040 * L_0 = (U3CSelectedSpotU3Ed__11_tFCDA30F36C6CAFBEE5F6801B22C4D9349F628040 *)il2cpp_codegen_object_new(U3CSelectedSpotU3Ed__11_tFCDA30F36C6CAFBEE5F6801B22C4D9349F628040_il2cpp_TypeInfo_var);
		U3CSelectedSpotU3Ed__11__ctor_m6814CB3B281EA6EA8CCC8B1DDDDA34DFDD824A0F(L_0, 0, /*hidden argument*/NULL);
		U3CSelectedSpotU3Ed__11_tFCDA30F36C6CAFBEE5F6801B22C4D9349F628040 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Player::SelectNext(System.String)
extern "C" IL2CPP_METHOD_ATTR void Player_SelectNext_mD827DEF00E75438BAF40DBB152B91AFAD064A24F (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, String_t* ___direction0, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_pieceSelected_1();
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_1 = __this->get_moveCont_0();
		String_t* L_2 = ___direction0;
		MoveControl_SelectNextSpot_m7ED64A857875FA5E14F881B2505E72FD6E20D358(L_1, L_2, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_3 = __this->get_moveCont_0();
		String_t* L_4 = ___direction0;
		MoveControl_SelectNextMove_mFFE4350A74AE9DE5A37313F49B66D0D109723785(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Player::SelectFirst()
extern "C" IL2CPP_METHOD_ATTR void Player_SelectFirst_m30506D0C281AF5496EEC58A459B4577346710EFB (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_pieceSelected_1();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_1 = __this->get_moveCont_0();
		MoveControl_SelectFirstSpot_mE4AF031F7958B630BE469C1C15C1ED1E16EE6457(L_1, /*hidden argument*/NULL);
		return;
	}

IL_0014:
	{
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_2 = __this->get_moveCont_0();
		MoveControl_SelectFirstMove_m4B43D38DC0A36FEE6B7D2FAF38B1E9AF057262CA(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Player::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Player__ctor_m8F4AB650C5E2DE406B3C65EA8F662013458D85E2 (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method)
{
	{
		__this->set_listenForPick_2((bool)1);
		__this->set_secondsToWait_3((0.1f));
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void Player/<SelectedPiece>d__10::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CSelectedPieceU3Ed__10__ctor_mD6B2DC3E5112A48B5741FEE4BF967102072A33E0 (U3CSelectedPieceU3Ed__10_t38BD5B408C9AF6575D183F9FEFCAEFF9CDB992D1 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Player/<SelectedPiece>d__10::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CSelectedPieceU3Ed__10_System_IDisposable_Dispose_m264CE63A0878382DE109B9BA0A6FF2012BA5D6D5 (U3CSelectedPieceU3Ed__10_t38BD5B408C9AF6575D183F9FEFCAEFF9CDB992D1 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Player/<SelectedPiece>d__10::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CSelectedPieceU3Ed__10_MoveNext_mC67A13222BB1A9A0D3F4C54522D54F29FF1063E6 (U3CSelectedPieceU3Ed__10_t38BD5B408C9AF6575D183F9FEFCAEFF9CDB992D1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSelectedPieceU3Ed__10_MoveNext_mC67A13222BB1A9A0D3F4C54522D54F29FF1063E6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0045;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * L_4 = V_1;
		L_4->set_pieceSelected_1((bool)1);
		Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * L_5 = V_1;
		Player_SelectFirst_m30506D0C281AF5496EEC58A459B4577346710EFB(L_5, /*hidden argument*/NULL);
		Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * L_6 = V_1;
		float L_7 = L_6->get_secondsToWait_3();
		WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * L_8 = (WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 *)il2cpp_codegen_object_new(WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739_il2cpp_TypeInfo_var);
		WaitForSecondsRealtime__ctor_m775503EC1F4963D8E5BBDD7989B40F6A000E0525(L_8, L_7, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_8);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0045:
	{
		__this->set_U3CU3E1__state_0((-1));
		Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * L_9 = V_1;
		L_9->set_listenForPick_2((bool)1);
		return (bool)0;
	}
}
// System.Object Player/<SelectedPiece>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CSelectedPieceU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4787835CFFAAFB15CCA42A1743DF7412CC7E66AF (U3CSelectedPieceU3Ed__10_t38BD5B408C9AF6575D183F9FEFCAEFF9CDB992D1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Player/<SelectedPiece>d__10::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CSelectedPieceU3Ed__10_System_Collections_IEnumerator_Reset_m34750627EC5A843C6931CB952A3F1147531847E0 (U3CSelectedPieceU3Ed__10_t38BD5B408C9AF6575D183F9FEFCAEFF9CDB992D1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSelectedPieceU3Ed__10_System_Collections_IEnumerator_Reset_m34750627EC5A843C6931CB952A3F1147531847E0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CSelectedPieceU3Ed__10_System_Collections_IEnumerator_Reset_m34750627EC5A843C6931CB952A3F1147531847E0_RuntimeMethod_var);
	}
}
// System.Object Player/<SelectedPiece>d__10::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CSelectedPieceU3Ed__10_System_Collections_IEnumerator_get_Current_m80CBB842D71FFC1884D307FE917229E7522B868A (U3CSelectedPieceU3Ed__10_t38BD5B408C9AF6575D183F9FEFCAEFF9CDB992D1 * __this, const RuntimeMethod* method)
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
// System.Void Player/<SelectedSpot>d__11::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CSelectedSpotU3Ed__11__ctor_m6814CB3B281EA6EA8CCC8B1DDDDA34DFDD824A0F (U3CSelectedSpotU3Ed__11_tFCDA30F36C6CAFBEE5F6801B22C4D9349F628040 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Player/<SelectedSpot>d__11::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CSelectedSpotU3Ed__11_System_IDisposable_Dispose_mDF3E7489BDD103B9B8147F9E7B2A75DC8A64CF19 (U3CSelectedSpotU3Ed__11_tFCDA30F36C6CAFBEE5F6801B22C4D9349F628040 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Player/<SelectedSpot>d__11::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CSelectedSpotU3Ed__11_MoveNext_m2AC33E5AF3B898A1DC380D4E8C90FDF9F60E652E (U3CSelectedSpotU3Ed__11_tFCDA30F36C6CAFBEE5F6801B22C4D9349F628040 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSelectedSpotU3Ed__11_MoveNext_m2AC33E5AF3B898A1DC380D4E8C90FDF9F60E652E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_003f;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * L_4 = V_1;
		L_4->set_pieceSelected_1((bool)0);
		Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * L_5 = V_1;
		float L_6 = L_5->get_secondsToWait_3();
		WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * L_7 = (WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 *)il2cpp_codegen_object_new(WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739_il2cpp_TypeInfo_var);
		WaitForSecondsRealtime__ctor_m775503EC1F4963D8E5BBDD7989B40F6A000E0525(L_7, L_6, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003f:
	{
		__this->set_U3CU3E1__state_0((-1));
		Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * L_8 = V_1;
		L_8->set_listenForPick_2((bool)1);
		return (bool)0;
	}
}
// System.Object Player/<SelectedSpot>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CSelectedSpotU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3E1FF9B26FAE400085D5244FF9DFEA162FFAE63E (U3CSelectedSpotU3Ed__11_tFCDA30F36C6CAFBEE5F6801B22C4D9349F628040 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Player/<SelectedSpot>d__11::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CSelectedSpotU3Ed__11_System_Collections_IEnumerator_Reset_m5EC3B62B0A68F64601378CC9FDA980DCFC8B3C82 (U3CSelectedSpotU3Ed__11_tFCDA30F36C6CAFBEE5F6801B22C4D9349F628040 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSelectedSpotU3Ed__11_System_Collections_IEnumerator_Reset_m5EC3B62B0A68F64601378CC9FDA980DCFC8B3C82_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CSelectedSpotU3Ed__11_System_Collections_IEnumerator_Reset_m5EC3B62B0A68F64601378CC9FDA980DCFC8B3C82_RuntimeMethod_var);
	}
}
// System.Object Player/<SelectedSpot>d__11::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CSelectedSpotU3Ed__11_System_Collections_IEnumerator_get_Current_mB3AA9FE079045F325AF013C4EDD4D74F3DF1D553 (U3CSelectedSpotU3Ed__11_tFCDA30F36C6CAFBEE5F6801B22C4D9349F628040 * __this, const RuntimeMethod* method)
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
// Player PlayerFactory::GetPlayer(System.String)
extern "C" IL2CPP_METHOD_ATTR Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * PlayerFactory_GetPlayer_m97FF956EFDD2208AF1833C4519D09D7F5A53E183 (String_t* ___playerType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerFactory_GetPlayer_m97FF956EFDD2208AF1833C4519D09D7F5A53E183_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___playerType0;
		bool L_1 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_0, _stringLiteralE31663B107B924EB1B3620999DDD56B3E2A6F2E6, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0036;
		}
	}
	{
		String_t* L_2 = ___playerType0;
		bool L_3 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_2, _stringLiteral9C757C6A146852B8EF747675D1BC310DDC71E5C5, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_4 = ___playerType0;
		bool L_5 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_4, _stringLiteralEB73AD20C8E687DD8CE92723970B0B741D5519AC, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0042;
		}
	}
	{
		String_t* L_6 = ___playerType0;
		bool L_7 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_6, _stringLiteral3871C44CEA6A673FC43587B6A2A5C78D106C2ED2, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0048;
		}
	}
	{
		goto IL_004e;
	}

IL_0036:
	{
		HumanPlayer_t6448D36C66FD3A6DEFB3ABA99F62999E1241A498 * L_8 = (HumanPlayer_t6448D36C66FD3A6DEFB3ABA99F62999E1241A498 *)il2cpp_codegen_object_new(HumanPlayer_t6448D36C66FD3A6DEFB3ABA99F62999E1241A498_il2cpp_TypeInfo_var);
		HumanPlayer__ctor_m9F4474FEF291FA1C478FBE37DD105F8AA5BF8C80(L_8, /*hidden argument*/NULL);
		return L_8;
	}

IL_003c:
	{
		RandomCPUPlayer_t51F7C1747AF62AD10CC453DAC97741A0607B45B0 * L_9 = (RandomCPUPlayer_t51F7C1747AF62AD10CC453DAC97741A0607B45B0 *)il2cpp_codegen_object_new(RandomCPUPlayer_t51F7C1747AF62AD10CC453DAC97741A0607B45B0_il2cpp_TypeInfo_var);
		RandomCPUPlayer__ctor_mF7A3A7DDED2E6A0A340C1DE99ACC19E69B51676C(L_9, /*hidden argument*/NULL);
		return L_9;
	}

IL_0042:
	{
		SimpleCPUPlayer_tB953C232605B5C16CC52004A155589235FE7B596 * L_10 = (SimpleCPUPlayer_tB953C232605B5C16CC52004A155589235FE7B596 *)il2cpp_codegen_object_new(SimpleCPUPlayer_tB953C232605B5C16CC52004A155589235FE7B596_il2cpp_TypeInfo_var);
		SimpleCPUPlayer__ctor_m6E65AADBE5C33E4A2650E3F282CA024BB18C551C(L_10, /*hidden argument*/NULL);
		return L_10;
	}

IL_0048:
	{
		AggressiveCPUPlayer_tBDE793DDA745B385FC729056AF9F131CEEEB9981 * L_11 = (AggressiveCPUPlayer_tBDE793DDA745B385FC729056AF9F131CEEEB9981 *)il2cpp_codegen_object_new(AggressiveCPUPlayer_tBDE793DDA745B385FC729056AF9F131CEEEB9981_il2cpp_TypeInfo_var);
		AggressiveCPUPlayer__ctor_m71290793AB5566FA528586854EC832AEAD049F42(L_11, /*hidden argument*/NULL);
		return L_11;
	}

IL_004e:
	{
		return (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 *)NULL;
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
// System.Void PlayerSelectionControl::Start()
extern "C" IL2CPP_METHOD_ATTR void PlayerSelectionControl_Start_mBBEC653B1F5CCC22DB3A1032CB37424564523FF5 (PlayerSelectionControl_tDFC4922DD5B43F4348987D9DC32E99F231A69D78 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerSelectionControl_Start_mBBEC653B1F5CCC22DB3A1032CB37424564523FF5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = __this->get_colorText_5();
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral37619FC13053F82B7CB7DA3D24CEB1598AB6D05C);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_1 = __this->get_playerTypeText_6();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = __this->get_playerTypes_7();
		int32_t L_3 = __this->get_typeIndex_8();
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_5);
		return;
	}
}
// System.Void PlayerSelectionControl::Update()
extern "C" IL2CPP_METHOD_ATTR void PlayerSelectionControl_Update_m4A291AEAF52143CA7CA3CD48C09346D1D92260BC (PlayerSelectionControl_tDFC4922DD5B43F4348987D9DC32E99F231A69D78 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerSelectionControl_Update_m4A291AEAF52143CA7CA3CD48C09346D1D92260BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = Input_GetKeyDown_mD82B14BB87E1C811668BD1A2CFBC0CF3D4983FEA(((int32_t)275), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_1 = __this->get_typeIndex_8();
		__this->set_typeIndex_8(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)));
		int32_t L_2 = __this->get_typeIndex_8();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = __this->get_playerTypes_7();
		if ((((int32_t)L_2) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length)))))))
		{
			goto IL_0031;
		}
	}
	{
		__this->set_typeIndex_8(0);
	}

IL_0031:
	{
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_4 = __this->get_playerTypeText_6();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = __this->get_playerTypes_7();
		int32_t L_6 = __this->get_typeIndex_8();
		int32_t L_7 = L_6;
		String_t* L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_8);
	}

IL_0049:
	{
		bool L_9 = Input_GetKeyDown_mD82B14BB87E1C811668BD1A2CFBC0CF3D4983FEA(((int32_t)276), /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0094;
		}
	}
	{
		int32_t L_10 = __this->get_typeIndex_8();
		__this->set_typeIndex_8(((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1)));
		int32_t L_11 = __this->get_typeIndex_8();
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_007c;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_12 = __this->get_playerTypes_7();
		__this->set_typeIndex_8(((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))), (int32_t)1)));
	}

IL_007c:
	{
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_13 = __this->get_playerTypeText_6();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_14 = __this->get_playerTypes_7();
		int32_t L_15 = __this->get_typeIndex_8();
		int32_t L_16 = L_15;
		String_t* L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_17);
	}

IL_0094:
	{
		bool L_18 = Input_GetKeyDown_mD82B14BB87E1C811668BD1A2CFBC0CF3D4983FEA(((int32_t)32), /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0143;
		}
	}
	{
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_19 = __this->get_colorText_5();
		String_t* L_20 = VirtFuncInvoker0< String_t* >::Invoke(72 /* System.String UnityEngine.UI.Text::get_text() */, L_19);
		bool L_21 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_20, _stringLiteral37619FC13053F82B7CB7DA3D24CEB1598AB6D05C, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0109;
		}
	}
	{
		GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * L_22 = __this->get_gameMaster_4();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_23 = L_22->get_whiteMover_9();
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_24 = GameObject_GetComponent_TisMoveControl_t61FB98930C721FC56C880750FD267C839C2E4401_mAF69BF76C830F714A0ACFD04D822963962CCE88B(L_23, /*hidden argument*/GameObject_GetComponent_TisMoveControl_t61FB98930C721FC56C880750FD267C839C2E4401_mAF69BF76C830F714A0ACFD04D822963962CCE88B_RuntimeMethod_var);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_25 = __this->get_playerTypes_7();
		int32_t L_26 = __this->get_typeIndex_8();
		int32_t L_27 = L_26;
		String_t* L_28 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		MoveControl_SetPlayer_mCB89B4ECBC11BDD92227B4EC5273B21AF30A6041(L_24, L_28, /*hidden argument*/NULL);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_29 = __this->get_colorText_5();
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_29, _stringLiteralB406FB57B29FC76F71864FBB37F0238045F84D9D);
		__this->set_typeIndex_8(0);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_30 = __this->get_playerTypeText_6();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_31 = __this->get_playerTypes_7();
		int32_t L_32 = __this->get_typeIndex_8();
		int32_t L_33 = L_32;
		String_t* L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_30, L_34);
		return;
	}

IL_0109:
	{
		GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * L_35 = __this->get_gameMaster_4();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_36 = L_35->get_blackMover_8();
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_37 = GameObject_GetComponent_TisMoveControl_t61FB98930C721FC56C880750FD267C839C2E4401_mAF69BF76C830F714A0ACFD04D822963962CCE88B(L_36, /*hidden argument*/GameObject_GetComponent_TisMoveControl_t61FB98930C721FC56C880750FD267C839C2E4401_mAF69BF76C830F714A0ACFD04D822963962CCE88B_RuntimeMethod_var);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_38 = __this->get_playerTypes_7();
		int32_t L_39 = __this->get_typeIndex_8();
		int32_t L_40 = L_39;
		String_t* L_41 = (L_38)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_40));
		MoveControl_SetPlayer_mCB89B4ECBC11BDD92227B4EC5273B21AF30A6041(L_37, L_41, /*hidden argument*/NULL);
		GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * L_42 = __this->get_gameMaster_4();
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_42, (bool)1, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_43 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_43, (bool)0, /*hidden argument*/NULL);
	}

IL_0143:
	{
		return;
	}
}
// System.Void PlayerSelectionControl::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PlayerSelectionControl__ctor_mBC166658DC1AF69CF12F35A15546C143F38302FA (PlayerSelectionControl_tDFC4922DD5B43F4348987D9DC32E99F231A69D78 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void RandomCPUPlayer::PickPieceOrSpot()
extern "C" IL2CPP_METHOD_ATTR void RandomCPUPlayer_PickPieceOrSpot_mB4600595F4F0FB138F472EDBC2C10EC5B8022A82 (RandomCPUPlayer_t51F7C1747AF62AD10CC453DAC97741A0607B45B0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RandomCPUPlayer_PickPieceOrSpot_mB4600595F4F0FB138F472EDBC2C10EC5B8022A82_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 *)__this)->get_listenForPick_2();
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		((Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 *)__this)->set_listenForPick_2((bool)0);
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_1 = ((Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 *)__this)->get_moveCont_0();
		bool L_2 = ((Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 *)__this)->get_pieceSelected_1();
		int32_t L_3 = MoveControl_GetNumAvailable_m2AC170C4F83EEDF65768B2ED70F9A4ED24A4B417(L_1, L_2, /*hidden argument*/NULL);
		int32_t L_4 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(0, L_3, /*hidden argument*/NULL);
		__this->set_rand_4(L_4);
		return;
	}

IL_002d:
	{
		int32_t L_5 = __this->get_rand_4();
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		Player_SelectNext_mD827DEF00E75438BAF40DBB152B91AFAD064A24F(__this, _stringLiteral2038BDEC9210202D0D9D74839E3925FF0CD91BA1, /*hidden argument*/NULL);
		int32_t L_6 = __this->get_rand_4();
		__this->set_rand_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)));
		return;
	}

IL_0050:
	{
		int32_t L_7 = __this->get_rand_4();
		if (L_7)
		{
			goto IL_007f;
		}
	}
	{
		bool L_8 = ((Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 *)__this)->get_pieceSelected_1();
		if (L_8)
		{
			goto IL_006d;
		}
	}
	{
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_9 = ((Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 *)__this)->get_moveCont_0();
		MoveControl_SelectPiece_m0393DE8C62C80286EB7F4334DDFB67CFA59FC92F(L_9, /*hidden argument*/NULL);
		goto IL_0078;
	}

IL_006d:
	{
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_10 = ((Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 *)__this)->get_moveCont_0();
		MoveControl_SelectMove_m876440D568B9B4A54DCFE586D8F75FAC5117EBB8(L_10, /*hidden argument*/NULL);
	}

IL_0078:
	{
		__this->set_rand_4((-1));
	}

IL_007f:
	{
		return;
	}
}
// System.Void RandomCPUPlayer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void RandomCPUPlayer__ctor_mF7A3A7DDED2E6A0A340C1DE99ACC19E69B51676C (RandomCPUPlayer_t51F7C1747AF62AD10CC453DAC97741A0607B45B0 * __this, const RuntimeMethod* method)
{
	{
		__this->set_rand_4((-1));
		Player__ctor_m8F4AB650C5E2DE406B3C65EA8F662013458D85E2(__this, /*hidden argument*/NULL);
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
// System.Void SimpleCPUPlayer::PickPieceOrSpot()
extern "C" IL2CPP_METHOD_ATTR void SimpleCPUPlayer_PickPieceOrSpot_mF5827AD29E014BF26DB4816CBF8A0445AF6F3C28 (SimpleCPUPlayer_tB953C232605B5C16CC52004A155589235FE7B596 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = ((Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 *)__this)->get_listenForPick_2();
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		((Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 *)__this)->set_listenForPick_2((bool)0);
		bool L_1 = ((Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 *)__this)->get_pieceSelected_1();
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_2 = ((Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 *)__this)->get_moveCont_0();
		MoveControl_SelectPiece_m0393DE8C62C80286EB7F4334DDFB67CFA59FC92F(L_2, /*hidden argument*/NULL);
		return;
	}

IL_0023:
	{
		MoveControl_t61FB98930C721FC56C880750FD267C839C2E4401 * L_3 = ((Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 *)__this)->get_moveCont_0();
		MoveControl_SelectMove_m876440D568B9B4A54DCFE586D8F75FAC5117EBB8(L_3, /*hidden argument*/NULL);
	}

IL_002e:
	{
		return;
	}
}
// System.Void SimpleCPUPlayer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SimpleCPUPlayer__ctor_m6E65AADBE5C33E4A2650E3F282CA024BB18C551C (SimpleCPUPlayer_tB953C232605B5C16CC52004A155589235FE7B596 * __this, const RuntimeMethod* method)
{
	{
		Player__ctor_m8F4AB650C5E2DE406B3C65EA8F662013458D85E2(__this, /*hidden argument*/NULL);
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
// System.Void SpotControl::.ctor(System.String,System.Collections.Generic.List`1<UnityEngine.GameObject>)
extern "C" IL2CPP_METHOD_ATTR void SpotControl__ctor_m98F34514ADC10157E25A9C1844DDF75F8CA74FDD (SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * __this, String_t* ___name0, List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * ___initPieces1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpotControl__ctor_m98F34514ADC10157E25A9C1844DDF75F8CA74FDD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_array_size_t L_1[] = { (il2cpp_array_size_t)6, (il2cpp_array_size_t)6 };
		List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2* L_0 = (List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2*)GenArrayNew(List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2_il2cpp_TypeInfo_var, L_1);
		__this->set_possibleMovesWhite_12((List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2*)L_0);
		il2cpp_array_size_t L_3[] = { (il2cpp_array_size_t)6, (il2cpp_array_size_t)6 };
		List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2* L_2 = (List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2*)GenArrayNew(List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2_il2cpp_TypeInfo_var, L_3);
		__this->set_possibleMovesBlack_13((List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2*)L_2);
		PieceContainerControl__ctor_mD4344D0526B59AEFC1F00D4521A7572D37FD6742(__this, /*hidden argument*/NULL);
		String_t* L_4 = ___name0;
		Il2CppChar L_5 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_4, 4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var);
		double L_6 = Char_GetNumericValue_mFE39C323BE137F0034BB68158EBF3DAE3016B0DB(L_5, /*hidden argument*/NULL);
		__this->set_quadrant_17((((int32_t)((int32_t)L_6))));
		String_t* L_7 = ___name0;
		Il2CppChar L_8 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_7, 6, /*hidden argument*/NULL);
		double L_9 = Char_GetNumericValue_mFE39C323BE137F0034BB68158EBF3DAE3016B0DB(L_8, /*hidden argument*/NULL);
		__this->set_numInQuadrant_18((((int32_t)((int32_t)L_9))));
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_10 = ___initPieces1;
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_pieces_1(L_10);
		return;
	}
}
// System.Void SpotControl::.ctor(SpotControl)
extern "C" IL2CPP_METHOD_ATTR void SpotControl__ctor_m2BA36A175BD88743D6E1C49BA3460A84740AB7EC (SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * __this, SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * ___pcc0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpotControl__ctor_m2BA36A175BD88743D6E1C49BA3460A84740AB7EC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60  V_0;
	memset(&V_0, 0, sizeof(V_0));
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		il2cpp_array_size_t L_1[] = { (il2cpp_array_size_t)6, (il2cpp_array_size_t)6 };
		List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2* L_0 = (List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2*)GenArrayNew(List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2_il2cpp_TypeInfo_var, L_1);
		__this->set_possibleMovesWhite_12((List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2*)L_0);
		il2cpp_array_size_t L_3[] = { (il2cpp_array_size_t)6, (il2cpp_array_size_t)6 };
		List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2* L_2 = (List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2*)GenArrayNew(List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2_il2cpp_TypeInfo_var, L_3);
		__this->set_possibleMovesBlack_13((List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2*)L_2);
		PieceContainerControl__ctor_mD4344D0526B59AEFC1F00D4521A7572D37FD6742(__this, /*hidden argument*/NULL);
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_4 = (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 *)il2cpp_codegen_object_new(List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650_il2cpp_TypeInfo_var);
		List_1__ctor_m70B8A20433AEEDEB942CD3EEC229497AB693E9D6(L_4, /*hidden argument*/List_1__ctor_m70B8A20433AEEDEB942CD3EEC229497AB693E9D6_RuntimeMethod_var);
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_pieces_1(L_4);
		SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * L_5 = ___pcc0;
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_6 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)L_5)->get_pieces_1();
		Enumerator_t42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60  L_7 = List_1_GetEnumerator_mF3F7C6A691B033A8369791D6DDBFE927804CDAB6(L_6, /*hidden argument*/List_1_GetEnumerator_mF3F7C6A691B033A8369791D6DDBFE927804CDAB6_RuntimeMethod_var);
		V_0 = L_7;
	}

IL_0037:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004d;
		}

IL_0039:
		{
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = Enumerator_get_Current_m2423588CAA3D28740E46D88133E7B22998378380((Enumerator_t42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m2423588CAA3D28740E46D88133E7B22998378380_RuntimeMethod_var);
			V_1 = L_8;
			List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_9 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_pieces_1();
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = V_1;
			List_1_Add_m94A913D452C8522AD16D2EB42D46016D83D86112(L_9, L_10, /*hidden argument*/List_1_Add_m94A913D452C8522AD16D2EB42D46016D83D86112_RuntimeMethod_var);
		}

IL_004d:
		{
			bool L_11 = Enumerator_MoveNext_mF998290EE501F2F7CA8A67995AAE77B29547C3C8((Enumerator_t42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mF998290EE501F2F7CA8A67995AAE77B29547C3C8_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_0039;
			}
		}

IL_0056:
		{
			IL2CPP_LEAVE(0x66, FINALLY_0058);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0058;
	}

FINALLY_0058:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m0C9F007B48F37CD7F09430C3C1B407ACE6213812((Enumerator_t42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m0C9F007B48F37CD7F09430C3C1B407ACE6213812_RuntimeMethod_var);
		IL2CPP_END_FINALLY(88)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(88)
	{
		IL2CPP_JUMP_TBL(0x66, IL_0066)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0066:
	{
		SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * L_12 = ___pcc0;
		int32_t L_13 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)L_12)->get_position_8();
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_position_8(L_13);
		SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * L_14 = ___pcc0;
		List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2* L_15 = L_14->get_possibleMovesWhite_12();
		__this->set_possibleMovesWhite_12(L_15);
		SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * L_16 = ___pcc0;
		List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2* L_17 = L_16->get_possibleMovesBlack_13();
		__this->set_possibleMovesBlack_13(L_17);
		SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * L_18 = ___pcc0;
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_19 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)L_18)->get_actualPossibleMoves_2();
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_actualPossibleMoves_2(L_19);
		return;
	}
}
// System.Void SpotControl::InitializeOtherPieceContainerControls(GameControl)
extern "C" IL2CPP_METHOD_ATTR void SpotControl_InitializeOtherPieceContainerControls_m812745CC816273E29158E3E7FADAFC4CF6A7FEF3 (SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * __this, GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * ___gm0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpotControl_InitializeOtherPieceContainerControls_m812745CC816273E29158E3E7FADAFC4CF6A7FEF3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* L_0 = (PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51*)SZArrayNew(PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51_il2cpp_TypeInfo_var, (uint32_t)((int32_t)24));
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_allSpots_0(L_0);
		V_0 = 0;
		goto IL_002a;
	}

IL_0011:
	{
		PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* L_1 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_allSpots_0();
		int32_t L_2 = V_0;
		GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * L_3 = ___gm0;
		PieceContainerObjectU5BU5D_t04002C7EAC175CFD098187B608736779B7C0338C* L_4 = L_3->get_allSpots_15();
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_8 = L_7->get_pcc_4();
		ArrayElementTypeCheck (L_1, L_8);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2), (PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)L_8);
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_002a:
	{
		int32_t L_10 = V_0;
		GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * L_11 = ___gm0;
		PieceContainerObjectU5BU5D_t04002C7EAC175CFD098187B608736779B7C0338C* L_12 = L_11->get_allSpots_15();
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_0011;
		}
	}
	{
		GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * L_13 = ___gm0;
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_14 = L_13->get_whiteJailControl_16();
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_15 = L_14->get_pcc_4();
		__this->set_whiteJailControl_14(L_15);
		GameControl_t60391CE7B0B029798FBC6F92207CDB38C6B1F248 * L_16 = ___gm0;
		PieceContainerObject_tA444C3338C786026ABF7E0FD0ED6D7F2E7E88740 * L_17 = L_16->get_blackJailControl_18();
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_18 = L_17->get_pcc_4();
		__this->set_blackJailControl_15(L_18);
		SpotControl_SetControlledVariables_m9BE1609DC644A479FABBFA4365877A490FF390FA(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SpotControl::InitializeOtherPieceContainerControls(PieceContainerControl[],PieceContainerControl,PieceContainerControl)
extern "C" IL2CPP_METHOD_ATTR void SpotControl_InitializeOtherPieceContainerControls_mBEC98BFA92CC50A4CFC2251E58136CA70D79517C (SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * __this, PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* ___arrPcc0, PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * ___whiteJail1, PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * ___blackJail2, const RuntimeMethod* method)
{
	{
		PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* L_0 = ___arrPcc0;
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_allSpots_0(L_0);
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_1 = ___whiteJail1;
		__this->set_whiteJailControl_14(L_1);
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_2 = ___blackJail2;
		__this->set_blackJailControl_15(L_2);
		SpotControl_SetControlledVariables_m9BE1609DC644A479FABBFA4365877A490FF390FA(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SpotControl::Start()
extern "C" IL2CPP_METHOD_ATTR void SpotControl_Start_m2B2F284F658918605818C853BDB2F82E57AA2840 (SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpotControl_Start_m2B2F284F658918605818C853BDB2F82E57AA2840_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_betweenPieces_3((1.2f));
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_initialPiece_6((5.85f));
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_stackPieces_4((0.2f));
		int32_t L_0 = __this->get_quadrant_17();
		int32_t L_1 = __this->get_numInQuadrant_18();
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_position_8(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)), (int32_t)6)), (int32_t)L_1)), (int32_t)1)));
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_changed_9((bool)1);
		int32_t L_2 = __this->get_quadrant_17();
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_3 = __this->get_quadrant_17();
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0067;
		}
	}

IL_0053:
	{
		float L_4 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_initialPiece_6();
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_initialPiece_6(((float)il2cpp_codegen_multiply((float)L_4, (float)(-1.0f))));
		goto IL_0079;
	}

IL_0067:
	{
		float L_5 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_betweenPieces_3();
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_betweenPieces_3(((float)il2cpp_codegen_multiply((float)L_5, (float)(-1.0f))));
	}

IL_0079:
	{
		List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2* L_6 = __this->get_possibleMovesBlack_13();
		if (L_6)
		{
			goto IL_008e;
		}
	}
	{
		il2cpp_array_size_t L_8[] = { (il2cpp_array_size_t)6, (il2cpp_array_size_t)6 };
		List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2* L_7 = (List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2*)GenArrayNew(List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2_il2cpp_TypeInfo_var, L_8);
		__this->set_possibleMovesBlack_13((List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2*)L_7);
	}

IL_008e:
	{
		List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2* L_9 = __this->get_possibleMovesWhite_12();
		if (L_9)
		{
			goto IL_00a3;
		}
	}
	{
		il2cpp_array_size_t L_11[] = { (il2cpp_array_size_t)6, (il2cpp_array_size_t)6 };
		List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2* L_10 = (List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2*)GenArrayNew(List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2_il2cpp_TypeInfo_var, L_11);
		__this->set_possibleMovesWhite_12((List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2*)L_10);
	}

IL_00a3:
	{
		SpotControl_SetControlledVariables_m9BE1609DC644A479FABBFA4365877A490FF390FA(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 SpotControl::CalculatePiecePosition(System.Int32,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SpotControl_CalculatePiecePosition_m277F62E4D5364EC348C7BD6BD401628384251001 (SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * __this, int32_t ___x0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___x0;
		if ((((int32_t)L_0) >= ((int32_t)5)))
		{
			goto IL_0026;
		}
	}
	{
		float L_1 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_initialPiece_6();
		float L_2 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_betweenPieces_3();
		int32_t L_3 = ___x0;
		float L_4 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_y_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = ___position1;
		float L_6 = L_5.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_7), ((float)il2cpp_codegen_add((float)L_1, (float)((float)il2cpp_codegen_multiply((float)L_2, (float)(((float)((float)L_3))))))), L_4, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0026:
	{
		float L_8 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_initialPiece_6();
		float L_9 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_betweenPieces_3();
		int32_t L_10 = ___x0;
		float L_11 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_y_5();
		float L_12 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_stackPieces_4();
		int32_t L_13 = ___x0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = ___position1;
		float L_15 = L_14.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16;
		memset(&L_16, 0, sizeof(L_16));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_16), ((float)il2cpp_codegen_add((float)L_8, (float)((float)il2cpp_codegen_multiply((float)L_9, (float)(((float)((float)((int32_t)((int32_t)L_10%(int32_t)5))))))))), ((float)il2cpp_codegen_add((float)L_11, (float)((float)il2cpp_codegen_multiply((float)L_12, (float)(((float)((float)((int32_t)((int32_t)L_13/(int32_t)5))))))))), L_15, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Void SpotControl::AddPiece(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void SpotControl_AddPiece_m4655C96993E52D927E2DB296A43FCFF060362913 (SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___piece0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpotControl_AddPiece_m4655C96993E52D927E2DB296A43FCFF060362913_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_0 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_pieces_1();
		int32_t L_1 = List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35(L_0, /*hidden argument*/List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35_RuntimeMethod_var);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0055;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = ___piece0;
		String_t* L_3 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_2, /*hidden argument*/NULL);
		Il2CppChar L_4 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_3, 0, /*hidden argument*/NULL);
		bool L_5 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_isBlack_10();
		if ((((int32_t)((((int32_t)L_4) == ((int32_t)((int32_t)66)))? 1 : 0)) == ((int32_t)L_5)))
		{
			goto IL_0055;
		}
	}
	{
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_6 = __this->get_jailControl_16();
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_7 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_pieces_1();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8(L_7, 0, /*hidden argument*/List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8_RuntimeMethod_var);
		VirtActionInvoker1< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(4 /* System.Void PieceContainerControl::AddPiece(UnityEngine.GameObject) */, L_6, L_8);
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_9 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_pieces_1();
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_10 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_pieces_1();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8(L_10, 0, /*hidden argument*/List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8_RuntimeMethod_var);
		List_1_Remove_mC05369CBB846172964FD487ACC41F6E543298935(L_9, L_11, /*hidden argument*/List_1_Remove_mC05369CBB846172964FD487ACC41F6E543298935_RuntimeMethod_var);
	}

IL_0055:
	{
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_12 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_pieces_1();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_13 = ___piece0;
		List_1_Add_m94A913D452C8522AD16D2EB42D46016D83D86112(L_12, L_13, /*hidden argument*/List_1_Add_m94A913D452C8522AD16D2EB42D46016D83D86112_RuntimeMethod_var);
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_changed_9((bool)1);
		SpotControl_SetControlledVariables_m9BE1609DC644A479FABBFA4365877A490FF390FA(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SpotControl::RemovePiece(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void SpotControl_RemovePiece_mDE3818C6B2B45DB4FD4F86488D1CC2B7437FE83A (SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___piece0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpotControl_RemovePiece_mDE3818C6B2B45DB4FD4F86488D1CC2B7437FE83A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_0 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_pieces_1();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = ___piece0;
		List_1_Remove_mC05369CBB846172964FD487ACC41F6E543298935(L_0, L_1, /*hidden argument*/List_1_Remove_mC05369CBB846172964FD487ACC41F6E543298935_RuntimeMethod_var);
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_changed_9((bool)1);
		SpotControl_SetControlledVariables_m9BE1609DC644A479FABBFA4365877A490FF390FA(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SpotControl::CalcPossibleMoves()
extern "C" IL2CPP_METHOD_ATTR void SpotControl_CalcPossibleMoves_m826B37DBC07571A18013CD31E87EB9D946B26FE0 (SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpotControl_CalcPossibleMoves_m826B37DBC07571A18013CD31E87EB9D946B26FE0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 1;
		goto IL_00f7;
	}

IL_0007:
	{
		V_1 = 1;
		goto IL_00ec;
	}

IL_000e:
	{
		List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2* L_0 = __this->get_possibleMovesWhite_12();
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_3 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)il2cpp_codegen_object_new(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_il2cpp_TypeInfo_var);
		List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4(L_3, /*hidden argument*/List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_RuntimeMethod_var);
		((List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2*)(List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2*)L_0)->SetAtUnchecked(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)), L_3);
		List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2* L_4 = __this->get_possibleMovesBlack_13();
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_7 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)il2cpp_codegen_object_new(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_il2cpp_TypeInfo_var);
		List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4(L_7, /*hidden argument*/List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_RuntimeMethod_var);
		((List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2*)(List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2*)L_4)->SetAtUnchecked(((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)), L_7);
		int32_t L_8 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_position_8();
		int32_t L_9 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9))) >= ((int32_t)((int32_t)24))))
		{
			goto IL_0064;
		}
	}
	{
		List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2* L_10 = __this->get_possibleMovesWhite_12();
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_13 = ((List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2*)(List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2*)L_10)->GetAtUnchecked(((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1)));
		int32_t L_14 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_position_8();
		int32_t L_15 = V_0;
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_13, ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)L_15)), /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
	}

IL_0064:
	{
		int32_t L_16 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_position_8();
		int32_t L_17 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)L_17))) < ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2* L_18 = __this->get_possibleMovesBlack_13();
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_21 = ((List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2*)(List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2*)L_18)->GetAtUnchecked(((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1)));
		int32_t L_22 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_position_8();
		int32_t L_23 = V_0;
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_21, ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)L_23)), /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
	}

IL_008d:
	{
		int32_t L_24 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_position_8();
		int32_t L_25 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)L_25))) >= ((int32_t)((int32_t)24))))
		{
			goto IL_00bb;
		}
	}
	{
		int32_t L_26 = V_1;
		int32_t L_27 = V_0;
		if ((((int32_t)L_26) == ((int32_t)L_27)))
		{
			goto IL_00bb;
		}
	}
	{
		List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2* L_28 = __this->get_possibleMovesWhite_12();
		int32_t L_29 = V_0;
		int32_t L_30 = V_1;
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_31 = ((List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2*)(List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2*)L_28)->GetAtUnchecked(((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)1)));
		int32_t L_32 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_position_8();
		int32_t L_33 = V_1;
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_31, ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)L_33)), /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
	}

IL_00bb:
	{
		int32_t L_34 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_position_8();
		int32_t L_35 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_34, (int32_t)L_35))) < ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_36 = V_1;
		int32_t L_37 = V_0;
		if ((((int32_t)L_36) == ((int32_t)L_37)))
		{
			goto IL_00e8;
		}
	}
	{
		List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2* L_38 = __this->get_possibleMovesBlack_13();
		int32_t L_39 = V_0;
		int32_t L_40 = V_1;
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_41 = ((List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2*)(List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2*)L_38)->GetAtUnchecked(((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_40, (int32_t)1)));
		int32_t L_42 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_position_8();
		int32_t L_43 = V_1;
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_41, ((int32_t)il2cpp_codegen_subtract((int32_t)L_42, (int32_t)L_43)), /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
	}

IL_00e8:
	{
		int32_t L_44 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
	}

IL_00ec:
	{
		int32_t L_45 = V_1;
		if ((((int32_t)L_45) < ((int32_t)7)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_46 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
	}

IL_00f7:
	{
		int32_t L_47 = V_0;
		if ((((int32_t)L_47) < ((int32_t)7)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SpotControl::SetControlledVariables()
extern "C" IL2CPP_METHOD_ATTR void SpotControl_SetControlledVariables_m9BE1609DC644A479FABBFA4365877A490FF390FA (SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpotControl_SetControlledVariables_m9BE1609DC644A479FABBFA4365877A490FF390FA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_0 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_pieces_1();
		int32_t L_1 = List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35(L_0, /*hidden argument*/List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		__this->set_controlled_11((bool)0);
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_isBlack_10((bool)0);
		goto IL_0052;
	}

IL_001d:
	{
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_2 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_pieces_1();
		int32_t L_3 = List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35(L_2, /*hidden argument*/List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35_RuntimeMethod_var);
		__this->set_controlled_11((bool)((((int32_t)L_3) > ((int32_t)1))? 1 : 0));
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_4 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_pieces_1();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8(L_4, 0, /*hidden argument*/List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8_RuntimeMethod_var);
		String_t* L_6 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_5, /*hidden argument*/NULL);
		Il2CppChar L_7 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_6, 0, /*hidden argument*/NULL);
		((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->set_isBlack_10((bool)((((int32_t)L_7) == ((int32_t)((int32_t)66)))? 1 : 0));
	}

IL_0052:
	{
		bool L_8 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_isBlack_10();
		if (!L_8)
		{
			goto IL_0067;
		}
	}
	{
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_9 = __this->get_blackJailControl_15();
		__this->set_jailControl_16(L_9);
		return;
	}

IL_0067:
	{
		PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_10 = __this->get_whiteJailControl_14();
		__this->set_jailControl_16(L_10);
		return;
	}
}
// System.Void SpotControl::GetPossibleMoves(System.Boolean,System.Int32,System.Int32,System.Boolean[])
extern "C" IL2CPP_METHOD_ATTR void SpotControl_GetPossibleMoves_m93652622D4FB910A909113C44D86B0FD11FF914A (SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * __this, bool ___black0, int32_t ___roll11, int32_t ___roll22, BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* ___rollsUsed3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpotControl_GetPossibleMoves_m93652622D4FB910A909113C44D86B0FD11FF914A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * V_1 = NULL;
	SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * V_2 = NULL;
	int32_t V_3 = 0;
	Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C  V_4;
	memset(&V_4, 0, sizeof(V_4));
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = ___roll11;
		int32_t L_1 = ___roll22;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_2 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_actualPossibleMoves_2();
		List_1_Clear_mC455BD77767538B1E02BE31A5E915DEE70E7D88C(L_2, /*hidden argument*/List_1_Clear_mC455BD77767538B1E02BE31A5E915DEE70E7D88C_RuntimeMethod_var);
		bool L_3 = ___black0;
		bool L_4 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_isBlack_10();
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_014a;
		}
	}
	{
		bool L_5 = ___black0;
		if (L_5)
		{
			goto IL_0033;
		}
	}
	{
		List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2* L_6 = __this->get_possibleMovesWhite_12();
		int32_t L_7 = ___roll11;
		int32_t L_8 = ___roll22;
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_9 = ((List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2*)(List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2*)L_6)->GetAtUnchecked(((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)));
		V_1 = L_9;
		goto IL_0045;
	}

IL_0033:
	{
		List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2* L_10 = __this->get_possibleMovesBlack_13();
		int32_t L_11 = ___roll11;
		int32_t L_12 = ___roll22;
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_13 = ((List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2*)(List_1U5B0___U2C0___U5D_t8F48F6DC0A8F1639A378E21BC4426D079B651EB2*)L_10)->GetAtUnchecked(((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1)));
		V_1 = L_13;
	}

IL_0045:
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_14 = V_1;
		int32_t L_15 = List_1_get_Count_m7984BA6C664D8EAE284C168D0568FE2B9136A033(L_14, /*hidden argument*/List_1_get_Count_m7984BA6C664D8EAE284C168D0568FE2B9136A033_RuntimeMethod_var);
		if (!L_15)
		{
			goto IL_014a;
		}
	}
	{
		V_3 = 0;
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_16 = V_1;
		Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C  L_17 = List_1_GetEnumerator_m83178F038A7D4A7E9B0731B7D3078EDCF6FFD0EC(L_16, /*hidden argument*/List_1_GetEnumerator_m83178F038A7D4A7E9B0731B7D3078EDCF6FFD0EC_RuntimeMethod_var);
		V_4 = L_17;
	}

IL_005a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_012e;
		}

IL_005f:
		{
			int32_t L_18 = Enumerator_get_Current_m88A0089A1A4EEBC3017E2DA569A01C7919B10945((Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C *)(&V_4), /*hidden argument*/Enumerator_get_Current_m88A0089A1A4EEBC3017E2DA569A01C7919B10945_RuntimeMethod_var);
			V_5 = L_18;
			PieceContainerControlU5BU5D_t8271AFDBD72A0A282B711DD87B1DF9DC49540B51* L_19 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_allSpots_0();
			int32_t L_20 = V_5;
			int32_t L_21 = L_20;
			PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 * L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
			V_2 = ((SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 *)CastclassClass((RuntimeObject*)L_22, SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86_il2cpp_TypeInfo_var));
			SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * L_23 = V_2;
			bool L_24 = L_23->get_controlled_11();
			if (!L_24)
			{
				goto IL_0090;
			}
		}

IL_007f:
		{
			SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * L_25 = V_2;
			bool L_26 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)L_25)->get_isBlack_10();
			bool L_27 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_isBlack_10();
			if ((!(((uint32_t)L_26) == ((uint32_t)L_27))))
			{
				goto IL_012a;
			}
		}

IL_0090:
		{
			bool L_28 = V_0;
			if (!L_28)
			{
				goto IL_00bb;
			}
		}

IL_0093:
		{
			BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_29 = ___rollsUsed3;
			int32_t L_30 = V_3;
			int32_t L_31 = ((int32_t)il2cpp_codegen_subtract((int32_t)3, (int32_t)L_30));
			uint8_t L_32 = (uint8_t)(L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
			if (L_32)
			{
				goto IL_012a;
			}
		}

IL_009e:
		{
			List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_33 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_actualPossibleMoves_2();
			int32_t L_34 = List_1_get_Count_m7984BA6C664D8EAE284C168D0568FE2B9136A033(L_33, /*hidden argument*/List_1_get_Count_m7984BA6C664D8EAE284C168D0568FE2B9136A033_RuntimeMethod_var);
			int32_t L_35 = V_3;
			if ((!(((uint32_t)L_34) == ((uint32_t)L_35))))
			{
				goto IL_012a;
			}
		}

IL_00ac:
		{
			List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_36 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_actualPossibleMoves_2();
			int32_t L_37 = V_5;
			List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_36, L_37, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
			goto IL_012a;
		}

IL_00bb:
		{
			SpotControl_t48C3FEB9C10D69105B4B32CBBDC047DDBD10AB86 * L_38 = V_2;
			int32_t L_39 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)L_38)->get_position_8();
			int32_t L_40 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_position_8();
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
			int32_t L_41 = Mathf_Abs_mC7DD2FB3789B5409055836D0E7D8227AD2099FDC(((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)L_40)), /*hidden argument*/NULL);
			V_6 = L_41;
			int32_t L_42 = V_6;
			int32_t L_43 = ___roll11;
			if ((!(((uint32_t)L_42) == ((uint32_t)L_43))))
			{
				goto IL_00e9;
			}
		}

IL_00d4:
		{
			BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_44 = ___rollsUsed3;
			int32_t L_45 = 0;
			uint8_t L_46 = (uint8_t)(L_44)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_45));
			if (L_46)
			{
				goto IL_00e9;
			}
		}

IL_00da:
		{
			List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_47 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_actualPossibleMoves_2();
			int32_t L_48 = V_5;
			List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_47, L_48, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
			goto IL_012a;
		}

IL_00e9:
		{
			int32_t L_49 = V_6;
			int32_t L_50 = ___roll22;
			if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
			{
				goto IL_0103;
			}
		}

IL_00ee:
		{
			BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_51 = ___rollsUsed3;
			int32_t L_52 = 1;
			uint8_t L_53 = (uint8_t)(L_51)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_52));
			if (L_53)
			{
				goto IL_0103;
			}
		}

IL_00f4:
		{
			List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_54 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_actualPossibleMoves_2();
			int32_t L_55 = V_5;
			List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_54, L_55, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
			goto IL_012a;
		}

IL_0103:
		{
			List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_56 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_actualPossibleMoves_2();
			int32_t L_57 = List_1_get_Count_m7984BA6C664D8EAE284C168D0568FE2B9136A033(L_56, /*hidden argument*/List_1_get_Count_m7984BA6C664D8EAE284C168D0568FE2B9136A033_RuntimeMethod_var);
			if ((((int32_t)L_57) <= ((int32_t)0)))
			{
				goto IL_012a;
			}
		}

IL_0111:
		{
			BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_58 = ___rollsUsed3;
			int32_t L_59 = 0;
			uint8_t L_60 = (uint8_t)(L_58)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_59));
			if (L_60)
			{
				goto IL_012a;
			}
		}

IL_0117:
		{
			BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_61 = ___rollsUsed3;
			int32_t L_62 = 1;
			uint8_t L_63 = (uint8_t)(L_61)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_62));
			if (L_63)
			{
				goto IL_012a;
			}
		}

IL_011d:
		{
			List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_64 = ((PieceContainerControl_tB1A99C90399608DA760C39AB6E8185F69D941313 *)__this)->get_actualPossibleMoves_2();
			int32_t L_65 = V_5;
			List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_64, L_65, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		}

IL_012a:
		{
			int32_t L_66 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1));
		}

IL_012e:
		{
			bool L_67 = Enumerator_MoveNext_m113E33A615748C69D63D1245F5FD820B4B3D43F7((Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C *)(&V_4), /*hidden argument*/Enumerator_MoveNext_m113E33A615748C69D63D1245F5FD820B4B3D43F7_RuntimeMethod_var);
			if (L_67)
			{
				goto IL_005f;
			}
		}

IL_013a:
		{
			IL2CPP_LEAVE(0x14A, FINALLY_013c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_013c;
	}

FINALLY_013c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mBA3B0129DABD8274AF3497CC93E6A2DEA0A23892((Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C *)(&V_4), /*hidden argument*/Enumerator_Dispose_mBA3B0129DABD8274AF3497CC93E6A2DEA0A23892_RuntimeMethod_var);
		IL2CPP_END_FINALLY(316)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(316)
	{
		IL2CPP_JUMP_TBL(0x14A, IL_014a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_014a:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
