// This file was generated based on '../../../../../Library/Application Support/Fusetools/Packages/Fuse.Triggers/0.47.7/actions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions-fcab7e57.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct PulseForward;}}}}
namespace g{namespace Fuse{namespace Triggers{struct Timeline;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class PulseForward :613
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* PulseForward_typeof();
void PulseForward__Perform_fn(PulseForward* __this, ::g::Fuse::Node* target);
void PulseForward__get_Target_fn(PulseForward* __this, ::g::Fuse::Triggers::Timeline** __retval);
void PulseForward__set_Target_fn(PulseForward* __this, ::g::Fuse::Triggers::Timeline* value);

struct PulseForward : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong< ::g::Fuse::Triggers::Timeline*> _Target;

    ::g::Fuse::Triggers::Timeline* Target();
    void Target(::g::Fuse::Triggers::Timeline* value);
};
// }

}}}} // ::g::Fuse::Triggers::Actions