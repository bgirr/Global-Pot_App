// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Scripting.V8.Handle.h>
#include <Fuse.Scripting.V8.Simple.Context.h>
#include <Fuse.Scripting.V8.Simple.Debug.h>
#include <Fuse.Scripting.V8.Simple.DllDirectory.h>
#include <Fuse.Scripting.V8.Simple.JSArray.h>
#include <Fuse.Scripting.V8.Simple.JSCallback.h>
#include <Fuse.Scripting.V8.Simple.JSCallbackFinalizer.h>
#include <Fuse.Scripting.V8.Simple.JSContext.h>
#include <Fuse.Scripting.V8.Simple.JSDebugMessageHandler.h>
#include <Fuse.Scripting.V8.Simple.JSExternal.h>
#include <Fuse.Scripting.V8.Simple.JSExternalFinalizer.h>
#include <Fuse.Scripting.V8.Simple.JSFunction.h>
#include <Fuse.Scripting.V8.Simple.JSObject.h>
#include <Fuse.Scripting.V8.Simple.JSRuntimeError.h>
#include <Fuse.Scripting.V8.Simple.JSScriptException.h>
#include <Fuse.Scripting.V8.Simple.JSString.h>
#include <Fuse.Scripting.V8.Simple.JSType.h>
#include <Fuse.Scripting.V8.Simple.JSValue.h>
#include <Fuse.Scripting.V8.Simple.ScriptException.h>
#include <Fuse.Scripting.V8.Simple.Value.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Int.h>
#include <Uno.IntPtr.h>
#include <Uno.String.h>
#undef GetMessage
static uType* TYPES[1];

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Simple{

// C:\Users\EliteBook-User\AppData\Local\Fusetools\Packages\Fuse.Scripting.V8\0.44.1\$.uno
// ---------------------------------------------------------------------------------------

// internal static extern class Context :1211
// {
static void Context_build(uType* type)
{
}

uClassType* Context_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.V8.Simple.Context", options);
    type->fp_build_ = Context_build;
    return type;
}

// public static extern Fuse.Scripting.V8.Simple.JSObject CopyGlobalObject(Fuse.Scripting.V8.Simple.JSContext context) :1230
void Context__CopyGlobalObject_fn(::JSContext** context, ::JSObject** __retval)
{
    *__retval = Context::CopyGlobalObject(*context);
}

// public static extern Fuse.Scripting.V8.Simple.JSContext Create() :1216
void Context__Create_fn(::JSContext** __retval)
{
    *__retval = Context::Create();
}

// public static extern Fuse.Scripting.V8.Simple.JSValue EvaluateCreate(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSString fileName, Fuse.Scripting.V8.Simple.JSString code, Fuse.Scripting.V8.Simple.JSScriptException& error) :1229
void Context__EvaluateCreate_fn(::JSContext** context, ::JSString** fileName, ::JSString** code, ::JSScriptException** error, ::JSValue** __retval)
{
    *__retval = Context::EvaluateCreate(*context, *fileName, *code, error);
}

// public static extern string GetV8Version() :1231
void Context__GetV8Version_fn(uString** __retval)
{
    *__retval = Context::GetV8Version();
}

// public static extern void Release(Fuse.Scripting.V8.Simple.JSContext context) :1214
void Context__Release_fn(::JSContext** context)
{
    Context::Release(*context);
}

// public static extern void Retain(Fuse.Scripting.V8.Simple.JSContext context) :1213
void Context__Retain_fn(::JSContext** context)
{
    Context::Retain(*context);
}

// public static extern Fuse.Scripting.V8.Simple.JSObject CopyGlobalObject(Fuse.Scripting.V8.Simple.JSContext context) [static] :1230
::JSObject* Context::CopyGlobalObject(::JSContext* context)
{
    return ::JSContextCopyGlobalObject(context);
}

// public static extern Fuse.Scripting.V8.Simple.JSContext Create() [static] :1216
::JSContext* Context::Create()
{
    return ::CreateJSContext(
    				([] (void* data) -> void
    				{
    					::g::Fuse::Scripting::V8::Handle::Free(data);
    				}),
    				([] (void* external) -> void
    				{
    					::g::Fuse::Scripting::V8::Handle::Free(external);
    				}));
}

// public static extern Fuse.Scripting.V8.Simple.JSValue EvaluateCreate(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSString fileName, Fuse.Scripting.V8.Simple.JSString code, Fuse.Scripting.V8.Simple.JSScriptException& error) [static] :1229
::JSValue* Context::EvaluateCreate(::JSContext* context, ::JSString* fileName, ::JSString* code, ::JSScriptException** error)
{
    return ::JSContextEvaluateCreate(context, fileName, code, error);
}

// public static extern string GetV8Version() [static] :1231
uString* Context::GetV8Version()
{
    return ::uString::Ansi(::GetV8Version());
}

// public static extern void Release(Fuse.Scripting.V8.Simple.JSContext context) [static] :1214
void Context::Release(::JSContext* context)
{
    ::ReleaseJSContext(context);
}

// public static extern void Retain(Fuse.Scripting.V8.Simple.JSContext context) [static] :1213
void Context::Retain(::JSContext* context)
{
    ::RetainJSContext(context);
}
// }

// C:\Users\EliteBook-User\AppData\Local\Fusetools\Packages\Fuse.Scripting.V8\0.44.1\$.uno
// ---------------------------------------------------------------------------------------

// internal static extern class Debug :1239
// {
static void Debug_build(uType* type)
{
}

uClassType* Debug_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.V8.Simple.Debug", options);
    type->fp_build_ = Debug_build;
    return type;
}

// public static extern void ProcessMessages(Fuse.Scripting.V8.Simple.JSContext context) :1243
void Debug__ProcessMessages_fn(::JSContext** context)
{
    Debug::ProcessMessages(*context);
}

// public static extern void SendCommand(Fuse.Scripting.V8.Simple.JSContext context, string command, int length) :1242
void Debug__SendCommand_fn(::JSContext** context, uString* command, int* length)
{
    Debug::SendCommand(*context, command, *length);
}

// public static extern void ProcessMessages(Fuse.Scripting.V8.Simple.JSContext context) [static] :1243
void Debug::ProcessMessages(::JSContext* context)
{
    ::ProcessJSDebugMessages(context);
}

// public static extern void SendCommand(Fuse.Scripting.V8.Simple.JSContext context, string command, int length) [static] :1242
void Debug::SendCommand(::JSContext* context, uString* command, int length)
{
    ::SendJSDebugCommand(context, (uint16_t*)command->Ptr(), length);
}
// }

// C:\Users\EliteBook-User\AppData\Local\Fusetools\Packages\Fuse.Scripting.V8\0.44.1\$.uno
// ---------------------------------------------------------------------------------------

// internal static extern class DllDirectory :1092
// {
static void DllDirectory_build(uType* type)
{
}

uClassType* DllDirectory_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.V8.Simple.DllDirectory", options);
    type->fp_build_ = DllDirectory_build;
    return type;
}

// public static void SetTargetSpecific() :1094
void DllDirectory__SetTargetSpecific_fn()
{
    DllDirectory::SetTargetSpecific();
}

// public static void SetTargetSpecific() [static] :1094
void DllDirectory::SetTargetSpecific()
{
}
// }

// C:\Users\EliteBook-User\AppData\Local\Fusetools\Packages\Fuse.Scripting.V8\0.44.1\$.uno
// ---------------------------------------------------------------------------------------

// internal extern struct JSArray :1171
// {
static void JSArray_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Fuse::Scripting::V8::Simple::JSArray, _handle), 0);
}

uStructType* JSArray_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ValueSize = sizeof(::JSArray*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Simple.JSArray", options);
    type->fp_build_ = JSArray_build;
    return type;
}
// }

// C:\Users\EliteBook-User\AppData\Local\Fusetools\Packages\Fuse.Scripting.V8\0.44.1\$.uno
// ---------------------------------------------------------------------------------------

// internal extern delegate Fuse.Scripting.V8.Simple.JSValue JSCallback(Fuse.Scripting.V8.Simple.JSContext context, Uno.IntPtr data, Fuse.Scripting.V8.Simple.JSValue[] args, int numArgs, Fuse.Scripting.V8.Simple.JSValue& error) :1125
uDelegateType* JSCallback_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.V8.Simple.JSCallback", 5, 0);
    type->SetSignature(::g::Fuse::Scripting::V8::Simple::JSValue_typeof(),
        ::g::Fuse::Scripting::V8::Simple::JSContext_typeof(),
        ::g::Uno::IntPtr_typeof(),
        ::g::Fuse::Scripting::V8::Simple::JSValue_typeof()->Array(),
        ::g::Uno::Int_typeof(),
        ::g::Fuse::Scripting::V8::Simple::JSValue_typeof()->ByRef());
    return type;
}

// C:\Users\EliteBook-User\AppData\Local\Fusetools\Packages\Fuse.Scripting.V8\0.44.1\$.uno
// ---------------------------------------------------------------------------------------

// internal extern delegate void JSCallbackFinalizer(Uno.IntPtr data) :1131
uDelegateType* JSCallbackFinalizer_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.V8.Simple.JSCallbackFinalizer", 1, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Uno::IntPtr_typeof());
    return type;
}

// C:\Users\EliteBook-User\AppData\Local\Fusetools\Packages\Fuse.Scripting.V8\0.44.1\$.uno
// ---------------------------------------------------------------------------------------

// internal extern struct JSContext :1139
// {
static void JSContext_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Fuse::Scripting::V8::Simple::JSContext, _handle), 0);
}

uStructType* JSContext_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ValueSize = sizeof(::JSContext*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Simple.JSContext", options);
    type->fp_build_ = JSContext_build;
    return type;
}
// }

// C:\Users\EliteBook-User\AppData\Local\Fusetools\Packages\Fuse.Scripting.V8\0.44.1\$.uno
// ---------------------------------------------------------------------------------------

// internal extern delegate void JSDebugMessageHandler(Uno.IntPtr data, Fuse.Scripting.V8.Simple.JSString message) :1134
uDelegateType* JSDebugMessageHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.V8.Simple.JSDebugMessageHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Uno::IntPtr_typeof(),
        ::g::Fuse::Scripting::V8::Simple::JSString_typeof());
    return type;
}

// C:\Users\EliteBook-User\AppData\Local\Fusetools\Packages\Fuse.Scripting.V8\0.44.1\$.uno
// ---------------------------------------------------------------------------------------

// internal extern struct JSExternal :1187
// {
static void JSExternal_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Fuse::Scripting::V8::Simple::JSExternal, _handle), 0);
}

uStructType* JSExternal_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ValueSize = sizeof(::JSExternal*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Simple.JSExternal", options);
    type->fp_build_ = JSExternal_build;
    return type;
}
// }

// C:\Users\EliteBook-User\AppData\Local\Fusetools\Packages\Fuse.Scripting.V8\0.44.1\$.uno
// ---------------------------------------------------------------------------------------

// internal extern delegate void JSExternalFinalizer(Uno.IntPtr external) :1128
uDelegateType* JSExternalFinalizer_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.V8.Simple.JSExternalFinalizer", 1, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Uno::IntPtr_typeof());
    return type;
}

// C:\Users\EliteBook-User\AppData\Local\Fusetools\Packages\Fuse.Scripting.V8\0.44.1\$.uno
// ---------------------------------------------------------------------------------------

// internal extern struct JSFunction :1179
// {
static void JSFunction_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Fuse::Scripting::V8::Simple::JSFunction, _handle), 0);
}

uStructType* JSFunction_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ValueSize = sizeof(::JSFunction*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Simple.JSFunction", options);
    type->fp_build_ = JSFunction_build;
    return type;
}
// }

// C:\Users\EliteBook-User\AppData\Local\Fusetools\Packages\Fuse.Scripting.V8\0.44.1\$.uno
// ---------------------------------------------------------------------------------------

// internal extern struct JSObject :1163
// {
static void JSObject_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Fuse::Scripting::V8::Simple::JSObject, _handle), 0);
}

uStructType* JSObject_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ValueSize = sizeof(::JSObject*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Simple.JSObject", options);
    type->fp_build_ = JSObject_build;
    return type;
}
// }

// C:\Users\EliteBook-User\AppData\Local\Fusetools\Packages\Fuse.Scripting.V8\0.44.1\$.uno
// ---------------------------------------------------------------------------------------

// internal extern enum JSRuntimeError :1116
uEnumType* JSRuntimeError_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Scripting.V8.Simple.JSRuntimeError", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "NoError", 0LL,
        "InvalidCast", 1LL,
        "StringTooLong", 2LL,
        "TypeError", 3LL);
    return type;
}

// C:\Users\EliteBook-User\AppData\Local\Fusetools\Packages\Fuse.Scripting.V8\0.44.1\$.uno
// ---------------------------------------------------------------------------------------

// internal extern struct JSScriptException :1196
// {
static void JSScriptException_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::IntPtr_typeof();
    type->SetFields(0,
        ::TYPES[0/*Uno.IntPtr*/], offsetof(::g::Fuse::Scripting::V8::Simple::JSScriptException, _handle), 0);
}

uStructType* JSScriptException_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ValueSize = sizeof(::JSScriptException*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Simple.JSScriptException", options);
    type->fp_build_ = JSScriptException_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))JSScriptException__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))JSScriptException__GetHashCode_fn;
    return type;
}

// public override sealed bool Equals(object that) :1199
void JSScriptException__Equals_fn(::JSScriptException** __this, uType* __type, uObject* that, bool* __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.JSScriptException", "Equals(object)");
    return *__retval = uIs(that, __type) ? JSScriptException::op_Equality(*__this, uUnbox< ::JSScriptException*>(__type, that)) : false, void();
}

// public override sealed int GetHashCode() :1200
void JSScriptException__GetHashCode_fn(::JSScriptException** __this, uType* __type, int* __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.JSScriptException", "GetHashCode()");
    return *__retval = ::g::Uno::IntPtr::GetHashCode(*__this, ::TYPES[0/*Uno.IntPtr*/]), void();
}

// public static operator ==(Fuse.Scripting.V8.Simple.JSScriptException e1, Fuse.Scripting.V8.Simple.JSScriptException e2) :1201
void JSScriptException__op_Equality_fn(::JSScriptException** e1, ::JSScriptException** e2, bool* __retval)
{
    *__retval = JSScriptException::op_Equality(*e1, *e2);
}

// public static operator !=(Fuse.Scripting.V8.Simple.JSScriptException e1, Fuse.Scripting.V8.Simple.JSScriptException e2) :1202
void JSScriptException__op_Inequality_fn(::JSScriptException** e1, ::JSScriptException** e2, bool* __retval)
{
    *__retval = JSScriptException::op_Inequality(*e1, *e2);
}

// public static operator ==(Fuse.Scripting.V8.Simple.JSScriptException e1, Fuse.Scripting.V8.Simple.JSScriptException e2) [static] :1201
bool JSScriptException::op_Equality(::JSScriptException* e1, ::JSScriptException* e2)
{
    return ::g::Uno::IntPtr::op_Equality(e1, e2);
}

// public static operator !=(Fuse.Scripting.V8.Simple.JSScriptException e1, Fuse.Scripting.V8.Simple.JSScriptException e2) [static] :1202
bool JSScriptException::op_Inequality(::JSScriptException* e1, ::JSScriptException* e2)
{
    return ::g::Uno::IntPtr::op_Inequality(e1, e2);
}
// }

// C:\Users\EliteBook-User\AppData\Local\Fusetools\Packages\Fuse.Scripting.V8\0.44.1\$.uno
// ---------------------------------------------------------------------------------------

// internal extern struct JSString :1155
// {
static void JSString_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Fuse::Scripting::V8::Simple::JSString, _handle), 0);
}

uStructType* JSString_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ValueSize = sizeof(::JSString*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Simple.JSString", options);
    type->fp_build_ = JSString_build;
    return type;
}
// }

// C:\Users\EliteBook-User\AppData\Local\Fusetools\Packages\Fuse.Scripting.V8\0.44.1\$.uno
// ---------------------------------------------------------------------------------------

// internal extern enum JSType :1102
uEnumType* JSType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Scripting.V8.Simple.JSType", ::g::Uno::Int_typeof(), 9);
    type->SetLiterals(
        "Null", 0LL,
        "Int", 1LL,
        "Double", 2LL,
        "String", 3LL,
        "Bool", 4LL,
        "Object", 5LL,
        "Array", 6LL,
        "Function", 7LL,
        "External", 8LL);
    return type;
}

// C:\Users\EliteBook-User\AppData\Local\Fusetools\Packages\Fuse.Scripting.V8\0.44.1\$.uno
// ---------------------------------------------------------------------------------------

// internal extern struct JSValue :1147
// {
static void JSValue_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Fuse::Scripting::V8::Simple::JSValue, _handle), 0);
}

uStructType* JSValue_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ValueSize = sizeof(::JSValue*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Simple.JSValue", options);
    type->fp_build_ = JSValue_build;
    return type;
}
// }

// C:\Users\EliteBook-User\AppData\Local\Fusetools\Packages\Fuse.Scripting.V8\0.44.1\$.uno
// ---------------------------------------------------------------------------------------

// internal static extern class ScriptException :1320
// {
static void ScriptException_build(uType* type)
{
}

uClassType* ScriptException_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.V8.Simple.ScriptException", options);
    type->fp_build_ = ScriptException_build;
    return type;
}

// public static extern Fuse.Scripting.V8.Simple.JSValue GetException(Fuse.Scripting.V8.Simple.JSScriptException e) :1324
void ScriptException__GetException_fn(::JSScriptException** e, ::JSValue** __retval)
{
    *__retval = ScriptException::GetException(*e);
}

// public static extern Fuse.Scripting.V8.Simple.JSString GetFileName(Fuse.Scripting.V8.Simple.JSScriptException e) :1326
void ScriptException__GetFileName_fn(::JSScriptException** e, ::JSString** __retval)
{
    *__retval = ScriptException::GetFileName(*e);
}

// public static extern int GetLineNumber(Fuse.Scripting.V8.Simple.JSScriptException e) :1327
void ScriptException__GetLineNumber_fn(::JSScriptException** e, int* __retval)
{
    *__retval = ScriptException::GetLineNumber(*e);
}

// public static extern Fuse.Scripting.V8.Simple.JSString GetMessage(Fuse.Scripting.V8.Simple.JSScriptException e) :1325
void ScriptException__GetMessage_fn(::JSScriptException** e, ::JSString** __retval)
{
    *__retval = ScriptException::GetMessage(*e);
}

// public static extern Fuse.Scripting.V8.Simple.JSString GetSourceLine(Fuse.Scripting.V8.Simple.JSScriptException e) :1329
void ScriptException__GetSourceLine_fn(::JSScriptException** e, ::JSString** __retval)
{
    *__retval = ScriptException::GetSourceLine(*e);
}

// public static extern Fuse.Scripting.V8.Simple.JSString GetStackTrace(Fuse.Scripting.V8.Simple.JSScriptException e) :1328
void ScriptException__GetStackTrace_fn(::JSScriptException** e, ::JSString** __retval)
{
    *__retval = ScriptException::GetStackTrace(*e);
}

// public static extern void Release(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSScriptException e) :1323
void ScriptException__Release_fn(::JSContext** context, ::JSScriptException** e)
{
    ScriptException::Release(*context, *e);
}

// public static extern void Retain(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSScriptException e) :1322
void ScriptException__Retain_fn(::JSContext** context, ::JSScriptException** e)
{
    ScriptException::Retain(*context, *e);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue GetException(Fuse.Scripting.V8.Simple.JSScriptException e) [static] :1324
::JSValue* ScriptException::GetException(::JSScriptException* e)
{
    return ::GetJSScriptException(e);
}

// public static extern Fuse.Scripting.V8.Simple.JSString GetFileName(Fuse.Scripting.V8.Simple.JSScriptException e) [static] :1326
::JSString* ScriptException::GetFileName(::JSScriptException* e)
{
    return ::GetJSScriptExceptionFileName(e);
}

// public static extern int GetLineNumber(Fuse.Scripting.V8.Simple.JSScriptException e) [static] :1327
int ScriptException::GetLineNumber(::JSScriptException* e)
{
    return ::GetJSScriptExceptionLineNumber(e);
}

// public static extern Fuse.Scripting.V8.Simple.JSString GetMessage(Fuse.Scripting.V8.Simple.JSScriptException e) [static] :1325
::JSString* ScriptException::GetMessage(::JSScriptException* e)
{
    return ::GetJSScriptExceptionMessage(e);
}

// public static extern Fuse.Scripting.V8.Simple.JSString GetSourceLine(Fuse.Scripting.V8.Simple.JSScriptException e) [static] :1329
::JSString* ScriptException::GetSourceLine(::JSScriptException* e)
{
    return ::GetJSScriptExceptionSourceLine(e);
}

// public static extern Fuse.Scripting.V8.Simple.JSString GetStackTrace(Fuse.Scripting.V8.Simple.JSScriptException e) [static] :1328
::JSString* ScriptException::GetStackTrace(::JSScriptException* e)
{
    return ::GetJSScriptExceptionStackTrace(e);
}

// public static extern void Release(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSScriptException e) [static] :1323
void ScriptException::Release(::JSContext* context, ::JSScriptException* e)
{
    ::ReleaseJSScriptException(context, e);
}

// public static extern void Retain(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSScriptException e) [static] :1322
void ScriptException::Retain(::JSContext* context, ::JSScriptException* e)
{
    ::RetainJSScriptException(context, e);
}
// }

// C:\Users\EliteBook-User\AppData\Local\Fusetools\Packages\Fuse.Scripting.V8\0.44.1\$.uno
// ---------------------------------------------------------------------------------------

// internal static extern class Value :1251
// {
static void Value_build(uType* type)
{
}

uClassType* Value_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.V8.Simple.Value", options);
    type->fp_build_ = Value_build;
    return type;
}

// public static extern Fuse.Scripting.V8.Simple.JSArray AsArray(Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSRuntimeError& error) :1261
void Value__AsArray_fn(::JSValue** value, int* error, ::JSArray** __retval)
{
    *__retval = Value::AsArray(*value, error);
}

// public static extern bool AsBool(Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSRuntimeError& error) :1259
void Value__AsBool_fn(::JSValue** value, int* error, bool* __retval)
{
    *__retval = Value::AsBool(*value, error);
}

// public static extern double AsDouble(Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSRuntimeError& error) :1257
void Value__AsDouble_fn(::JSValue** value, int* error, double* __retval)
{
    *__retval = Value::AsDouble(*value, error);
}

// public static extern Fuse.Scripting.V8.Simple.JSExternal AsExternal(Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSRuntimeError& error) :1263
void Value__AsExternal_fn(::JSValue** value, int* error, ::JSExternal** __retval)
{
    *__retval = Value::AsExternal(*value, error);
}

// public static extern Fuse.Scripting.V8.Simple.JSFunction AsFunction(Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSRuntimeError& error) :1262
void Value__AsFunction_fn(::JSValue** value, int* error, ::JSFunction** __retval)
{
    *__retval = Value::AsFunction(*value, error);
}

// public static extern int AsInt(Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSRuntimeError& error) :1256
void Value__AsInt_fn(::JSValue** value, int* error, int* __retval)
{
    *__retval = Value::AsInt(*value, error);
}

// public static extern Fuse.Scripting.V8.Simple.JSObject AsObject(Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSRuntimeError& error) :1260
void Value__AsObject_fn(::JSValue** value, int* error, ::JSObject** __retval)
{
    *__retval = Value::AsObject(*value, error);
}

// public static extern Fuse.Scripting.V8.Simple.JSString AsString(Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSRuntimeError& error) :1258
void Value__AsString_fn(::JSValue** value, int* error, ::JSString** __retval)
{
    *__retval = Value::AsString(*value, error);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue AsValue(Fuse.Scripting.V8.Simple.JSArray arr) :1301
void Value__AsValue_fn(::JSArray** arr, ::JSValue** __retval)
{
    *__retval = Value::AsValue(*arr);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue AsValue(Fuse.Scripting.V8.Simple.JSExternal external) :1311
void Value__AsValue1_fn(::JSExternal** external, ::JSValue** __retval)
{
    *__retval = Value::AsValue1(*external);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue AsValue(Fuse.Scripting.V8.Simple.JSFunction fun) :1306
void Value__AsValue2_fn(::JSFunction** fun, ::JSValue** __retval)
{
    *__retval = Value::AsValue2(*fun);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue AsValue(Fuse.Scripting.V8.Simple.JSObject obj) :1295
void Value__AsValue3_fn(::JSObject** obj, ::JSValue** __retval)
{
    *__retval = Value::AsValue3(*obj);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue AsValue(Fuse.Scripting.V8.Simple.JSString str) :1287
void Value__AsValue4_fn(::JSString** str, ::JSValue** __retval)
{
    *__retval = Value::AsValue4(*str);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue CallCreate(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSFunction function, Fuse.Scripting.V8.Simple.JSObject thisObject, Fuse.Scripting.V8.Simple.JSValue[] args, int numArgs, Fuse.Scripting.V8.Simple.JSScriptException& error) :1304
void Value__CallCreate_fn(::JSContext** context, ::JSFunction** function, ::JSObject** thisObject, uArray* args, int* numArgs, ::JSScriptException** error, ::JSValue** __retval)
{
    *__retval = Value::CallCreate(*context, *function, *thisObject, args, *numArgs, error);
}

// public static extern Fuse.Scripting.V8.Simple.JSObject ConstructCreate(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSFunction function, Fuse.Scripting.V8.Simple.JSValue[] args, int numArgs, Fuse.Scripting.V8.Simple.JSScriptException& error) :1305
void Value__ConstructCreate_fn(::JSContext** context, ::JSFunction** function, uArray* args, int* numArgs, ::JSScriptException** error, ::JSObject** __retval)
{
    *__retval = Value::ConstructCreate(*context, *function, args, *numArgs, error);
}

// public static extern Fuse.Scripting.V8.Simple.JSArray CopyOwnPropertyNames(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSObject obj, Fuse.Scripting.V8.Simple.JSScriptException& error) :1292
void Value__CopyOwnPropertyNames_fn(::JSContext** context, ::JSObject** obj, ::JSScriptException** error, ::JSArray** __retval)
{
    *__retval = Value::CopyOwnPropertyNames(*context, *obj, error);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue CopyProperty(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSArray arr, int index, Fuse.Scripting.V8.Simple.JSScriptException& error) :1298
void Value__CopyProperty_fn(::JSContext** context, ::JSArray** arr, int* index, ::JSScriptException** error, ::JSValue** __retval)
{
    *__retval = Value::CopyProperty(*context, *arr, *index, error);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue CopyProperty(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSObject obj, Fuse.Scripting.V8.Simple.JSString key, Fuse.Scripting.V8.Simple.JSScriptException& error) :1290
void Value__CopyProperty1_fn(::JSContext** context, ::JSObject** obj, ::JSString** key, ::JSScriptException** error, ::JSValue** __retval)
{
    *__retval = Value::CopyProperty1(*context, *obj, *key, error);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue CreateBool(bool value) :1270
void Value__CreateBool_fn(bool* value, ::JSValue** __retval)
{
    *__retval = Value::CreateBool(*value);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue CreateDouble(double value) :1269
void Value__CreateDouble_fn(double* value, ::JSValue** __retval)
{
    *__retval = Value::CreateDouble(*value);
}

// public static extern Fuse.Scripting.V8.Simple.JSExternal CreateExternal(Fuse.Scripting.V8.Simple.JSContext context, Uno.IntPtr value) :1309
void Value__CreateExternal_fn(::JSContext** context, void** value, ::JSExternal** __retval)
{
    *__retval = Value::CreateExternal(*context, *value);
}

// public static extern Fuse.Scripting.V8.Simple.JSObject CreateExternalArrayBuffer(Fuse.Scripting.V8.Simple.JSContext context, Uno.IntPtr data, int byteLength) :1271
void Value__CreateExternalArrayBuffer_fn(::JSContext** context, void** data, int* byteLength, ::JSObject** __retval)
{
    *__retval = Value::CreateExternalArrayBuffer(*context, *data, *byteLength);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue CreateInt(int value) :1268
void Value__CreateInt_fn(int* value, ::JSValue** __retval)
{
    *__retval = Value::CreateInt(*value);
}

// public static extern Fuse.Scripting.V8.Simple.JSString CreateString(Fuse.Scripting.V8.Simple.JSContext context, string buffer, int length, Fuse.Scripting.V8.Simple.JSRuntimeError& error) :1275
void Value__CreateString_fn(::JSContext** context, uString* buffer, int* length, int* error, ::JSString** __retval)
{
    *__retval = Value::CreateString(*context, buffer, *length, error);
}

// public static extern Uno.IntPtr GetArrayBufferData(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSObject obj, Fuse.Scripting.V8.Simple.JSRuntimeError& outError) :1294
void Value__GetArrayBufferData_fn(::JSContext** context, ::JSObject** obj, int* outError, void** __retval)
{
    *__retval = Value::GetArrayBufferData(*context, *obj, outError);
}

// public static extern Uno.IntPtr GetExternalValue(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSExternal external) :1310
void Value__GetExternalValue_fn(::JSContext** context, ::JSExternal** external, void** __retval)
{
    *__retval = Value::GetExternalValue(*context, *external);
}

// public static extern Fuse.Scripting.V8.Simple.JSType GetType(Fuse.Scripting.V8.Simple.JSValue value) :1253
void Value__GetType_fn(::JSValue** value, int* __retval)
{
    *__retval = Value::GetType(*value);
}

// public static extern bool HasProperty(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSObject obj, Fuse.Scripting.V8.Simple.JSString key, Fuse.Scripting.V8.Simple.JSScriptException& error) :1293
void Value__HasProperty_fn(::JSContext** context, ::JSObject** obj, ::JSString** key, ::JSScriptException** error, bool* __retval)
{
    *__retval = Value::HasProperty(*context, *obj, *key, error);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue JSNull() :1267
void Value__JSNull_fn(::JSValue** __retval)
{
    *__retval = Value::JSNull();
}

// public static extern int Length(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSArray arr) :1300
void Value__Length_fn(::JSContext** context, ::JSArray** arr, int* __retval)
{
    *__retval = Value::Length(*context, *arr);
}

// public static extern int Length(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSString str) :1276
void Value__Length1_fn(::JSContext** context, ::JSString** str, int* __retval)
{
    *__retval = Value::Length1(*context, *str);
}

// public static extern void Release(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSValue value) :1255
void Value__Release_fn(::JSContext** context, ::JSValue** value)
{
    Value::Release(*context, *value);
}

// public static extern void Retain(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSValue value) :1254
void Value__Retain_fn(::JSContext** context, ::JSValue** value)
{
    Value::Retain(*context, *value);
}

// public static extern void SetProperty(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSArray arr, int index, Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSScriptException& error) :1299
void Value__SetProperty_fn(::JSContext** context, ::JSArray** arr, int* index, ::JSValue** value, ::JSScriptException** error)
{
    Value::SetProperty(*context, *arr, *index, *value, error);
}

// public static extern void SetProperty(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSObject obj, Fuse.Scripting.V8.Simple.JSString key, Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSScriptException& error) :1291
void Value__SetProperty1_fn(::JSContext** context, ::JSObject** obj, ::JSString** key, ::JSValue** value, ::JSScriptException** error)
{
    Value::SetProperty1(*context, *obj, *key, *value, error);
}

// public static extern bool StrictEquals(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSValue obj1, Fuse.Scripting.V8.Simple.JSValue obj2) :1264
void Value__StrictEquals_fn(::JSContext** context, ::JSValue** obj1, ::JSValue** obj2, bool* __retval)
{
    *__retval = Value::StrictEquals(*context, *obj1, *obj2);
}

// public static extern string ToString(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSString str) :1277
void Value__ToString_fn(::JSContext** context, ::JSString** str, uString** __retval)
{
    *__retval = Value::ToString(*context, *str);
}

// public static extern Fuse.Scripting.V8.Simple.JSArray AsArray(Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSRuntimeError& error) [static] :1261
::JSArray* Value::AsArray(::JSValue* value, int* error)
{
    return ::JSValueAsArray(value, (::JSRuntimeError*)error);
}

// public static extern bool AsBool(Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSRuntimeError& error) [static] :1259
bool Value::AsBool(::JSValue* value, int* error)
{
    return ::JSValueAsBool(value, (::JSRuntimeError*)error);
}

// public static extern double AsDouble(Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSRuntimeError& error) [static] :1257
double Value::AsDouble(::JSValue* value, int* error)
{
    return ::JSValueAsDouble(value, (::JSRuntimeError*)error);
}

// public static extern Fuse.Scripting.V8.Simple.JSExternal AsExternal(Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSRuntimeError& error) [static] :1263
::JSExternal* Value::AsExternal(::JSValue* value, int* error)
{
    return ::JSValueAsExternal(value, (::JSRuntimeError*)error);
}

// public static extern Fuse.Scripting.V8.Simple.JSFunction AsFunction(Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSRuntimeError& error) [static] :1262
::JSFunction* Value::AsFunction(::JSValue* value, int* error)
{
    return ::JSValueAsFunction(value, (::JSRuntimeError*)error);
}

// public static extern int AsInt(Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSRuntimeError& error) [static] :1256
int Value::AsInt(::JSValue* value, int* error)
{
    return ::JSValueAsInt(value, (::JSRuntimeError*)error);
}

// public static extern Fuse.Scripting.V8.Simple.JSObject AsObject(Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSRuntimeError& error) [static] :1260
::JSObject* Value::AsObject(::JSValue* value, int* error)
{
    return ::JSValueAsObject(value, (::JSRuntimeError*)error);
}

// public static extern Fuse.Scripting.V8.Simple.JSString AsString(Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSRuntimeError& error) [static] :1258
::JSString* Value::AsString(::JSValue* value, int* error)
{
    return ::JSValueAsString(value, (::JSRuntimeError*)error);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue AsValue(Fuse.Scripting.V8.Simple.JSArray arr) [static] :1301
::JSValue* Value::AsValue(::JSArray* arr)
{
    return ::JSArrayAsValue(arr);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue AsValue(Fuse.Scripting.V8.Simple.JSExternal external) [static] :1311
::JSValue* Value::AsValue1(::JSExternal* external)
{
    return ::JSExternalAsValue(external);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue AsValue(Fuse.Scripting.V8.Simple.JSFunction fun) [static] :1306
::JSValue* Value::AsValue2(::JSFunction* fun)
{
    return ::JSFunctionAsValue(fun);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue AsValue(Fuse.Scripting.V8.Simple.JSObject obj) [static] :1295
::JSValue* Value::AsValue3(::JSObject* obj)
{
    return ::JSObjectAsValue(obj);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue AsValue(Fuse.Scripting.V8.Simple.JSString str) [static] :1287
::JSValue* Value::AsValue4(::JSString* str)
{
    return ::JSStringAsValue(str);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue CallCreate(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSFunction function, Fuse.Scripting.V8.Simple.JSObject thisObject, Fuse.Scripting.V8.Simple.JSValue[] args, int numArgs, Fuse.Scripting.V8.Simple.JSScriptException& error) [static] :1304
::JSValue* Value::CallCreate(::JSContext* context, ::JSFunction* function, ::JSObject* thisObject, uArray* args, int numArgs, ::JSScriptException** error)
{
    return ::CallJSFunctionCreate(context, function, thisObject, (::JSValue**)args->Ptr(), numArgs, error);
}

// public static extern Fuse.Scripting.V8.Simple.JSObject ConstructCreate(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSFunction function, Fuse.Scripting.V8.Simple.JSValue[] args, int numArgs, Fuse.Scripting.V8.Simple.JSScriptException& error) [static] :1305
::JSObject* Value::ConstructCreate(::JSContext* context, ::JSFunction* function, uArray* args, int numArgs, ::JSScriptException** error)
{
    return ::ConstructJSFunctionCreate(context, function, (::JSValue**)args->Ptr(), numArgs, error);
}

// public static extern Fuse.Scripting.V8.Simple.JSArray CopyOwnPropertyNames(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSObject obj, Fuse.Scripting.V8.Simple.JSScriptException& error) [static] :1292
::JSArray* Value::CopyOwnPropertyNames(::JSContext* context, ::JSObject* obj, ::JSScriptException** error)
{
    return ::CopyJSObjectOwnPropertyNames(context, obj, error);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue CopyProperty(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSArray arr, int index, Fuse.Scripting.V8.Simple.JSScriptException& error) [static] :1298
::JSValue* Value::CopyProperty(::JSContext* context, ::JSArray* arr, int index, ::JSScriptException** error)
{
    return ::CopyJSArrayPropertyAtIndex(context, arr, index, error);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue CopyProperty(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSObject obj, Fuse.Scripting.V8.Simple.JSString key, Fuse.Scripting.V8.Simple.JSScriptException& error) [static] :1290
::JSValue* Value::CopyProperty1(::JSContext* context, ::JSObject* obj, ::JSString* key, ::JSScriptException** error)
{
    return ::CopyJSObjectProperty(context, obj, key, error);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue CreateBool(bool value) [static] :1270
::JSValue* Value::CreateBool(bool value)
{
    return ::CreateJSBool(value);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue CreateDouble(double value) [static] :1269
::JSValue* Value::CreateDouble(double value)
{
    return ::CreateJSDouble(value);
}

// public static extern Fuse.Scripting.V8.Simple.JSExternal CreateExternal(Fuse.Scripting.V8.Simple.JSContext context, Uno.IntPtr value) [static] :1309
::JSExternal* Value::CreateExternal(::JSContext* context, void* value)
{
    return ::CreateJSExternal(context, value);
}

// public static extern Fuse.Scripting.V8.Simple.JSObject CreateExternalArrayBuffer(Fuse.Scripting.V8.Simple.JSContext context, Uno.IntPtr data, int byteLength) [static] :1271
::JSObject* Value::CreateExternalArrayBuffer(::JSContext* context, void* data, int byteLength)
{
    return ::CreateExternalJSArrayBuffer(context, data, byteLength);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue CreateInt(int value) [static] :1268
::JSValue* Value::CreateInt(int value)
{
    return ::CreateJSInt(value);
}

// public static extern Fuse.Scripting.V8.Simple.JSString CreateString(Fuse.Scripting.V8.Simple.JSContext context, string buffer, int length, Fuse.Scripting.V8.Simple.JSRuntimeError& error) [static] :1275
::JSString* Value::CreateString(::JSContext* context, uString* buffer, int length, int* error)
{
    return ::CreateJSString(context, (uint16_t*)buffer->Ptr(), length, (::JSRuntimeError*)error);
}

// public static extern Uno.IntPtr GetArrayBufferData(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSObject obj, Fuse.Scripting.V8.Simple.JSRuntimeError& outError) [static] :1294
void* Value::GetArrayBufferData(::JSContext* context, ::JSObject* obj, int* outError)
{
    return ::GetJSObjectArrayBufferData(context, obj, (::JSRuntimeError*)outError);
}

// public static extern Uno.IntPtr GetExternalValue(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSExternal external) [static] :1310
void* Value::GetExternalValue(::JSContext* context, ::JSExternal* external)
{
    return ::GetJSExternalValue(context, external);
}

// public static extern Fuse.Scripting.V8.Simple.JSType GetType(Fuse.Scripting.V8.Simple.JSValue value) [static] :1253
int Value::GetType(::JSValue* value)
{
    return (int)::GetJSValueType(value);
}

// public static extern bool HasProperty(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSObject obj, Fuse.Scripting.V8.Simple.JSString key, Fuse.Scripting.V8.Simple.JSScriptException& error) [static] :1293
bool Value::HasProperty(::JSContext* context, ::JSObject* obj, ::JSString* key, ::JSScriptException** error)
{
    return ::JSObjectHasProperty(context, obj, key, error);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue JSNull() [static] :1267
::JSValue* Value::JSNull()
{
    return ::JSNull();
}

// public static extern int Length(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSArray arr) [static] :1300
int Value::Length(::JSContext* context, ::JSArray* arr)
{
    return ::JSArrayLength(context, arr);
}

// public static extern int Length(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSString str) [static] :1276
int Value::Length1(::JSContext* context, ::JSString* str)
{
    return ::JSStringLength(context, str);
}

// public static extern void Release(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSValue value) [static] :1255
void Value::Release(::JSContext* context, ::JSValue* value)
{
    ::ReleaseJSValue(context, value);
}

// public static extern void Retain(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSValue value) [static] :1254
void Value::Retain(::JSContext* context, ::JSValue* value)
{
    ::RetainJSValue(context, value);
}

// public static extern void SetProperty(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSArray arr, int index, Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSScriptException& error) [static] :1299
void Value::SetProperty(::JSContext* context, ::JSArray* arr, int index, ::JSValue* value, ::JSScriptException** error)
{
    ::SetJSArrayPropertyAtIndex(context, arr, index, value, error);
}

// public static extern void SetProperty(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSObject obj, Fuse.Scripting.V8.Simple.JSString key, Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSScriptException& error) [static] :1291
void Value::SetProperty1(::JSContext* context, ::JSObject* obj, ::JSString* key, ::JSValue* value, ::JSScriptException** error)
{
    ::SetJSObjectProperty(context, obj, key, value, error);
}

// public static extern bool StrictEquals(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSValue obj1, Fuse.Scripting.V8.Simple.JSValue obj2) [static] :1264
bool Value::StrictEquals(::JSContext* context, ::JSValue* obj1, ::JSValue* obj2)
{
    return ::JSValueStrictEquals(context, obj1, obj2);
}

// public static extern string ToString(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSString str) [static] :1277
uString* Value::ToString(::JSContext* context, ::JSString* str)
{
    int len = Value::Length1(context, str);
    uString* result = ::uString::New(len);
    					::WriteJSStringBuffer(context, str, (uint16_t*)result->Ptr(), false);
    					return result;
}
// }

}}}}} // ::g::Fuse::Scripting::V8::Simple
