// This file was generated based on '/Users/ericaglimsholt/Documents/Skola/Handels marketing/Gadden/gadden/build/iOS/Preview/cache/ux11/ListItem.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{struct ListItem;}

namespace g{

// public partial sealed class ListItem :2
// {
::g::Fuse::Controls::Control_type* ListItem_typeof();
void ListItem__ctor_7_fn(ListItem* __this);
void ListItem__InitializeUX_fn(ListItem* __this);
void ListItem__New4_fn(ListItem** __retval);

struct ListItem : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return ListItem_typeof()->Init(), __g_static_nametable1_; }

    void ctor_7();
    void InitializeUX();
    static ListItem* New4();
};
// }

} // ::g
