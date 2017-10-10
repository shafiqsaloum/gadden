// This file was generated based on build/iOS/Preview/cache/ux11/Profile.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{struct Profile;}

namespace g{

// public partial sealed class Profile :2
// {
::g::Fuse::Controls::Panel_type* Profile_typeof();
void Profile__ctor_8_fn(Profile* __this);
void Profile__InitializeUX_fn(Profile* __this);
void Profile__New5_fn(Profile** __retval);

struct Profile : ::g::Fuse::Controls::StackPanel
{
    void ctor_8();
    void InitializeUX();
    static Profile* New5();
};
// }

} // ::g
