#include <Uno-iOS/AppDelegate.h>
#include <Uno-iOS/Uno-iOS.h>


#include <Uno.Platform.CoreApp.h>
#include <Uno.Platform.iOS.Application.h>
#include <Uno.Platform.EventSources.InterAppInvoke.h>

@implementation uAppDelegate
- (id)init
{
    if ((self = [super init]))
    {
        _context = [[EAGLContext alloc] initWithAPI:kEAGLRenderingAPIOpenGLES2];
    }
    return self;
}

- (void)setView:(UIView *)view
{
    [super setView:view];
}

- (BOOL)application:(UIApplication *)application willFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    [EAGLContext setCurrentContext:self.context];
    uAutoReleasePool pool;
    ::g::Uno::Platform::CoreApp::Start();
    return YES;
}

-(BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation {
    uAutoReleasePool pool;
    uString* unoUri = uPlatform::iOS::ToUno([url absoluteString]);
    ::g::Uno::Platform::EventSources::InterAppInvoke::OnReceivedURI(unoUri);
    ;
    return YES;
}

- (BOOL)application:(UIApplication *)app openURL:(NSURL *)url options:(NSDictionary*)options {
    uAutoReleasePool pool;
    uString* unoUri = uPlatform::iOS::ToUno([url absoluteString]);
    ::g::Uno::Platform::EventSources::InterAppInvoke::OnReceivedURI(unoUri);
    ;
    return YES;
}

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    uAutoReleasePool pool;

    if (launchOptions[UIApplicationLaunchOptionsRemoteNotificationKey]) {
        [self application:application didReceiveRemoteNotification:launchOptions[UIApplicationLaunchOptionsRemoteNotificationKey]];
    }

//#if #(iOS.PushNotifications.Enable:Defined)
//    if ([application respondsToSelector:#selector(registerUserNotificationSettings:)]) {
//        // use registerUserNotificationSettings
//        [application registerUserNotificationSettings: [UIUserNotificationSettings settingsForTypes:(UIUserNotificationTypeSound  | UIUserNotificationTypeAlert | UIUserNotificationTypeBadge)  categories:nil]];
//        [application registerForRemoteNotifications];
//    } else {
//        // use registerForRemoteNotificationTypes:
//        [application registerForRemoteNotificationTypes:
//         UIRemoteNotificationTypeBadge |
//         UIRemoteNotificationTypeSound |
//         UIRemoteNotificationTypeAlert];
//    }
//#endif

//#if #(iOS.LocalNotifications.Enable:Defined)
//    [application registerUserNotificationSettings:
//     [UIUserNotificationSettings settingsForTypes:
//      UIUserNotificationTypeAlert|
//      UIUserNotificationTypeBadge|
//      UIUserNotificationTypeSound
//      categories:nil]];
//#endif
    
    ::g::Uno::Platform::CoreApp::EnterForeground();
    return YES;
}

//#if #(iOS.PushNotifications.Enable:Defined)
//- (void)application:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken {
//    uAutoReleasePool pool;
//    const unsigned* tokenBytes = (unsigned*)[deviceToken bytes];
//    NSString* hexToken = [NSString stringWithFormat:#"%08x%08x%08x%08x%08x%08x%08x%08x",
//                          ntohl(tokenBytes[0]), ntohl(tokenBytes[1]), ntohl(tokenBytes[2]),
//                          ntohl(tokenBytes[3]), ntohl(tokenBytes[4]), ntohl(tokenBytes[5]),
//                          ntohl(tokenBytes[6]), ntohl(tokenBytes[7])];
//    #{Uno.String} token = uPlatform::iOS::ToUno(hexToken);
//    #{Uno.Platform.iOS.Application.OnNotificationRegistrationSucceeded(string):Call(token)};
//}
//
//- (void)application:(UIApplication *)application didFailToRegisterForRemoteNotificationsWithError:(NSError *)error {
//    uAutoReleasePool pool;
//    #{Uno.String} errorReason = uPlatform::iOS::ToUno(error.localizedDescription);
//    #{Uno.Platform.iOS.Application.OnNotificationRegistrationFailed(string):Call(errorReason)};
//}
//
//- (void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo{
//    uAutoReleasePool pool;
//    NSError* err = NULL;
//    NSData* jsonData = [NSJSONSerialization dataWithJSONObject:userInfo options:0 error:&err];
//    if (jsonData)
//    {
//        NSString* nsJsonPayload = [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
//        #{Uno.String} jsonPayload = uPlatform::iOS::ToUno(nsJsonPayload);
//        #{Uno.Platform.iOS.Application.OnReceivedNotification(string):Call(jsonPayload)};
//    }
//}
//#endif

//#if #(iOS.LocalNotifications.Enable:Defined)
//- (void)application:(UIApplication *)application didReceiveLocalNotification:(UILocalNotification *)notification
//{
//    uAutoReleasePool pool;
//    NSError* err = NULL;
//    NSMutableDictionary* userInfo;
//
//    if (notification.userInfo)
//        userInfo = [notification.userInfo mutableCopy];
//    else
//        userInfo = [NSMutableDictionary dictionary];
//
//    if (notification.alertAction)
//        [userInfo setObject:notification.alertAction forKey:#"title"];
//    if (notification.alertBody)
//        [userInfo setObject:notification.alertBody forKey:#"body"];
//
//    NSData* jsonData = [NSJSONSerialization dataWithJSONObject:userInfo options:0 error:&err];
//    if (jsonData)
//    {
//        NSString* nsJsonPayload = [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
//        #{Uno.String} jsonPayload = uPlatform::iOS::ToUno(nsJsonPayload);
//        #{Uno.Platform.iOS.Application.OnReceivedLocalNotification(string):Call(jsonPayload)};
//    }
//}
//#endif

- (void)applicationWillEnterForeground:(UIApplication *)application
{
    uAutoReleasePool pool;
    ::g::Uno::Platform::CoreApp::EnterForeground();
}

- (void)applicationDidBecomeActive:(UIApplication *)application
{
    uAutoReleasePool pool;
    ::g::Uno::Platform::CoreApp::EnterInteractive();
}

- (void)applicationWillResignActive:(UIApplication *)application
{
    uAutoReleasePool pool;
    ::g::Uno::Platform::CoreApp::ExitInteractive();
}

- (void)applicationDidEnterBackground:(UIApplication *)application
{
    uAutoReleasePool pool;
    ::g::Uno::Platform::CoreApp::EnterBackground();
}

- (void)applicationWillTerminate:(UIApplication *)application
{
    uAutoReleasePool pool;
    ::g::Uno::Platform::CoreApp::Terminate();
}

- (void)applicationDidReceiveMemoryWarning:(UIApplication *)application
{
    uAutoReleasePool pool;
    ::g::Uno::Platform::CoreApp::OnReceivedLowMemoryWarning();
}



@end
