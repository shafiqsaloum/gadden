// This file was generated based on '../../../Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.1.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct TestDeferredManager;}}

namespace g{
namespace Fuse{

// internal static class TestDeferredManager :931
// {
uClassType* TestDeferredManager_typeof();
void TestDeferredManager__get_HasPending_fn(bool* __retval);

struct TestDeferredManager : uObject
{
    static bool HasPending();
};
// }

}} // ::g::Fuse
