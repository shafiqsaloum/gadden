// This file was generated based on /usr/local/share/uno/Packages/Fuse.Gestures/1.2.1/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Gestures{struct Pressed;}}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class Pressed :636
// {
::g::Fuse::Triggers::Trigger_type* Pressed_typeof();
void Pressed__ctor_5_fn(Pressed* __this);
void Pressed__New2_fn(Pressed** __retval);
void Pressed__OnPressed_fn(Pressed* __this, uObject* s, uObject* a);
void Pressed__OnRooted_fn(Pressed* __this);
void Pressed__OnUnrooted_fn(Pressed* __this);

struct Pressed : ::g::Fuse::Triggers::Trigger
{
    void ctor_5();
    void OnPressed(uObject* s, uObject* a);
    static Pressed* New2();
};
// }

}}} // ::g::Fuse::Gestures
