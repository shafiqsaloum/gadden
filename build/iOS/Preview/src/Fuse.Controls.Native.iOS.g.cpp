// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.iOS.FocusHelpers.h>
#include <Fuse.Controls.Native.iOS.FocusHelpers.PerformBecomeFirstResponder.h>
#include <Fuse.Controls.Native.iOS.INativeFocusListener.h>
#include <Fuse.Controls.Native.iOS.InputDispatch.RootInfo.h>
#include <Fuse.Controls.Native.iOS.iOSDevice.ScreenOrientation.h>
#include <Fuse.Controls.Native.iOS.LeafView.h>
#include <Fuse.Controls.Native.iOS.NativeFocus.h>
#include <Fuse.Controls.Native.iOS.ObjectExtensions.h>
#include <Fuse.Controls.Native.iOS.OSVersion.h>
#include <Fuse.Controls.Native.iOS.PointerCaptureAdapter.h>
#include <Fuse.Controls.Native.iOS.TouchPhase.h>
#include <Fuse.Controls.Native.iOS.UIControlEvent.h>
#include <Fuse.Controls.Native.iOS.UIEventExtensions.h>
#include <Fuse.Controls.Native.iOS.UITouchExtensions.h>
#include <Fuse.Controls.Native.ViewHandle.InputMode.h>
#include <Fuse.Input.CaptureType.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Visual.h>
#include <ObjC.Object.h>
#include <Uno.Action.h>
#include <Uno.Action-2.h>
#include <Uno.ArgumentException.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Int.h>
#include <Uno.String.h>
static uString* STRINGS[5];
static uType* TYPES[6];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/ios/$.uno
// ------------------------------------------------------------------

// internal abstract extern interface INativeFocusListener :147
// {
uInterfaceType* INativeFocusListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.iOS.INativeFocusListener", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/ios/$.uno
// ------------------------------------------------------------------

// public abstract extern class LeafView :1197
// {
static void LeafView_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(LeafView_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(LeafView_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(LeafView_type, interface2));
    type->SetFields(8);
}

LeafView_type* LeafView_typeof()
{
    static uSStrong<LeafView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::View_typeof();
    options.FieldCount = 8;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(LeafView);
    options.TypeSize = sizeof(LeafView_type);
    type = (LeafView_type*)uClassType::New("Fuse.Controls.Native.iOS.LeafView", options);
    type->fp_build_ = LeafView_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::ViewHandle__Dispose_fn;
    return type;
}

// protected LeafView(ObjC.Object handle) :1199
void LeafView__ctor_4_fn(LeafView* __this, ::g::ObjC::Object* handle)
{
    __this->ctor_4(handle);
}

// protected LeafView(ObjC.Object handle) [instance] :1199
void LeafView::ctor_4(::g::ObjC::Object* handle)
{
    ctor_3(handle, true, 0);
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/ios/$.uno
// ------------------------------------------------------------------

// internal static extern class NativeFocus :153
// {
// static NativeFocus() :153
static void NativeFocus__cctor__fn(uType* __type)
{
    NativeFocus::_listeners_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[0/*Uno.Collections.Dictionary<ObjC.Object, Fuse.Controls.Native.iOS.INativeFocusListener>*/]));
}

static void NativeFocus_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::ObjC::Object_typeof(), ::g::Fuse::Controls::Native::iOS::INativeFocusListener_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Controls::Native::iOS::INativeFocusListener_typeof();
    type->SetFields(0,
        ::TYPES[0/*Uno.Collections.Dictionary<ObjC.Object, Fuse.Controls.Native.iOS.INativeFocusListener>*/], (uintptr_t)&::g::Fuse::Controls::Native::iOS::NativeFocus::_listeners_, uFieldFlagsStatic);
}

uClassType* NativeFocus_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.iOS.NativeFocus", options);
    type->fp_build_ = NativeFocus_build;
    type->fp_cctor_ = NativeFocus__cctor__fn;
    return type;
}

// public static void AddListener(ObjC.Object handle, Fuse.Controls.Native.iOS.INativeFocusListener listener) :159
void NativeFocus__AddListener_fn(::g::ObjC::Object* handle, uObject* listener)
{
    NativeFocus::AddListener(handle, listener);
}

// public static void RaiseFocusGained(ObjC.Object handle) :169
void NativeFocus__RaiseFocusGained_fn(::g::ObjC::Object* handle)
{
    NativeFocus::RaiseFocusGained(handle);
}

// public static void RaiseFocusLost(ObjC.Object handle) :177
void NativeFocus__RaiseFocusLost_fn(::g::ObjC::Object* handle)
{
    NativeFocus::RaiseFocusLost(handle);
}

// public static void RemoveListener(ObjC.Object handle) :164
void NativeFocus__RemoveListener_fn(::g::ObjC::Object* handle)
{
    NativeFocus::RemoveListener(handle);
}

uSStrong< ::g::Uno::Collections::Dictionary*> NativeFocus::_listeners_;

// public static void AddListener(ObjC.Object handle, Fuse.Controls.Native.iOS.INativeFocusListener listener) [static] :159
void NativeFocus::AddListener(::g::ObjC::Object* handle, uObject* listener)
{
    uStackFrame __("Fuse.Controls.Native.iOS.NativeFocus", "AddListener(ObjC.Object,Fuse.Controls.Native.iOS.INativeFocusListener)");
    NativeFocus_typeof()->Init();
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(NativeFocus::_listeners()), handle, listener);
}

// public static void RaiseFocusGained(ObjC.Object handle) [static] :169
void NativeFocus::RaiseFocusGained(::g::ObjC::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.iOS.NativeFocus", "RaiseFocusGained(ObjC.Object)");
    NativeFocus_typeof()->Init();
    bool ret1;
    uObject* ret2;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(NativeFocus::_listeners()), handle, &ret1), ret1))
        ::g::Fuse::Controls::Native::iOS::INativeFocusListener::FocusGained(uInterface(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NativeFocus::_listeners()), handle, &ret2), ret2)), ::TYPES[1/*Fuse.Controls.Native.iOS.INativeFocusListener*/]));
}

// public static void RaiseFocusLost(ObjC.Object handle) [static] :177
void NativeFocus::RaiseFocusLost(::g::ObjC::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.iOS.NativeFocus", "RaiseFocusLost(ObjC.Object)");
    NativeFocus_typeof()->Init();
    bool ret3;
    uObject* ret4;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(NativeFocus::_listeners()), handle, &ret3), ret3))
        ::g::Fuse::Controls::Native::iOS::INativeFocusListener::FocusLost(uInterface(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NativeFocus::_listeners()), handle, &ret4), ret4)), ::TYPES[1/*Fuse.Controls.Native.iOS.INativeFocusListener*/]));
}

// public static void RemoveListener(ObjC.Object handle) [static] :164
void NativeFocus::RemoveListener(::g::ObjC::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.iOS.NativeFocus", "RemoveListener(ObjC.Object)");
    NativeFocus_typeof()->Init();
    bool ret5;
    ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(NativeFocus::_listeners()), handle, &ret5);
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/ios/$.uno
// ------------------------------------------------------------------

// public sealed extern class OSVersion :1035
// {
static void OSVersion_build(uType* type)
{
    ::STRINGS[0] = uString::Const(".");
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::OSVersion, Major), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::OSVersion, Minor), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::OSVersion, Patch), 0);
    type->Reflection.SetFields(3,
        new uField("Major", 0),
        new uField("Minor", 1),
        new uField("Patch", 2));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)OSVersion__New1_fn, 0, true, type, 3, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()));
}

uType* OSVersion_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(OSVersion);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.OSVersion", options);
    type->fp_build_ = OSVersion_build;
    type->fp_ToString = (void(*)(uObject*, uString**))OSVersion__ToString_fn;
    return type;
}

// public OSVersion(int major, int minor, int patch) :1040
void OSVersion__ctor__fn(OSVersion* __this, int* major, int* minor, int* patch)
{
    __this->ctor_(*major, *minor, *patch);
}

// public OSVersion New(int major, int minor, int patch) :1040
void OSVersion__New1_fn(int* major, int* minor, int* patch, OSVersion** __retval)
{
    *__retval = OSVersion::New1(*major, *minor, *patch);
}

// public override sealed string ToString() :1046
void OSVersion__ToString_fn(OSVersion* __this, uString** __retval)
{
    uStackFrame __("Fuse.Controls.Native.iOS.OSVersion", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition(uBox<int>(::g::Uno::Int_typeof(), __this->Major), ::STRINGS[0/*"."*/]), uBox<int>(::g::Uno::Int_typeof(), __this->Minor)), ::STRINGS[0/*"."*/]), uBox<int>(::g::Uno::Int_typeof(), __this->Patch)), void();
}

// public OSVersion(int major, int minor, int patch) [instance] :1040
void OSVersion::ctor_(int major, int minor, int patch)
{
    Major = major;
    Minor = minor;
    Patch = patch;
}

// public OSVersion New(int major, int minor, int patch) [static] :1040
OSVersion* OSVersion::New1(int major, int minor, int patch)
{
    OSVersion* obj1 = (OSVersion*)uNew(OSVersion_typeof());
    obj1->ctor_(major, minor, patch);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/ios/$.uno
// ------------------------------------------------------------------

// private sealed class FocusHelpers.PerformBecomeFirstResponder :264
// {
static void FocusHelpers__PerformBecomeFirstResponder_build(uType* type)
{
    type->SetFields(0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::FocusHelpers__PerformBecomeFirstResponder, _target), 0);
}

uType* FocusHelpers__PerformBecomeFirstResponder_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(FocusHelpers__PerformBecomeFirstResponder);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.FocusHelpers.PerformBecomeFirstResponder", options);
    type->fp_build_ = FocusHelpers__PerformBecomeFirstResponder_build;
    return type;
}

// public PerformBecomeFirstResponder(ObjC.Object target) :268
void FocusHelpers__PerformBecomeFirstResponder__ctor__fn(FocusHelpers__PerformBecomeFirstResponder* __this, ::g::ObjC::Object* target)
{
    __this->ctor_(target);
}

// public void BecomeFirstResponder() :273
void FocusHelpers__PerformBecomeFirstResponder__BecomeFirstResponder_fn(FocusHelpers__PerformBecomeFirstResponder* __this)
{
    __this->BecomeFirstResponder();
}

// public PerformBecomeFirstResponder New(ObjC.Object target) :268
void FocusHelpers__PerformBecomeFirstResponder__New1_fn(::g::ObjC::Object* target, FocusHelpers__PerformBecomeFirstResponder** __retval)
{
    *__retval = FocusHelpers__PerformBecomeFirstResponder::New1(target);
}

// public PerformBecomeFirstResponder(ObjC.Object target) [instance] :268
void FocusHelpers__PerformBecomeFirstResponder::ctor_(::g::ObjC::Object* target)
{
    _target = target;
}

// public void BecomeFirstResponder() [instance] :273
void FocusHelpers__PerformBecomeFirstResponder::BecomeFirstResponder()
{
    ::g::Fuse::Controls::Native::iOS::FocusHelpers::BecomeFirstResponder(_target);
}

// public PerformBecomeFirstResponder New(ObjC.Object target) [static] :268
FocusHelpers__PerformBecomeFirstResponder* FocusHelpers__PerformBecomeFirstResponder::New1(::g::ObjC::Object* target)
{
    FocusHelpers__PerformBecomeFirstResponder* obj1 = (FocusHelpers__PerformBecomeFirstResponder*)uNew(FocusHelpers__PerformBecomeFirstResponder_typeof());
    obj1->ctor_(target);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/ios/$.uno
// ------------------------------------------------------------------

// internal sealed extern class PointerCaptureAdapter :1365
// {
static void PointerCaptureAdapter_build(uType* type)
{
    ::STRINGS[1] = uString::Const("PointerCaptureAdapter requires Visual");
    ::STRINGS[2] = uString::Const("visual");
    ::STRINGS[3] = uString::Const("PointerCaptureAdapter requires UIControl");
    ::STRINGS[4] = uString::Const("control");
    ::TYPES[2] = ::g::Uno::Collections::List_typeof()->MakeType(::g::ObjC::Object_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Action2_typeof()->MakeType(::g::ObjC::Object_typeof(), ::g::ObjC::Object_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::IDisposable_typeof();
    ::TYPES[5] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::TYPES[4/*Uno.IDisposable*/], offsetof(PointerCaptureAdapter_type, interface0));
    type->SetFields(0,
        ::TYPES[2/*Uno.Collections.List<ObjC.Object>*/], offsetof(::g::Fuse::Controls::Native::iOS::PointerCaptureAdapter, _activeTouches), 0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::PointerCaptureAdapter, _control), 0,
        ::TYPES[4/*Uno.IDisposable*/], offsetof(::g::Fuse::Controls::Native::iOS::PointerCaptureAdapter, _touchEvents), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::PointerCaptureAdapter, _visual), 0);
}

PointerCaptureAdapter_type* PointerCaptureAdapter_typeof()
{
    static uSStrong<PointerCaptureAdapter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PointerCaptureAdapter);
    options.TypeSize = sizeof(PointerCaptureAdapter_type);
    type = (PointerCaptureAdapter_type*)uClassType::New("Fuse.Controls.Native.iOS.PointerCaptureAdapter", options);
    type->fp_build_ = PointerCaptureAdapter_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))PointerCaptureAdapter__Dispose_fn;
    return type;
}

// public PointerCaptureAdapter(Fuse.Visual visual, ObjC.Object control) :1372
void PointerCaptureAdapter__ctor__fn(PointerCaptureAdapter* __this, ::g::Fuse::Visual* visual, ::g::ObjC::Object* control)
{
    __this->ctor_(visual, control);
}

// public void Dispose() :1417
void PointerCaptureAdapter__Dispose_fn(PointerCaptureAdapter* __this)
{
    __this->Dispose();
}

// private void LostCallback() :1415
void PointerCaptureAdapter__LostCallback_fn(PointerCaptureAdapter* __this)
{
    __this->LostCallback();
}

// public PointerCaptureAdapter New(Fuse.Visual visual, ObjC.Object control) :1372
void PointerCaptureAdapter__New1_fn(::g::Fuse::Visual* visual, ::g::ObjC::Object* control, PointerCaptureAdapter** __retval)
{
    *__retval = PointerCaptureAdapter::New1(visual, control);
}

// private void OnTouchEvent(ObjC.Object sender, ObjC.Object uiEvent) :1385
void PointerCaptureAdapter__OnTouchEvent_fn(PointerCaptureAdapter* __this, ::g::ObjC::Object* sender, ::g::ObjC::Object* uiEvent)
{
    __this->OnTouchEvent(sender, uiEvent);
}

// public PointerCaptureAdapter(Fuse.Visual visual, ObjC.Object control) [instance] :1372
void PointerCaptureAdapter::ctor_(::g::Fuse::Visual* visual, ::g::ObjC::Object* control)
{
    uStackFrame __("Fuse.Controls.Native.iOS.PointerCaptureAdapter", ".ctor(Fuse.Visual,ObjC.Object)");

    if (visual == NULL)
        U_THROW(::g::Uno::ArgumentException::New5(::STRINGS[1/*"PointerCapt...*/], ::STRINGS[2/*"visual"*/]));

    if (!::g::Fuse::Controls::Native::iOS::ObjectExtensions::IsUIControl(control))
        U_THROW(::g::Uno::ArgumentException::New5(::STRINGS[3/*"PointerCapt...*/], ::STRINGS[4/*"control"*/]));

    _visual = visual;
    _control = control;
    _activeTouches = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[2/*Uno.Collections.List<ObjC.Object>*/]));
    _touchEvents = ::g::Fuse::Controls::Native::iOS::UIControlEvent::AddAllTouchEventsCallback(_control, uDelegate::New(::TYPES[3/*Uno.Action<ObjC.Object, ObjC.Object>*/], (void*)PointerCaptureAdapter__OnTouchEvent_fn, this));
}

// public void Dispose() [instance] :1417
void PointerCaptureAdapter::Dispose()
{
    uStackFrame __("Fuse.Controls.Native.iOS.PointerCaptureAdapter", "Dispose()");
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_touchEvents), ::TYPES[4/*Uno.IDisposable*/]));
    _touchEvents = NULL;
    _activeTouches = NULL;
    _visual = NULL;
    _control = NULL;
}

// private void LostCallback() [instance] :1415
void PointerCaptureAdapter::LostCallback()
{
}

// private void OnTouchEvent(ObjC.Object sender, ObjC.Object uiEvent) [instance] :1385
void PointerCaptureAdapter::OnTouchEvent(::g::ObjC::Object* sender, ::g::ObjC::Object* uiEvent)
{
    uStackFrame __("Fuse.Controls.Native.iOS.PointerCaptureAdapter", "OnTouchEvent(ObjC.Object,ObjC.Object)");
    bool ret2;
    int ret3;
    ::g::ObjC::Object* ret4;

    if (::g::Fuse::Controls::Native::iOS::ObjectExtensions::IsUIControl(sender) && ::g::Fuse::Controls::Native::iOS::ObjectExtensions::IsUIEvent(uiEvent))
    {
        bool touchEnded = false;
        uArray* touches = ::g::Fuse::Controls::Native::iOS::UIEventExtensions::GetTouchesForView(uiEvent, sender);

        for (int i = 0; i < uPtr(touches)->Length(); i++)
        {
            ::g::ObjC::Object* touch = uPtr(touches)->Strong< ::g::ObjC::Object*>(i);

            if (!(::g::Uno::Collections::List__Contains_fn(uPtr(_activeTouches), touch, &ret2), ret2))
                ::g::Uno::Collections::List__Add_fn(uPtr(_activeTouches), touch);

            int pointerIndex = (::g::Uno::Collections::List__IndexOf_fn(uPtr(_activeTouches), touch, &ret3), ret3);
            int phase = ::g::Fuse::Controls::Native::iOS::UITouchExtensions::GetTouchPhase(touch);

            if (phase == 0)
                ::g::Fuse::Input::Pointer::ModifyCapture1(touch, _visual, uDelegate::New(::TYPES[5/*Uno.Action*/], (void*)PointerCaptureAdapter__LostCallback_fn, this), 2, pointerIndex);
            else if ((phase == 3) || (phase == 4))
                touchEnded = true;
        }

        if (touchEnded)
        {
            for (int i1 = 0; i1 < uPtr(_activeTouches)->Count(); i1++)
                ::g::Fuse::Input::Pointer::ReleaseCapture((::g::Uno::Collections::List__get_Item_fn(uPtr(_activeTouches), uCRef<int>(i1), &ret4), ret4));

            uPtr(_activeTouches)->Clear();
        }
    }
}

// public PointerCaptureAdapter New(Fuse.Visual visual, ObjC.Object control) [static] :1372
PointerCaptureAdapter* PointerCaptureAdapter::New1(::g::Fuse::Visual* visual, ::g::ObjC::Object* control)
{
    PointerCaptureAdapter* obj1 = (PointerCaptureAdapter*)uNew(PointerCaptureAdapter_typeof());
    obj1->ctor_(visual, control);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/ios/$.uno
// ------------------------------------------------------------------

// private struct InputDispatch.RootInfo :848
// {
static void InputDispatch__RootInfo_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::InputDispatch__RootInfo, RootVisual), 0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::InputDispatch__RootInfo, RootView), 0);
}

uStructType* InputDispatch__RootInfo_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(InputDispatch__RootInfo);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Controls.Native.iOS.InputDispatch.RootInfo", options);
    type->fp_build_ = InputDispatch__RootInfo_build;
    return type;
}

// public RootInfo(Fuse.Visual rootVisual, ObjC.Object rootView) :853
void InputDispatch__RootInfo__ctor__fn(InputDispatch__RootInfo* __this, ::g::Fuse::Visual* rootVisual, ::g::ObjC::Object* rootView)
{
    __this->ctor_(rootVisual, rootView);
}

// public RootInfo New(Fuse.Visual rootVisual, ObjC.Object rootView) :853
void InputDispatch__RootInfo__New1_fn(::g::Fuse::Visual* rootVisual, ::g::ObjC::Object* rootView, InputDispatch__RootInfo* __retval)
{
    *__retval = InputDispatch__RootInfo__New1(rootVisual, rootView);
}

// public RootInfo(Fuse.Visual rootVisual, ObjC.Object rootView) [instance] :853
void InputDispatch__RootInfo::ctor_(::g::Fuse::Visual* rootVisual, ::g::ObjC::Object* rootView)
{
    RootVisual = rootVisual;
    RootView = rootView;
}

// public RootInfo New(Fuse.Visual rootVisual, ObjC.Object rootView) [static] :853
InputDispatch__RootInfo InputDispatch__RootInfo__New1(::g::Fuse::Visual* rootVisual, ::g::ObjC::Object* rootView)
{
    InputDispatch__RootInfo obj1;
    obj1.ctor_(rootVisual, rootView);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/ios/$.uno
// ------------------------------------------------------------------

// public enum iOSDevice.ScreenOrientation :1055
uEnumType* iOSDevice__ScreenOrientation_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Controls.Native.iOS.iOSDevice.ScreenOrientation", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Portrait", 0LL,
        "Landscape", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/ios/$.uno
// ------------------------------------------------------------------

// internal enum TouchPhase :1427
uEnumType* TouchPhase_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Controls.Native.iOS.TouchPhase", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Began", 0LL,
        "Moved", 1LL,
        "Stationary", 2LL,
        "Ended", 3LL,
        "Cancelled", 4LL);
    return type;
}

}}}}} // ::g::Fuse::Controls::Native::iOS
