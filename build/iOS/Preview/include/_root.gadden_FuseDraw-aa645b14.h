// This file was generated based on '/Users/ericaglimsholt/Documents/Skola/Handels marketing/Gadden/gadden/build/iOS/Preview/cache/ux11/gadden.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Drawing{struct ImageFill;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct gadden_FuseDrawingImageFill_Url_Property;}

namespace g{

// internal sealed class gadden_FuseDrawingImageFill_Url_Property :57
// {
::g::Uno::UX::Property1_type* gadden_FuseDrawingImageFill_Url_Property_typeof();
void gadden_FuseDrawingImageFill_Url_Property__ctor_3_fn(gadden_FuseDrawingImageFill_Url_Property* __this, ::g::Fuse::Drawing::ImageFill* obj, ::g::Uno::UX::Selector* name);
void gadden_FuseDrawingImageFill_Url_Property__Get1_fn(gadden_FuseDrawingImageFill_Url_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void gadden_FuseDrawingImageFill_Url_Property__New1_fn(::g::Fuse::Drawing::ImageFill* obj, ::g::Uno::UX::Selector* name, gadden_FuseDrawingImageFill_Url_Property** __retval);
void gadden_FuseDrawingImageFill_Url_Property__get_Object_fn(gadden_FuseDrawingImageFill_Url_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void gadden_FuseDrawingImageFill_Url_Property__Set1_fn(gadden_FuseDrawingImageFill_Url_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);

struct gadden_FuseDrawingImageFill_Url_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Drawing::ImageFill*> _obj;

    void ctor_3(::g::Fuse::Drawing::ImageFill* obj, ::g::Uno::UX::Selector name);
    static gadden_FuseDrawingImageFill_Url_Property* New1(::g::Fuse::Drawing::ImageFill* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
