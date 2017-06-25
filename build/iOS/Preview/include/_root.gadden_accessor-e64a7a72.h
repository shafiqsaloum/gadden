// This file was generated based on '/Users/ericaglimsholt/Documents/Skola/Handels marketing/Gadden/gadden/build/iOS/Preview/cache/ux11/gadden.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyAccessor.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct gadden_accessor_TabSponsor_Text;}

namespace g{

// internal sealed class gadden_accessor_TabSponsor_Text :11
// {
::g::Uno::UX::PropertyAccessor_type* gadden_accessor_TabSponsor_Text_typeof();
void gadden_accessor_TabSponsor_Text__ctor_1_fn(gadden_accessor_TabSponsor_Text* __this);
void gadden_accessor_TabSponsor_Text__GetAsObject_fn(gadden_accessor_TabSponsor_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void gadden_accessor_TabSponsor_Text__get_Name_fn(gadden_accessor_TabSponsor_Text* __this, ::g::Uno::UX::Selector* __retval);
void gadden_accessor_TabSponsor_Text__New1_fn(gadden_accessor_TabSponsor_Text** __retval);
void gadden_accessor_TabSponsor_Text__get_PropertyType_fn(gadden_accessor_TabSponsor_Text* __this, uType** __retval);
void gadden_accessor_TabSponsor_Text__SetAsObject_fn(gadden_accessor_TabSponsor_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void gadden_accessor_TabSponsor_Text__get_SupportsOriginSetter_fn(gadden_accessor_TabSponsor_Text* __this, bool* __retval);

struct gadden_accessor_TabSponsor_Text : ::g::Uno::UX::PropertyAccessor
{
    static ::g::Uno::UX::Selector _name_;
    static ::g::Uno::UX::Selector& _name() { return gadden_accessor_TabSponsor_Text_typeof()->Init(), _name_; }
    static uSStrong< ::g::Uno::UX::PropertyAccessor*> Singleton_;
    static uSStrong< ::g::Uno::UX::PropertyAccessor*>& Singleton() { return gadden_accessor_TabSponsor_Text_typeof()->Init(), Singleton_; }

    void ctor_1();
    static gadden_accessor_TabSponsor_Text* New1();
};
// }

} // ::g
