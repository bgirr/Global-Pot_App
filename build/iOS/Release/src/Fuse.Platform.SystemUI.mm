// This file was generated based on C:\Users\EliteBook-User\AppData\Local\Fusetools\Packages\Fuse.Platform\0.44.1\ios\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <AppDelegateSoftKeyboard.h>
#include <CoreGraphics/CoreGraphics.h>
#include <Fuse.Platform.ApplicationState.h>
#include <Fuse.Platform.Lifecycle.h>
#include <Fuse.Platform.StatusBarAnimation.h>
#include <Fuse.Platform.StatusBarStyle.h>
#include <Fuse.Platform.SystemUI.h>
#include <Fuse.Platform.SystemUIID.h>
#include <Fuse.Platform.SystemUIResizeReason.h>
#include <Fuse.Platform.SystemUIWillResizeEventArgs.h>
#include <ObjC.Object.h>
#include <Uno.Bool.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Platform.Display.h>
#include <Uno.Platform.Displays.h>
#include <Uno.Platform.iOS.Application.h>
#include <Uno.Platform.iOS.Support.h>
#include <Uno.Platform.iOS.uCGRect.h>
#include <Uno.Platform.iOS.uCGSize.h>
#include <Uno.Platform.iOSDisplay.h>
#include <Uno-iOS/AppDelegate.h>
#include <uObjC.Foreign.h>
#include <Uno.Rect.h>
static uType* TYPES[3];

namespace g{
namespace Fuse{
namespace Platform{

// public static extern class SystemUI :30
// {
// static SystemUI() :30
static void SystemUI__cctor__fn(uType* __type)
{
    SystemUI::_isTopFrameVisible_ = true;
}

static void SystemUI_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Platform::iOSDisplay_typeof();
    ::TYPES[1] = ::g::Uno::EventHandler_typeof();
    ::TYPES[2] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Fuse::Platform::SystemUIWillResizeEventArgs_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::Platform::SystemUI::_isTopFrameVisible_, uFieldFlagsStatic,
        ::g::Fuse::Platform::StatusBarStyle_typeof(), (uintptr_t)&::g::Fuse::Platform::SystemUI::_style_, uFieldFlagsStatic,
        ::g::Uno::Rect_typeof(), (uintptr_t)&::g::Fuse::Platform::SystemUI::_BottomFrame_, uFieldFlagsStatic,
        ::g::Uno::Rect_typeof(), (uintptr_t)&::g::Fuse::Platform::SystemUI::_Frame_, uFieldFlagsStatic,
        ::g::Fuse::Platform::StatusBarAnimation_typeof(), (uintptr_t)&::g::Fuse::Platform::SystemUI::_uStatusBarAnimation_, uFieldFlagsStatic,
        ::TYPES[2/*Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs>*/], (uintptr_t)&::g::Fuse::Platform::SystemUI::BottomFrameWillResize1_, uFieldFlagsStatic,
        ::TYPES[1/*Uno.EventHandler*/], (uintptr_t)&::g::Fuse::Platform::SystemUI::FrameChanged1_, uFieldFlagsStatic,
        ::TYPES[2/*Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs>*/], (uintptr_t)&::g::Fuse::Platform::SystemUI::TopFrameWillResize1_, uFieldFlagsStatic);
}

uClassType* SystemUI_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Platform.SystemUI", options);
    type->fp_build_ = SystemUI_build;
    type->fp_cctor_ = SystemUI__cctor__fn;
    return type;
}

// private static void _statusBarWillChangeFrame(Uno.Platform.iOS.uCGRect _endFrame, double animationDuration) :188
void SystemUI___statusBarWillChangeFrame_fn(CGRect* _endFrame, double* animationDuration)
{
    SystemUI::_statusBarWillChangeFrame(*_endFrame, *animationDuration);
}

// public static generated Uno.Rect get_BottomFrame() :36
void SystemUI__get_BottomFrame_fn(::g::Uno::Rect* __retval)
{
    *__retval = SystemUI::BottomFrame();
}

// private static generated void set_BottomFrame(Uno.Rect value) :36
void SystemUI__set_BottomFrame_fn(::g::Uno::Rect* value)
{
    SystemUI::BottomFrame(*value);
}

// public static generated void add_BottomFrameWillResize(Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs> value) :33
void SystemUI__add_BottomFrameWillResize_fn(uDelegate* value)
{
    SystemUI::add_BottomFrameWillResize(value);
}

// public static generated void remove_BottomFrameWillResize(Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs> value) :33
void SystemUI__remove_BottomFrameWillResize_fn(uDelegate* value)
{
    SystemUI::remove_BottomFrameWillResize(value);
}

// private static void EnableKeyboardResizeNotifications() :69
void SystemUI__EnableKeyboardResizeNotifications_fn()
{
    SystemUI::EnableKeyboardResizeNotifications();
}

// public static generated Uno.Rect get_Frame() :38
void SystemUI__get_Frame_fn(::g::Uno::Rect* __retval)
{
    *__retval = SystemUI::Frame();
}

// private static generated void set_Frame(Uno.Rect value) :38
void SystemUI__set_Frame_fn(::g::Uno::Rect* value)
{
    SystemUI::Frame(*value);
}

// public static generated void add_FrameChanged(Uno.EventHandler value) :43
void SystemUI__add_FrameChanged_fn(uDelegate* value)
{
    SystemUI::add_FrameChanged(value);
}

// public static generated void remove_FrameChanged(Uno.EventHandler value) :43
void SystemUI__remove_FrameChanged_fn(uDelegate* value)
{
    SystemUI::remove_FrameChanged(value);
}

// private static Uno.Rect GetStatusBarFrame() :179
void SystemUI__GetStatusBarFrame_fn(::g::Uno::Rect* __retval)
{
    *__retval = SystemUI::GetStatusBarFrame();
}

// public static bool get_IsTopFrameVisible() :102
void SystemUI__get_IsTopFrameVisible_fn(bool* __retval)
{
    *__retval = SystemUI::IsTopFrameVisible();
}

// public static void set_IsTopFrameVisible(bool value) :103
void SystemUI__set_IsTopFrameVisible_fn(bool* value)
{
    SystemUI::IsTopFrameVisible(*value);
}

// public static void OnCreate() :56
void SystemUI__OnCreate_fn()
{
    SystemUI::OnCreate();
}

// private static void OnFrameChanged(object s, object a) :44
void SystemUI__OnFrameChanged_fn(uObject* s, uObject* a)
{
    SystemUI::OnFrameChanged(s, a);
}

// private static void OnWillResize(Fuse.Platform.SystemUIWillResizeEventArgs args) :165
void SystemUI__OnWillResize_fn(::g::Fuse::Platform::SystemUIWillResizeEventArgs* args)
{
    SystemUI::OnWillResize(args);
}

// public static extern Uno.Platform.iOS.uCGSize Pre_iOS8_HandleDeviceOrientation_Size(Uno.Platform.iOS.uCGSize cgsize, ObjC.Object view) :134
void SystemUI__Pre_iOS8_HandleDeviceOrientation_Size_fn(CGSize* cgsize, ::g::ObjC::Object* view, CGSize* __retval)
{
    *__retval = SystemUI::Pre_iOS8_HandleDeviceOrientation_Size(*cgsize, view);
}

// public static ObjC.Object get_RootView() :155
void SystemUI__get_RootView_fn(::g::ObjC::Object** __retval)
{
    *__retval = SystemUI::RootView();
}

// public static void set_RootView(ObjC.Object value) :156
void SystemUI__set_RootView_fn(::g::ObjC::Object* value)
{
    SystemUI::RootView(value);
}

// public static Uno.Rect get_TopFrame() :35
void SystemUI__get_TopFrame_fn(::g::Uno::Rect* __retval)
{
    *__retval = SystemUI::TopFrame();
}

// public static generated void add_TopFrameWillResize(Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs> value) :32
void SystemUI__add_TopFrameWillResize_fn(uDelegate* value)
{
    SystemUI::add_TopFrameWillResize(value);
}

// public static generated void remove_TopFrameWillResize(Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs> value) :32
void SystemUI__remove_TopFrameWillResize_fn(uDelegate* value)
{
    SystemUI::remove_TopFrameWillResize(value);
}

// private static void uKeyboardWillChangeFrame(Uno.Platform.iOS.uCGRect frameBegin, Uno.Platform.iOS.uCGRect frameEnd, double animationDuration, int animationCurve, Fuse.Platform.SystemUIResizeReason reason) :218
void SystemUI__uKeyboardWillChangeFrame1_fn(CGRect* frameBegin, CGRect* frameEnd, double* animationDuration, int* animationCurve, int* reason)
{
    SystemUI::uKeyboardWillChangeFrame1(*frameBegin, *frameEnd, *animationDuration, *animationCurve, *reason);
}

// public static generated Fuse.Platform.StatusBarAnimation get_uStatusBarAnimation() :41
void SystemUI__get_uStatusBarAnimation_fn(int* __retval)
{
    *__retval = SystemUI::uStatusBarAnimation1();
}

// public static generated void set_uStatusBarAnimation(Fuse.Platform.StatusBarAnimation value) :41
void SystemUI__set_uStatusBarAnimation_fn(int* value)
{
    SystemUI::uStatusBarAnimation1(*value);
}

// public static Fuse.Platform.StatusBarStyle get_uStatusBarStyle() :251
void SystemUI__get_uStatusBarStyle_fn(int* __retval)
{
    *__retval = SystemUI::uStatusBarStyle1();
}

// public static void set_uStatusBarStyle(Fuse.Platform.StatusBarStyle value) :252
void SystemUI__set_uStatusBarStyle_fn(int* value)
{
    SystemUI::uStatusBarStyle1(*value);
}

bool SystemUI::_isTopFrameVisible_;
int SystemUI::_style_;
::g::Uno::Rect SystemUI::_BottomFrame_;
::g::Uno::Rect SystemUI::_Frame_;
int SystemUI::_uStatusBarAnimation_;
uSStrong<uDelegate*> SystemUI::BottomFrameWillResize1_;
uSStrong<uDelegate*> SystemUI::FrameChanged1_;
uSStrong<uDelegate*> SystemUI::TopFrameWillResize1_;

// private static void _statusBarWillChangeFrame(Uno.Platform.iOS.uCGRect _endFrame, double animationDuration) [static] :188
void SystemUI::_statusBarWillChangeFrame(CGRect _endFrame, double animationDuration)
{
    SystemUI_typeof()->Init();

    if (::g::Fuse::Platform::Lifecycle::State() == 0)
        return;

    float density = uPtr(::g::Uno::Platform::Displays::MainDisplay())->Density();
    ::g::Uno::Rect startFrame = ::g::Uno::Platform::iOS::Support::CGRectToUnoRect(::g::Uno::Platform::iOS::Support::Pre_iOS8_HandleDeviceOrientation_Rect([UIApplication sharedApplication].statusBarFrame, NULL), density);
    ::g::Uno::Rect endFrame = ::g::Uno::Platform::iOS::Support::CGRectToUnoRect(::g::Uno::Platform::iOS::Support::Pre_iOS8_HandleDeviceOrientation_Rect(_endFrame, NULL), density);
    int reason;

    if (startFrame.Height() == 0.0f)
        reason = 0;
    else if (endFrame.Height() == 0.0f)
        reason = 2;
    else
        reason = 1;

    ::g::Fuse::Platform::SystemUIWillResizeEventArgs* args = ::g::Fuse::Platform::SystemUIWillResizeEventArgs::New2(0, reason, endFrame, startFrame, animationDuration, 1);
    SystemUI::OnWillResize(args);
}

// private static void EnableKeyboardResizeNotifications() [static] :69
void SystemUI::EnableKeyboardResizeNotifications()
{
    SystemUI_typeof()->Init();
    @autoreleasepool
    {
        uAppDelegate* _delegate = (uAppDelegate*)[UIApplication sharedApplication].delegate;
        
        			[[NSNotificationCenter defaultCenter]
        			 addObserver:_delegate selector:@selector(uKeyboardWillChangeFrame:)
        			 name:UIKeyboardWillShowNotification object:nil];
        			
        			[[NSNotificationCenter defaultCenter]
        			 addObserver:_delegate
        			 selector:@selector(uKeyboardWillChangeFrame:)
        			 name:UIKeyboardWillHideNotification object:nil];
    }
    
}

// private static Uno.Rect GetStatusBarFrame() [static] :179
::g::Uno::Rect SystemUI::GetStatusBarFrame()
{
    SystemUI_typeof()->Init();
    float density = uPtr(::g::Uno::Platform::Displays::MainDisplay())->Density();
    return ::g::Uno::Platform::iOS::Support::CGRectToUnoRect(::g::Uno::Platform::iOS::Support::Pre_iOS8_HandleDeviceOrientation_Rect([UIApplication sharedApplication].statusBarFrame, NULL), density);
}

// public static void OnCreate() [static] :56
void SystemUI::OnCreate()
{
    SystemUI_typeof()->Init();
    uPtr(uCast< ::g::Uno::Platform::iOSDisplay*>(::g::Uno::Platform::Displays::MainDisplay(), ::TYPES[0/*Uno.Platform.iOSDisplay*/]))->add_FrameChanged(uDelegate::New(::TYPES[1/*Uno.EventHandler*/], (void*)SystemUI__OnFrameChanged_fn));
    SystemUI::OnFrameChanged(NULL, NULL);
    SystemUI::EnableKeyboardResizeNotifications();
}

// private static void OnFrameChanged(object s, object a) [static] :44
void SystemUI::OnFrameChanged(uObject* s, uObject* a)
{
    SystemUI_typeof()->Init();
    ::g::Uno::Platform::iOSDisplay* iDisplay = uCast< ::g::Uno::Platform::iOSDisplay*>(::g::Uno::Platform::Displays::MainDisplay(), ::TYPES[0/*Uno.Platform.iOSDisplay*/]);
    SystemUI::Frame(uPtr(iDisplay)->Frame());
    uDelegate* handler = SystemUI::FrameChanged1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, NULL, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private static void OnWillResize(Fuse.Platform.SystemUIWillResizeEventArgs args) [static] :165
void SystemUI::OnWillResize(::g::Fuse::Platform::SystemUIWillResizeEventArgs* args)
{
    SystemUI_typeof()->Init();

    if (uPtr(args)->ID() == 0)
    {
        uDelegate* handler = SystemUI::TopFrameWillResize1();

        if (::g::Uno::Delegate::op_Inequality(handler, NULL))
            uPtr(handler)->Invoke(2, NULL, args);
    }
    else
    {
        SystemUI::BottomFrame(uPtr(args)->EndFrame());
        uDelegate* handler1 = SystemUI::BottomFrameWillResize1();

        if (::g::Uno::Delegate::op_Inequality(handler1, NULL))
            uPtr(handler1)->Invoke(2, NULL, args);
    }
}

// public static extern Uno.Platform.iOS.uCGSize Pre_iOS8_HandleDeviceOrientation_Size(Uno.Platform.iOS.uCGSize cgsize, ObjC.Object view) [static] :134
CGSize SystemUI::Pre_iOS8_HandleDeviceOrientation_Size(CGSize cgsize, ::g::ObjC::Object* view)
{
    SystemUI_typeof()->Init();
    if (NSFoundationVersionNumber <= NSFoundationVersionNumber_iOS_7_1
    				&& ::g::Uno::Platform::iOS::Application::IsLandscape()
    				&& (!view || ::g::Uno::Platform::iOS::Application::IsRootView(view)))
    			{
    				// Transpose dimensions
    				return CGSizeMake(cgsize.height, cgsize.width);
    			}
    
    			return cgsize;
}

// private static void uKeyboardWillChangeFrame(Uno.Platform.iOS.uCGRect frameBegin, Uno.Platform.iOS.uCGRect frameEnd, double animationDuration, int animationCurve, Fuse.Platform.SystemUIResizeReason reason) [static] :218
void SystemUI::uKeyboardWillChangeFrame1(CGRect frameBegin, CGRect frameEnd, double animationDuration, int animationCurve, int reason)
{
    SystemUI_typeof()->Init();
    float density = uPtr(::g::Uno::Platform::Displays::MainDisplay())->Density();
    ::g::Uno::Rect startFrame = ::g::Uno::Platform::iOS::Support::CGRectToUnoRect(::g::Uno::Platform::iOS::Support::Pre_iOS8_HandleDeviceOrientation_Rect(frameBegin, NULL), density);
    ::g::Uno::Rect endFrame = ::g::Uno::Platform::iOS::Support::CGRectToUnoRect(::g::Uno::Platform::iOS::Support::Pre_iOS8_HandleDeviceOrientation_Rect(frameEnd, NULL), density);
    ::g::Fuse::Platform::SystemUIWillResizeEventArgs* args = ::g::Fuse::Platform::SystemUIWillResizeEventArgs::New2(1, reason, endFrame, startFrame, animationDuration, 1);
    SystemUI::OnWillResize(args);
}

// public static generated Uno.Rect get_BottomFrame() [static] :36
::g::Uno::Rect SystemUI::BottomFrame()
{
    SystemUI_typeof()->Init();
    return SystemUI::_BottomFrame();
}

// private static generated void set_BottomFrame(Uno.Rect value) [static] :36
void SystemUI::BottomFrame(::g::Uno::Rect value)
{
    SystemUI_typeof()->Init();
    SystemUI::_BottomFrame() = value;
}

// public static generated Uno.Rect get_Frame() [static] :38
::g::Uno::Rect SystemUI::Frame()
{
    SystemUI_typeof()->Init();
    return SystemUI::_Frame();
}

// private static generated void set_Frame(Uno.Rect value) [static] :38
void SystemUI::Frame(::g::Uno::Rect value)
{
    SystemUI_typeof()->Init();
    SystemUI::_Frame() = value;
}

// public static bool get_IsTopFrameVisible() [static] :102
bool SystemUI::IsTopFrameVisible()
{
    SystemUI_typeof()->Init();
    return SystemUI::_isTopFrameVisible();
}

// public static void set_IsTopFrameVisible(bool value) [static] :103
void SystemUI::IsTopFrameVisible(bool value)
{
    SystemUI_typeof()->Init();

    if (value == SystemUI::_isTopFrameVisible())
        return;

    SystemUI::_isTopFrameVisible() = value;
    CGRect endFrame = ::g::Uno::Platform::iOS::uCGRect1::Zero();
    double animationDuration = 0.5;

    if (!value)
    {
        CGSize screenSize = SystemUI::Pre_iOS8_HandleDeviceOrientation_Size([UIScreen mainScreen].bounds.size, NULL);
        endFrame = CGRectMake(0., 0., screenSize.width, 20.);
        animationDuration = 0.25;
    }

    if (SystemUI::uStatusBarAnimation1() == (int)UIStatusBarAnimationNone)
        animationDuration = 0.0;

    SystemUI::_statusBarWillChangeFrame(endFrame, animationDuration);
    [UIApplication sharedApplication].statusBarHidden = !value;
    [UIView animateWithDuration:animationDuration animations:^{ [[UIApplication sharedApplication].delegate setNeedsStatusBarAppearanceUpdate]; }];
}

// public static ObjC.Object get_RootView() [static] :155
::g::ObjC::Object* SystemUI::RootView()
{
    SystemUI_typeof()->Init();
    return ::g::Uno::Platform::iOS::Application::GetRootView();
}

// public static void set_RootView(ObjC.Object value) [static] :156
void SystemUI::RootView(::g::ObjC::Object* value)
{
    SystemUI_typeof()->Init();
    ::g::Uno::Platform::iOS::Application::SetRootView(value);
}

// public static Uno.Rect get_TopFrame() [static] :35
::g::Uno::Rect SystemUI::TopFrame()
{
    SystemUI_typeof()->Init();
    return SystemUI::GetStatusBarFrame();
}

// public static generated Fuse.Platform.StatusBarAnimation get_uStatusBarAnimation() [static] :41
int SystemUI::uStatusBarAnimation1()
{
    SystemUI_typeof()->Init();
    return SystemUI::_uStatusBarAnimation();
}

// public static generated void set_uStatusBarAnimation(Fuse.Platform.StatusBarAnimation value) [static] :41
void SystemUI::uStatusBarAnimation1(int value)
{
    SystemUI_typeof()->Init();
    SystemUI::_uStatusBarAnimation() = value;
}

// public static Fuse.Platform.StatusBarStyle get_uStatusBarStyle() [static] :251
int SystemUI::uStatusBarStyle1()
{
    SystemUI_typeof()->Init();
    return SystemUI::_style();
}

// public static void set_uStatusBarStyle(Fuse.Platform.StatusBarStyle value) [static] :252
void SystemUI::uStatusBarStyle1(int value)
{
    SystemUI_typeof()->Init();

    if (value == SystemUI::_style())
        return;

    SystemUI::_style() = value;

    if ([[UIApplication sharedApplication].delegate respondsToSelector:@selector(setNeedsStatusBarAppearanceUpdate)])
    {
        if (SystemUI::uStatusBarAnimation1() == (int)UIStatusBarAnimationNone)
            [[UIApplication sharedApplication].delegate setNeedsStatusBarAppearanceUpdate];
        else
            [UIView animateWithDuration:0.33 animations:^{ [[UIApplication sharedApplication].delegate setNeedsStatusBarAppearanceUpdate]; }];
    }
}

// public static generated void add_BottomFrameWillResize(Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs> value) [static] :33
void SystemUI::add_BottomFrameWillResize(uDelegate* value)
{
    SystemUI_typeof()->Init();
    SystemUI::BottomFrameWillResize1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(SystemUI::BottomFrameWillResize1(), value), ::TYPES[2/*Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs>*/]);
}

// public static generated void remove_BottomFrameWillResize(Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs> value) [static] :33
void SystemUI::remove_BottomFrameWillResize(uDelegate* value)
{
    SystemUI_typeof()->Init();
    SystemUI::BottomFrameWillResize1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(SystemUI::BottomFrameWillResize1(), value), ::TYPES[2/*Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs>*/]);
}

// public static generated void add_FrameChanged(Uno.EventHandler value) [static] :43
void SystemUI::add_FrameChanged(uDelegate* value)
{
    SystemUI_typeof()->Init();
    SystemUI::FrameChanged1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(SystemUI::FrameChanged1(), value), ::TYPES[1/*Uno.EventHandler*/]);
}

// public static generated void remove_FrameChanged(Uno.EventHandler value) [static] :43
void SystemUI::remove_FrameChanged(uDelegate* value)
{
    SystemUI_typeof()->Init();
    SystemUI::FrameChanged1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(SystemUI::FrameChanged1(), value), ::TYPES[1/*Uno.EventHandler*/]);
}

// public static generated void add_TopFrameWillResize(Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs> value) [static] :32
void SystemUI::add_TopFrameWillResize(uDelegate* value)
{
    SystemUI_typeof()->Init();
    SystemUI::TopFrameWillResize1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(SystemUI::TopFrameWillResize1(), value), ::TYPES[2/*Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs>*/]);
}

// public static generated void remove_TopFrameWillResize(Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs> value) [static] :32
void SystemUI::remove_TopFrameWillResize(uDelegate* value)
{
    SystemUI_typeof()->Init();
    SystemUI::TopFrameWillResize1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(SystemUI::TopFrameWillResize1(), value), ::TYPES[2/*Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs>*/]);
}
// }

}}} // ::g::Fuse::Platform
