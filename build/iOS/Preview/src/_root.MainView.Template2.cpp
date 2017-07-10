// This file was generated based on /Users/ericaglimsholt/Documents/Skola/Handelsmarketing/Gadden/gadden/build/iOS/Preview/cache/ux11/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.gadden_FuseCont-b9403983.h>
#include <_root.MainView.h>
#include <_root.MainView.Template2.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.Interac-8b35c528.h>
#include <Fuse.Gestures.PanGesture.h>
#include <Fuse.Gestures.ZoomGesture.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[3];
static uType* TYPES[4];

namespace g{

// public partial sealed class MainView.Template2 :114
// {
// static Template2() :129
static void MainView__Template2__cctor__fn(uType* __type)
{
    MainView__Template2::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 1, ::STRINGS[0/*"imgtransform"*/]);
    MainView__Template2::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Url"*/]);
    MainView__Template2::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"imgtransform"*/]);
}

static void MainView__Template2_build(uType* type)
{
    ::STRINGS[0] = uString::Const("imgtransform");
    ::STRINGS[1] = uString::Const("Url");
    ::STRINGS[2] = uString::Const("image");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetFields(2,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::MainView__Template2, __g_nametable1), 0,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template2, __parent1), uFieldFlagsWeak,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template2, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView__Template2, __self_Url_inst1), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::MainView__Template2::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView__Template2::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView__Template2::__selector1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__Template2__New2_fn, 0, true, type, 2, ::g::MainView_typeof(), ::g::MainView_typeof()));
}

::g::Uno::UX::Template_type* MainView__Template2_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(MainView__Template2);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template2", options);
    type->fp_build_ = MainView__Template2_build;
    type->fp_cctor_ = MainView__Template2__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainView__Template2__New1_fn;
    return type;
}

// public Template2(MainView parent, MainView parentInstance) :118
void MainView__Template2__ctor_1_fn(MainView__Template2* __this, ::g::MainView* parent, ::g::MainView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :132
void MainView__Template2__New1_fn(MainView__Template2* __this, uObject** __retval)
{
    uStackFrame __("MainView.Template2", "New()");
    ::g::Fuse::Controls::Image* __self1 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Elements::InteractiveTransform* imgtransform1 = ::g::Fuse::Elements::InteractiveTransform::New2();
    __this->__self_Url_inst1 = ::g::gadden_FuseControlsImage_Url_Property::New1(__self1, MainView__Template2::__selector0());
    ::g::Fuse::Reactive::Data* temp = ::g::Fuse::Reactive::Data::New1(::STRINGS[2/*"image"*/]);
    __this->__g_nametable1 = ::g::Uno::UX::NameTable::New1(uPtr(__this->__parent1)->__g_nametable1, MainView__Template2::__g_static_nametable1());
    ::g::Fuse::Gestures::PanGesture* temp1 = ::g::Fuse::Gestures::PanGesture::New2(imgtransform1);
    ::g::Fuse::Gestures::ZoomGesture* temp2 = ::g::Fuse::Gestures::ZoomGesture::New2(imgtransform1);
    ::g::Fuse::Reactive::DataBinding* temp3 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_Url_inst1, (uObject*)temp, __this->__g_nametable1, 3);
    __self1->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    __self1->Alignment(5);
    __self1->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    imgtransform1->Name(MainView__Template2::__selector1());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->__g_nametable1)->Objects()), ::TYPES[1/*Uno.Collections.ICollection<object>*/]), imgtransform1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), imgtransform1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp3);
    return *__retval = __self1, void();
}

// public Template2 New(MainView parent, MainView parentInstance) :118
void MainView__Template2__New2_fn(::g::MainView* parent, ::g::MainView* parentInstance, MainView__Template2** __retval)
{
    *__retval = MainView__Template2::New2(parent, parentInstance);
}

uSStrong<uArray*> MainView__Template2::__g_static_nametable1_;
::g::Uno::UX::Selector MainView__Template2::__selector0_;
::g::Uno::UX::Selector MainView__Template2::__selector1_;

// public Template2(MainView parent, MainView parentInstance) [instance] :118
void MainView__Template2::ctor_1(::g::MainView* parent, ::g::MainView* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template2 New(MainView parent, MainView parentInstance) [static] :118
MainView__Template2* MainView__Template2::New2(::g::MainView* parent, ::g::MainView* parentInstance)
{
    MainView__Template2* obj1 = (MainView__Template2*)uNew(MainView__Template2_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
