// This file was generated based on C:\Users\EliteBook-User\AppData\Local\Fusetools\Packages\Fuse.Triggers\0.44.1\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.WhileWindowAspect.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileWindowLandscape;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileWindowLandscape :4462
// {
::g::Fuse::Triggers::WindowSizeTrigger_type* WhileWindowLandscape_typeof();
void WhileWindowLandscape__ctor_8_fn(WhileWindowLandscape* __this);
void WhileWindowLandscape__get_IsActive_fn(WhileWindowLandscape* __this, bool* __retval);
void WhileWindowLandscape__New2_fn(WhileWindowLandscape** __retval);

struct WhileWindowLandscape : ::g::Fuse::Triggers::WhileWindowAspect
{
    void ctor_8();
    static WhileWindowLandscape* New2();
};
// }

}}} // ::g::Fuse::Triggers
