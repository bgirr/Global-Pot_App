// This file was generated based on C:\Users\EliteBook-User\AppData\Local\Fusetools\Packages\FuseCore\0.44.1\input\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Input.PointerReleasedArgs.h>
#include <Fuse.Input.PointerReleasedHandler.h>
#include <Fuse.VisualEvent-2.h>
namespace g{namespace Fuse{namespace Input{struct PointerReleased;}}}

namespace g{
namespace Fuse{
namespace Input{

// internal sealed class PointerReleased :850
// {
::g::Fuse::VisualEvent_type* PointerReleased_typeof();
void PointerReleased__ctor_1_fn(PointerReleased* __this);
void PointerReleased__Invoke_fn(PointerReleased* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args);
void PointerReleased__New1_fn(PointerReleased** __retval);

struct PointerReleased : ::g::Fuse::VisualEvent
{
    void ctor_1();
    static PointerReleased* New1();
};
// }

}}} // ::g::Fuse::Input