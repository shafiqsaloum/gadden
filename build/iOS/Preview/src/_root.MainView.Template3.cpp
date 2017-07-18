// This file was generated based on /Users/ericaglimsholt/Documents/Skola/Handelsmarketing/Gadden/gadden/build/iOS/Preview/cache/ux11/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.gadden_FuseCont-b48cdba6.h>
#include <_root.gadden_FuseCont-b9403983.h>
#include <_root.MainView.h>
#include <_root.MainView.Template3.h>
#include <_root.Paragraph.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.ToUpper.h>
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
static uString* STRINGS[5];
static uType* TYPES[3];

namespace g{

// public partial sealed class MainView.Template3 :168
// {
// static Template3() :183
static void MainView__Template3__cctor__fn(uType* __type)
{
    MainView__Template3::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 0);
    MainView__Template3::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Url"*/]);
    MainView__Template3::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Value"*/]);
}

static void MainView__Template3_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Url");
    ::STRINGS[1] = uString::Const("Value");
    ::STRINGS[2] = uString::Const("image");
    ::STRINGS[3] = uString::Const("name");
    ::STRINGS[4] = uString::Const("title");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetFields(2,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::MainView__Template3, __g_nametable1), 0,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template3, __parent1), uFieldFlagsWeak,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template3, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView__Template3, temp_Url_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView__Template3, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView__Template3, temp2_Value_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::MainView__Template3::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView__Template3::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView__Template3::__selector1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__Template3__New2_fn, 0, true, type, 2, ::g::MainView_typeof(), ::g::MainView_typeof()));
}

::g::Uno::UX::Template_type* MainView__Template3_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 11;
    options.ObjectSize = sizeof(MainView__Template3);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template3", options);
    type->fp_build_ = MainView__Template3_build;
    type->fp_cctor_ = MainView__Template3__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainView__Template3__New1_fn;
    return type;
}

// public Template3(MainView parent, MainView parentInstance) :172
void MainView__Template3__ctor_1_fn(MainView__Template3* __this, ::g::MainView* parent, ::g::MainView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :186
void MainView__Template3__New1_fn(MainView__Template3* __this, uObject** __retval)
{
    uStackFrame __("MainView.Template3", "New()");
    ::g::Fuse::Controls::StackPanel* __self1 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp = ::g::Fuse::Controls::Image::New3();
    __this->temp_Url_inst = ::g::gadden_FuseControlsImage_Url_Property::New1(temp, MainView__Template3::__selector0());
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[2/*"image"*/]);
    __this->__g_nametable1 = ::g::Uno::UX::NameTable::New1(uPtr(__this->__parent1)->__g_nametable1, MainView__Template3::__g_static_nametable1());
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[3/*"name"*/]);
    ::g::Paragraph* temp1 = ::g::Paragraph::New4();
    __this->temp1_Value_inst = ::g::gadden_FuseControlsTextInputControl_Value_Property::New1(temp1, MainView__Template3::__selector1());
    ::g::Fuse::Reactive::ToUpper* temp5 = ::g::Fuse::Reactive::ToUpper::New1(temp4);
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[4/*"title"*/]);
    ::g::Paragraph* temp2 = ::g::Paragraph::New4();
    __this->temp2_Value_inst = ::g::gadden_FuseControlsTextInputControl_Value_Property::New1(temp2, MainView__Template3::__selector1());
    ::g::Fuse::Reactive::ToUpper* temp7 = ::g::Fuse::Reactive::ToUpper::New1(temp6);
    ::g::Fuse::Reactive::DataBinding* temp8 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Url_inst, (uObject*)temp3, __this->__g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp9 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp1_Value_inst, (uObject*)temp5, __this->__g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp10 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp2_Value_inst, (uObject*)temp7, __this->__g_nametable1, 3);
    __self1->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp->StretchMode(6);
    temp->Width(::g::Uno::UX::Size__New1(40.0f, 4));
    temp->Height(::g::Uno::UX::Size__New1(120.0f, 1));
    temp->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp8);
    temp1->TextWrapping(1);
    temp1->LineSpacing(10.0f);
    temp1->FontSize(16.0f);
    temp1->TextAlignment(1);
    temp1->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp9);
    temp2->FontSize(12.0f);
    temp2->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    return *__retval = __self1, void();
}

// public Template3 New(MainView parent, MainView parentInstance) :172
void MainView__Template3__New2_fn(::g::MainView* parent, ::g::MainView* parentInstance, MainView__Template3** __retval)
{
    *__retval = MainView__Template3::New2(parent, parentInstance);
}

uSStrong<uArray*> MainView__Template3::__g_static_nametable1_;
::g::Uno::UX::Selector MainView__Template3::__selector0_;
::g::Uno::UX::Selector MainView__Template3::__selector1_;

// public Template3(MainView parent, MainView parentInstance) [instance] :172
void MainView__Template3::ctor_1(::g::MainView* parent, ::g::MainView* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template3 New(MainView parent, MainView parentInstance) [static] :172
MainView__Template3* MainView__Template3::New2(::g::MainView* parent, ::g::MainView* parentInstance)
{
    MainView__Template3* obj1 = (MainView__Template3*)uNew(MainView__Template3_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
