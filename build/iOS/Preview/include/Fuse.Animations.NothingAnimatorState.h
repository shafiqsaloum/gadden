// This file was generated based on '../../../Library/Application Support/Fusetools/Packages/Fuse.Animations/1.1.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.TrackAnimatorState.h>
namespace g{namespace Fuse{namespace Animations{struct CreateStateParams;}}}
namespace g{namespace Fuse{namespace Animations{struct Nothing;}}}
namespace g{namespace Fuse{namespace Animations{struct NothingAnimatorState;}}}

namespace g{
namespace Fuse{
namespace Animations{

// internal sealed class NothingAnimatorState :1951
// {
::g::Fuse::Animations::TrackAnimatorState_type* NothingAnimatorState_typeof();
void NothingAnimatorState__ctor_2_fn(NothingAnimatorState* __this, ::g::Fuse::Animations::Nothing* animator, ::g::Fuse::Animations::CreateStateParams* p);
void NothingAnimatorState__New1_fn(::g::Fuse::Animations::Nothing* animator, ::g::Fuse::Animations::CreateStateParams* p, NothingAnimatorState** __retval);

struct NothingAnimatorState : ::g::Fuse::Animations::TrackAnimatorState
{
    void ctor_2(::g::Fuse::Animations::Nothing* animator, ::g::Fuse::Animations::CreateStateParams* p);
    static NothingAnimatorState* New1(::g::Fuse::Animations::Nothing* animator, ::g::Fuse::Animations::CreateStateParams* p);
};
// }

}}} // ::g::Fuse::Animations