// This file was generated based on '../../../Library/Application Support/Fusetools/Packages/Fuse.Animations/1.1.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Animations{

// internal abstract interface IUnwrappedPlayerFeedback :4124
// {
uInterfaceType* IUnwrappedPlayerFeedback_typeof();

struct IUnwrappedPlayerFeedback
{
    void(*fp_OnProgressUpdated)(uObject*, uObject*, double*, double*, int*);
    static void OnProgressUpdated(const uInterface& __this, uObject* s, double prev, double next, int flags) { __this.VTable<IUnwrappedPlayerFeedback>()->fp_OnProgressUpdated(__this, s, &prev, &next, &flags); }
};
// }

}}} // ::g::Fuse::Animations
