// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.iOS.StatusBarConfig.h>
#include <Fuse.Node.h>
#include <Uno.Bool.h>
#include <Uno.Collections.List-1.h>
static uType* TYPES[1];

namespace g{
namespace Fuse{
namespace iOS{

// C:\Users\EliteBook-User\AppData\Local\Fusetools\Packages\Fuse.iOS\0.44.1\$.uno
// ------------------------------------------------------------------------------

// public sealed class StatusBarConfig :432
// {
// static StatusBarConfig() :432
static void StatusBarConfig__cctor_1_fn(uType* __type)
{
    StatusBarConfig::_stack_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<Fuse.iOS.StatusBarConfig>*/]));
}

static void StatusBarConfig_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(type, NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface3));
    type->SetFields(13,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::iOS::StatusBarConfig, _hasIsVisible), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::iOS::StatusBarConfig, _isVisible), 0,
        ::TYPES[0/*Uno.Collections.List<Fuse.iOS.StatusBarConfig>*/], (uintptr_t)&::g::Fuse::iOS::StatusBarConfig::_stack_, uFieldFlagsStatic);
}

::g::Fuse::Node_type* StatusBarConfig_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 16;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(StatusBarConfig);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.iOS.StatusBarConfig", options);
    type->fp_build_ = StatusBarConfig_build;
    type->fp_ctor_ = (void*)StatusBarConfig__New2_fn;
    type->fp_cctor_ = StatusBarConfig__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))StatusBarConfig__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))StatusBarConfig__OnUnrooted_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated StatusBarConfig() :432
void StatusBarConfig__ctor_3_fn(StatusBarConfig* __this)
{
    __this->ctor_3();
}

// private static void Apply() :540
void StatusBarConfig__Apply_fn()
{
    StatusBarConfig::Apply();
}

// public bool get_IsVisible() :442
void StatusBarConfig__get_IsVisible_fn(StatusBarConfig* __this, bool* __retval)
{
    *__retval = __this->IsVisible();
}

// public void set_IsVisible(bool value) :443
void StatusBarConfig__set_IsVisible_fn(StatusBarConfig* __this, bool* value)
{
    __this->IsVisible(*value);
}

// public generated StatusBarConfig New() :432
void StatusBarConfig__New2_fn(StatusBarConfig** __retval)
{
    *__retval = StatusBarConfig::New2();
}

// protected override sealed void OnRooted() :494
void StatusBarConfig__OnRooted_fn(StatusBarConfig* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);
    ::g::Uno::Collections::List__Add_fn(uPtr(StatusBarConfig::_stack()), __this);
    StatusBarConfig::Apply();
}

// protected override sealed void OnUnrooted() :502
void StatusBarConfig__OnUnrooted_fn(StatusBarConfig* __this)
{
    bool ret8;
    ::g::Uno::Collections::List__Remove_fn(uPtr(StatusBarConfig::_stack()), __this, &ret8);
    StatusBarConfig::Apply();
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

uSStrong< ::g::Uno::Collections::List*> StatusBarConfig::_stack_;

// public generated StatusBarConfig() [instance] :432
void StatusBarConfig::ctor_3()
{
    ctor_2();
}

// public bool get_IsVisible() [instance] :442
bool StatusBarConfig::IsVisible()
{
    return _isVisible;
}

// public void set_IsVisible(bool value) [instance] :443
void StatusBarConfig::IsVisible(bool value)
{
    if (!_hasIsVisible || (_isVisible != value))
    {
        _isVisible = value;
        _hasIsVisible = true;
        StatusBarConfig::Apply();
    }
}

// private static void Apply() [static] :540
void StatusBarConfig::Apply()
{
    StatusBarConfig_typeof()->Init();
}

// public generated StatusBarConfig New() [static] :432
StatusBarConfig* StatusBarConfig::New2()
{
    StatusBarConfig* obj1 = (StatusBarConfig*)uNew(StatusBarConfig_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

}}} // ::g::Fuse::iOS