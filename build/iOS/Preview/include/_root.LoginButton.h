// This file was generated based on build/iOS/Preview/cache/ux11/LoginButton.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{struct LoginButton;}

namespace g{

// public partial sealed class LoginButton :2
// {
::g::Fuse::Controls::Panel_type* LoginButton_typeof();
void LoginButton__ctor_7_fn(LoginButton* __this);
void LoginButton__InitializeUX_fn(LoginButton* __this);
void LoginButton__New4_fn(LoginButton** __retval);
void LoginButton__SetText_fn(LoginButton* __this, uString* value, uObject* origin);
void LoginButton__get_Text_fn(LoginButton* __this, uString** __retval);
void LoginButton__set_Text_fn(LoginButton* __this, uString* value);

struct LoginButton : ::g::Fuse::Controls::Panel
{
    uStrong<uString*> _field_Text;

    void ctor_7();
    void InitializeUX();
    void SetText(uString* value, uObject* origin);
    uString* Text();
    void Text(uString* value);
    static LoginButton* New4();
};
// }

} // ::g
