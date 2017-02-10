// This file was generated based on 'F:\Global Pot_App\.uno\ux11\CookingPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct CookingPage__Template;}
namespace g{struct CookingPage__Template__Template2;}

namespace g{

// public partial sealed class CookingPage.Template.Template2 :83
// {
::g::Uno::UX::Template_type* CookingPage__Template__Template2_typeof();
void CookingPage__Template__Template2__ctor_1_fn(CookingPage__Template__Template2* __this, ::g::CookingPage__Template* parent, ::g::Fuse::Controls::Panel* parentInstance);
void CookingPage__Template__Template2__New1_fn(CookingPage__Template__Template2* __this, uObject** __retval);
void CookingPage__Template__Template2__New2_fn(::g::CookingPage__Template* parent, ::g::Fuse::Controls::Panel* parentInstance, CookingPage__Template__Template2** __retval);

struct CookingPage__Template__Template2 : ::g::Uno::UX::Template
{
    uStrong< ::g::Uno::UX::Property1*> __gen4_Url_inst1;
    uStrong< ::g::Uno::UX::Property1*> __gen5_Right_inst1;
    uWeak< ::g::CookingPage__Template*> __parent1;
    uWeak< ::g::Fuse::Controls::Panel*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return CookingPage__Template__Template2_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return CookingPage__Template__Template2_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return CookingPage__Template__Template2_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return CookingPage__Template__Template2_typeof()->Init(), __selector3_; }
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;

    void ctor_1(::g::CookingPage__Template* parent, ::g::Fuse::Controls::Panel* parentInstance);
    static CookingPage__Template__Template2* New2(::g::CookingPage__Template* parent, ::g::Fuse::Controls::Panel* parentInstance);
};
// }

} // ::g
