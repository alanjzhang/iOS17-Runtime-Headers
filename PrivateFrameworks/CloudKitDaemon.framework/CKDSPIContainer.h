/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDSPIContainer : CKDContainer <CKXPCContainerScopedDaemonSPI>

- (void)clearAssetCacheWithDatabaseScope:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)clearAuthTokensWithRecordID:(id)arg1 databaseScope:(long long)arg2;
- (void)clearCachesForRecordWithRecordID:(id)arg1 databaseScope:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)clearCachesForZoneWithZoneID:(id)arg1 databaseScope:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)clearCachesWithOptions:(unsigned long long)arg1 databaseScope:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)clearContainerFromMetadataCache;
- (void)clearInvalidatedPCSCacheEntriesIfNeeded;
- (void)clearPILSCacheForLookupInfos:(id)arg1;
- (void)clearRecordCacheWithDatabaseScope:(long long)arg1;
- (void)countAssetCacheItemsWithDatabaseScope:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)currentDeviceIDWithCompletionHandler:(id /* block */)arg1;
- (void)currentUserBoundaryKeyWithCompletionHandler:(id /* block */)arg1;
- (void)decryptPersonalInfoOnShare:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dropDetachedContainersWithCompletionHandler:(id /* block */)arg1;
- (void)fetchPCSFromCacheForRecordWithRecordID:(id)arg1 databaseScope:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchPCSFromCacheForShareWithRecordID:(id)arg1 databaseScope:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchPCSFromCacheForZoneWithZoneID:(id)arg1 databaseScope:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)frameworkCachesDirectoryWithCompletionHandler:(id /* block */)arg1;
- (void)getNewWebSharingIdentityDataWithCompletionHandler:(id /* block */)arg1;
- (void)getNewWebSharingIdentityWithCompletionHandler:(id /* block */)arg1;
- (void)getOutstandingOperationCountWithCompletionHandler:(id /* block */)arg1;
- (void)getPCSDiagnosticsForZonesWithCompletionHandler:(id /* block */)arg1;
- (void)getRecordPCSDiagnosticsForZonesWithCompletionHandler:(id /* block */)arg1;
- (void)lastKnownDeviceCountWithCompletionHandler:(id /* block */)arg1;
- (void)performAggregateZonePCSOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(id /* block */)arg3;
- (void)performArchiveRecordsOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(id /* block */)arg3;
- (void)performCompleteParticipantVettingOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(id /* block */)arg3;
- (void)performDeserializeRecordModificationsOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(id /* block */)arg3;
- (void)performFetchArchivedRecordsOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(id /* block */)arg3;
- (void)performFetchMergeableDeltaMetadataOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(id /* block */)arg3;
- (void)performFetchMergeableDeltasOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(id /* block */)arg3;
- (void)performFetchRecordVersionsOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(id /* block */)arg3;
- (void)performFetchRegisteredBundleIDsOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(id /* block */)arg3;
- (void)performFetchShareParticipantKeyOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(id /* block */)arg3;
- (void)performFetchUserQuotaOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(id /* block */)arg3;
- (void)performFetchWhitelistedBundleIDsOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(id /* block */)arg3;
- (void)performInitiateParticipantVettingOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(id /* block */)arg3;
- (void)performMarkAssetBrokenOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(id /* block */)arg3;
- (void)performModifyRecordAccessOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(id /* block */)arg3;
- (void)performModifyWebSharingOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(id /* block */)arg3;
- (void)performPublishAssetsOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(id /* block */)arg3;
- (void)performRepairAssetsOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(id /* block */)arg3;
- (void)performRepairZonePCSOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(id /* block */)arg3;
- (void)performReplaceMergeableDeltasOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(id /* block */)arg3;
- (void)performSerializeRecordModificationsOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(id /* block */)arg3;
- (void)performUploadMergeableDeltasOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(id /* block */)arg3;
- (void)representativeDataclassEnabledWithCompletionHandler:(id /* block */)arg1;
- (void)resetAllApplicationPermissionsWithCompletionHandler:(id /* block */)arg1;
- (void)serverEnvironmentWithCompletionHandler:(id /* block */)arg1;
- (void)serverPreferredPushEnvironmentWithCompletionHandler:(id /* block */)arg1;
- (void)setApplicationPermission:(unsigned long long)arg1 enabled:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)setFakeError:(id)arg1 forNextRequestOfClassName:(id)arg2;
- (void)setFakeResponseOperationResult:(id)arg1 forNextRequestOfClassName:(id)arg2 forItemID:(id)arg3 withLifetime:(int)arg4;
- (void)showAssetCacheWithDatabaseScope:(long long)arg1;
- (void)statusGroupsForApplicationPermission:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)tossConfigWithCompletionHandler:(id /* block */)arg1;

@end
