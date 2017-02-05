// This file was generated based on 'F:\Global Pot_App\.uno\ux11\Global Pot.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Reactive{struct Each;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct GlobalPot_FuseReactiveEach_Items_Property;}

namespace g{

// internal sealed class GlobalPot_FuseReactiveEach_Items_Property :1
// {
::g::Uno::UX::Property1_type* GlobalPot_FuseReactiveEach_Items_Property_typeof();
void GlobalPot_FuseReactiveEach_Items_Property__ctor_2_fn(GlobalPot_FuseReactiveEach_Items_Property* __this, ::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector* name);
void GlobalPot_FuseReactiveEach_Items_Property__Get_fn(GlobalPot_FuseReactiveEach_Items_Property* __this, uObject** __retval);
void GlobalPot_FuseReactiveEach_Items_Property__New1_fn(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector* name, GlobalPot_FuseReactiveEach_Items_Property** __retval);
void GlobalPot_FuseReactiveEach_Items_Property__get_Object_fn(GlobalPot_FuseReactiveEach_Items_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void GlobalPot_FuseReactiveEach_Items_Property__Set_fn(GlobalPot_FuseReactiveEach_Items_Property* __this, uObject* v, uObject* origin);
void GlobalPot_FuseReactiveEach_Items_Property__get_SupportsOriginSetter_fn(GlobalPot_FuseReactiveEach_Items_Property* __this, bool* __retval);

struct GlobalPot_FuseReactiveEach_Items_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Reactive::Each*> _obj;

    void ctor_2(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector name);
    static GlobalPot_FuseReactiveEach_Items_Property* New1(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
