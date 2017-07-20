// This file was generated based on /Users/ericaglimsholt/Documents/Skola/Handelsmarketing/Gadden/gadden/build/iOS/Preview/cache/ux11/gadden.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.Brush.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct Control;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct gadden_FuseControlsControl_Background_Property;}

namespace g{

// internal sealed class gadden_FuseControlsControl_Background_Property :124
// {
::g::Uno::UX::Property1_type* gadden_FuseControlsControl_Background_Property_typeof();
void gadden_FuseControlsControl_Background_Property__ctor_3_fn(gadden_FuseControlsControl_Background_Property* __this, ::g::Fuse::Controls::Control* obj, ::g::Uno::UX::Selector* name);
void gadden_FuseControlsControl_Background_Property__Get1_fn(gadden_FuseControlsControl_Background_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush** __retval);
void gadden_FuseControlsControl_Background_Property__New1_fn(::g::Fuse::Controls::Control* obj, ::g::Uno::UX::Selector* name, gadden_FuseControlsControl_Background_Property** __retval);
void gadden_FuseControlsControl_Background_Property__get_Object_fn(gadden_FuseControlsControl_Background_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void gadden_FuseControlsControl_Background_Property__Set1_fn(gadden_FuseControlsControl_Background_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush* v, uObject* origin);

struct gadden_FuseControlsControl_Background_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::Control*> _obj;

    void ctor_3(::g::Fuse::Controls::Control* obj, ::g::Uno::UX::Selector name);
    static gadden_FuseControlsControl_Background_Property* New1(::g::Fuse::Controls::Control* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
