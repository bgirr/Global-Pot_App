// This file was generated based on C:\Users\EliteBook-User\AppData\Local\Fusetools\Packages\Fuse.Triggers\0.44.1\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Triggers{

// public abstract interface IBusyHandler :339
// {
uInterfaceType* IBusyHandler_typeof();

struct IBusyHandler
{
    void(*fp_get_BusyActivityHandled)(uObject*, int*);
    static int BusyActivityHandled(const uInterface& __this) { int __retval; return __this.VTable<IBusyHandler>()->fp_get_BusyActivityHandled(__this, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Triggers
