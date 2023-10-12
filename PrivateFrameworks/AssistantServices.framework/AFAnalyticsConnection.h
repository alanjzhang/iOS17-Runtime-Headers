/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFAnalyticsConnection : NSObject <AFAnalyticsService, AFAnalyticsServiceDelegate> {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_group> * _group;
    NSObject<OS_dispatch_source> * _idleTimer;
    bool  _needsCleanUpConnection;
    unsigned long long  _numberOfEventsBeingSent;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool needsCleanUpConnection;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanUpConnection;
- (void)_cleanUpConnectionIfNeeded;
- (id)_connection;
- (void)_connectionInterrupted;
- (void)_connectionInvalidated;
- (void)_didFinishSendingEvents:(id)arg1;
- (void)_handleFailureCallbackForEvents:(id)arg1 error:(id)arg2 numberOfRetries:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)_handleSuccessCallbackForEvents:(id)arg1 completion:(id /* block */)arg2;
- (void)_idleTimerFired;
- (void)_sendEvents:(id)arg1 numberOfRetries:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)_stageUEIEventData:(id)arg1 timestamp:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)_startIdleTimer;
- (void)_stopIdleTimer;
- (void)_willStartSendingEvents:(id)arg1;
- (oneway void)beginEventsGrouping;
- (oneway void)boostQueuedEvents:(id /* block */)arg1;
- (void)dealloc;
- (oneway void)endEventsGrouping;
- (oneway void)flushStagedEventsWithReply:(id /* block */)arg1;
- (id)init;
- (oneway void)logInstrumentationOfType:(id)arg1 machAbsoluteTime:(unsigned long long)arg2 turnIdentifier:(id)arg3;
- (bool)needsCleanUpConnection;
- (void)setNeedsCleanUpConnection:(bool)arg1;
- (oneway void)stageEvents:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)stageUEIEventData:(id)arg1 timestamp:(unsigned long long)arg2 completion:(id /* block */)arg3;

@end
