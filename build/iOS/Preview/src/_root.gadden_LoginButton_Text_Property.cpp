// This file was generated based on build/iOS/Preview/cache/ux11/gadden.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.gadden_LoginButton_Text_Property.h>
#include <_root.LoginButton.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class gadden_LoginButton_Text_Property :194
// {
static void gadden_LoginButton_Text_Property_build(uType* type)
{
    ::TYPES[0] = ::g::LoginButton_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*LoginButton*/], offsetof(::g::gadden_LoginButton_Text_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* gadden_LoginButton_Text_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(gadden_LoginButton_Text_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("gadden_LoginButton_Text_Property", options);
    type->fp_build_ = gadden_LoginButton_Text_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))gadden_LoginButton_Text_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))gadden_LoginButton_Text_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))gadden_LoginButton_Text_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))gadden_LoginButton_Text_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public gadden_LoginButton_Text_Property(LoginButton obj, Uno.UX.Selector name) :197
void gadden_LoginButton_Text_Property__ctor_3_fn(gadden_LoginButton_Text_Property* __this, ::g::LoginButton* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :199
void gadden_LoginButton_Text_Property__Get1_fn(gadden_LoginButton_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    uStackFrame __("gadden_LoginButton_Text_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::LoginButton*>(obj, ::TYPES[0/*LoginButton*/]))->Text(), void();
}

// public gadden_LoginButton_Text_Property New(LoginButton obj, Uno.UX.Selector name) :197
void gadden_LoginButton_Text_Property__New1_fn(::g::LoginButton* obj, ::g::Uno::UX::Selector* name, gadden_LoginButton_Text_Property** __retval)
{
    *__retval = gadden_LoginButton_Text_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :198
void gadden_LoginButton_Text_Property__get_Object_fn(gadden_LoginButton_Text_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :200
void gadden_LoginButton_Text_Property__Set1_fn(gadden_LoginButton_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uStackFrame __("gadden_LoginButton_Text_Property", "Set(Uno.UX.PropertyObject,string,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::LoginButton*>(obj, ::TYPES[0/*LoginButton*/]))->SetText(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :201
void gadden_LoginButton_Text_Property__get_SupportsOriginSetter_fn(gadden_LoginButton_Text_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public gadden_LoginButton_Text_Property(LoginButton obj, Uno.UX.Selector name) [instance] :197
void gadden_LoginButton_Text_Property::ctor_3(::g::LoginButton* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public gadden_LoginButton_Text_Property New(LoginButton obj, Uno.UX.Selector name) [static] :197
gadden_LoginButton_Text_Property* gadden_LoginButton_Text_Property::New1(::g::LoginButton* obj, ::g::Uno::UX::Selector name)
{
    gadden_LoginButton_Text_Property* obj1 = (gadden_LoginButton_Text_Property*)uNew(gadden_LoginButton_Text_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
