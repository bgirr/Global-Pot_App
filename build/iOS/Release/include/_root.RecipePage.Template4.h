// This file was generated based on 'F:\Global Pot_App\.uno\ux11\RecipePage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct RecipePage;}
namespace g{struct RecipePage__Template4;}

namespace g{

// public partial sealed class RecipePage.Template4 :420
// {
::g::Uno::UX::Template_type* RecipePage__Template4_typeof();
void RecipePage__Template4__ctor_1_fn(RecipePage__Template4* __this, ::g::RecipePage* parent, ::g::RecipePage* parentInstance);
void RecipePage__Template4__New1_fn(RecipePage__Template4* __this, uObject** __retval);
void RecipePage__Template4__New2_fn(::g::RecipePage* parent, ::g::RecipePage* parentInstance, RecipePage__Template4** __retval);

struct RecipePage__Template4 : ::g::Uno::UX::Template
{
    uWeak< ::g::RecipePage*> __parent1;
    uWeak< ::g::RecipePage*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return RecipePage__Template4_typeof()->Init(), __selector0_; }

    void ctor_1(::g::RecipePage* parent, ::g::RecipePage* parentInstance);
    static RecipePage__Template4* New2(::g::RecipePage* parent, ::g::RecipePage* parentInstance);
};
// }

} // ::g