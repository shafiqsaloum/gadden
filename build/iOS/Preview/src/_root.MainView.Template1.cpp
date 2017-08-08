// This file was generated based on /Users/ericaglimsholt/Documents/Skola/Handelsmarketing/Gadden/gadden/build/iOS/Preview/cache/ux11/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.gadden_FuseCont-44c720e0.h>
#include <_root.gadden_FuseCont-b48cdba6.h>
#include <_root.gadden_FuseCont-b9403983.h>
#include <_root.gadden_FuseTrig-1a6a035e.h>
#include <_root.MainView.h>
#include <_root.MainView.Template1.h>
#include <_root.Paragraph.h>
#include <_root.TitleBig.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.Brushes.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Triggers.Actions-57f7a0e.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.Trigger.h>
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
static uString* STRINGS[9];
static uType* TYPES[5];

namespace g{

// public partial sealed class MainView.Template1 :68
// {
// static Template1() :86
static void MainView__Template1__cctor__fn(uType* __type)
{
    MainView__Template1::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 0);
    MainView__Template1::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Url"*/]);
    MainView__Template1::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Value"*/]);
    MainView__Template1::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Uri"*/]);
}

static void MainView__Template1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Url");
    ::STRINGS[1] = uString::Const("Value");
    ::STRINGS[2] = uString::Const("Uri");
    ::STRINGS[3] = uString::Const("image");
    ::STRINGS[4] = uString::Const("logo");
    ::STRINGS[5] = uString::Const("title");
    ::STRINGS[6] = uString::Const("text");
    ::STRINGS[7] = uString::Const("link");
    ::STRINGS[8] = uString::Const("L\303\204S MER");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    type->SetFields(2,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::MainView__Template1, __g_nametable1), 0,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template1, __parent1), uFieldFlagsWeak,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template1, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView__Template1, temp_Url_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView__Template1, temp1_Url_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView__Template1, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView__Template1, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView__Template1, temp4_Uri_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView__Template1, temp5_Value_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::MainView__Template1::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView__Template1::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView__Template1::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView__Template1::__selector2_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__Template1__New2_fn, 0, true, type, 2, ::g::MainView_typeof(), ::g::MainView_typeof()));
}

::g::Uno::UX::Template_type* MainView__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 15;
    options.ObjectSize = sizeof(MainView__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template1", options);
    type->fp_build_ = MainView__Template1_build;
    type->fp_cctor_ = MainView__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainView__Template1__New1_fn;
    return type;
}

// public Template1(MainView parent, MainView parentInstance) :72
void MainView__Template1__ctor_1_fn(MainView__Template1* __this, ::g::MainView* parent, ::g::MainView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :89
void MainView__Template1__New1_fn(MainView__Template1* __this, uObject** __retval)
{
    uStackFrame __("MainView.Template1", "New()");
    ::g::Fuse::Controls::StackPanel* __self1 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp = ::g::Fuse::Controls::Image::New3();
    __this->temp_Url_inst = ::g::gadden_FuseControlsImage_Url_Property::New1(temp, MainView__Template1::__selector0());
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[3/*"image"*/]);
    __this->__g_nametable1 = ::g::Uno::UX::NameTable::New1(uPtr(__this->__parent1)->__g_nametable1, MainView__Template1::__g_static_nametable1());
    ::g::Fuse::Controls::Image* temp1 = ::g::Fuse::Controls::Image::New3();
    __this->temp1_Url_inst = ::g::gadden_FuseControlsImage_Url_Property::New1(temp1, MainView__Template1::__selector0());
    ::g::Fuse::Reactive::Data* temp7 = ::g::Fuse::Reactive::Data::New1(::STRINGS[4/*"logo"*/]);
    ::g::TitleBig* temp2 = ::g::TitleBig::New4();
    __this->temp2_Value_inst = ::g::gadden_FuseControlsTextControl_Value_Property::New1(temp2, MainView__Template1::__selector1());
    ::g::Fuse::Reactive::Data* temp8 = ::g::Fuse::Reactive::Data::New1(::STRINGS[5/*"title"*/]);
    ::g::Paragraph* temp3 = ::g::Paragraph::New4();
    __this->temp3_Value_inst = ::g::gadden_FuseControlsTextInputControl_Value_Property::New1(temp3, MainView__Template1::__selector1());
    ::g::Fuse::Reactive::Data* temp9 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"text"*/]);
    ::g::Fuse::Triggers::Actions::LaunchUri* temp4 = ::g::Fuse::Triggers::Actions::LaunchUri::New2();
    __this->temp4_Uri_inst = ::g::gadden_FuseTriggersActionsLaunchUri_Uri_Property::New1(temp4, MainView__Template1::__selector2());
    ::g::Fuse::Reactive::Data* temp10 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"link"*/]);
    ::g::Paragraph* temp5 = ::g::Paragraph::New4();
    __this->temp5_Value_inst = ::g::gadden_FuseControlsTextInputControl_Value_Property::New1(temp5, MainView__Template1::__selector1());
    ::g::Fuse::Reactive::Data* temp11 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"link"*/]);
    ::g::Fuse::Reactive::DataBinding* temp12 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Url_inst, (uObject*)temp6, __this->__g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp13 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp1_Url_inst, (uObject*)temp7, __this->__g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp14 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp2_Value_inst, (uObject*)temp8, __this->__g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp15 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp3_Value_inst, (uObject*)temp9, __this->__g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp16 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp17 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Paragraph* temp18 = ::g::Paragraph::New4();
    ::g::Fuse::Gestures::Clicked* temp19 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Reactive::DataBinding* temp20 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp4_Uri_inst, (uObject*)temp10, __this->__g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp21 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp5_Value_inst, (uObject*)temp11, __this->__g_nametable1, 3);
    __self1->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 10.0f));
    temp->StretchMode(6);
    temp->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp->Height(::g::Uno::UX::Size__New1(200.0f, 1));
    temp->Alignment(4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp12);
    temp1->StretchMode(6);
    temp1->MaxHeight(::g::Uno::UX::Size__New1(40.0f, 1));
    temp1->Alignment(5);
    temp1->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 0.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp13);
    temp2->Alignment(5);
    temp2->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp14);
    temp3->IsReadOnly(true);
    temp3->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp15);
    temp16->Width(::g::Uno::UX::Size__New1(40.0f, 4));
    temp16->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    temp16->Alignment(5);
    temp16->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    temp16->Background(::g::Fuse::Drawing::Brushes::Black());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Strokes()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    temp17->Color(::g::Fuse::Drawing::Colors::White());
    temp17->Width(1.0f);
    temp18->Value(::STRINGS[8/*"LÄS MER"*/]);
    temp18->IsReadOnly(true);
    temp18->Alignment(10);
    temp5->IsReadOnly(true);
    temp5->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    return *__retval = __self1, void();
}

// public Template1 New(MainView parent, MainView parentInstance) :72
void MainView__Template1__New2_fn(::g::MainView* parent, ::g::MainView* parentInstance, MainView__Template1** __retval)
{
    *__retval = MainView__Template1::New2(parent, parentInstance);
}

uSStrong<uArray*> MainView__Template1::__g_static_nametable1_;
::g::Uno::UX::Selector MainView__Template1::__selector0_;
::g::Uno::UX::Selector MainView__Template1::__selector1_;
::g::Uno::UX::Selector MainView__Template1::__selector2_;

// public Template1(MainView parent, MainView parentInstance) [instance] :72
void MainView__Template1::ctor_1(::g::MainView* parent, ::g::MainView* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template1 New(MainView parent, MainView parentInstance) [static] :72
MainView__Template1* MainView__Template1::New2(::g::MainView* parent, ::g::MainView* parentInstance)
{
    MainView__Template1* obj1 = (MainView__Template1*)uNew(MainView__Template1_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
