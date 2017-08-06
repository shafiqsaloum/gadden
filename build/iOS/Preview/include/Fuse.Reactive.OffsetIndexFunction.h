// This file was generated based on '../../../Library/Application Support/Fusetools/Packages/Fuse.Reactive.Bindings/1.1.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.InstantiatorFunction.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct OffsetIndexFunction;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class OffsetIndexFunction :1824
// {
::g::Fuse::Reactive::UnaryOperator_type* OffsetIndexFunction_typeof();
void OffsetIndexFunction__ctor_3_fn(OffsetIndexFunction* __this, ::g::Fuse::Reactive::Expression* node);
void OffsetIndexFunction__New1_fn(::g::Fuse::Reactive::Expression* node, OffsetIndexFunction** __retval);

struct OffsetIndexFunction : ::g::Fuse::Reactive::InstantiatorFunction
{
    void ctor_3(::g::Fuse::Reactive::Expression* node);
    static OffsetIndexFunction* New1(::g::Fuse::Reactive::Expression* node);
};
// }

}}} // ::g::Fuse::Reactive
