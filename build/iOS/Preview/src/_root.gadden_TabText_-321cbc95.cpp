// This file was generated based on /Users/ericaglimsholt/Documents/Skola/Handelsmarketing/Gadden/gadden/build/iOS/Preview/cache/ux11/gadden.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.gadden_TabText_-321cbc95.h>
#include <_root.TabText.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class gadden_TabText_Text_Property :191
// {
static void gadden_TabText_Text_Property_build(uType* type)
{
    ::TYPES[0] = ::g::TabText_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*TabText*/], offsetof(::g::gadden_TabText_Text_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* gadden_TabText_Text_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(gadden_TabText_Text_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("gadden_TabText_Text_Property", options);
    type->fp_build_ = gadden_TabText_Text_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))gadden_TabText_Text_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))gadden_TabText_Text_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))gadden_TabText_Text_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))gadden_TabText_Text_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public gadden_TabText_Text_Property(TabText obj, Uno.UX.Selector name) :194
void gadden_TabText_Text_Property__ctor_3_fn(gadden_TabText_Text_Property* __this, ::g::TabText* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :196
void gadden_TabText_Text_Property__Get1_fn(gadden_TabText_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    uStackFrame __("gadden_TabText_Text_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::TabText*>(obj, ::TYPES[0/*TabText*/]))->Text(), void();
}

// public gadden_TabText_Text_Property New(TabText obj, Uno.UX.Selector name) :194
void gadden_TabText_Text_Property__New1_fn(::g::TabText* obj, ::g::Uno::UX::Selector* name, gadden_TabText_Text_Property** __retval)
{
    *__retval = gadden_TabText_Text_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :195
void gadden_TabText_Text_Property__get_Object_fn(gadden_TabText_Text_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :197
void gadden_TabText_Text_Property__Set1_fn(gadden_TabText_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uStackFrame __("gadden_TabText_Text_Property", "Set(Uno.UX.PropertyObject,string,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::TabText*>(obj, ::TYPES[0/*TabText*/]))->SetText(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :198
void gadden_TabText_Text_Property__get_SupportsOriginSetter_fn(gadden_TabText_Text_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public gadden_TabText_Text_Property(TabText obj, Uno.UX.Selector name) [instance] :194
void gadden_TabText_Text_Property::ctor_3(::g::TabText* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public gadden_TabText_Text_Property New(TabText obj, Uno.UX.Selector name) [static] :194
gadden_TabText_Text_Property* gadden_TabText_Text_Property::New1(::g::TabText* obj, ::g::Uno::UX::Selector name)
{
    gadden_TabText_Text_Property* obj1 = (gadden_TabText_Text_Property*)uNew(gadden_TabText_Text_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
