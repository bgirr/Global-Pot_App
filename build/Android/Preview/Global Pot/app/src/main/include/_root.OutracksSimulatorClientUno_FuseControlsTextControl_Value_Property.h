// This file was generated based on C:\Users\EliteBook-User\AppData\Local\Fusetools\Fuse\App\app-0.31.2.9180\Packages\Outracks.Simulator.Client.Uno\0.1.0\.uno\ux11\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct TextControl;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property;}

namespace g{

// internal sealed class OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property :248
// {
::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property_typeof();
void OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property__ctor_2_fn(OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property* __this, ::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name);
void OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property__Get_fn(OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property* __this, uString** __retval);
void OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name, OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property** __retval);
void OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property__get_Object_fn(OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property__Set_fn(OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property* __this, uString* v, uObject* origin);
void OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property* __this, bool* __retval);

struct OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::TextControl*> _obj;

    void ctor_2(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name);
    static OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property* New1(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
