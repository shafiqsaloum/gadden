// This file was generated based on /Users/ericaglimsholt/Documents/Skola/Handelsmarketing/Gadden/gadden/build/iOS/Preview/cache/ux11/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.gadden_FuseCont-44c720e0.h>
#include <_root.gadden_FuseCont-b48cdba6.h>
#include <_root.MainView.h>
#include <_root.MainView.Template5.h>
#include <_root.Paragraph.h>
#include <_root.TitleBig.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
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
static uType* TYPES[3];

namespace g{

// public partial sealed class MainView.Template5 :254
// {
// static Template5() :268
static void MainView__Template5__cctor__fn(uType* __type)
{
    MainView__Template5::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 0);
    MainView__Template5::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
}

static void MainView__Template5_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("title");
    ::STRINGS[2] = uString::Const("content");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetFields(2,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::MainView__Template5, __g_nametable1), 0,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template5, __parent1), uFieldFlagsWeak,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template5, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView__Template5, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView__Template5, temp1_Value_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::MainView__Template5::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView__Template5::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__Template5__New2_fn, 0, true, type, 2, ::g::MainView_typeof(), ::g::MainView_typeof()));
}

::g::Uno::UX::Template_type* MainView__Template5_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(MainView__Template5);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template5", options);
    type->fp_build_ = MainView__Template5_build;
    type->fp_cctor_ = MainView__Template5__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainView__Template5__New1_fn;
    return type;
}

// public Template5(MainView parent, MainView parentInstance) :258
void MainView__Template5__ctor_1_fn(MainView__Template5* __this, ::g::MainView* parent, ::g::MainView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :271
void MainView__Template5__New1_fn(MainView__Template5* __this, uObject** __retval)
{
    uStackFrame __("MainView.Template5", "New()");
    ::g::Fuse::Controls::StackPanel* __self1 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::TitleBig* temp = ::g::TitleBig::New4();
    __this->temp_Value_inst = ::g::gadden_FuseControlsTextControl_Value_Property::New1(temp, MainView__Template5::__selector0());
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[1/*"title"*/]);
    __this->__g_nametable1 = ::g::Uno::UX::NameTable::New1(uPtr(__this->__parent1)->__g_nametable1, MainView__Template5::__g_static_nametable1());
    ::g::Paragraph* temp1 = ::g::Paragraph::New4();
    __this->temp1_Value_inst = ::g::gadden_FuseControlsTextInputControl_Value_Property::New1(temp1, MainView__Template5::__selector0());
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[2/*"content"*/]);
    ::g::Fuse::Reactive::DataBinding* temp4 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Value_inst, (uObject*)temp2, __this->__g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp5 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp6 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    ::g::Fuse::Reactive::DataBinding* temp7 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp1_Value_inst, (uObject*)temp3, __this->__g_nametable1, 3);
    __self1->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp->TextWrapping(1);
    temp->LineSpacing(10.0f);
    temp->TextAlignment(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp4);
    temp5->Width(::g::Uno::UX::Size__New1(120.0f, 1));
    temp5->Height(::g::Uno::UX::Size__New1(1.0f, 3));
    temp5->Alignment(6);
    temp5->Margin(::g::Uno::Float4__New2(0.0f, 30.0f, 0.0f, 30.0f));
    temp5->Fill(temp6);
    temp1->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp1->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp1->Alignment(10);
    temp1->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    return *__retval = __self1, void();
}

// public Template5 New(MainView parent, MainView parentInstance) :258
void MainView__Template5__New2_fn(::g::MainView* parent, ::g::MainView* parentInstance, MainView__Template5** __retval)
{
    *__retval = MainView__Template5::New2(parent, parentInstance);
}

uSStrong<uArray*> MainView__Template5::__g_static_nametable1_;
::g::Uno::UX::Selector MainView__Template5::__selector0_;

// public Template5(MainView parent, MainView parentInstance) [instance] :258
void MainView__Template5::ctor_1(::g::MainView* parent, ::g::MainView* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template5 New(MainView parent, MainView parentInstance) [static] :258
MainView__Template5* MainView__Template5::New2(::g::MainView* parent, ::g::MainView* parentInstance)
{
    MainView__Template5* obj1 = (MainView__Template5*)uNew(MainView__Template5_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
