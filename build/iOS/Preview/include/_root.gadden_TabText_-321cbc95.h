// This file was generated based on /Users/ericaglimsholt/Documents/Skola/Handelsmarketing/Gadden/gadden/build/iOS/Preview/cache/ux11/gadden.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct gadden_TabText_Text_Property;}
namespace g{struct TabText;}

namespace g{

// internal sealed class gadden_TabText_Text_Property :182
// {
::g::Uno::UX::Property1_type* gadden_TabText_Text_Property_typeof();
void gadden_TabText_Text_Property__ctor_3_fn(gadden_TabText_Text_Property* __this, ::g::TabText* obj, ::g::Uno::UX::Selector* name);
void gadden_TabText_Text_Property__Get1_fn(gadden_TabText_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void gadden_TabText_Text_Property__New1_fn(::g::TabText* obj, ::g::Uno::UX::Selector* name, gadden_TabText_Text_Property** __retval);
void gadden_TabText_Text_Property__get_Object_fn(gadden_TabText_Text_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void gadden_TabText_Text_Property__Set1_fn(gadden_TabText_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);
void gadden_TabText_Text_Property__get_SupportsOriginSetter_fn(gadden_TabText_Text_Property* __this, bool* __retval);

struct gadden_TabText_Text_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::TabText*> _obj;

    void ctor_3(::g::TabText* obj, ::g::Uno::UX::Selector name);
    static gadden_TabText_Text_Property* New1(::g::TabText* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
