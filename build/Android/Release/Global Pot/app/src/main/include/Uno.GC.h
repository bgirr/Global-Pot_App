// This file was generated based on C:\Users\EliteBook-User\AppData\Local\Fusetools\Packages\UnoCore\0.44.5\source\uno\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{struct GC;}}

namespace g{
namespace Uno{

// public static class GC :3060
// {
uClassType* GC_typeof();
void GC__SuppressFinalize_fn(uObject* obj);

struct GC : uObject
{
    static void SuppressFinalize(uObject* obj);
};
// }

}} // ::g::Uno
