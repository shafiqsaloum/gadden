// This file was generated based on /Users/ericaglimsholt/Documents/Skola/Handelsmarketing/Gadden/gadden/build/iOS/Preview/cache/ux11/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct MainView;}
namespace g{struct MainView__Template6;}

namespace g{

// public partial sealed class MainView.Template6 :389
// {
::g::Uno::UX::Template_type* MainView__Template6_typeof();
void MainView__Template6__ctor_1_fn(MainView__Template6* __this, ::g::MainView* parent, ::g::MainView* parentInstance);
void MainView__Template6__New1_fn(MainView__Template6* __this, uObject** __retval);
void MainView__Template6__New2_fn(::g::MainView* parent, ::g::MainView* parentInstance, MainView__Template6** __retval);

struct MainView__Template6 : ::g::Uno::UX::Template
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return MainView__Template6_typeof()->Init(), __g_static_nametable1_; }
    uWeak< ::g::MainView*> __parent1;
    uWeak< ::g::MainView*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return MainView__Template6_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return MainView__Template6_typeof()->Init(), __selector1_; }
    uStrong< ::g::Uno::UX::Property1*> temp_Url_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;

    void ctor_1(::g::MainView* parent, ::g::MainView* parentInstance);
    static MainView__Template6* New2(::g::MainView* parent, ::g::MainView* parentInstance);
};
// }

} // ::g
