// This file was generated based on C:\Users\EliteBook-User\AppData\Local\Fusetools\Packages\Fuse.iOS\0.44.1\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace iOS{struct StatusBarConfig;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace iOS{

// public sealed class StatusBarConfig :432
// {
::g::Fuse::Node_type* StatusBarConfig_typeof();
void StatusBarConfig__ctor_3_fn(StatusBarConfig* __this);
void StatusBarConfig__Apply_fn();
void StatusBarConfig__get_IsVisible_fn(StatusBarConfig* __this, bool* __retval);
void StatusBarConfig__set_IsVisible_fn(StatusBarConfig* __this, bool* value);
void StatusBarConfig__New2_fn(StatusBarConfig** __retval);
void StatusBarConfig__OnRooted_fn(StatusBarConfig* __this);
void StatusBarConfig__OnUnrooted_fn(StatusBarConfig* __this);

struct StatusBarConfig : ::g::Fuse::Behavior
{
    bool _hasIsVisible;
    bool _isVisible;
    static uSStrong< ::g::Uno::Collections::List*> _stack_;
    static uSStrong< ::g::Uno::Collections::List*>& _stack() { return StatusBarConfig_typeof()->Init(), _stack_; }

    void ctor_3();
    bool IsVisible();
    void IsVisible(bool value);
    static void Apply();
    static StatusBarConfig* New2();
};
// }

}}} // ::g::Fuse::iOS