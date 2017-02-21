// This file was generated based on 'F:\Global Pot_App\.uno\ux11\CookingPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct CookingPage__Template;}
namespace g{struct CookingPage__Template__Template1;}

namespace g{

// public partial sealed class CookingPage.Template.Template1 :16
// {
::g::Uno::UX::Template_type* CookingPage__Template__Template1_typeof();
void CookingPage__Template__Template1__ctor_1_fn(CookingPage__Template__Template1* __this, ::g::CookingPage__Template* parent, ::g::Fuse::Controls::Panel* parentInstance);
void CookingPage__Template__Template1__New1_fn(CookingPage__Template__Template1* __this, uObject** __retval);
void CookingPage__Template__Template1__New2_fn(::g::CookingPage__Template* parent, ::g::Fuse::Controls::Panel* parentInstance, CookingPage__Template__Template1** __retval);

struct CookingPage__Template__Template1 : ::g::Uno::UX::Template
{
    uWeak< ::g::CookingPage__Template*> __parent1;
    uWeak< ::g::Fuse::Controls::Panel*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return CookingPage__Template__Template1_typeof()->Init(), __selector0_; }
    uStrong< ::g::Uno::UX::Property1*> self_Items_inst;

    void ctor_1(::g::CookingPage__Template* parent, ::g::Fuse::Controls::Panel* parentInstance);
    static CookingPage__Template__Template1* New2(::g::CookingPage__Template* parent, ::g::Fuse::Controls::Panel* parentInstance);
};
// }

} // ::g
