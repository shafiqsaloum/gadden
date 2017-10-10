// This file was generated based on build/iOS/Preview/cache/ux11/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.h>
#include <_root.MainView.Template8.h>
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

// public partial sealed class MainView.Template8 :535
// {
// static Template8() :544
static void MainView__Template8__cctor__fn(uType* __type)
{
}

static void MainView__Template8_build(uType* type)
{
    type->SetFields(2,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template8, __parent1), uFieldFlagsWeak,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template8, __parentInstance1), uFieldFlagsWeak);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__Template8__New2_fn, 0, true, type, 2, ::g::MainView_typeof(), ::g::MainView_typeof()));
}

::g::Uno::UX::Template_type* MainView__Template8_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(MainView__Template8);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template8", options);
    type->fp_build_ = MainView__Template8_build;
    type->fp_cctor_ = MainView__Template8__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainView__Template8__New1_fn;
    return type;
}

// public Template8(MainView parent, MainView parentInstance) :539
void MainView__Template8__ctor_1_fn(MainView__Template8* __this, ::g::MainView* parent, ::g::MainView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :547
void MainView__Template8__New1_fn(MainView__Template8* __this, uObject** __retval)
{
    uStackFrame __("MainView.Template8", "New()");
    ::g::Fuse::Controls::Rectangle* __self1 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    __self1->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    __self1->Height(::g::Uno::UX::Size__New1(1.0f, 3));
    __self1->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 20.0f));
    __self1->SnapToPixels(true);
    __self1->Fill(temp);
    return *__retval = __self1, void();
}

// public Template8 New(MainView parent, MainView parentInstance) :539
void MainView__Template8__New2_fn(::g::MainView* parent, ::g::MainView* parentInstance, MainView__Template8** __retval)
{
    *__retval = MainView__Template8::New2(parent, parentInstance);
}

// public Template8(MainView parent, MainView parentInstance) [instance] :539
void MainView__Template8::ctor_1(::g::MainView* parent, ::g::MainView* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template8 New(MainView parent, MainView parentInstance) [static] :539
MainView__Template8* MainView__Template8::New2(::g::MainView* parent, ::g::MainView* parentInstance)
{
    MainView__Template8* obj1 = (MainView__Template8*)uNew(MainView__Template8_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
