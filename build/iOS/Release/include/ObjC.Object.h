// This file was generated based on C:\Users\EliteBook-User\AppData\Local\Fusetools\Packages\UnoCore\0.44.5\source\uno\compiler\exporttargetinterop\foreign\objc\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <objc/objc.h>
#include <Uno.Object.h>
namespace g{namespace ObjC{struct Object;}}

namespace g{
namespace ObjC{

// public sealed extern class Object :39
// {
uType* Object_typeof();
void Object__ctor__fn(Object* __this, ::id* handle);
void Object__Equals_fn(Object* __this, uObject* x, bool* __retval);
void Object__GetHandle_fn(Object* o, ::id* __retval);
void Object__GetHashCode_fn(Object* __this, int* __retval);
void Object__get_Handle_fn(Object* __this, ::id* __retval);
void Object__New1_fn(::id* handle, Object** __retval);
void Object__New2_fn(::id* handle, Object** __retval);

struct Object : uObject
{
    ::id _handle;

    void ctor_(::id handle);
    ::id Handle();
    static ::id GetHandle(Object* o);
    static Object* New1(::id handle);
    static Object* New2(::id handle);
};
// }

}} // ::g::ObjC
