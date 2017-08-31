// This file was generated based on /Users/ericaglimsholt/Documents/Skola/Handelsmarketing/Gadden/gadden/build/iOS/Preview/cache/ux11/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.h>
#include <_root.MainView.Template6.h>
#include <Fuse.Binding.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Triggers.Actions.Callback.h>
#include <Fuse.Triggers.Actions.Toggle.h>
#include <Fuse.Triggers.Actions-b5190bae.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.VisualEventHandler.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.NameTable.h>
static uString* STRINGS[2];
static uType* TYPES[5];

namespace g{

// public partial sealed class MainView.Template6 :450
// {
// static Template6() :464
static void MainView__Template6__cctor__fn(uType* __type)
{
    MainView__Template6::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 1, ::STRINGS[0/*"temp_eb10"*/]);
}

static void MainView__Template6_build(uType* type)
{
    ::STRINGS[0] = uString::Const("temp_eb10");
    ::STRINGS[1] = uString::Const("programClicked");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::VisualEventHandler_typeof();
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetFields(2,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::MainView__Template6, __g_nametable1), 0,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template6, __parent1), uFieldFlagsWeak,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template6, __parentInstance1), uFieldFlagsWeak,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::MainView__Template6::__g_static_nametable1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__Template6__New2_fn, 0, true, type, 2, ::g::MainView_typeof(), ::g::MainView_typeof()));
}

::g::Uno::UX::Template_type* MainView__Template6_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(MainView__Template6);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template6", options);
    type->fp_build_ = MainView__Template6_build;
    type->fp_cctor_ = MainView__Template6__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainView__Template6__New1_fn;
    return type;
}

// public Template6(MainView parent, MainView parentInstance) :454
void MainView__Template6__ctor_1_fn(MainView__Template6* __this, ::g::MainView* parent, ::g::MainView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :467
void MainView__Template6__New1_fn(MainView__Template6* __this, uObject** __retval)
{
    uStackFrame __("MainView.Template6", "New()");
    ::g::Fuse::Gestures::Clicked* __self1 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Reactive::Data* temp = ::g::Fuse::Reactive::Data::New1(::STRINGS[1/*"programClic...*/]);
    __this->__g_nametable1 = ::g::Uno::UX::NameTable::New1(uPtr(__this->__parent1)->__g_nametable1, MainView__Template6::__g_static_nametable1());
    ::g::Fuse::Triggers::Actions::Toggle* temp1 = ::g::Fuse::Triggers::Actions::Toggle::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp2 = ::g::Fuse::Triggers::Actions::Callback::New2();
    ::g::Fuse::Reactive::EventBinding* temp_eb101 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp, __this->__g_nametable1);
    temp1->Target((uObject*)uPtr(__this->__parent1)->opacityProgram);
    temp2->add_Handler(uDelegate::New(::TYPES[1/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, temp_eb101));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->__g_nametable1)->Objects()), ::TYPES[2/*Uno.Collections.ICollection<object>*/]), temp_eb101);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Actions()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Actions()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb101);
    return *__retval = __self1, void();
}

// public Template6 New(MainView parent, MainView parentInstance) :454
void MainView__Template6__New2_fn(::g::MainView* parent, ::g::MainView* parentInstance, MainView__Template6** __retval)
{
    *__retval = MainView__Template6::New2(parent, parentInstance);
}

uSStrong<uArray*> MainView__Template6::__g_static_nametable1_;

// public Template6(MainView parent, MainView parentInstance) [instance] :454
void MainView__Template6::ctor_1(::g::MainView* parent, ::g::MainView* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template6 New(MainView parent, MainView parentInstance) [static] :454
MainView__Template6* MainView__Template6::New2(::g::MainView* parent, ::g::MainView* parentInstance)
{
    MainView__Template6* obj1 = (MainView__Template6*)uNew(MainView__Template6_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
