// This file was generated based on 'F:\Global Pot_App\.uno\ux11\Global Pot.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{namespace Uno{namespace UX{struct StringConcatOperator;}}}
namespace g{struct GlobalPot_UnoUXStringConcatOperator_Left_Property;}

namespace g{

// internal sealed class GlobalPot_UnoUXStringConcatOperator_Left_Property :28
// {
::g::Uno::UX::Property1_type* GlobalPot_UnoUXStringConcatOperator_Left_Property_typeof();
void GlobalPot_UnoUXStringConcatOperator_Left_Property__ctor_2_fn(GlobalPot_UnoUXStringConcatOperator_Left_Property* __this, ::g::Uno::UX::StringConcatOperator* obj, ::g::Uno::UX::Selector* name);
void GlobalPot_UnoUXStringConcatOperator_Left_Property__Get_fn(GlobalPot_UnoUXStringConcatOperator_Left_Property* __this, uString** __retval);
void GlobalPot_UnoUXStringConcatOperator_Left_Property__New1_fn(::g::Uno::UX::StringConcatOperator* obj, ::g::Uno::UX::Selector* name, GlobalPot_UnoUXStringConcatOperator_Left_Property** __retval);
void GlobalPot_UnoUXStringConcatOperator_Left_Property__get_Object_fn(GlobalPot_UnoUXStringConcatOperator_Left_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void GlobalPot_UnoUXStringConcatOperator_Left_Property__Set_fn(GlobalPot_UnoUXStringConcatOperator_Left_Property* __this, uString* v, uObject* origin);
void GlobalPot_UnoUXStringConcatOperator_Left_Property__get_SupportsOriginSetter_fn(GlobalPot_UnoUXStringConcatOperator_Left_Property* __this, bool* __retval);

struct GlobalPot_UnoUXStringConcatOperator_Left_Property : ::g::Uno::UX::Property1
{
    uStrong< ::g::Uno::UX::StringConcatOperator*> _obj;

    void ctor_2(::g::Uno::UX::StringConcatOperator* obj, ::g::Uno::UX::Selector name);
    static GlobalPot_UnoUXStringConcatOperator_Left_Property* New1(::g::Uno::UX::StringConcatOperator* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
