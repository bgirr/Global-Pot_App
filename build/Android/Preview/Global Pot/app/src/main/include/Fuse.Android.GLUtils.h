// This file was generated based on C:\Users\EliteBook-User\AppData\Local\Fusetools\Packages\Fuse.Android\0.44.1\internal\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Android{struct Bitmap;}}}
namespace g{namespace Fuse{namespace Android{struct GLUtils;}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Android{

// internal sealed extern class GLUtils :137
// {
uType* GLUtils_typeof();
void GLUtils__ctor__fn(GLUtils* __this);
void GLUtils__New1_fn(GLUtils** __retval);
void GLUtils__TexImage2D_fn(int* target, int* level, ::g::Java::Object* bitmap, int* border);
void GLUtils__TexImage2D1_fn(int* target, int* level, ::g::Fuse::Android::Bitmap* bitmap, int* border);

struct GLUtils : uObject
{
    void ctor_();
    static GLUtils* New1();
    static void TexImage2D(int target, int level, ::g::Java::Object* bitmap, int border);
    static void TexImage2D1(int target, int level, ::g::Fuse::Android::Bitmap* bitmap, int border);
};
// }

}}} // ::g::Fuse::Android
