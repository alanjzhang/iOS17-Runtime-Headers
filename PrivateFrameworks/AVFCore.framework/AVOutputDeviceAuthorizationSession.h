/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVOutputDeviceAuthorizationSession : NSObject {
    AVOutputDeviceAuthorizationSessionInternal * _ivars;
}

@property <AVOutputDeviceAuthorizationSessionDelegate> *delegate;

+ (void)initialize;
+ (id)sharedAuthorizationSession;

- (void)dealloc;
- (id)delegate;
- (id)impl;
- (id)initWithOutputDeviceAuthorizationSessionImpl:(id)arg1;
- (void)outputDeviceAuthorizationSessionImpl:(id)arg1 didProvideAuthorizationRequest:(id)arg2;
- (bool)outputDeviceAuthorizationSessionImpl:(id)arg1 shouldRetryAuthorizationRequest:(id)arg2 reason:(id)arg3;
- (void)outputDeviceAuthorizationSessionImplDidExpireWithReplacementImpl:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
