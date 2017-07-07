// This file was generated based on '.uno/ux11/gadden.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.gadden_FuseElem-acec0a78.h>
#include <Fuse.Controls.LayoutControl.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class gadden_FuseElementsElement_ElementLayoutMaster_Property :73
// {
static void gadden_FuseElementsElement_ElementLayoutMaster_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Elements.Element*/], offsetof(::g::gadden_FuseElementsElement_ElementLayoutMaster_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* gadden_FuseElementsElement_ElementLayoutMaster_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(gadden_FuseElementsElement_ElementLayoutMaster_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("gadden_FuseElementsElement_ElementLayoutMaster_Property", options);
    type->fp_build_ = gadden_FuseElementsElement_ElementLayoutMaster_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))gadden_FuseElementsElement_ElementLayoutMaster_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))gadden_FuseElementsElement_ElementLayoutMaster_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))gadden_FuseElementsElement_ElementLayoutMaster_Property__Set1_fn;
    return type;
}

// public gadden_FuseElementsElement_ElementLayoutMaster_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) :76
void gadden_FuseElementsElement_ElementLayoutMaster_Property__ctor_3_fn(gadden_FuseElementsElement_ElementLayoutMaster_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed Fuse.Elements.Element Get(Uno.UX.PropertyObject obj) :78
void gadden_FuseElementsElement_ElementLayoutMaster_Property__Get1_fn(gadden_FuseElementsElement_ElementLayoutMaster_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Elements::Element** __retval)
{
    return *__retval = ::g::Fuse::Controls::LayoutControl::GetLayoutMaster(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[0/*Fuse.Elements.Element*/])), void();
}

// public gadden_FuseElementsElement_ElementLayoutMaster_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) :76
void gadden_FuseElementsElement_ElementLayoutMaster_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, gadden_FuseElementsElement_ElementLayoutMaster_Property** __retval)
{
    *__retval = gadden_FuseElementsElement_ElementLayoutMaster_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :77
void gadden_FuseElementsElement_ElementLayoutMaster_Property__get_Object_fn(gadden_FuseElementsElement_ElementLayoutMaster_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Fuse.Elements.Element v, Uno.UX.IPropertyListener origin) :79
void gadden_FuseElementsElement_ElementLayoutMaster_Property__Set1_fn(gadden_FuseElementsElement_ElementLayoutMaster_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Elements::Element* v, uObject* origin)
{
    ::g::Fuse::Controls::LayoutControl::SetLayoutMaster(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[0/*Fuse.Elements.Element*/]), v);
}

// public gadden_FuseElementsElement_ElementLayoutMaster_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) [instance] :76
void gadden_FuseElementsElement_ElementLayoutMaster_Property::ctor_3(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public gadden_FuseElementsElement_ElementLayoutMaster_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) [static] :76
gadden_FuseElementsElement_ElementLayoutMaster_Property* gadden_FuseElementsElement_ElementLayoutMaster_Property::New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    gadden_FuseElementsElement_ElementLayoutMaster_Property* obj1 = (gadden_FuseElementsElement_ElementLayoutMaster_Property*)uNew(gadden_FuseElementsElement_ElementLayoutMaster_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
