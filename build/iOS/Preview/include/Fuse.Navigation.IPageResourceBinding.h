// This file was generated based on '../../../Library/Application Support/Fusetools/Packages/Fuse.Navigation/1.1.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Navigation{

// internal abstract interface IPageResourceBinding :1543
// {
uInterfaceType* IPageResourceBinding_typeof();

struct IPageResourceBinding
{
    void(*fp_UpdateSource)(uObject*);
    static void UpdateSource(const uInterface& __this) { __this.VTable<IPageResourceBinding>()->fp_UpdateSource(__this); }
};
// }

}}} // ::g::Fuse::Navigation
