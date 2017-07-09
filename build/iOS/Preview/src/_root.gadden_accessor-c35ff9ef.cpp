// This file was generated based on /Users/ericaglimsholt/Documents/Skola/Handelsmarketing/Gadden/gadden/build/iOS/Preview/cache/ux11/gadden.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AboutAboutUs.h>
#include <_root.gadden_accessor-c35ff9ef.h>
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

// internal sealed class gadden_accessor_AboutAboutUs_Text :31
// {
// static gadden_accessor_AboutAboutUs_Text() :31
static void gadden_accessor_AboutAboutUs_Text__cctor__fn(uType* __type)
{
    gadden_accessor_AboutAboutUs_Text::Singleton_ = gadden_accessor_AboutAboutUs_Text::New1();
    gadden_accessor_AboutAboutUs_Text::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Text"*/]);
}

static void gadden_accessor_AboutAboutUs_Text_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Text");
    ::TYPES[0] = ::g::AboutAboutUs_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[2] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::gadden_accessor_AboutAboutUs_Text::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&::g::gadden_accessor_AboutAboutUs_Text::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* gadden_accessor_AboutAboutUs_Text_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(gadden_accessor_AboutAboutUs_Text);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("gadden_accessor_AboutAboutUs_Text", options);
    type->fp_build_ = gadden_accessor_AboutAboutUs_Text_build;
    type->fp_ctor_ = (void*)gadden_accessor_AboutAboutUs_Text__New1_fn;
    type->fp_cctor_ = gadden_accessor_AboutAboutUs_Text__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))gadden_accessor_AboutAboutUs_Text__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))gadden_accessor_AboutAboutUs_Text__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))gadden_accessor_AboutAboutUs_Text__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))gadden_accessor_AboutAboutUs_Text__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))gadden_accessor_AboutAboutUs_Text__get_SupportsOriginSetter_fn;
    return type;
}

// public generated gadden_accessor_AboutAboutUs_Text() :31
void gadden_accessor_AboutAboutUs_Text__ctor_1_fn(gadden_accessor_AboutAboutUs_Text* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :37
void gadden_accessor_AboutAboutUs_Text__GetAsObject_fn(gadden_accessor_AboutAboutUs_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("gadden_accessor_AboutAboutUs_Text", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::AboutAboutUs*>(obj, ::TYPES[0/*AboutAboutUs*/]))->Text(), void();
}

// public override sealed Uno.UX.Selector get_Name() :34
void gadden_accessor_AboutAboutUs_Text__get_Name_fn(gadden_accessor_AboutAboutUs_Text* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = gadden_accessor_AboutAboutUs_Text::_name(), void();
}

// public generated gadden_accessor_AboutAboutUs_Text New() :31
void gadden_accessor_AboutAboutUs_Text__New1_fn(gadden_accessor_AboutAboutUs_Text** __retval)
{
    *__retval = gadden_accessor_AboutAboutUs_Text::New1();
}

// public override sealed Uno.Type get_PropertyType() :36
void gadden_accessor_AboutAboutUs_Text__get_PropertyType_fn(gadden_accessor_AboutAboutUs_Text* __this, uType** __retval)
{
    return *__retval = ::TYPES[1/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :38
void gadden_accessor_AboutAboutUs_Text__SetAsObject_fn(gadden_accessor_AboutAboutUs_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("gadden_accessor_AboutAboutUs_Text", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::AboutAboutUs*>(obj, ::TYPES[0/*AboutAboutUs*/]))->SetText(uCast<uString*>(v, ::TYPES[1/*string*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :39
void gadden_accessor_AboutAboutUs_Text__get_SupportsOriginSetter_fn(gadden_accessor_AboutAboutUs_Text* __this, bool* __retval)
{
    return *__retval = true, void();
}

::g::Uno::UX::Selector gadden_accessor_AboutAboutUs_Text::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> gadden_accessor_AboutAboutUs_Text::Singleton_;

// public generated gadden_accessor_AboutAboutUs_Text() [instance] :31
void gadden_accessor_AboutAboutUs_Text::ctor_1()
{
    ctor_();
}

// public generated gadden_accessor_AboutAboutUs_Text New() [static] :31
gadden_accessor_AboutAboutUs_Text* gadden_accessor_AboutAboutUs_Text::New1()
{
    gadden_accessor_AboutAboutUs_Text* obj1 = (gadden_accessor_AboutAboutUs_Text*)uNew(gadden_accessor_AboutAboutUs_Text_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
