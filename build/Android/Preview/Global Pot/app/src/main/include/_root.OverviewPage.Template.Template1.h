// This file was generated based on 'F:\Global Pot_App\build\Android\Preview\cache\ux11\OverviewPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Controls{struct StackPanel;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct OverviewPage__Template;}
namespace g{struct OverviewPage__Template__Template1;}

namespace g{

// public partial sealed class OverviewPage.Template.Template1 :16
// {
::g::Uno::UX::Template_type* OverviewPage__Template__Template1_typeof();
void OverviewPage__Template__Template1__ctor_1_fn(OverviewPage__Template__Template1* __this, ::g::OverviewPage__Template* parent, ::g::Fuse::Controls::StackPanel* parentInstance);
void OverviewPage__Template__Template1__New1_fn(OverviewPage__Template__Template1* __this, uObject** __retval);
void OverviewPage__Template__Template1__New2_fn(::g::OverviewPage__Template* parent, ::g::Fuse::Controls::StackPanel* parentInstance, OverviewPage__Template__Template1** __retval);

struct OverviewPage__Template__Template1 : ::g::Uno::UX::Template
{
    uStrong< ::g::Uno::UX::Property1*> __gen1_Right_inst1;
    uWeak< ::g::OverviewPage__Template*> __parent1;
    uWeak< ::g::Fuse::Controls::StackPanel*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return OverviewPage__Template__Template1_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return OverviewPage__Template__Template1_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return OverviewPage__Template__Template1_typeof()->Init(), __selector2_; }
    uStrong< ::g::Uno::UX::Property1*> self_Url_inst;

    void ctor_1(::g::OverviewPage__Template* parent, ::g::Fuse::Controls::StackPanel* parentInstance);
    static OverviewPage__Template__Template1* New2(::g::OverviewPage__Template* parent, ::g::Fuse::Controls::StackPanel* parentInstance);
};
// }

} // ::g
