// This file was generated based on C:\Users\EliteBook-User\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.44.1\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Navigation.WhileNavigationTrigger.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigationArgs;}}}
namespace g{namespace Fuse{namespace Navigation{struct WhileInEnterState;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class WhileInEnterState :4890
// {
::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileInEnterState_typeof();
void WhileInEnterState__ctor_7_fn(WhileInEnterState* __this);
void WhileInEnterState__ForceUpdate_fn(WhileInEnterState* __this);
void WhileInEnterState__New2_fn(WhileInEnterState** __retval);
void WhileInEnterState__OnNavigationStateChanged_fn(WhileInEnterState* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state);

struct WhileInEnterState : ::g::Fuse::Navigation::WhileNavigationTrigger
{
    void ctor_7();
    static WhileInEnterState* New2();
};
// }

}}} // ::g::Fuse::Navigation
