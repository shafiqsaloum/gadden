// This file was generated based on build/iOS/Preview/cache/ux11/gadden.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct gadden_TabSponsor_Text_Property;}
namespace g{struct TabSponsor;}

namespace g{

// internal sealed class gadden_TabSponsor_Text_Property :167
// {
::g::Uno::UX::Property1_type* gadden_TabSponsor_Text_Property_typeof();
void gadden_TabSponsor_Text_Property__ctor_3_fn(gadden_TabSponsor_Text_Property* __this, ::g::TabSponsor* obj, ::g::Uno::UX::Selector* name);
void gadden_TabSponsor_Text_Property__Get1_fn(gadden_TabSponsor_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void gadden_TabSponsor_Text_Property__New1_fn(::g::TabSponsor* obj, ::g::Uno::UX::Selector* name, gadden_TabSponsor_Text_Property** __retval);
void gadden_TabSponsor_Text_Property__get_Object_fn(gadden_TabSponsor_Text_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void gadden_TabSponsor_Text_Property__Set1_fn(gadden_TabSponsor_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);
void gadden_TabSponsor_Text_Property__get_SupportsOriginSetter_fn(gadden_TabSponsor_Text_Property* __this, bool* __retval);

struct gadden_TabSponsor_Text_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::TabSponsor*> _obj;

    void ctor_3(::g::TabSponsor* obj, ::g::Uno::UX::Selector name);
    static gadden_TabSponsor_Text_Property* New1(::g::TabSponsor* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
