// This file was generated based on /Users/ericaglimsholt/Documents/Skola/Handelsmarketing/Gadden/gadden/build/iOS/Preview/cache/ux11/gadden.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.gadden_FuseCont-bdb3f9e0.h>
#include <Fuse.Controls.Control.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class gadden_FuseControlsControl_Background_Property :132
// {
static void gadden_FuseControlsControl_Background_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::Control_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Controls.Control*/], offsetof(::g::gadden_FuseControlsControl_Background_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* gadden_FuseControlsControl_Background_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(gadden_FuseControlsControl_Background_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("gadden_FuseControlsControl_Background_Property", options);
    type->fp_build_ = gadden_FuseControlsControl_Background_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))gadden_FuseControlsControl_Background_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))gadden_FuseControlsControl_Background_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))gadden_FuseControlsControl_Background_Property__Set1_fn;
    return type;
}

// public gadden_FuseControlsControl_Background_Property(Fuse.Controls.Control obj, Uno.UX.Selector name) :135
void gadden_FuseControlsControl_Background_Property__ctor_3_fn(gadden_FuseControlsControl_Background_Property* __this, ::g::Fuse::Controls::Control* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed Fuse.Drawing.Brush Get(Uno.UX.PropertyObject obj) :137
void gadden_FuseControlsControl_Background_Property__Get1_fn(gadden_FuseControlsControl_Background_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush** __retval)
{
    uStackFrame __("gadden_FuseControlsControl_Background_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::Control*>(obj, ::TYPES[0/*Fuse.Controls.Control*/]))->Background(), void();
}

// public gadden_FuseControlsControl_Background_Property New(Fuse.Controls.Control obj, Uno.UX.Selector name) :135
void gadden_FuseControlsControl_Background_Property__New1_fn(::g::Fuse::Controls::Control* obj, ::g::Uno::UX::Selector* name, gadden_FuseControlsControl_Background_Property** __retval)
{
    *__retval = gadden_FuseControlsControl_Background_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :136
void gadden_FuseControlsControl_Background_Property__get_Object_fn(gadden_FuseControlsControl_Background_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Fuse.Drawing.Brush v, Uno.UX.IPropertyListener origin) :138
void gadden_FuseControlsControl_Background_Property__Set1_fn(gadden_FuseControlsControl_Background_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush* v, uObject* origin)
{
    uStackFrame __("gadden_FuseControlsControl_Background_Property", "Set(Uno.UX.PropertyObject,Fuse.Drawing.Brush,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Fuse::Controls::Control*>(obj, ::TYPES[0/*Fuse.Controls.Control*/]))->Background(v);
}

// public gadden_FuseControlsControl_Background_Property(Fuse.Controls.Control obj, Uno.UX.Selector name) [instance] :135
void gadden_FuseControlsControl_Background_Property::ctor_3(::g::Fuse::Controls::Control* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public gadden_FuseControlsControl_Background_Property New(Fuse.Controls.Control obj, Uno.UX.Selector name) [static] :135
gadden_FuseControlsControl_Background_Property* gadden_FuseControlsControl_Background_Property::New1(::g::Fuse::Controls::Control* obj, ::g::Uno::UX::Selector name)
{
    gadden_FuseControlsControl_Background_Property* obj1 = (gadden_FuseControlsControl_Background_Property*)uNew(gadden_FuseControlsControl_Background_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
