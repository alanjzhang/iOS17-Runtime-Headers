/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGHistoryObserver : NSObject <SGSuggestHistoryObserver> {
    SGSqlEntityStore * _store;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)hashesDidChange;
- (id)initWithStore:(id)arg1;
- (void)processNewConfirmOrRejectEventHashes:(id)arg1;
- (void)processNewConfirmedOrRejectedReminderHashes:(id)arg1;

@end