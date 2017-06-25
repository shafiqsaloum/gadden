// This file was generated based on '/Users/ericaglimsholt/Documents/Skola/Handels marketing/Gadden/gadden/build/iOS/Preview/cache/ux11/gadden.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.gadden_FuseReac-968d479e.h>
#include <Fuse.Reactive.Each.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class gadden_FuseReactiveEach_Limit_Property :81
// {
static void gadden_FuseReactiveEach_Limit_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Reactive::Each_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Int_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Reactive.Each*/], offsetof(::g::gadden_FuseReactiveEach_Limit_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* gadden_FuseReactiveEach_Limit_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(gadden_FuseReactiveEach_Limit_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("gadden_FuseReactiveEach_Limit_Property", options);
    type->fp_build_ = gadden_FuseReactiveEach_Limit_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))gadden_FuseReactiveEach_Limit_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))gadden_FuseReactiveEach_Limit_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))gadden_FuseReactiveEach_Limit_Property__Set1_fn;
    return type;
}

// public gadden_FuseReactiveEach_Limit_Property(Fuse.Reactive.Each obj, Uno.UX.Selector name) :84
void gadden_FuseReactiveEach_Limit_Property__ctor_3_fn(gadden_FuseReactiveEach_Limit_Property* __this, ::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed int Get(Uno.UX.PropertyObject obj) :86
void gadden_FuseReactiveEach_Limit_Property__Get1_fn(gadden_FuseReactiveEach_Limit_Property* __this, ::g::Uno::UX::PropertyObject* obj, int* __retval)
{
    uStackFrame __("gadden_FuseReactiveEach_Limit_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Reactive::Each*>(obj, ::TYPES[0/*Fuse.Reactive.Each*/]))->Limit1(), void();
}

// public gadden_FuseReactiveEach_Limit_Property New(Fuse.Reactive.Each obj, Uno.UX.Selector name) :84
void gadden_FuseReactiveEach_Limit_Property__New1_fn(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector* name, gadden_FuseReactiveEach_Limit_Property** __retval)
{
    *__retval = gadden_FuseReactiveEach_Limit_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :85
void gadden_FuseReactiveEach_Limit_Property__get_Object_fn(gadden_FuseReactiveEach_Limit_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, int v, Uno.UX.IPropertyListener origin) :87
void gadden_FuseReactiveEach_Limit_Property__Set1_fn(gadden_FuseReactiveEach_Limit_Property* __this, ::g::Uno::UX::PropertyObject* obj, int* v, uObject* origin)
{
    uStackFrame __("gadden_FuseReactiveEach_Limit_Property", "Set(Uno.UX.PropertyObject,int,Uno.UX.IPropertyListener)");
    int v_ = *v;
    uPtr(uCast< ::g::Fuse::Reactive::Each*>(obj, ::TYPES[0/*Fuse.Reactive.Each*/]))->Limit1(v_);
}

// public gadden_FuseReactiveEach_Limit_Property(Fuse.Reactive.Each obj, Uno.UX.Selector name) [instance] :84
void gadden_FuseReactiveEach_Limit_Property::ctor_3(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public gadden_FuseReactiveEach_Limit_Property New(Fuse.Reactive.Each obj, Uno.UX.Selector name) [static] :84
gadden_FuseReactiveEach_Limit_Property* gadden_FuseReactiveEach_Limit_Property::New1(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector name)
{
    gadden_FuseReactiveEach_Limit_Property* obj1 = (gadden_FuseReactiveEach_Limit_Property*)uNew(gadden_FuseReactiveEach_Limit_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
