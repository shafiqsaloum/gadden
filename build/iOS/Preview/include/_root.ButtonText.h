// This file was generated based on build/iOS/Preview/cache/ux11/ButtonText.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.String.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{struct ButtonText;}

namespace g{

// public partial sealed class ButtonText :2
// {
::g::Fuse::Controls::TextControl_type* ButtonText_typeof();
void ButtonText__ctor_8_fn(ButtonText* __this);
void ButtonText__InitializeUX1_fn(ButtonText* __this);
void ButtonText__New4_fn(ButtonText** __retval);

struct ButtonText : ::g::Fuse::Controls::Text
{
    void ctor_8();
    void InitializeUX1();
    static ButtonText* New4();
};
// }

} // ::g
