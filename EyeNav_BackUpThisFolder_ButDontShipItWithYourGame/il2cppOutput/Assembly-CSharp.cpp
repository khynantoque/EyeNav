#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// MathNet.Numerics.LinearAlgebra.Factorization.Cholesky`1<System.Double>
struct Cholesky_1_t1FD2C6EAE804ACF062E3034A45A8D1004519525C;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// MathNet.Numerics.LinearAlgebra.MatrixBuilder`1<System.Double>
struct MatrixBuilder_1_tB265D6E40F33E9A311724A5F2EDB8C5F71621C2A;
// MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1<System.Double>
struct MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D;
// MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>
struct Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// MathNet.Numerics.LinearAlgebra.VectorBuilder`1<System.Double>
struct VectorBuilder_1_t34BF51B1BA3FAD2DE7DBD4338633B682596A4C13;
// MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<System.Double>
struct VectorStorage_1_tDA8D7E5D388F74EAAEB66D38965020C7F1534E8F;
// MathNet.Numerics.LinearAlgebra.Vector`1<System.Double>
struct Vector_1_tF1970E55547CCC30E535F13A9D4129F783470D30;
// MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>[]
struct Matrix_1U5BU5D_tEB5BF32A4424DABA97DC27B01601E40DF7500932;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Double[][]
struct DoubleU5BU5DU5BU5D_t9D0B504F1F6C6D8C3DC912FFA38783B9CF0FC076;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Light[]
struct LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// UnityEngine.MeshFilter[]
struct MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// System.Double[,]
struct DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// BLE
struct BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE;
// BLECalibration
struct BLECalibration_tE0AABD5BBBD7F98BA897828D09DDCA8504E32003;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// Assets.Scripts.CalibrationData
struct CalibrationData_t0CEDFF596C17FEE4BD89AAD8E7B40E7DD0A3F22A;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Assets.Scripts.DataSaver
struct DataSaver_t37690A875FF0342BE729D8942D0ED64DCE74E964;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.EventSystems.IScrollHandler
struct IScrollHandler_t762CB73017D561E11CF6759ED9FD8C9F24B3D13F;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// Menu
struct Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.AI.NavMeshPath
struct NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7;
// Navigation
struct Navigation_t9F99316B323A490310A05E96F2C7460595A0EC02;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// SmoothCameraOrbit
struct SmoothCameraOrbit_t0CFEAEE46ACD3D6163F398CB2A1F0BDEE5BAF604;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F;
// TMPro.TMP_InputValidator
struct TMP_InputValidator_t3429AF61284AE19180C3FB81C0C7D2F90165EA98;
// TMPro.TMP_ScrollbarEventHandler
struct TMP_ScrollbarEventHandler_t84C389ED6800977DAEA8C025E18C9F3321888F4D;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// UnityEngine.TextMesh
struct TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnscentedKalmanFilter.UKF
struct UKF_tE1B7CA051082C54F4E8512986317A8B34062932A;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnluckAnimatedMesh
struct UnluckAnimatedMesh_tC8F263959EBB80897E44E8534FC4B91D07F7C653;
// UnluckFPS
struct UnluckFPS_tC3700EF0AB8332E2DF0755D4BE24ED8534D21EF9;
// UnluckFlagGUI
struct UnluckFlagGUI_t81F54AD0354B397303687FCAE746A1EC7EB03FC4;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// BLE/<GetRssiData>d__38
struct U3CGetRssiDataU3Ed__38_tB0D19F866CD0E9454FD768ED2688FB1532BC3558;
// BLE/<UpdateRSSIAndDistance>d__29
struct U3CUpdateRSSIAndDistanceU3Ed__29_tB7D6910C7FF8AE6C8618C75C15FA67CF1E9BD2E1;
// BLE/Kalman
struct Kalman_t53CE1FE5266E7825502B6208352135AD745E081A;
// BLECalibration/<CalibrateWaitIndicator>d__35
struct U3CCalibrateWaitIndicatorU3Ed__35_tBB064D08617B7B22EB025D981B39AAE4AC494713;
// BLECalibration/<UpdateUserPosition>d__36
struct U3CUpdateUserPositionU3Ed__36_t871E40FC6CB7015D9B15388235F918DAA1AD9816;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// TMPro.TMP_InputField/OnChangeEvent
struct OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D;
// TMPro.TMP_InputField/OnValidateInput
struct OnValidateInput_t88ECDC5C12A807AF2A5761369563B0FAA6A25530;
// TMPro.TMP_InputField/SelectionEvent
struct SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119;
// TMPro.TMP_InputField/SubmitEvent
struct SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500;
// TMPro.TMP_InputField/TextSelectionEvent
struct TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401;
// TMPro.TMP_InputField/TouchScreenKeyboardEvent
struct TouchScreenKeyboardEvent_tB9BEBEF5D6F2B52547EF3861FF437AC25BC06AF1;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CalibrationData_t0CEDFF596C17FEE4BD89AAD8E7B40E7DD0A3F22A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix_1U5BU5D_tEB5BF32A4424DABA97DC27B01601E40DF7500932_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCalibrateWaitIndicatorU3Ed__35_tBB064D08617B7B22EB025D981B39AAE4AC494713_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetRssiDataU3Ed__38_tB0D19F866CD0E9454FD768ED2688FB1532BC3558_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CUpdateRSSIAndDistanceU3Ed__29_tB7D6910C7FF8AE6C8618C75C15FA67CF1E9BD2E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CUpdateUserPositionU3Ed__36_t871E40FC6CB7015D9B15388235F918DAA1AD9816_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnluckAnimatedMesh_tC8F263959EBB80897E44E8534FC4B91D07F7C653_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral037157E5605C24D464430AB2FAAD2DC30489D49C;
IL2CPP_EXTERN_C String_t* _stringLiteral07F5E183BDC5EF824F759265E5E7FE4D14019E30;
IL2CPP_EXTERN_C String_t* _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40;
IL2CPP_EXTERN_C String_t* _stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A;
IL2CPP_EXTERN_C String_t* _stringLiteral0D1F2A5F700DC47A3F58F9EC4CEBF17C1B07E796;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral1DE387F1A669669BC9F57D74FC455F344F675C98;
IL2CPP_EXTERN_C String_t* _stringLiteral216233785C4F99F9CB70614B8FB4769281FA4344;
IL2CPP_EXTERN_C String_t* _stringLiteral233CCF10B9B3B854690C92DE74642E689F60D4BD;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral26CA1D5E2F6785F2DC7432A0B6AD44F0E0349443;
IL2CPP_EXTERN_C String_t* _stringLiteral271231300CD079FDDEDEC87538EB8B13373F899A;
IL2CPP_EXTERN_C String_t* _stringLiteral29E3862E038EB6273FF8D6F9C1BD1085A99211B9;
IL2CPP_EXTERN_C String_t* _stringLiteral2BEFA70C81191F9770BEFF3ED4991383DED13540;
IL2CPP_EXTERN_C String_t* _stringLiteral3296D03265769C74AD0DBF1338AEBE79680388AA;
IL2CPP_EXTERN_C String_t* _stringLiteral349DBC13EB72DD485612398752C9376E77374D26;
IL2CPP_EXTERN_C String_t* _stringLiteral36967F33A1482179FE45CD9CCC3AE6241AA43F85;
IL2CPP_EXTERN_C String_t* _stringLiteral36BA7B0458B843FB2185BAF7BE67B534C80DCDCE;
IL2CPP_EXTERN_C String_t* _stringLiteral38CFAF98E70679BD743272065C8FD52BDB964B10;
IL2CPP_EXTERN_C String_t* _stringLiteral3F6996195B4FA772AC7CCBE4ABECCF7BB2701DA1;
IL2CPP_EXTERN_C String_t* _stringLiteral49A1547E04CA1E309B633B4E8199448F2BA4708D;
IL2CPP_EXTERN_C String_t* _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C;
IL2CPP_EXTERN_C String_t* _stringLiteral54F48823060A5886D12558C4BBB0CDBB0E83F58A;
IL2CPP_EXTERN_C String_t* _stringLiteral5A6033D73461153FAF18BE29D9834398E2C7CB90;
IL2CPP_EXTERN_C String_t* _stringLiteral5D977376715BE7FC944C7838B1A40D855E0A6FE6;
IL2CPP_EXTERN_C String_t* _stringLiteral67D04C8C2940A66F68D962200C0C69165895FB76;
IL2CPP_EXTERN_C String_t* _stringLiteral69D7CA1D013F362856ABF3E77F3EF2DDAF0219F2;
IL2CPP_EXTERN_C String_t* _stringLiteral6D2D60FB81DB361B60B9512761B3ED9FF250BB96;
IL2CPP_EXTERN_C String_t* _stringLiteral6E73CE009CAAA771551FC8DDAB625469C05E7630;
IL2CPP_EXTERN_C String_t* _stringLiteral7383F125181D1F0F91F6DA8FBCF63DE945B71638;
IL2CPP_EXTERN_C String_t* _stringLiteral7BE74EEE9B4F4BB93EF6D7EDF612BBFEDA23BE6D;
IL2CPP_EXTERN_C String_t* _stringLiteral7C2E9B3825A0A504413F64A4E5CFD04EDFFAE689;
IL2CPP_EXTERN_C String_t* _stringLiteral7CD1BDB935F488B3027A947408A0D33D52E5F07F;
IL2CPP_EXTERN_C String_t* _stringLiteral7D8264CB40089C3FAE86DDF85994BDFA2F83A985;
IL2CPP_EXTERN_C String_t* _stringLiteral7E72B120FA21DA1374ED0C2A1C9A70CFE86A3BE5;
IL2CPP_EXTERN_C String_t* _stringLiteral85BBD7CA1DF1206B96E452298DF404384EA3D7E4;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral89D4E55115B28A1B9C26F4D9EEB95AA231CC0D0F;
IL2CPP_EXTERN_C String_t* _stringLiteral925FA2B3454C261A87152E975E15AC0B6C9D5961;
IL2CPP_EXTERN_C String_t* _stringLiteralA0B06C7B30D1046A092C0DFCBB20E992485B05F1;
IL2CPP_EXTERN_C String_t* _stringLiteralA42B8EEE824B84FAB4691F67846B562FB00D2690;
IL2CPP_EXTERN_C String_t* _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469;
IL2CPP_EXTERN_C String_t* _stringLiteralB022A5003448DF63D79A3B83420B3104B35878CB;
IL2CPP_EXTERN_C String_t* _stringLiteralB17BCCF10425CB8601C7FC19E815AE0FC87BDB6A;
IL2CPP_EXTERN_C String_t* _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF;
IL2CPP_EXTERN_C String_t* _stringLiteralB5A302AEE00EEE59F229C71E024ABDDA9A7C1AD3;
IL2CPP_EXTERN_C String_t* _stringLiteralBE74E39F827005BA0C69B4D10D390B5F36486699;
IL2CPP_EXTERN_C String_t* _stringLiteralC71940386D01AADD017DAB6D190DD55682241E35;
IL2CPP_EXTERN_C String_t* _stringLiteralCA893F1C80774ABB0B3AB07B5C39C078EF958FEF;
IL2CPP_EXTERN_C String_t* _stringLiteralD126ED6792067946E651D9ADE1FBF42D7961FB1A;
IL2CPP_EXTERN_C String_t* _stringLiteralD41D89DAD98E1F1783260FD0A5A774F557A05F0F;
IL2CPP_EXTERN_C String_t* _stringLiteralD473B4E90A57D9F95635FB0438C2CBA39CE564F1;
IL2CPP_EXTERN_C String_t* _stringLiteralD4F630AC50776816C3484134FD42787CF301FCCB;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDF64835219848A1CE4248083C4A62865168070EE;
IL2CPP_EXTERN_C String_t* _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2;
IL2CPP_EXTERN_C String_t* _stringLiteralE1F5BF0254F30D219F3F71E58DE873429CD66ED8;
IL2CPP_EXTERN_C String_t* _stringLiteralEA9F78119E7B7AA30C2F7CE932988E52F2437C59;
IL2CPP_EXTERN_C String_t* _stringLiteralEB44D3E7B623337A8C451DAE1E161B353BEF373C;
IL2CPP_EXTERN_C String_t* _stringLiteralEF7C8094E5E17FF0F29E2B7D3FEAAAFD5642ECCD;
IL2CPP_EXTERN_C String_t* _stringLiteralF13C182938BF2DD1801786E329EF9182C9122C29;
IL2CPP_EXTERN_C String_t* _stringLiteralF2CD76BF01929B3DA1020F4F6CB3E1DB517C5373;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0;
IL2CPP_EXTERN_C String_t* _stringLiteralFCBD0353DF0ADF38466DC7D4EAAE9F8FDBF09BA7;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisDoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_m15069A175D7E52353A996F903290EEBEE16BC72D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Cholesky_1_get_Factor_m0DAB4879B1C18A503BC02DB1055250A8611C5CA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mB98D37FCCC2A4EA5C272368FDF5442826FA876FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_m6D2EA454E808E4854EA6AE50E04BF626BFFD47B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSaver_loadData_TisCalibrationData_t0CEDFF596C17FEE4BD89AAD8E7B40E7DD0A3F22A_m061A396CF4E6BA9882242FFB08C3797EB0C70917_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSaver_saveData_TisCalibrationData_t0CEDFF596C17FEE4BD89AAD8E7B40E7DD0A3F22A_m89A89775403C94AF93B0B2A8A3A5FFBFB23E4715_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisUnluckAnimatedMesh_tC8F263959EBB80897E44E8534FC4B91D07F7C653_m8B1554743E92E25578F5F4F49676CB2BA0B6CC0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MatrixBuilder_1_Dense_m5C6670AD03341F052CEA2FC369B0523404CAB25E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MatrixBuilder_1_Dense_m8FAC4AF7D0A03A88DC460B3A4967E55D7BBA2DB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MatrixBuilder_1_Diagonal_m685C3C909B3B190F8E54E3AA838C500FB8EC1D68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MatrixBuilder_1_Diagonal_m7704C7B7D5C804EE6D3E8CE0C3D8341EB0156F9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MatrixBuilder_1_Random_mE86256A934CABC20E1E5190C0C581A52DBF453C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Matrix_1_Add_m7B118E356BBF5361F68E5DCEC5C7F5B46251C973_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Matrix_1_CopyTo_mAF5B54FA1EBC56F6B5457C227E015ED05A7035AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Matrix_1_Multiply_m2C0D614F20ECBB307505AD1CDC6C2DCCB6DC806C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Matrix_1_Multiply_mD8771B97B2AD595EF945F4CD71E33EC09AD78D07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Matrix_1_Row_m3D5D460C25A6041F416C610509897578B9099D2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Matrix_1_SetColumn_mE9C2F6F335285A39921A92DBAF324B7D2A182248_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Matrix_1_SetSubMatrix_m38EEF6D1CC313F9C27FA420926BBAA7137C460D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Matrix_1_Subtract_m844BCEDE31EFBDD315CE853A8E889DE6CF2D2859_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Matrix_1_ToArray_m0F3DB5D9135BA3556C288F91992B1B0C390AAF72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Matrix_1_ToColumnArrays_m36416AB5E61BDFD15C61D67593623CD11638DBDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Matrix_1_Transpose_m7A760B1D7F8E54788932F964F865D0398171D74A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Matrix_1_get_ColumnCount_mA9469577A4E8459338A621B987E653D241A6883B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Matrix_1_get_Item_m9AC37D09D678515B98CFC7C5A3BBECAC3067D9DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Matrix_1_get_RowCount_m9B54DCE02A3829F5EBD4D5D7ACF2615FCBA2A7E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Matrix_1_op_Multiply_m39042F5DB6C9BCAC26059652232B314517464584_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Matrix_1_set_Item_mC97D847F561C86DD3856B0FA098D2D0529728B67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCalibrateWaitIndicatorU3Ed__35_System_Collections_IEnumerator_Reset_m2B5D46524DF4DFD6456F26EB1379790D712D7AFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetRssiDataU3Ed__38_System_Collections_IEnumerator_Reset_m2F42C8A7B40CD08820101ED7B35FAA35A05B8E82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CUpdateRSSIAndDistanceU3Ed__29_System_Collections_IEnumerator_Reset_m323DA1BF962D0FCE41D443709C86B110689000E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CUpdateUserPositionU3Ed__36_System_Collections_IEnumerator_Reset_m1FDE05FE65CA79D95092C6ACC8B1F08E86528B1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector_1_ToArray_m4EEE494FD462F6FD7AE5D156E3480094B1467267_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2;

struct Matrix_1U5BU5D_tEB5BF32A4424DABA97DC27B01601E40DF7500932;
struct DoubleU5BU5DU5BU5D_t9D0B504F1F6C6D8C3DC912FFA38783B9CF0FC076;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990;
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
struct MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// MathNet.Numerics.LinearAlgebra.Factorization.Cholesky`1<System.Double>
struct Cholesky_1_t1FD2C6EAE804ACF062E3034A45A8D1004519525C  : public RuntimeObject
{
	// MathNet.Numerics.LinearAlgebra.Matrix`1<T> MathNet.Numerics.LinearAlgebra.Factorization.Cholesky`1::<Factor>k__BackingField
	Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* ___U3CFactorU3Ek__BackingField_0;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// MathNet.Numerics.LinearAlgebra.MatrixBuilder`1<System.Double>
struct MatrixBuilder_1_tB265D6E40F33E9A311724A5F2EDB8C5F71621C2A  : public RuntimeObject
{
};

// MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1<System.Double>
struct MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D  : public RuntimeObject
{
	// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1::RowCount
	int32_t ___RowCount_1;
	// System.Int32 MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1::ColumnCount
	int32_t ___ColumnCount_2;
};

struct MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D_StaticFields
{
	// T MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1::Zero
	double ___Zero_0;
};

// MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>
struct Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9  : public RuntimeObject
{
	// MathNet.Numerics.LinearAlgebra.Storage.MatrixStorage`1<T> MathNet.Numerics.LinearAlgebra.Matrix`1::<Storage>k__BackingField
	MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D* ___U3CStorageU3Ek__BackingField_3;
	// System.Int32 MathNet.Numerics.LinearAlgebra.Matrix`1::<ColumnCount>k__BackingField
	int32_t ___U3CColumnCountU3Ek__BackingField_4;
	// System.Int32 MathNet.Numerics.LinearAlgebra.Matrix`1::<RowCount>k__BackingField
	int32_t ___U3CRowCountU3Ek__BackingField_5;
};

struct Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9_StaticFields
{
	// T MathNet.Numerics.LinearAlgebra.Matrix`1::One
	double ___One_0;
	// T MathNet.Numerics.LinearAlgebra.Matrix`1::Zero
	double ___Zero_1;
	// MathNet.Numerics.LinearAlgebra.MatrixBuilder`1<T> MathNet.Numerics.LinearAlgebra.Matrix`1::Build
	MatrixBuilder_1_tB265D6E40F33E9A311724A5F2EDB8C5F71621C2A* ___Build_2;
};

// MathNet.Numerics.LinearAlgebra.Vector`1<System.Double>
struct Vector_1_tF1970E55547CCC30E535F13A9D4129F783470D30  : public RuntimeObject
{
	// MathNet.Numerics.LinearAlgebra.Storage.VectorStorage`1<T> MathNet.Numerics.LinearAlgebra.Vector`1::<Storage>k__BackingField
	VectorStorage_1_tDA8D7E5D388F74EAAEB66D38965020C7F1534E8F* ___U3CStorageU3Ek__BackingField_3;
	// System.Int32 MathNet.Numerics.LinearAlgebra.Vector`1::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_4;
};

struct Vector_1_tF1970E55547CCC30E535F13A9D4129F783470D30_StaticFields
{
	// T MathNet.Numerics.LinearAlgebra.Vector`1::Zero
	double ___Zero_0;
	// T MathNet.Numerics.LinearAlgebra.Vector`1::One
	double ___One_1;
	// MathNet.Numerics.LinearAlgebra.VectorBuilder`1<T> MathNet.Numerics.LinearAlgebra.Vector`1::Build
	VectorBuilder_1_t34BF51B1BA3FAD2DE7DBD4338633B682596A4C13* ___Build_2;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};
struct Il2CppArrayBounds;

// Assets.Scripts.CalibrationData
struct CalibrationData_t0CEDFF596C17FEE4BD89AAD8E7B40E7DD0A3F22A  : public RuntimeObject
{
	// System.Single Assets.Scripts.CalibrationData::dx
	float ___dx_0;
	// System.Single Assets.Scripts.CalibrationData::dy
	float ___dy_1;
	// System.Single Assets.Scripts.CalibrationData::dz
	float ___dz_2;
	// System.Single Assets.Scripts.CalibrationData::ux
	float ___ux_3;
	// System.Single Assets.Scripts.CalibrationData::uy
	float ___uy_4;
	// System.Single Assets.Scripts.CalibrationData::uz
	float ___uz_5;
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// Assets.Scripts.DataSaver
struct DataSaver_t37690A875FF0342BE729D8942D0ED64DCE74E964  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnscentedKalmanFilter.UKF
struct UKF_tE1B7CA051082C54F4E8512986317A8B34062932A  : public RuntimeObject
{
	// System.Int32 UnscentedKalmanFilter.UKF::L
	int32_t ___L_0;
	// System.Int32 UnscentedKalmanFilter.UKF::m
	int32_t ___m_1;
	// System.Double UnscentedKalmanFilter.UKF::alpha
	double ___alpha_2;
	// System.Double UnscentedKalmanFilter.UKF::ki
	double ___ki_3;
	// System.Double UnscentedKalmanFilter.UKF::beta
	double ___beta_4;
	// System.Double UnscentedKalmanFilter.UKF::lambda
	double ___lambda_5;
	// System.Double UnscentedKalmanFilter.UKF::c
	double ___c_6;
	// MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double> UnscentedKalmanFilter.UKF::Wm
	Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* ___Wm_7;
	// MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double> UnscentedKalmanFilter.UKF::Wc
	Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* ___Wc_8;
	// MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double> UnscentedKalmanFilter.UKF::x
	Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* ___x_9;
	// MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double> UnscentedKalmanFilter.UKF::P
	Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* ___P_10;
	// System.Double UnscentedKalmanFilter.UKF::q
	double ___q_11;
	// System.Double UnscentedKalmanFilter.UKF::r
	double ___r_12;
	// MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double> UnscentedKalmanFilter.UKF::Q
	Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* ___Q_13;
	// MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double> UnscentedKalmanFilter.UKF::R
	Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* ___R_14;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// BLE/<GetRssiData>d__38
struct U3CGetRssiDataU3Ed__38_tB0D19F866CD0E9454FD768ED2688FB1532BC3558  : public RuntimeObject
{
	// System.Int32 BLE/<GetRssiData>d__38::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object BLE/<GetRssiData>d__38::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// BLE BLE/<GetRssiData>d__38::<>4__this
	BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* ___U3CU3E4__this_2;
};

// BLE/<UpdateRSSIAndDistance>d__29
struct U3CUpdateRSSIAndDistanceU3Ed__29_tB7D6910C7FF8AE6C8618C75C15FA67CF1E9BD2E1  : public RuntimeObject
{
	// System.Int32 BLE/<UpdateRSSIAndDistance>d__29::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object BLE/<UpdateRSSIAndDistance>d__29::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// BLE BLE/<UpdateRSSIAndDistance>d__29::<>4__this
	BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* ___U3CU3E4__this_2;
};

// BLE/Kalman
struct Kalman_t53CE1FE5266E7825502B6208352135AD745E081A  : public RuntimeObject
{
	// System.Int32 BLE/Kalman::trueRssi
	int32_t ___trueRssi_0;
};

// BLECalibration/<CalibrateWaitIndicator>d__35
struct U3CCalibrateWaitIndicatorU3Ed__35_tBB064D08617B7B22EB025D981B39AAE4AC494713  : public RuntimeObject
{
	// System.Int32 BLECalibration/<CalibrateWaitIndicator>d__35::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object BLECalibration/<CalibrateWaitIndicator>d__35::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// BLECalibration BLECalibration/<CalibrateWaitIndicator>d__35::<>4__this
	BLECalibration_tE0AABD5BBBD7F98BA897828D09DDCA8504E32003* ___U3CU3E4__this_2;
};

// BLECalibration/<UpdateUserPosition>d__36
struct U3CUpdateUserPositionU3Ed__36_t871E40FC6CB7015D9B15388235F918DAA1AD9816  : public RuntimeObject
{
	// System.Int32 BLECalibration/<UpdateUserPosition>d__36::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object BLECalibration/<UpdateUserPosition>d__36::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// BLECalibration BLECalibration/<UpdateUserPosition>d__36::<>4__this
	BLECalibration_tE0AABD5BBBD7F98BA897828D09DDCA8504E32003* ___U3CU3E4__this_2;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
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
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Single UnityEngine.WaitForSecondsRealtime::<waitTime>k__BackingField
	float ___U3CwaitTimeU3Ek__BackingField_0;
	// System.Single UnityEngine.WaitForSecondsRealtime::m_WaitUntilTime
	float ___m_WaitUntilTime_1;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.AI.NavMeshPath
struct NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AI.NavMeshPath::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Vector3[] UnityEngine.AI.NavMeshPath::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AI.NavMeshPath
struct NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___m_Corners_1;
};
// Native definition for COM marshalling of UnityEngine.AI.NavMeshPath
struct NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___m_Corners_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.TextMesh
struct TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;
};

// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// BLE
struct BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject BLE::beacon1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___beacon1_4;
	// UnityEngine.GameObject BLE::beacon2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___beacon2_5;
	// UnityEngine.GameObject BLE::beacon3
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___beacon3_6;
	// UnityEngine.GameObject BLE::beacon4
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___beacon4_7;
	// TMPro.TMP_Text BLE::rssi1
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___rssi1_8;
	// TMPro.TMP_Text BLE::rssi2
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___rssi2_9;
	// TMPro.TMP_Text BLE::rssi3
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___rssi3_10;
	// TMPro.TMP_Text BLE::rssi4
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___rssi4_11;
	// TMPro.TMP_Text BLE::dist1
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___dist1_12;
	// TMPro.TMP_Text BLE::dist2
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___dist2_13;
	// TMPro.TMP_Text BLE::dist3
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___dist3_14;
	// TMPro.TMP_Text BLE::dist4
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___dist4_15;
	// TMPro.TMP_InputField BLE::nFactor
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___nFactor_16;
	// TMPro.TMP_InputField BLE::observeTime
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___observeTime_17;
	// TMPro.TMP_InputField BLE::logArea
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___logArea_18;
	// UnityEngine.UI.Toggle BLE::toggleFilteredRssi
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___toggleFilteredRssi_19;
	// UnityEngine.GameObject BLE::userObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___userObj_20;
	// UnityEngine.AndroidJavaObject BLE::_pluginActivity
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ____pluginActivity_21;
	// System.Double BLE::posBeacon1X
	double ___posBeacon1X_22;
	// System.Double BLE::posBeacon1Y
	double ___posBeacon1Y_23;
	// System.Double BLE::posBeacon2X
	double ___posBeacon2X_24;
	// System.Double BLE::posBeacon2Y
	double ___posBeacon2Y_25;
	// System.Double BLE::posBeacon3X
	double ___posBeacon3X_26;
	// System.Double BLE::posBeacon3Y
	double ___posBeacon3Y_27;
	// System.Double BLE::posBeacon4X
	double ___posBeacon4X_28;
	// System.Double BLE::posBeacon4Y
	double ___posBeacon4Y_29;
	// System.Double BLE::time
	double ___time_30;
	// System.Single BLE::counter
	float ___counter_31;
};

// BLECalibration
struct BLECalibration_tE0AABD5BBBD7F98BA897828D09DDCA8504E32003  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject BLECalibration::objUserDestination
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___objUserDestination_4;
	// UnityEngine.GameObject BLECalibration::objUserPosition
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___objUserPosition_5;
	// UnityEngine.GameObject BLECalibration::objBeacon1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___objBeacon1_6;
	// UnityEngine.GameObject BLECalibration::objBeacon2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___objBeacon2_7;
	// UnityEngine.GameObject BLECalibration::objBeacon3
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___objBeacon3_8;
	// UnityEngine.GameObject BLECalibration::objBeacon4
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___objBeacon4_9;
	// UnityEngine.UI.Button BLECalibration::btnStartNavigation
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btnStartNavigation_10;
	// UnityEngine.UI.Button BLECalibration::btnConfirmPosition
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btnConfirmPosition_11;
	// UnityEngine.UI.Button BLECalibration::btnConfirmDestination
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btnConfirmDestination_12;
	// TMPro.TMP_Text BLECalibration::txtWaitLabel
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___txtWaitLabel_13;
	// System.Double BLECalibration::posBeacon1X
	double ___posBeacon1X_14;
	// System.Double BLECalibration::posBeacon1Y
	double ___posBeacon1Y_15;
	// System.Double BLECalibration::posBeacon2X
	double ___posBeacon2X_16;
	// System.Double BLECalibration::posBeacon2Y
	double ___posBeacon2Y_17;
	// System.Double BLECalibration::posBeacon3X
	double ___posBeacon3X_18;
	// System.Double BLECalibration::posBeacon3Y
	double ___posBeacon3Y_19;
	// System.Double BLECalibration::posBeacon4X
	double ___posBeacon4X_20;
	// System.Double BLECalibration::posBeacon4Y
	double ___posBeacon4Y_21;
	// System.Single BLECalibration::rssi1
	float ___rssi1_22;
	// System.Single BLECalibration::rssi2
	float ___rssi2_23;
	// System.Single BLECalibration::rssi3
	float ___rssi3_24;
	// System.Single BLECalibration::rssi4
	float ___rssi4_25;
	// System.Double BLECalibration::frssi1
	double ___frssi1_26;
	// System.Double BLECalibration::frssi2
	double ___frssi2_27;
	// System.Double BLECalibration::frssi3
	double ___frssi3_28;
	// System.Double BLECalibration::frssi4
	double ___frssi4_29;
	// System.Boolean BLECalibration::isConfirmedPosition
	bool ___isConfirmedPosition_30;
	// System.Boolean BLECalibration::isConfirmedDestination
	bool ___isConfirmedDestination_31;
	// System.Boolean BLECalibration::isConfirmPositionVisible
	bool ___isConfirmPositionVisible_32;
	// System.Int32 BLECalibration::elipsisCounter
	int32_t ___elipsisCounter_33;
	// UnityEngine.AndroidJavaObject BLECalibration::_pluginActivity
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ____pluginActivity_34;
	// System.Int32 BLECalibration::counter
	int32_t ___counter_35;
};

// Menu
struct Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Navigation
struct Navigation_t9F99316B323A490310A05E96F2C7460595A0EC02  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera Navigation::topDownCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___topDownCamera_4;
	// UnityEngine.GameObject Navigation::objDestination
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___objDestination_5;
	// UnityEngine.AI.NavMeshPath Navigation::path
	NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* ___path_6;
	// UnityEngine.LineRenderer Navigation::line
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___line_7;
};

// SmoothCameraOrbit
struct SmoothCameraOrbit_t0CFEAEE46ACD3D6163F398CB2A1F0BDEE5BAF604  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform SmoothCameraOrbit::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_4;
	// UnityEngine.Vector3 SmoothCameraOrbit::targetOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetOffset_5;
	// System.Single SmoothCameraOrbit::distance
	float ___distance_6;
	// System.Single SmoothCameraOrbit::maxDistance
	float ___maxDistance_7;
	// System.Single SmoothCameraOrbit::minDistance
	float ___minDistance_8;
	// System.Single SmoothCameraOrbit::xSpeed
	float ___xSpeed_9;
	// System.Single SmoothCameraOrbit::ySpeed
	float ___ySpeed_10;
	// System.Int32 SmoothCameraOrbit::yMinLimit
	int32_t ___yMinLimit_11;
	// System.Int32 SmoothCameraOrbit::yMaxLimit
	int32_t ___yMaxLimit_12;
	// System.Int32 SmoothCameraOrbit::zoomRate
	int32_t ___zoomRate_13;
	// System.Single SmoothCameraOrbit::panSpeed
	float ___panSpeed_14;
	// System.Single SmoothCameraOrbit::zoomDampening
	float ___zoomDampening_15;
	// System.Single SmoothCameraOrbit::autoRotate
	float ___autoRotate_16;
	// System.Single SmoothCameraOrbit::autoRotateSpeed
	float ___autoRotateSpeed_17;
	// System.Single SmoothCameraOrbit::xDeg
	float ___xDeg_18;
	// System.Single SmoothCameraOrbit::yDeg
	float ___yDeg_19;
	// System.Single SmoothCameraOrbit::currentDistance
	float ___currentDistance_20;
	// System.Single SmoothCameraOrbit::desiredDistance
	float ___desiredDistance_21;
	// UnityEngine.Quaternion SmoothCameraOrbit::currentRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___currentRotation_22;
	// UnityEngine.Quaternion SmoothCameraOrbit::desiredRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___desiredRotation_23;
	// UnityEngine.Quaternion SmoothCameraOrbit::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_24;
	// UnityEngine.Vector3 SmoothCameraOrbit::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_25;
	// System.Single SmoothCameraOrbit::idleTimer
	float ___idleTimer_26;
	// System.Single SmoothCameraOrbit::idleSmooth
	float ___idleSmooth_27;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnluckAnimatedMesh
struct UnluckAnimatedMesh_tC8F263959EBB80897E44E8534FC4B91D07F7C653  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.MeshFilter[] UnluckAnimatedMesh::meshCache
	MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA* ___meshCache_4;
	// UnityEngine.Transform UnluckAnimatedMesh::meshCached
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___meshCached_5;
	// UnityEngine.Transform UnluckAnimatedMesh::meshContainerFBX
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___meshContainerFBX_6;
	// System.Single UnluckAnimatedMesh::playSpeed
	float ___playSpeed_7;
	// System.Single UnluckAnimatedMesh::playSpeedRandom
	float ___playSpeedRandom_8;
	// System.Boolean UnluckAnimatedMesh::randomSpeedLoop
	bool ___randomSpeedLoop_9;
	// System.Single UnluckAnimatedMesh::currentSpeed
	float ___currentSpeed_10;
	// System.Single UnluckAnimatedMesh::currentFrame
	float ___currentFrame_11;
	// System.Int32 UnluckAnimatedMesh::meshCacheCount
	int32_t ___meshCacheCount_12;
	// UnityEngine.MeshFilter UnluckAnimatedMesh::meshFilter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___meshFilter_13;
	// UnityEngine.Renderer UnluckAnimatedMesh::rendererComponent
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___rendererComponent_14;
	// System.Single UnluckAnimatedMesh::updateInterval
	float ___updateInterval_15;
	// System.Boolean UnluckAnimatedMesh::randomRotateX
	bool ___randomRotateX_16;
	// System.Boolean UnluckAnimatedMesh::randomRotateY
	bool ___randomRotateY_17;
	// System.Boolean UnluckAnimatedMesh::randomRotateZ
	bool ___randomRotateZ_18;
	// System.Boolean UnluckAnimatedMesh::randomStartFrame
	bool ___randomStartFrame_19;
	// System.Boolean UnluckAnimatedMesh::randomRotateLoop
	bool ___randomRotateLoop_20;
	// System.Boolean UnluckAnimatedMesh::loop
	bool ___loop_21;
	// System.Boolean UnluckAnimatedMesh::pingPong
	bool ___pingPong_22;
	// System.Boolean UnluckAnimatedMesh::playOnAwake
	bool ___playOnAwake_23;
	// UnityEngine.Vector2 UnluckAnimatedMesh::randomStartDelay
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___randomStartDelay_24;
	// System.Single UnluckAnimatedMesh::startDelay
	float ___startDelay_25;
	// System.Single UnluckAnimatedMesh::startDelayCounter
	float ___startDelayCounter_26;
	// System.Boolean UnluckAnimatedMesh::pingPongToggle
	bool ___pingPongToggle_28;
	// UnityEngine.Transform UnluckAnimatedMesh::transformCache
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transformCache_29;
	// System.Single UnluckAnimatedMesh::delta
	float ___delta_30;
};

struct UnluckAnimatedMesh_tC8F263959EBB80897E44E8534FC4B91D07F7C653_StaticFields
{
	// System.Single UnluckAnimatedMesh::updateSeed
	float ___updateSeed_27;
};

// UnluckFPS
struct UnluckFPS_tC3700EF0AB8332E2DF0755D4BE24ED8534D21EF9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.TextMesh UnluckFPS::_textMesh
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ____textMesh_4;
	// System.Single UnluckFPS::updateInterval
	float ___updateInterval_5;
	// System.Single UnluckFPS::accum
	float ___accum_6;
	// System.Int32 UnluckFPS::frames
	int32_t ___frames_7;
	// System.Single UnluckFPS::timeleft
	float ___timeleft_8;
};

// UnluckFlagGUI
struct UnluckFlagGUI_t81F54AD0354B397303687FCAE746A1EC7EB03FC4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] UnluckFlagGUI::prefabs
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___prefabs_4;
	// UnityEngine.Material[] UnluckFlagGUI::bgrs
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___bgrs_5;
	// UnityEngine.Light[] UnluckFlagGUI::lights
	LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___lights_6;
	// UnityEngine.GameObject UnluckFlagGUI::nextButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___nextButton_7;
	// UnityEngine.GameObject UnluckFlagGUI::prevButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prevButton_8;
	// UnityEngine.GameObject UnluckFlagGUI::bgrButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bgrButton_9;
	// UnityEngine.GameObject UnluckFlagGUI::lightButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___lightButton_10;
	// UnityEngine.GameObject UnluckFlagGUI::texturePreview
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___texturePreview_11;
	// UnityEngine.GameObject UnluckFlagGUI::activeObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___activeObj_12;
	// System.Int32 UnluckFlagGUI::counter
	int32_t ___counter_13;
	// System.Int32 UnluckFlagGUI::bCounter
	int32_t ___bCounter_14;
	// System.Int32 UnluckFlagGUI::lCounter
	int32_t ___lCounter_15;
	// UnityEngine.TextMesh UnluckFlagGUI::txt
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___txt_16;
	// UnityEngine.TextMesh UnluckFlagGUI::debug
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___debug_17;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard TMPro.TMP_InputField::m_SoftKeyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_SoftKeyboard_20;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_22;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextViewport
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_TextViewport_23;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextComponentRectMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_TextComponentRectMask_24;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextViewportRectMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_TextViewportRectMask_25;
	// UnityEngine.Rect TMPro.TMP_InputField::m_CachedViewportRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_CachedViewportRect_26;
	// TMPro.TMP_Text TMPro.TMP_InputField::m_TextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_TextComponent_27;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextComponentRectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_TextComponentRectTransform_28;
	// UnityEngine.UI.Graphic TMPro.TMP_InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_29;
	// UnityEngine.UI.Scrollbar TMPro.TMP_InputField::m_VerticalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_VerticalScrollbar_30;
	// TMPro.TMP_ScrollbarEventHandler TMPro.TMP_InputField::m_VerticalScrollbarEventHandler
	TMP_ScrollbarEventHandler_t84C389ED6800977DAEA8C025E18C9F3321888F4D* ___m_VerticalScrollbarEventHandler_31;
	// System.Boolean TMPro.TMP_InputField::m_IsDrivenByLayoutComponents
	bool ___m_IsDrivenByLayoutComponents_32;
	// UnityEngine.UI.LayoutGroup TMPro.TMP_InputField::m_LayoutGroup
	LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE* ___m_LayoutGroup_33;
	// UnityEngine.EventSystems.IScrollHandler TMPro.TMP_InputField::m_IScrollHandlerParent
	RuntimeObject* ___m_IScrollHandlerParent_34;
	// System.Single TMPro.TMP_InputField::m_ScrollPosition
	float ___m_ScrollPosition_35;
	// System.Single TMPro.TMP_InputField::m_ScrollSensitivity
	float ___m_ScrollSensitivity_36;
	// TMPro.TMP_InputField/ContentType TMPro.TMP_InputField::m_ContentType
	int32_t ___m_ContentType_37;
	// TMPro.TMP_InputField/InputType TMPro.TMP_InputField::m_InputType
	int32_t ___m_InputType_38;
	// System.Char TMPro.TMP_InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_39;
	// UnityEngine.TouchScreenKeyboardType TMPro.TMP_InputField::m_KeyboardType
	int32_t ___m_KeyboardType_40;
	// TMPro.TMP_InputField/LineType TMPro.TMP_InputField::m_LineType
	int32_t ___m_LineType_41;
	// System.Boolean TMPro.TMP_InputField::m_HideMobileInput
	bool ___m_HideMobileInput_42;
	// System.Boolean TMPro.TMP_InputField::m_HideSoftKeyboard
	bool ___m_HideSoftKeyboard_43;
	// TMPro.TMP_InputField/CharacterValidation TMPro.TMP_InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_44;
	// System.String TMPro.TMP_InputField::m_RegexValue
	String_t* ___m_RegexValue_45;
	// System.Single TMPro.TMP_InputField::m_GlobalPointSize
	float ___m_GlobalPointSize_46;
	// System.Int32 TMPro.TMP_InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_47;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnEndEdit
	SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* ___m_OnEndEdit_48;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnSubmit
	SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* ___m_OnSubmit_49;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnSelect
	SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* ___m_OnSelect_50;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnDeselect
	SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* ___m_OnDeselect_51;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnTextSelection
	TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* ___m_OnTextSelection_52;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnEndTextSelection
	TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* ___m_OnEndTextSelection_53;
	// TMPro.TMP_InputField/OnChangeEvent TMPro.TMP_InputField::m_OnValueChanged
	OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D* ___m_OnValueChanged_54;
	// TMPro.TMP_InputField/TouchScreenKeyboardEvent TMPro.TMP_InputField::m_OnTouchScreenKeyboardStatusChanged
	TouchScreenKeyboardEvent_tB9BEBEF5D6F2B52547EF3861FF437AC25BC06AF1* ___m_OnTouchScreenKeyboardStatusChanged_55;
	// TMPro.TMP_InputField/OnValidateInput TMPro.TMP_InputField::m_OnValidateInput
	OnValidateInput_t88ECDC5C12A807AF2A5761369563B0FAA6A25530* ___m_OnValidateInput_56;
	// UnityEngine.Color TMPro.TMP_InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_57;
	// System.Boolean TMPro.TMP_InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_58;
	// UnityEngine.Color TMPro.TMP_InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_59;
	// System.String TMPro.TMP_InputField::m_Text
	String_t* ___m_Text_60;
	// System.Single TMPro.TMP_InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_61;
	// System.Int32 TMPro.TMP_InputField::m_CaretWidth
	int32_t ___m_CaretWidth_62;
	// System.Boolean TMPro.TMP_InputField::m_ReadOnly
	bool ___m_ReadOnly_63;
	// System.Boolean TMPro.TMP_InputField::m_RichText
	bool ___m_RichText_64;
	// System.Int32 TMPro.TMP_InputField::m_StringPosition
	int32_t ___m_StringPosition_65;
	// System.Int32 TMPro.TMP_InputField::m_StringSelectPosition
	int32_t ___m_StringSelectPosition_66;
	// System.Int32 TMPro.TMP_InputField::m_CaretPosition
	int32_t ___m_CaretPosition_67;
	// System.Int32 TMPro.TMP_InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_68;
	// UnityEngine.RectTransform TMPro.TMP_InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_69;
	// UnityEngine.UIVertex[] TMPro.TMP_InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_70;
	// UnityEngine.CanvasRenderer TMPro.TMP_InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_71;
	// UnityEngine.Vector2 TMPro.TMP_InputField::m_LastPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastPosition_72;
	// UnityEngine.Mesh TMPro.TMP_InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_73;
	// System.Boolean TMPro.TMP_InputField::m_AllowInput
	bool ___m_AllowInput_74;
	// System.Boolean TMPro.TMP_InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_75;
	// System.Boolean TMPro.TMP_InputField::m_UpdateDrag
	bool ___m_UpdateDrag_76;
	// System.Boolean TMPro.TMP_InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_77;
	// System.Boolean TMPro.TMP_InputField::m_CaretVisible
	bool ___m_CaretVisible_80;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_81;
	// System.Single TMPro.TMP_InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_82;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_83;
	// System.String TMPro.TMP_InputField::m_OriginalText
	String_t* ___m_OriginalText_84;
	// System.Boolean TMPro.TMP_InputField::m_WasCanceled
	bool ___m_WasCanceled_85;
	// System.Boolean TMPro.TMP_InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_86;
	// UnityEngine.WaitForSecondsRealtime TMPro.TMP_InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_87;
	// System.Boolean TMPro.TMP_InputField::m_PreventCallback
	bool ___m_PreventCallback_88;
	// System.Boolean TMPro.TMP_InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_89;
	// System.Boolean TMPro.TMP_InputField::m_IsTextComponentUpdateRequired
	bool ___m_IsTextComponentUpdateRequired_90;
	// System.Boolean TMPro.TMP_InputField::m_isLastKeyBackspace
	bool ___m_isLastKeyBackspace_91;
	// System.Single TMPro.TMP_InputField::m_PointerDownClickStartTime
	float ___m_PointerDownClickStartTime_92;
	// System.Single TMPro.TMP_InputField::m_KeyDownStartTime
	float ___m_KeyDownStartTime_93;
	// System.Single TMPro.TMP_InputField::m_DoubleClickDelay
	float ___m_DoubleClickDelay_94;
	// System.Boolean TMPro.TMP_InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_96;
	// System.Boolean TMPro.TMP_InputField::m_ShouldUpdateIMEWindowPosition
	bool ___m_ShouldUpdateIMEWindowPosition_97;
	// System.Int32 TMPro.TMP_InputField::m_PreviousIMEInsertionLine
	int32_t ___m_PreviousIMEInsertionLine_98;
	// TMPro.TMP_FontAsset TMPro.TMP_InputField::m_GlobalFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_GlobalFontAsset_99;
	// System.Boolean TMPro.TMP_InputField::m_OnFocusSelectAll
	bool ___m_OnFocusSelectAll_100;
	// System.Boolean TMPro.TMP_InputField::m_isSelectAll
	bool ___m_isSelectAll_101;
	// System.Boolean TMPro.TMP_InputField::m_ResetOnDeActivation
	bool ___m_ResetOnDeActivation_102;
	// System.Boolean TMPro.TMP_InputField::m_SelectionStillActive
	bool ___m_SelectionStillActive_103;
	// System.Boolean TMPro.TMP_InputField::m_ReleaseSelection
	bool ___m_ReleaseSelection_104;
	// UnityEngine.GameObject TMPro.TMP_InputField::m_PreviouslySelectedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PreviouslySelectedObject_105;
	// System.Boolean TMPro.TMP_InputField::m_RestoreOriginalTextOnEscape
	bool ___m_RestoreOriginalTextOnEscape_106;
	// System.Boolean TMPro.TMP_InputField::m_isRichTextEditingAllowed
	bool ___m_isRichTextEditingAllowed_107;
	// System.Int32 TMPro.TMP_InputField::m_LineLimit
	int32_t ___m_LineLimit_108;
	// TMPro.TMP_InputValidator TMPro.TMP_InputField::m_InputValidator
	TMP_InputValidator_t3429AF61284AE19180C3FB81C0C7D2F90165EA98* ___m_InputValidator_109;
	// System.Boolean TMPro.TMP_InputField::m_isSelected
	bool ___m_isSelected_110;
	// System.Boolean TMPro.TMP_InputField::m_IsStringPositionDirty
	bool ___m_IsStringPositionDirty_111;
	// System.Boolean TMPro.TMP_InputField::m_IsCaretPositionDirty
	bool ___m_IsCaretPositionDirty_112;
	// System.Boolean TMPro.TMP_InputField::m_forceRectTransformAdjustment
	bool ___m_forceRectTransformAdjustment_113;
	// UnityEngine.Event TMPro.TMP_InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_114;
};

struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_StaticFields
{
	// System.Char[] TMPro.TMP_InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
};

// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Light[]
struct LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990  : public RuntimeArray
{
	ALIGN_FIELD (8) Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* m_Items[1];

	inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D  : public RuntimeArray
{
	ALIGN_FIELD (8) Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* m_Items[1];

	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.MeshFilter[]
struct MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA  : public RuntimeArray
{
	ALIGN_FIELD (8) MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* m_Items[1];

	inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>[]
struct Matrix_1U5BU5D_tEB5BF32A4424DABA97DC27B01601E40DF7500932  : public RuntimeArray
{
	ALIGN_FIELD (8) Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* m_Items[1];

	inline Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Double[][]
struct DoubleU5BU5DU5BU5D_t9D0B504F1F6C6D8C3DC912FFA38783B9CF0FC076  : public RuntimeArray
{
	ALIGN_FIELD (8) DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* m_Items[1];

	inline DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Double[,]
struct DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
	inline double GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, double value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, double value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Double>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// T Assets.Scripts.DataSaver::loadData<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSaver_loadData_TisRuntimeObject_mA3006012D11B93B51DF8037667000BAB9CE810E8_gshared (String_t* ___dataFileName0, const RuntimeMethod* method) ;
// System.Void Assets.Scripts.DataSaver::saveData<System.Object>(T,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSaver_saveData_TisRuntimeObject_mB5933C36C6834A7E914DC08F3EBFFC62897AAB86_gshared (RuntimeObject* ___dataToSave0, String_t* ___dataFileName1, const RuntimeMethod* method) ;
// MathNet.Numerics.LinearAlgebra.Matrix`1<T> MathNet.Numerics.LinearAlgebra.MatrixBuilder`1<System.Double>::Random(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* MatrixBuilder_1_Random_mE86256A934CABC20E1E5190C0C581A52DBF453C8_gshared (MatrixBuilder_1_tB265D6E40F33E9A311724A5F2EDB8C5F71621C2A* __this, int32_t ___rows0, int32_t ___columns1, const RuntimeMethod* method) ;
// MathNet.Numerics.LinearAlgebra.Matrix`1<T> MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>::op_Multiply(T,MathNet.Numerics.LinearAlgebra.Matrix`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* Matrix_1_op_Multiply_m39042F5DB6C9BCAC26059652232B314517464584_gshared (double ___leftSide0, Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* ___rightSide1, const RuntimeMethod* method) ;
// MathNet.Numerics.LinearAlgebra.Matrix`1<T> MathNet.Numerics.LinearAlgebra.MatrixBuilder`1<System.Double>::Diagonal(System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* MatrixBuilder_1_Diagonal_m685C3C909B3B190F8E54E3AA838C500FB8EC1D68_gshared (MatrixBuilder_1_tB265D6E40F33E9A311724A5F2EDB8C5F71621C2A* __this, int32_t ___rows0, int32_t ___columns1, double ___value2, const RuntimeMethod* method) ;
// MathNet.Numerics.LinearAlgebra.Matrix`1<T> MathNet.Numerics.LinearAlgebra.MatrixBuilder`1<System.Double>::Dense(System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* MatrixBuilder_1_Dense_m8FAC4AF7D0A03A88DC460B3A4967E55D7BBA2DB8_gshared (MatrixBuilder_1_tB265D6E40F33E9A311724A5F2EDB8C5F71621C2A* __this, int32_t ___rows0, int32_t ___columns1, double ___value2, const RuntimeMethod* method) ;
// System.Void MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>::set_Item(System.Int32,System.Int32,T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Matrix_1_set_Item_mC97D847F561C86DD3856B0FA098D2D0529728B67_gshared_inline (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* __this, int32_t ___row0, int32_t ___column1, double ___value2, const RuntimeMethod* method) ;
// MathNet.Numerics.LinearAlgebra.Matrix`1<T> MathNet.Numerics.LinearAlgebra.MatrixBuilder`1<System.Double>::Dense(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* MatrixBuilder_1_Dense_m5C6670AD03341F052CEA2FC369B0523404CAB25E_gshared (MatrixBuilder_1_tB265D6E40F33E9A311724A5F2EDB8C5F71621C2A* __this, int32_t ___rows0, int32_t ___columns1, const RuntimeMethod* method) ;
// System.Void MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>::CopyTo(MathNet.Numerics.LinearAlgebra.Matrix`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_1_CopyTo_mAF5B54FA1EBC56F6B5457C227E015ED05A7035AC_gshared (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* __this, Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* ___target0, const RuntimeMethod* method) ;
// T MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>::get_Item(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Matrix_1_get_Item_m9AC37D09D678515B98CFC7C5A3BBECAC3067D9DE_gshared_inline (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* __this, int32_t ___row0, int32_t ___column1, const RuntimeMethod* method) ;
// System.Void MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>::SetColumn(System.Int32,T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_1_SetColumn_mE9C2F6F335285A39921A92DBAF324B7D2A182248_gshared (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* __this, int32_t ___columnIndex0, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___column1, const RuntimeMethod* method) ;
// MathNet.Numerics.LinearAlgebra.Vector`1<T> MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>::Row(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_tF1970E55547CCC30E535F13A9D4129F783470D30* Matrix_1_Row_m3D5D460C25A6041F416C610509897578B9099D2F_gshared (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T[] MathNet.Numerics.LinearAlgebra.Vector`1<System.Double>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* Vector_1_ToArray_m4EEE494FD462F6FD7AE5D156E3480094B1467267_gshared (Vector_1_tF1970E55547CCC30E535F13A9D4129F783470D30* __this, const RuntimeMethod* method) ;
// MathNet.Numerics.LinearAlgebra.Matrix`1<T> MathNet.Numerics.LinearAlgebra.MatrixBuilder`1<System.Double>::Diagonal(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* MatrixBuilder_1_Diagonal_m7704C7B7D5C804EE6D3E8CE0C3D8341EB0156F9A_gshared (MatrixBuilder_1_tB265D6E40F33E9A311724A5F2EDB8C5F71621C2A* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___storage0, const RuntimeMethod* method) ;
// MathNet.Numerics.LinearAlgebra.Matrix`1<T> MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>::Multiply(MathNet.Numerics.LinearAlgebra.Matrix`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* Matrix_1_Multiply_mD8771B97B2AD595EF945F4CD71E33EC09AD78D07_gshared (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* __this, Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* ___other0, const RuntimeMethod* method) ;
// MathNet.Numerics.LinearAlgebra.Matrix`1<T> MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>::Transpose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* Matrix_1_Transpose_m7A760B1D7F8E54788932F964F865D0398171D74A_gshared (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* __this, const RuntimeMethod* method) ;
// MathNet.Numerics.LinearAlgebra.Matrix`1<T> MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>::Subtract(MathNet.Numerics.LinearAlgebra.Matrix`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* Matrix_1_Subtract_m844BCEDE31EFBDD315CE853A8E889DE6CF2D2859_gshared (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* __this, Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* ___other0, const RuntimeMethod* method) ;
// MathNet.Numerics.LinearAlgebra.Matrix`1<T> MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>::Add(MathNet.Numerics.LinearAlgebra.Matrix`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* Matrix_1_Add_m7B118E356BBF5361F68E5DCEC5C7F5B46251C973_gshared (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* __this, Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* ___other0, const RuntimeMethod* method) ;
// T[][] MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>::ToColumnArrays()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5DU5BU5D_t9D0B504F1F6C6D8C3DC912FFA38783B9CF0FC076* Matrix_1_ToColumnArrays_m36416AB5E61BDFD15C61D67593623CD11638DBDF_gshared (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* __this, const RuntimeMethod* method) ;
// T[,] MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* Matrix_1_ToArray_m0F3DB5D9135BA3556C288F91992B1B0C390AAF72_gshared (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* __this, const RuntimeMethod* method) ;
// System.Int32 MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>::get_ColumnCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Matrix_1_get_ColumnCount_mA9469577A4E8459338A621B987E653D241A6883B_gshared_inline (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* __this, const RuntimeMethod* method) ;
// System.Int32 MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>::get_RowCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Matrix_1_get_RowCount_m9B54DCE02A3829F5EBD4D5D7ACF2615FCBA2A7E2_gshared_inline (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* __this, const RuntimeMethod* method) ;
// System.Void MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>::SetSubMatrix(System.Int32,System.Int32,System.Int32,System.Int32,MathNet.Numerics.LinearAlgebra.Matrix`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_1_SetSubMatrix_m38EEF6D1CC313F9C27FA420926BBAA7137C460D6_gshared (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* __this, int32_t ___rowIndex0, int32_t ___rowCount1, int32_t ___columnIndex2, int32_t ___columnCount3, Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* ___subMatrix4, const RuntimeMethod* method) ;
// MathNet.Numerics.LinearAlgebra.Matrix`1<T> MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>::Multiply(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* Matrix_1_Multiply_m2C0D614F20ECBB307505AD1CDC6C2DCCB6DC806C_gshared (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* __this, double ___scalar0, const RuntimeMethod* method) ;
// MathNet.Numerics.LinearAlgebra.Matrix`1<T> MathNet.Numerics.LinearAlgebra.Factorization.Cholesky`1<System.Double>::get_Factor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* Cholesky_1_get_Factor_m0DAB4879B1C18A503BC02DB1055250A8611C5CA7_gshared_inline (Cholesky_1_t1FD2C6EAE804ACF062E3034A45A8D1004519525C* __this, const RuntimeMethod* method) ;

// System.Void SmoothCameraOrbit::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmoothCameraOrbit_Init_m7161E8C7C0930F84EB08CFFCCC26523A015C8995 (SmoothCameraOrbit_t0CFEAEE46ACD3D6163F398CB2A1F0BDEE5BAF604* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA (int32_t ___button0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Single SmoothCameraOrbit::ClampAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SmoothCameraOrbit_ClampAngle_m56DF546BB674B1CA2489FD90A7FF4CF53D3BFCA2 (float ___angle0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnluckFlagGUI::Swap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnluckFlagGUI_Swap_m4F10D793CCC3D9BF1B4259916CF00CC6FEAE00E2 (UnluckFlagGUI_t81F54AD0354B397303687FCAE746A1EC7EB03FC4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___n0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.TextMesh>()
inline TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* Component_GetComponent_TisTextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_m6D2EA454E808E4854EA6AE50E04BF626BFFD47B8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.GameObject>()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_GetComponent_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mB98D37FCCC2A4EA5C272368FDF5442826FA876FC (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Void UnluckFlagGUI::ButtonUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnluckFlagGUI_ButtonUp_m2029E33ADF47A260958ACD56DF2855E93513170C (UnluckFlagGUI_t81F54AD0354B397303687FCAE746A1EC7EB03FC4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m504C6CF9A40BD840964AD0495266CD003676289E (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnluckFlagGUI::Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnluckFlagGUI_Next_mB10B863D2BE3488513A9F6E317BA658A9F4A89B5 (UnluckFlagGUI_t81F54AD0354B397303687FCAE746A1EC7EB03FC4* __this, const RuntimeMethod* method) ;
// System.Void UnluckFlagGUI::Prev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnluckFlagGUI_Prev_mE25287567D16C46DFF282D432302B22857A39FBA (UnluckFlagGUI_t81F54AD0354B397303687FCAE746A1EC7EB03FC4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void UnluckFlagGUI::NextBgr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnluckFlagGUI_NextBgr_m02309B6F2389F170FFF1A05BB6B1241DC6142C9E (UnluckFlagGUI_t81F54AD0354B397303687FCAE746A1EC7EB03FC4* __this, const RuntimeMethod* method) ;
// System.Void UnluckFlagGUI::LightChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnluckFlagGUI_LightChange_mAC40CD15E7ECA87AF404E2E0E955B01FE9BF92CE (UnluckFlagGUI_t81F54AD0354B397303687FCAE746A1EC7EB03FC4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderSettings::set_skybox(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_skybox_m7988CC3217B1456CA0A7294127527BFC18EEC872 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___original0, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextMesh::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E (TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.TextMesh::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextMesh_get_text_mB3E900AED17390DE50DFC984428BC29EB1CA60A2 (TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* __this, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnluckAnimatedMesh>()
inline UnluckAnimatedMesh_tC8F263959EBB80897E44E8534FC4B91D07F7C653* GameObject_GetComponent_TisUnluckAnimatedMesh_tC8F263959EBB80897E44E8534FC4B91D07F7C653_m8B1554743E92E25578F5F4F49676CB2BA0B6CC0A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  UnluckAnimatedMesh_tC8F263959EBB80897E44E8534FC4B91D07F7C653* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_timeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616 (const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D (float* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnluckAnimatedMesh::CheckIfMeshHasChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnluckAnimatedMesh_CheckIfMeshHasChanged_m10140A9B367A9538879B961CA704B1A81068F938 (UnluckAnimatedMesh_tC8F263959EBB80897E44E8534FC4B91D07F7C653* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method) ;
// System.Void UnluckAnimatedMesh::GetRequiredComponents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnluckAnimatedMesh_GetRequiredComponents_mE32A5EB6F077081B48B7875C5D4371DD03F35A5A (UnluckAnimatedMesh_tC8F263959EBB80897E44E8534FC4B91D07F7C653* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::CancelInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_CancelInvoke_m177BCBDFCEA3E09C02E3E444BF4FBA648FAE3CFA (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B (const RuntimeMethod* method) ;
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MeshFilter::set_sharedMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_sharedMesh_m946F7E3F583761982642BDA4753784AF1DF6E16F (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method) ;
// System.Void UnluckAnimatedMesh::RandomizePlaySpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnluckAnimatedMesh_RandomizePlaySpeed_m62111CB16D694B02B4C594027AC110CDEF437694 (UnluckAnimatedMesh_tC8F263959EBB80897E44E8534FC4B91D07F7C653* __this, const RuntimeMethod* method) ;
// System.Void UnluckAnimatedMesh::RandomRotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnluckAnimatedMesh_RandomRotate_m765CEB919919C735440FEB7C9AD377C6262236D4 (UnluckAnimatedMesh_tC8F263959EBB80897E44E8534FC4B91D07F7C653* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion_set_eulerAngles_m441C342F21FEFCED9BABED01FA516C97EA424D6E_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnluckAnimatedMesh::FillCacheArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnluckAnimatedMesh_FillCacheArray_m38FE9F79EC23A8E5BC7BC2EDCAEE2DE63E99FFD9 (UnluckAnimatedMesh_tC8F263959EBB80897E44E8534FC4B91D07F7C653* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnluckAnimatedMesh::Animate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnluckAnimatedMesh_Animate_m56D7F1815D6F3663C4182EBD693ACD74671AB260 (UnluckAnimatedMesh_tC8F263959EBB80897E44E8534FC4B91D07F7C653* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Renderer::get_isVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Renderer_get_isVisible_mBCDDEB0EF27442FD1D910CD26754135B677B8251 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Boolean UnluckAnimatedMesh::PingPongFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnluckAnimatedMesh_PingPongFrame_m5391147B12AC20316339ACE7AA52A2FE3945ACB9 (UnluckAnimatedMesh_tC8F263959EBB80897E44E8534FC4B91D07F7C653* __this, const RuntimeMethod* method) ;
// System.Void UnluckAnimatedMesh::RandomizePropertiesAfterLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnluckAnimatedMesh_RandomizePropertiesAfterLoop_m24D16DB8E49BDF3B879DCAF508D0D11B761F0DF9 (UnluckAnimatedMesh_tC8F263959EBB80897E44E8534FC4B91D07F7C653* __this, const RuntimeMethod* method) ;
// System.Boolean UnluckAnimatedMesh::NextFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnluckAnimatedMesh_NextFrame_m85C71C785C709770B6369B12121FE1A1321DDC03 (UnluckAnimatedMesh_tC8F263959EBB80897E44E8534FC4B91D07F7C653* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___className0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator BLE::UpdateRSSIAndDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BLE_UpdateRSSIAndDistance_m2EAFA0C7E36B96535372876628F5A1CD58CE68D6 (BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void BLE/<UpdateRSSIAndDistance>d__29::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateRSSIAndDistanceU3Ed__29__ctor_m9B514F0D8881F2FC13741C9AC8BA35ADAD4067F0 (U3CUpdateRSSIAndDistanceU3Ed__29_tB7D6910C7FF8AE6C8618C75C15FA67CF1E9BD2E1* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_gshared)(__this, ___methodName0, ___args1, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Regex_IsMatch_m66D13054C7992322810B0CFC6B46AF11A927C9AA (String_t* ___input0, String_t* ___pattern1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Double>(System.String,System.Object[])
inline double AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  double (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_gshared)(__this, ___methodName0, ___args1, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.String TMPro.TMP_InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.Boolean BLE::isValidNum(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BLE_isValidNum_m62DF71615F33BCBD74F6FB86B1A1973F6EB706A7 (BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* __this, String_t* ___text0, const RuntimeMethod* method) ;
// System.Double System.Double::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Double_Parse_mEBC644CE0C86A405283EC4839F872EF9E556670A (String_t* ___s0, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_InputField_set_text_m684E9CDA2D9E82D1C497B5E03DBE79C00584FF62 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator BLE::GetRssiData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BLE_GetRssiData_mA5CFC95E8033F8028F4C5403BB8E2BCA55BF5918 (BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* __this, const RuntimeMethod* method) ;
// System.Void BLE/<GetRssiData>d__38::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRssiDataU3Ed__38__ctor_m711894F83037AED596B77AF3D0247996E23CEDF9 (U3CGetRssiDataU3Ed__38_tB0D19F866CD0E9454FD768ED2688FB1532BC3558* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Double[]>(System.String,System.Object[])
inline DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* AndroidJavaObject_Call_TisDoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_m15069A175D7E52353A996F903290EEBEE16BC72D (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) ;
// System.Void BLE::RefreshFilteredRssi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BLE_RefreshFilteredRssi_m775762865D3A51CD98D777DFC3A53E7801435489 (BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* __this, const RuntimeMethod* method) ;
// System.Void BLE::CalcFilteredDistances()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BLE_CalcFilteredDistances_m07A946DFF47926548A90F5BE59F028F4BFBF9D6B (BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* __this, const RuntimeMethod* method) ;
// System.Void BLE::SetFilteredPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BLE_SetFilteredPosition_m5EC14C282268A27B002EB86C4891264033F4D8BC (BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* __this, const RuntimeMethod* method) ;
// System.Void BLE::RefreshRssi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BLE_RefreshRssi_mEABD27AF4F0C8473EFE5508335720FD35AFF3771 (BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* __this, const RuntimeMethod* method) ;
// System.Void BLE::CalcDistances()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BLE_CalcDistances_mBA14191904BF5C49D08D640F3182EB1B281A60E3 (BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* __this, const RuntimeMethod* method) ;
// System.Void BLE::SetUserPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BLE_SetUserPosition_m4437B1B3928A86DD8603AF6547940819898F73CA (BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSecondsRealtime::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* __this, float ___time0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// T Assets.Scripts.DataSaver::loadData<Assets.Scripts.CalibrationData>(System.String)
inline CalibrationData_t0CEDFF596C17FEE4BD89AAD8E7B40E7DD0A3F22A* DataSaver_loadData_TisCalibrationData_t0CEDFF596C17FEE4BD89AAD8E7B40E7DD0A3F22A_m061A396CF4E6BA9882242FFB08C3797EB0C70917 (String_t* ___dataFileName0, const RuntimeMethod* method)
{
	return ((  CalibrationData_t0CEDFF596C17FEE4BD89AAD8E7B40E7DD0A3F22A* (*) (String_t*, const RuntimeMethod*))DataSaver_loadData_TisRuntimeObject_mA3006012D11B93B51DF8037667000BAB9CE810E8_gshared)(___dataFileName0, method);
}
// System.Collections.IEnumerator BLECalibration::UpdateUserPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BLECalibration_UpdateUserPosition_m402CE4357C4C3E1059F37A91072631E9295274D0 (BLECalibration_tE0AABD5BBBD7F98BA897828D09DDCA8504E32003* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator BLECalibration::CalibrateWaitIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BLECalibration_CalibrateWaitIndicator_mBAD371360E274935BDCF72C33B9A5E4284C3D6B5 (BLECalibration_tE0AABD5BBBD7F98BA897828D09DDCA8504E32003* __this, const RuntimeMethod* method) ;
// System.Void BLECalibration/<CalibrateWaitIndicator>d__35::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCalibrateWaitIndicatorU3Ed__35__ctor_m154156E3077E5DFB6776B8236FE36BC03DFC53FF (U3CCalibrateWaitIndicatorU3Ed__35_tBB064D08617B7B22EB025D981B39AAE4AC494713* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void BLECalibration/<UpdateUserPosition>d__36::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateUserPositionU3Ed__36__ctor_mA0052912C4B7E23095D75E320CE2FBFF0400F7BB (U3CUpdateUserPositionU3Ed__36_t871E40FC6CB7015D9B15388235F918DAA1AD9816* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void Assets.Scripts.CalibrationData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CalibrationData__ctor_mC93E790F3CB97A6CE888A104390555BC05D4E4F4 (CalibrationData_t0CEDFF596C17FEE4BD89AAD8E7B40E7DD0A3F22A* __this, const RuntimeMethod* method) ;
// System.Void Assets.Scripts.DataSaver::saveData<Assets.Scripts.CalibrationData>(T,System.String)
inline void DataSaver_saveData_TisCalibrationData_t0CEDFF596C17FEE4BD89AAD8E7B40E7DD0A3F22A_m89A89775403C94AF93B0B2A8A3A5FFBFB23E4715 (CalibrationData_t0CEDFF596C17FEE4BD89AAD8E7B40E7DD0A3F22A* ___dataToSave0, String_t* ___dataFileName1, const RuntimeMethod* method)
{
	((  void (*) (CalibrationData_t0CEDFF596C17FEE4BD89AAD8E7B40E7DD0A3F22A*, String_t*, const RuntimeMethod*))DataSaver_saveData_TisRuntimeObject_mB5933C36C6834A7E914DC08F3EBFFC62897AAB86_gshared)(___dataToSave0, ___dataFileName1, method);
}
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void BLECalibration::RefreshFilteredRssi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BLECalibration_RefreshFilteredRssi_m68AD8FB0565BCC3F07F97FCA341BAE5A1168748B (BLECalibration_tE0AABD5BBBD7F98BA897828D09DDCA8504E32003* __this, const RuntimeMethod* method) ;
// System.Void BLECalibration::SetUserPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BLECalibration_SetUserPosition_mAA6FA59DBB0C78E8878BF1D1C63748D506E55140 (BLECalibration_tE0AABD5BBBD7F98BA897828D09DDCA8504E32003* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshPath::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshPath__ctor_mEA40BFC2492814FFC97A71C3AEC2154A9415C37F (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.LineRenderer>()
inline LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.AI.NavMesh::CalculatePath(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,UnityEngine.AI.NavMeshPath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMesh_CalculatePath_m15FF9A2E008A90375072B9293D290D9167E580E9 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___sourcePosition0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition1, int32_t ___areaMask2, NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* ___path3, const RuntimeMethod* method) ;
// UnityEngine.Vector3[] UnityEngine.AI.NavMeshPath::get_corners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::SetPositions(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___positions0, const RuntimeMethod* method) ;
// System.Boolean Assets.Scripts.DataSaver::deleteData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataSaver_deleteData_mDAC8FAD4BBFB4A18706AD4277441585E1995E7EA (String_t* ___dataFileName0, const RuntimeMethod* method) ;
// MathNet.Numerics.LinearAlgebra.Matrix`1<T> MathNet.Numerics.LinearAlgebra.MatrixBuilder`1<System.Double>::Random(System.Int32,System.Int32)
inline Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* MatrixBuilder_1_Random_mE86256A934CABC20E1E5190C0C581A52DBF453C8 (MatrixBuilder_1_tB265D6E40F33E9A311724A5F2EDB8C5F71621C2A* __this, int32_t ___rows0, int32_t ___columns1, const RuntimeMethod* method)
{
	return ((  Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* (*) (MatrixBuilder_1_tB265D6E40F33E9A311724A5F2EDB8C5F71621C2A*, int32_t, int32_t, const RuntimeMethod*))MatrixBuilder_1_Random_mE86256A934CABC20E1E5190C0C581A52DBF453C8_gshared)(__this, ___rows0, ___columns1, method);
}
// MathNet.Numerics.LinearAlgebra.Matrix`1<T> MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>::op_Multiply(T,MathNet.Numerics.LinearAlgebra.Matrix`1<T>)
inline Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* Matrix_1_op_Multiply_m39042F5DB6C9BCAC26059652232B314517464584 (double ___leftSide0, Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* ___rightSide1, const RuntimeMethod* method)
{
	return ((  Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* (*) (double, Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9*, const RuntimeMethod*))Matrix_1_op_Multiply_m39042F5DB6C9BCAC26059652232B314517464584_gshared)(___leftSide0, ___rightSide1, method);
}
// MathNet.Numerics.LinearAlgebra.Matrix`1<T> MathNet.Numerics.LinearAlgebra.MatrixBuilder`1<System.Double>::Diagonal(System.Int32,System.Int32,T)
inline Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* MatrixBuilder_1_Diagonal_m685C3C909B3B190F8E54E3AA838C500FB8EC1D68 (MatrixBuilder_1_tB265D6E40F33E9A311724A5F2EDB8C5F71621C2A* __this, int32_t ___rows0, int32_t ___columns1, double ___value2, const RuntimeMethod* method)
{
	return ((  Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* (*) (MatrixBuilder_1_tB265D6E40F33E9A311724A5F2EDB8C5F71621C2A*, int32_t, int32_t, double, const RuntimeMethod*))MatrixBuilder_1_Diagonal_m685C3C909B3B190F8E54E3AA838C500FB8EC1D68_gshared)(__this, ___rows0, ___columns1, ___value2, method);
}
// MathNet.Numerics.LinearAlgebra.Matrix`1<T> MathNet.Numerics.LinearAlgebra.MatrixBuilder`1<System.Double>::Dense(System.Int32,System.Int32,T)
inline Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* MatrixBuilder_1_Dense_m8FAC4AF7D0A03A88DC460B3A4967E55D7BBA2DB8 (MatrixBuilder_1_tB265D6E40F33E9A311724A5F2EDB8C5F71621C2A* __this, int32_t ___rows0, int32_t ___columns1, double ___value2, const RuntimeMethod* method)
{
	return ((  Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* (*) (MatrixBuilder_1_tB265D6E40F33E9A311724A5F2EDB8C5F71621C2A*, int32_t, int32_t, double, const RuntimeMethod*))MatrixBuilder_1_Dense_m8FAC4AF7D0A03A88DC460B3A4967E55D7BBA2DB8_gshared)(__this, ___rows0, ___columns1, ___value2, method);
}
// System.Void MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>::set_Item(System.Int32,System.Int32,T)
inline void Matrix_1_set_Item_mC97D847F561C86DD3856B0FA098D2D0529728B67_inline (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* __this, int32_t ___row0, int32_t ___column1, double ___value2, const RuntimeMethod* method)
{
	((  void (*) (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9*, int32_t, int32_t, double, const RuntimeMethod*))Matrix_1_set_Item_mC97D847F561C86DD3856B0FA098D2D0529728B67_gshared_inline)(__this, ___row0, ___column1, ___value2, method);
}
// MathNet.Numerics.LinearAlgebra.Matrix`1<T> MathNet.Numerics.LinearAlgebra.MatrixBuilder`1<System.Double>::Dense(System.Int32,System.Int32)
inline Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* MatrixBuilder_1_Dense_m5C6670AD03341F052CEA2FC369B0523404CAB25E (MatrixBuilder_1_tB265D6E40F33E9A311724A5F2EDB8C5F71621C2A* __this, int32_t ___rows0, int32_t ___columns1, const RuntimeMethod* method)
{
	return ((  Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* (*) (MatrixBuilder_1_tB265D6E40F33E9A311724A5F2EDB8C5F71621C2A*, int32_t, int32_t, const RuntimeMethod*))MatrixBuilder_1_Dense_m5C6670AD03341F052CEA2FC369B0523404CAB25E_gshared)(__this, ___rows0, ___columns1, method);
}
// System.Void MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>::CopyTo(MathNet.Numerics.LinearAlgebra.Matrix`1<T>)
inline void Matrix_1_CopyTo_mAF5B54FA1EBC56F6B5457C227E015ED05A7035AC (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* __this, Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* ___target0, const RuntimeMethod* method)
{
	((  void (*) (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9*, Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9*, const RuntimeMethod*))Matrix_1_CopyTo_mAF5B54FA1EBC56F6B5457C227E015ED05A7035AC_gshared)(__this, ___target0, method);
}
// T MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>::get_Item(System.Int32,System.Int32)
inline double Matrix_1_get_Item_m9AC37D09D678515B98CFC7C5A3BBECAC3067D9DE_inline (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* __this, int32_t ___row0, int32_t ___column1, const RuntimeMethod* method)
{
	return ((  double (*) (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9*, int32_t, int32_t, const RuntimeMethod*))Matrix_1_get_Item_m9AC37D09D678515B98CFC7C5A3BBECAC3067D9DE_gshared_inline)(__this, ___row0, ___column1, method);
}
// System.Void UnscentedKalmanFilter.UKF::init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UKF_init_mFB1D8FFA3F783F006B98D4815BB175893F205C65 (UKF_tE1B7CA051082C54F4E8512986317A8B34062932A* __this, const RuntimeMethod* method) ;
// System.Void MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>::SetColumn(System.Int32,T[])
inline void Matrix_1_SetColumn_mE9C2F6F335285A39921A92DBAF324B7D2A182248 (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* __this, int32_t ___columnIndex0, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___column1, const RuntimeMethod* method)
{
	((  void (*) (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9*, int32_t, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*, const RuntimeMethod*))Matrix_1_SetColumn_mE9C2F6F335285A39921A92DBAF324B7D2A182248_gshared)(__this, ___columnIndex0, ___column1, method);
}
// MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double> UnscentedKalmanFilter.UKF::GetSigmaPoints(MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>,MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* UKF_GetSigmaPoints_mA993204F62BF1FACFC44B86AD728D430B9B0A845 (UKF_tE1B7CA051082C54F4E8512986317A8B34062932A* __this, Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* ___x0, Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* ___P1, double ___c2, const RuntimeMethod* method) ;
// MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>[] UnscentedKalmanFilter.UKF::UnscentedTransform(MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>,MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>,MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>,System.Int32,MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_1U5BU5D_tEB5BF32A4424DABA97DC27B01601E40DF7500932* UKF_UnscentedTransform_mE19688643ACCA0EE3CCF39D3D7758CA1B6F929FA (UKF_tE1B7CA051082C54F4E8512986317A8B34062932A* __this, Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* ___X0, Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* ___Wm1, Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* ___Wc2, int32_t ___n3, Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* ___R4, const RuntimeMethod* method) ;
// MathNet.Numerics.LinearAlgebra.Vector`1<T> MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>::Row(System.Int32)
inline Vector_1_tF1970E55547CCC30E535F13A9D4129F783470D30* Matrix_1_Row_m3D5D460C25A6041F416C610509897578B9099D2F (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector_1_tF1970E55547CCC30E535F13A9D4129F783470D30* (*) (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9*, int32_t, const RuntimeMethod*))Matrix_1_Row_m3D5D460C25A6041F416C610509897578B9099D2F_gshared)(__this, ___index0, method);
}
// T[] MathNet.Numerics.LinearAlgebra.Vector`1<System.Double>::ToArray()
inline DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* Vector_1_ToArray_m4EEE494FD462F6FD7AE5D156E3480094B1467267 (Vector_1_tF1970E55547CCC30E535F13A9D4129F783470D30* __this, const RuntimeMethod* method)
{
	return ((  DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* (*) (Vector_1_tF1970E55547CCC30E535F13A9D4129F783470D30*, const RuntimeMethod*))Vector_1_ToArray_m4EEE494FD462F6FD7AE5D156E3480094B1467267_gshared)(__this, method);
}
// MathNet.Numerics.LinearAlgebra.Matrix`1<T> MathNet.Numerics.LinearAlgebra.MatrixBuilder`1<System.Double>::Diagonal(T[])
inline Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* MatrixBuilder_1_Diagonal_m7704C7B7D5C804EE6D3E8CE0C3D8341EB0156F9A (MatrixBuilder_1_tB265D6E40F33E9A311724A5F2EDB8C5F71621C2A* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___storage0, const RuntimeMethod* method)
{
	return ((  Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* (*) (MatrixBuilder_1_tB265D6E40F33E9A311724A5F2EDB8C5F71621C2A*, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*, const RuntimeMethod*))MatrixBuilder_1_Diagonal_m7704C7B7D5C804EE6D3E8CE0C3D8341EB0156F9A_gshared)(__this, ___storage0, method);
}
// MathNet.Numerics.LinearAlgebra.Matrix`1<T> MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>::Multiply(MathNet.Numerics.LinearAlgebra.Matrix`1<T>)
inline Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* Matrix_1_Multiply_mD8771B97B2AD595EF945F4CD71E33EC09AD78D07 (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* __this, Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* ___other0, const RuntimeMethod* method)
{
	return ((  Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* (*) (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9*, Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9*, const RuntimeMethod*))Matrix_1_Multiply_mD8771B97B2AD595EF945F4CD71E33EC09AD78D07_gshared)(__this, ___other0, method);
}
// MathNet.Numerics.LinearAlgebra.Matrix`1<T> MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>::Transpose()
inline Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* Matrix_1_Transpose_m7A760B1D7F8E54788932F964F865D0398171D74A (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* __this, const RuntimeMethod* method)
{
	return ((  Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* (*) (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9*, const RuntimeMethod*))Matrix_1_Transpose_m7A760B1D7F8E54788932F964F865D0398171D74A_gshared)(__this, method);
}
// MathNet.Numerics.LinearAlgebra.Matrix`1<T> MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>::Subtract(MathNet.Numerics.LinearAlgebra.Matrix`1<T>)
inline Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* Matrix_1_Subtract_m844BCEDE31EFBDD315CE853A8E889DE6CF2D2859 (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* __this, Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* ___other0, const RuntimeMethod* method)
{
	return ((  Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* (*) (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9*, Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9*, const RuntimeMethod*))Matrix_1_Subtract_m844BCEDE31EFBDD315CE853A8E889DE6CF2D2859_gshared)(__this, ___other0, method);
}
// MathNet.Numerics.LinearAlgebra.Matrix`1<T> MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>::Add(MathNet.Numerics.LinearAlgebra.Matrix`1<T>)
inline Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* Matrix_1_Add_m7B118E356BBF5361F68E5DCEC5C7F5B46251C973 (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* __this, Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* ___other0, const RuntimeMethod* method)
{
	return ((  Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* (*) (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9*, Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9*, const RuntimeMethod*))Matrix_1_Add_m7B118E356BBF5361F68E5DCEC5C7F5B46251C973_gshared)(__this, ___other0, method);
}
// T[][] MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>::ToColumnArrays()
inline DoubleU5BU5DU5BU5D_t9D0B504F1F6C6D8C3DC912FFA38783B9CF0FC076* Matrix_1_ToColumnArrays_m36416AB5E61BDFD15C61D67593623CD11638DBDF (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* __this, const RuntimeMethod* method)
{
	return ((  DoubleU5BU5DU5BU5D_t9D0B504F1F6C6D8C3DC912FFA38783B9CF0FC076* (*) (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9*, const RuntimeMethod*))Matrix_1_ToColumnArrays_m36416AB5E61BDFD15C61D67593623CD11638DBDF_gshared)(__this, method);
}
// T[,] MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>::ToArray()
inline DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* Matrix_1_ToArray_m0F3DB5D9135BA3556C288F91992B1B0C390AAF72 (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* __this, const RuntimeMethod* method)
{
	return ((  DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* (*) (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9*, const RuntimeMethod*))Matrix_1_ToArray_m0F3DB5D9135BA3556C288F91992B1B0C390AAF72_gshared)(__this, method);
}
// System.Int32 MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>::get_ColumnCount()
inline int32_t Matrix_1_get_ColumnCount_mA9469577A4E8459338A621B987E653D241A6883B_inline (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9*, const RuntimeMethod*))Matrix_1_get_ColumnCount_mA9469577A4E8459338A621B987E653D241A6883B_gshared_inline)(__this, method);
}
// System.Int32 MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>::get_RowCount()
inline int32_t Matrix_1_get_RowCount_m9B54DCE02A3829F5EBD4D5D7ACF2615FCBA2A7E2_inline (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9*, const RuntimeMethod*))Matrix_1_get_RowCount_m9B54DCE02A3829F5EBD4D5D7ACF2615FCBA2A7E2_gshared_inline)(__this, method);
}
// System.Void MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>::SetSubMatrix(System.Int32,System.Int32,System.Int32,System.Int32,MathNet.Numerics.LinearAlgebra.Matrix`1<T>)
inline void Matrix_1_SetSubMatrix_m38EEF6D1CC313F9C27FA420926BBAA7137C460D6 (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* __this, int32_t ___rowIndex0, int32_t ___rowCount1, int32_t ___columnIndex2, int32_t ___columnCount3, Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* ___subMatrix4, const RuntimeMethod* method)
{
	((  void (*) (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9*, int32_t, int32_t, int32_t, int32_t, Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9*, const RuntimeMethod*))Matrix_1_SetSubMatrix_m38EEF6D1CC313F9C27FA420926BBAA7137C460D6_gshared)(__this, ___rowIndex0, ___rowCount1, ___columnIndex2, ___columnCount3, ___subMatrix4, method);
}
// MathNet.Numerics.LinearAlgebra.Matrix`1<T> MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>::Multiply(T)
inline Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* Matrix_1_Multiply_m2C0D614F20ECBB307505AD1CDC6C2DCCB6DC806C (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* __this, double ___scalar0, const RuntimeMethod* method)
{
	return ((  Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* (*) (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9*, double, const RuntimeMethod*))Matrix_1_Multiply_m2C0D614F20ECBB307505AD1CDC6C2DCCB6DC806C_gshared)(__this, ___scalar0, method);
}
// MathNet.Numerics.LinearAlgebra.Matrix`1<T> MathNet.Numerics.LinearAlgebra.Factorization.Cholesky`1<System.Double>::get_Factor()
inline Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* Cholesky_1_get_Factor_m0DAB4879B1C18A503BC02DB1055250A8611C5CA7_inline (Cholesky_1_t1FD2C6EAE804ACF062E3034A45A8D1004519525C* __this, const RuntimeMethod* method)
{
	return ((  Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* (*) (Cholesky_1_t1FD2C6EAE804ACF062E3034A45A8D1004519525C*, const RuntimeMethod*))Cholesky_1_get_Factor_m0DAB4879B1C18A503BC02DB1055250A8611C5CA7_gshared_inline)(__this, method);
}
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399 (const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetDirectoryName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetDirectoryName_m428BADBE493A3927B51A13DEF658929B430516F6 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Boolean System.IO.Directory::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.IO.File::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
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
// System.Void SmoothCameraOrbit::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmoothCameraOrbit_Start_mA945ED420E4A8E6F7792081808AE532EA4F8303A (SmoothCameraOrbit_t0CFEAEE46ACD3D6163F398CB2A1F0BDEE5BAF604* __this, const RuntimeMethod* method) 
{
	{
		// void Start() { Init(); }
		SmoothCameraOrbit_Init_m7161E8C7C0930F84EB08CFFCCC26523A015C8995(__this, NULL);
		// void Start() { Init(); }
		return;
	}
}
// System.Void SmoothCameraOrbit::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmoothCameraOrbit_OnEnable_m1E06F588ECB545D38CF08AB8DB4EB996E99F7638 (SmoothCameraOrbit_t0CFEAEE46ACD3D6163F398CB2A1F0BDEE5BAF604* __this, const RuntimeMethod* method) 
{
	{
		// void OnEnable() { Init(); }
		SmoothCameraOrbit_Init_m7161E8C7C0930F84EB08CFFCCC26523A015C8995(__this, NULL);
		// void OnEnable() { Init(); }
		return;
	}
}
// System.Void SmoothCameraOrbit::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmoothCameraOrbit_Init_m7161E8C7C0930F84EB08CFFCCC26523A015C8995 (SmoothCameraOrbit_t0CFEAEE46ACD3D6163F398CB2A1F0BDEE5BAF604* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral349DBC13EB72DD485612398752C9376E77374D26);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// if (!target)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_0055;
		}
	}
	{
		// GameObject go = new GameObject("Cam Target");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_2, _stringLiteral349DBC13EB72DD485612398752C9376E77374D26, NULL);
		V_0 = L_2;
		// go.transform.position = transform.position + (transform.forward * distance);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_0;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_7, NULL);
		float L_9 = __this->___distance_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_8, L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_6, L_10, NULL);
		NullCheck(L_4);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_11, NULL);
		// target = go.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_0;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		__this->___target_4 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_4), (void*)L_13);
	}

IL_0055:
	{
		// currentDistance = distance;
		float L_14 = __this->___distance_6;
		__this->___currentDistance_20 = L_14;
		// desiredDistance = distance;
		float L_15 = __this->___distance_6;
		__this->___desiredDistance_21 = L_15;
		// position = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		__this->___position_25 = L_17;
		// rotation = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_18);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_18, NULL);
		__this->___rotation_24 = L_19;
		// currentRotation = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_20);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_20, NULL);
		__this->___currentRotation_22 = L_21;
		// desiredRotation = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_22);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
		L_23 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_22, NULL);
		__this->___desiredRotation_23 = L_23;
		// xDeg = Vector3.Angle(Vector3.right, transform.right );
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_25, NULL);
		float L_27;
		L_27 = Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline(L_24, L_26, NULL);
		__this->___xDeg_18 = L_27;
		// yDeg = Vector3.Angle(Vector3.up, transform.up );
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_29, NULL);
		float L_31;
		L_31 = Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline(L_28, L_30, NULL);
		__this->___yDeg_19 = L_31;
		// position = target.position - (rotation * Vector3.forward * currentDistance + targetOffset);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = __this->___target_4;
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_32, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = __this->___rotation_24;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_34, L_35, NULL);
		float L_37 = __this->___currentDistance_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_36, L_37, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = __this->___targetOffset_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_38, L_39, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_33, L_40, NULL);
		__this->___position_25 = L_41;
		// }
		return;
	}
}
// System.Void SmoothCameraOrbit::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmoothCameraOrbit_LateUpdate_m7B76BB55A45B99866ACA445D9DB2AA9FCAF1D3E1 (SmoothCameraOrbit_t0CFEAEE46ACD3D6163F398CB2A1F0BDEE5BAF604* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetMouseButton(2) && Input.GetKey(KeyCode.LeftAlt) && Input.GetKey(KeyCode.LeftControl))
		bool L_0;
		L_0 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(2, NULL);
		if (!L_0)
		{
			goto IL_005c;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)308), NULL);
		if (!L_1)
		{
			goto IL_005c;
		}
	}
	{
		bool L_2;
		L_2 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)306), NULL);
		if (!L_2)
		{
			goto IL_005c;
		}
	}
	{
		// desiredDistance -= Input.GetAxis("Mouse Y") * 0.02f  * zoomRate*0.125f * Mathf.Abs(desiredDistance);
		float L_3 = __this->___desiredDistance_21;
		float L_4;
		L_4 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		int32_t L_5 = __this->___zoomRate_13;
		float L_6 = __this->___desiredDistance_21;
		float L_7;
		L_7 = fabsf(L_6);
		__this->___desiredDistance_21 = ((float)il2cpp_codegen_subtract(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_4, (0.0199999996f))), ((float)L_5))), (0.125f))), L_7))));
		goto IL_025e;
	}

IL_005c:
	{
		// else if (Input.GetMouseButton(0) )
		bool L_8;
		L_8 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(0, NULL);
		if (!L_8)
		{
			goto IL_014a;
		}
	}
	{
		// xDeg += Input.GetAxis("Mouse X") * xSpeed * 0.02f;
		float L_9 = __this->___xDeg_18;
		float L_10;
		L_10 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		float L_11 = __this->___xSpeed_9;
		__this->___xDeg_18 = ((float)il2cpp_codegen_add(L_9, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_10, L_11)), (0.0199999996f)))));
		// yDeg -= Input.GetAxis("Mouse Y") * ySpeed * 0.02f;
		float L_12 = __this->___yDeg_19;
		float L_13;
		L_13 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		float L_14 = __this->___ySpeed_10;
		__this->___yDeg_19 = ((float)il2cpp_codegen_subtract(L_12, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_13, L_14)), (0.0199999996f)))));
		// yDeg = ClampAngle(yDeg, yMinLimit, yMaxLimit);
		float L_15 = __this->___yDeg_19;
		int32_t L_16 = __this->___yMinLimit_11;
		int32_t L_17 = __this->___yMaxLimit_12;
		float L_18;
		L_18 = SmoothCameraOrbit_ClampAngle_m56DF546BB674B1CA2489FD90A7FF4CF53D3BFCA2(L_15, ((float)L_16), ((float)L_17), NULL);
		__this->___yDeg_19 = L_18;
		// desiredRotation = Quaternion.Euler(yDeg, xDeg, 0);
		float L_19 = __this->___yDeg_19;
		float L_20 = __this->___xDeg_18;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_19, L_20, (0.0f), NULL);
		__this->___desiredRotation_23 = L_21;
		// currentRotation = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_22);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
		L_23 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_22, NULL);
		__this->___currentRotation_22 = L_23;
		// rotation = Quaternion.Lerp(currentRotation, desiredRotation, 0.02f  * zoomDampening);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = __this->___currentRotation_22;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25 = __this->___desiredRotation_23;
		float L_26 = __this->___zoomDampening_15;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		L_27 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_24, L_25, ((float)il2cpp_codegen_multiply((0.0199999996f), L_26)), NULL);
		__this->___rotation_24 = L_27;
		// transform.rotation = rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29 = __this->___rotation_24;
		NullCheck(L_28);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_28, L_29, NULL);
		// idleTimer=0;
		__this->___idleTimer_26 = (0.0f);
		// idleSmooth=0;
		__this->___idleSmooth_27 = (0.0f);
		goto IL_025e;
	}

IL_014a:
	{
		// idleTimer+=0.02f ;
		float L_30 = __this->___idleTimer_26;
		__this->___idleTimer_26 = ((float)il2cpp_codegen_add(L_30, (0.0199999996f)));
		// if(idleTimer > autoRotate && autoRotate > 0){
		float L_31 = __this->___idleTimer_26;
		float L_32 = __this->___autoRotate_16;
		if ((!(((float)L_31) > ((float)L_32))))
		{
			goto IL_01d8;
		}
	}
	{
		float L_33 = __this->___autoRotate_16;
		if ((!(((float)L_33) > ((float)(0.0f)))))
		{
			goto IL_01d8;
		}
	}
	{
		// idleSmooth+=(0.02f +idleSmooth)*0.005f;
		float L_34 = __this->___idleSmooth_27;
		float L_35 = __this->___idleSmooth_27;
		__this->___idleSmooth_27 = ((float)il2cpp_codegen_add(L_34, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add((0.0199999996f), L_35)), (0.00499999989f)))));
		// idleSmooth = Mathf.Clamp(idleSmooth, 0, 1);
		float L_36 = __this->___idleSmooth_27;
		float L_37;
		L_37 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_36, (0.0f), (1.0f), NULL);
		__this->___idleSmooth_27 = L_37;
		// xDeg += xSpeed * Time.deltaTime * idleSmooth * autoRotateSpeed;
		float L_38 = __this->___xDeg_18;
		float L_39 = __this->___xSpeed_9;
		float L_40;
		L_40 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_41 = __this->___idleSmooth_27;
		float L_42 = __this->___autoRotateSpeed_17;
		__this->___xDeg_18 = ((float)il2cpp_codegen_add(L_38, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_39, L_40)), L_41)), L_42))));
	}

IL_01d8:
	{
		// yDeg = ClampAngle(yDeg, yMinLimit, yMaxLimit);
		float L_43 = __this->___yDeg_19;
		int32_t L_44 = __this->___yMinLimit_11;
		int32_t L_45 = __this->___yMaxLimit_12;
		float L_46;
		L_46 = SmoothCameraOrbit_ClampAngle_m56DF546BB674B1CA2489FD90A7FF4CF53D3BFCA2(L_43, ((float)L_44), ((float)L_45), NULL);
		__this->___yDeg_19 = L_46;
		// desiredRotation = Quaternion.Euler(yDeg, xDeg, 0);
		float L_47 = __this->___yDeg_19;
		float L_48 = __this->___xDeg_18;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_49;
		L_49 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_47, L_48, (0.0f), NULL);
		__this->___desiredRotation_23 = L_49;
		// currentRotation = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50;
		L_50 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_50);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_51;
		L_51 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_50, NULL);
		__this->___currentRotation_22 = L_51;
		// rotation = Quaternion.Lerp(currentRotation, desiredRotation, 0.02f  * zoomDampening*2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = __this->___currentRotation_22;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_53 = __this->___desiredRotation_23;
		float L_54 = __this->___zoomDampening_15;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_55;
		L_55 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_52, L_53, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((0.0199999996f), L_54)), (2.0f))), NULL);
		__this->___rotation_24 = L_55;
		// transform.rotation = rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_56;
		L_56 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_57 = __this->___rotation_24;
		NullCheck(L_56);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_56, L_57, NULL);
	}

IL_025e:
	{
		// desiredDistance -= Input.GetAxis("Mouse ScrollWheel") * 0.02f  * zoomRate * Mathf.Abs(desiredDistance);
		float L_58 = __this->___desiredDistance_21;
		float L_59;
		L_59 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0, NULL);
		int32_t L_60 = __this->___zoomRate_13;
		float L_61 = __this->___desiredDistance_21;
		float L_62;
		L_62 = fabsf(L_61);
		__this->___desiredDistance_21 = ((float)il2cpp_codegen_subtract(L_58, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_59, (0.0199999996f))), ((float)L_60))), L_62))));
		// desiredDistance = Mathf.Clamp(desiredDistance, minDistance, maxDistance);
		float L_63 = __this->___desiredDistance_21;
		float L_64 = __this->___minDistance_8;
		float L_65 = __this->___maxDistance_7;
		float L_66;
		L_66 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_63, L_64, L_65, NULL);
		__this->___desiredDistance_21 = L_66;
		// currentDistance = Mathf.Lerp(currentDistance, desiredDistance, 0.02f  * zoomDampening);
		float L_67 = __this->___currentDistance_20;
		float L_68 = __this->___desiredDistance_21;
		float L_69 = __this->___zoomDampening_15;
		float L_70;
		L_70 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_67, L_68, ((float)il2cpp_codegen_multiply((0.0199999996f), L_69)), NULL);
		__this->___currentDistance_20 = L_70;
		// position = target.position - (rotation * Vector3.forward * currentDistance + targetOffset);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_71 = __this->___target_4;
		NullCheck(L_71);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_71, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_73 = __this->___rotation_24;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75;
		L_75 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_73, L_74, NULL);
		float L_76 = __this->___currentDistance_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77;
		L_77 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_75, L_76, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78 = __this->___targetOffset_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		L_79 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_77, L_78, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80;
		L_80 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_72, L_79, NULL);
		__this->___position_25 = L_80;
		// transform.position = position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_81;
		L_81 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82 = __this->___position_25;
		NullCheck(L_81);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_81, L_82, NULL);
		// }
		return;
	}
}
// System.Single SmoothCameraOrbit::ClampAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SmoothCameraOrbit_ClampAngle_m56DF546BB674B1CA2489FD90A7FF4CF53D3BFCA2 (float ___angle0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	{
		// if (angle < -360)
		float L_0 = ___angle0;
		if ((!(((float)L_0) < ((float)(-360.0f)))))
		{
			goto IL_0011;
		}
	}
	{
		// angle += 360;
		float L_1 = ___angle0;
		___angle0 = ((float)il2cpp_codegen_add(L_1, (360.0f)));
	}

IL_0011:
	{
		// if (angle > 360)
		float L_2 = ___angle0;
		if ((!(((float)L_2) > ((float)(360.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		// angle -= 360;
		float L_3 = ___angle0;
		___angle0 = ((float)il2cpp_codegen_subtract(L_3, (360.0f)));
	}

IL_0022:
	{
		// return Mathf.Clamp(angle, min, max);
		float L_4 = ___angle0;
		float L_5 = ___min1;
		float L_6 = ___max2;
		float L_7;
		L_7 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Void SmoothCameraOrbit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmoothCameraOrbit__ctor_mB9EFF8A0F39CEBBDB297E5373AA761E2FB9D55E3 (SmoothCameraOrbit_t0CFEAEE46ACD3D6163F398CB2A1F0BDEE5BAF604* __this, const RuntimeMethod* method) 
{
	{
		// public float distance = 5.0f;
		__this->___distance_6 = (5.0f);
		// public float maxDistance = 20;
		__this->___maxDistance_7 = (20.0f);
		// public float minDistance = .6f;
		__this->___minDistance_8 = (0.600000024f);
		// public float xSpeed = 200.0f;
		__this->___xSpeed_9 = (200.0f);
		// public float ySpeed = 200.0f;
		__this->___ySpeed_10 = (200.0f);
		// public int yMinLimit = -80;
		__this->___yMinLimit_11 = ((int32_t)-80);
		// public int yMaxLimit = 80;
		__this->___yMaxLimit_12 = ((int32_t)80);
		// public int zoomRate = 40;
		__this->___zoomRate_13 = ((int32_t)40);
		// public float panSpeed = 0.3f;
		__this->___panSpeed_14 = (0.300000012f);
		// public float zoomDampening = 5.0f;
		__this->___zoomDampening_15 = (5.0f);
		// public float autoRotate = 1f;
		__this->___autoRotate_16 = (1.0f);
		// public float autoRotateSpeed = 0.1f;
		__this->___autoRotateSpeed_17 = (0.100000001f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UnluckFlagGUI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnluckFlagGUI_Start_mB7FCD250ECE1D1803A9264C52231134B479D9933 (UnluckFlagGUI_t81F54AD0354B397303687FCAE746A1EC7EB03FC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mB98D37FCCC2A4EA5C272368FDF5442826FA876FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_m6D2EA454E808E4854EA6AE50E04BF626BFFD47B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral216233785C4F99F9CB70614B8FB4769281FA4344);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral233CCF10B9B3B854690C92DE74642E689F60D4BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26CA1D5E2F6785F2DC7432A0B6AD44F0E0349443);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral271231300CD079FDDEDEC87538EB8B13373F899A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36BA7B0458B843FB2185BAF7BE67B534C80DCDCE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49A1547E04CA1E309B633B4E8199448F2BA4708D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD126ED6792067946E651D9ADE1FBF42D7961FB1A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Swap ();
		UnluckFlagGUI_Swap_m4F10D793CCC3D9BF1B4259916CF00CC6FEAE00E2(__this, NULL);
		// if(txt == null)
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_0 = __this->___txt_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		// txt = transform.Find("txt").GetComponent<TextMesh>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_2, _stringLiteral216233785C4F99F9CB70614B8FB4769281FA4344, NULL);
		NullCheck(L_3);
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_4;
		L_4 = Component_GetComponent_TisTextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_m6D2EA454E808E4854EA6AE50E04BF626BFFD47B8(L_3, Component_GetComponent_TisTextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_m6D2EA454E808E4854EA6AE50E04BF626BFFD47B8_RuntimeMethod_var);
		__this->___txt_16 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___txt_16), (void*)L_4);
	}

IL_002f:
	{
		// if(nextButton == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___nextButton_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		// nextButton = transform.Find("nextButton").GetComponent<GameObject>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_7, _stringLiteral271231300CD079FDDEDEC87538EB8B13373F899A, NULL);
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_GetComponent_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mB98D37FCCC2A4EA5C272368FDF5442826FA876FC(L_8, Component_GetComponent_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mB98D37FCCC2A4EA5C272368FDF5442826FA876FC_RuntimeMethod_var);
		__this->___nextButton_7 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nextButton_7), (void*)L_9);
	}

IL_0058:
	{
		// if(prevButton == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___prevButton_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0081;
		}
	}
	{
		// prevButton = transform.Find("prevButton").GetComponent<GameObject>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_12, _stringLiteral233CCF10B9B3B854690C92DE74642E689F60D4BD, NULL);
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_GetComponent_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mB98D37FCCC2A4EA5C272368FDF5442826FA876FC(L_13, Component_GetComponent_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mB98D37FCCC2A4EA5C272368FDF5442826FA876FC_RuntimeMethod_var);
		__this->___prevButton_8 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___prevButton_8), (void*)L_14);
	}

IL_0081:
	{
		// if(bgrButton == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___bgrButton_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_00aa;
		}
	}
	{
		// bgrButton = transform.Find("bgrButton").GetComponent<GameObject>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_17, _stringLiteralD126ED6792067946E651D9ADE1FBF42D7961FB1A, NULL);
		NullCheck(L_18);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Component_GetComponent_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mB98D37FCCC2A4EA5C272368FDF5442826FA876FC(L_18, Component_GetComponent_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mB98D37FCCC2A4EA5C272368FDF5442826FA876FC_RuntimeMethod_var);
		__this->___bgrButton_9 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bgrButton_9), (void*)L_19);
	}

IL_00aa:
	{
		// if(lightButton == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___lightButton_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_20, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_21)
		{
			goto IL_00d3;
		}
	}
	{
		// lightButton = transform.Find("lightButton").gameObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_22, _stringLiteral49A1547E04CA1E309B633B4E8199448F2BA4708D, NULL);
		NullCheck(L_23);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_23, NULL);
		__this->___lightButton_10 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lightButton_10), (void*)L_24);
	}

IL_00d3:
	{
		// if(texturePreview == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___texturePreview_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_25, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_26)
		{
			goto IL_00fc;
		}
	}
	{
		// texturePreview = transform.Find("texturePreview").GetComponent<GameObject>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_27, _stringLiteral36BA7B0458B843FB2185BAF7BE67B534C80DCDCE, NULL);
		NullCheck(L_28);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = Component_GetComponent_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mB98D37FCCC2A4EA5C272368FDF5442826FA876FC(L_28, Component_GetComponent_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mB98D37FCCC2A4EA5C272368FDF5442826FA876FC_RuntimeMethod_var);
		__this->___texturePreview_11 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___texturePreview_11), (void*)L_29);
	}

IL_00fc:
	{
		// if(debug == null)
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_30 = __this->___debug_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_30, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_31)
		{
			goto IL_0125;
		}
	}
	{
		// debug = transform.Find("debug").GetComponent<TextMesh>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_32, _stringLiteral26CA1D5E2F6785F2DC7432A0B6AD44F0E0349443, NULL);
		NullCheck(L_33);
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_34;
		L_34 = Component_GetComponent_TisTextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_m6D2EA454E808E4854EA6AE50E04BF626BFFD47B8(L_33, Component_GetComponent_TisTextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_m6D2EA454E808E4854EA6AE50E04BF626BFFD47B8_RuntimeMethod_var);
		__this->___debug_17 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___debug_17), (void*)L_34);
	}

IL_0125:
	{
		// }
		return;
	}
}
// System.Void UnluckFlagGUI::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnluckFlagGUI_Update_mAAF47B9BEE6DC84D2C8CD3326833BDB82EB3A411 (UnluckFlagGUI_t81F54AD0354B397303687FCAE746A1EC7EB03FC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(Input.GetMouseButtonUp(0)){
		bool L_0;
		L_0 = Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6(0, NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// ButtonUp();
		UnluckFlagGUI_ButtonUp_m2029E33ADF47A260958ACD56DF2855E93513170C(__this, NULL);
	}

IL_000e:
	{
		// if(Input.GetKeyUp("right"))
		bool L_1;
		L_1 = Input_GetKeyUp_m504C6CF9A40BD840964AD0495266CD003676289E(_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// Next();
		UnluckFlagGUI_Next_mB10B863D2BE3488513A9F6E317BA658A9F4A89B5(__this, NULL);
	}

IL_0020:
	{
		// if(Input.GetKeyUp("left"))
		bool L_2;
		L_2 = Input_GetKeyUp_m504C6CF9A40BD840964AD0495266CD003676289E(_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, NULL);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// Prev();
		UnluckFlagGUI_Prev_mE25287567D16C46DFF282D432302B22857A39FBA(__this, NULL);
	}

IL_0032:
	{
		// if(Input.GetKeyUp("space")){
		bool L_3;
		L_3 = Input_GetKeyUp_m504C6CF9A40BD840964AD0495266CD003676289E(_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2, NULL);
		if (!L_3)
		{
			goto IL_00d2;
		}
	}
	{
		// nextButton.SetActive(!nextButton.activeInHierarchy);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___nextButton_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___nextButton_7;
		NullCheck(L_5);
		bool L_6;
		L_6 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_5, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0), NULL);
		// prevButton.SetActive(nextButton.activeInHierarchy);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___prevButton_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___nextButton_7;
		NullCheck(L_8);
		bool L_9;
		L_9 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_8, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, L_9, NULL);
		// bgrButton.SetActive(nextButton.activeInHierarchy);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___bgrButton_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___nextButton_7;
		NullCheck(L_11);
		bool L_12;
		L_12 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_11, NULL);
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, L_12, NULL);
		// texturePreview.SetActive(nextButton.activeInHierarchy);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___texturePreview_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___nextButton_7;
		NullCheck(L_14);
		bool L_15;
		L_15 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_14, NULL);
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, L_15, NULL);
		// txt.gameObject.SetActive(nextButton.activeInHierarchy);
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_16 = __this->___txt_16;
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___nextButton_7;
		NullCheck(L_18);
		bool L_19;
		L_19 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_18, NULL);
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, L_19, NULL);
		// lightButton.gameObject.SetActive(nextButton.activeInHierarchy);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___lightButton_10;
		NullCheck(L_20);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_20, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___nextButton_7;
		NullCheck(L_22);
		bool L_23;
		L_23 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_22, NULL);
		NullCheck(L_21);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_21, L_23, NULL);
	}

IL_00d2:
	{
		// }
		return;
	}
}
// System.Void UnluckFlagGUI::ButtonUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnluckFlagGUI_ButtonUp_m2029E33ADF47A260958ACD56DF2855E93513170C (UnluckFlagGUI_t81F54AD0354B397303687FCAE746A1EC7EB03FC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Ray ray    = Camera.main.ScreenPointToRay(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_0);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_2;
		L_2 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_0, L_1, NULL);
		// RaycastHit hit = new RaycastHit();
		il2cpp_codegen_initobj((&V_0), sizeof(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5));
		// if (Physics.Raycast (ray, out hit)) {
		bool L_3;
		L_3 = Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5(L_2, (&V_0), NULL);
		if (!L_3)
		{
			goto IL_009f;
		}
	}
	{
		// if(hit.transform.gameObject == nextButton)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___nextButton_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		// Next();
		UnluckFlagGUI_Next_mB10B863D2BE3488513A9F6E317BA658A9F4A89B5(__this, NULL);
		return;
	}

IL_0040:
	{
		// else if(hit.transform.gameObject == prevButton)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___prevButton_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_9, L_10, NULL);
		if (!L_11)
		{
			goto IL_0060;
		}
	}
	{
		// Prev();
		UnluckFlagGUI_Prev_mE25287567D16C46DFF282D432302B22857A39FBA(__this, NULL);
		return;
	}

IL_0060:
	{
		// else if(hit.transform.gameObject == bgrButton)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___bgrButton_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_13, L_14, NULL);
		if (!L_15)
		{
			goto IL_0080;
		}
	}
	{
		// NextBgr();
		UnluckFlagGUI_NextBgr_m02309B6F2389F170FFF1A05BB6B1241DC6142C9E(__this, NULL);
		return;
	}

IL_0080:
	{
		// else if(hit.transform.gameObject == lightButton)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___lightButton_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_17, L_18, NULL);
		if (!L_19)
		{
			goto IL_009f;
		}
	}
	{
		// LightChange();
		UnluckFlagGUI_LightChange_mAC40CD15E7ECA87AF404E2E0E955B01FE9BF92CE(__this, NULL);
	}

IL_009f:
	{
		// }
		return;
	}
}
// System.Void UnluckFlagGUI::LightChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnluckFlagGUI_LightChange_mAC40CD15E7ECA87AF404E2E0E955B01FE9BF92CE (UnluckFlagGUI_t81F54AD0354B397303687FCAE746A1EC7EB03FC4* __this, const RuntimeMethod* method) 
{
	{
		// if(lights.Length > 0){
		LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* L_0 = __this->___lights_6;
		NullCheck(L_0);
		if (!(((RuntimeArray*)L_0)->max_length))
		{
			goto IL_0054;
		}
	}
	{
		// lights[lCounter].enabled = false;
		LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* L_1 = __this->___lights_6;
		int32_t L_2 = __this->___lCounter_15;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_4, (bool)0, NULL);
		// lCounter++;
		int32_t L_5 = __this->___lCounter_15;
		__this->___lCounter_15 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// if(lCounter >= lights.Length)
		int32_t L_6 = __this->___lCounter_15;
		LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* L_7 = __this->___lights_6;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_0041;
		}
	}
	{
		// lCounter = 0;
		__this->___lCounter_15 = 0;
	}

IL_0041:
	{
		// lights[lCounter].enabled = true;
		LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* L_8 = __this->___lights_6;
		int32_t L_9 = __this->___lCounter_15;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_11, (bool)1, NULL);
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void UnluckFlagGUI::NextBgr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnluckFlagGUI_NextBgr_m02309B6F2389F170FFF1A05BB6B1241DC6142C9E (UnluckFlagGUI_t81F54AD0354B397303687FCAE746A1EC7EB03FC4* __this, const RuntimeMethod* method) 
{
	{
		// if(bgrs.Length > 0){
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_0 = __this->___bgrs_5;
		NullCheck(L_0);
		if (!(((RuntimeArray*)L_0)->max_length))
		{
			goto IL_0040;
		}
	}
	{
		// bCounter++;
		int32_t L_1 = __this->___bCounter_14;
		__this->___bCounter_14 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		// if(bCounter >= bgrs.Length)
		int32_t L_2 = __this->___bCounter_14;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_3 = __this->___bgrs_5;
		NullCheck(L_3);
		if ((((int32_t)L_2) < ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_002e;
		}
	}
	{
		// bCounter = 0;
		__this->___bCounter_14 = 0;
	}

IL_002e:
	{
		// RenderSettings.skybox = bgrs[bCounter];
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_4 = __this->___bgrs_5;
		int32_t L_5 = __this->___bCounter_14;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		RenderSettings_set_skybox_m7988CC3217B1456CA0A7294127527BFC18EEC872(L_7, NULL);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void UnluckFlagGUI::Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnluckFlagGUI_Next_mB10B863D2BE3488513A9F6E317BA658A9F4A89B5 (UnluckFlagGUI_t81F54AD0354B397303687FCAE746A1EC7EB03FC4* __this, const RuntimeMethod* method) 
{
	{
		// counter++;
		int32_t L_0 = __this->___counter_13;
		__this->___counter_13 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// if(counter > prefabs.Length -1)
		int32_t L_1 = __this->___counter_13;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___prefabs_4;
		NullCheck(L_2);
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1)))))
		{
			goto IL_0027;
		}
	}
	{
		// counter = 0;
		__this->___counter_13 = 0;
	}

IL_0027:
	{
		// Swap ();
		UnluckFlagGUI_Swap_m4F10D793CCC3D9BF1B4259916CF00CC6FEAE00E2(__this, NULL);
		// }
		return;
	}
}
// System.Void UnluckFlagGUI::Prev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnluckFlagGUI_Prev_mE25287567D16C46DFF282D432302B22857A39FBA (UnluckFlagGUI_t81F54AD0354B397303687FCAE746A1EC7EB03FC4* __this, const RuntimeMethod* method) 
{
	{
		// counter--;
		int32_t L_0 = __this->___counter_13;
		__this->___counter_13 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// if(counter < 0)
		int32_t L_1 = __this->___counter_13;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		// counter = prefabs.Length -1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___prefabs_4;
		NullCheck(L_2);
		__this->___counter_13 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1));
	}

IL_0027:
	{
		// Swap ();
		UnluckFlagGUI_Swap_m4F10D793CCC3D9BF1B4259916CF00CC6FEAE00E2(__this, NULL);
		// }
		return;
	}
}
// System.Void UnluckFlagGUI::Swap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnluckFlagGUI_Swap_m4F10D793CCC3D9BF1B4259916CF00CC6FEAE00E2 (UnluckFlagGUI_t81F54AD0354B397303687FCAE746A1EC7EB03FC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisUnluckAnimatedMesh_tC8F263959EBB80897E44E8534FC4B91D07F7C653_m8B1554743E92E25578F5F4F49676CB2BA0B6CC0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07F5E183BDC5EF824F759265E5E7FE4D14019E30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD41D89DAD98E1F1783260FD0A5A774F557A05F0F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// if(prefabs.Length > 0){
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___prefabs_4;
		NullCheck(L_0);
		if (!(((RuntimeArray*)L_0)->max_length))
		{
			goto IL_012a;
		}
	}
	{
		// Destroy(activeObj);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___activeObj_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_1, NULL);
		// GameObject o = (GameObject)Instantiate(prefabs[counter]);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___prefabs_4;
		int32_t L_3 = __this->___counter_13;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_5, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		V_0 = L_6;
		// activeObj = o;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_0;
		__this->___activeObj_12 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___activeObj_12), (void*)L_7);
		// if(txt != null){
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_8 = __this->___txt_16;
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_00fc;
		}
	}
	{
		// txt.text = activeObj.name;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_10 = __this->___txt_16;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___activeObj_12;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_11, NULL);
		NullCheck(L_10);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_10, L_12, NULL);
		// txt.text = txt.text.Replace("(Clone)", "");
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_13 = __this->___txt_16;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_14 = __this->___txt_16;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = TextMesh_get_text_mB3E900AED17390DE50DFC984428BC29EB1CA60A2(L_14, NULL);
		NullCheck(L_15);
		String_t* L_16;
		L_16 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_15, _stringLiteralD41D89DAD98E1F1783260FD0A5A774F557A05F0F, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		NullCheck(L_13);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_13, L_16, NULL);
		// txt.text = txt.text + " " + activeObj.GetComponent<UnluckAnimatedMesh>().meshContainerFBX.name;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_17 = __this->___txt_16;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_18 = __this->___txt_16;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = TextMesh_get_text_mB3E900AED17390DE50DFC984428BC29EB1CA60A2(L_18, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___activeObj_12;
		NullCheck(L_20);
		UnluckAnimatedMesh_tC8F263959EBB80897E44E8534FC4B91D07F7C653* L_21;
		L_21 = GameObject_GetComponent_TisUnluckAnimatedMesh_tC8F263959EBB80897E44E8534FC4B91D07F7C653_m8B1554743E92E25578F5F4F49676CB2BA0B6CC0A(L_20, GameObject_GetComponent_TisUnluckAnimatedMesh_tC8F263959EBB80897E44E8534FC4B91D07F7C653_m8B1554743E92E25578F5F4F49676CB2BA0B6CC0A_RuntimeMethod_var);
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = L_21->___meshContainerFBX_6;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_22, NULL);
		String_t* L_24;
		L_24 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_19, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_23, NULL);
		NullCheck(L_17);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_17, L_24, NULL);
		// txt.text = txt.text.Replace("_", " ");
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_25 = __this->___txt_16;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_26 = __this->___txt_16;
		NullCheck(L_26);
		String_t* L_27;
		L_27 = TextMesh_get_text_mB3E900AED17390DE50DFC984428BC29EB1CA60A2(L_26, NULL);
		NullCheck(L_27);
		String_t* L_28;
		L_28 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_27, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		NullCheck(L_25);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_25, L_28, NULL);
		// txt.text = txt.text.Replace("Flag ", "");
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_29 = __this->___txt_16;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_30 = __this->___txt_16;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = TextMesh_get_text_mB3E900AED17390DE50DFC984428BC29EB1CA60A2(L_30, NULL);
		NullCheck(L_31);
		String_t* L_32;
		L_32 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_31, _stringLiteral07F5E183BDC5EF824F759265E5E7FE4D14019E30, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		NullCheck(L_29);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_29, L_32, NULL);
	}

IL_00fc:
	{
		// if(texturePreview != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = __this->___texturePreview_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_33, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_34)
		{
			goto IL_012a;
		}
	}
	{
		// texturePreview.GetComponent<Renderer>().sharedMaterial = activeObj.GetComponent<Renderer>().sharedMaterial;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = __this->___texturePreview_11;
		NullCheck(L_35);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_36;
		L_36 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_35, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = __this->___activeObj_12;
		NullCheck(L_37);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_38;
		L_38 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_37, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		NullCheck(L_38);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_39;
		L_39 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_38, NULL);
		NullCheck(L_36);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_36, L_39, NULL);
	}

IL_012a:
	{
		// }
		return;
	}
}
// System.Void UnluckFlagGUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnluckFlagGUI__ctor_mE5C788346B5D713D971E7F936E06E8E0D99CE79C (UnluckFlagGUI_t81F54AD0354B397303687FCAE746A1EC7EB03FC4* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UnluckFPS::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnluckFPS_Start_m516BC1A89676A8B99429A8E770AD513E56F7D3C1 (UnluckFPS_tC3700EF0AB8332E2DF0755D4BE24ED8534D21EF9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_m6D2EA454E808E4854EA6AE50E04BF626BFFD47B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// timeleft = updateInterval;
		float L_0 = __this->___updateInterval_5;
		__this->___timeleft_8 = L_0;
		// _textMesh = transform.GetComponent<TextMesh>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_2;
		L_2 = Component_GetComponent_TisTextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_m6D2EA454E808E4854EA6AE50E04BF626BFFD47B8(L_1, Component_GetComponent_TisTextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_m6D2EA454E808E4854EA6AE50E04BF626BFFD47B8_RuntimeMethod_var);
		__this->____textMesh_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____textMesh_4), (void*)L_2);
		// }
		return;
	}
}
// System.Void UnluckFPS::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnluckFPS_Update_m1D20D20D2FA3BC19146382EEF23B6DEBADC561AE (UnluckFPS_tC3700EF0AB8332E2DF0755D4BE24ED8534D21EF9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D1F2A5F700DC47A3F58F9EC4CEBF17C1B07E796);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36967F33A1482179FE45CD9CCC3AE6241AA43F85);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// timeleft -= Time.deltaTime;
		float L_0 = __this->___timeleft_8;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timeleft_8 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// accum += Time.timeScale/Time.deltaTime;
		float L_2 = __this->___accum_6;
		float L_3;
		L_3 = Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616(NULL);
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___accum_6 = ((float)il2cpp_codegen_add(L_2, ((float)(L_3/L_4))));
		// ++frames;
		int32_t L_5 = __this->___frames_7;
		__this->___frames_7 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// if( timeleft <= 0.0f )
		float L_6 = __this->___timeleft_8;
		if ((!(((float)L_6) <= ((float)(0.0f)))))
		{
			goto IL_0093;
		}
	}
	{
		// _textMesh.text = "FPS " + (accum/frames).ToString("f2");
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_7 = __this->____textMesh_4;
		float L_8 = __this->___accum_6;
		int32_t L_9 = __this->___frames_7;
		V_0 = ((float)(L_8/((float)L_9)));
		String_t* L_10;
		L_10 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&V_0), _stringLiteral36967F33A1482179FE45CD9CCC3AE6241AA43F85, NULL);
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral0D1F2A5F700DC47A3F58F9EC4CEBF17C1B07E796, L_10, NULL);
		NullCheck(L_7);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_7, L_11, NULL);
		// timeleft = updateInterval;
		float L_12 = __this->___updateInterval_5;
		__this->___timeleft_8 = L_12;
		// accum = 0.0f;
		__this->___accum_6 = (0.0f);
		// frames = 0;
		__this->___frames_7 = 0;
	}

IL_0093:
	{
		// }
		return;
	}
}
// System.Void UnluckFPS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnluckFPS__ctor_m8A54AE884A5E62DB1D1D67638F12D1485068E440 (UnluckFPS_tC3700EF0AB8332E2DF0755D4BE24ED8534D21EF9* __this, const RuntimeMethod* method) 
{
	{
		// public float updateInterval = 0.5f;
		__this->___updateInterval_5 = (0.5f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UnluckAnimatedMesh::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnluckAnimatedMesh_Start_m4AA68772100C8CB3F007784C8C0B72C360878E7B (UnluckAnimatedMesh_tC8F263959EBB80897E44E8534FC4B91D07F7C653* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnluckAnimatedMesh_tC8F263959EBB80897E44E8534FC4B91D07F7C653_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54F48823060A5886D12558C4BBB0CDBB0E83F58A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transformCache = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		__this->___transformCache_29 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___transformCache_29), (void*)L_0);
		// CheckIfMeshHasChanged();
		UnluckAnimatedMesh_CheckIfMeshHasChanged_m10140A9B367A9538879B961CA704B1A81068F938(__this, NULL);
		// startDelay = UnityEngine.Random.Range(randomStartDelay.x, randomStartDelay.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (&__this->___randomStartDelay_24);
		float L_2 = L_1->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&__this->___randomStartDelay_24);
		float L_4 = L_3->___y_1;
		float L_5;
		L_5 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_2, L_4, NULL);
		__this->___startDelay_25 = L_5;
		// updateSeed+=0.0005f;
		float L_6 = ((UnluckAnimatedMesh_tC8F263959EBB80897E44E8534FC4B91D07F7C653_StaticFields*)il2cpp_codegen_static_fields_for(UnluckAnimatedMesh_tC8F263959EBB80897E44E8534FC4B91D07F7C653_il2cpp_TypeInfo_var))->___updateSeed_27;
		((UnluckAnimatedMesh_tC8F263959EBB80897E44E8534FC4B91D07F7C653_StaticFields*)il2cpp_codegen_static_fields_for(UnluckAnimatedMesh_tC8F263959EBB80897E44E8534FC4B91D07F7C653_il2cpp_TypeInfo_var))->___updateSeed_27 = ((float)il2cpp_codegen_add(L_6, (0.000500000024f)));
		// if(playOnAwake)
		bool L_7 = __this->___playOnAwake_23;
		if (!L_7)
		{
			goto IL_0062;
		}
	}
	{
		// Invoke("Play", updateInterval+updateSeed);
		float L_8 = __this->___updateInterval_15;
		float L_9 = ((UnluckAnimatedMesh_tC8F263959EBB80897E44E8534FC4B91D07F7C653_StaticFields*)il2cpp_codegen_static_fields_for(UnluckAnimatedMesh_tC8F263959EBB80897E44E8534FC4B91D07F7C653_il2cpp_TypeInfo_var))->___updateSeed_27;
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral54F48823060A5886D12558C4BBB0CDBB0E83F58A, ((float)il2cpp_codegen_add(L_8, L_9)), NULL);
	}

IL_0062:
	{
		// if(updateSeed >= updateInterval)
		float L_10 = ((UnluckAnimatedMesh_tC8F263959EBB80897E44E8534FC4B91D07F7C653_StaticFields*)il2cpp_codegen_static_fields_for(UnluckAnimatedMesh_tC8F263959EBB80897E44E8534FC4B91D07F7C653_il2cpp_TypeInfo_var))->___updateSeed_27;
		float L_11 = __this->___updateInterval_15;
		if ((!(((float)L_10) >= ((float)L_11))))
		{
			goto IL_0079;
		}
	}
	{
		// updateSeed = 0.0f;
		((UnluckAnimatedMesh_tC8F263959EBB80897E44E8534FC4B91D07F7C653_StaticFields*)il2cpp_codegen_static_fields_for(UnluckAnimatedMesh_tC8F263959EBB80897E44E8534FC4B91D07F7C653_il2cpp_TypeInfo_var))->___updateSeed_27 = (0.0f);
	}

IL_0079:
	{
		// if(rendererComponent == null)GetRequiredComponents();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_12 = __this->___rendererComponent_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_13)
		{
			goto IL_008d;
		}
	}
	{
		// if(rendererComponent == null)GetRequiredComponents();
		UnluckAnimatedMesh_GetRequiredComponents_mE32A5EB6F077081B48B7875C5D4371DD03F35A5A(__this, NULL);
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.Void UnluckAnimatedMesh::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnluckAnimatedMesh_Play_m9BF1819371D34201C392A4F693473B374C22F186 (UnluckAnimatedMesh_tC8F263959EBB80897E44E8534FC4B91D07F7C653* __this, const RuntimeMethod* method) 
{
	{
		// CancelInvoke();
		MonoBehaviour_CancelInvoke_m177BCBDFCEA3E09C02E3E444BF4FBA648FAE3CFA(__this, NULL);
		// if(randomStartFrame)
		bool L_0 = __this->___randomStartFrame_19;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		// currentFrame = meshCacheCount*UnityEngine.Random.value;
		int32_t L_1 = __this->___meshCacheCount_12;
		float L_2;
		L_2 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		__this->___currentFrame_11 = ((float)il2cpp_codegen_multiply(((float)L_1), L_2));
		goto IL_002e;
	}

IL_0023:
	{
		// currentFrame = 0.0f;
		__this->___currentFrame_11 = (0.0f);
	}

IL_002e:
	{
		// meshFilter.sharedMesh = meshCache[(int)currentFrame].sharedMesh;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_3 = __this->___meshFilter_13;
		MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA* L_4 = __this->___meshCache_4;
		float L_5 = __this->___currentFrame_11;
		NullCheck(L_4);
		int32_t L_6 = il2cpp_codegen_cast_double_to_int<int32_t>(L_5);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_8;
		L_8 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_7, NULL);
		NullCheck(L_3);
		MeshFilter_set_sharedMesh_m946F7E3F583761982642BDA4753784AF1DF6E16F(L_3, L_8, NULL);
		// this.enabled = true;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)1, NULL);
		// RandomizePlaySpeed();
		UnluckAnimatedMesh_RandomizePlaySpeed_m62111CB16D694B02B4C594027AC110CDEF437694(__this, NULL);
		// RandomRotate();
		UnluckAnimatedMesh_RandomRotate_m765CEB919919C735440FEB7C9AD377C6262236D4(__this, NULL);
		// }
		return;
	}
}
// System.Void UnluckAnimatedMesh::RandomRotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnluckAnimatedMesh_RandomRotate_m765CEB919919C735440FEB7C9AD377C6262236D4 (UnluckAnimatedMesh_tC8F263959EBB80897E44E8534FC4B91D07F7C653* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// if(randomRotateX)
		bool L_0 = __this->___randomRotateX_16;
		if (!L_0)
		{
			goto IL_0043;
		}
	}
	{
		// var tmp_cs1 = transformCache.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___transformCache_29;
		NullCheck(L_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_1, NULL);
		V_0 = L_2;
		// var tmp_cs2 = tmp_cs1.eulerAngles;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_0), NULL);
		V_1 = L_3;
		// tmp_cs2.x = (float)UnityEngine.Random.Range(0, 360);
		int32_t L_4;
		L_4 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)360), NULL);
		(&V_1)->___x_2 = ((float)L_4);
		// tmp_cs1.eulerAngles = tmp_cs2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_1;
		Quaternion_set_eulerAngles_m441C342F21FEFCED9BABED01FA516C97EA424D6E_inline((&V_0), L_5, NULL);
		// transformCache.localRotation = tmp_cs1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___transformCache_29;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = V_0;
		NullCheck(L_6);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_6, L_7, NULL);
	}

IL_0043:
	{
		// if(randomRotateY)
		bool L_8 = __this->___randomRotateY_17;
		if (!L_8)
		{
			goto IL_0086;
		}
	}
	{
		// var tmp_cs3 = transformCache.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___transformCache_29;
		NullCheck(L_9);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_9, NULL);
		V_2 = L_10;
		// var tmp_cs4 = tmp_cs3.eulerAngles;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_2), NULL);
		V_3 = L_11;
		// tmp_cs4.y = (float)UnityEngine.Random.Range(0, 360);
		int32_t L_12;
		L_12 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)360), NULL);
		(&V_3)->___y_3 = ((float)L_12);
		// tmp_cs3.eulerAngles = tmp_cs4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_3;
		Quaternion_set_eulerAngles_m441C342F21FEFCED9BABED01FA516C97EA424D6E_inline((&V_2), L_13, NULL);
		// transformCache.localRotation = tmp_cs3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->___transformCache_29;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15 = V_2;
		NullCheck(L_14);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_14, L_15, NULL);
	}

IL_0086:
	{
		// if(randomRotateZ)
		bool L_16 = __this->___randomRotateZ_18;
		if (!L_16)
		{
			goto IL_00cd;
		}
	}
	{
		// var tmp_cs5 = transformCache.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = __this->___transformCache_29;
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_17, NULL);
		V_4 = L_18;
		// var tmp_cs6 = tmp_cs5.eulerAngles;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_4), NULL);
		V_5 = L_19;
		// tmp_cs6.z = (float)UnityEngine.Random.Range(0, 360);
		int32_t L_20;
		L_20 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)360), NULL);
		(&V_5)->___z_4 = ((float)L_20);
		// tmp_cs5.eulerAngles = tmp_cs6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_5;
		Quaternion_set_eulerAngles_m441C342F21FEFCED9BABED01FA516C97EA424D6E_inline((&V_4), L_21, NULL);
		// transformCache.localRotation = tmp_cs5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = __this->___transformCache_29;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23 = V_4;
		NullCheck(L_22);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_22, L_23, NULL);
	}

IL_00cd:
	{
		// }
		return;
	}
}
// System.Void UnluckAnimatedMesh::GetRequiredComponents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnluckAnimatedMesh_GetRequiredComponents_mE32A5EB6F077081B48B7875C5D4371DD03F35A5A (UnluckAnimatedMesh_tC8F263959EBB80897E44E8534FC4B91D07F7C653* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rendererComponent = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0;
		L_0 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		__this->___rendererComponent_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rendererComponent_14), (void*)L_0);
		// }
		return;
	}
}
// System.Void UnluckAnimatedMesh::RandomizePlaySpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnluckAnimatedMesh_RandomizePlaySpeed_m62111CB16D694B02B4C594027AC110CDEF437694 (UnluckAnimatedMesh_tC8F263959EBB80897E44E8534FC4B91D07F7C653* __this, const RuntimeMethod* method) 
{
	{
		// if(playSpeedRandom > 0)
		float L_0 = __this->___playSpeedRandom_8;
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_0033;
		}
	}
	{
		// currentSpeed = UnityEngine.Random.Range(playSpeed-playSpeedRandom, playSpeed+playSpeedRandom);
		float L_1 = __this->___playSpeed_7;
		float L_2 = __this->___playSpeedRandom_8;
		float L_3 = __this->___playSpeed_7;
		float L_4 = __this->___playSpeedRandom_8;
		float L_5;
		L_5 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)il2cpp_codegen_subtract(L_1, L_2)), ((float)il2cpp_codegen_add(L_3, L_4)), NULL);
		__this->___currentSpeed_10 = L_5;
		return;
	}

IL_0033:
	{
		// currentSpeed = playSpeed;
		float L_6 = __this->___playSpeed_7;
		__this->___currentSpeed_10 = L_6;
		// }
		return;
	}
}
// System.Void UnluckAnimatedMesh::FillCacheArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnluckAnimatedMesh_FillCacheArray_m38FE9F79EC23A8E5BC7BC2EDCAEE2DE63E99FFD9 (UnluckAnimatedMesh_tC8F263959EBB80897E44E8534FC4B91D07F7C653* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// GetRequiredComponents();
		UnluckAnimatedMesh_GetRequiredComponents_mE32A5EB6F077081B48B7875C5D4371DD03F35A5A(__this, NULL);
		// if(transformCache == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___transformCache_29;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// transformCache = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		__this->___transformCache_29 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___transformCache_29), (void*)L_2);
	}

IL_0020:
	{
		// meshFilter = transformCache.GetComponent<MeshFilter>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___transformCache_29;
		NullCheck(L_3);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_4;
		L_4 = Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623(L_3, Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		__this->___meshFilter_13 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshFilter_13), (void*)L_4);
		// meshCacheCount = meshContainerFBX.childCount;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___meshContainerFBX_6;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_5, NULL);
		__this->___meshCacheCount_12 = L_6;
		// meshCached = meshContainerFBX;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___meshContainerFBX_6;
		__this->___meshCached_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshCached_5), (void*)L_7);
		// meshCache = new MeshFilter[meshCacheCount];
		int32_t L_8 = __this->___meshCacheCount_12;
		MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA* L_9 = (MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA*)(MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA*)SZArrayNew(MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->___meshCache_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshCache_4), (void*)L_9);
		// for(int i = 0; i < meshCacheCount; i++){
		V_0 = 0;
		goto IL_0080;
	}

IL_0063:
	{
		// meshCache[i] = meshContainerFBX.GetChild(i).GetComponent<MeshFilter>();
		MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA* L_10 = __this->___meshCache_4;
		int32_t L_11 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___meshContainerFBX_6;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_12, L_13, NULL);
		NullCheck(L_14);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_15;
		L_15 = Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623(L_14, Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_15);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5*)L_15);
		// for(int i = 0; i < meshCacheCount; i++){
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0080:
	{
		// for(int i = 0; i < meshCacheCount; i++){
		int32_t L_17 = V_0;
		int32_t L_18 = __this->___meshCacheCount_12;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0063;
		}
	}
	{
		// currentFrame = meshCacheCount*UnityEngine.Random.value;
		int32_t L_19 = __this->___meshCacheCount_12;
		float L_20;
		L_20 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		__this->___currentFrame_11 = ((float)il2cpp_codegen_multiply(((float)L_19), L_20));
		// meshFilter.sharedMesh = meshCache[(int)currentFrame].sharedMesh;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_21 = __this->___meshFilter_13;
		MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA* L_22 = __this->___meshCache_4;
		float L_23 = __this->___currentFrame_11;
		NullCheck(L_22);
		int32_t L_24 = il2cpp_codegen_cast_double_to_int<int32_t>(L_23);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_26;
		L_26 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_25, NULL);
		NullCheck(L_21);
		MeshFilter_set_sharedMesh_m946F7E3F583761982642BDA4753784AF1DF6E16F(L_21, L_26, NULL);
		// }
		return;
	}
}
// System.Void UnluckAnimatedMesh::CheckIfMeshHasChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnluckAnimatedMesh_CheckIfMeshHasChanged_m10140A9B367A9538879B961CA704B1A81068F938 (UnluckAnimatedMesh_tC8F263959EBB80897E44E8534FC4B91D07F7C653* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(meshCached != meshContainerFBX){
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___meshCached_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___meshContainerFBX_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// if(meshContainerFBX!=null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___meshContainerFBX_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		// FillCacheArray();
		UnluckAnimatedMesh_FillCacheArray_m38FE9F79EC23A8E5BC7BC2EDCAEE2DE63E99FFD9(__this, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void UnluckAnimatedMesh::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnluckAnimatedMesh_Update_mE5F67D89852679EEB9D2BEB92D1F775F37354B2A (UnluckAnimatedMesh_tC8F263959EBB80897E44E8534FC4B91D07F7C653* __this, const RuntimeMethod* method) 
{
	{
		// delta =Time.deltaTime;
		float L_0;
		L_0 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___delta_30 = L_0;
		// startDelayCounter+= delta;
		float L_1 = __this->___startDelayCounter_26;
		float L_2 = __this->___delta_30;
		__this->___startDelayCounter_26 = ((float)il2cpp_codegen_add(L_1, L_2));
		// if(startDelayCounter > startDelay) {
		float L_3 = __this->___startDelayCounter_26;
		float L_4 = __this->___startDelay_25;
		if ((!(((float)L_3) > ((float)L_4))))
		{
			goto IL_003e;
		}
	}
	{
		// rendererComponent.enabled = true;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_5 = __this->___rendererComponent_14;
		NullCheck(L_5);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_5, (bool)1, NULL);
		// Animate();
		UnluckAnimatedMesh_Animate_m56D7F1815D6F3663C4182EBD693ACD74671AB260(__this, NULL);
	}

IL_003e:
	{
		// if(this.enabled){
		bool L_6;
		L_6 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(__this, NULL);
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		// return;
		return;
	}

IL_0047:
	{
		// rendererComponent.enabled = false;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_7 = __this->___rendererComponent_14;
		NullCheck(L_7);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_7, (bool)0, NULL);
		// }
		return;
	}
}
// System.Boolean UnluckAnimatedMesh::PingPongFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnluckAnimatedMesh_PingPongFrame_m5391147B12AC20316339ACE7AA52A2FE3945ACB9 (UnluckAnimatedMesh_tC8F263959EBB80897E44E8534FC4B91D07F7C653* __this, const RuntimeMethod* method) 
{
	{
		// if(pingPongToggle)
		bool L_0 = __this->___pingPongToggle_28;
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		// currentFrame+= currentSpeed*delta;
		float L_1 = __this->___currentFrame_11;
		float L_2 = __this->___currentSpeed_10;
		float L_3 = __this->___delta_30;
		__this->___currentFrame_11 = ((float)il2cpp_codegen_add(L_1, ((float)il2cpp_codegen_multiply(L_2, L_3))));
		goto IL_003e;
	}

IL_0024:
	{
		// currentFrame-= currentSpeed*delta;
		float L_4 = __this->___currentFrame_11;
		float L_5 = __this->___currentSpeed_10;
		float L_6 = __this->___delta_30;
		__this->___currentFrame_11 = ((float)il2cpp_codegen_subtract(L_4, ((float)il2cpp_codegen_multiply(L_5, L_6))));
	}

IL_003e:
	{
		// if(currentFrame <= 0){
		float L_7 = __this->___currentFrame_11;
		if ((!(((float)L_7) <= ((float)(0.0f)))))
		{
			goto IL_005f;
		}
	}
	{
		// currentFrame = 0.0f;
		__this->___currentFrame_11 = (0.0f);
		// pingPongToggle = true;
		__this->___pingPongToggle_28 = (bool)1;
		// return true;
		return (bool)1;
	}

IL_005f:
	{
		// if(currentFrame >= meshCacheCount){
		float L_8 = __this->___currentFrame_11;
		int32_t L_9 = __this->___meshCacheCount_12;
		if ((!(((float)L_8) >= ((float)((float)L_9)))))
		{
			goto IL_0086;
		}
	}
	{
		// pingPongToggle = false;
		__this->___pingPongToggle_28 = (bool)0;
		// currentFrame = (float)(meshCacheCount-1);
		int32_t L_10 = __this->___meshCacheCount_12;
		__this->___currentFrame_11 = ((float)((int32_t)il2cpp_codegen_subtract(L_10, 1)));
		// return true;
		return (bool)1;
	}

IL_0086:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean UnluckAnimatedMesh::NextFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnluckAnimatedMesh_NextFrame_m85C71C785C709770B6369B12121FE1A1321DDC03 (UnluckAnimatedMesh_tC8F263959EBB80897E44E8534FC4B91D07F7C653* __this, const RuntimeMethod* method) 
{
	{
		// currentFrame+= currentSpeed*delta;
		float L_0 = __this->___currentFrame_11;
		float L_1 = __this->___currentSpeed_10;
		float L_2 = __this->___delta_30;
		__this->___currentFrame_11 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(L_1, L_2))));
		// if(currentFrame > meshCacheCount+1){
		float L_3 = __this->___currentFrame_11;
		int32_t L_4 = __this->___meshCacheCount_12;
		if ((!(((float)L_3) > ((float)((float)((int32_t)il2cpp_codegen_add(L_4, 1)))))))
		{
			goto IL_0047;
		}
	}
	{
		// currentFrame = 0.0f;
		__this->___currentFrame_11 = (0.0f);
		// if(!loop) this.enabled = false;
		bool L_5 = __this->___loop_21;
		if (L_5)
		{
			goto IL_0045;
		}
	}
	{
		// if(!loop) this.enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
	}

IL_0045:
	{
		// return true;
		return (bool)1;
	}

IL_0047:
	{
		// if(currentFrame >= meshCacheCount){
		float L_6 = __this->___currentFrame_11;
		int32_t L_7 = __this->___meshCacheCount_12;
		if ((!(((float)L_6) >= ((float)((float)L_7)))))
		{
			goto IL_007b;
		}
	}
	{
		// currentFrame = meshCacheCount - currentFrame;
		int32_t L_8 = __this->___meshCacheCount_12;
		float L_9 = __this->___currentFrame_11;
		__this->___currentFrame_11 = ((float)il2cpp_codegen_subtract(((float)L_8), L_9));
		// if(!loop) this.enabled = false;
		bool L_10 = __this->___loop_21;
		if (L_10)
		{
			goto IL_0079;
		}
	}
	{
		// if(!loop) this.enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
	}

IL_0079:
	{
		// return true;
		return (bool)1;
	}

IL_007b:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void UnluckAnimatedMesh::RandomizePropertiesAfterLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnluckAnimatedMesh_RandomizePropertiesAfterLoop_m24D16DB8E49BDF3B879DCAF508D0D11B761F0DF9 (UnluckAnimatedMesh_tC8F263959EBB80897E44E8534FC4B91D07F7C653* __this, const RuntimeMethod* method) 
{
	{
		// if(randomSpeedLoop)
		bool L_0 = __this->___randomSpeedLoop_9;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// RandomizePlaySpeed();
		UnluckAnimatedMesh_RandomizePlaySpeed_m62111CB16D694B02B4C594027AC110CDEF437694(__this, NULL);
	}

IL_000e:
	{
		// if(randomRotateLoop) RandomRotate();
		bool L_1 = __this->___randomRotateLoop_20;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// if(randomRotateLoop) RandomRotate();
		UnluckAnimatedMesh_RandomRotate_m765CEB919919C735440FEB7C9AD377C6262236D4(__this, NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void UnluckAnimatedMesh::Animate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnluckAnimatedMesh_Animate_m56D7F1815D6F3663C4182EBD693ACD74671AB260 (UnluckAnimatedMesh_tC8F263959EBB80897E44E8534FC4B91D07F7C653* __this, const RuntimeMethod* method) 
{
	{
		// if(rendererComponent.isVisible){
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = __this->___rendererComponent_14;
		NullCheck(L_0);
		bool L_1;
		L_1 = Renderer_get_isVisible_mBCDDEB0EF27442FD1D910CD26754135B677B8251(L_0, NULL);
		if (!L_1)
		{
			goto IL_0059;
		}
	}
	{
		// if(pingPong && PingPongFrame()){
		bool L_2 = __this->___pingPong_22;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		bool L_3;
		L_3 = UnluckAnimatedMesh_PingPongFrame_m5391147B12AC20316339ACE7AA52A2FE3945ACB9(__this, NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// RandomizePropertiesAfterLoop();
		UnluckAnimatedMesh_RandomizePropertiesAfterLoop_m24D16DB8E49BDF3B879DCAF508D0D11B761F0DF9(__this, NULL);
		goto IL_003b;
	}

IL_0025:
	{
		// }else if(!pingPong && NextFrame()){
		bool L_4 = __this->___pingPong_22;
		if (L_4)
		{
			goto IL_003b;
		}
	}
	{
		bool L_5;
		L_5 = UnluckAnimatedMesh_NextFrame_m85C71C785C709770B6369B12121FE1A1321DDC03(__this, NULL);
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		// RandomizePropertiesAfterLoop();
		UnluckAnimatedMesh_RandomizePropertiesAfterLoop_m24D16DB8E49BDF3B879DCAF508D0D11B761F0DF9(__this, NULL);
	}

IL_003b:
	{
		// meshFilter.sharedMesh = meshCache[(int)currentFrame].sharedMesh;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_6 = __this->___meshFilter_13;
		MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA* L_7 = __this->___meshCache_4;
		float L_8 = __this->___currentFrame_11;
		NullCheck(L_7);
		int32_t L_9 = il2cpp_codegen_cast_double_to_int<int32_t>(L_8);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_11;
		L_11 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_10, NULL);
		NullCheck(L_6);
		MeshFilter_set_sharedMesh_m946F7E3F583761982642BDA4753784AF1DF6E16F(L_6, L_11, NULL);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void UnluckAnimatedMesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnluckAnimatedMesh__ctor_m5C2614E0DAD18406E95C3FC4E91BC124DBEEC27B (UnluckAnimatedMesh_tC8F263959EBB80897E44E8534FC4B91D07F7C653* __this, const RuntimeMethod* method) 
{
	{
		// public float playSpeed = 1f;
		__this->___playSpeed_7 = (1.0f);
		// public float updateInterval = 0.05f;
		__this->___updateInterval_15 = (0.0500000007f);
		// public bool randomStartFrame = true;
		__this->___randomStartFrame_19 = (bool)1;
		// public bool loop = true;
		__this->___loop_21 = (bool)1;
		// public bool playOnAwake = true;
		__this->___playOnAwake_23 = (bool)1;
		// public Vector2 randomStartDelay = new Vector2(0.0f,0.0f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___randomStartDelay_24 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void BLE::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BLE_Start_mE3B9DA59A6C12CDB0A7203E2802D97820949FB1B (BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85BBD7CA1DF1206B96E452298DF404384EA3D7E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42B8EEE824B84FAB4691F67846B562FB00D2690);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE74E39F827005BA0C69B4D10D390B5F36486699);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA893F1C80774ABB0B3AB07B5C39C078EF958FEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF7C8094E5E17FF0F29E2B7D3FEAAAFD5642ECCD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _pluginActivity = new AndroidJavaObject("com.khynsoft.ble.PluginActivity");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_1, _stringLiteralEF7C8094E5E17FF0F29E2B7D3FEAAAFD5642ECCD, L_0, NULL);
		__this->____pluginActivity_21 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pluginActivity_21), (void*)L_1);
		// posBeacon1X = beacon1.transform.localPosition.x;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___beacon1_4;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_3, NULL);
		float L_5 = L_4.___x_2;
		__this->___posBeacon1X_22 = ((double)L_5);
		// posBeacon1Y = beacon1.transform.localPosition.z;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___beacon1_4;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_7, NULL);
		float L_9 = L_8.___z_4;
		__this->___posBeacon1Y_23 = ((double)L_9);
		// posBeacon2X = beacon2.transform.localPosition.x;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___beacon2_5;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_11, NULL);
		float L_13 = L_12.___x_2;
		__this->___posBeacon2X_24 = ((double)L_13);
		// posBeacon2Y = beacon2.transform.localPosition.z;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___beacon2_5;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_15, NULL);
		float L_17 = L_16.___z_4;
		__this->___posBeacon2Y_25 = ((double)L_17);
		// posBeacon3X = beacon3.transform.localPosition.x;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___beacon3_6;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_19, NULL);
		float L_21 = L_20.___x_2;
		__this->___posBeacon3X_26 = ((double)L_21);
		// posBeacon3Y = beacon3.transform.localPosition.z;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___beacon3_6;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_22, NULL);
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_23, NULL);
		float L_25 = L_24.___z_4;
		__this->___posBeacon3Y_27 = ((double)L_25);
		// posBeacon4X = beacon4.transform.localPosition.x;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___beacon4_7;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_27, NULL);
		float L_29 = L_28.___x_2;
		__this->___posBeacon4X_28 = ((double)L_29);
		// posBeacon4Y = beacon4.transform.localPosition.z;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___beacon4_7;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_30, NULL);
		NullCheck(L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_31, NULL);
		float L_33 = L_32.___z_4;
		__this->___posBeacon4Y_29 = ((double)L_33);
		// _pluginActivity.Call("setPosBeacon1", posBeacon1X, posBeacon1Y);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_34 = __this->____pluginActivity_21;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_35 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_36 = L_35;
		double L_37 = __this->___posBeacon1X_22;
		double L_38 = L_37;
		RuntimeObject* L_39 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_38);
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_39);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_39);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = L_36;
		double L_41 = __this->___posBeacon1Y_23;
		double L_42 = L_41;
		RuntimeObject* L_43 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_42);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_43);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_43);
		NullCheck(L_34);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_34, _stringLiteralA42B8EEE824B84FAB4691F67846B562FB00D2690, L_40, NULL);
		// _pluginActivity.Call("setPosBeacon2", posBeacon2X, posBeacon2Y);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_44 = __this->____pluginActivity_21;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_45 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = L_45;
		double L_47 = __this->___posBeacon2X_24;
		double L_48 = L_47;
		RuntimeObject* L_49 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_48);
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_49);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_49);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_50 = L_46;
		double L_51 = __this->___posBeacon2Y_25;
		double L_52 = L_51;
		RuntimeObject* L_53 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_52);
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_53);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_53);
		NullCheck(L_44);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_44, _stringLiteral85BBD7CA1DF1206B96E452298DF404384EA3D7E4, L_50, NULL);
		// _pluginActivity.Call("setPosBeacon3", posBeacon3X, posBeacon3Y);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_54 = __this->____pluginActivity_21;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_55 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_56 = L_55;
		double L_57 = __this->___posBeacon3X_26;
		double L_58 = L_57;
		RuntimeObject* L_59 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_58);
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, L_59);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_59);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_60 = L_56;
		double L_61 = __this->___posBeacon3Y_27;
		double L_62 = L_61;
		RuntimeObject* L_63 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_62);
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, L_63);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_63);
		NullCheck(L_54);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_54, _stringLiteralBE74E39F827005BA0C69B4D10D390B5F36486699, L_60, NULL);
		// _pluginActivity.Call("setPosBeacon4", posBeacon4X, posBeacon4Y);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_64 = __this->____pluginActivity_21;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_65 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_66 = L_65;
		double L_67 = __this->___posBeacon4X_28;
		double L_68 = L_67;
		RuntimeObject* L_69 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_68);
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, L_69);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_69);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_70 = L_66;
		double L_71 = __this->___posBeacon4Y_29;
		double L_72 = L_71;
		RuntimeObject* L_73 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_72);
		NullCheck(L_70);
		ArrayElementTypeCheck (L_70, L_73);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_73);
		NullCheck(L_64);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_64, _stringLiteralCA893F1C80774ABB0B3AB07B5C39C078EF958FEF, L_70, NULL);
		// StartCoroutine(UpdateRSSIAndDistance());
		RuntimeObject* L_74;
		L_74 = BLE_UpdateRSSIAndDistance_m2EAFA0C7E36B96535372876628F5A1CD58CE68D6(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_75;
		L_75 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_74, NULL);
		// }
		return;
	}
}
// System.Void BLE::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BLE_Update_m9B1C8E67505927D8C1868F4856DB161D4826EAFF (BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator BLE::UpdateRSSIAndDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BLE_UpdateRSSIAndDistance_m2EAFA0C7E36B96535372876628F5A1CD58CE68D6 (BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CUpdateRSSIAndDistanceU3Ed__29_tB7D6910C7FF8AE6C8618C75C15FA67CF1E9BD2E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CUpdateRSSIAndDistanceU3Ed__29_tB7D6910C7FF8AE6C8618C75C15FA67CF1E9BD2E1* L_0 = (U3CUpdateRSSIAndDistanceU3Ed__29_tB7D6910C7FF8AE6C8618C75C15FA67CF1E9BD2E1*)il2cpp_codegen_object_new(U3CUpdateRSSIAndDistanceU3Ed__29_tB7D6910C7FF8AE6C8618C75C15FA67CF1E9BD2E1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CUpdateRSSIAndDistanceU3Ed__29__ctor_m9B514F0D8881F2FC13741C9AC8BA35ADAD4067F0(L_0, 0, NULL);
		U3CUpdateRSSIAndDistanceU3Ed__29_tB7D6910C7FF8AE6C8618C75C15FA67CF1E9BD2E1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void BLE::RefreshFilteredRssi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BLE_RefreshFilteredRssi_m775762865D3A51CD98D777DFC3A53E7801435489 (BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C2E9B3825A0A504413F64A4E5CFD04EDFFAE689);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CD1BDB935F488B3027A947408A0D33D52E5F07F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(_pluginActivity != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->____pluginActivity_21;
		if (!L_0)
		{
			goto IL_00fb;
		}
	}
	{
		// rssi1.text = _pluginActivity.Call<int>("getSmoothRssi", 1) + " dBm";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1 = __this->___rssi1_8;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = __this->____pluginActivity_21;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		int32_t L_5 = 1;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		NullCheck(L_2);
		int32_t L_7;
		L_7 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_2, _stringLiteral7CD1BDB935F488B3027A947408A0D33D52E5F07F, L_4, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		V_0 = L_7;
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_8, _stringLiteral7C2E9B3825A0A504413F64A4E5CFD04EDFFAE689, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, L_9);
		// rssi2.text = _pluginActivity.Call<int>("getSmoothRssi", 2) + " dBm";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_10 = __this->___rssi2_9;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11 = __this->____pluginActivity_21;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_12;
		int32_t L_14 = 2;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_15);
		NullCheck(L_11);
		int32_t L_16;
		L_16 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_11, _stringLiteral7CD1BDB935F488B3027A947408A0D33D52E5F07F, L_13, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		V_0 = L_16;
		String_t* L_17;
		L_17 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_18;
		L_18 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_17, _stringLiteral7C2E9B3825A0A504413F64A4E5CFD04EDFFAE689, NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_10, L_18);
		// rssi3.text = _pluginActivity.Call<int>("getSmoothRssi", 3) + " dBm";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_19 = __this->___rssi3_10;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_20 = __this->____pluginActivity_21;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = L_21;
		int32_t L_23 = 3;
		RuntimeObject* L_24 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_24);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_24);
		NullCheck(L_20);
		int32_t L_25;
		L_25 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_20, _stringLiteral7CD1BDB935F488B3027A947408A0D33D52E5F07F, L_22, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		V_0 = L_25;
		String_t* L_26;
		L_26 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_27;
		L_27 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_26, _stringLiteral7C2E9B3825A0A504413F64A4E5CFD04EDFFAE689, NULL);
		NullCheck(L_19);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_19, L_27);
		// rssi4.text = _pluginActivity.Call<int>("getSmoothRssi", 4) + " dBm";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_28 = __this->___rssi4_11;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_29 = __this->____pluginActivity_21;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = L_30;
		int32_t L_32 = 4;
		RuntimeObject* L_33 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_32);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_33);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_33);
		NullCheck(L_29);
		int32_t L_34;
		L_34 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_29, _stringLiteral7CD1BDB935F488B3027A947408A0D33D52E5F07F, L_31, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		V_0 = L_34;
		String_t* L_35;
		L_35 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_36;
		L_36 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_35, _stringLiteral7C2E9B3825A0A504413F64A4E5CFD04EDFFAE689, NULL);
		NullCheck(L_28);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_28, L_36);
	}

IL_00fb:
	{
		// }
		return;
	}
}
// System.Void BLE::RefreshRssi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BLE_RefreshRssi_mEABD27AF4F0C8473EFE5508335720FD35AFF3771 (BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DE387F1A669669BC9F57D74FC455F344F675C98);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C2E9B3825A0A504413F64A4E5CFD04EDFFAE689);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E72B120FA21DA1374ED0C2A1C9A70CFE86A3BE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89D4E55115B28A1B9C26F4D9EEB95AA231CC0D0F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral925FA2B3454C261A87152E975E15AC0B6C9D5961);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (_pluginActivity != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->____pluginActivity_21;
		if (!L_0)
		{
			goto IL_00d3;
		}
	}
	{
		// rssi1.text = _pluginActivity.Call<int>("getRssi1") + " dBm";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1 = __this->___rssi1_8;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = __this->____pluginActivity_21;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_2);
		int32_t L_4;
		L_4 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_2, _stringLiteral89D4E55115B28A1B9C26F4D9EEB95AA231CC0D0F, L_3, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		V_0 = L_4;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_5, _stringLiteral7C2E9B3825A0A504413F64A4E5CFD04EDFFAE689, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, L_6);
		// rssi2.text = _pluginActivity.Call<int>("getRssi2") + " dBm";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_7 = __this->___rssi2_9;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = __this->____pluginActivity_21;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9;
		L_9 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_8);
		int32_t L_10;
		L_10 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_8, _stringLiteral925FA2B3454C261A87152E975E15AC0B6C9D5961, L_9, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		V_0 = L_10;
		String_t* L_11;
		L_11 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_11, _stringLiteral7C2E9B3825A0A504413F64A4E5CFD04EDFFAE689, NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, L_12);
		// rssi3.text = _pluginActivity.Call<int>("getRssi3") + " dBm";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_13 = __this->___rssi3_10;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14 = __this->____pluginActivity_21;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15;
		L_15 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_14);
		int32_t L_16;
		L_16 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_14, _stringLiteral7E72B120FA21DA1374ED0C2A1C9A70CFE86A3BE5, L_15, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		V_0 = L_16;
		String_t* L_17;
		L_17 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_18;
		L_18 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_17, _stringLiteral7C2E9B3825A0A504413F64A4E5CFD04EDFFAE689, NULL);
		NullCheck(L_13);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_13, L_18);
		// rssi4.text = _pluginActivity.Call<int>("getRssi4") + " dBm";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_19 = __this->___rssi4_11;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_20 = __this->____pluginActivity_21;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21;
		L_21 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_20);
		int32_t L_22;
		L_22 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_20, _stringLiteral1DE387F1A669669BC9F57D74FC455F344F675C98, L_21, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		V_0 = L_22;
		String_t* L_23;
		L_23 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_24;
		L_24 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_23, _stringLiteral7C2E9B3825A0A504413F64A4E5CFD04EDFFAE689, NULL);
		NullCheck(L_19);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_19, L_24);
	}

IL_00d3:
	{
		// }
		return;
	}
}
// System.Boolean BLE::isValidNum(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BLE_isValidNum_m62DF71615F33BCBD74F6FB86B1A1973F6EB706A7 (BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral037157E5605C24D464430AB2FAAD2DC30489D49C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E73CE009CAAA771551FC8DDAB625469C05E7630);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Regex.IsMatch(text, "^\\d+$") || Regex.IsMatch(text, "^\\d*\\.?\\d*$");
		String_t* L_0 = ___text0;
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Regex_IsMatch_m66D13054C7992322810B0CFC6B46AF11A927C9AA(L_0, _stringLiteral037157E5605C24D464430AB2FAAD2DC30489D49C, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_2 = ___text0;
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Regex_IsMatch_m66D13054C7992322810B0CFC6B46AF11A927C9AA(L_2, _stringLiteral6E73CE009CAAA771551FC8DDAB625469C05E7630, NULL);
		return L_3;
	}

IL_0019:
	{
		return (bool)1;
	}
}
// System.Void BLE::CalcDistances()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BLE_CalcDistances_mBA14191904BF5C49D08D640F3182EB1B281A60E3 (BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BEFA70C81191F9770BEFF3ED4991383DED13540);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D8264CB40089C3FAE86DDF85994BDFA2F83A985);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC71940386D01AADD017DAB6D190DD55682241E35);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1F5BF0254F30D219F3F71E58DE873429CD66ED8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB44D3E7B623337A8C451DAE1E161B353BEF373C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// dist1.text = string.Format("{0:0.00} m", _pluginActivity.Call<double>("getDistance1"));
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___dist1_12;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = __this->____pluginActivity_21;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_1);
		double L_3;
		L_3 = AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362(L_1, _stringLiteralE1F5BF0254F30D219F3F71E58DE873429CD66ED8, L_2, AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_RuntimeMethod_var);
		double L_4 = L_3;
		RuntimeObject* L_5 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralC71940386D01AADD017DAB6D190DD55682241E35, L_5, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_6);
		// dist2.text = string.Format("{0:0.00} m", _pluginActivity.Call<double>("getDistance2"));
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_7 = __this->___dist2_13;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = __this->____pluginActivity_21;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9;
		L_9 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_8);
		double L_10;
		L_10 = AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362(L_8, _stringLiteral7D8264CB40089C3FAE86DDF85994BDFA2F83A985, L_9, AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_RuntimeMethod_var);
		double L_11 = L_10;
		RuntimeObject* L_12 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_11);
		String_t* L_13;
		L_13 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralC71940386D01AADD017DAB6D190DD55682241E35, L_12, NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, L_13);
		// dist3.text = string.Format("{0:0.00} m", _pluginActivity.Call<double>("getDistance3"));
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_14 = __this->___dist3_14;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_15 = __this->____pluginActivity_21;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16;
		L_16 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_15);
		double L_17;
		L_17 = AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362(L_15, _stringLiteral2BEFA70C81191F9770BEFF3ED4991383DED13540, L_16, AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_RuntimeMethod_var);
		double L_18 = L_17;
		RuntimeObject* L_19 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_18);
		String_t* L_20;
		L_20 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralC71940386D01AADD017DAB6D190DD55682241E35, L_19, NULL);
		NullCheck(L_14);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_14, L_20);
		// dist4.text = string.Format("{0:0.00} m", _pluginActivity.Call<double>("getDistance4"));
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_21 = __this->___dist4_15;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_22 = __this->____pluginActivity_21;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23;
		L_23 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_22);
		double L_24;
		L_24 = AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362(L_22, _stringLiteralEB44D3E7B623337A8C451DAE1E161B353BEF373C, L_23, AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_RuntimeMethod_var);
		double L_25 = L_24;
		RuntimeObject* L_26 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_25);
		String_t* L_27;
		L_27 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralC71940386D01AADD017DAB6D190DD55682241E35, L_26, NULL);
		NullCheck(L_21);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_21, L_27);
		// }
		return;
	}
}
// System.Void BLE::CalcFilteredDistances()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BLE_CalcFilteredDistances_m07A946DFF47926548A90F5BE59F028F4BFBF9D6B (BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7383F125181D1F0F91F6DA8FBCF63DE945B71638);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC71940386D01AADD017DAB6D190DD55682241E35);
		s_Il2CppMethodInitialized = true;
	}
	{
		// dist1.text = string.Format("{0:0.00} m", _pluginActivity.Call<double>("getSmoothDistance", 1));
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___dist1_12;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = __this->____pluginActivity_21;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		int32_t L_4 = 1;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_1);
		double L_6;
		L_6 = AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362(L_1, _stringLiteral7383F125181D1F0F91F6DA8FBCF63DE945B71638, L_3, AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_RuntimeMethod_var);
		double L_7 = L_6;
		RuntimeObject* L_8 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralC71940386D01AADD017DAB6D190DD55682241E35, L_8, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_9);
		// dist2.text = string.Format("{0:0.00} m", _pluginActivity.Call<double>("getSmoothDistance", 2));
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_10 = __this->___dist2_13;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11 = __this->____pluginActivity_21;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_12;
		int32_t L_14 = 2;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_15);
		NullCheck(L_11);
		double L_16;
		L_16 = AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362(L_11, _stringLiteral7383F125181D1F0F91F6DA8FBCF63DE945B71638, L_13, AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_RuntimeMethod_var);
		double L_17 = L_16;
		RuntimeObject* L_18 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_17);
		String_t* L_19;
		L_19 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralC71940386D01AADD017DAB6D190DD55682241E35, L_18, NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_10, L_19);
		// dist3.text = string.Format("{0:0.00} m", _pluginActivity.Call<double>("getSmoothDistance", 3));
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_20 = __this->___dist3_14;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_21 = __this->____pluginActivity_21;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_22;
		int32_t L_24 = 3;
		RuntimeObject* L_25 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_25);
		NullCheck(L_21);
		double L_26;
		L_26 = AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362(L_21, _stringLiteral7383F125181D1F0F91F6DA8FBCF63DE945B71638, L_23, AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_RuntimeMethod_var);
		double L_27 = L_26;
		RuntimeObject* L_28 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_27);
		String_t* L_29;
		L_29 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralC71940386D01AADD017DAB6D190DD55682241E35, L_28, NULL);
		NullCheck(L_20);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_20, L_29);
		// dist4.text = string.Format("{0:0.00} m", _pluginActivity.Call<double>("getSmoothDistance", 4));
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_30 = __this->___dist4_15;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_31 = __this->____pluginActivity_21;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = L_32;
		int32_t L_34 = 4;
		RuntimeObject* L_35 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_34);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_35);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_35);
		NullCheck(L_31);
		double L_36;
		L_36 = AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362(L_31, _stringLiteral7383F125181D1F0F91F6DA8FBCF63DE945B71638, L_33, AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_RuntimeMethod_var);
		double L_37 = L_36;
		RuntimeObject* L_38 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_37);
		String_t* L_39;
		L_39 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralC71940386D01AADD017DAB6D190DD55682241E35, L_38, NULL);
		NullCheck(L_30);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_30, L_39);
		// }
		return;
	}
}
// System.Void BLE::Observe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BLE_Observe_m959BEDF2DBD079BBE57A9C48EC5C05C7DEBB8DE0 (BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67D04C8C2940A66F68D962200C0C69165895FB76);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF64835219848A1CE4248083C4A62865168070EE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// counter = 0;
		__this->___counter_31 = (0.0f);
		// if (isValidNum(observeTime.text))
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = __this->___observeTime_17;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_0, NULL);
		bool L_2;
		L_2 = BLE_isValidNum_m62DF71615F33BCBD74F6FB86B1A1973F6EB706A7(__this, L_1, NULL);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		// time = double.Parse(observeTime.text);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_3 = __this->___observeTime_17;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_3, NULL);
		double L_5;
		L_5 = Double_Parse_mEBC644CE0C86A405283EC4839F872EF9E556670A(L_4, NULL);
		__this->___time_30 = L_5;
	}

IL_0034:
	{
		// logArea.text = "\nObserving for " + observeTime.text + " seconds...\n\n  (BLE, rssi, distance)\n\n";
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_6 = __this->___logArea_18;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_7 = __this->___observeTime_17;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_7, NULL);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralDF64835219848A1CE4248083C4A62865168070EE, L_8, _stringLiteral67D04C8C2940A66F68D962200C0C69165895FB76, NULL);
		NullCheck(L_6);
		TMP_InputField_set_text_m684E9CDA2D9E82D1C497B5E03DBE79C00584FF62(L_6, L_9, NULL);
		// StartCoroutine(GetRssiData());
		RuntimeObject* L_10;
		L_10 = BLE_GetRssiData_mA5CFC95E8033F8028F4C5403BB8E2BCA55BF5918(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_11;
		L_11 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_10, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator BLE::GetRssiData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BLE_GetRssiData_mA5CFC95E8033F8028F4C5403BB8E2BCA55BF5918 (BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetRssiDataU3Ed__38_tB0D19F866CD0E9454FD768ED2688FB1532BC3558_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetRssiDataU3Ed__38_tB0D19F866CD0E9454FD768ED2688FB1532BC3558* L_0 = (U3CGetRssiDataU3Ed__38_tB0D19F866CD0E9454FD768ED2688FB1532BC3558*)il2cpp_codegen_object_new(U3CGetRssiDataU3Ed__38_tB0D19F866CD0E9454FD768ED2688FB1532BC3558_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetRssiDataU3Ed__38__ctor_m711894F83037AED596B77AF3D0247996E23CEDF9(L_0, 0, NULL);
		U3CGetRssiDataU3Ed__38_tB0D19F866CD0E9454FD768ED2688FB1532BC3558* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void BLE::SetUserPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BLE_SetUserPosition_m4437B1B3928A86DD8603AF6547940819898F73CA (BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisDoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_m15069A175D7E52353A996F903290EEBEE16BC72D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69D7CA1D013F362856ABF3E77F3EF2DDAF0219F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB022A5003448DF63D79A3B83420B3104B35878CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCBD0353DF0ADF38466DC7D4EAAE9F8FDBF09BA7);
		s_Il2CppMethodInitialized = true;
	}
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_2 = NULL;
	int32_t V_3 = 0;
	double V_4 = 0.0;
	float V_5 = 0.0f;
	{
		// uLocation = _pluginActivity.Call<double[]>("getUserPosition");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->____pluginActivity_21;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2;
		L_2 = AndroidJavaObject_Call_TisDoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_m15069A175D7E52353A996F903290EEBEE16BC72D(L_0, _stringLiteralFCBD0353DF0ADF38466DC7D4EAAE9F8FDBF09BA7, L_1, AndroidJavaObject_Call_TisDoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_m15069A175D7E52353A996F903290EEBEE16BC72D_RuntimeMethod_var);
		V_0 = L_2;
		// Vector3 newPos = new Vector3((float)uLocation[0], 2.1f, (float)uLocation[1]);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		double L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = 1;
		double L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_1), ((float)L_5), (2.0999999f), ((float)L_8), NULL);
		// userObj.transform.localPosition = Vector3.Lerp(userObj.transform.position, newPos, .5f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___userObj_20;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___userObj_20;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_13, L_14, (0.5f), NULL);
		NullCheck(L_10);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_10, L_15, NULL);
		// logArea.text = "Location: " + "\n";
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_16 = __this->___logArea_18;
		NullCheck(L_16);
		TMP_InputField_set_text_m684E9CDA2D9E82D1C497B5E03DBE79C00584FF62(L_16, _stringLiteralB022A5003448DF63D79A3B83420B3104B35878CB, NULL);
		// foreach (double i in uLocation)
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_17 = V_0;
		V_2 = L_17;
		V_3 = 0;
		goto IL_00a0;
	}

IL_006b:
	{
		// foreach (double i in uLocation)
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_18 = V_2;
		int32_t L_19 = V_3;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		double L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_4 = L_21;
		// logArea.text += "Location: n: " + (float) i + "\n";
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_22 = __this->___logArea_18;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_23 = L_22;
		NullCheck(L_23);
		String_t* L_24;
		L_24 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_23, NULL);
		double L_25 = V_4;
		V_5 = ((float)L_25);
		String_t* L_26;
		L_26 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_5), NULL);
		String_t* L_27;
		L_27 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_24, _stringLiteral69D7CA1D013F362856ABF3E77F3EF2DDAF0219F2, L_26, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		NullCheck(L_23);
		TMP_InputField_set_text_m684E9CDA2D9E82D1C497B5E03DBE79C00584FF62(L_23, L_27, NULL);
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00a0:
	{
		// foreach (double i in uLocation)
		int32_t L_29 = V_3;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_30 = V_2;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_006b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BLE::SetFilteredPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BLE_SetFilteredPosition_m5EC14C282268A27B002EB86C4891264033F4D8BC (BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisDoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_m15069A175D7E52353A996F903290EEBEE16BC72D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69D7CA1D013F362856ABF3E77F3EF2DDAF0219F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB022A5003448DF63D79A3B83420B3104B35878CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2CD76BF01929B3DA1020F4F6CB3E1DB517C5373);
		s_Il2CppMethodInitialized = true;
	}
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_2 = NULL;
	int32_t V_3 = 0;
	double V_4 = 0.0;
	float V_5 = 0.0f;
	{
		// uLocation = _pluginActivity.Call<double[]>("getFilteredPosition");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->____pluginActivity_21;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2;
		L_2 = AndroidJavaObject_Call_TisDoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_m15069A175D7E52353A996F903290EEBEE16BC72D(L_0, _stringLiteralF2CD76BF01929B3DA1020F4F6CB3E1DB517C5373, L_1, AndroidJavaObject_Call_TisDoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_m15069A175D7E52353A996F903290EEBEE16BC72D_RuntimeMethod_var);
		V_0 = L_2;
		// Vector3 newPos = new Vector3((float)uLocation[0], 2.1f, (float)uLocation[1]);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		double L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = 1;
		double L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_1), ((float)L_5), (2.0999999f), ((float)L_8), NULL);
		// userObj.transform.localPosition = Vector3.Lerp(userObj.transform.position, newPos, .5f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___userObj_20;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___userObj_20;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_13, L_14, (0.5f), NULL);
		NullCheck(L_10);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_10, L_15, NULL);
		// logArea.text = "Location: " + "\n";
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_16 = __this->___logArea_18;
		NullCheck(L_16);
		TMP_InputField_set_text_m684E9CDA2D9E82D1C497B5E03DBE79C00584FF62(L_16, _stringLiteralB022A5003448DF63D79A3B83420B3104B35878CB, NULL);
		// foreach (double i in uLocation)
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_17 = V_0;
		V_2 = L_17;
		V_3 = 0;
		goto IL_00a0;
	}

IL_006b:
	{
		// foreach (double i in uLocation)
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_18 = V_2;
		int32_t L_19 = V_3;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		double L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_4 = L_21;
		// logArea.text += "Location: n: " + (float)i + "\n";
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_22 = __this->___logArea_18;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_23 = L_22;
		NullCheck(L_23);
		String_t* L_24;
		L_24 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_23, NULL);
		double L_25 = V_4;
		V_5 = ((float)L_25);
		String_t* L_26;
		L_26 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_5), NULL);
		String_t* L_27;
		L_27 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_24, _stringLiteral69D7CA1D013F362856ABF3E77F3EF2DDAF0219F2, L_26, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		NullCheck(L_23);
		TMP_InputField_set_text_m684E9CDA2D9E82D1C497B5E03DBE79C00584FF62(L_23, L_27, NULL);
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00a0:
	{
		// foreach (double i in uLocation)
		int32_t L_29 = V_3;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_30 = V_2;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_006b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BLE::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BLE_OnDestroy_mFA57EE34FF1D37DB0FD520836C40F52AA43427BA (BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* __this, const RuntimeMethod* method) 
{
	{
		// StopCoroutine(GetRssiData());
		RuntimeObject* L_0;
		L_0 = BLE_GetRssiData_mA5CFC95E8033F8028F4C5403BB8E2BCA55BF5918(__this, NULL);
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(__this, L_0, NULL);
		// StopCoroutine(UpdateRSSIAndDistance());
		RuntimeObject* L_1;
		L_1 = BLE_UpdateRSSIAndDistance_m2EAFA0C7E36B96535372876628F5A1CD58CE68D6(__this, NULL);
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void BLE::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BLE__ctor_mD22781F9BDB6021503A63E85BCD1BDA4BFDC7DDE (BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* __this, const RuntimeMethod* method) 
{
	{
		// double time = 10;
		__this->___time_30 = (10.0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void BLE/Kalman::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kalman__ctor_m410BA4EC4E305E22FCDFF7602ADDF2A5D3BC31D0 (Kalman_t53CE1FE5266E7825502B6208352135AD745E081A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void BLE/<UpdateRSSIAndDistance>d__29::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateRSSIAndDistanceU3Ed__29__ctor_m9B514F0D8881F2FC13741C9AC8BA35ADAD4067F0 (U3CUpdateRSSIAndDistanceU3Ed__29_tB7D6910C7FF8AE6C8618C75C15FA67CF1E9BD2E1* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void BLE/<UpdateRSSIAndDistance>d__29::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateRSSIAndDistanceU3Ed__29_System_IDisposable_Dispose_mC54D41DB228F3834B6443827B05482EFDC93F5BD (U3CUpdateRSSIAndDistanceU3Ed__29_tB7D6910C7FF8AE6C8618C75C15FA67CF1E9BD2E1* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean BLE/<UpdateRSSIAndDistance>d__29::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CUpdateRSSIAndDistanceU3Ed__29_MoveNext_m259EF1BC8E2C5A317A7E22AABB56FDB998A95EA4 (U3CUpdateRSSIAndDistanceU3Ed__29_tB7D6910C7FF8AE6C8618C75C15FA67CF1E9BD2E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A6033D73461153FAF18BE29D9834398E2C7CB90);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00b4;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (isValidNum(nFactor.text))
		BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* L_4 = V_1;
		BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* L_5 = V_1;
		NullCheck(L_5);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_6 = L_5->___nFactor_16;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_6, NULL);
		NullCheck(L_4);
		bool L_8;
		L_8 = BLE_isValidNum_m62DF71615F33BCBD74F6FB86B1A1973F6EB706A7(L_4, L_7, NULL);
		if (!L_8)
		{
			goto IL_0062;
		}
	}
	{
		// _pluginActivity.Call("setNFactor", double.Parse(nFactor.text));
		BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* L_9 = V_1;
		NullCheck(L_9);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10 = L_9->____pluginActivity_21;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_11;
		BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* L_13 = V_1;
		NullCheck(L_13);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_14 = L_13->___nFactor_16;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_14, NULL);
		double L_16;
		L_16 = Double_Parse_mEBC644CE0C86A405283EC4839F872EF9E556670A(L_15, NULL);
		double L_17 = L_16;
		RuntimeObject* L_18 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_18);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_18);
		NullCheck(L_10);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_10, _stringLiteral5A6033D73461153FAF18BE29D9834398E2C7CB90, L_12, NULL);
	}

IL_0062:
	{
		// if(toggleFilteredRssi.isOn)
		BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* L_19 = V_1;
		NullCheck(L_19);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_20 = L_19->___toggleFilteredRssi_19;
		NullCheck(L_20);
		bool L_21;
		L_21 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_20, NULL);
		if (!L_21)
		{
			goto IL_0083;
		}
	}
	{
		// RefreshFilteredRssi();
		BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* L_22 = V_1;
		NullCheck(L_22);
		BLE_RefreshFilteredRssi_m775762865D3A51CD98D777DFC3A53E7801435489(L_22, NULL);
		// CalcFilteredDistances();
		BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* L_23 = V_1;
		NullCheck(L_23);
		BLE_CalcFilteredDistances_m07A946DFF47926548A90F5BE59F028F4BFBF9D6B(L_23, NULL);
		// SetFilteredPosition();
		BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* L_24 = V_1;
		NullCheck(L_24);
		BLE_SetFilteredPosition_m5EC14C282268A27B002EB86C4891264033F4D8BC(L_24, NULL);
		goto IL_0095;
	}

IL_0083:
	{
		// RefreshRssi();
		BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* L_25 = V_1;
		NullCheck(L_25);
		BLE_RefreshRssi_mEABD27AF4F0C8473EFE5508335720FD35AFF3771(L_25, NULL);
		// CalcDistances();
		BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* L_26 = V_1;
		NullCheck(L_26);
		BLE_CalcDistances_mBA14191904BF5C49D08D640F3182EB1B281A60E3(L_26, NULL);
		// SetUserPosition();
		BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* L_27 = V_1;
		NullCheck(L_27);
		BLE_SetUserPosition_m4437B1B3928A86DD8603AF6547940819898F73CA(L_27, NULL);
	}

IL_0095:
	{
		// SetUserPosition();
		BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* L_28 = V_1;
		NullCheck(L_28);
		BLE_SetUserPosition_m4437B1B3928A86DD8603AF6547940819898F73CA(L_28, NULL);
		// yield return new WaitForSecondsRealtime(.5f);
		WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* L_29 = (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01*)il2cpp_codegen_object_new(WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F(L_29, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_29);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00b4:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// StartCoroutine(UpdateRSSIAndDistance());
		BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* L_30 = V_1;
		BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* L_31 = V_1;
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = BLE_UpdateRSSIAndDistance_m2EAFA0C7E36B96535372876628F5A1CD58CE68D6(L_31, NULL);
		NullCheck(L_30);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_33;
		L_33 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_30, L_32, NULL);
		// }
		return (bool)0;
	}
}
// System.Object BLE/<UpdateRSSIAndDistance>d__29::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CUpdateRSSIAndDistanceU3Ed__29_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2E67B1CD2E646714639C4EA59329A4BCA23EBF07 (U3CUpdateRSSIAndDistanceU3Ed__29_tB7D6910C7FF8AE6C8618C75C15FA67CF1E9BD2E1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void BLE/<UpdateRSSIAndDistance>d__29::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateRSSIAndDistanceU3Ed__29_System_Collections_IEnumerator_Reset_m323DA1BF962D0FCE41D443709C86B110689000E0 (U3CUpdateRSSIAndDistanceU3Ed__29_tB7D6910C7FF8AE6C8618C75C15FA67CF1E9BD2E1* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CUpdateRSSIAndDistanceU3Ed__29_System_Collections_IEnumerator_Reset_m323DA1BF962D0FCE41D443709C86B110689000E0_RuntimeMethod_var)));
	}
}
// System.Object BLE/<UpdateRSSIAndDistance>d__29::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CUpdateRSSIAndDistanceU3Ed__29_System_Collections_IEnumerator_get_Current_m70F18BAC19AD8F63E433516162A0933B9F812989 (U3CUpdateRSSIAndDistanceU3Ed__29_tB7D6910C7FF8AE6C8618C75C15FA67CF1E9BD2E1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void BLE/<GetRssiData>d__38::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRssiDataU3Ed__38__ctor_m711894F83037AED596B77AF3D0247996E23CEDF9 (U3CGetRssiDataU3Ed__38_tB0D19F866CD0E9454FD768ED2688FB1532BC3558* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void BLE/<GetRssiData>d__38::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRssiDataU3Ed__38_System_IDisposable_Dispose_m1E158231F2D61180842B76C08063DE67242E8285 (U3CGetRssiDataU3Ed__38_tB0D19F866CD0E9454FD768ED2688FB1532BC3558* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean BLE/<GetRssiData>d__38::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetRssiDataU3Ed__38_MoveNext_m8649ED22B4A4C5D7283FC2BF5E030027DB727B8C (U3CGetRssiDataU3Ed__38_tB0D19F866CD0E9454FD768ED2688FB1532BC3558* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DE387F1A669669BC9F57D74FC455F344F675C98);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38CFAF98E70679BD743272065C8FD52BDB964B10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E72B120FA21DA1374ED0C2A1C9A70CFE86A3BE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89D4E55115B28A1B9C26F4D9EEB95AA231CC0D0F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral925FA2B3454C261A87152E975E15AC0B6C9D5961);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5A302AEE00EEE59F229C71E024ABDDA9A7C1AD3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_010c;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// logArea.text += string.Format("RSSIs: (A, {0}, {4}), (B, {1}, {5}), (C, {2}, {6}), (D, {3}, {7})\n",
		//     _pluginActivity.Call<int>("getRssi1"),
		//     _pluginActivity.Call<int>("getRssi2"),
		//     _pluginActivity.Call<int>("getRssi3"),
		//     _pluginActivity.Call<int>("getRssi4"),
		//     dist1.text,
		//     dist2.text,
		//     dist3.text,
		//     dist4.text
		//     );
		BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* L_4 = V_1;
		NullCheck(L_4);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_5 = L_4->___logArea_18;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_6 = L_5;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_6, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8;
		BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* L_10 = V_1;
		NullCheck(L_10);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11 = L_10->____pluginActivity_21;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12;
		L_12 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_11);
		int32_t L_13;
		L_13 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_11, _stringLiteral89D4E55115B28A1B9C26F4D9EEB95AA231CC0D0F, L_12, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_15);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_15);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_9;
		BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* L_17 = V_1;
		NullCheck(L_17);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_18 = L_17->____pluginActivity_21;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19;
		L_19 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_18);
		int32_t L_20;
		L_20 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_18, _stringLiteral925FA2B3454C261A87152E975E15AC0B6C9D5961, L_19, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		int32_t L_21 = L_20;
		RuntimeObject* L_22 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_22);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_16;
		BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* L_24 = V_1;
		NullCheck(L_24);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_25 = L_24->____pluginActivity_21;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26;
		L_26 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_25);
		int32_t L_27;
		L_27 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_25, _stringLiteral7E72B120FA21DA1374ED0C2A1C9A70CFE86A3BE5, L_26, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_29);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_29);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = L_23;
		BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* L_31 = V_1;
		NullCheck(L_31);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_32 = L_31->____pluginActivity_21;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33;
		L_33 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_32);
		int32_t L_34;
		L_34 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_32, _stringLiteral1DE387F1A669669BC9F57D74FC455F344F675C98, L_33, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		int32_t L_35 = L_34;
		RuntimeObject* L_36 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_35);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_36);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_36);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_37 = L_30;
		BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* L_38 = V_1;
		NullCheck(L_38);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_39 = L_38->___dist1_12;
		NullCheck(L_39);
		String_t* L_40;
		L_40 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_39);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_40);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_40);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_41 = L_37;
		BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* L_42 = V_1;
		NullCheck(L_42);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_43 = L_42->___dist2_13;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_43);
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_44);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_44);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_45 = L_41;
		BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* L_46 = V_1;
		NullCheck(L_46);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_47 = L_46->___dist3_14;
		NullCheck(L_47);
		String_t* L_48;
		L_48 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_47);
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_48);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_48);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_49 = L_45;
		BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* L_50 = V_1;
		NullCheck(L_50);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_51 = L_50->___dist4_15;
		NullCheck(L_51);
		String_t* L_52;
		L_52 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_51);
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, L_52);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_52);
		String_t* L_53;
		L_53 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteralB5A302AEE00EEE59F229C71E024ABDDA9A7C1AD3, L_49, NULL);
		String_t* L_54;
		L_54 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_7, L_53, NULL);
		NullCheck(L_6);
		TMP_InputField_set_text_m684E9CDA2D9E82D1C497B5E03DBE79C00584FF62(L_6, L_54, NULL);
		// yield return new WaitForSecondsRealtime(.5f);
		WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* L_55 = (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01*)il2cpp_codegen_object_new(WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		NullCheck(L_55);
		WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F(L_55, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_55);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_010c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// counter += .5f;
		BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* L_56 = V_1;
		BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* L_57 = V_1;
		NullCheck(L_57);
		float L_58 = L_57->___counter_31;
		NullCheck(L_56);
		L_56->___counter_31 = ((float)il2cpp_codegen_add(L_58, (0.5f)));
		// if (counter <= time)
		BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* L_59 = V_1;
		NullCheck(L_59);
		float L_60 = L_59->___counter_31;
		BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* L_61 = V_1;
		NullCheck(L_61);
		double L_62 = L_61->___time_30;
		if ((!(((double)((double)L_60)) <= ((double)L_62))))
		{
			goto IL_0143;
		}
	}
	{
		// StartCoroutine(GetRssiData());
		BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* L_63 = V_1;
		BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* L_64 = V_1;
		NullCheck(L_64);
		RuntimeObject* L_65;
		L_65 = BLE_GetRssiData_mA5CFC95E8033F8028F4C5403BB8E2BCA55BF5918(L_64, NULL);
		NullCheck(L_63);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_66;
		L_66 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_63, L_65, NULL);
		goto IL_016a;
	}

IL_0143:
	{
		// logArea.text += "\nObservation Done!\n";
		BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* L_67 = V_1;
		NullCheck(L_67);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_68 = L_67->___logArea_18;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_69 = L_68;
		NullCheck(L_69);
		String_t* L_70;
		L_70 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_69, NULL);
		String_t* L_71;
		L_71 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_70, _stringLiteral38CFAF98E70679BD743272065C8FD52BDB964B10, NULL);
		NullCheck(L_69);
		TMP_InputField_set_text_m684E9CDA2D9E82D1C497B5E03DBE79C00584FF62(L_69, L_71, NULL);
		// StopCoroutine(GetRssiData());
		BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* L_72 = V_1;
		BLE_t5ABE111EC68949E758EB2AC74D8FC77B13B0FEAE* L_73 = V_1;
		NullCheck(L_73);
		RuntimeObject* L_74;
		L_74 = BLE_GetRssiData_mA5CFC95E8033F8028F4C5403BB8E2BCA55BF5918(L_73, NULL);
		NullCheck(L_72);
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(L_72, L_74, NULL);
	}

IL_016a:
	{
		// }
		return (bool)0;
	}
}
// System.Object BLE/<GetRssiData>d__38::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetRssiDataU3Ed__38_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3133C004B203342E58241F170F2B338F2736C3BE (U3CGetRssiDataU3Ed__38_tB0D19F866CD0E9454FD768ED2688FB1532BC3558* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void BLE/<GetRssiData>d__38::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRssiDataU3Ed__38_System_Collections_IEnumerator_Reset_m2F42C8A7B40CD08820101ED7B35FAA35A05B8E82 (U3CGetRssiDataU3Ed__38_tB0D19F866CD0E9454FD768ED2688FB1532BC3558* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetRssiDataU3Ed__38_System_Collections_IEnumerator_Reset_m2F42C8A7B40CD08820101ED7B35FAA35A05B8E82_RuntimeMethod_var)));
	}
}
// System.Object BLE/<GetRssiData>d__38::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetRssiDataU3Ed__38_System_Collections_IEnumerator_get_Current_mB1FE5E6BE678A53D8786A1A73F4C3065AACF5B25 (U3CGetRssiDataU3Ed__38_tB0D19F866CD0E9454FD768ED2688FB1532BC3558* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void BLECalibration::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BLECalibration_Start_m659B126212E688FAAB1A987BFB90D6FA95AA472A (BLECalibration_tE0AABD5BBBD7F98BA897828D09DDCA8504E32003* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSaver_loadData_TisCalibrationData_t0CEDFF596C17FEE4BD89AAD8E7B40E7DD0A3F22A_m061A396CF4E6BA9882242FFB08C3797EB0C70917_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F6996195B4FA772AC7CCBE4ABECCF7BB2701DA1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85BBD7CA1DF1206B96E452298DF404384EA3D7E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42B8EEE824B84FAB4691F67846B562FB00D2690);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE74E39F827005BA0C69B4D10D390B5F36486699);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA893F1C80774ABB0B3AB07B5C39C078EF958FEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF7C8094E5E17FF0F29E2B7D3FEAAAFD5642ECCD);
		s_Il2CppMethodInitialized = true;
	}
	CalibrationData_t0CEDFF596C17FEE4BD89AAD8E7B40E7DD0A3F22A* V_0 = NULL;
	{
		// CalibrationData loadedData = DataSaver.loadData<CalibrationData>("CalibrationData");
		CalibrationData_t0CEDFF596C17FEE4BD89AAD8E7B40E7DD0A3F22A* L_0;
		L_0 = DataSaver_loadData_TisCalibrationData_t0CEDFF596C17FEE4BD89AAD8E7B40E7DD0A3F22A_m061A396CF4E6BA9882242FFB08C3797EB0C70917(_stringLiteral3F6996195B4FA772AC7CCBE4ABECCF7BB2701DA1, DataSaver_loadData_TisCalibrationData_t0CEDFF596C17FEE4BD89AAD8E7B40E7DD0A3F22A_m061A396CF4E6BA9882242FFB08C3797EB0C70917_RuntimeMethod_var);
		V_0 = L_0;
		// if (loadedData != null)
		CalibrationData_t0CEDFF596C17FEE4BD89AAD8E7B40E7DD0A3F22A* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		// objUserDestination.transform.localPosition = new Vector3(loadedData.dx, loadedData.dy, loadedData.dz);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___objUserDestination_4;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		CalibrationData_t0CEDFF596C17FEE4BD89AAD8E7B40E7DD0A3F22A* L_4 = V_0;
		NullCheck(L_4);
		float L_5 = L_4->___dx_0;
		CalibrationData_t0CEDFF596C17FEE4BD89AAD8E7B40E7DD0A3F22A* L_6 = V_0;
		NullCheck(L_6);
		float L_7 = L_6->___dy_1;
		CalibrationData_t0CEDFF596C17FEE4BD89AAD8E7B40E7DD0A3F22A* L_8 = V_0;
		NullCheck(L_8);
		float L_9 = L_8->___dz_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), L_5, L_7, L_9, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_3, L_10, NULL);
	}

IL_0035:
	{
		// btnStartNavigation.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_11 = __this->___btnStartNavigation_10;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_11, NULL);
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
		// btnConfirmPosition.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_13 = __this->___btnConfirmPosition_11;
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_13, NULL);
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)0, NULL);
		// btnConfirmDestination.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_15 = __this->___btnConfirmDestination_12;
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_15, NULL);
		NullCheck(L_16);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)0, NULL);
		// _pluginActivity = new AndroidJavaObject("com.khynsoft.ble.PluginActivity");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17;
		L_17 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_18 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_18, _stringLiteralEF7C8094E5E17FF0F29E2B7D3FEAAAFD5642ECCD, L_17, NULL);
		__this->____pluginActivity_34 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pluginActivity_34), (void*)L_18);
		// posBeacon1X = objBeacon1.transform.localPosition.x;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___objBeacon1_6;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_20, NULL);
		float L_22 = L_21.___x_2;
		__this->___posBeacon1X_14 = ((double)L_22);
		// posBeacon1Y = objBeacon1.transform.localPosition.z;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___objBeacon1_6;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_23, NULL);
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_24, NULL);
		float L_26 = L_25.___z_4;
		__this->___posBeacon1Y_15 = ((double)L_26);
		// posBeacon2X = objBeacon2.transform.localPosition.x;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = __this->___objBeacon2_7;
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_27, NULL);
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_28, NULL);
		float L_30 = L_29.___x_2;
		__this->___posBeacon2X_16 = ((double)L_30);
		// posBeacon2Y = objBeacon2.transform.localPosition.z;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = __this->___objBeacon2_7;
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_31, NULL);
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_32, NULL);
		float L_34 = L_33.___z_4;
		__this->___posBeacon2Y_17 = ((double)L_34);
		// posBeacon3X = objBeacon3.transform.localPosition.x;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = __this->___objBeacon3_8;
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_35, NULL);
		NullCheck(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_36, NULL);
		float L_38 = L_37.___x_2;
		__this->___posBeacon3X_18 = ((double)L_38);
		// posBeacon3Y = objBeacon3.transform.localPosition.z;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = __this->___objBeacon3_8;
		NullCheck(L_39);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_39, NULL);
		NullCheck(L_40);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_40, NULL);
		float L_42 = L_41.___z_4;
		__this->___posBeacon3Y_19 = ((double)L_42);
		// posBeacon4X = objBeacon4.transform.localPosition.x;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43 = __this->___objBeacon4_9;
		NullCheck(L_43);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_43, NULL);
		NullCheck(L_44);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_44, NULL);
		float L_46 = L_45.___x_2;
		__this->___posBeacon4X_20 = ((double)L_46);
		// posBeacon4Y = objBeacon4.transform.localPosition.z;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47 = __this->___objBeacon4_9;
		NullCheck(L_47);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_47, NULL);
		NullCheck(L_48);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_48, NULL);
		float L_50 = L_49.___z_4;
		__this->___posBeacon4Y_21 = ((double)L_50);
		// _pluginActivity.Call("setPosBeacon1", posBeacon1X, posBeacon1Y);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_51 = __this->____pluginActivity_34;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_52 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_53 = L_52;
		double L_54 = __this->___posBeacon1X_14;
		double L_55 = L_54;
		RuntimeObject* L_56 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_55);
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, L_56);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_56);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_57 = L_53;
		double L_58 = __this->___posBeacon1Y_15;
		double L_59 = L_58;
		RuntimeObject* L_60 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_59);
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, L_60);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_60);
		NullCheck(L_51);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_51, _stringLiteralA42B8EEE824B84FAB4691F67846B562FB00D2690, L_57, NULL);
		// _pluginActivity.Call("setPosBeacon2", posBeacon2X, posBeacon2Y);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_61 = __this->____pluginActivity_34;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_62 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_63 = L_62;
		double L_64 = __this->___posBeacon2X_16;
		double L_65 = L_64;
		RuntimeObject* L_66 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_65);
		NullCheck(L_63);
		ArrayElementTypeCheck (L_63, L_66);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_66);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_67 = L_63;
		double L_68 = __this->___posBeacon2Y_17;
		double L_69 = L_68;
		RuntimeObject* L_70 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_69);
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_70);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_70);
		NullCheck(L_61);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_61, _stringLiteral85BBD7CA1DF1206B96E452298DF404384EA3D7E4, L_67, NULL);
		// _pluginActivity.Call("setPosBeacon3", posBeacon3X, posBeacon3Y);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_71 = __this->____pluginActivity_34;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_72 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_73 = L_72;
		double L_74 = __this->___posBeacon3X_18;
		double L_75 = L_74;
		RuntimeObject* L_76 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_75);
		NullCheck(L_73);
		ArrayElementTypeCheck (L_73, L_76);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_76);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_77 = L_73;
		double L_78 = __this->___posBeacon3Y_19;
		double L_79 = L_78;
		RuntimeObject* L_80 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_79);
		NullCheck(L_77);
		ArrayElementTypeCheck (L_77, L_80);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_80);
		NullCheck(L_71);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_71, _stringLiteralBE74E39F827005BA0C69B4D10D390B5F36486699, L_77, NULL);
		// _pluginActivity.Call("setPosBeacon4", posBeacon4X, posBeacon4Y);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_81 = __this->____pluginActivity_34;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_82 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_83 = L_82;
		double L_84 = __this->___posBeacon4X_20;
		double L_85 = L_84;
		RuntimeObject* L_86 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_85);
		NullCheck(L_83);
		ArrayElementTypeCheck (L_83, L_86);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_86);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_87 = L_83;
		double L_88 = __this->___posBeacon4Y_21;
		double L_89 = L_88;
		RuntimeObject* L_90 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_89);
		NullCheck(L_87);
		ArrayElementTypeCheck (L_87, L_90);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_90);
		NullCheck(L_81);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_81, _stringLiteralCA893F1C80774ABB0B3AB07B5C39C078EF958FEF, L_87, NULL);
		// StartCoroutine(UpdateUserPosition());
		RuntimeObject* L_91;
		L_91 = BLECalibration_UpdateUserPosition_m402CE4357C4C3E1059F37A91072631E9295274D0(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_92;
		L_92 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_91, NULL);
		// StartCoroutine(CalibrateWaitIndicator());
		RuntimeObject* L_93;
		L_93 = BLECalibration_CalibrateWaitIndicator_mBAD371360E274935BDCF72C33B9A5E4284C3D6B5(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_94;
		L_94 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_93, NULL);
		// }
		return;
	}
}
// System.Void BLECalibration::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BLECalibration_Update_m3D0AF02508D9E8A009D5A96546576FC34205A75D (BLECalibration_tE0AABD5BBBD7F98BA897828D09DDCA8504E32003* __this, const RuntimeMethod* method) 
{
	{
		// if(isConfirmedDestination & isConfirmedPosition)
		bool L_0 = __this->___isConfirmedDestination_31;
		bool L_1 = __this->___isConfirmedPosition_30;
		if (!((int32_t)((int32_t)L_0&(int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		// btnStartNavigation.gameObject.SetActive(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___btnStartNavigation_10;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void BLECalibration::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BLECalibration_OnDestroy_mE2A3C66B656199112C48B3E0FD205E3B2E338D4B (BLECalibration_tE0AABD5BBBD7F98BA897828D09DDCA8504E32003* __this, const RuntimeMethod* method) 
{
	{
		// StopCoroutine(UpdateUserPosition());
		RuntimeObject* L_0;
		L_0 = BLECalibration_UpdateUserPosition_m402CE4357C4C3E1059F37A91072631E9295274D0(__this, NULL);
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(__this, L_0, NULL);
		// StopCoroutine(CalibrateWaitIndicator());
		RuntimeObject* L_1;
		L_1 = BLECalibration_CalibrateWaitIndicator_mBAD371360E274935BDCF72C33B9A5E4284C3D6B5(__this, NULL);
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator BLECalibration::CalibrateWaitIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BLECalibration_CalibrateWaitIndicator_mBAD371360E274935BDCF72C33B9A5E4284C3D6B5 (BLECalibration_tE0AABD5BBBD7F98BA897828D09DDCA8504E32003* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCalibrateWaitIndicatorU3Ed__35_tBB064D08617B7B22EB025D981B39AAE4AC494713_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCalibrateWaitIndicatorU3Ed__35_tBB064D08617B7B22EB025D981B39AAE4AC494713* L_0 = (U3CCalibrateWaitIndicatorU3Ed__35_tBB064D08617B7B22EB025D981B39AAE4AC494713*)il2cpp_codegen_object_new(U3CCalibrateWaitIndicatorU3Ed__35_tBB064D08617B7B22EB025D981B39AAE4AC494713_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCalibrateWaitIndicatorU3Ed__35__ctor_m154156E3077E5DFB6776B8236FE36BC03DFC53FF(L_0, 0, NULL);
		U3CCalibrateWaitIndicatorU3Ed__35_tBB064D08617B7B22EB025D981B39AAE4AC494713* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator BLECalibration::UpdateUserPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BLECalibration_UpdateUserPosition_m402CE4357C4C3E1059F37A91072631E9295274D0 (BLECalibration_tE0AABD5BBBD7F98BA897828D09DDCA8504E32003* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CUpdateUserPositionU3Ed__36_t871E40FC6CB7015D9B15388235F918DAA1AD9816_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CUpdateUserPositionU3Ed__36_t871E40FC6CB7015D9B15388235F918DAA1AD9816* L_0 = (U3CUpdateUserPositionU3Ed__36_t871E40FC6CB7015D9B15388235F918DAA1AD9816*)il2cpp_codegen_object_new(U3CUpdateUserPositionU3Ed__36_t871E40FC6CB7015D9B15388235F918DAA1AD9816_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CUpdateUserPositionU3Ed__36__ctor_mA0052912C4B7E23095D75E320CE2FBFF0400F7BB(L_0, 0, NULL);
		U3CUpdateUserPositionU3Ed__36_t871E40FC6CB7015D9B15388235F918DAA1AD9816* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void BLECalibration::RefreshRssi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BLECalibration_RefreshRssi_m67790AB8B8E74BC5ED533ED55243C98DB2395995 (BLECalibration_tE0AABD5BBBD7F98BA897828D09DDCA8504E32003* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DE387F1A669669BC9F57D74FC455F344F675C98);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E72B120FA21DA1374ED0C2A1C9A70CFE86A3BE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89D4E55115B28A1B9C26F4D9EEB95AA231CC0D0F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral925FA2B3454C261A87152E975E15AC0B6C9D5961);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_pluginActivity != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->____pluginActivity_34;
		if (!L_0)
		{
			goto IL_0078;
		}
	}
	{
		// rssi1 = _pluginActivity.Call<int>("getRssi1");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = __this->____pluginActivity_34;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_3;
		L_3 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_1, _stringLiteral89D4E55115B28A1B9C26F4D9EEB95AA231CC0D0F, L_2, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		__this->___rssi1_22 = ((float)L_3);
		// rssi2 = _pluginActivity.Call<int>("getRssi2");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = __this->____pluginActivity_34;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5;
		L_5 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_4);
		int32_t L_6;
		L_6 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_4, _stringLiteral925FA2B3454C261A87152E975E15AC0B6C9D5961, L_5, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		__this->___rssi2_23 = ((float)L_6);
		// rssi3 = _pluginActivity.Call<int>("getRssi3");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = __this->____pluginActivity_34;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8;
		L_8 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_7);
		int32_t L_9;
		L_9 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_7, _stringLiteral7E72B120FA21DA1374ED0C2A1C9A70CFE86A3BE5, L_8, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		__this->___rssi3_24 = ((float)L_9);
		// rssi4 = _pluginActivity.Call<int>("getRssi4");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10 = __this->____pluginActivity_34;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11;
		L_11 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_10);
		int32_t L_12;
		L_12 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_10, _stringLiteral1DE387F1A669669BC9F57D74FC455F344F675C98, L_11, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		__this->___rssi4_25 = ((float)L_12);
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.Void BLECalibration::RefreshFilteredRssi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BLECalibration_RefreshFilteredRssi_m68AD8FB0565BCC3F07F97FCA341BAE5A1168748B (BLECalibration_tE0AABD5BBBD7F98BA897828D09DDCA8504E32003* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CD1BDB935F488B3027A947408A0D33D52E5F07F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_pluginActivity != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->____pluginActivity_34;
		if (!L_0)
		{
			goto IL_009f;
		}
	}
	{
		// frssi1 = _pluginActivity.Call<double>("getSmoothRssi", 1);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = __this->____pluginActivity_34;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		int32_t L_4 = 1;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_1);
		double L_6;
		L_6 = AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362(L_1, _stringLiteral7CD1BDB935F488B3027A947408A0D33D52E5F07F, L_3, AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_RuntimeMethod_var);
		__this->___frssi1_26 = L_6;
		// frssi2 = _pluginActivity.Call<double>("getSmoothRssi", 2);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = __this->____pluginActivity_34;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8;
		int32_t L_10 = 2;
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_11);
		NullCheck(L_7);
		double L_12;
		L_12 = AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362(L_7, _stringLiteral7CD1BDB935F488B3027A947408A0D33D52E5F07F, L_9, AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_RuntimeMethod_var);
		__this->___frssi2_27 = L_12;
		// frssi3 = _pluginActivity.Call<double>("getSmoothRssi", 3);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_13 = __this->____pluginActivity_34;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_14;
		int32_t L_16 = 3;
		RuntimeObject* L_17 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_17);
		NullCheck(L_13);
		double L_18;
		L_18 = AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362(L_13, _stringLiteral7CD1BDB935F488B3027A947408A0D33D52E5F07F, L_15, AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_RuntimeMethod_var);
		__this->___frssi3_28 = L_18;
		// frssi4 = _pluginActivity.Call<double>("getSmoothRssi", 4);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_19 = __this->____pluginActivity_34;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_20;
		int32_t L_22 = 4;
		RuntimeObject* L_23 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_23);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_23);
		NullCheck(L_19);
		double L_24;
		L_24 = AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362(L_19, _stringLiteral7CD1BDB935F488B3027A947408A0D33D52E5F07F, L_21, AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_RuntimeMethod_var);
		__this->___frssi4_29 = L_24;
	}

IL_009f:
	{
		// }
		return;
	}
}
// System.Void BLECalibration::SetUserPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BLECalibration_SetUserPosition_mAA6FA59DBB0C78E8878BF1D1C63748D506E55140 (BLECalibration_tE0AABD5BBBD7F98BA897828D09DDCA8504E32003* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisDoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_m15069A175D7E52353A996F903290EEBEE16BC72D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCBD0353DF0ADF38466DC7D4EAAE9F8FDBF09BA7);
		s_Il2CppMethodInitialized = true;
	}
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// uLocation = _pluginActivity.Call<double[]>("getUserPosition");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->____pluginActivity_34;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2;
		L_2 = AndroidJavaObject_Call_TisDoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_m15069A175D7E52353A996F903290EEBEE16BC72D(L_0, _stringLiteralFCBD0353DF0ADF38466DC7D4EAAE9F8FDBF09BA7, L_1, AndroidJavaObject_Call_TisDoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_m15069A175D7E52353A996F903290EEBEE16BC72D_RuntimeMethod_var);
		V_0 = L_2;
		// Vector3 newPos = new Vector3((float)uLocation[0], 0, (float)uLocation[1]);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		double L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = 1;
		double L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_1), ((float)L_5), (0.0f), ((float)L_8), NULL);
		// objUserPosition.transform.localPosition = Vector3.Lerp(objUserPosition.transform.position, newPos, 1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___objUserPosition_5;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___objUserPosition_5;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_13, L_14, (1.0f), NULL);
		NullCheck(L_10);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_10, L_15, NULL);
		// }
		return;
	}
}
// System.Void BLECalibration::BackToMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BLECalibration_BackToMenu_m00DCC866C1EDFD6884CA52F8ADBA24B7D19A7153 (BLECalibration_tE0AABD5BBBD7F98BA897828D09DDCA8504E32003* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Menu");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A, NULL);
		// }
		return;
	}
}
// System.Void BLECalibration::GoARNavigate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BLECalibration_GoARNavigate_m3870E137941EDDB1B1DFFC420152108703DD1E1A (BLECalibration_tE0AABD5BBBD7F98BA897828D09DDCA8504E32003* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CalibrationData_t0CEDFF596C17FEE4BD89AAD8E7B40E7DD0A3F22A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSaver_saveData_TisCalibrationData_t0CEDFF596C17FEE4BD89AAD8E7B40E7DD0A3F22A_m89A89775403C94AF93B0B2A8A3A5FFBFB23E4715_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F6996195B4FA772AC7CCBE4ABECCF7BB2701DA1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4F630AC50776816C3484134FD42787CF301FCCB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Navigation");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralD4F630AC50776816C3484134FD42787CF301FCCB, NULL);
		// CalibrationData data = new CalibrationData();
		CalibrationData_t0CEDFF596C17FEE4BD89AAD8E7B40E7DD0A3F22A* L_0 = (CalibrationData_t0CEDFF596C17FEE4BD89AAD8E7B40E7DD0A3F22A*)il2cpp_codegen_object_new(CalibrationData_t0CEDFF596C17FEE4BD89AAD8E7B40E7DD0A3F22A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CalibrationData__ctor_mC93E790F3CB97A6CE888A104390555BC05D4E4F4(L_0, NULL);
		// data.dx = objUserDestination.transform.position.x;
		CalibrationData_t0CEDFF596C17FEE4BD89AAD8E7B40E7DD0A3F22A* L_1 = L_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___objUserDestination_4;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___x_2;
		NullCheck(L_1);
		L_1->___dx_0 = L_5;
		// data.dy = objUserDestination.transform.position.y;
		CalibrationData_t0CEDFF596C17FEE4BD89AAD8E7B40E7DD0A3F22A* L_6 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___objUserDestination_4;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		float L_10 = L_9.___y_3;
		NullCheck(L_6);
		L_6->___dy_1 = L_10;
		// data.dz = objUserDestination.transform.position.z;
		CalibrationData_t0CEDFF596C17FEE4BD89AAD8E7B40E7DD0A3F22A* L_11 = L_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___objUserDestination_4;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		float L_15 = L_14.___z_4;
		NullCheck(L_11);
		L_11->___dz_2 = L_15;
		// data.ux = objUserDestination.transform.position.x;
		CalibrationData_t0CEDFF596C17FEE4BD89AAD8E7B40E7DD0A3F22A* L_16 = L_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___objUserDestination_4;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_17, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		float L_20 = L_19.___x_2;
		NullCheck(L_16);
		L_16->___ux_3 = L_20;
		// data.uy = objUserDestination.transform.position.y;
		CalibrationData_t0CEDFF596C17FEE4BD89AAD8E7B40E7DD0A3F22A* L_21 = L_16;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___objUserDestination_4;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_22, NULL);
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_23, NULL);
		float L_25 = L_24.___y_3;
		NullCheck(L_21);
		L_21->___uy_4 = L_25;
		// data.uz = objUserDestination.transform.position.z;
		CalibrationData_t0CEDFF596C17FEE4BD89AAD8E7B40E7DD0A3F22A* L_26 = L_21;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = __this->___objUserDestination_4;
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_27, NULL);
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_28, NULL);
		float L_30 = L_29.___z_4;
		NullCheck(L_26);
		L_26->___uz_5 = L_30;
		// DataSaver.saveData(data, "CalibrationData");
		DataSaver_saveData_TisCalibrationData_t0CEDFF596C17FEE4BD89AAD8E7B40E7DD0A3F22A_m89A89775403C94AF93B0B2A8A3A5FFBFB23E4715(L_26, _stringLiteral3F6996195B4FA772AC7CCBE4ABECCF7BB2701DA1, DataSaver_saveData_TisCalibrationData_t0CEDFF596C17FEE4BD89AAD8E7B40E7DD0A3F22A_m89A89775403C94AF93B0B2A8A3A5FFBFB23E4715_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void BLECalibration::ConfirmPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BLECalibration_ConfirmPosition_m3E5D4A2359ADA4692D7537345385BBFDCD2CF766 (BLECalibration_tE0AABD5BBBD7F98BA897828D09DDCA8504E32003* __this, const RuntimeMethod* method) 
{
	{
		// isConfirmedPosition = true;
		__this->___isConfirmedPosition_30 = (bool)1;
		// btnConfirmPosition.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___btnConfirmPosition_11;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// btnConfirmDestination.gameObject.SetActive(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___btnConfirmDestination_12;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void BLECalibration::ConfirmDestination()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BLECalibration_ConfirmDestination_mD6D40F09DA5347C5D34E44D397E01C9FF99AD0CE (BLECalibration_tE0AABD5BBBD7F98BA897828D09DDCA8504E32003* __this, const RuntimeMethod* method) 
{
	{
		// isConfirmedDestination = true;
		__this->___isConfirmedDestination_31 = (bool)1;
		// btnConfirmDestination.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___btnConfirmDestination_12;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void BLECalibration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BLECalibration__ctor_m76B1A14745AC172C7F0A79CE7C9EE17996705D80 (BLECalibration_tE0AABD5BBBD7F98BA897828D09DDCA8504E32003* __this, const RuntimeMethod* method) 
{
	{
		// private float rssi1 = -59;
		__this->___rssi1_22 = (-59.0f);
		// private float rssi2 = -59;
		__this->___rssi2_23 = (-59.0f);
		// private float rssi3 = -59;
		__this->___rssi3_24 = (-59.0f);
		// private float rssi4 = -59;
		__this->___rssi4_25 = (-59.0f);
		// private double frssi1 = -59;
		__this->___frssi1_26 = (-59.0);
		// private double frssi2 = -59;
		__this->___frssi2_27 = (-59.0);
		// private double frssi3 = -59;
		__this->___frssi3_28 = (-59.0);
		// private double frssi4 = -59;
		__this->___frssi4_29 = (-59.0);
		// int counter = 10;
		__this->___counter_35 = ((int32_t)10);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void BLECalibration/<CalibrateWaitIndicator>d__35::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCalibrateWaitIndicatorU3Ed__35__ctor_m154156E3077E5DFB6776B8236FE36BC03DFC53FF (U3CCalibrateWaitIndicatorU3Ed__35_tBB064D08617B7B22EB025D981B39AAE4AC494713* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void BLECalibration/<CalibrateWaitIndicator>d__35::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCalibrateWaitIndicatorU3Ed__35_System_IDisposable_Dispose_m0F930EA49DDD6BC705250F710FD9BDDC5A45AA81 (U3CCalibrateWaitIndicatorU3Ed__35_tBB064D08617B7B22EB025D981B39AAE4AC494713* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean BLECalibration/<CalibrateWaitIndicator>d__35::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCalibrateWaitIndicatorU3Ed__35_MoveNext_mBE5FCAFB042E6E6292AD5E0A6558ED58F30A4141 (U3CCalibrateWaitIndicatorU3Ed__35_tBB064D08617B7B22EB025D981B39AAE4AC494713* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29E3862E038EB6273FF8D6F9C1BD1085A99211B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BE74EEE9B4F4BB93EF6D7EDF612BBFEDA23BE6D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA9F78119E7B7AA30C2F7CE932988E52F2437C59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF13C182938BF2DD1801786E329EF9182C9122C29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BLECalibration_tE0AABD5BBBD7F98BA897828D09DDCA8504E32003* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		BLECalibration_tE0AABD5BBBD7F98BA897828D09DDCA8504E32003* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_010c;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// string dot = "";
		V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int x = 0; x < elipsisCounter; x++)
		V_3 = 0;
		goto IL_003b;
	}

IL_002b:
	{
		// dot += ".";
		String_t* L_4 = V_2;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_4, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		V_2 = L_5;
		// for (int x = 0; x < elipsisCounter; x++)
		int32_t L_6 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_003b:
	{
		// for (int x = 0; x < elipsisCounter; x++)
		int32_t L_7 = V_3;
		BLECalibration_tE0AABD5BBBD7F98BA897828D09DDCA8504E32003* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = L_8->___elipsisCounter_33;
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_002b;
		}
	}
	{
		// if (elipsisCounter == 3)
		BLECalibration_tE0AABD5BBBD7F98BA897828D09DDCA8504E32003* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11 = L_10->___elipsisCounter_33;
		if ((!(((uint32_t)L_11) == ((uint32_t)3))))
		{
			goto IL_0056;
		}
	}
	{
		// elipsisCounter = 0;
		BLECalibration_tE0AABD5BBBD7F98BA897828D09DDCA8504E32003* L_12 = V_1;
		NullCheck(L_12);
		L_12->___elipsisCounter_33 = 0;
		goto IL_0064;
	}

IL_0056:
	{
		// elipsisCounter++;
		BLECalibration_tE0AABD5BBBD7F98BA897828D09DDCA8504E32003* L_13 = V_1;
		BLECalibration_tE0AABD5BBBD7F98BA897828D09DDCA8504E32003* L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15 = L_14->___elipsisCounter_33;
		NullCheck(L_13);
		L_13->___elipsisCounter_33 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0064:
	{
		// if (counter > 0)
		BLECalibration_tE0AABD5BBBD7F98BA897828D09DDCA8504E32003* L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17 = L_16->___counter_35;
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_00bd;
		}
	}
	{
		// txtWaitLabel.text = "Calibrating your position"+ dot + "\nPlease wait for "+ counter +"s or more.";
		BLECalibration_tE0AABD5BBBD7F98BA897828D09DDCA8504E32003* L_18 = V_1;
		NullCheck(L_18);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_19 = L_18->___txtWaitLabel_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteral29E3862E038EB6273FF8D6F9C1BD1085A99211B9);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral29E3862E038EB6273FF8D6F9C1BD1085A99211B9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_21;
		String_t* L_23 = V_2;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_23);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_22;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteralEA9F78119E7B7AA30C2F7CE932988E52F2437C59);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralEA9F78119E7B7AA30C2F7CE932988E52F2437C59);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_24;
		BLECalibration_tE0AABD5BBBD7F98BA897828D09DDCA8504E32003* L_26 = V_1;
		NullCheck(L_26);
		int32_t* L_27 = (&L_26->___counter_35);
		String_t* L_28;
		L_28 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_27, NULL);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_28);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = L_25;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteral7BE74EEE9B4F4BB93EF6D7EDF612BBFEDA23BE6D);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral7BE74EEE9B4F4BB93EF6D7EDF612BBFEDA23BE6D);
		String_t* L_30;
		L_30 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_29, NULL);
		NullCheck(L_19);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_19, L_30);
		// counter--;
		BLECalibration_tE0AABD5BBBD7F98BA897828D09DDCA8504E32003* L_31 = V_1;
		BLECalibration_tE0AABD5BBBD7F98BA897828D09DDCA8504E32003* L_32 = V_1;
		NullCheck(L_32);
		int32_t L_33 = L_32->___counter_35;
		NullCheck(L_31);
		L_31->___counter_35 = ((int32_t)il2cpp_codegen_subtract(L_33, 1));
		goto IL_00f3;
	}

IL_00bd:
	{
		// txtWaitLabel.text = "Your position should be calibrated.\nAwaiting positions' confirmation" + dot;
		BLECalibration_tE0AABD5BBBD7F98BA897828D09DDCA8504E32003* L_34 = V_1;
		NullCheck(L_34);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_35 = L_34->___txtWaitLabel_13;
		String_t* L_36 = V_2;
		String_t* L_37;
		L_37 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralF13C182938BF2DD1801786E329EF9182C9122C29, L_36, NULL);
		NullCheck(L_35);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_35, L_37);
		// if (!isConfirmPositionVisible)
		BLECalibration_tE0AABD5BBBD7F98BA897828D09DDCA8504E32003* L_38 = V_1;
		NullCheck(L_38);
		bool L_39 = L_38->___isConfirmPositionVisible_32;
		if (L_39)
		{
			goto IL_00f3;
		}
	}
	{
		// btnConfirmPosition.gameObject.SetActive(true);
		BLECalibration_tE0AABD5BBBD7F98BA897828D09DDCA8504E32003* L_40 = V_1;
		NullCheck(L_40);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_41 = L_40->___btnConfirmPosition_11;
		NullCheck(L_41);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42;
		L_42 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_41, NULL);
		NullCheck(L_42);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_42, (bool)1, NULL);
		// isConfirmPositionVisible = true;
		BLECalibration_tE0AABD5BBBD7F98BA897828D09DDCA8504E32003* L_43 = V_1;
		NullCheck(L_43);
		L_43->___isConfirmPositionVisible_32 = (bool)1;
	}

IL_00f3:
	{
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_44 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_44, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_44);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_010c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// StartCoroutine(CalibrateWaitIndicator());
		BLECalibration_tE0AABD5BBBD7F98BA897828D09DDCA8504E32003* L_45 = V_1;
		BLECalibration_tE0AABD5BBBD7F98BA897828D09DDCA8504E32003* L_46 = V_1;
		NullCheck(L_46);
		RuntimeObject* L_47;
		L_47 = BLECalibration_CalibrateWaitIndicator_mBAD371360E274935BDCF72C33B9A5E4284C3D6B5(L_46, NULL);
		NullCheck(L_45);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_48;
		L_48 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_45, L_47, NULL);
		// }
		return (bool)0;
	}
}
// System.Object BLECalibration/<CalibrateWaitIndicator>d__35::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCalibrateWaitIndicatorU3Ed__35_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9364437AD8BD26708E2353A0B9ABED1A08D551EE (U3CCalibrateWaitIndicatorU3Ed__35_tBB064D08617B7B22EB025D981B39AAE4AC494713* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void BLECalibration/<CalibrateWaitIndicator>d__35::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCalibrateWaitIndicatorU3Ed__35_System_Collections_IEnumerator_Reset_m2B5D46524DF4DFD6456F26EB1379790D712D7AFC (U3CCalibrateWaitIndicatorU3Ed__35_tBB064D08617B7B22EB025D981B39AAE4AC494713* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCalibrateWaitIndicatorU3Ed__35_System_Collections_IEnumerator_Reset_m2B5D46524DF4DFD6456F26EB1379790D712D7AFC_RuntimeMethod_var)));
	}
}
// System.Object BLECalibration/<CalibrateWaitIndicator>d__35::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCalibrateWaitIndicatorU3Ed__35_System_Collections_IEnumerator_get_Current_mD05014D1D93CFAAAE2412ED755DF4B00F19C9851 (U3CCalibrateWaitIndicatorU3Ed__35_tBB064D08617B7B22EB025D981B39AAE4AC494713* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void BLECalibration/<UpdateUserPosition>d__36::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateUserPositionU3Ed__36__ctor_mA0052912C4B7E23095D75E320CE2FBFF0400F7BB (U3CUpdateUserPositionU3Ed__36_t871E40FC6CB7015D9B15388235F918DAA1AD9816* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void BLECalibration/<UpdateUserPosition>d__36::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateUserPositionU3Ed__36_System_IDisposable_Dispose_mAA27080D59F78986F8D9686AE5B3F6FC32E6795A (U3CUpdateUserPositionU3Ed__36_t871E40FC6CB7015D9B15388235F918DAA1AD9816* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean BLECalibration/<UpdateUserPosition>d__36::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CUpdateUserPositionU3Ed__36_MoveNext_m728FA14C6C7AA51514551C38DEC4B4DC2AE9D362 (U3CUpdateUserPositionU3Ed__36_t871E40FC6CB7015D9B15388235F918DAA1AD9816* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BLECalibration_tE0AABD5BBBD7F98BA897828D09DDCA8504E32003* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		BLECalibration_tE0AABD5BBBD7F98BA897828D09DDCA8504E32003* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_004b;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// RefreshFilteredRssi();
		BLECalibration_tE0AABD5BBBD7F98BA897828D09DDCA8504E32003* L_4 = V_1;
		NullCheck(L_4);
		BLECalibration_RefreshFilteredRssi_m68AD8FB0565BCC3F07F97FCA341BAE5A1168748B(L_4, NULL);
		// if(!isConfirmedPosition)
		BLECalibration_tE0AABD5BBBD7F98BA897828D09DDCA8504E32003* L_5 = V_1;
		NullCheck(L_5);
		bool L_6 = L_5->___isConfirmedPosition_30;
		if (L_6)
		{
			goto IL_0032;
		}
	}
	{
		// SetUserPosition();
		BLECalibration_tE0AABD5BBBD7F98BA897828D09DDCA8504E32003* L_7 = V_1;
		NullCheck(L_7);
		BLECalibration_SetUserPosition_mAA6FA59DBB0C78E8878BF1D1C63748D506E55140(L_7, NULL);
	}

IL_0032:
	{
		// yield return new WaitForSeconds(.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_8 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_8, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// StartCoroutine(UpdateUserPosition());
		BLECalibration_tE0AABD5BBBD7F98BA897828D09DDCA8504E32003* L_9 = V_1;
		BLECalibration_tE0AABD5BBBD7F98BA897828D09DDCA8504E32003* L_10 = V_1;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = BLECalibration_UpdateUserPosition_m402CE4357C4C3E1059F37A91072631E9295274D0(L_10, NULL);
		NullCheck(L_9);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_12;
		L_12 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_9, L_11, NULL);
		// }
		return (bool)0;
	}
}
// System.Object BLECalibration/<UpdateUserPosition>d__36::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CUpdateUserPositionU3Ed__36_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m71109B57A9F1AD9297EB7D799FA2E45E4636EAC1 (U3CUpdateUserPositionU3Ed__36_t871E40FC6CB7015D9B15388235F918DAA1AD9816* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void BLECalibration/<UpdateUserPosition>d__36::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateUserPositionU3Ed__36_System_Collections_IEnumerator_Reset_m1FDE05FE65CA79D95092C6ACC8B1F08E86528B1E (U3CUpdateUserPositionU3Ed__36_t871E40FC6CB7015D9B15388235F918DAA1AD9816* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CUpdateUserPositionU3Ed__36_System_Collections_IEnumerator_Reset_m1FDE05FE65CA79D95092C6ACC8B1F08E86528B1E_RuntimeMethod_var)));
	}
}
// System.Object BLECalibration/<UpdateUserPosition>d__36::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CUpdateUserPositionU3Ed__36_System_Collections_IEnumerator_get_Current_m18BE8D4936830E927BA979E44458DAF094785758 (U3CUpdateUserPositionU3Ed__36_t871E40FC6CB7015D9B15388235F918DAA1AD9816* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Menu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_Start_mC49986718939F87924A1391044721CAC6E28919D (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Menu::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_Update_m664984862D794DB3E17B79AFC35D12A9ED961B5D (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Menu::StartCalibration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_StartCalibration_m6E652C8BF0D5E141777743176DE4366CBFD8A5A2 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB17BCCF10425CB8601C7FC19E815AE0FC87BDB6A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("MapCalibration");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralB17BCCF10425CB8601C7FC19E815AE0FC87BDB6A, NULL);
		// }
		return;
	}
}
// System.Void Menu::ExitApplication()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_ExitApplication_mA828955D2ABFFFD547FAA3530465383AE1FB2FAF (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// }
		return;
	}
}
// System.Void Menu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu__ctor_mBEF2B96BC9E3D64E020EBE40FEF9CF25E6C3ED00 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Navigation::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Navigation_Start_m852E927B366FFB2F010304804FAA1F8CEF8598A6 (Navigation_t9F99316B323A490310A05E96F2C7460595A0EC02* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSaver_loadData_TisCalibrationData_t0CEDFF596C17FEE4BD89AAD8E7B40E7DD0A3F22A_m061A396CF4E6BA9882242FFB08C3797EB0C70917_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F6996195B4FA772AC7CCBE4ABECCF7BB2701DA1);
		s_Il2CppMethodInitialized = true;
	}
	CalibrationData_t0CEDFF596C17FEE4BD89AAD8E7B40E7DD0A3F22A* V_0 = NULL;
	{
		// path = new NavMeshPath();
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_0 = (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7*)il2cpp_codegen_object_new(NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NavMeshPath__ctor_mEA40BFC2492814FFC97A71C3AEC2154A9415C37F(L_0, NULL);
		__this->___path_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___path_6), (void*)L_0);
		// line = transform.GetComponent<LineRenderer>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_2;
		L_2 = Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49(L_1, Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		__this->___line_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___line_7), (void*)L_2);
		// CalibrationData loadedData = DataSaver.loadData<CalibrationData>("CalibrationData");
		CalibrationData_t0CEDFF596C17FEE4BD89AAD8E7B40E7DD0A3F22A* L_3;
		L_3 = DataSaver_loadData_TisCalibrationData_t0CEDFF596C17FEE4BD89AAD8E7B40E7DD0A3F22A_m061A396CF4E6BA9882242FFB08C3797EB0C70917(_stringLiteral3F6996195B4FA772AC7CCBE4ABECCF7BB2701DA1, DataSaver_loadData_TisCalibrationData_t0CEDFF596C17FEE4BD89AAD8E7B40E7DD0A3F22A_m061A396CF4E6BA9882242FFB08C3797EB0C70917_RuntimeMethod_var);
		V_0 = L_3;
		// if (loadedData != null)
		CalibrationData_t0CEDFF596C17FEE4BD89AAD8E7B40E7DD0A3F22A* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0051;
		}
	}
	{
		// objDestination.transform.localPosition = new Vector3(loadedData.dx, loadedData.dy, loadedData.dz);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___objDestination_5;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		CalibrationData_t0CEDFF596C17FEE4BD89AAD8E7B40E7DD0A3F22A* L_7 = V_0;
		NullCheck(L_7);
		float L_8 = L_7->___dx_0;
		CalibrationData_t0CEDFF596C17FEE4BD89AAD8E7B40E7DD0A3F22A* L_9 = V_0;
		NullCheck(L_9);
		float L_10 = L_9->___dy_1;
		CalibrationData_t0CEDFF596C17FEE4BD89AAD8E7B40E7DD0A3F22A* L_11 = V_0;
		NullCheck(L_11);
		float L_12 = L_11->___dz_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_13), L_8, L_10, L_12, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_6, L_13, NULL);
	}

IL_0051:
	{
		// }
		return;
	}
}
// System.Void Navigation::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Navigation_Update_m8B9C2F786DCEDBB65BD03869DB567A1773B0B9ED (Navigation_t9F99316B323A490310A05E96F2C7460595A0EC02* __this, const RuntimeMethod* method) 
{
	{
		// NavMesh.CalculatePath(transform.position, objDestination.transform.position, NavMesh.AllAreas, path);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___objDestination_5;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_5 = __this->___path_6;
		bool L_6;
		L_6 = NavMesh_CalculatePath_m15FF9A2E008A90375072B9293D290D9167E580E9(L_1, L_4, (-1), L_5, NULL);
		// line.positionCount = path.corners.Length;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_7 = __this->___line_7;
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_8 = __this->___path_6;
		NullCheck(L_8);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_9;
		L_9 = NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E(L_8, NULL);
		NullCheck(L_9);
		NullCheck(L_7);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_7, ((int32_t)(((RuntimeArray*)L_9)->max_length)), NULL);
		// line.SetPositions(path.corners);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_10 = __this->___line_7;
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_11 = __this->___path_6;
		NullCheck(L_11);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_12;
		L_12 = NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E(L_11, NULL);
		NullCheck(L_10);
		LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02(L_10, L_12, NULL);
		// line.enabled = true;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_13 = __this->___line_7;
		NullCheck(L_13);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_13, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Navigation::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Navigation_OnDestroy_m1C17DE9FC43CAFDAF766A0B0E70C50EE38BD4854 (Navigation_t9F99316B323A490310A05E96F2C7460595A0EC02* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F6996195B4FA772AC7CCBE4ABECCF7BB2701DA1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DataSaver.deleteData("CalibrationData");
		bool L_0;
		L_0 = DataSaver_deleteData_mDAC8FAD4BBFB4A18706AD4277441585E1995E7EA(_stringLiteral3F6996195B4FA772AC7CCBE4ABECCF7BB2701DA1, NULL);
		// }
		return;
	}
}
// System.Void Navigation::CalibrateAgain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Navigation_CalibrateAgain_m010163B0929DE3C7D0EB168082FA0F94B14A640A (Navigation_t9F99316B323A490310A05E96F2C7460595A0EC02* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB17BCCF10425CB8601C7FC19E815AE0FC87BDB6A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("MapCalibration");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralB17BCCF10425CB8601C7FC19E815AE0FC87BDB6A, NULL);
		// }
		return;
	}
}
// System.Void Navigation::BackToMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Navigation_BackToMenu_mF5BBE50BB8EBC0FA70DCE055DC2CD7B0E1EB6F08 (Navigation_t9F99316B323A490310A05E96F2C7460595A0EC02* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Menu");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A, NULL);
		// }
		return;
	}
}
// System.Void Navigation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Navigation__ctor_m63EA9B52DBD1B65338196218077F4AF599724AD8 (Navigation_t9F99316B323A490310A05E96F2C7460595A0EC02* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UnscentedKalmanFilter.UKF::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UKF__ctor_m8D354A1ED892EA5AC0FBBB34C41A010C581E897C (UKF_tE1B7CA051082C54F4E8512986317A8B34062932A* __this, int32_t ___L0, const RuntimeMethod* method) 
{
	{
		// public UKF(int L = 0)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.L = L;
		int32_t L_0 = ___L0;
		__this->___L_0 = L_0;
		// }
		return;
	}
}
// System.Void UnscentedKalmanFilter.UKF::init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UKF_init_mFB1D8FFA3F783F006B98D4815BB175893F205C65 (UKF_tE1B7CA051082C54F4E8512986317A8B34062932A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatrixBuilder_1_Dense_m5C6670AD03341F052CEA2FC369B0523404CAB25E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatrixBuilder_1_Dense_m8FAC4AF7D0A03A88DC460B3A4967E55D7BBA2DB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatrixBuilder_1_Diagonal_m685C3C909B3B190F8E54E3AA838C500FB8EC1D68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatrixBuilder_1_Random_mE86256A934CABC20E1E5190C0C581A52DBF453C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1_CopyTo_mAF5B54FA1EBC56F6B5457C227E015ED05A7035AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1_get_Item_m9AC37D09D678515B98CFC7C5A3BBECAC3067D9DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1_op_Multiply_m39042F5DB6C9BCAC26059652232B314517464584_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1_set_Item_mC97D847F561C86DD3856B0FA098D2D0529728B67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// q = 0.05;
		__this->___q_11 = (0.050000000000000003);
		// r = 0.3;
		__this->___r_12 = (0.29999999999999999);
		// x = q * Matrix.Build.Random(L, 1); //initial state with noise
		double L_0 = __this->___q_11;
		il2cpp_codegen_runtime_class_init_inline(Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9_il2cpp_TypeInfo_var);
		MatrixBuilder_1_tB265D6E40F33E9A311724A5F2EDB8C5F71621C2A* L_1 = ((Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9_StaticFields*)il2cpp_codegen_static_fields_for(Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9_il2cpp_TypeInfo_var))->___Build_2;
		int32_t L_2 = __this->___L_0;
		NullCheck(L_1);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_3;
		L_3 = MatrixBuilder_1_Random_mE86256A934CABC20E1E5190C0C581A52DBF453C8(L_1, L_2, 1, MatrixBuilder_1_Random_mE86256A934CABC20E1E5190C0C581A52DBF453C8_RuntimeMethod_var);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_4;
		L_4 = Matrix_1_op_Multiply_m39042F5DB6C9BCAC26059652232B314517464584(L_0, L_3, Matrix_1_op_Multiply_m39042F5DB6C9BCAC26059652232B314517464584_RuntimeMethod_var);
		__this->___x_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___x_9), (void*)L_4);
		// P = Matrix.Build.Diagonal(L, L, 1); //initial state covraiance
		MatrixBuilder_1_tB265D6E40F33E9A311724A5F2EDB8C5F71621C2A* L_5 = ((Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9_StaticFields*)il2cpp_codegen_static_fields_for(Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9_il2cpp_TypeInfo_var))->___Build_2;
		int32_t L_6 = __this->___L_0;
		int32_t L_7 = __this->___L_0;
		NullCheck(L_5);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_8;
		L_8 = MatrixBuilder_1_Diagonal_m685C3C909B3B190F8E54E3AA838C500FB8EC1D68(L_5, L_6, L_7, (1.0), MatrixBuilder_1_Diagonal_m685C3C909B3B190F8E54E3AA838C500FB8EC1D68_RuntimeMethod_var);
		__this->___P_10 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___P_10), (void*)L_8);
		// Q = Matrix.Build.Diagonal(L, L, q * q); //covariance of process
		MatrixBuilder_1_tB265D6E40F33E9A311724A5F2EDB8C5F71621C2A* L_9 = ((Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9_StaticFields*)il2cpp_codegen_static_fields_for(Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9_il2cpp_TypeInfo_var))->___Build_2;
		int32_t L_10 = __this->___L_0;
		int32_t L_11 = __this->___L_0;
		double L_12 = __this->___q_11;
		double L_13 = __this->___q_11;
		NullCheck(L_9);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_14;
		L_14 = MatrixBuilder_1_Diagonal_m685C3C909B3B190F8E54E3AA838C500FB8EC1D68(L_9, L_10, L_11, ((double)il2cpp_codegen_multiply(L_12, L_13)), MatrixBuilder_1_Diagonal_m685C3C909B3B190F8E54E3AA838C500FB8EC1D68_RuntimeMethod_var);
		__this->___Q_13 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Q_13), (void*)L_14);
		// R = Matrix.Build.Dense(m, m, r * r); //covariance of measurement
		MatrixBuilder_1_tB265D6E40F33E9A311724A5F2EDB8C5F71621C2A* L_15 = ((Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9_StaticFields*)il2cpp_codegen_static_fields_for(Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9_il2cpp_TypeInfo_var))->___Build_2;
		int32_t L_16 = __this->___m_1;
		int32_t L_17 = __this->___m_1;
		double L_18 = __this->___r_12;
		double L_19 = __this->___r_12;
		NullCheck(L_15);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_20;
		L_20 = MatrixBuilder_1_Dense_m8FAC4AF7D0A03A88DC460B3A4967E55D7BBA2DB8(L_15, L_16, L_17, ((double)il2cpp_codegen_multiply(L_18, L_19)), MatrixBuilder_1_Dense_m8FAC4AF7D0A03A88DC460B3A4967E55D7BBA2DB8_RuntimeMethod_var);
		__this->___R_14 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___R_14), (void*)L_20);
		// alpha = 1e-3f;
		__this->___alpha_2 = (0.0010000000474974513);
		// ki = 0;
		__this->___ki_3 = (0.0);
		// beta = 2f;
		__this->___beta_4 = (2.0);
		// lambda = alpha * alpha * (L + ki) - L;
		double L_21 = __this->___alpha_2;
		double L_22 = __this->___alpha_2;
		int32_t L_23 = __this->___L_0;
		double L_24 = __this->___ki_3;
		int32_t L_25 = __this->___L_0;
		__this->___lambda_5 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_21, L_22)), ((double)il2cpp_codegen_add(((double)L_23), L_24)))), ((double)L_25)));
		// c = L + lambda;
		int32_t L_26 = __this->___L_0;
		double L_27 = __this->___lambda_5;
		__this->___c_6 = ((double)il2cpp_codegen_add(((double)L_26), L_27));
		// Wm = Matrix.Build.Dense(1, (2 * L + 1), 0.5 / c);
		MatrixBuilder_1_tB265D6E40F33E9A311724A5F2EDB8C5F71621C2A* L_28 = ((Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9_StaticFields*)il2cpp_codegen_static_fields_for(Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9_il2cpp_TypeInfo_var))->___Build_2;
		int32_t L_29 = __this->___L_0;
		double L_30 = __this->___c_6;
		NullCheck(L_28);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_31;
		L_31 = MatrixBuilder_1_Dense_m8FAC4AF7D0A03A88DC460B3A4967E55D7BBA2DB8(L_28, 1, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_29)), 1)), ((double)((0.5)/L_30)), MatrixBuilder_1_Dense_m8FAC4AF7D0A03A88DC460B3A4967E55D7BBA2DB8_RuntimeMethod_var);
		__this->___Wm_7 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Wm_7), (void*)L_31);
		// Wm[0, 0] = lambda / c;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_32 = __this->___Wm_7;
		double L_33 = __this->___lambda_5;
		double L_34 = __this->___c_6;
		NullCheck(L_32);
		Matrix_1_set_Item_mC97D847F561C86DD3856B0FA098D2D0529728B67_inline(L_32, 0, 0, ((double)(L_33/L_34)), Matrix_1_set_Item_mC97D847F561C86DD3856B0FA098D2D0529728B67_RuntimeMethod_var);
		// Wc = Matrix.Build.Dense(1, (2 * L + 1));
		MatrixBuilder_1_tB265D6E40F33E9A311724A5F2EDB8C5F71621C2A* L_35 = ((Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9_StaticFields*)il2cpp_codegen_static_fields_for(Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9_il2cpp_TypeInfo_var))->___Build_2;
		int32_t L_36 = __this->___L_0;
		NullCheck(L_35);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_37;
		L_37 = MatrixBuilder_1_Dense_m5C6670AD03341F052CEA2FC369B0523404CAB25E(L_35, 1, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_36)), 1)), MatrixBuilder_1_Dense_m5C6670AD03341F052CEA2FC369B0523404CAB25E_RuntimeMethod_var);
		__this->___Wc_8 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Wc_8), (void*)L_37);
		// Wm.CopyTo(Wc);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_38 = __this->___Wm_7;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_39 = __this->___Wc_8;
		NullCheck(L_38);
		Matrix_1_CopyTo_mAF5B54FA1EBC56F6B5457C227E015ED05A7035AC(L_38, L_39, Matrix_1_CopyTo_mAF5B54FA1EBC56F6B5457C227E015ED05A7035AC_RuntimeMethod_var);
		// Wc[0, 0] = Wm[0, 0] + 1 - alpha * alpha + beta;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_40 = __this->___Wc_8;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_41 = __this->___Wm_7;
		NullCheck(L_41);
		double L_42;
		L_42 = Matrix_1_get_Item_m9AC37D09D678515B98CFC7C5A3BBECAC3067D9DE_inline(L_41, 0, 0, Matrix_1_get_Item_m9AC37D09D678515B98CFC7C5A3BBECAC3067D9DE_RuntimeMethod_var);
		double L_43 = __this->___alpha_2;
		double L_44 = __this->___alpha_2;
		double L_45 = __this->___beta_4;
		NullCheck(L_40);
		Matrix_1_set_Item_mC97D847F561C86DD3856B0FA098D2D0529728B67_inline(L_40, 0, 0, ((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(L_42, (1.0))), ((double)il2cpp_codegen_multiply(L_43, L_44)))), L_45)), Matrix_1_set_Item_mC97D847F561C86DD3856B0FA098D2D0529728B67_RuntimeMethod_var);
		// c = Math.Sqrt(c);
		double L_46 = __this->___c_6;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_47;
		L_47 = sqrt(L_46);
		__this->___c_6 = L_47;
		// }
		return;
	}
}
// System.Void UnscentedKalmanFilter.UKF::Update(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UKF_Update_mA354D91BD79F918775504C898BE386BFC58A454D (UKF_tE1B7CA051082C54F4E8512986317A8B34062932A* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___measurements0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatrixBuilder_1_Dense_m8FAC4AF7D0A03A88DC460B3A4967E55D7BBA2DB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatrixBuilder_1_Diagonal_m7704C7B7D5C804EE6D3E8CE0C3D8341EB0156F9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1_Add_m7B118E356BBF5361F68E5DCEC5C7F5B46251C973_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1_Multiply_mD8771B97B2AD595EF945F4CD71E33EC09AD78D07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1_Row_m3D5D460C25A6041F416C610509897578B9099D2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1_SetColumn_mE9C2F6F335285A39921A92DBAF324B7D2A182248_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1_Subtract_m844BCEDE31EFBDD315CE853A8E889DE6CF2D2859_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1_Transpose_m7A760B1D7F8E54788932F964F865D0398171D74A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1_ToArray_m4EEE494FD462F6FD7AE5D156E3480094B1467267_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* V_0 = NULL;
	Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* V_1 = NULL;
	Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* V_2 = NULL;
	Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* V_3 = NULL;
	Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* V_4 = NULL;
	Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* V_5 = NULL;
	Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* V_6 = NULL;
	Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* V_7 = NULL;
	Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* V_8 = NULL;
	Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* V_9 = NULL;
	int32_t V_10 = 0;
	{
		// if (m == 0)
		int32_t L_0 = __this->___m_1;
		if (L_0)
		{
			goto IL_0030;
		}
	}
	{
		// var mNum = measurements.Length;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1 = ___measurements0;
		NullCheck(L_1);
		V_10 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		// if (mNum > 0)
		int32_t L_2 = V_10;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		// m = mNum;
		int32_t L_3 = V_10;
		__this->___m_1 = L_3;
		// if (L == 0) L = mNum;
		int32_t L_4 = __this->___L_0;
		if (L_4)
		{
			goto IL_002a;
		}
	}
	{
		// if (L == 0) L = mNum;
		int32_t L_5 = V_10;
		__this->___L_0 = L_5;
	}

IL_002a:
	{
		// init();
		UKF_init_mFB1D8FFA3F783F006B98D4815BB175893F205C65(__this, NULL);
	}

IL_0030:
	{
		// var z = Matrix.Build.Dense(m, 1, 0);
		il2cpp_codegen_runtime_class_init_inline(Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9_il2cpp_TypeInfo_var);
		MatrixBuilder_1_tB265D6E40F33E9A311724A5F2EDB8C5F71621C2A* L_6 = ((Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9_StaticFields*)il2cpp_codegen_static_fields_for(Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9_il2cpp_TypeInfo_var))->___Build_2;
		int32_t L_7 = __this->___m_1;
		NullCheck(L_6);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_8;
		L_8 = MatrixBuilder_1_Dense_m8FAC4AF7D0A03A88DC460B3A4967E55D7BBA2DB8(L_6, L_7, 1, (0.0), MatrixBuilder_1_Dense_m8FAC4AF7D0A03A88DC460B3A4967E55D7BBA2DB8_RuntimeMethod_var);
		V_0 = L_8;
		// z.SetColumn(0, measurements);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_9 = V_0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_10 = ___measurements0;
		NullCheck(L_9);
		Matrix_1_SetColumn_mE9C2F6F335285A39921A92DBAF324B7D2A182248(L_9, 0, L_10, Matrix_1_SetColumn_mE9C2F6F335285A39921A92DBAF324B7D2A182248_RuntimeMethod_var);
		// Matrix<double> X = GetSigmaPoints(x, P, c);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_11 = __this->___x_9;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_12 = __this->___P_10;
		double L_13 = __this->___c_6;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_14;
		L_14 = UKF_GetSigmaPoints_mA993204F62BF1FACFC44B86AD728D430B9B0A845(__this, L_11, L_12, L_13, NULL);
		V_1 = L_14;
		// Matrix<double>[] ut_f_matrices = UnscentedTransform(X, Wm, Wc, L, Q);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_15 = V_1;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_16 = __this->___Wm_7;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_17 = __this->___Wc_8;
		int32_t L_18 = __this->___L_0;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_19 = __this->___Q_13;
		Matrix_1U5BU5D_tEB5BF32A4424DABA97DC27B01601E40DF7500932* L_20;
		L_20 = UKF_UnscentedTransform_mE19688643ACCA0EE3CCF39D3D7758CA1B6F929FA(__this, L_15, L_16, L_17, L_18, L_19, NULL);
		// Matrix<double> x1 = ut_f_matrices[0];
		Matrix_1U5BU5D_tEB5BF32A4424DABA97DC27B01601E40DF7500932* L_21 = L_20;
		NullCheck(L_21);
		int32_t L_22 = 0;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_2 = L_23;
		// Matrix<double> X1 = ut_f_matrices[1];
		Matrix_1U5BU5D_tEB5BF32A4424DABA97DC27B01601E40DF7500932* L_24 = L_21;
		NullCheck(L_24);
		int32_t L_25 = 1;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_3 = L_26;
		// Matrix<double> P1 = ut_f_matrices[2];
		Matrix_1U5BU5D_tEB5BF32A4424DABA97DC27B01601E40DF7500932* L_27 = L_24;
		NullCheck(L_27);
		int32_t L_28 = 2;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_4 = L_29;
		// Matrix<double> X2 = ut_f_matrices[3];
		NullCheck(L_27);
		int32_t L_30 = 3;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_31 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		// Matrix<double>[] ut_h_matrices = UnscentedTransform(X1, Wm, Wc, m, R);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_32 = V_3;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_33 = __this->___Wm_7;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_34 = __this->___Wc_8;
		int32_t L_35 = __this->___m_1;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_36 = __this->___R_14;
		Matrix_1U5BU5D_tEB5BF32A4424DABA97DC27B01601E40DF7500932* L_37;
		L_37 = UKF_UnscentedTransform_mE19688643ACCA0EE3CCF39D3D7758CA1B6F929FA(__this, L_32, L_33, L_34, L_35, L_36, NULL);
		// Matrix<double> z1 = ut_h_matrices[0];
		Matrix_1U5BU5D_tEB5BF32A4424DABA97DC27B01601E40DF7500932* L_38 = L_37;
		NullCheck(L_38);
		int32_t L_39 = 0;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_5 = L_40;
		// Matrix<double> Z1 = ut_h_matrices[1];
		Matrix_1U5BU5D_tEB5BF32A4424DABA97DC27B01601E40DF7500932* L_41 = L_38;
		NullCheck(L_41);
		int32_t L_42 = 1;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		// Matrix<double> P2 = ut_h_matrices[2];
		Matrix_1U5BU5D_tEB5BF32A4424DABA97DC27B01601E40DF7500932* L_44 = L_41;
		NullCheck(L_44);
		int32_t L_45 = 2;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_6 = L_46;
		// Matrix<double> Z2 = ut_h_matrices[3];
		NullCheck(L_44);
		int32_t L_47 = 3;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_48 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		V_7 = L_48;
		// Matrix<double> P12 = (X2.Multiply(Matrix.Build.Diagonal(Wc.Row(0).ToArray()))).Multiply(Z2.Transpose());
		MatrixBuilder_1_tB265D6E40F33E9A311724A5F2EDB8C5F71621C2A* L_49 = ((Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9_StaticFields*)il2cpp_codegen_static_fields_for(Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9_il2cpp_TypeInfo_var))->___Build_2;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_50 = __this->___Wc_8;
		NullCheck(L_50);
		Vector_1_tF1970E55547CCC30E535F13A9D4129F783470D30* L_51;
		L_51 = Matrix_1_Row_m3D5D460C25A6041F416C610509897578B9099D2F(L_50, 0, Matrix_1_Row_m3D5D460C25A6041F416C610509897578B9099D2F_RuntimeMethod_var);
		NullCheck(L_51);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_52;
		L_52 = Vector_1_ToArray_m4EEE494FD462F6FD7AE5D156E3480094B1467267(L_51, Vector_1_ToArray_m4EEE494FD462F6FD7AE5D156E3480094B1467267_RuntimeMethod_var);
		NullCheck(L_49);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_53;
		L_53 = MatrixBuilder_1_Diagonal_m7704C7B7D5C804EE6D3E8CE0C3D8341EB0156F9A(L_49, L_52, MatrixBuilder_1_Diagonal_m7704C7B7D5C804EE6D3E8CE0C3D8341EB0156F9A_RuntimeMethod_var);
		NullCheck(L_31);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_54;
		L_54 = Matrix_1_Multiply_mD8771B97B2AD595EF945F4CD71E33EC09AD78D07(L_31, L_53, Matrix_1_Multiply_mD8771B97B2AD595EF945F4CD71E33EC09AD78D07_RuntimeMethod_var);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_55 = V_7;
		NullCheck(L_55);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_56;
		L_56 = Matrix_1_Transpose_m7A760B1D7F8E54788932F964F865D0398171D74A(L_55, Matrix_1_Transpose_m7A760B1D7F8E54788932F964F865D0398171D74A_RuntimeMethod_var);
		NullCheck(L_54);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_57;
		L_57 = Matrix_1_Multiply_mD8771B97B2AD595EF945F4CD71E33EC09AD78D07(L_54, L_56, Matrix_1_Multiply_mD8771B97B2AD595EF945F4CD71E33EC09AD78D07_RuntimeMethod_var);
		V_8 = L_57;
		// Matrix<double> K = P12.Multiply(P2.Inverse());
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_58 = V_8;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_59 = V_6;
		NullCheck(L_59);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_60;
		L_60 = VirtualFuncInvoker0< Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* >::Invoke(67 /* MathNet.Numerics.LinearAlgebra.Matrix`1<T> MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>::Inverse() */, L_59);
		NullCheck(L_58);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_61;
		L_61 = Matrix_1_Multiply_mD8771B97B2AD595EF945F4CD71E33EC09AD78D07(L_58, L_60, Matrix_1_Multiply_mD8771B97B2AD595EF945F4CD71E33EC09AD78D07_RuntimeMethod_var);
		V_9 = L_61;
		// x = x1.Add(K.Multiply(z.Subtract(z1)));
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_62 = V_2;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_63 = V_9;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_64 = V_0;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_65 = V_5;
		NullCheck(L_64);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_66;
		L_66 = Matrix_1_Subtract_m844BCEDE31EFBDD315CE853A8E889DE6CF2D2859(L_64, L_65, Matrix_1_Subtract_m844BCEDE31EFBDD315CE853A8E889DE6CF2D2859_RuntimeMethod_var);
		NullCheck(L_63);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_67;
		L_67 = Matrix_1_Multiply_mD8771B97B2AD595EF945F4CD71E33EC09AD78D07(L_63, L_66, Matrix_1_Multiply_mD8771B97B2AD595EF945F4CD71E33EC09AD78D07_RuntimeMethod_var);
		NullCheck(L_62);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_68;
		L_68 = Matrix_1_Add_m7B118E356BBF5361F68E5DCEC5C7F5B46251C973(L_62, L_67, Matrix_1_Add_m7B118E356BBF5361F68E5DCEC5C7F5B46251C973_RuntimeMethod_var);
		__this->___x_9 = L_68;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___x_9), (void*)L_68);
		// P = P1.Subtract(K.Multiply(P12.Transpose()));
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_69 = V_4;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_70 = V_9;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_71 = V_8;
		NullCheck(L_71);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_72;
		L_72 = Matrix_1_Transpose_m7A760B1D7F8E54788932F964F865D0398171D74A(L_71, Matrix_1_Transpose_m7A760B1D7F8E54788932F964F865D0398171D74A_RuntimeMethod_var);
		NullCheck(L_70);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_73;
		L_73 = Matrix_1_Multiply_mD8771B97B2AD595EF945F4CD71E33EC09AD78D07(L_70, L_72, Matrix_1_Multiply_mD8771B97B2AD595EF945F4CD71E33EC09AD78D07_RuntimeMethod_var);
		NullCheck(L_69);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_74;
		L_74 = Matrix_1_Subtract_m844BCEDE31EFBDD315CE853A8E889DE6CF2D2859(L_69, L_73, Matrix_1_Subtract_m844BCEDE31EFBDD315CE853A8E889DE6CF2D2859_RuntimeMethod_var);
		__this->___P_10 = L_74;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___P_10), (void*)L_74);
		// }
		return;
	}
}
// System.Double[] UnscentedKalmanFilter.UKF::getState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* UKF_getState_mF7AC3CA0AB1357706F27633BE3AAF4E03F8061D6 (UKF_tE1B7CA051082C54F4E8512986317A8B34062932A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1_ToColumnArrays_m36416AB5E61BDFD15C61D67593623CD11638DBDF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return x.ToColumnArrays()[0];
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_0 = __this->___x_9;
		NullCheck(L_0);
		DoubleU5BU5DU5BU5D_t9D0B504F1F6C6D8C3DC912FFA38783B9CF0FC076* L_1;
		L_1 = Matrix_1_ToColumnArrays_m36416AB5E61BDFD15C61D67593623CD11638DBDF(L_0, Matrix_1_ToColumnArrays_m36416AB5E61BDFD15C61D67593623CD11638DBDF_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_2 = 0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// System.Double[,] UnscentedKalmanFilter.UKF::getCovariance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* UKF_getCovariance_m169ACDA8B74AC1DFAAD091E77B8398FBEF54B6CE (UKF_tE1B7CA051082C54F4E8512986317A8B34062932A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1_ToArray_m0F3DB5D9135BA3556C288F91992B1B0C390AAF72_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return P.ToArray();
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_0 = __this->___P_10;
		NullCheck(L_0);
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_1;
		L_1 = Matrix_1_ToArray_m0F3DB5D9135BA3556C288F91992B1B0C390AAF72(L_0, Matrix_1_ToArray_m0F3DB5D9135BA3556C288F91992B1B0C390AAF72_RuntimeMethod_var);
		return L_1;
	}
}
// MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>[] UnscentedKalmanFilter.UKF::UnscentedTransform(MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>,MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>,MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>,System.Int32,MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_1U5BU5D_tEB5BF32A4424DABA97DC27B01601E40DF7500932* UKF_UnscentedTransform_mE19688643ACCA0EE3CCF39D3D7758CA1B6F929FA (UKF_tE1B7CA051082C54F4E8512986317A8B34062932A* __this, Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* ___X0, Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* ___Wm1, Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* ___Wc2, int32_t ___n3, Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* ___R4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatrixBuilder_1_Dense_m8FAC4AF7D0A03A88DC460B3A4967E55D7BBA2DB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatrixBuilder_1_Diagonal_m7704C7B7D5C804EE6D3E8CE0C3D8341EB0156F9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1U5BU5D_tEB5BF32A4424DABA97DC27B01601E40DF7500932_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1_Add_m7B118E356BBF5361F68E5DCEC5C7F5B46251C973_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1_Multiply_m2C0D614F20ECBB307505AD1CDC6C2DCCB6DC806C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1_Multiply_mD8771B97B2AD595EF945F4CD71E33EC09AD78D07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1_Row_m3D5D460C25A6041F416C610509897578B9099D2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1_SetSubMatrix_m38EEF6D1CC313F9C27FA420926BBAA7137C460D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1_Subtract_m844BCEDE31EFBDD315CE853A8E889DE6CF2D2859_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1_Transpose_m7A760B1D7F8E54788932F964F865D0398171D74A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1_get_ColumnCount_mA9469577A4E8459338A621B987E653D241A6883B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1_get_Item_m9AC37D09D678515B98CFC7C5A3BBECAC3067D9DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1_get_RowCount_m9B54DCE02A3829F5EBD4D5D7ACF2615FCBA2A7E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1_ToArray_m4EEE494FD462F6FD7AE5D156E3480094B1467267_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* V_1 = NULL;
	Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* V_2 = NULL;
	Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* V_3 = NULL;
	Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* V_4 = NULL;
	Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* V_5 = NULL;
	int32_t V_6 = 0;
	{
		// int L = X.ColumnCount;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_0 = ___X0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Matrix_1_get_ColumnCount_mA9469577A4E8459338A621B987E653D241A6883B_inline(L_0, Matrix_1_get_ColumnCount_mA9469577A4E8459338A621B987E653D241A6883B_RuntimeMethod_var);
		V_0 = L_1;
		// Matrix<double> y = Matrix.Build.Dense(n, 1, 0);
		il2cpp_codegen_runtime_class_init_inline(Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9_il2cpp_TypeInfo_var);
		MatrixBuilder_1_tB265D6E40F33E9A311724A5F2EDB8C5F71621C2A* L_2 = ((Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9_StaticFields*)il2cpp_codegen_static_fields_for(Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9_il2cpp_TypeInfo_var))->___Build_2;
		int32_t L_3 = ___n3;
		NullCheck(L_2);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_4;
		L_4 = MatrixBuilder_1_Dense_m8FAC4AF7D0A03A88DC460B3A4967E55D7BBA2DB8(L_2, L_3, 1, (0.0), MatrixBuilder_1_Dense_m8FAC4AF7D0A03A88DC460B3A4967E55D7BBA2DB8_RuntimeMethod_var);
		V_1 = L_4;
		// Matrix<double> Y = Matrix.Build.Dense(n, L, 0);
		MatrixBuilder_1_tB265D6E40F33E9A311724A5F2EDB8C5F71621C2A* L_5 = ((Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9_StaticFields*)il2cpp_codegen_static_fields_for(Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9_il2cpp_TypeInfo_var))->___Build_2;
		int32_t L_6 = ___n3;
		int32_t L_7 = V_0;
		NullCheck(L_5);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_8;
		L_8 = MatrixBuilder_1_Dense_m8FAC4AF7D0A03A88DC460B3A4967E55D7BBA2DB8(L_5, L_6, L_7, (0.0), MatrixBuilder_1_Dense_m8FAC4AF7D0A03A88DC460B3A4967E55D7BBA2DB8_RuntimeMethod_var);
		V_2 = L_8;
		// for (int k = 0; k < L; k++)
		V_6 = 0;
		goto IL_0087;
	}

IL_003a:
	{
		// row_in_X = X.SubMatrix(0, X.RowCount, k, 1);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_9 = ___X0;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_10 = ___X0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Matrix_1_get_RowCount_m9B54DCE02A3829F5EBD4D5D7ACF2615FCBA2A7E2_inline(L_10, Matrix_1_get_RowCount_m9B54DCE02A3829F5EBD4D5D7ACF2615FCBA2A7E2_RuntimeMethod_var);
		int32_t L_12 = V_6;
		NullCheck(L_9);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_13;
		L_13 = VirtualFuncInvoker4< Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9*, int32_t, int32_t, int32_t, int32_t >::Invoke(88 /* MathNet.Numerics.LinearAlgebra.Matrix`1<T> MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>::SubMatrix(System.Int32,System.Int32,System.Int32,System.Int32) */, L_9, 0, L_11, L_12, 1);
		V_3 = L_13;
		// Y.SetSubMatrix(0, Y.RowCount, k, 1, row_in_X);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_14 = V_2;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = Matrix_1_get_RowCount_m9B54DCE02A3829F5EBD4D5D7ACF2615FCBA2A7E2_inline(L_15, Matrix_1_get_RowCount_m9B54DCE02A3829F5EBD4D5D7ACF2615FCBA2A7E2_RuntimeMethod_var);
		int32_t L_17 = V_6;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_18 = V_3;
		NullCheck(L_14);
		Matrix_1_SetSubMatrix_m38EEF6D1CC313F9C27FA420926BBAA7137C460D6(L_14, 0, L_16, L_17, 1, L_18, Matrix_1_SetSubMatrix_m38EEF6D1CC313F9C27FA420926BBAA7137C460D6_RuntimeMethod_var);
		// y = y.Add(Y.SubMatrix(0, Y.RowCount, k, 1).Multiply(Wm[0,k]));
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_19 = V_1;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_20 = V_2;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_21 = V_2;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = Matrix_1_get_RowCount_m9B54DCE02A3829F5EBD4D5D7ACF2615FCBA2A7E2_inline(L_21, Matrix_1_get_RowCount_m9B54DCE02A3829F5EBD4D5D7ACF2615FCBA2A7E2_RuntimeMethod_var);
		int32_t L_23 = V_6;
		NullCheck(L_20);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_24;
		L_24 = VirtualFuncInvoker4< Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9*, int32_t, int32_t, int32_t, int32_t >::Invoke(88 /* MathNet.Numerics.LinearAlgebra.Matrix`1<T> MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>::SubMatrix(System.Int32,System.Int32,System.Int32,System.Int32) */, L_20, 0, L_22, L_23, 1);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_25 = ___Wm1;
		int32_t L_26 = V_6;
		NullCheck(L_25);
		double L_27;
		L_27 = Matrix_1_get_Item_m9AC37D09D678515B98CFC7C5A3BBECAC3067D9DE_inline(L_25, 0, L_26, Matrix_1_get_Item_m9AC37D09D678515B98CFC7C5A3BBECAC3067D9DE_RuntimeMethod_var);
		NullCheck(L_24);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_28;
		L_28 = Matrix_1_Multiply_m2C0D614F20ECBB307505AD1CDC6C2DCCB6DC806C(L_24, L_27, Matrix_1_Multiply_m2C0D614F20ECBB307505AD1CDC6C2DCCB6DC806C_RuntimeMethod_var);
		NullCheck(L_19);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_29;
		L_29 = Matrix_1_Add_m7B118E356BBF5361F68E5DCEC5C7F5B46251C973(L_19, L_28, Matrix_1_Add_m7B118E356BBF5361F68E5DCEC5C7F5B46251C973_RuntimeMethod_var);
		V_1 = L_29;
		// for (int k = 0; k < L; k++)
		int32_t L_30 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0087:
	{
		// for (int k = 0; k < L; k++)
		int32_t L_31 = V_6;
		int32_t L_32 = V_0;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_003a;
		}
	}
	{
		// Matrix<double> Y1 = Y.Subtract(y.Multiply(Matrix.Build.Dense(1,L,1)));
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_33 = V_2;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_34 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9_il2cpp_TypeInfo_var);
		MatrixBuilder_1_tB265D6E40F33E9A311724A5F2EDB8C5F71621C2A* L_35 = ((Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9_StaticFields*)il2cpp_codegen_static_fields_for(Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9_il2cpp_TypeInfo_var))->___Build_2;
		int32_t L_36 = V_0;
		NullCheck(L_35);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_37;
		L_37 = MatrixBuilder_1_Dense_m8FAC4AF7D0A03A88DC460B3A4967E55D7BBA2DB8(L_35, 1, L_36, (1.0), MatrixBuilder_1_Dense_m8FAC4AF7D0A03A88DC460B3A4967E55D7BBA2DB8_RuntimeMethod_var);
		NullCheck(L_34);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_38;
		L_38 = Matrix_1_Multiply_mD8771B97B2AD595EF945F4CD71E33EC09AD78D07(L_34, L_37, Matrix_1_Multiply_mD8771B97B2AD595EF945F4CD71E33EC09AD78D07_RuntimeMethod_var);
		NullCheck(L_33);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_39;
		L_39 = Matrix_1_Subtract_m844BCEDE31EFBDD315CE853A8E889DE6CF2D2859(L_33, L_38, Matrix_1_Subtract_m844BCEDE31EFBDD315CE853A8E889DE6CF2D2859_RuntimeMethod_var);
		V_4 = L_39;
		// Matrix<double> P = Y1.Multiply(Matrix.Build.Diagonal(Wc.Row(0).ToArray()));
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_40 = V_4;
		MatrixBuilder_1_tB265D6E40F33E9A311724A5F2EDB8C5F71621C2A* L_41 = ((Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9_StaticFields*)il2cpp_codegen_static_fields_for(Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9_il2cpp_TypeInfo_var))->___Build_2;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_42 = ___Wc2;
		NullCheck(L_42);
		Vector_1_tF1970E55547CCC30E535F13A9D4129F783470D30* L_43;
		L_43 = Matrix_1_Row_m3D5D460C25A6041F416C610509897578B9099D2F(L_42, 0, Matrix_1_Row_m3D5D460C25A6041F416C610509897578B9099D2F_RuntimeMethod_var);
		NullCheck(L_43);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_44;
		L_44 = Vector_1_ToArray_m4EEE494FD462F6FD7AE5D156E3480094B1467267(L_43, Vector_1_ToArray_m4EEE494FD462F6FD7AE5D156E3480094B1467267_RuntimeMethod_var);
		NullCheck(L_41);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_45;
		L_45 = MatrixBuilder_1_Diagonal_m7704C7B7D5C804EE6D3E8CE0C3D8341EB0156F9A(L_41, L_44, MatrixBuilder_1_Diagonal_m7704C7B7D5C804EE6D3E8CE0C3D8341EB0156F9A_RuntimeMethod_var);
		NullCheck(L_40);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_46;
		L_46 = Matrix_1_Multiply_mD8771B97B2AD595EF945F4CD71E33EC09AD78D07(L_40, L_45, Matrix_1_Multiply_mD8771B97B2AD595EF945F4CD71E33EC09AD78D07_RuntimeMethod_var);
		V_5 = L_46;
		// P = P.Multiply(Y1.Transpose());
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_47 = V_5;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_48 = V_4;
		NullCheck(L_48);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_49;
		L_49 = Matrix_1_Transpose_m7A760B1D7F8E54788932F964F865D0398171D74A(L_48, Matrix_1_Transpose_m7A760B1D7F8E54788932F964F865D0398171D74A_RuntimeMethod_var);
		NullCheck(L_47);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_50;
		L_50 = Matrix_1_Multiply_mD8771B97B2AD595EF945F4CD71E33EC09AD78D07(L_47, L_49, Matrix_1_Multiply_mD8771B97B2AD595EF945F4CD71E33EC09AD78D07_RuntimeMethod_var);
		V_5 = L_50;
		// P = P.Add(R);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_51 = V_5;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_52 = ___R4;
		NullCheck(L_51);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_53;
		L_53 = Matrix_1_Add_m7B118E356BBF5361F68E5DCEC5C7F5B46251C973(L_51, L_52, Matrix_1_Add_m7B118E356BBF5361F68E5DCEC5C7F5B46251C973_RuntimeMethod_var);
		V_5 = L_53;
		// Matrix<double>[] output = { y, Y, P, Y1 };
		Matrix_1U5BU5D_tEB5BF32A4424DABA97DC27B01601E40DF7500932* L_54 = (Matrix_1U5BU5D_tEB5BF32A4424DABA97DC27B01601E40DF7500932*)(Matrix_1U5BU5D_tEB5BF32A4424DABA97DC27B01601E40DF7500932*)SZArrayNew(Matrix_1U5BU5D_tEB5BF32A4424DABA97DC27B01601E40DF7500932_il2cpp_TypeInfo_var, (uint32_t)4);
		Matrix_1U5BU5D_tEB5BF32A4424DABA97DC27B01601E40DF7500932* L_55 = L_54;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_56 = V_1;
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, L_56);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(0), (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9*)L_56);
		Matrix_1U5BU5D_tEB5BF32A4424DABA97DC27B01601E40DF7500932* L_57 = L_55;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_58 = V_2;
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, L_58);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(1), (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9*)L_58);
		Matrix_1U5BU5D_tEB5BF32A4424DABA97DC27B01601E40DF7500932* L_59 = L_57;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_60 = V_5;
		NullCheck(L_59);
		ArrayElementTypeCheck (L_59, L_60);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(2), (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9*)L_60);
		Matrix_1U5BU5D_tEB5BF32A4424DABA97DC27B01601E40DF7500932* L_61 = L_59;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_62 = V_4;
		NullCheck(L_61);
		ArrayElementTypeCheck (L_61, L_62);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(3), (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9*)L_62);
		// return output;
		return L_61;
	}
}
// MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double> UnscentedKalmanFilter.UKF::GetSigmaPoints(MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>,MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* UKF_GetSigmaPoints_mA993204F62BF1FACFC44B86AD728D430B9B0A845 (UKF_tE1B7CA051082C54F4E8512986317A8B34062932A* __this, Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* ___x0, Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* ___P1, double ___c2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cholesky_1_get_Factor_m0DAB4879B1C18A503BC02DB1055250A8611C5CA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatrixBuilder_1_Dense_m5C6670AD03341F052CEA2FC369B0523404CAB25E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatrixBuilder_1_Dense_m8FAC4AF7D0A03A88DC460B3A4967E55D7BBA2DB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1_Add_m7B118E356BBF5361F68E5DCEC5C7F5B46251C973_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1_Multiply_m2C0D614F20ECBB307505AD1CDC6C2DCCB6DC806C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1_SetSubMatrix_m38EEF6D1CC313F9C27FA420926BBAA7137C460D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1_Subtract_m844BCEDE31EFBDD315CE853A8E889DE6CF2D2859_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1_Transpose_m7A760B1D7F8E54788932F964F865D0398171D74A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1_get_RowCount_m9B54DCE02A3829F5EBD4D5D7ACF2615FCBA2A7E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* V_0 = NULL;
	int32_t V_1 = 0;
	Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* V_2 = NULL;
	Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* V_3 = NULL;
	Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* V_4 = NULL;
	int32_t V_5 = 0;
	{
		// Matrix<double> A = P.Cholesky().Factor;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_0 = ___P1;
		NullCheck(L_0);
		Cholesky_1_t1FD2C6EAE804ACF062E3034A45A8D1004519525C* L_1;
		L_1 = VirtualFuncInvoker0< Cholesky_1_t1FD2C6EAE804ACF062E3034A45A8D1004519525C* >::Invoke(102 /* MathNet.Numerics.LinearAlgebra.Factorization.Cholesky`1<T> MathNet.Numerics.LinearAlgebra.Matrix`1<System.Double>::Cholesky() */, L_0);
		NullCheck(L_1);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_2;
		L_2 = Cholesky_1_get_Factor_m0DAB4879B1C18A503BC02DB1055250A8611C5CA7_inline(L_1, Cholesky_1_get_Factor_m0DAB4879B1C18A503BC02DB1055250A8611C5CA7_RuntimeMethod_var);
		V_0 = L_2;
		// A = A.Multiply(c);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_3 = V_0;
		double L_4 = ___c2;
		NullCheck(L_3);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_5;
		L_5 = Matrix_1_Multiply_m2C0D614F20ECBB307505AD1CDC6C2DCCB6DC806C(L_3, L_4, Matrix_1_Multiply_m2C0D614F20ECBB307505AD1CDC6C2DCCB6DC806C_RuntimeMethod_var);
		V_0 = L_5;
		// A = A.Transpose();
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_6 = V_0;
		NullCheck(L_6);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_7;
		L_7 = Matrix_1_Transpose_m7A760B1D7F8E54788932F964F865D0398171D74A(L_6, Matrix_1_Transpose_m7A760B1D7F8E54788932F964F865D0398171D74A_RuntimeMethod_var);
		V_0 = L_7;
		// int n = x.RowCount;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_8 = ___x0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Matrix_1_get_RowCount_m9B54DCE02A3829F5EBD4D5D7ACF2615FCBA2A7E2_inline(L_8, Matrix_1_get_RowCount_m9B54DCE02A3829F5EBD4D5D7ACF2615FCBA2A7E2_RuntimeMethod_var);
		V_1 = L_9;
		// Matrix<double> Y = Matrix.Build.Dense(n, n, 1);
		il2cpp_codegen_runtime_class_init_inline(Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9_il2cpp_TypeInfo_var);
		MatrixBuilder_1_tB265D6E40F33E9A311724A5F2EDB8C5F71621C2A* L_10 = ((Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9_StaticFields*)il2cpp_codegen_static_fields_for(Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9_il2cpp_TypeInfo_var))->___Build_2;
		int32_t L_11 = V_1;
		int32_t L_12 = V_1;
		NullCheck(L_10);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_13;
		L_13 = MatrixBuilder_1_Dense_m8FAC4AF7D0A03A88DC460B3A4967E55D7BBA2DB8(L_10, L_11, L_12, (1.0), MatrixBuilder_1_Dense_m8FAC4AF7D0A03A88DC460B3A4967E55D7BBA2DB8_RuntimeMethod_var);
		V_2 = L_13;
		// for (int j=0; j<n; j++)
		V_5 = 0;
		goto IL_004f;
	}

IL_003d:
	{
		// Y.SetSubMatrix(0, n, j, 1, x);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_14 = V_2;
		int32_t L_15 = V_1;
		int32_t L_16 = V_5;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_17 = ___x0;
		NullCheck(L_14);
		Matrix_1_SetSubMatrix_m38EEF6D1CC313F9C27FA420926BBAA7137C460D6(L_14, 0, L_15, L_16, 1, L_17, Matrix_1_SetSubMatrix_m38EEF6D1CC313F9C27FA420926BBAA7137C460D6_RuntimeMethod_var);
		// for (int j=0; j<n; j++)
		int32_t L_18 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_004f:
	{
		// for (int j=0; j<n; j++)
		int32_t L_19 = V_5;
		int32_t L_20 = V_1;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_003d;
		}
	}
	{
		// Matrix<double> X = Matrix.Build.Dense(n,(2*n+1));
		il2cpp_codegen_runtime_class_init_inline(Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9_il2cpp_TypeInfo_var);
		MatrixBuilder_1_tB265D6E40F33E9A311724A5F2EDB8C5F71621C2A* L_21 = ((Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9_StaticFields*)il2cpp_codegen_static_fields_for(Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9_il2cpp_TypeInfo_var))->___Build_2;
		int32_t L_22 = V_1;
		int32_t L_23 = V_1;
		NullCheck(L_21);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_24;
		L_24 = MatrixBuilder_1_Dense_m5C6670AD03341F052CEA2FC369B0523404CAB25E(L_21, L_22, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_23)), 1)), MatrixBuilder_1_Dense_m5C6670AD03341F052CEA2FC369B0523404CAB25E_RuntimeMethod_var);
		// X.SetSubMatrix(0, n, 0, 1, x);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_25 = L_24;
		int32_t L_26 = V_1;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_27 = ___x0;
		NullCheck(L_25);
		Matrix_1_SetSubMatrix_m38EEF6D1CC313F9C27FA420926BBAA7137C460D6(L_25, 0, L_26, 0, 1, L_27, Matrix_1_SetSubMatrix_m38EEF6D1CC313F9C27FA420926BBAA7137C460D6_RuntimeMethod_var);
		// Matrix<double> Y_plus_A = Y.Add(A);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_28 = V_2;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_29 = V_0;
		NullCheck(L_28);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_30;
		L_30 = Matrix_1_Add_m7B118E356BBF5361F68E5DCEC5C7F5B46251C973(L_28, L_29, Matrix_1_Add_m7B118E356BBF5361F68E5DCEC5C7F5B46251C973_RuntimeMethod_var);
		V_3 = L_30;
		// X.SetSubMatrix(0, n, 1, n, Y_plus_A);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_31 = L_25;
		int32_t L_32 = V_1;
		int32_t L_33 = V_1;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_34 = V_3;
		NullCheck(L_31);
		Matrix_1_SetSubMatrix_m38EEF6D1CC313F9C27FA420926BBAA7137C460D6(L_31, 0, L_32, 1, L_33, L_34, Matrix_1_SetSubMatrix_m38EEF6D1CC313F9C27FA420926BBAA7137C460D6_RuntimeMethod_var);
		// Matrix<double> Y_minus_A = Y.Subtract(A);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_35 = V_2;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_36 = V_0;
		NullCheck(L_35);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_37;
		L_37 = Matrix_1_Subtract_m844BCEDE31EFBDD315CE853A8E889DE6CF2D2859(L_35, L_36, Matrix_1_Subtract_m844BCEDE31EFBDD315CE853A8E889DE6CF2D2859_RuntimeMethod_var);
		V_4 = L_37;
		// X.SetSubMatrix(0, n, n+1, n, Y_minus_A);
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_38 = L_31;
		int32_t L_39 = V_1;
		int32_t L_40 = V_1;
		int32_t L_41 = V_1;
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_42 = V_4;
		NullCheck(L_38);
		Matrix_1_SetSubMatrix_m38EEF6D1CC313F9C27FA420926BBAA7137C460D6(L_38, 0, L_39, ((int32_t)il2cpp_codegen_add(L_40, 1)), L_41, L_42, Matrix_1_SetSubMatrix_m38EEF6D1CC313F9C27FA420926BBAA7137C460D6_RuntimeMethod_var);
		// return X;
		return L_38;
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
// System.Void Assets.Scripts.CalibrationData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CalibrationData__ctor_mC93E790F3CB97A6CE888A104390555BC05D4E4F4 (CalibrationData_t0CEDFF596C17FEE4BD89AAD8E7B40E7DD0A3F22A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Boolean Assets.Scripts.DataSaver::deleteData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataSaver_deleteData_mDAC8FAD4BBFB4A18706AD4277441585E1995E7EA (String_t* ___dataFileName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3296D03265769C74AD0DBF1338AEBE79680388AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D977376715BE7FC944C7838B1A40D855E0A6FE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D2D60FB81DB361B60B9512761B3ED9FF250BB96);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0B06C7B30D1046A092C0DFCBB20E992485B05F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// bool success = false;
		V_0 = (bool)0;
		// string tempPath = Path.Combine(Application.persistentDataPath, "data");
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_0, _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469, NULL);
		V_1 = L_1;
		// tempPath = Path.Combine(tempPath, dataFileName + ".txt");
		String_t* L_2 = V_1;
		String_t* L_3 = ___dataFileName0;
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_3, _stringLiteral6D2D60FB81DB361B60B9512761B3ED9FF250BB96, NULL);
		String_t* L_5;
		L_5 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_2, L_4, NULL);
		V_1 = L_5;
		// if (!Directory.Exists(Path.GetDirectoryName(tempPath)))
		String_t* L_6 = V_1;
		String_t* L_7;
		L_7 = Path_GetDirectoryName_m428BADBE493A3927B51A13DEF658929B430516F6(L_6, NULL);
		bool L_8;
		L_8 = Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7(L_7, NULL);
		if (L_8)
		{
			goto IL_003d;
		}
	}
	{
		// Debug.LogWarning("Directory does not exist");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral5D977376715BE7FC944C7838B1A40D855E0A6FE6, NULL);
		// return false;
		return (bool)0;
	}

IL_003d:
	{
		// if (!File.Exists(tempPath))
		String_t* L_9 = V_1;
		bool L_10;
		L_10 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_9, NULL);
		if (L_10)
		{
			goto IL_0051;
		}
	}
	{
		// Debug.Log("File does not exist");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralA0B06C7B30D1046A092C0DFCBB20E992485B05F1, NULL);
		// return false;
		return (bool)0;
	}

IL_0051:
	{
	}
	try
	{// begin try (depth: 1)
		// File.Delete(tempPath);
		String_t* L_11 = V_1;
		File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386(L_11, NULL);
		// Debug.Log("Data deleted from: " + tempPath.Replace("/", "\\"));
		String_t* L_12 = V_1;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_12, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40, NULL);
		String_t* L_14;
		L_14 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3296D03265769C74AD0DBF1338AEBE79680388AA, L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_14, NULL);
		// success = true;
		V_0 = (bool)1;
		// }
		goto IL_0093;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_007b;
		}
		throw e;
	}

CATCH_007b:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// Debug.LogWarning("Failed To Delete Data: " + e.Message);
		Exception_t* L_15 = V_2;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_15);
		String_t* L_17;
		L_17 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD473B4E90A57D9F95635FB0438C2CBA39CE564F1)), L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_17, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0093;
	}// end catch (depth: 1)

IL_0093:
	{
		// return success;
		bool L_18 = V_0;
		return L_18;
	}
}
// System.Void Assets.Scripts.DataSaver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSaver__ctor_m785A24A97E8050654704CF0D873647035CDF0192 (DataSaver_t37690A875FF0342BE729D8942D0ED64DCE74E964* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___from0), NULL);
		float L_1;
		L_1 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___to1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((float)il2cpp_codegen_multiply(L_0, L_1))));
		V_0 = ((float)L_2);
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___from0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___to1;
		float L_7;
		L_7 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_5, L_6, NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)(L_7/L_8)), (-1.0f), (1.0f), NULL);
		V_1 = L_9;
		float L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)L_10));
		V_3 = ((float)il2cpp_codegen_multiply(((float)L_11), (57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion_set_eulerAngles_m441C342F21FEFCED9BABED01FA516C97EA424D6E_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) 
{
	{
		// return m_Text;
		String_t* L_0 = __this->___m_Text_60;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_IsOn; }
		bool L_0 = __this->___m_IsOn_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Matrix_1_set_Item_mC97D847F561C86DD3856B0FA098D2D0529728B67_gshared_inline (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* __this, int32_t ___row0, int32_t ___column1, double ___value2, const RuntimeMethod* method) 
{
	{
		MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D* L_0;
		L_0 = ((  MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D* (*) (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 116)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 116));
		int32_t L_1 = ___row0;
		int32_t L_2 = ___column1;
		double L_3 = ___value2;
		NullCheck(L_0);
		((  void (*) (MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*, int32_t, int32_t, double, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 148)))(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 148));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Matrix_1_get_Item_m9AC37D09D678515B98CFC7C5A3BBECAC3067D9DE_gshared_inline (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* __this, int32_t ___row0, int32_t ___column1, const RuntimeMethod* method) 
{
	{
		MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D* L_0;
		L_0 = ((  MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D* (*) (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 116)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 116));
		int32_t L_1 = ___row0;
		int32_t L_2 = ___column1;
		NullCheck(L_0);
		double L_3;
		L_3 = ((  double (*) (MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 147)))(L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 147));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Matrix_1_get_ColumnCount_mA9469577A4E8459338A621B987E653D241A6883B_gshared_inline (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___U3CColumnCountU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Matrix_1_get_RowCount_m9B54DCE02A3829F5EBD4D5D7ACF2615FCBA2A7E2_gshared_inline (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___U3CRowCountU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* Cholesky_1_get_Factor_m0DAB4879B1C18A503BC02DB1055250A8611C5CA7_gshared_inline (Cholesky_1_t1FD2C6EAE804ACF062E3034A45A8D1004519525C* __this, const RuntimeMethod* method) 
{
	{
		Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9* L_0 = (Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9*)__this->___U3CFactorU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
