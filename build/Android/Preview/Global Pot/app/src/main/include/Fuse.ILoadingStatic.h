// This file was generated based on C:\Users\EliteBook-User\AppData\Local\Fusetools\Packages\FuseCore\0.44.1\resources\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct ILoadingStatic;}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{

// internal static class ILoadingStatic :258
// {
uClassType* ILoadingStatic_typeof();

struct ILoadingStatic : uObject
{
    static ::g::Uno::UX::Selector IsLoadingName_;
    static ::g::Uno::UX::Selector& IsLoadingName() { return ILoadingStatic_typeof()->Init(), IsLoadingName_; }
};
// }

}} // ::g::Fuse
