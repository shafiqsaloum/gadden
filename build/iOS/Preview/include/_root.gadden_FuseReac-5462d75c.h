// This file was generated based on /Users/ericaglimsholt/Documents/Skola/Handelsmarketing/Gadden/gadden/build/iOS/Preview/cache/ux11/gadden.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Reactive{struct With;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct gadden_FuseReactiveWith_Data_Property;}

namespace g{

// internal sealed class gadden_FuseReactiveWith_Data_Property :99
// {
::g::Uno::UX::Property1_type* gadden_FuseReactiveWith_Data_Property_typeof();
void gadden_FuseReactiveWith_Data_Property__ctor_3_fn(gadden_FuseReactiveWith_Data_Property* __this, ::g::Fuse::Reactive::With* obj, ::g::Uno::UX::Selector* name);
void gadden_FuseReactiveWith_Data_Property__Get1_fn(gadden_FuseReactiveWith_Data_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void gadden_FuseReactiveWith_Data_Property__New1_fn(::g::Fuse::Reactive::With* obj, ::g::Uno::UX::Selector* name, gadden_FuseReactiveWith_Data_Property** __retval);
void gadden_FuseReactiveWith_Data_Property__get_Object_fn(gadden_FuseReactiveWith_Data_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void gadden_FuseReactiveWith_Data_Property__Set1_fn(gadden_FuseReactiveWith_Data_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);

struct gadden_FuseReactiveWith_Data_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Reactive::With*> _obj;

    void ctor_3(::g::Fuse::Reactive::With* obj, ::g::Uno::UX::Selector name);
    static gadden_FuseReactiveWith_Data_Property* New1(::g::Fuse::Reactive::With* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
