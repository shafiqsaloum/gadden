// This file was generated based on '/Users/ericaglimsholt/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.5/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.AutoCap-526a856d.h>
#include <Fuse.Controls.AutoCorrectHint.h>
#include <Fuse.Controls.Native.-4016d338.h>
#include <Fuse.Controls.Native.-6a21b22.h>
#include <Fuse.Controls.Native.-87450d8.h>
#include <Fuse.Controls.Native.-8c20fe6.h>
#include <Fuse.Controls.Native.-ae84b26e.h>
#include <Fuse.Controls.Native.-b5316858.h>
#include <Fuse.Controls.Native.-e502cdf1.h>
#include <Fuse.Controls.Native.-efd6a0e8.h>
#include <Fuse.Controls.Native.iOS.View.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextInp-90db19ac.h>
#include <Fuse.Controls.TextInp-cfb86f57.h>
#include <Fuse.Controls.TextInputHint.h>
#include <Fuse.Controls.TextTruncation.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Font.h>
#include <Fuse.Internal.FontFac-589fc2ef.h>
#include <iOS/Helpers.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <Uno.Action-2.h>
#include <Uno.Bool.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Float.h>
#include <Uno.Func-2.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>
static uString* STRINGS[1];
static uType* TYPES[4];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class SingleLineTextEdit :2385
// {
static void SingleLineTextEdit_build(uType* type)
{
    ::STRINGS[0] = uString::Const("");
    ::TYPES[0] = ::g::Uno::Action2_typeof()->MakeType(::g::ObjC::Object_typeof(), ::g::ObjC::Object_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Func1_typeof()->MakeType(::g::ObjC::Object_typeof(), ::g::Uno::Bool_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::IDisposable_typeof();
    ::TYPES[3] = ::g::Fuse::Controls::Native::ITextEditHost_typeof();
    type->SetInterfaces(
        ::TYPES[2/*Uno.IDisposable*/], offsetof(SingleLineTextEdit_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(SingleLineTextEdit_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(SingleLineTextEdit_type, interface2),
        ::g::Fuse::Controls::Native::ITextEdit_typeof(), offsetof(SingleLineTextEdit_type, interface3),
        ::g::Fuse::Controls::Native::iOS::INativeFocusListener_typeof(), offsetof(SingleLineTextEdit_type, interface4),
        ::g::Fuse::Controls::Native::ITextView_typeof(), offsetof(SingleLineTextEdit_type, interface5));
    type->SetFields(7,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::SingleLineTextEdit, _delegate), 0,
        ::g::Fuse::Internal::FontFaceDescriptor_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::SingleLineTextEdit, _descriptor), 0,
        ::TYPES[2/*Uno.IDisposable*/], offsetof(::g::Fuse::Controls::Native::iOS::SingleLineTextEdit, _editingEvents), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::SingleLineTextEdit, _fontSize), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::SingleLineTextEdit, _placeholderColor), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::SingleLineTextEdit, _placeholderText), 0,
        ::TYPES[3/*Fuse.Controls.Native.ITextEditHost*/], offsetof(::g::Fuse::Controls::Native::iOS::SingleLineTextEdit, _textEditHost), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)SingleLineTextEdit__New3_fn, 0, true, type, 1, ::TYPES[3/*Fuse.Controls.Native.ITextEditHost*/]));
}

SingleLineTextEdit_type* SingleLineTextEdit_typeof()
{
    static uSStrong<SingleLineTextEdit_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::LeafView_typeof();
    options.FieldCount = 14;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(SingleLineTextEdit);
    options.TypeSize = sizeof(SingleLineTextEdit_type);
    type = (SingleLineTextEdit_type*)uClassType::New("Fuse.Controls.Native.iOS.SingleLineTextEdit", options);
    type->fp_build_ = SingleLineTextEdit_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))SingleLineTextEdit__Dispose_fn;
    type->interface3.fp_FocusGained = (void(*)(uObject*))SingleLineTextEdit__FuseControlsNativeITextEditFocusGained_fn;
    type->interface3.fp_FocusLost = (void(*)(uObject*))SingleLineTextEdit__FuseControlsNativeITextEditFocusLost_fn;
    type->interface4.fp_FocusGained = (void(*)(uObject*))SingleLineTextEdit__FuseControlsNativeiOSINativeFocusListenerFocusGained_fn;
    type->interface4.fp_FocusLost = (void(*)(uObject*))SingleLineTextEdit__FuseControlsNativeiOSINativeFocusListenerFocusLost_fn;
    type->interface5.fp_set_Value = (void(*)(uObject*, uString*))SingleLineTextEdit__FuseControlsNativeITextViewset_Value_fn;
    type->interface5.fp_set_MaxLength = (void(*)(uObject*, int*))SingleLineTextEdit__FuseControlsNativeITextViewset_MaxLength_fn;
    type->interface5.fp_set_TextWrapping = (void(*)(uObject*, int*))SingleLineTextEdit__FuseControlsNativeITextViewset_TextWrapping_fn;
    type->interface5.fp_set_LineSpacing = (void(*)(uObject*, float*))SingleLineTextEdit__FuseControlsNativeITextViewset_LineSpacing_fn;
    type->interface5.fp_set_FontSize = (void(*)(uObject*, float*))SingleLineTextEdit__FuseControlsNativeITextViewset_FontSize_fn;
    type->interface5.fp_set_Font = (void(*)(uObject*, ::g::Fuse::Font*))SingleLineTextEdit__FuseControlsNativeITextViewset_Font_fn;
    type->interface5.fp_set_TextAlignment = (void(*)(uObject*, int*))SingleLineTextEdit__FuseControlsNativeITextViewset_TextAlignment_fn;
    type->interface5.fp_set_TextColor = (void(*)(uObject*, ::g::Uno::Float4*))SingleLineTextEdit__FuseControlsNativeITextViewset_TextColor_fn;
    type->interface5.fp_set_TextTruncation = (void(*)(uObject*, int*))SingleLineTextEdit__FuseControlsNativeITextViewset_TextTruncation_fn;
    type->interface3.fp_set_IsMultiline = (void(*)(uObject*, bool*))SingleLineTextEdit__FuseControlsNativeITextEditset_IsMultiline_fn;
    type->interface3.fp_set_IsPassword = (void(*)(uObject*, bool*))SingleLineTextEdit__FuseControlsNativeITextEditset_IsPassword_fn;
    type->interface3.fp_set_IsReadOnly = (void(*)(uObject*, bool*))SingleLineTextEdit__FuseControlsNativeITextEditset_IsReadOnly_fn;
    type->interface3.fp_set_InputHint = (void(*)(uObject*, int*))SingleLineTextEdit__FuseControlsNativeITextEditset_InputHint_fn;
    type->interface3.fp_set_CaretColor = (void(*)(uObject*, ::g::Uno::Float4*))SingleLineTextEdit__FuseControlsNativeITextEditset_CaretColor_fn;
    type->interface3.fp_set_SelectionColor = (void(*)(uObject*, ::g::Uno::Float4*))SingleLineTextEdit__FuseControlsNativeITextEditset_SelectionColor_fn;
    type->interface3.fp_set_ActionStyle = (void(*)(uObject*, int*))SingleLineTextEdit__FuseControlsNativeITextEditset_ActionStyle_fn;
    type->interface3.fp_set_AutoCorrectHint = (void(*)(uObject*, int*))SingleLineTextEdit__FuseControlsNativeITextEditset_AutoCorrectHint_fn;
    type->interface3.fp_set_AutoCapitalizationHint = (void(*)(uObject*, int*))SingleLineTextEdit__FuseControlsNativeITextEditset_AutoCapitalizationHint_fn;
    type->interface3.fp_set_PlaceholderText = (void(*)(uObject*, uString*))SingleLineTextEdit__FuseControlsNativeITextEditset_PlaceholderText_fn;
    type->interface3.fp_set_PlaceholderColor = (void(*)(uObject*, ::g::Uno::Float4*))SingleLineTextEdit__FuseControlsNativeITextEditset_PlaceholderColor_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))SingleLineTextEdit__Dispose_fn;
    return type;
}

// public SingleLineTextEdit(Fuse.Controls.Native.ITextEditHost textEditHost) :2395
void SingleLineTextEdit__ctor_5_fn(SingleLineTextEdit* __this, uObject* textEditHost)
{
    __this->ctor_5(textEditHost);
}

// private static ObjC.Object AddOnActionCallback(ObjC.Object handle, Uno.Func<ObjC.Object, bool> callback) :2437
void SingleLineTextEdit__AddOnActionCallback_fn(::g::ObjC::Object* handle, uDelegate* callback, ::g::ObjC::Object** __retval)
{
    *__retval = SingleLineTextEdit::AddOnActionCallback(handle, callback);
}

// private static ObjC.Object Create() :2431
void SingleLineTextEdit__Create_fn(::g::ObjC::Object** __retval)
{
    *__retval = SingleLineTextEdit::Create();
}

// public override sealed void Dispose() :2404
void SingleLineTextEdit__Dispose_fn(SingleLineTextEdit* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.SingleLineTextEdit", "Dispose()");
    ::g::Fuse::Controls::Native::iOS::NativeFocus::RemoveListener(__this->Handle());
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_editingEvents), ::TYPES[2/*Uno.IDisposable*/]));
    __this->_editingEvents = NULL;
    __this->_delegate = NULL;
    __this->_textEditHost = NULL;
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
}

// private void Fuse.Controls.Native.iOS.INativeFocusListener.FocusGained() :2651
void SingleLineTextEdit__FuseControlsNativeiOSINativeFocusListenerFocusGained_fn(SingleLineTextEdit* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.SingleLineTextEdit", "Fuse.Controls.Native.iOS.INativeFocusListener.FocusGained()");
    ::g::Fuse::Controls::Native::ITextEditHost::OnFocusGained(uInterface(uPtr(__this->_textEditHost), ::TYPES[3/*Fuse.Controls.Native.ITextEditHost*/]));
}

// private void Fuse.Controls.Native.iOS.INativeFocusListener.FocusLost() :2656
void SingleLineTextEdit__FuseControlsNativeiOSINativeFocusListenerFocusLost_fn(SingleLineTextEdit* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.SingleLineTextEdit", "Fuse.Controls.Native.iOS.INativeFocusListener.FocusLost()");
    ::g::Fuse::Controls::Native::ITextEditHost::OnFocusLost(uInterface(uPtr(__this->_textEditHost), ::TYPES[3/*Fuse.Controls.Native.ITextEditHost*/]));
}

// private void Fuse.Controls.Native.ITextEdit.set_ActionStyle(Fuse.Controls.TextInputActionStyle value) :2580
void SingleLineTextEdit__FuseControlsNativeITextEditset_ActionStyle_fn(SingleLineTextEdit* __this, int* value)
{
    int value_ = *value;

    switch (value_)
    {
        case 0:
        {
            SingleLineTextEdit::SetActionStyle(__this->Handle(), UIReturnKeyDefault);
            break;
        }
        case 1:
        {
            SingleLineTextEdit::SetActionStyle(__this->Handle(), UIReturnKeyDone);
            break;
        }
        case 2:
        {
            SingleLineTextEdit::SetActionStyle(__this->Handle(), UIReturnKeyNext);
            break;
        }
        case 3:
        {
            SingleLineTextEdit::SetActionStyle(__this->Handle(), UIReturnKeyGo);
            break;
        }
        case 4:
        {
            SingleLineTextEdit::SetActionStyle(__this->Handle(), UIReturnKeySearch);
            break;
        }
        case 5:
        {
            SingleLineTextEdit::SetActionStyle(__this->Handle(), UIReturnKeySend);
            break;
        }
    }
}

// private void Fuse.Controls.Native.ITextEdit.set_AutoCapitalizationHint(Fuse.Controls.AutoCapitalizationHint value) :2609
void SingleLineTextEdit__FuseControlsNativeITextEditset_AutoCapitalizationHint_fn(SingleLineTextEdit* __this, int* value)
{
    int value_ = *value;

    switch (value_)
    {
        case 0:
        {
            SingleLineTextEdit::SetAutoCapitalizationHint(__this->Handle(), UITextAutocapitalizationTypeNone);
            break;
        }
        case 1:
        {
            SingleLineTextEdit::SetAutoCapitalizationHint(__this->Handle(), UITextAutocapitalizationTypeAllCharacters);
            break;
        }
        case 2:
        {
            SingleLineTextEdit::SetAutoCapitalizationHint(__this->Handle(), UITextAutocapitalizationTypeWords);
            break;
        }
        case 3:
        {
            SingleLineTextEdit::SetAutoCapitalizationHint(__this->Handle(), UITextAutocapitalizationTypeSentences);
            break;
        }
    }
}

// private void Fuse.Controls.Native.ITextEdit.set_AutoCorrectHint(Fuse.Controls.AutoCorrectHint value) :2596
void SingleLineTextEdit__FuseControlsNativeITextEditset_AutoCorrectHint_fn(SingleLineTextEdit* __this, int* value)
{
    int value_ = *value;

    switch (value_)
    {
        case 1:
        {
            SingleLineTextEdit::SetAutoCorrectHint(__this->Handle(), UITextAutocorrectionTypeNo);
            break;
        }
        case 0:
        {
            SingleLineTextEdit::SetAutoCorrectHint(__this->Handle(), UITextAutocorrectionTypeDefault);
            break;
        }
        case 2:
        {
            SingleLineTextEdit::SetAutoCorrectHint(__this->Handle(), UITextAutocorrectionTypeYes);
            break;
        }
    }
}

// private void Fuse.Controls.Native.ITextEdit.set_CaretColor(float4 value) :2562
void SingleLineTextEdit__FuseControlsNativeITextEditset_CaretColor_fn(SingleLineTextEdit* __this, ::g::Uno::Float4* value)
{
    ::g::Uno::Float4 value_ = *value;
    SingleLineTextEdit::SetCaretColor(__this->Handle(), value_.X, value_.Y, value_.Z, value_.W);
}

// private void Fuse.Controls.Native.ITextEdit.FocusGained() :2641
void SingleLineTextEdit__FuseControlsNativeITextEditFocusGained_fn(SingleLineTextEdit* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.SingleLineTextEdit", "Fuse.Controls.Native.ITextEdit.FocusGained()");
    ::g::Fuse::Controls::Native::iOS::FocusHelpers::ScheduleBecomeFirstResponder(__this->Handle());
}

// private void Fuse.Controls.Native.ITextEdit.FocusLost() :2646
void SingleLineTextEdit__FuseControlsNativeITextEditFocusLost_fn(SingleLineTextEdit* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.SingleLineTextEdit", "Fuse.Controls.Native.ITextEdit.FocusLost()");
    ::g::Fuse::Controls::Native::iOS::FocusHelpers::ScheduleResignFirstResponder(__this->Handle());
}

// private void Fuse.Controls.Native.ITextEdit.set_InputHint(Fuse.Controls.TextInputHint value) :2546
void SingleLineTextEdit__FuseControlsNativeITextEditset_InputHint_fn(SingleLineTextEdit* __this, int* value)
{
    int value_ = *value;

    switch (value_)
    {
        case 0:
        {
            SingleLineTextEdit::SetInputHint(__this->Handle(), UIKeyboardTypeDefault);
            break;
        }
        case 1:
        {
            SingleLineTextEdit::SetInputHint(__this->Handle(), UIKeyboardTypeEmailAddress);
            break;
        }
        case 2:
        {
            SingleLineTextEdit::SetInputHint(__this->Handle(), UIKeyboardTypeURL);
            break;
        }
        case 3:
        {
            SingleLineTextEdit::SetInputHint(__this->Handle(), UIKeyboardTypePhonePad);
            break;
        }
        case 4:
        {
            SingleLineTextEdit::SetInputHint(__this->Handle(), UIKeyboardTypeNumberPad);
            break;
        }
        case 5:
        {
            SingleLineTextEdit::SetInputHint(__this->Handle(), UIKeyboardTypeDecimalPad);
            break;
        }
    }
}

// private void Fuse.Controls.Native.ITextEdit.set_IsMultiline(bool value) :2531
void SingleLineTextEdit__FuseControlsNativeITextEditset_IsMultiline_fn(SingleLineTextEdit* __this, bool* value)
{
}

// private void Fuse.Controls.Native.ITextEdit.set_IsPassword(bool value) :2536
void SingleLineTextEdit__FuseControlsNativeITextEditset_IsPassword_fn(SingleLineTextEdit* __this, bool* value)
{
    bool value_ = *value;
    SingleLineTextEdit::SetIsPassword(__this->Handle(), value_);
}

// private void Fuse.Controls.Native.ITextEdit.set_IsReadOnly(bool value) :2541
void SingleLineTextEdit__FuseControlsNativeITextEditset_IsReadOnly_fn(SingleLineTextEdit* __this, bool* value)
{
}

// private void Fuse.Controls.Native.ITextEdit.set_PlaceholderColor(float4 value) :2634
void SingleLineTextEdit__FuseControlsNativeITextEditset_PlaceholderColor_fn(SingleLineTextEdit* __this, ::g::Uno::Float4* value)
{
    ::g::Uno::Float4 value_ = *value;
    ::g::Uno::Float4 c = __this->_placeholderColor = value_;
    SingleLineTextEdit::SetPlaceholderText(__this->Handle(), __this->_placeholderText, c.X, c.Y, c.Z, c.W);
}

// private void Fuse.Controls.Native.ITextEdit.set_PlaceholderText(string value) :2624
void SingleLineTextEdit__FuseControlsNativeITextEditset_PlaceholderText_fn(SingleLineTextEdit* __this, uString* value)
{
    ::g::Uno::Float4 c = __this->_placeholderColor;
    SingleLineTextEdit::SetPlaceholderText(__this->Handle(), __this->_placeholderText = value, c.X, c.Y, c.Z, c.W);
}

// private void Fuse.Controls.Native.ITextEdit.set_SelectionColor(float4 value) :2575
void SingleLineTextEdit__FuseControlsNativeITextEditset_SelectionColor_fn(SingleLineTextEdit* __this, ::g::Uno::Float4* value)
{
}

// private void Fuse.Controls.Native.ITextView.set_Font(Fuse.Font value) :2493
void SingleLineTextEdit__FuseControlsNativeITextViewset_Font_fn(SingleLineTextEdit* __this, ::g::Fuse::Font* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.SingleLineTextEdit", "Fuse.Controls.Native.ITextView.set_Font(Fuse.Font)");
    ::g::Fuse::Internal::FontFaceDescriptor* ret2;

    if (uPtr(uPtr(value)->Descriptors)->Count() > 0)
    {
        __this->_descriptor = (::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(value)->Descriptors), uCRef<int>(0), &ret2), ret2);
        SingleLineTextEdit::SetFont(__this->Handle(), ::g::Fuse::Controls::Native::iOS::FontCache::Get(__this->_descriptor, __this->_fontSize));
    }
}

// private void Fuse.Controls.Native.ITextView.set_FontSize(float value) :2478
void SingleLineTextEdit__FuseControlsNativeITextViewset_FontSize_fn(SingleLineTextEdit* __this, float* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.SingleLineTextEdit", "Fuse.Controls.Native.ITextView.set_FontSize(float)");
    float value_ = *value;

    if (__this->_fontSize != value_)
    {
        __this->_fontSize = value_;

        if (__this->_descriptor != NULL)
            SingleLineTextEdit::SetFont(__this->Handle(), ::g::Fuse::Controls::Native::iOS::FontCache::Get(__this->_descriptor, __this->_fontSize));
    }
}

// private void Fuse.Controls.Native.ITextView.set_LineSpacing(float value) :2472
void SingleLineTextEdit__FuseControlsNativeITextViewset_LineSpacing_fn(SingleLineTextEdit* __this, float* value)
{
}

// private void Fuse.Controls.Native.ITextView.set_MaxLength(int value) :2455
void SingleLineTextEdit__FuseControlsNativeITextViewset_MaxLength_fn(SingleLineTextEdit* __this, int* value)
{
    int value_ = *value;
    SingleLineTextEdit::SetMaxLength(__this->_delegate, (value_ == 0) ? 2147483647 : value_);
}

// private void Fuse.Controls.Native.ITextView.set_TextAlignment(Fuse.Controls.TextAlignment value) :2508
void SingleLineTextEdit__FuseControlsNativeITextViewset_TextAlignment_fn(SingleLineTextEdit* __this, int* value)
{
    int value_ = *value;

    switch (value_)
    {
        case 0:
        {
            SingleLineTextEdit::SetTextAlignment(__this->Handle(), NSTextAlignmentLeft);
            break;
        }
        case 1:
        {
            SingleLineTextEdit::SetTextAlignment(__this->Handle(), NSTextAlignmentCenter);
            break;
        }
        case 2:
        {
            SingleLineTextEdit::SetTextAlignment(__this->Handle(), NSTextAlignmentRight);
            break;
        }
    }
}

// private void Fuse.Controls.Native.ITextView.set_TextColor(float4 value) :2521
void SingleLineTextEdit__FuseControlsNativeITextViewset_TextColor_fn(SingleLineTextEdit* __this, ::g::Uno::Float4* value)
{
    ::g::Uno::Float4 value_ = *value;
    SingleLineTextEdit::SetTextColor(__this->Handle(), value_.X, value_.Y, value_.Z, value_.W);
}

// private void Fuse.Controls.Native.ITextView.set_TextTruncation(Fuse.Controls.TextTruncation value) :2526
void SingleLineTextEdit__FuseControlsNativeITextViewset_TextTruncation_fn(SingleLineTextEdit* __this, int* value)
{
}

// private void Fuse.Controls.Native.ITextView.set_TextWrapping(Fuse.Controls.TextWrapping value) :2467
void SingleLineTextEdit__FuseControlsNativeITextViewset_TextWrapping_fn(SingleLineTextEdit* __this, int* value)
{
}

// private void Fuse.Controls.Native.ITextView.set_Value(string value) :2449
void SingleLineTextEdit__FuseControlsNativeITextViewset_Value_fn(SingleLineTextEdit* __this, uString* value)
{
    SingleLineTextEdit::SetValue(__this->Handle(), value);
}

// private static string GetValue(ObjC.Object handle) :2684
void SingleLineTextEdit__GetValue_fn(::g::ObjC::Object* handle, uString** __retval)
{
    *__retval = SingleLineTextEdit::GetValue(handle);
}

// public SingleLineTextEdit New(Fuse.Controls.Native.ITextEditHost textEditHost) :2395
void SingleLineTextEdit__New3_fn(uObject* textEditHost, SingleLineTextEdit** __retval)
{
    *__retval = SingleLineTextEdit::New3(textEditHost);
}

// private bool OnAction(ObjC.Object sender) :2414
void SingleLineTextEdit__OnAction_fn(SingleLineTextEdit* __this, ::g::ObjC::Object* sender, bool* __retval)
{
    *__retval = __this->OnAction(sender);
}

// private void OnTextEdit(ObjC.Object sender, ObjC.Object args) :2420
void SingleLineTextEdit__OnTextEdit_fn(SingleLineTextEdit* __this, ::g::ObjC::Object* sender, ::g::ObjC::Object* args)
{
    __this->OnTextEdit(sender, args);
}

// private void OnValueChanged() :2425
void SingleLineTextEdit__OnValueChanged_fn(SingleLineTextEdit* __this)
{
    __this->OnValueChanged();
}

// private static void SetActionStyle(ObjC.Object handle, int style) :2735
void SingleLineTextEdit__SetActionStyle_fn(::g::ObjC::Object* handle, int* style)
{
    SingleLineTextEdit::SetActionStyle(handle, *style);
}

// private static void SetAutoCapitalizationHint(ObjC.Object handle, int hint) :2749
void SingleLineTextEdit__SetAutoCapitalizationHint_fn(::g::ObjC::Object* handle, int* hint)
{
    SingleLineTextEdit::SetAutoCapitalizationHint(handle, *hint);
}

// private static void SetAutoCorrectHint(ObjC.Object handle, int hint) :2742
void SingleLineTextEdit__SetAutoCorrectHint_fn(::g::ObjC::Object* handle, int* hint)
{
    SingleLineTextEdit::SetAutoCorrectHint(handle, *hint);
}

// private static void SetCaretColor(ObjC.Object handle, float r, float g, float b, float a) :2566
void SingleLineTextEdit__SetCaretColor_fn(::g::ObjC::Object* handle, float* r, float* g, float* b, float* a)
{
    SingleLineTextEdit::SetCaretColor(handle, *r, *g, *b, *a);
}

// private static void SetFont(ObjC.Object handle, ObjC.Object fontHandle) :2720
void SingleLineTextEdit__SetFont_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* fontHandle)
{
    SingleLineTextEdit::SetFont(handle, fontHandle);
}

// private static void SetInputHint(ObjC.Object handle, int hint) :2728
void SingleLineTextEdit__SetInputHint_fn(::g::ObjC::Object* handle, int* hint)
{
    SingleLineTextEdit::SetInputHint(handle, *hint);
}

// private static void SetIsPassword(ObjC.Object handle, bool isPassword) :2705
void SingleLineTextEdit__SetIsPassword_fn(::g::ObjC::Object* handle, bool* isPassword)
{
    SingleLineTextEdit::SetIsPassword(handle, *isPassword);
}

// private static void SetMaxLength(ObjC.Object delegateHandle, int maxLength) :2459
void SingleLineTextEdit__SetMaxLength_fn(::g::ObjC::Object* delegateHandle, int* maxLength)
{
    SingleLineTextEdit::SetMaxLength(delegateHandle, *maxLength);
}

// private static void SetPlaceholderText(ObjC.Object handle, string text, float r, float g, float b, float a) :2669
void SingleLineTextEdit__SetPlaceholderText_fn(::g::ObjC::Object* handle, uString* text, float* r, float* g, float* b, float* a)
{
    SingleLineTextEdit::SetPlaceholderText(handle, text, *r, *g, *b, *a);
}

// private static void SetTextAlignment(ObjC.Object handle, int alignmnet) :2698
void SingleLineTextEdit__SetTextAlignment_fn(::g::ObjC::Object* handle, int* alignmnet)
{
    SingleLineTextEdit::SetTextAlignment(handle, *alignmnet);
}

// private static void SetTextColor(ObjC.Object handle, float r, float g, float b, float a) :2691
void SingleLineTextEdit__SetTextColor_fn(::g::ObjC::Object* handle, float* r, float* g, float* b, float* a)
{
    SingleLineTextEdit::SetTextColor(handle, *r, *g, *b, *a);
}

// private static void SetValue(ObjC.Object handle, string value) :2677
void SingleLineTextEdit__SetValue_fn(::g::ObjC::Object* handle, uString* value)
{
    SingleLineTextEdit::SetValue(handle, value);
}

// public SingleLineTextEdit(Fuse.Controls.Native.ITextEditHost textEditHost) [instance] :2395
void SingleLineTextEdit::ctor_5(uObject* textEditHost)
{
    uStackFrame __("Fuse.Controls.Native.iOS.SingleLineTextEdit", ".ctor(Fuse.Controls.Native.ITextEditHost)");
    _fontSize = 12.0f;
    _placeholderText = ::STRINGS[0/*""*/];
    _placeholderColor = ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f);
    ctor_4(SingleLineTextEdit::Create());
    ::g::Fuse::Controls::Native::iOS::TextEditSpeedHack::Run();
    _textEditHost = textEditHost;
    _editingEvents = ::g::Fuse::Controls::Native::iOS::UIControlEvent::AddAllEditingEventsCallback(Handle(), uDelegate::New(::TYPES[0/*Uno.Action<ObjC.Object, ObjC.Object>*/], (void*)SingleLineTextEdit__OnTextEdit_fn, this));
    _delegate = SingleLineTextEdit::AddOnActionCallback(Handle(), uDelegate::New(::TYPES[1/*Uno.Func<ObjC.Object, bool>*/], (void*)SingleLineTextEdit__OnAction_fn, this));
    ::g::Fuse::Controls::Native::iOS::NativeFocus::AddListener(Handle(), (uObject*)this);
}

// private bool OnAction(ObjC.Object sender) [instance] :2414
bool SingleLineTextEdit::OnAction(::g::ObjC::Object* sender)
{
    uStackFrame __("Fuse.Controls.Native.iOS.SingleLineTextEdit", "OnAction(ObjC.Object)");
    OnValueChanged();
    return ::g::Fuse::Controls::Native::ITextEditHost::OnInputAction(uInterface(uPtr(_textEditHost), ::TYPES[3/*Fuse.Controls.Native.ITextEditHost*/]), 0);
}

// private void OnTextEdit(ObjC.Object sender, ObjC.Object args) [instance] :2420
void SingleLineTextEdit::OnTextEdit(::g::ObjC::Object* sender, ::g::ObjC::Object* args)
{
    uStackFrame __("Fuse.Controls.Native.iOS.SingleLineTextEdit", "OnTextEdit(ObjC.Object,ObjC.Object)");
    OnValueChanged();
}

// private void OnValueChanged() [instance] :2425
void SingleLineTextEdit::OnValueChanged()
{
    uStackFrame __("Fuse.Controls.Native.iOS.SingleLineTextEdit", "OnValueChanged()");
    ::g::Fuse::Controls::Native::ITextEditHost::OnValueChanged(uInterface(uPtr(_textEditHost), ::TYPES[3/*Fuse.Controls.Native.ITextEditHost*/]), SingleLineTextEdit::GetValue(Handle()));
}

// private static ObjC.Object AddOnActionCallback(ObjC.Object handle, Uno.Func<ObjC.Object, bool> callback) [static] :2437
::g::ObjC::Object* SingleLineTextEdit::AddOnActionCallback(::g::ObjC::Object* handle, uDelegate* callback)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id handle, ::uObjC::Function<bool, ::id> callback) -> ::id
        {
            ::UITextField* textField = (::UITextField*)handle;
            ::TextFieldDelegate* textFieldDelegate = [[::TextFieldDelegate alloc] init];
            [textFieldDelegate setOnActionCallback:callback];
            [textFieldDelegate setMaxLength: INT_MAX];
            [textField setDelegate: textFieldDelegate];
            return textFieldDelegate;
        } (::g::ObjC::Object::GetHandle(handle), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<bool, ::id>
        {
            return __delegateRef == nil ? (::uObjC::Function<bool, ::id>)nil : (^ bool (::id arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                return uUnbox<bool>(__unoDelegate->Invoke(1, ::g::ObjC::Object::Create(arg)));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: callback])));
        
    }
    
}

// private static ObjC.Object Create() [static] :2431
::g::ObjC::Object* SingleLineTextEdit::Create()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            return [[::UITextField alloc] init];
        } ());
        
    }
    
}

// private static string GetValue(ObjC.Object handle) [static] :2684
uString* SingleLineTextEdit::GetValue(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        return ::uObjC::UnoString([] (::id handle) -> ::NSString*
        {
            ::UITextField* textField = (::UITextField*)handle;
            return [textField text];
        } (::g::ObjC::Object::GetHandle(handle)));
        
    }
    
}

// public SingleLineTextEdit New(Fuse.Controls.Native.ITextEditHost textEditHost) [static] :2395
SingleLineTextEdit* SingleLineTextEdit::New3(uObject* textEditHost)
{
    SingleLineTextEdit* obj1 = (SingleLineTextEdit*)uNew(SingleLineTextEdit_typeof());
    obj1->ctor_5(textEditHost);
    return obj1;
}

// private static void SetActionStyle(ObjC.Object handle, int style) [static] :2735
void SingleLineTextEdit::SetActionStyle(::g::ObjC::Object* handle, int style)
{
    @autoreleasepool
    {
        [] (::id handle, int style) -> void
        {
            ::UITextField* textField = (::UITextField*)handle;
            [textField setReturnKeyType: (UIReturnKeyType)style];
        } (::g::ObjC::Object::GetHandle(handle), style);
        
    }
    
}

// private static void SetAutoCapitalizationHint(ObjC.Object handle, int hint) [static] :2749
void SingleLineTextEdit::SetAutoCapitalizationHint(::g::ObjC::Object* handle, int hint)
{
    @autoreleasepool
    {
        [] (::id handle, int hint) -> void
        {
            ::UITextField* textField = (::UITextField*)handle;
            [textField setAutocapitalizationType: (UITextAutocapitalizationType)hint];
        } (::g::ObjC::Object::GetHandle(handle), hint);
        
    }
    
}

// private static void SetAutoCorrectHint(ObjC.Object handle, int hint) [static] :2742
void SingleLineTextEdit::SetAutoCorrectHint(::g::ObjC::Object* handle, int hint)
{
    @autoreleasepool
    {
        [] (::id handle, int hint) -> void
        {
            ::UITextField* textField = (::UITextField*)handle;
            [textField setAutocorrectionType: (UITextAutocorrectionType)hint];
        } (::g::ObjC::Object::GetHandle(handle), hint);
        
    }
    
}

// private static void SetCaretColor(ObjC.Object handle, float r, float g, float b, float a) [static] :2566
void SingleLineTextEdit::SetCaretColor(::g::ObjC::Object* handle, float r, float g, float b, float a)
{
    @autoreleasepool
    {
        [] (::id handle, float r, float g, float b, float a) -> void
        {
            ::UITextField* textField = (::UITextField*)handle;
            ::UIColor* color = [::UIColor colorWithRed:(CGFloat)r green:(CGFloat)g blue:(CGFloat)b alpha:(CGFloat)a];
            [textField setTintColor:color];
        } (::g::ObjC::Object::GetHandle(handle), r, g, b, a);
        
    }
    
}

// private static void SetFont(ObjC.Object handle, ObjC.Object fontHandle) [static] :2720
void SingleLineTextEdit::SetFont(::g::ObjC::Object* handle, ::g::ObjC::Object* fontHandle)
{
    @autoreleasepool
    {
        [] (::id handle, ::id fontHandle) -> void
        {
            ::UITextField* textField = (::UITextField*)handle;
            ::UIFont* font = (::UIFont*)fontHandle;
            [textField setFont: font];
        } (::g::ObjC::Object::GetHandle(handle), ::g::ObjC::Object::GetHandle(fontHandle));
        
    }
    
}

// private static void SetInputHint(ObjC.Object handle, int hint) [static] :2728
void SingleLineTextEdit::SetInputHint(::g::ObjC::Object* handle, int hint)
{
    @autoreleasepool
    {
        [] (::id handle, int hint) -> void
        {
            ::UITextField* textField = (::UITextField*)handle;
            [textField setKeyboardType:(UIKeyboardType)hint];
        } (::g::ObjC::Object::GetHandle(handle), hint);
        
    }
    
}

// private static void SetIsPassword(ObjC.Object handle, bool isPassword) [static] :2705
void SingleLineTextEdit::SetIsPassword(::g::ObjC::Object* handle, bool isPassword)
{
    @autoreleasepool
    {
        [] (::id handle, bool isPassword) -> void
        {
            ::UITextField* textField = (::UITextField*)handle;
            BOOL isFirstResponder = textField.isFirstResponder;
            
            if (isFirstResponder)
            	[textField resignFirstResponder];
            
            [textField setSecureTextEntry: isPassword];
            
            if (isFirstResponder)
            	[textField becomeFirstResponder];
        } (::g::ObjC::Object::GetHandle(handle), isPassword);
        
    }
    
}

// private static void SetMaxLength(ObjC.Object delegateHandle, int maxLength) [static] :2459
void SingleLineTextEdit::SetMaxLength(::g::ObjC::Object* delegateHandle, int maxLength)
{
    @autoreleasepool
    {
        [] (::id delegateHandle, int maxLength) -> void
        {
            ::TextFieldDelegate* textFieldDelegate = (::TextFieldDelegate*)delegateHandle;
            [textFieldDelegate setMaxLength: maxLength];
        } (::g::ObjC::Object::GetHandle(delegateHandle), maxLength);
        
    }
    
}

// private static void SetPlaceholderText(ObjC.Object handle, string text, float r, float g, float b, float a) [static] :2669
void SingleLineTextEdit::SetPlaceholderText(::g::ObjC::Object* handle, uString* text, float r, float g, float b, float a)
{
    @autoreleasepool
    {
        [] (::id handle, ::NSString* text, float r, float g, float b, float a) -> void
        {
            ::UITextField* textField = (::UITextField*)handle;
            ::UIColor* color = [::UIColor colorWithRed:(CGFloat)r green:(CGFloat)g blue:(CGFloat)b alpha:(CGFloat)a];
              			textField.attributedPlaceholder = [[NSAttributedString alloc] initWithString:text attributes:[NSDictionary dictionaryWithObjects:@[color] forKeys:@[NSForegroundColorAttributeName]]];
        } (::g::ObjC::Object::GetHandle(handle), ::uObjC::NativeString(text), r, g, b, a);
        
    }
    
}

// private static void SetTextAlignment(ObjC.Object handle, int alignmnet) [static] :2698
void SingleLineTextEdit::SetTextAlignment(::g::ObjC::Object* handle, int alignmnet)
{
    @autoreleasepool
    {
        [] (::id handle, int alignmnet) -> void
        {
            ::UITextField* textField = (::UITextField*)handle;
            [textField setTextAlignment: (NSTextAlignment)alignmnet];
        } (::g::ObjC::Object::GetHandle(handle), alignmnet);
        
    }
    
}

// private static void SetTextColor(ObjC.Object handle, float r, float g, float b, float a) [static] :2691
void SingleLineTextEdit::SetTextColor(::g::ObjC::Object* handle, float r, float g, float b, float a)
{
    @autoreleasepool
    {
        [] (::id handle, float r, float g, float b, float a) -> void
        {
            ::UITextField* textField = (::UITextField*)handle;
            [textField setTextColor:[::UIColor colorWithRed:(CGFloat)r green:(CGFloat)g blue:(CGFloat)b alpha:(CGFloat)a]];
        } (::g::ObjC::Object::GetHandle(handle), r, g, b, a);
        
    }
    
}

// private static void SetValue(ObjC.Object handle, string value) [static] :2677
void SingleLineTextEdit::SetValue(::g::ObjC::Object* handle, uString* value)
{
    @autoreleasepool
    {
        [] (::id handle, ::NSString* value) -> void
        {
            ::UITextField* textField = (::UITextField*)handle;
            [textField setText:value];
        } (::g::ObjC::Object::GetHandle(handle), ::uObjC::NativeString(value));
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
