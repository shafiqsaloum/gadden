// This file was generated based on /Users/ericaglimsholt/Documents/Skola/Handelsmarketing/Gadden/gadden/build/iOS/Preview/cache/ux11/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.h>
#include <_root.MainView.Template7.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>

namespace g{

// public partial sealed class MainView.Template7 :485
// {
// static Template7() :494
static void MainView__Template7__cctor__fn(uType* __type)
{
}

static void MainView__Template7_build(uType* type)
{
    type->SetFields(2,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template7, __parent1), uFieldFlagsWeak,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template7, __parentInstance1), uFieldFlagsWeak);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__Template7__New2_fn, 0, true, type, 2, ::g::MainView_typeof(), ::g::MainView_typeof()));
}

::g::Uno::UX::Template_type* MainView__Template7_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(MainView__Template7);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template7", options);
    type->fp_build_ = MainView__Template7_build;
    type->fp_cctor_ = MainView__Template7__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainView__Template7__New1_fn;
    return type;
}

// public Template7(MainView parent, MainView parentInstance) :489
void MainView__Template7__ctor_1_fn(MainView__Template7* __this, ::g::MainView* parent, ::g::MainView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :497
void MainView__Template7__New1_fn(MainView__Template7* __this, uObject** __retval)
{
    uStackFrame __("MainView.Template7", "New()");
    ::g::Fuse::Controls::Rectangle* __self1 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    __self1->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    __self1->Height(::g::Uno::UX::Size__New1(1.0f, 3));
    __self1->Margin(::g::Uno::Float4__New2(0.0f, 7.0f, 0.0f, 7.0f));
    __self1->SnapToPixels(true);
    __self1->Fill(temp);
    return *__retval = __self1, void();
}

// public Template7 New(MainView parent, MainView parentInstance) :489
void MainView__Template7__New2_fn(::g::MainView* parent, ::g::MainView* parentInstance, MainView__Template7** __retval)
{
    *__retval = MainView__Template7::New2(parent, parentInstance);
}

// public Template7(MainView parent, MainView parentInstance) [instance] :489
void MainView__Template7::ctor_1(::g::MainView* parent, ::g::MainView* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template7 New(MainView parent, MainView parentInstance) [static] :489
MainView__Template7* MainView__Template7::New2(::g::MainView* parent, ::g::MainView* parentInstance)
{
    MainView__Template7* obj1 = (MainView__Template7*)uNew(MainView__Template7_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
