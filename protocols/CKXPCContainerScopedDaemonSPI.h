/* Generated by RuntimeBrowser.
 */

@protocol CKXPCContainerScopedDaemonSPI

@required

- (void)clearAssetCacheWithDatabaseScope:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)clearAuthTokensWithRecordID:(CKRecordID *)arg1 databaseScope:(long long)arg2;
- (void)clearCachesForRecordWithRecordID:(void *)arg1 databaseScope:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: CKRecordID *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)clearCachesForZoneWithZoneID:(void *)arg1 databaseScope:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: CKRecordZoneID *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)clearCachesWithOptions:(void *)arg1 databaseScope:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: unsigned long long, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)clearContainerFromMetadataCache;
- (void)clearInvalidatedPCSCacheEntriesIfNeeded;
- (void)clearPILSCacheForLookupInfos:(NSArray *)arg1;
- (void)clearRecordCacheWithDatabaseScope:(long long)arg1;
- (void)countAssetCacheItemsWithDatabaseScope:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (void)currentDeviceIDWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)currentUserBoundaryKeyWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)decryptPersonalInfoOnShare:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: CKShare *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKShare *, NSError *, void*
- (void)dropDetachedContainersWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)fetchPCSFromCacheForRecordWithRecordID:(void *)arg1 databaseScope:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: CKRecordID *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKDPCSData *, NSError *, void*
- (void)fetchPCSFromCacheForShareWithRecordID:(void *)arg1 databaseScope:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: CKRecordID *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKDPCSData *, NSError *, void*
- (void)fetchPCSFromCacheForZoneWithZoneID:(void *)arg1 databaseScope:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: CKRecordZoneID *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKDPCSData *, NSError *, void*
- (void)frameworkCachesDirectoryWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)getNewWebSharingIdentityDataWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)getOutstandingOperationCountWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (void)getPCSDiagnosticsForZonesWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKPCSDiagnosticInformation *, void*
- (void)getRecordPCSDiagnosticsForZonesWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)lastKnownDeviceCountWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)performAggregateZonePCSOperation:(void *)arg1 clientOperationCallbackProxy:(void *)arg2 withBlock:(void *)arg3; // needs 3 arg types, found 7: CKAggregateZonePCSOperationInfo *, <CKOperationCallbacks> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performArchiveRecordsOperation:(void *)arg1 clientOperationCallbackProxy:(void *)arg2 withBlock:(void *)arg3; // needs 3 arg types, found 7: CKArchiveRecordsOperationInfo *, <CKArchiveRecordsOperationCallbacks> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performCompleteParticipantVettingOperation:(void *)arg1 clientOperationCallbackProxy:(void *)arg2 withBlock:(void *)arg3; // needs 3 arg types, found 7: CKCompleteParticipantVettingOperationInfo *, <CKCompleteParticipantVettingOperationCallbacks> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performDeserializeRecordModificationsOperation:(void *)arg1 clientOperationCallbackProxy:(void *)arg2 withBlock:(void *)arg3; // needs 3 arg types, found 7: CKDeserializeRecordModificationsOperationInfo *, <CKDeserializeRecordModificationsOperationCallbacks> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performFetchArchivedRecordsOperation:(void *)arg1 clientOperationCallbackProxy:(void *)arg2 withBlock:(void *)arg3; // needs 3 arg types, found 7: CKFetchArchivedRecordsOperationInfo *, <CKFetchArchivedRecordsOperationCallbacks> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performFetchMergeableDeltaMetadataOperation:(void *)arg1 clientOperationCallbackProxy:(void *)arg2 withBlock:(void *)arg3; // needs 3 arg types, found 7: CKFetchMergeableDeltaMetadataOperationInfo *, <CKFetchMergeableDeltaMetadataOperationCallbacks> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performFetchMergeableDeltasOperation:(void *)arg1 clientOperationCallbackProxy:(void *)arg2 withBlock:(void *)arg3; // needs 3 arg types, found 7: CKFetchMergeableDeltasOperationInfo *, <CKFetchMergeableDeltasOperationCallbacks> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performFetchRecordVersionsOperation:(void *)arg1 clientOperationCallbackProxy:(void *)arg2 withBlock:(void *)arg3; // needs 3 arg types, found 7: CKFetchRecordVersionsOperationInfo *, <CKFetchRecordVersionsOperationCallbacks> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performFetchRegisteredBundleIDsOperation:(void *)arg1 clientOperationCallbackProxy:(void *)arg2 withBlock:(void *)arg3; // needs 3 arg types, found 7: CKOperationInfo *, <CKFetchRegisteredBundleIDsOperationCallbacks> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performFetchShareParticipantKeyOperation:(void *)arg1 clientOperationCallbackProxy:(void *)arg2 withBlock:(void *)arg3; // needs 3 arg types, found 7: CKFetchShareParticipantKeyOperationInfo *, <CKFetchShareParticipantKeyOperationCallbacks> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performFetchUserQuotaOperation:(void *)arg1 clientOperationCallbackProxy:(void *)arg2 withBlock:(void *)arg3; // needs 3 arg types, found 7: CKDatabaseOperationInfo *, <CKFetchUserQuotaOperationCallbacks> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performFetchWhitelistedBundleIDsOperation:(void *)arg1 clientOperationCallbackProxy:(void *)arg2 withBlock:(void *)arg3; // needs 3 arg types, found 7: CKOperationInfo *, <CKFetchWhitelistedBundleIDsOperationCallbacks> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performInitiateParticipantVettingOperation:(void *)arg1 clientOperationCallbackProxy:(void *)arg2 withBlock:(void *)arg3; // needs 3 arg types, found 7: CKInitiateParticipantVettingOperationInfo *, <CKInitiateParticipantVettingOperationCallbacks> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performMarkAssetBrokenOperation:(void *)arg1 clientOperationCallbackProxy:(void *)arg2 withBlock:(void *)arg3; // needs 3 arg types, found 7: CKMarkAssetBrokenOperationInfo *, <CKMarkAssetBrokenOperationCallbacks> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performModifyRecordAccessOperation:(void *)arg1 clientOperationCallbackProxy:(void *)arg2 withBlock:(void *)arg3; // needs 3 arg types, found 7: CKModifyRecordAccessOperationInfo *, <CKModifyRecordAccessOperationCallbacks> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performModifyWebSharingOperation:(void *)arg1 clientOperationCallbackProxy:(void *)arg2 withBlock:(void *)arg3; // needs 3 arg types, found 7: CKModifyWebSharingOperationInfo *, <CKModifyWebSharingOperationCallbacks> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performPublishAssetsOperation:(void *)arg1 clientOperationCallbackProxy:(void *)arg2 withBlock:(void *)arg3; // needs 3 arg types, found 7: CKPublishAssetsOperationInfo *, <CKPublishAssetsOperationCallbacks> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performRepairAssetsOperation:(void *)arg1 clientOperationCallbackProxy:(void *)arg2 withBlock:(void *)arg3; // needs 3 arg types, found 7: CKRepairAssetsOperationInfo *, <CKRepairAssetsOperationCallbacks> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performRepairZonePCSOperation:(void *)arg1 clientOperationCallbackProxy:(void *)arg2 withBlock:(void *)arg3; // needs 3 arg types, found 7: CKRepairZonePCSOperationInfo *, <CKRepairZonePCSOperationCallbacks> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performReplaceMergeableDeltasOperation:(void *)arg1 clientOperationCallbackProxy:(void *)arg2 withBlock:(void *)arg3; // needs 3 arg types, found 7: CKReplaceMergeableDeltasOperationInfo *, <CKReplaceMergeableDeltasOperationCallbacks> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performSerializeRecordModificationsOperation:(void *)arg1 clientOperationCallbackProxy:(void *)arg2 withBlock:(void *)arg3; // needs 3 arg types, found 7: CKSerializeRecordModificationsOperationInfo *, <CKSerializeRecordModificationsOperationCallbacks> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performUploadMergeableDeltasOperation:(void *)arg1 clientOperationCallbackProxy:(void *)arg2 withBlock:(void *)arg3; // needs 3 arg types, found 7: CKUploadMergeableDeltasOperationInfo *, <CKUploadMergeableDeltasOperationCallbacks> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)representativeDataclassEnabledWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)resetAllApplicationPermissionsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)serverEnvironmentWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSError *, void*
- (void)serverPreferredPushEnvironmentWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)setApplicationPermission:(void *)arg1 enabled:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: unsigned long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSError *, void*
- (void)setFakeError:(NSError *)arg1 forNextRequestOfClassName:(NSString *)arg2;
- (void)setFakeResponseOperationResult:(CKDPResponseOperationResult *)arg1 forNextRequestOfClassName:(NSString *)arg2 forItemID:(id)arg3 withLifetime:(int)arg4;
- (void)showAssetCacheWithDatabaseScope:(long long)arg1;
- (void)statusGroupsForApplicationPermission:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)tossConfigWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
