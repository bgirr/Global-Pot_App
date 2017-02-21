// This file was generated based on 'F:\Global Pot_App\.uno\ux11\RecipePage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct RecipePage;}
namespace g{struct RecipePage__Template2;}

namespace g{

// public partial sealed class RecipePage.Template2 :200
// {
::g::Uno::UX::Template_type* RecipePage__Template2_typeof();
void RecipePage__Template2__ctor_1_fn(RecipePage__Template2* __this, ::g::RecipePage* parent, ::g::RecipePage* parentInstance);
void RecipePage__Template2__New1_fn(RecipePage__Template2* __this, uObject** __retval);
void RecipePage__Template2__New2_fn(::g::RecipePage* parent, ::g::RecipePage* parentInstance, RecipePage__Template2** __retval);

struct RecipePage__Template2 : ::g::Uno::UX::Template
{
    uWeak< ::g::RecipePage*> __parent1;
    uWeak< ::g::RecipePage*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return RecipePage__Template2_typeof()->Init(), __selector0_; }

    void ctor_1(::g::RecipePage* parent, ::g::RecipePage* parentInstance);
    static RecipePage__Template2* New2(::g::RecipePage* parent, ::g::RecipePage* parentInstance);
};
// }

} // ::g
