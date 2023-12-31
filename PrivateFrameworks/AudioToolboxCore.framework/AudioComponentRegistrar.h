/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
 */

@interface AudioComponentRegistrar : NSObject <NSXPCListenerDelegate> {
    void * _impl;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) void*impl;
@property (readonly) Class superclass;

- (void)dealloc;
- (void*)impl;
- (id)initForMode:(bool)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)resumeListeners;

// AudioComponentRegistrar (Tests)

- (id)replaceListener:(id)arg1 withListener:(id)arg2;

@end
