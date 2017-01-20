// This file was generated based on 'F:\Global Pot_App\build\Android\Preview\cache\ux11\RecipePage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct RecipePage;}
namespace g{struct RecipePage__Template;}

namespace g{

// public partial sealed class RecipePage.Template :6
// {
::g::Uno::UX::Template_type* RecipePage__Template_typeof();
void RecipePage__Template__ctor_1_fn(RecipePage__Template* __this, ::g::RecipePage* parent, ::g::RecipePage* parentInstance);
void RecipePage__Template__New1_fn(RecipePage__Template* __this, uObject** __retval);
void RecipePage__Template__New2_fn(::g::RecipePage* parent, ::g::RecipePage* parentInstance, RecipePage__Template** __retval);

struct RecipePage__Template : ::g::Uno::UX::Template
{
    uStrong< ::g::Uno::UX::Property1*> __gen2_Url_inst1;
    uStrong< ::g::Uno::UX::Property1*> __gen3_Right_inst1;
    uWeak< ::g::RecipePage*> __parent1;
    uWeak< ::g::RecipePage*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return RecipePage__Template_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return RecipePage__Template_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return RecipePage__Template_typeof()->Init(), __selector2_; }

    void ctor_1(::g::RecipePage* parent, ::g::RecipePage* parentInstance);
    static RecipePage__Template* New2(::g::RecipePage* parent, ::g::RecipePage* parentInstance);
};
// }

} // ::g
