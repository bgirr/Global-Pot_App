// This file was generated based on 'F:\Global Pot_App\.uno\ux11\Global Pot.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct Image;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct GlobalPot_FuseControlsImage_File_Property;}

namespace g{

// internal sealed class GlobalPot_FuseControlsImage_File_Property :37
// {
::g::Uno::UX::Property1_type* GlobalPot_FuseControlsImage_File_Property_typeof();
void GlobalPot_FuseControlsImage_File_Property__ctor_2_fn(GlobalPot_FuseControlsImage_File_Property* __this, ::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector* name);
void GlobalPot_FuseControlsImage_File_Property__Get_fn(GlobalPot_FuseControlsImage_File_Property* __this, ::g::Uno::UX::FileSource** __retval);
void GlobalPot_FuseControlsImage_File_Property__New1_fn(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector* name, GlobalPot_FuseControlsImage_File_Property** __retval);
void GlobalPot_FuseControlsImage_File_Property__get_Object_fn(GlobalPot_FuseControlsImage_File_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void GlobalPot_FuseControlsImage_File_Property__Set_fn(GlobalPot_FuseControlsImage_File_Property* __this, ::g::Uno::UX::FileSource* v, uObject* origin);
void GlobalPot_FuseControlsImage_File_Property__get_SupportsOriginSetter_fn(GlobalPot_FuseControlsImage_File_Property* __this, bool* __retval);

struct GlobalPot_FuseControlsImage_File_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::Image*> _obj;

    void ctor_2(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector name);
    static GlobalPot_FuseControlsImage_File_Property* New1(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
