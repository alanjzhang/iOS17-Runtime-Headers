/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICRemoteRequestOperationController : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSXPCConnection * _clientConnection;
    NSObject<OS_dispatch_source> * _clientConnectionInvalidationTimer;
    unsigned long long  _numberOfActiveRequests;
}

+ (id)sharedRemoteRequestOperationController;

- (void).cxx_destruct;
- (void)_cancelClientConnectionInvalidationTimer;
- (id)_clientConnection;
- (void)_clientConnectionInvalidationTimerDidExpire;
- (void)_didEndExecutingRemoteRequestOperation;
- (id)_init;
- (void)_invalidateClientConnection;
- (void)_scheduleInvalidationOfClientConnection;
- (void)_willBeginExecutingRemoteRequestOperation;
- (void)performRemoteRequestOperationWithExecutionContext:(id)arg1 completionHandler:(id /* block */)arg2;

@end
