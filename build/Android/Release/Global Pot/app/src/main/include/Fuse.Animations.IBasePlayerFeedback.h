// This file was generated based on C:\Users\EliteBook-User\AppData\Local\Fusetools\Packages\Fuse.Animations\0.44.1\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Animations{

// internal abstract interface IBasePlayerFeedback :4119
// {
uInterfaceType* IBasePlayerFeedback_typeof();

struct IBasePlayerFeedback
{
    void(*fp_OnPlaybackDone)(uObject*, uObject*);
    void(*fp_OnStable)(uObject*, uObject*);
    static void OnPlaybackDone(const uInterface& __this, uObject* s) { __this.VTable<IBasePlayerFeedback>()->fp_OnPlaybackDone(__this, s); }
    static void OnStable(const uInterface& __this, uObject* s) { __this.VTable<IBasePlayerFeedback>()->fp_OnStable(__this, s); }
};
// }

}}} // ::g::Fuse::Animations
