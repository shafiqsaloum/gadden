// This file was generated based on build/iOS/Preview/cache/ux11/Title.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.h>
#include <_root.Title.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Font.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>

namespace g{

// public partial sealed class Title :2
// {
// static Title() :4
static void Title__cctor_3_fn(uType* __type)
{
}

static void Title_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::TextInputControl_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::TextInputControl_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::TextInputControl_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::TextInputControl_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::TextInputControl_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::TextInputControl_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::TextInputControl_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::TextInputControl_type, interface7),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::TextInputControl_type, interface8),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::TextInputControl_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::TextInputControl_type, interface10),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::TextInputControl_type, interface11),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::TextInputControl_type, interface12),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::TextInputControl_type, interface13),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::TextInputControl_type, interface14),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::TextInputControl_type, interface15),
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::Fuse::Controls::TextInputControl_type, interface16));
    type->SetFields(105);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Title__New4_fn, 0, true, type, 0));
}

::g::Fuse::Controls::TextInputControl_type* Title_typeof()
{
    static uSStrong< ::g::Fuse::Controls::TextInputControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::TextView_typeof();
    options.FieldCount = 105;
    options.InterfaceCount = 17;
    options.ObjectSize = sizeof(Title);
    options.TypeSize = sizeof(::g::Fuse::Controls::TextInputControl_type);
    type = (::g::Fuse::Controls::TextInputControl_type*)uClassType::New("Title", options);
    type->fp_build_ = Title_build;
    type->fp_ctor_ = (void*)Title__New4_fn;
    type->fp_cctor_ = Title__cctor_3_fn;
    type->interface16.fp_get_Value = (void(*)(uObject*, uTRef))::g::Fuse::Controls::TextInputControl__get_Value_fn;
    type->interface16.fp_set_Value = (void(*)(uObject*, void*))::g::Fuse::Controls::TextInputControl__set_Value_fn;
    type->interface16.fp_add_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::TextInputControl__add_ValueChanged_fn;
    type->interface16.fp_remove_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::TextInputControl__remove_ValueChanged_fn;
    type->interface11.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface13.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface12.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface15.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface14.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface14.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
    type->interface14.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface14.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface9.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface9.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface6.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface10.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface9.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface6.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface6.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface7.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::TextInputControl__OnPropertyChanged2_fn;
    type->interface8.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface9.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface9.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public Title() :8
void Title__ctor_8_fn(Title* __this)
{
    __this->ctor_8();
}

// private void InitializeUX() :12
void Title__InitializeUX_fn(Title* __this)
{
    __this->InitializeUX();
}

// public Title New() :8
void Title__New4_fn(Title** __retval)
{
    *__retval = Title::New4();
}

// public Title() [instance] :8
void Title::ctor_8()
{
    uStackFrame __("Title", ".ctor()");
    ctor_7();
    InitializeUX();
}

// private void InitializeUX() [instance] :12
void Title::InitializeUX()
{
    uStackFrame __("Title", "InitializeUX()");
    TextWrapping(1);
    FontSize(24.0f);
    TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    IsReadOnly(true);
    Alignment(13);
    Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    Font(::g::MainView::TitleFont());
}

// public Title New() [static] :8
Title* Title::New4()
{
    Title* obj1 = (Title*)uNew(Title_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

} // ::g
