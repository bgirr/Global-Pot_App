// This file was generated based on C:\Users\EliteBook-User\AppData\Local\Fusetools\Packages\UnoCore\0.44.5\source\uno\compiler\exporttargetinterop\foreign\objc\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <ObjC.ID.h>
#include <ObjC.Object.h>
#include <Uno.Bool.h>
#include <Uno.Int.h>
static uType* TYPES[1];

namespace g{
namespace ObjC{

// public sealed extern class Object :39
// {
// ~Object() :62
static void Object__Finalize_fn(Object* __this)
{
    [__this->_handle release];
}

static void Object_build(uType* type)
{
    ::TYPES[0] = ::g::ObjC::ID_typeof();
    type->SetFields(0,
        ::TYPES[0/*ObjC.ID*/], offsetof(::g::ObjC::Object, _handle), 0);
}

uType* Object_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Object);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("ObjC.Object", options);
    type->fp_build_ = Object_build;
    type->fp_Finalize = (void(*)(uObject*))Object__Finalize_fn;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Object__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Object__GetHashCode_fn;
    return type;
}

// private Object(ObjC.ID handle) :51
void Object__ctor__fn(Object* __this, ::id* handle)
{
    __this->ctor_(*handle);
}

// public override sealed bool Equals(object x) :67
void Object__Equals_fn(Object* __this, uObject* x, bool* __retval)
{
    Object* o = uAs<Object*>(x, __this->__type);
    return *__retval = (o != NULL) && ::g::ObjC::ID::op_Equality(uPtr(o)->Handle(), __this->Handle()), void();
}

// private static extern ObjC.ID GetHandle(ObjC.Object o) :78
void Object__GetHandle_fn(Object* o, ::id* __retval)
{
    *__retval = Object::GetHandle(o);
}

// public override sealed int GetHashCode() :73
void Object__GetHashCode_fn(Object* __this, int* __retval)
{
    ::id ind1;
    return *__retval = ::g::ObjC::ID::GetHashCode((ind1 = __this->_handle, ind1), ::TYPES[0/*ObjC.ID*/]), void();
}

// public ObjC.ID get_Handle() :45
void Object__get_Handle_fn(Object* __this, ::id* __retval)
{
    *__retval = __this->Handle();
}

// public static ObjC.Object New(ObjC.ID handle) :57
void Object__New1_fn(::id* handle, Object** __retval)
{
    *__retval = Object::New1(*handle);
}

// private Object New(ObjC.ID handle) :51
void Object__New2_fn(::id* handle, Object** __retval)
{
    *__retval = Object::New2(*handle);
}

// private Object(ObjC.ID handle) [instance] :51
void Object::ctor_(::id handle)
{
    _handle = handle;
    [_handle retain];
}

// public ObjC.ID get_Handle() [instance] :45
::id Object::Handle()
{
    return [[_handle retain] autorelease];
}

// private static extern ObjC.ID GetHandle(ObjC.Object o) [static] :78
::id Object::GetHandle(Object* o)
{
    return (o == NULL) ? ::g::ObjC::ID::Null_ : uPtr(o)->Handle();
}

// public static ObjC.Object New(ObjC.ID handle) [static] :57
Object* Object::New1(::id handle)
{
    return ::g::ObjC::ID::op_Equality(handle, ::g::ObjC::ID::Null_) ? uCast<Object*>(NULL, Object_typeof()) : (Object*)Object::New2(handle);
}

// private Object New(ObjC.ID handle) [static] :51
Object* Object::New2(::id handle)
{
    Object* obj2 = (Object*)uNew(Object_typeof());
    obj2->ctor_(handle);
    return obj2;
}
// }

}} // ::g::ObjC
