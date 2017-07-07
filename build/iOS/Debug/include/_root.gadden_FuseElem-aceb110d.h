// This file was generated based on '.uno/ux11/gadden.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct gadden_FuseElementsElement_Opacity_Property;}

namespace g{

// internal sealed class gadden_FuseElementsElement_Opacity_Property :39
// {
::g::Uno::UX::Property1_type* gadden_FuseElementsElement_Opacity_Property_typeof();
void gadden_FuseElementsElement_Opacity_Property__ctor_3_fn(gadden_FuseElementsElement_Opacity_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name);
void gadden_FuseElementsElement_Opacity_Property__Get1_fn(gadden_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval);
void gadden_FuseElementsElement_Opacity_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, gadden_FuseElementsElement_Opacity_Property** __retval);
void gadden_FuseElementsElement_Opacity_Property__get_Object_fn(gadden_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void gadden_FuseElementsElement_Opacity_Property__Set1_fn(gadden_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin);
void gadden_FuseElementsElement_Opacity_Property__get_SupportsOriginSetter_fn(gadden_FuseElementsElement_Opacity_Property* __this, bool* __retval);

struct gadden_FuseElementsElement_Opacity_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Elements::Element*> _obj;

    void ctor_3(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
    static gadden_FuseElementsElement_Opacity_Property* New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
