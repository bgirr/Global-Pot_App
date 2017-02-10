// This file was generated based on C:\Users\EliteBook-User\AppData\Local\Fusetools\Packages\Fuse.Controls.WebView\0.44.1\ios\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace iOS{namespace Controls{struct NavDelegate;}}}}
namespace g{namespace ObjC{struct Object;}}

namespace g{
namespace Fuse{
namespace iOS{
namespace Controls{

// public static extern class NavDelegate :14
// {
uClassType* NavDelegate_typeof();
void NavDelegate__Create_fn(uDelegate* beginLoading, uDelegate* pageLoaded, uDelegate* urlChanged, ::g::ObjC::Object** __retval);

struct NavDelegate : uObject
{
    static ::g::ObjC::Object* Create(uDelegate* beginLoading, uDelegate* pageLoaded, uDelegate* urlChanged);
};
// }

}}}} // ::g::Fuse::iOS::Controls
