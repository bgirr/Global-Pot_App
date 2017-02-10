// This file was generated based on 'F:\Global Pot_App\build\Android\Preview\cache\ux11\Global Pot.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileBool;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct GlobalPot_FuseTriggersWhileBool_Value_Property;}

namespace g{

// internal sealed class GlobalPot_FuseTriggersWhileBool_Value_Property :46
// {
::g::Uno::UX::Property1_type* GlobalPot_FuseTriggersWhileBool_Value_Property_typeof();
void GlobalPot_FuseTriggersWhileBool_Value_Property__ctor_2_fn(GlobalPot_FuseTriggersWhileBool_Value_Property* __this, ::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector* name);
void GlobalPot_FuseTriggersWhileBool_Value_Property__Get_fn(GlobalPot_FuseTriggersWhileBool_Value_Property* __this, bool* __retval);
void GlobalPot_FuseTriggersWhileBool_Value_Property__New1_fn(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector* name, GlobalPot_FuseTriggersWhileBool_Value_Property** __retval);
void GlobalPot_FuseTriggersWhileBool_Value_Property__get_Object_fn(GlobalPot_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void GlobalPot_FuseTriggersWhileBool_Value_Property__Set_fn(GlobalPot_FuseTriggersWhileBool_Value_Property* __this, bool* v, uObject* origin);
void GlobalPot_FuseTriggersWhileBool_Value_Property__get_SupportsOriginSetter_fn(GlobalPot_FuseTriggersWhileBool_Value_Property* __this, bool* __retval);

struct GlobalPot_FuseTriggersWhileBool_Value_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Triggers::WhileBool*> _obj;

    void ctor_2(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector name);
    static GlobalPot_FuseTriggersWhileBool_Value_Property* New1(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
