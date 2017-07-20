// This file was generated based on /Users/ericaglimsholt/Documents/Skola/Handelsmarketing/Gadden/gadden/build/iOS/Preview/cache/ux11/gadden.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.gadden_FuseReac-5462d75c.h>
#include <Fuse.Reactive.With.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class gadden_FuseReactiveWith_Data_Property :91
// {
static void gadden_FuseReactiveWith_Data_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Reactive::With_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Reactive.With*/], offsetof(::g::gadden_FuseReactiveWith_Data_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* gadden_FuseReactiveWith_Data_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(gadden_FuseReactiveWith_Data_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("gadden_FuseReactiveWith_Data_Property", options);
    type->fp_build_ = gadden_FuseReactiveWith_Data_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))gadden_FuseReactiveWith_Data_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))gadden_FuseReactiveWith_Data_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))gadden_FuseReactiveWith_Data_Property__Set1_fn;
    return type;
}

// public gadden_FuseReactiveWith_Data_Property(Fuse.Reactive.With obj, Uno.UX.Selector name) :94
void gadden_FuseReactiveWith_Data_Property__ctor_3_fn(gadden_FuseReactiveWith_Data_Property* __this, ::g::Fuse::Reactive::With* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed object Get(Uno.UX.PropertyObject obj) :96
void gadden_FuseReactiveWith_Data_Property__Get1_fn(gadden_FuseReactiveWith_Data_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("gadden_FuseReactiveWith_Data_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Reactive::With*>(obj, ::TYPES[0/*Fuse.Reactive.With*/]))->Data(), void();
}

// public gadden_FuseReactiveWith_Data_Property New(Fuse.Reactive.With obj, Uno.UX.Selector name) :94
void gadden_FuseReactiveWith_Data_Property__New1_fn(::g::Fuse::Reactive::With* obj, ::g::Uno::UX::Selector* name, gadden_FuseReactiveWith_Data_Property** __retval)
{
    *__retval = gadden_FuseReactiveWith_Data_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :95
void gadden_FuseReactiveWith_Data_Property__get_Object_fn(gadden_FuseReactiveWith_Data_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :97
void gadden_FuseReactiveWith_Data_Property__Set1_fn(gadden_FuseReactiveWith_Data_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("gadden_FuseReactiveWith_Data_Property", "Set(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Fuse::Reactive::With*>(obj, ::TYPES[0/*Fuse.Reactive.With*/]))->Data(v);
}

// public gadden_FuseReactiveWith_Data_Property(Fuse.Reactive.With obj, Uno.UX.Selector name) [instance] :94
void gadden_FuseReactiveWith_Data_Property::ctor_3(::g::Fuse::Reactive::With* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public gadden_FuseReactiveWith_Data_Property New(Fuse.Reactive.With obj, Uno.UX.Selector name) [static] :94
gadden_FuseReactiveWith_Data_Property* gadden_FuseReactiveWith_Data_Property::New1(::g::Fuse::Reactive::With* obj, ::g::Uno::UX::Selector name)
{
    gadden_FuseReactiveWith_Data_Property* obj1 = (gadden_FuseReactiveWith_Data_Property*)uNew(gadden_FuseReactiveWith_Data_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
