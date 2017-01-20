// This file was generated based on C:\Users\EliteBook-User\AppData\Local\Fusetools\Fuse\App\app-0.31.2.9180\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Diagnostic;}}
namespace g{namespace Outracks{namespace Simulator{struct DiagnosticItem;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// internal sealed class DiagnosticItem :2261
// {
uType* DiagnosticItem_typeof();
void DiagnosticItem__ctor__fn(DiagnosticItem* __this);
void DiagnosticItem__New1_fn(DiagnosticItem** __retval);
void DiagnosticItem__SameAs_fn(DiagnosticItem* __this, ::g::Fuse::Diagnostic* d, bool* __retval);

struct DiagnosticItem : uObject
{
    uStrong< ::g::Fuse::Diagnostic*> Diagnostic;
    double Expire;
    int FrameIndex;

    void ctor_();
    bool SameAs(::g::Fuse::Diagnostic* d);
    static DiagnosticItem* New1();
};
// }

}}} // ::g::Outracks::Simulator
