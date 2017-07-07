// This file was generated based on /Users/ericaglimsholt/Documents/Skola/Handelsmarketing/Gadden/gadden/build/iOS/Preview1/cache/ux11/gadden.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.gadden_FuseCont-61214812.h>
#include <Fuse.Controls.Shadow.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class gadden_FuseControlsShadow_Color_Property :31
// {
static void gadden_FuseControlsShadow_Color_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::Shadow_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Controls.Shadow*/], offsetof(::g::gadden_FuseControlsShadow_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* gadden_FuseControlsShadow_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(gadden_FuseControlsShadow_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("gadden_FuseControlsShadow_Color_Property", options);
    type->fp_build_ = gadden_FuseControlsShadow_Color_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))gadden_FuseControlsShadow_Color_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))gadden_FuseControlsShadow_Color_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))gadden_FuseControlsShadow_Color_Property__Set1_fn;
    return type;
}

// public gadden_FuseControlsShadow_Color_Property(Fuse.Controls.Shadow obj, Uno.UX.Selector name) :34
void gadden_FuseControlsShadow_Color_Property__ctor_3_fn(gadden_FuseControlsShadow_Color_Property* __this, ::g::Fuse::Controls::Shadow* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :36
void gadden_FuseControlsShadow_Color_Property__Get1_fn(gadden_FuseControlsShadow_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    uStackFrame __("gadden_FuseControlsShadow_Color_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::Shadow*>(obj, ::TYPES[0/*Fuse.Controls.Shadow*/]))->Color(), void();
}

// public gadden_FuseControlsShadow_Color_Property New(Fuse.Controls.Shadow obj, Uno.UX.Selector name) :34
void gadden_FuseControlsShadow_Color_Property__New1_fn(::g::Fuse::Controls::Shadow* obj, ::g::Uno::UX::Selector* name, gadden_FuseControlsShadow_Color_Property** __retval)
{
    *__retval = gadden_FuseControlsShadow_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :35
void gadden_FuseControlsShadow_Color_Property__get_Object_fn(gadden_FuseControlsShadow_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :37
void gadden_FuseControlsShadow_Color_Property__Set1_fn(gadden_FuseControlsShadow_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("gadden_FuseControlsShadow_Color_Property", "Set(Uno.UX.PropertyObject,float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::Shadow*>(obj, ::TYPES[0/*Fuse.Controls.Shadow*/]))->Color(v_);
}

// public gadden_FuseControlsShadow_Color_Property(Fuse.Controls.Shadow obj, Uno.UX.Selector name) [instance] :34
void gadden_FuseControlsShadow_Color_Property::ctor_3(::g::Fuse::Controls::Shadow* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public gadden_FuseControlsShadow_Color_Property New(Fuse.Controls.Shadow obj, Uno.UX.Selector name) [static] :34
gadden_FuseControlsShadow_Color_Property* gadden_FuseControlsShadow_Color_Property::New1(::g::Fuse::Controls::Shadow* obj, ::g::Uno::UX::Selector name)
{
    gadden_FuseControlsShadow_Color_Property* obj1 = (gadden_FuseControlsShadow_Color_Property*)uNew(gadden_FuseControlsShadow_Color_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
