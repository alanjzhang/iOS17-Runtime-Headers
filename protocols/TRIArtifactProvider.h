/* Generated by RuntimeBrowser.
 */

@protocol TRIArtifactProvider

@required

- (<TRIFetchOpCanceling> *)fetchAssetsWithIndexes:(void *)arg1 fromTreatmentWithRecordId:(void *)arg2 options:(void *)arg3 progress:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 18: NSIndexSet *, CKRecordID *, TRIFetchOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, void*, id /* block */, void*, void, id /* block */, unsigned long long, NSDictionary *, NSDate *, NSError *, void*
- (<TRIFetchOpCanceling> *)fetchAssetsWithRecordIds:(void *)arg1 options:(void *)arg2 perRecordProgress:(void *)arg3 perRecordCompletionBlockOnSuccess:(void *)arg4 perRecordCompletionBlockOnError:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 33: NSDictionary *, TRIFetchOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKRecordID *, double, void*, id /* block */, void*, void, id /* block */, CKRecord *, CKRecordID *, void*, id /* block */, void*, void, id /* block */, CKRecord *, CKRecordID *, NSError *, void*, id /* block */, void*, void, id /* block */, unsigned long long, NSDictionary *, NSDate *, NSError *, void*
- (void)fetchBMLTCatalogNotificationWithOptions:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 10: TRIFetchOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, TRIClientBMLTCatalogArtifact *, NSDate *, NSError *, void*
- (void)fetchBMLTNotificationWithDeployment:(void *)arg1 options:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 11: TRIBMLTDeployment *, TRIFetchOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, TRIClientBMLTArtifact *, NSDate *, NSError *, void*
- (void)fetchBMLTNotificationsWithOptions:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 10: TRIFetchOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, TRIClientBMLTArtifact *, NSDate *, NSError *, void*
- (<TRIFetchOpCanceling> *)fetchDiffSourceRecordIdsWithTargetAssetIds:(void *)arg1 isAcceptableSourceAssetId:(void *)arg2 options:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 17: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, NSString<TRIAssetId> *, void*, TRIFetchOptions *, id /* block */, void*, void, id /* block */, unsigned long long, NSDictionary *, NSDate *, NSError *, void*
- (<TRIFetchOpCanceling> *)fetchDiffsWithRecordIds:(void *)arg1 options:(void *)arg2 perRecordProgress:(void *)arg3 perRecordCompletionBlockOnSuccess:(void *)arg4 perRecordCompletionBlockOnError:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 33: NSDictionary *, TRIFetchOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKRecordID *, double, void*, id /* block */, void*, void, id /* block */, CKRecord *, CKRecordID *, void*, id /* block */, void*, void, id /* block */, CKRecord *, CKRecordID *, NSError *, void*, id /* block */, void*, void, id /* block */, unsigned long long, NSDictionary *, NSDate *, NSError *, void*
- (void)fetchExperimentNotificationsForLimitedCarryExperimentWithManager:(void *)arg1 options:(void *)arg2 rollbacksOnly:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 12: TRILimitedCarryProfileManager *, TRIFetchOptions *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSArray *, NSDate *, NSError *, void*
- (void)fetchExperimentNotificationsWithNamespaceNames:(void *)arg1 rollbacksOnly:(void *)arg2 lastFetchDateOverride:(void *)arg3 options:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 13: NSSet *, bool, NSDate *, TRIFetchOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSArray *, NSDate *, NSError *, void*
- (void)fetchExperimentWithExperimentDeployment:(void *)arg1 options:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 11: TRIExperimentDeployment *, TRIFetchOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, TRIClientExperimentArtifact *, NSDate *, NSError *, void*
- (void)fetchExperimentWithLatestDeploymentForExperimentId:(void *)arg1 options:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 11: NSString *, TRIFetchOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, TRIClientExperimentArtifact *, NSDate *, NSError *, void*
- (void)fetchFactorPackSetWithId:(void *)arg1 options:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 12: NSString<TRIFactorPackSetId> *, TRIFetchOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, TRIFactorPackSet *, unsigned long long, NSDate *, NSError *, void*
- (<TRIFetchOpCanceling> *)fetchRecordIdsForAssetsWithIds:(void *)arg1 options:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 11: NSSet *, TRIFetchOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSDictionary *, NSDate *, NSError *, void*
- (void)fetchRolloutNotificationWithDeployment:(void *)arg1 options:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 11: TRIRolloutDeployment *, TRIFetchOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, TRIClientRolloutArtifact *, NSDate *, NSError *, void*
- (void)fetchRolloutNotificationWithLatestDeploymentForRolloutId:(void *)arg1 options:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 11: NSString *, TRIFetchOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, TRIClientRolloutArtifact *, NSDate *, NSError *, void*
- (void)fetchRolloutNotificationsDateAscendingWithOptions:(void *)arg1 lastFetchDateOverride:(void *)arg2 namespaceNames:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 12: TRIFetchOptions *, NSDate *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, TRIClientRolloutArtifact *, NSDate *, NSError *, void*
- (void)fetchRolloutNotificationsDateDescendingWithOptions:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 11: TRIFetchOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, TRIClientRolloutArtifact *, NSDate *, NSError *, bool*, void*
- (<TRIFetchOpCanceling> *)fetchTreatmentWithId:(void *)arg1 options:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 13: NSString *, TRIFetchOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, CKRecordID *, TRIClientTreatment *, unsigned long long, NSDate *, NSError *, void*

@end
