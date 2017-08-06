// This file was generated based on build/iOS/Preview/cache/ux11/Hamburger.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{struct Hamburger;}

namespace g{

// public partial sealed class Hamburger :2
// {
::g::Fuse::Controls::Panel_type* Hamburger_typeof();
void Hamburger__ctor_8_fn(Hamburger* __this);
void Hamburger__InitializeUX_fn(Hamburger* __this);
void Hamburger__New5_fn(Hamburger** __retval);

struct Hamburger : ::g::Fuse::Controls::StackPanel
{
    void ctor_8();
    void InitializeUX();
    static Hamburger* New5();
};
// }

} // ::g
