// This file was generated based on '/Users/ericaglimsholt/Documents/Skola/Handels marketing/Gadden/gadden/build/iOS/Preview/cache/ux11/ListItem.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct ListItem;}
namespace g{struct ListItem__Template;}

namespace g{

// public partial sealed class ListItem.Template :5
// {
::g::Uno::UX::Template_type* ListItem__Template_typeof();
void ListItem__Template__ctor_1_fn(ListItem__Template* __this, ::g::ListItem* parent, ::g::ListItem* parentInstance);
void ListItem__Template__New1_fn(ListItem__Template* __this, uObject** __retval);
void ListItem__Template__New2_fn(::g::ListItem* parent, ::g::ListItem* parentInstance, ListItem__Template** __retval);

struct ListItem__Template : ::g::Uno::UX::Template
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return ListItem__Template_typeof()->Init(), __g_static_nametable1_; }
    uWeak< ::g::ListItem*> __parent1;
    uWeak< ::g::ListItem*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return ListItem__Template_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return ListItem__Template_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return ListItem__Template_typeof()->Init(), __selector2_; }
    uStrong< ::g::Uno::UX::Property1*> __self_Opacity_inst1;
    uStrong< ::g::Uno::UX::Property1*> temp_Url_inst;

    void ctor_1(::g::ListItem* parent, ::g::ListItem* parentInstance);
    static ListItem__Template* New2(::g::ListItem* parent, ::g::ListItem* parentInstance);
};
// }

} // ::g
