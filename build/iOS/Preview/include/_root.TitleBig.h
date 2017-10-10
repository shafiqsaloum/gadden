// This file was generated based on build/iOS/Preview/cache/ux11/TitleBig.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.String.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{struct TitleBig;}

namespace g{

// public partial sealed class TitleBig :2
// {
::g::Fuse::Controls::TextControl_type* TitleBig_typeof();
void TitleBig__ctor_8_fn(TitleBig* __this);
void TitleBig__InitializeUX1_fn(TitleBig* __this);
void TitleBig__New4_fn(TitleBig** __retval);

struct TitleBig : ::g::Fuse::Controls::Text
{
    void ctor_8();
    void InitializeUX1();
    static TitleBig* New4();
};
// }

} // ::g
