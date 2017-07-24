// This file was generated based on /Users/ericaglimsholt/Documents/Skola/Handelsmarketing/Gadden/gadden/build/iOS/Preview/cache/ux11/gadden.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.gadden_FuseCont-ea7661aa.h>
#include <Fuse.Controls.Image.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class gadden_FuseControlsImage_File_Property :108
// {
static void gadden_FuseControlsImage_File_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::Image_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Controls.Image*/], offsetof(::g::gadden_FuseControlsImage_File_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* gadden_FuseControlsImage_File_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(gadden_FuseControlsImage_File_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("gadden_FuseControlsImage_File_Property", options);
    type->fp_build_ = gadden_FuseControlsImage_File_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))gadden_FuseControlsImage_File_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))gadden_FuseControlsImage_File_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))gadden_FuseControlsImage_File_Property__Set1_fn;
    return type;
}

// public gadden_FuseControlsImage_File_Property(Fuse.Controls.Image obj, Uno.UX.Selector name) :111
void gadden_FuseControlsImage_File_Property__ctor_3_fn(gadden_FuseControlsImage_File_Property* __this, ::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed Uno.UX.FileSource Get(Uno.UX.PropertyObject obj) :113
void gadden_FuseControlsImage_File_Property__Get1_fn(gadden_FuseControlsImage_File_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::FileSource** __retval)
{
    uStackFrame __("gadden_FuseControlsImage_File_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::Image*>(obj, ::TYPES[0/*Fuse.Controls.Image*/]))->File(), void();
}

// public gadden_FuseControlsImage_File_Property New(Fuse.Controls.Image obj, Uno.UX.Selector name) :111
void gadden_FuseControlsImage_File_Property__New1_fn(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector* name, gadden_FuseControlsImage_File_Property** __retval)
{
    *__retval = gadden_FuseControlsImage_File_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :112
void gadden_FuseControlsImage_File_Property__get_Object_fn(gadden_FuseControlsImage_File_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Uno.UX.FileSource v, Uno.UX.IPropertyListener origin) :114
void gadden_FuseControlsImage_File_Property__Set1_fn(gadden_FuseControlsImage_File_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::FileSource* v, uObject* origin)
{
    uStackFrame __("gadden_FuseControlsImage_File_Property", "Set(Uno.UX.PropertyObject,Uno.UX.FileSource,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Fuse::Controls::Image*>(obj, ::TYPES[0/*Fuse.Controls.Image*/]))->File(v);
}

// public gadden_FuseControlsImage_File_Property(Fuse.Controls.Image obj, Uno.UX.Selector name) [instance] :111
void gadden_FuseControlsImage_File_Property::ctor_3(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public gadden_FuseControlsImage_File_Property New(Fuse.Controls.Image obj, Uno.UX.Selector name) [static] :111
gadden_FuseControlsImage_File_Property* gadden_FuseControlsImage_File_Property::New1(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector name)
{
    gadden_FuseControlsImage_File_Property* obj1 = (gadden_FuseControlsImage_File_Property*)uNew(gadden_FuseControlsImage_File_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
