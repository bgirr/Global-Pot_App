// This file was generated based on 'F:\Global Pot_App\.uno\ux11\RecipePage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Controls{struct Rectangle;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct RecipePage__Template3;}
namespace g{struct RecipePage__Template3__Template4;}

namespace g{

// public partial sealed class RecipePage.Template3.Template4 :234
// {
::g::Uno::UX::Template_type* RecipePage__Template3__Template4_typeof();
void RecipePage__Template3__Template4__ctor_1_fn(RecipePage__Template3__Template4* __this, ::g::RecipePage__Template3* parent, ::g::Fuse::Controls::Rectangle* parentInstance);
void RecipePage__Template3__Template4__New1_fn(RecipePage__Template3__Template4* __this, uObject** __retval);
void RecipePage__Template3__Template4__New2_fn(::g::RecipePage__Template3* parent, ::g::Fuse::Controls::Rectangle* parentInstance, RecipePage__Template3__Template4** __retval);

struct RecipePage__Template3__Template4 : ::g::Uno::UX::Template
{
    uStrong< ::g::Uno::UX::Property1*> __gen10_Right_inst1;
    uStrong< ::g::Uno::UX::Property1*> __gen9_Url_inst1;
    uWeak< ::g::RecipePage__Template3*> __parent1;
    uWeak< ::g::Fuse::Controls::Rectangle*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return RecipePage__Template3__Template4_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return RecipePage__Template3__Template4_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return RecipePage__Template3__Template4_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return RecipePage__Template3__Template4_typeof()->Init(), __selector3_; }
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;

    void ctor_1(::g::RecipePage__Template3* parent, ::g::Fuse::Controls::Rectangle* parentInstance);
    static RecipePage__Template3__Template4* New2(::g::RecipePage__Template3* parent, ::g::Fuse::Controls::Rectangle* parentInstance);
};
// }

} // ::g
