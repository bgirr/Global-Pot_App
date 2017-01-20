// This file was generated based on C:\Users\EliteBook-User\AppData\Local\Fusetools\Fuse\App\app-0.31.2.9180\Packages\Outracks.Simulator.Protocol.Uno\0.0.0\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Outracks{namespace Simulator{struct FailedToConnectToProxy;}}}
namespace g{namespace Outracks{namespace Simulator{struct ImmutableList;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// public sealed class FailedToConnectToProxy :20
// {
::g::Uno::Exception_type* FailedToConnectToProxy_typeof();
void FailedToConnectToProxy__ctor_3_fn(FailedToConnectToProxy* __this, uObject* innerExceptions);
void FailedToConnectToProxy__New4_fn(uObject* innerExceptions, FailedToConnectToProxy** __retval);

struct FailedToConnectToProxy : ::g::Uno::Exception
{
    uStrong< ::g::Outracks::Simulator::ImmutableList*> InnerExceptions;

    void ctor_3(uObject* innerExceptions);
    static FailedToConnectToProxy* New4(uObject* innerExceptions);
};
// }

}}} // ::g::Outracks::Simulator
