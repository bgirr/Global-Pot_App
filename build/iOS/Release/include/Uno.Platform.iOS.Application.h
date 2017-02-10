// This file was generated based on C:\Users\EliteBook-User\AppData\Local\Fusetools\Packages\UnoCore\0.44.5\source\uno\platform\ios\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace ObjC{struct Object;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Platform{namespace iOS{struct Application;}}}}

namespace g{
namespace Uno{
namespace Platform{
namespace iOS{

// public static extern class Application :182
// {
uClassType* Application_typeof();
void Application__DispatchDelayedLocalNotifications_fn(int* state);
void Application__DispatchDelayedNotifications_fn(int* state);
void Application__DispatchDelayedReason_fn(int* state);
void Application__DispatchDelayedRegToken_fn(int* state);
void Application__GetRootView_fn(::g::ObjC::Object** __retval);
void Application__IsLandscape_fn(bool* __retval);
void Application__IsRootView_fn(::g::ObjC::Object* view, bool* __retval);
void Application__add_NotificationRegistrationFailed_fn(uDelegate* value);
void Application__remove_NotificationRegistrationFailed_fn(uDelegate* value);
void Application__add_NotificationRegistrationSucceeded_fn(uDelegate* value);
void Application__remove_NotificationRegistrationSucceeded_fn(uDelegate* value);
void Application__OnNotificationRegistrationFailed_fn(uString* reason);
void Application__OnNotificationRegistrationSucceeded_fn(uString* regID);
void Application__OnReceivedLocalNotification_fn(uString* notification);
void Application__OnReceivedNotification_fn(uString* notification);
void Application__add_ReceivedLocalNotification_fn(uDelegate* value);
void Application__remove_ReceivedLocalNotification_fn(uDelegate* value);
void Application__add_ReceivedNotification_fn(uDelegate* value);
void Application__remove_ReceivedNotification_fn(uDelegate* value);
void Application__SetRootView_fn(::g::ObjC::Object* view);

struct Application : uObject
{
    static uSStrong< ::g::Uno::Collections::List*> DelayedLocalNotifications_;
    static uSStrong< ::g::Uno::Collections::List*>& DelayedLocalNotifications() { return Application_typeof()->Init(), DelayedLocalNotifications_; }
    static uSStrong< ::g::Uno::Collections::List*> DelayedNotifications_;
    static uSStrong< ::g::Uno::Collections::List*>& DelayedNotifications() { return Application_typeof()->Init(), DelayedNotifications_; }
    static uSStrong<uString*> DelayedReason_;
    static uSStrong<uString*>& DelayedReason() { return Application_typeof()->Init(), DelayedReason_; }
    static uSStrong<uString*> DelayedRegToken_;
    static uSStrong<uString*>& DelayedRegToken() { return Application_typeof()->Init(), DelayedRegToken_; }
    static uSStrong<uDelegate*> NotificationRegistrationFailed1_;
    static uSStrong<uDelegate*>& NotificationRegistrationFailed1() { return Application_typeof()->Init(), NotificationRegistrationFailed1_; }
    static uSStrong<uDelegate*> NotificationRegistrationSucceeded1_;
    static uSStrong<uDelegate*>& NotificationRegistrationSucceeded1() { return Application_typeof()->Init(), NotificationRegistrationSucceeded1_; }
    static uSStrong<uDelegate*> ReceivedLocalNotification1_;
    static uSStrong<uDelegate*>& ReceivedLocalNotification1() { return Application_typeof()->Init(), ReceivedLocalNotification1_; }
    static uSStrong<uDelegate*> ReceivedNotification1_;
    static uSStrong<uDelegate*>& ReceivedNotification1() { return Application_typeof()->Init(), ReceivedNotification1_; }

    static void DispatchDelayedLocalNotifications(int state);
    static void DispatchDelayedNotifications(int state);
    static void DispatchDelayedReason(int state);
    static void DispatchDelayedRegToken(int state);
    static ::g::ObjC::Object* GetRootView();
    static bool IsLandscape();
    static bool IsRootView(::g::ObjC::Object* view);
    static void OnNotificationRegistrationFailed(uString* reason);
    static void OnNotificationRegistrationSucceeded(uString* regID);
    static void OnReceivedLocalNotification(uString* notification);
    static void OnReceivedNotification(uString* notification);
    static void SetRootView(::g::ObjC::Object* view);
    static void add_NotificationRegistrationFailed(uDelegate* value);
    static void remove_NotificationRegistrationFailed(uDelegate* value);
    static void add_NotificationRegistrationSucceeded(uDelegate* value);
    static void remove_NotificationRegistrationSucceeded(uDelegate* value);
    static void add_ReceivedLocalNotification(uDelegate* value);
    static void remove_ReceivedLocalNotification(uDelegate* value);
    static void add_ReceivedNotification(uDelegate* value);
    static void remove_ReceivedNotification(uDelegate* value);
};
// }

}}}} // ::g::Uno::Platform::iOS
