// This file was generated based on C:\Users\EliteBook-User\AppData\Local\Fusetools\Packages\Uno.Net.Http\0.44.5\implementation\ios\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Net{namespace Http{namespace Implementation{struct iOSHttpSharedCache;}}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{
namespace Implementation{

// internal static extern class iOSHttpSharedCache :103
// {
uClassType* iOSHttpSharedCache_typeof();
void iOSHttpSharedCache__SetupSharedCache_fn(bool* isCacheEnabled_, int64_t* sizeInBytes_);

struct iOSHttpSharedCache : uObject
{
    static void SetupSharedCache(bool isCacheEnabled_, int64_t sizeInBytes_);
};
// }

}}}}} // ::g::Uno::Net::Http::Implementation