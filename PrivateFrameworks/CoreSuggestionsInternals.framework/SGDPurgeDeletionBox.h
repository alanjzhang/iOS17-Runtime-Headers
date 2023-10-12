/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDPurgeDeletionBox : NSObject {
    NSMutableDictionary * _deleteDomainIds;
    NSMutableDictionary * _deleteUniqueIds;
    NSMutableDictionary * _purgeUniqueIds;
}

@property (nonatomic, retain) NSMutableDictionary *deleteDomainIds;
@property (nonatomic, retain) NSMutableDictionary *deleteUniqueIds;
@property (nonatomic, retain) NSMutableDictionary *purgeUniqueIds;

- (void).cxx_destruct;
- (void)addDeletion:(id)arg1 domainSelection:(id)arg2;
- (void)addDeletion:(id)arg1 uniqueIds:(id)arg2;
- (void)addPurge:(id)arg1 uniqueIds:(id)arg2;
- (id)deleteDomainIds;
- (id)deleteUniqueIds;
- (id)init;
- (id)purgeUniqueIds;
- (void)setDeleteDomainIds:(id)arg1;
- (void)setDeleteUniqueIds:(id)arg1;
- (void)setPurgeUniqueIds:(id)arg1;
- (bool)shouldRunHandlerImmediately;

@end
