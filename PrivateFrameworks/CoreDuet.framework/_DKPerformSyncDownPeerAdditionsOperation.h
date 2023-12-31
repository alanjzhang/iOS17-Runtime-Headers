/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKPerformSyncDownPeerAdditionsOperation : _DKSyncCompositeOperation {
    unsigned long long  _batchNumber;
    bool  _foundAdditions;
    bool  _highPriority;
    NSDate * _highWaterMark;
    _DKSyncHistory * _history;
    <_DKKeyValueStore> * _keyValueStore;
    <_DKSyncLocalKnowledgeStorage> * _localStorage;
    NSArray * _overlappingWindows;
    _DKSyncPeer * _peer;
    struct _CDPerfEvent { 
        double startTime; 
        double endTime; 
    }  _perfEvent;
    _CDMutablePerfMetric * _perfMetric;
    _DKSync2Policy * _policy;
    NSDate * _startDate;
    NSArray * _streamNames;
    <_DKSyncRemoteKnowledgeStorage> * _transport;
    _DKSyncType * _type;
}

- (void).cxx_destruct;
- (void)endOperation;
- (bool)isAsynchronous;
- (void)main;

@end
