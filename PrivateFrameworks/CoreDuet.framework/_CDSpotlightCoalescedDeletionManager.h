/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDSpotlightCoalescedDeletionManager : NSObject {
    double  _delay;
    NSObject<OS_dispatch_queue> * _deletionCoalescingQueue;
    _CDPersistedCoalescingTimer * _deletionCoalescingTimer;
    <_DKKnowledgeEventStreamDeleting> * _knowledgeStore;
    NSString * _persistencePath;
}

- (void).cxx_destruct;
- (void)deleteKnowledgeEventsMatchingPredicate:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)initWithKnowledgeStore:(id)arg1;
- (id)initWithKnowledgeStore:(id)arg1 persistencePath:(id)arg2 delay:(double)arg3;
- (void)processDeletionForOperation:(id)arg1;
- (void)setupCoalescingTimer;

@end
