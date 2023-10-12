/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGSuggestionsWorkGroupManagerGuardedData : NSObject {
    NSMapTable * _groupLookup;
    NSMutableArray * _uniqueIds;
}

- (void).cxx_destruct;
- (void)addToProcessedIds:(id)arg1;
- (id)createGroupForUniqueId:(id)arg1;
- (void)enterGroupForUniqueId:(id)arg1;
- (id)groupForUniqueId:(id)arg1;
- (id)init;
- (bool)isProcessedUniqueId:(id)arg1;
- (void)leaveGroupForUniqueId:(id)arg1;
- (void)removeGroupFromProcessedIds:(id)arg1;

@end