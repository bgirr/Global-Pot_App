// This file was generated based on C:\Users\EliteBook-User\AppData\Local\Fusetools\Packages\Fuse.Scripting.V8\0.44.1\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <include/V8Simple.h>
#include <Uno.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct Debug;}}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Simple{

// internal static extern class Debug :1239
// {
uClassType* Debug_typeof();
void Debug__ProcessMessages_fn(::JSContext** context);
void Debug__SendCommand_fn(::JSContext** context, uString* command, int* length);

struct Debug : uObject
{
    static void ProcessMessages(::JSContext* context);
    static void SendCommand(::JSContext* context, uString* command, int length);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Simple
