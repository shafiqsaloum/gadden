// This file was generated based on /Users/ericaglimsholt/Documents/Skola/Handelsmarketing/Gadden/gadden/build/iOS/Preview/cache/ux11/Hamburger.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Hamburger.h>
#include <_root.Hamburger.Template.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Elements.Element.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>

namespace g{

// public partial sealed class Hamburger.Template :5
// {
// static Template() :14
static void Hamburger__Template__cctor__fn(uType* __type)
{
}

static void Hamburger__Template_build(uType* type)
{
    type->SetFields(2,
        ::g::Hamburger_typeof(), offsetof(::g::Hamburger__Template, __parent1), uFieldFlagsWeak,
        ::g::Hamburger_typeof(), offsetof(::g::Hamburger__Template, __parentInstance1), uFieldFlagsWeak);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Hamburger__Template__New2_fn, 0, true, type, 2, ::g::Hamburger_typeof(), ::g::Hamburger_typeof()));
}

::g::Uno::UX::Template_type* Hamburger__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Hamburger__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Hamburger.Template", options);
    type->fp_build_ = Hamburger__Template_build;
    type->fp_cctor_ = Hamburger__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))Hamburger__Template__New1_fn;
    return type;
}

// public Template(Hamburger parent, Hamburger parentInstance) :9
void Hamburger__Template__ctor_1_fn(Hamburger__Template* __this, ::g::Hamburger* parent, ::g::Hamburger* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :17
void Hamburger__Template__New1_fn(Hamburger__Template* __this, uObject** __retval)
{
    uStackFrame __("Hamburger.Template", "New()");
    ::g::Fuse::Controls::Rectangle* __self1 = ::g::Fuse::Controls::Rectangle::New3();
    __self1->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    __self1->Width(::g::Uno::UX::Size__New1(22.0f, 1));
    __self1->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    return *__retval = __self1, void();
}

// public Template New(Hamburger parent, Hamburger parentInstance) :9
void Hamburger__Template__New2_fn(::g::Hamburger* parent, ::g::Hamburger* parentInstance, Hamburger__Template** __retval)
{
    *__retval = Hamburger__Template::New2(parent, parentInstance);
}

// public Template(Hamburger parent, Hamburger parentInstance) [instance] :9
void Hamburger__Template::ctor_1(::g::Hamburger* parent, ::g::Hamburger* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(Hamburger parent, Hamburger parentInstance) [static] :9
Hamburger__Template* Hamburger__Template::New2(::g::Hamburger* parent, ::g::Hamburger* parentInstance)
{
    Hamburger__Template* obj1 = (Hamburger__Template*)uNew(Hamburger__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
