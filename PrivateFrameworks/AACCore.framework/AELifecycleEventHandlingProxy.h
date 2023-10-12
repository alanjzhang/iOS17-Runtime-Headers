/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AACCore.framework/AACCore
 */

@interface AELifecycleEventHandlingProxy : NSObject <AELifecycleEventHandling, AEXPCConnection> {
    NSObject<OS_dispatch_queue> * _queue;
    AEXPCProxy * _xpcProxy;
}

@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;

+ (id)proxyWithEndpoint:(id)arg1 queue:(id)arg2;

- (void).cxx_destruct;
- (void)handleEventDidBeginWithCompletion:(id /* block */)arg1;
- (void)handleEventDidInvalidateWithError:(id)arg1 completion:(id /* block */)arg2;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;

@end
