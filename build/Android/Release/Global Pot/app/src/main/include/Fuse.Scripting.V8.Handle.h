// This file was generated based on C:\Users\EliteBook-User\AppData\Local\Fusetools\Packages\Fuse.Scripting.V8\0.44.1\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Handle;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{

// internal static extern class Handle :826
// {
uClassType* Handle_typeof();
void Handle__Create_fn(uObject* o, void** __retval);
void Handle__Free_fn(void** handle);
void Handle__Target_fn(void** handle, uObject** __retval);

struct Handle : uObject
{
    static void* Create(uObject* o);
    static void Free(void* handle);
    static uObject* Target(void* handle);
};
// }

}}}} // ::g::Fuse::Scripting::V8