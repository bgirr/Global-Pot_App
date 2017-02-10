// This file was generated based on 'F:\Global Pot_App\build\Android\Preview\cache\ux11\Global Pot.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{struct Rotation;}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct GlobalPot_FuseRotation_Degrees_Property;}

namespace g{

// internal sealed class GlobalPot_FuseRotation_Degrees_Property :10
// {
::g::Uno::UX::Property1_type* GlobalPot_FuseRotation_Degrees_Property_typeof();
void GlobalPot_FuseRotation_Degrees_Property__ctor_2_fn(GlobalPot_FuseRotation_Degrees_Property* __this, ::g::Fuse::Rotation* obj, ::g::Uno::UX::Selector* name);
void GlobalPot_FuseRotation_Degrees_Property__Get_fn(GlobalPot_FuseRotation_Degrees_Property* __this, float* __retval);
void GlobalPot_FuseRotation_Degrees_Property__New1_fn(::g::Fuse::Rotation* obj, ::g::Uno::UX::Selector* name, GlobalPot_FuseRotation_Degrees_Property** __retval);
void GlobalPot_FuseRotation_Degrees_Property__get_Object_fn(GlobalPot_FuseRotation_Degrees_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void GlobalPot_FuseRotation_Degrees_Property__Set_fn(GlobalPot_FuseRotation_Degrees_Property* __this, float* v, uObject* origin);
void GlobalPot_FuseRotation_Degrees_Property__get_SupportsOriginSetter_fn(GlobalPot_FuseRotation_Degrees_Property* __this, bool* __retval);

struct GlobalPot_FuseRotation_Degrees_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Rotation*> _obj;

    void ctor_2(::g::Fuse::Rotation* obj, ::g::Uno::UX::Selector name);
    static GlobalPot_FuseRotation_Degrees_Property* New1(::g::Fuse::Rotation* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
