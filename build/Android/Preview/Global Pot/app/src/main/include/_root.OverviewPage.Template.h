// This file was generated based on 'F:\Global Pot_App\build\Android\Preview\cache\ux11\OverviewPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct OverviewPage;}
namespace g{struct OverviewPage__Template;}

namespace g{

// public partial sealed class OverviewPage.Template :6
// {
::g::Uno::UX::Template_type* OverviewPage__Template_typeof();
void OverviewPage__Template__ctor_1_fn(OverviewPage__Template* __this, ::g::OverviewPage* parent, ::g::OverviewPage* parentInstance);
void OverviewPage__Template__New1_fn(OverviewPage__Template* __this, uObject** __retval);
void OverviewPage__Template__New2_fn(::g::OverviewPage* parent, ::g::OverviewPage* parentInstance, OverviewPage__Template** __retval);

struct OverviewPage__Template : ::g::Uno::UX::Template
{
    uWeak< ::g::OverviewPage*> __parent1;
    uWeak< ::g::OverviewPage*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return OverviewPage__Template_typeof()->Init(), __selector0_; }
    uStrong< ::g::Uno::UX::Property1*> temp_Items_inst;

    void ctor_1(::g::OverviewPage* parent, ::g::OverviewPage* parentInstance);
    static OverviewPage__Template* New2(::g::OverviewPage* parent, ::g::OverviewPage* parentInstance);
};
// }

} // ::g
