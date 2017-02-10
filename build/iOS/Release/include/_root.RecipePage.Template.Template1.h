// This file was generated based on 'F:\Global Pot_App\.uno\ux11\RecipePage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct RecipePage__Template;}
namespace g{struct RecipePage__Template__Template1;}

namespace g{

// public partial sealed class RecipePage.Template.Template1 :16
// {
::g::Uno::UX::Template_type* RecipePage__Template__Template1_typeof();
void RecipePage__Template__Template1__ctor_1_fn(RecipePage__Template__Template1* __this, ::g::RecipePage__Template* parent, ::g::Fuse::Controls::Panel* parentInstance);
void RecipePage__Template__Template1__New1_fn(RecipePage__Template__Template1* __this, uObject** __retval);
void RecipePage__Template__Template1__New2_fn(::g::RecipePage__Template* parent, ::g::Fuse::Controls::Panel* parentInstance, RecipePage__Template__Template1** __retval);

struct RecipePage__Template__Template1 : ::g::Uno::UX::Template
{
    uStrong< ::g::Uno::UX::Property1*> __gen9_Right_inst1;
    uWeak< ::g::RecipePage__Template*> __parent1;
    uWeak< ::g::Fuse::Controls::Panel*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return RecipePage__Template__Template1_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return RecipePage__Template__Template1_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return RecipePage__Template__Template1_typeof()->Init(), __selector2_; }
    uStrong< ::g::Uno::UX::Property1*> self_Url_inst;

    void ctor_1(::g::RecipePage__Template* parent, ::g::Fuse::Controls::Panel* parentInstance);
    static RecipePage__Template__Template1* New2(::g::RecipePage__Template* parent, ::g::Fuse::Controls::Panel* parentInstance);
};
// }

} // ::g
