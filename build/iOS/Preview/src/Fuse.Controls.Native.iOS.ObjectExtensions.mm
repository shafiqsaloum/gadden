// This file was generated based on '../../../Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.1.1/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.iOS.ObjectExtensions.h>
#include <ObjC.Object.h>
#include <Uno.Bool.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal static extern class ObjectExtensions :1451
// {
static void ObjectExtensions_build(uType* type)
{
}

uClassType* ObjectExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.iOS.ObjectExtensions", options);
    type->fp_build_ = ObjectExtensions_build;
    return type;
}

// public static bool IsUIControl(ObjC.Object obj) :1454
void ObjectExtensions__IsUIControl_fn(::g::ObjC::Object* obj, bool* __retval)
{
    *__retval = ObjectExtensions::IsUIControl(obj);
}

// public static bool IsUIEvent(ObjC.Object obj) :1460
void ObjectExtensions__IsUIEvent_fn(::g::ObjC::Object* obj, bool* __retval)
{
    *__retval = ObjectExtensions::IsUIEvent(obj);
}

// public static bool IsUIControl(ObjC.Object obj) [static] :1454
bool ObjectExtensions::IsUIControl(::g::ObjC::Object* obj)
{
    @autoreleasepool
    {
        return [] (::id obj) -> bool
        {
            return [obj isKindOfClass:[UIControl class]];
        } (::g::ObjC::Object::GetHandle(obj));
        
    }
    
}

// public static bool IsUIEvent(ObjC.Object obj) [static] :1460
bool ObjectExtensions::IsUIEvent(::g::ObjC::Object* obj)
{
    @autoreleasepool
    {
        return [] (::id obj) -> bool
        {
            return [obj isKindOfClass:[UIEvent class]];
        } (::g::ObjC::Object::GetHandle(obj));
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
