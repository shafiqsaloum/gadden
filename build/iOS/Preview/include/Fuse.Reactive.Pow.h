// This file was generated based on '../../../Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/1.1.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.BinaryFloatOperator.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct Pow;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Pow :693
// {
::g::Fuse::Reactive::BinaryOperator_type* Pow_typeof();
void Pow__ctor_3_fn(Pow* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
void Pow__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, Pow** __retval);

struct Pow : ::g::Fuse::Reactive::BinaryFloatOperator
{
    void ctor_3(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
    static Pow* New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
};
// }

}}} // ::g::Fuse::Reactive