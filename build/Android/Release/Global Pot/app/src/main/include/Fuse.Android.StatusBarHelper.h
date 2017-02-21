// This file was generated based on C:\Users\EliteBook-User\AppData\Local\Fusetools\Packages\Fuse.Android\0.44.1\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Android{struct StatusBarHelper;}}}

namespace g{
namespace Fuse{
namespace Android{

// internal static extern class StatusBarHelper :41
// {
uClassType* StatusBarHelper_typeof();
void StatusBarHelper__GetStatusBarColor_fn(int* __retval);
void StatusBarHelper__InstallGlobalListener_fn();
void StatusBarHelper__SetStatusBarColor_fn(int* color);

struct StatusBarHelper : uObject
{
    static int GetStatusBarColor();
    static void InstallGlobalListener();
    static void SetStatusBarColor(int color);
};
// }

}}} // ::g::Fuse::Android
