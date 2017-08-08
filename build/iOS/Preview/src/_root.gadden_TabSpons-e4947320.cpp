// This file was generated based on /Users/ericaglimsholt/Documents/Skola/Handelsmarketing/Gadden/gadden/build/iOS/Preview/cache/ux11/gadden.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.gadden_TabSpons-e4947320.h>
#include <_root.TabSponsor.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class gadden_TabSponsor_Text_Property :165
// {
static void gadden_TabSponsor_Text_Property_build(uType* type)
{
    ::TYPES[0] = ::g::TabSponsor_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*TabSponsor*/], offsetof(::g::gadden_TabSponsor_Text_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* gadden_TabSponsor_Text_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(gadden_TabSponsor_Text_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("gadden_TabSponsor_Text_Property", options);
    type->fp_build_ = gadden_TabSponsor_Text_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))gadden_TabSponsor_Text_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))gadden_TabSponsor_Text_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))gadden_TabSponsor_Text_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))gadden_TabSponsor_Text_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public gadden_TabSponsor_Text_Property(TabSponsor obj, Uno.UX.Selector name) :168
void gadden_TabSponsor_Text_Property__ctor_3_fn(gadden_TabSponsor_Text_Property* __this, ::g::TabSponsor* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :170
void gadden_TabSponsor_Text_Property__Get1_fn(gadden_TabSponsor_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    uStackFrame __("gadden_TabSponsor_Text_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::TabSponsor*>(obj, ::TYPES[0/*TabSponsor*/]))->Text(), void();
}

// public gadden_TabSponsor_Text_Property New(TabSponsor obj, Uno.UX.Selector name) :168
void gadden_TabSponsor_Text_Property__New1_fn(::g::TabSponsor* obj, ::g::Uno::UX::Selector* name, gadden_TabSponsor_Text_Property** __retval)
{
    *__retval = gadden_TabSponsor_Text_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :169
void gadden_TabSponsor_Text_Property__get_Object_fn(gadden_TabSponsor_Text_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :171
void gadden_TabSponsor_Text_Property__Set1_fn(gadden_TabSponsor_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uStackFrame __("gadden_TabSponsor_Text_Property", "Set(Uno.UX.PropertyObject,string,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::TabSponsor*>(obj, ::TYPES[0/*TabSponsor*/]))->SetText(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :172
void gadden_TabSponsor_Text_Property__get_SupportsOriginSetter_fn(gadden_TabSponsor_Text_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public gadden_TabSponsor_Text_Property(TabSponsor obj, Uno.UX.Selector name) [instance] :168
void gadden_TabSponsor_Text_Property::ctor_3(::g::TabSponsor* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public gadden_TabSponsor_Text_Property New(TabSponsor obj, Uno.UX.Selector name) [static] :168
gadden_TabSponsor_Text_Property* gadden_TabSponsor_Text_Property::New1(::g::TabSponsor* obj, ::g::Uno::UX::Selector name)
{
    gadden_TabSponsor_Text_Property* obj1 = (gadden_TabSponsor_Text_Property*)uNew(gadden_TabSponsor_Text_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
