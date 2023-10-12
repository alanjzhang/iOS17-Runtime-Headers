/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/ExtensionKit.framework/ExtensionKit
 */

@interface _EXRunningUISceneExtension : _EXRunningUIExtension <NSXPCListenerDelegate, UIApplicationDelegate> {
    NSXPCListener * _internalListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSXPCListener *internalListener;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIWindow *window;

- (void).cxx_destruct;
- (id)init;
- (id)internalListener;
- (void)setInternalListener:(id)arg1;
- (int)startWithArguments:(const char **)arg1 count:(int)arg2;

// _EXRunningUISceneExtension (UIApplicationDelegate)

- (id)application:(id)arg1 configurationForConnectingSceneSession:(id)arg2 options:(id)arg3;
- (bool)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;

@end