// This file was generated based on '../../../Library/Application Support/Fusetools/Packages/Fuse.Reactive.Bindings/1.1.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IListener.h>
#include <Fuse.Reactive.UnaryOperator.Subscription.h>
#include <Uno.IDisposable.h>
#include <Uno.UX.Selector.h>
namespace g{namespace Fuse{namespace Reactive{struct Instantiator;}}}
namespace g{namespace Fuse{namespace Reactive{struct InstantiatorFunction;}}}
namespace g{namespace Fuse{namespace Reactive{struct InstantiatorFunction__InstantiatorSubscription;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class InstantiatorFunction.InstantiatorSubscription :1721
// {
::g::Fuse::Reactive::UnaryOperator__Subscription_type* InstantiatorFunction__InstantiatorSubscription_typeof();
void InstantiatorFunction__InstantiatorSubscription__ctor_2_fn(InstantiatorFunction__InstantiatorSubscription* __this, ::g::Fuse::Reactive::InstantiatorFunction* expr, ::g::Uno::UX::Selector* item, uObject* listener, uObject* context);
void InstantiatorFunction__InstantiatorSubscription__Dispose_fn(InstantiatorFunction__InstantiatorSubscription* __this);
void InstantiatorFunction__InstantiatorSubscription__New2_fn(::g::Fuse::Reactive::InstantiatorFunction* expr, ::g::Uno::UX::Selector* item, uObject* listener, uObject* context, InstantiatorFunction__InstantiatorSubscription** __retval);
void InstantiatorFunction__InstantiatorSubscription__OnNewOperand_fn(InstantiatorFunction__InstantiatorSubscription* __this, uObject* obj);
void InstantiatorFunction__InstantiatorSubscription__OnUpdatedWindowItems_fn(InstantiatorFunction__InstantiatorSubscription* __this);
void InstantiatorFunction__InstantiatorSubscription__PushValue_fn(InstantiatorFunction__InstantiatorSubscription* __this);

struct InstantiatorFunction__InstantiatorSubscription : ::g::Fuse::Reactive::UnaryOperator__Subscription
{
    uStrong<uObject*> _context;
    uStrong< ::g::Fuse::Reactive::InstantiatorFunction*> _expr;
    uStrong< ::g::Fuse::Node*> _instance;
    uStrong< ::g::Fuse::Reactive::Instantiator*> _instantiator;
    ::g::Uno::UX::Selector _item;
    uStrong<uObject*> _listener1;

    void ctor_2(::g::Fuse::Reactive::InstantiatorFunction* expr, ::g::Uno::UX::Selector item, uObject* listener, uObject* context);
    void OnUpdatedWindowItems();
    void PushValue();
    static InstantiatorFunction__InstantiatorSubscription* New2(::g::Fuse::Reactive::InstantiatorFunction* expr, ::g::Uno::UX::Selector item, uObject* listener, uObject* context);
};
// }

}}} // ::g::Fuse::Reactive
