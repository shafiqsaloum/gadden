// This file was generated based on '../../../Library/Application Support/Fusetools/Packages/Fuse.Reactive.Bindings/1.1.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.InstantiatorFunction.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct IndexFunction;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class IndexFunction :1812
// {
::g::Fuse::Reactive::UnaryOperator_type* IndexFunction_typeof();
void IndexFunction__ctor_3_fn(IndexFunction* __this, ::g::Fuse::Reactive::Expression* node);
void IndexFunction__New1_fn(::g::Fuse::Reactive::Expression* node, IndexFunction** __retval);

struct IndexFunction : ::g::Fuse::Reactive::InstantiatorFunction
{
    void ctor_3(::g::Fuse::Reactive::Expression* node);
    static IndexFunction* New1(::g::Fuse::Reactive::Expression* node);
};
// }

}}} // ::g::Fuse::Reactive
