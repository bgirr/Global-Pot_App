// This file was generated based on C:\Users\EliteBook-User\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.44.1\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// public abstract interface ITextEditHost :401
// {
uInterfaceType* ITextEditHost_typeof();

struct ITextEditHost
{
    void(*fp_OnInputAction)(uObject*, int*, bool*);
    void(*fp_OnValueChanged)(uObject*, uString*);
    static bool OnInputAction(const uInterface& __this, int type) { bool __retval; return __this.VTable<ITextEditHost>()->fp_OnInputAction(__this, &type, &__retval), __retval; }
    static void OnValueChanged(const uInterface& __this, uString* newValue) { __this.VTable<ITextEditHost>()->fp_OnValueChanged(__this, newValue); }
};
// }

}}}} // ::g::Fuse::Controls::Native