/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKDeviceRegistrationService : NSObject {
    bool  _isRegistering;
    PKXPCService * _remoteService;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_remoteObjectProxy;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)init;
- (void)performDeviceRegistrationForReason:(id)arg1 brokerURL:(id)arg2 actionType:(long long)arg3 completion:(id /* block */)arg4;
- (void)performDeviceRegistrationReturningContextForReason:(id)arg1 brokerURL:(id)arg2 actionType:(long long)arg3 completion:(id /* block */)arg4;
- (void)performDeviceRegistrationWithCompletion:(id /* block */)arg1;

@end
