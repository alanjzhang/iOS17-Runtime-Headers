/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
 */

@interface PDSCoordinator : NSObject <IDSPushHandlerDelegate, IMSystemMonitorListener, PDSEntryStoreDelegate, PDSHeartbeatTrackerDelegate, PDSRequestQueueDelegate> {
    long long  _bagLoadRetries;
    bool  _disabled;
    id /* block */  _entryStoreBlock;
    PDSHeartbeatTracker * _heartbeatTracker;
    id /* block */  _kvStoreBlock;
    NSDate * _pendingRequestDate;
    CUTDeferredTaskQueue * _processDeferredTaskQueue;
    IDSPushHandler * _pushHandler;
    id /* block */  _pushTokenBlock;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _requestPending;
    PDSRequestQueue * _requestQueue;
    IDSServerBag * _serverBag;
    bool  _tokenChanged;
}

@property (nonatomic) long long bagLoadRetries;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disabled;
@property (nonatomic, copy) id /* block */ entryStoreBlock;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PDSHeartbeatTracker *heartbeatTracker;
@property (nonatomic, copy) id /* block */ kvStoreBlock;
@property (nonatomic, retain) NSDate *pendingRequestDate;
@property (nonatomic, retain) CUTDeferredTaskQueue *processDeferredTaskQueue;
@property (nonatomic, retain) IDSPushHandler *pushHandler;
@property (nonatomic, copy) id /* block */ pushTokenBlock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) bool requestPending;
@property (nonatomic, retain) PDSRequestQueue *requestQueue;
@property (nonatomic, retain) IDSServerBag *serverBag;
@property (readonly) Class superclass;
@property (nonatomic) bool tokenChanged;

- (void).cxx_destruct;
- (void)_bagReloaded:(id)arg1;
- (void)_comparePushTokensWithEntryStore:(id)arg1;
- (bool)_disabledForAnyReason;
- (bool)_entries:(id)arg1 includeState:(unsigned char)arg2;
- (bool)_lastPushTokenDiffersFrom:(id)arg1;
- (unsigned long long)_lastRequestHash;
- (bool)_lastSandboxPushTokenDiffersFrom:(id)arg1;
- (void)_markLastRequest:(id)arg1;
- (void)_markPushToken:(id)arg1;
- (void)_markSandboxPushToken:(id)arg1;
- (bool)_matchingEntryExistsFor:(id)arg1 inStore:(id)arg2;
- (void)_processEntryStore;
- (void)_pushTokenChangedWithEntryStore:(id)arg1;
- (bool)_requestMatchesPreviousRequest:(id)arg1;
- (double)_timeToDelayRequestForTopics:(id)arg1;
- (void)_updateAllHeartbeatEntriesWithState:(unsigned char)arg1 inEntryStore:(id)arg2;
- (void)_updateEntriesForResponse:(id)arg1 fromRequest:(id)arg2;
- (void)_updateOrDeleteEntry:(id)arg1 inStore:(id)arg2;
- (long long)bagLoadRetries;
- (void)dealloc;
- (bool)disabled;
- (void)entryStore:(id)arg1 didUpdatePendingTopics:(id)arg2 forceImmediateUpdate:(bool)arg3;
- (id /* block */)entryStoreBlock;
- (void)handler:(id)arg1 pushTokenChanged:(id)arg2;
- (void)heartbeatFiredForTracker:(id)arg1;
- (id)heartbeatTracker;
- (id)initWithQueue:(id)arg1 serverBag:(id)arg2 requestQueue:(id)arg3 kvStoreBlock:(id /* block */)arg4 entryStoreBlock:(id /* block */)arg5 pushTokenBlock:(id /* block */)arg6 systemMonitor:(id)arg7 pushHandler:(id)arg8;
- (id /* block */)kvStoreBlock;
- (id)pendingRequestDate;
- (id)processDeferredTaskQueue;
- (id)pushHandler;
- (id /* block */)pushTokenBlock;
- (id)queue;
- (void)registerIfNeeded;
- (bool)requestPending;
- (id)requestQueue;
- (void)requestQueue:(id)arg1 processedRequest:(id)arg2 withResponse:(id)arg3;
- (id)serverBag;
- (void)setBagLoadRetries:(long long)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setEntryStoreBlock:(id /* block */)arg1;
- (void)setHeartbeatTracker:(id)arg1;
- (void)setKvStoreBlock:(id /* block */)arg1;
- (void)setPendingRequestDate:(id)arg1;
- (void)setProcessDeferredTaskQueue:(id)arg1;
- (void)setPushHandler:(id)arg1;
- (void)setPushTokenBlock:(id /* block */)arg1;
- (void)setQueue:(id)arg1;
- (void)setRequestPending:(bool)arg1;
- (void)setRequestQueue:(id)arg1;
- (void)setServerBag:(id)arg1;
- (void)setTokenChanged:(bool)arg1;
- (bool)shouldScheduleHeartbeatForTracker:(id)arg1;
- (void)systemDidLeaveFirstDataProtectionLock;
- (bool)tokenChanged;
- (long long)ttlForRequest:(id)arg1;

@end
