// This file was generated based on 'F:\Global Pot_App\build\Android\Preview\cache\ux11\RecipePage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct RecipePage;}
namespace g{struct RecipePage__Template3;}

namespace g{

// public partial sealed class RecipePage.Template3 :224
// {
::g::Uno::UX::Template_type* RecipePage__Template3_typeof();
void RecipePage__Template3__ctor_1_fn(RecipePage__Template3* __this, ::g::RecipePage* parent, ::g::RecipePage* parentInstance);
void RecipePage__Template3__New1_fn(RecipePage__Template3* __this, uObject** __retval);
void RecipePage__Template3__New2_fn(::g::RecipePage* parent, ::g::RecipePage* parentInstance, RecipePage__Template3** __retval);

struct RecipePage__Template3 : ::g::Uno::UX::Template
{
    uWeak< ::g::RecipePage*> __parent1;
    uWeak< ::g::RecipePage*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return RecipePage__Template3_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return RecipePage__Template3_typeof()->Init(), __selector1_; }
    uStrong< ::g::Uno::UX::Property1*> temp_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;

    void ctor_1(::g::RecipePage* parent, ::g::RecipePage* parentInstance);
    static RecipePage__Template3* New2(::g::RecipePage* parent, ::g::RecipePage* parentInstance);
};
// }

} // ::g
