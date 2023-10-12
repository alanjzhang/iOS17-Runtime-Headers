/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

@interface IXServerConnection : NSObject <IXClientDelegateProtocol> {
    NSMutableDictionary * _coordinatorInstances;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSMutableDictionary * _promiseInstances;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, readonly) NSMutableDictionary *coordinatorInstances;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic, readonly) NSMutableDictionary *promiseInstances;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)retrySynchronousIPC:(id /* block */)arg1;
+ (id)sharedConnection;

- (void).cxx_destruct;
- (oneway void)_client_coordinatorDidCompleteSuccessfullyWithUUID:(id)arg1 forRecordPromise:(id)arg2;
- (oneway void)_client_coordinatorDidInstallPlaceholderWithUUID:(id)arg1 forRecordPromise:(id)arg2;
- (oneway void)_client_coordinatorDidRegisterForObservationWithUUID:(id)arg1;
- (oneway void)_client_coordinatorShouldBeginPostProcessingWithUUID:(id)arg1 forRecordPromise:(id)arg2;
- (oneway void)_client_coordinatorShouldBeginRestoringUserDataWithUUID:(id)arg1;
- (oneway void)_client_coordinatorShouldPauseWithUUID:(id)arg1;
- (oneway void)_client_coordinatorShouldPrioritizeWithUUID:(id)arg1;
- (oneway void)_client_coordinatorShouldResumeWithUUID:(id)arg1;
- (oneway void)_client_coordinatorWithUUID:(id)arg1 configuredPromiseDidBeginFulfillment:(unsigned long long)arg2;
- (oneway void)_client_coordinatorWithUUID:(id)arg1 didCancelWithReason:(id)arg2 client:(unsigned long long)arg3;
- (oneway void)_client_coordinatorWithUUID:(id)arg1 didUpdateProgress:(double)arg2 forPhase:(unsigned long long)arg3 overallProgress:(double)arg4;
- (oneway void)_client_promiseDidCompleteSuccessfullyWithUUID:(id)arg1;
- (oneway void)_client_promiseWithUUID:(id)arg1 didCancelWithReason:(id)arg2 client:(unsigned long long)arg3;
- (bool)_onQueue_createXPCConnectionIfNecessary;
- (void)_onQueue_doCleanupForCoordinatorWithUUID:(id)arg1;
- (void)_onQueue_doCleanupForPromiseWithUUID:(id)arg1;
- (void)_onQueue_reSetupObserversAfter:(id)arg1;
- (id)_onQueue_remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)_onQueue_scanForAndRemoveEmptyHashTables;
- (id)_onQueue_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)coordinatorInstances;
- (id)init;
- (id)internalQueue;
- (id)promiseInstances;
- (void)registerAppInstallCoordinatorForUpdates:(id)arg1 notifyDaemon:(bool)arg2;
- (void)registerDataPromiseForUpdates:(id)arg1 notifyDaemon:(bool)arg2;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)resetDaemonConnection;
- (void)setXpcConnection:(id)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)unregisterForUpdatesForAppInstallCoordinatorWithUUID:(id)arg1;
- (void)unregisterForUpdatesForDataPromiseWithUUID:(id)arg1;
- (id)xpcConnection;

@end
