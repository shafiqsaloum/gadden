// This file was generated based on '/Users/ericaglimsholt/Documents/Skola/Handels marketing/Gadden/gadden/build/iOS/Preview/cache/ux11/ListItem.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.gadden_FuseDraw-aa645b14.h>
#include <_root.gadden_FuseElem-aceb110d.h>
#include <_root.ListItem.h>
#include <_root.ListItem.Template.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.ImageFill.h>
#include <Fuse.Drawing.WrapMode.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Resources.MemoryPolicy.h>
#include <Fuse.Triggers.AddingAnimation.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[4];
static uType* TYPES[7];

namespace g{

// public partial sealed class ListItem.Template :5
// {
// static Template() :20
static void ListItem__Template__cctor__fn(uType* __type)
{
    ListItem__Template::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 1, ::STRINGS[0/*"imageHolder"*/]);
    ListItem__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Opacity"*/]);
    ListItem__Template::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Url"*/]);
    ListItem__Template::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"imageHolder"*/]);
}

static void ListItem__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("imageHolder");
    ::STRINGS[1] = uString::Const("Opacity");
    ::STRINGS[2] = uString::Const("Url");
    ::STRINGS[3] = uString::Const("image");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetFields(2,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::ListItem__Template, __g_nametable1), 0,
        ::g::ListItem_typeof(), offsetof(::g::ListItem__Template, __parent1), uFieldFlagsWeak,
        ::g::ListItem_typeof(), offsetof(::g::ListItem__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::ListItem__Template, __self_Opacity_inst1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::ListItem__Template, temp_Url_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::ListItem__Template::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ListItem__Template::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ListItem__Template::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ListItem__Template::__selector2_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ListItem__Template__New2_fn, 0, true, type, 2, ::g::ListItem_typeof(), ::g::ListItem_typeof()));
}

::g::Uno::UX::Template_type* ListItem__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 11;
    options.ObjectSize = sizeof(ListItem__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("ListItem.Template", options);
    type->fp_build_ = ListItem__Template_build;
    type->fp_cctor_ = ListItem__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))ListItem__Template__New1_fn;
    return type;
}

// public Template(ListItem parent, ListItem parentInstance) :9
void ListItem__Template__ctor_1_fn(ListItem__Template* __this, ::g::ListItem* parent, ::g::ListItem* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :23
void ListItem__Template__New1_fn(ListItem__Template* __this, uObject** __retval)
{
    uStackFrame __("ListItem.Template", "New()");
    ::g::Fuse::Controls::Rectangle* __self1 = ::g::Fuse::Controls::Rectangle::New3();
    __this->__self_Opacity_inst1 = ::g::gadden_FuseElementsElement_Opacity_Property::New1(__self1, ListItem__Template::__selector0());
    ::g::Fuse::Drawing::ImageFill* temp = ::g::Fuse::Drawing::ImageFill::New2();
    __this->temp_Url_inst = ::g::gadden_FuseDrawingImageFill_Url_Property::New1(temp, ListItem__Template::__selector1());
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[3/*"image"*/]);
    __this->__g_nametable1 = ::g::Uno::UX::NameTable::New1(uPtr(__this->__parent1)->__g_nametable1, ListItem__Template::__g_static_nametable1());
    ::g::Fuse::Triggers::AddingAnimation* temp2 = ::g::Fuse::Triggers::AddingAnimation::New2();
    ::g::Fuse::Animations::Change* temp3 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], __this->__self_Opacity_inst1);
    ::g::Fuse::Reactive::DataBinding* temp4 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Url_inst, (uObject*)temp1, __this->__g_nametable1, 3);
    __self1->Opacity(1.0f);
    __self1->Name(ListItem__Template::__selector2());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp3);
    ::g::Fuse::Animations::Change__set_Value_fn(temp3, uCRef(0.0f));
    temp3->Duration(0.32);
    temp3->Delay(0.16);
    temp->WrapMode(1);
    temp->StretchMode(6);
    temp->MemoryPolicy(::g::Fuse::Resources::MemoryPolicy::UnloadUnused());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->__g_nametable1)->Objects()), ::TYPES[3/*Uno.Collections.ICollection<object>*/]), __self1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Fills()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp4);
    return *__retval = __self1, void();
}

// public Template New(ListItem parent, ListItem parentInstance) :9
void ListItem__Template__New2_fn(::g::ListItem* parent, ::g::ListItem* parentInstance, ListItem__Template** __retval)
{
    *__retval = ListItem__Template::New2(parent, parentInstance);
}

uSStrong<uArray*> ListItem__Template::__g_static_nametable1_;
::g::Uno::UX::Selector ListItem__Template::__selector0_;
::g::Uno::UX::Selector ListItem__Template::__selector1_;
::g::Uno::UX::Selector ListItem__Template::__selector2_;

// public Template(ListItem parent, ListItem parentInstance) [instance] :9
void ListItem__Template::ctor_1(::g::ListItem* parent, ::g::ListItem* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(ListItem parent, ListItem parentInstance) [static] :9
ListItem__Template* ListItem__Template::New2(::g::ListItem* parent, ::g::ListItem* parentInstance)
{
    ListItem__Template* obj1 = (ListItem__Template*)uNew(ListItem__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
