// This file was generated based on /Users/ericaglimsholt/Documents/Skola/Handelsmarketing/Gadden/gadden/build/iOS/Preview/cache/ux11/gadden.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.gadden_accessor-e64a7a72.h>
#include <_root.TabSponsor.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[3];

namespace g{

// internal sealed class gadden_accessor_TabSponsor_Text :11
// {
// static gadden_accessor_TabSponsor_Text() :11
static void gadden_accessor_TabSponsor_Text__cctor__fn(uType* __type)
{
    gadden_accessor_TabSponsor_Text::Singleton_ = gadden_accessor_TabSponsor_Text::New1();
    gadden_accessor_TabSponsor_Text::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Text"*/]);
}

static void gadden_accessor_TabSponsor_Text_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Text");
    ::TYPES[0] = ::g::TabSponsor_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[2] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::gadden_accessor_TabSponsor_Text::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&::g::gadden_accessor_TabSponsor_Text::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* gadden_accessor_TabSponsor_Text_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(gadden_accessor_TabSponsor_Text);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("gadden_accessor_TabSponsor_Text", options);
    type->fp_build_ = gadden_accessor_TabSponsor_Text_build;
    type->fp_ctor_ = (void*)gadden_accessor_TabSponsor_Text__New1_fn;
    type->fp_cctor_ = gadden_accessor_TabSponsor_Text__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))gadden_accessor_TabSponsor_Text__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))gadden_accessor_TabSponsor_Text__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))gadden_accessor_TabSponsor_Text__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))gadden_accessor_TabSponsor_Text__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))gadden_accessor_TabSponsor_Text__get_SupportsOriginSetter_fn;
    return type;
}

// public generated gadden_accessor_TabSponsor_Text() :11
void gadden_accessor_TabSponsor_Text__ctor_1_fn(gadden_accessor_TabSponsor_Text* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :17
void gadden_accessor_TabSponsor_Text__GetAsObject_fn(gadden_accessor_TabSponsor_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("gadden_accessor_TabSponsor_Text", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::TabSponsor*>(obj, ::TYPES[0/*TabSponsor*/]))->Text(), void();
}

// public override sealed Uno.UX.Selector get_Name() :14
void gadden_accessor_TabSponsor_Text__get_Name_fn(gadden_accessor_TabSponsor_Text* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = gadden_accessor_TabSponsor_Text::_name(), void();
}

// public generated gadden_accessor_TabSponsor_Text New() :11
void gadden_accessor_TabSponsor_Text__New1_fn(gadden_accessor_TabSponsor_Text** __retval)
{
    *__retval = gadden_accessor_TabSponsor_Text::New1();
}

// public override sealed Uno.Type get_PropertyType() :16
void gadden_accessor_TabSponsor_Text__get_PropertyType_fn(gadden_accessor_TabSponsor_Text* __this, uType** __retval)
{
    return *__retval = ::TYPES[1/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :18
void gadden_accessor_TabSponsor_Text__SetAsObject_fn(gadden_accessor_TabSponsor_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("gadden_accessor_TabSponsor_Text", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::TabSponsor*>(obj, ::TYPES[0/*TabSponsor*/]))->SetText(uCast<uString*>(v, ::TYPES[1/*string*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :19
void gadden_accessor_TabSponsor_Text__get_SupportsOriginSetter_fn(gadden_accessor_TabSponsor_Text* __this, bool* __retval)
{
    return *__retval = true, void();
}

::g::Uno::UX::Selector gadden_accessor_TabSponsor_Text::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> gadden_accessor_TabSponsor_Text::Singleton_;

// public generated gadden_accessor_TabSponsor_Text() [instance] :11
void gadden_accessor_TabSponsor_Text::ctor_1()
{
    ctor_();
}

// public generated gadden_accessor_TabSponsor_Text New() [static] :11
gadden_accessor_TabSponsor_Text* gadden_accessor_TabSponsor_Text::New1()
{
    gadden_accessor_TabSponsor_Text* obj1 = (gadden_accessor_TabSponsor_Text*)uNew(gadden_accessor_TabSponsor_Text_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
