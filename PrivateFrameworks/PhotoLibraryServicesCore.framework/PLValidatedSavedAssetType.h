/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PhotoLibraryServicesCore.framework/PhotoLibraryServicesCore
 */

@interface PLValidatedSavedAssetType : NSObject

+ (short)defaultSavedAssetTypeForConsolidatedAssets;
+ (short)defaultSavedAssetTypeForLegacyMigration;
+ (short)defaultSavedAssetTypeForPLAssetsSaver;
+ (short)defaultSavedAssetTypeForPhotoKitAssetCreationRequest;
+ (short)defaultSavedAssetTypeForUnknownFilesystemImportAssets;
+ (short)defaultSavedAssetTypeForUnspecifiedImageWriterJobs;
+ (void)executeBlockForSavedAssetType:(short)arg1 unknown:(id /* block */)arg2 photoBooth:(id /* block */)arg3 photoStream:(id /* block */)arg4 camera:(id /* block */)arg5 cloudShared:(id /* block */)arg6 cameraConnectionKit:(id /* block */)arg7 cloudPhotoLibrary:(id /* block */)arg8 wallpaper_UNUSED:(id /* block */)arg9 momentShared:(id /* block */)arg10 placeholder:(id /* block */)arg11 referenced:(id /* block */)arg12 alternate:(id /* block */)arg13 guest:(id /* block */)arg14 companionSynced:(id /* block */)arg15 legacyImport:(id /* block */)arg16 unrecognized:(id /* block */)arg17;
+ (unsigned long long)mapSavedAssetType:(short)arg1 unknown:(unsigned long long)arg2 photoBooth:(unsigned long long)arg3 photoStream:(unsigned long long)arg4 camera:(unsigned long long)arg5 cloudShared:(unsigned long long)arg6 cameraConnectionKit:(unsigned long long)arg7 cloudPhotoLibrary:(unsigned long long)arg8 wallpaper_UNUSED:(unsigned long long)arg9 momentShared:(unsigned long long)arg10 placeholder:(unsigned long long)arg11 referenced:(unsigned long long)arg12 alternate:(unsigned long long)arg13 guest:(unsigned long long)arg14 companionSynced:(unsigned long long)arg15 legacyImport:(unsigned long long)arg16 unrecognized:(unsigned long long)arg17;
+ (unsigned short)maskForAddAssetToLibraryScopeIfShareEverythingPolicyEnabled;
+ (unsigned short)maskForAddingLocalVideoKeyFrameResourceExclusions;
+ (unsigned short)maskForAllPhotosAlbum;
+ (unsigned short)maskForAllowedForAnalysis;
+ (unsigned short)maskForAllowedToPromoteToGuestAsset;
+ (unsigned short)maskForAllowedToPromoteToUserLibrary;
+ (unsigned short)maskForAllowedToResetGuestAssetPromotion;
+ (unsigned short)maskForAssetsAllowingLockedResourceTransfer;
+ (unsigned short)maskForAssetsAllowingVirtualFullSizeRender;
+ (unsigned short)maskForAssetsEligibleForCloudKitTransport;
+ (unsigned short)maskForAssetsEligibleForCloudKitTransportWithoutMomentSharesAndPlaceholders;
+ (unsigned short)maskForAssetsExcludedFromOTARestore;
+ (unsigned short)maskForAssetsIncludedInMoments;
+ (unsigned short)maskForAutoDeleteAssetsUponMomentShareTrash;
+ (unsigned short)maskForAvalancheSupportedAssets;
+ (unsigned short)maskForBurstsAlbumExclusions;
+ (unsigned short)maskForCameraAsset;
+ (unsigned short)maskForCameraConnectionKitAsset;
+ (unsigned short)maskForCanDeleteEmptyPathForCorruptAssetsDuringFilesystemImport;
+ (unsigned short)maskForCloudPhotoLibraryAsset;
+ (unsigned short)maskForCloudPhotoLibrarySizesFromDBExclusions;
+ (unsigned short)maskForCloudSharedAsset;
+ (unsigned short)maskForCloudSharedBundleScope;
+ (unsigned short)maskForCompanionSyncedAsset;
+ (unsigned short)maskForCompleteStateIsRelevant;
+ (unsigned short)maskForCouldBeStoredInDCIM;
+ (unsigned short)maskForCplQuotaExclusions;
+ (unsigned short)maskForDupeAnalysisExclusions;
+ (unsigned short)maskForDupeAnalysisNormalAssetsExclusions;
+ (unsigned short)maskForDupeAnalysisUseFakeHash;
+ (unsigned short)maskForDuplicateProcessingExclusions;
+ (unsigned short)maskForFavoritesAlbumExclusions;
+ (unsigned short)maskForFetchingDuplicatePhotoStreamPhotosForPhotos;
+ (unsigned short)maskForFinderSyncedAsset;
+ (unsigned short)maskForFixIncorrectAddedDateExclusions;
+ (unsigned short)maskForFixupAssetPersistenceExclusions;
+ (unsigned short)maskForGenerateAddedDateExclusions;
+ (unsigned short)maskForGuestAsset;
+ (unsigned short)maskForIncludeInCPLCounts;
+ (unsigned short)maskForIsValidForBackup;
+ (unsigned short)maskForIsValidForFileSystemPersistence;
+ (unsigned short)maskForLibraryScopeRuleEvaluationExclusions;
+ (unsigned short)maskForMigrateLegacyVideoAdjustmentsExclusions;
+ (unsigned short)maskForMomentShareDeDupe;
+ (unsigned short)maskForMomentSharedAsset;
+ (unsigned short)maskForNotifyALAssetsLibraryWithChangesCloudSharedExclusions;
+ (unsigned short)maskForNotifyALAssetsLibraryWithChangesExclusions;
+ (unsigned short)maskForPLFetchingAlbumExclusions;
+ (unsigned short)maskForPLSyncClientIncompleteAssetExclusions;
+ (unsigned short)maskForPhotoBoothAsset;
+ (unsigned short)maskForPhotoStreamAsset;
+ (unsigned short)maskForPlaceholderAsset;
+ (unsigned short)maskForPlacesAlbum;
+ (unsigned short)maskForPopulateFaceRegionsExclusions;
+ (unsigned short)maskForRecentlyAddedAlbumExclusions;
+ (unsigned short)maskForRecentlyEditedAlbumExclusions;
+ (unsigned short)maskForRecoverSupplementalResourcesForAsset;
+ (unsigned short)maskForReferencedAsset;
+ (unsigned short)maskForSearchIndexExclusions;
+ (unsigned short)maskForSelfiesAlbumExclusions;
+ (unsigned short)maskForSharedLibraryExclusions;
+ (unsigned short)maskForSmartAlbumExclusions;
+ (unsigned short)maskForStoreDemoContent;
+ (unsigned short)maskForSuppressPtpInfo;
+ (unsigned short)maskForSyndicationIdentifierFetchExclusions;
+ (unsigned short)maskForSyndicationSyncWorkerInSyndicationLibrary;
+ (unsigned short)maskForSyndicationSyncWorkerInSystemPhotoLibrary;
+ (unsigned short)maskForTagScreenshotsExclusions;
+ (unsigned short)maskForTriggerRebuildForPathCorruptionExclusions;
+ (unsigned short)maskForUpdateMogulSubtypeExclusions;
+ (unsigned short)maskForUserLibrary;
+ (unsigned short)maskForValidSavedAssetTypes;
+ (unsigned short)maskForVideosAlbumExclusions;
+ (id)predicateArrayArgumentForMask:(unsigned short)arg1;
+ (id)predicateForExcludeMask:(unsigned short)arg1 useIndex:(bool)arg2;
+ (id)predicateForExcludeMask:(unsigned short)arg1 useIndex:(bool)arg2 keyPathPrefix:(id)arg3;
+ (id)predicateForExcludeSavedAssetType:(short)arg1;
+ (id)predicateForIncludeMask:(unsigned short)arg1 useIndex:(bool)arg2;
+ (id)predicateForIncludeMask:(unsigned short)arg1 useIndex:(bool)arg2 keyPathPrefix:(id)arg3;
+ (id)predicateForIncludeMask:(unsigned short)arg1 useIndex:(bool)arg2 keyPathPrefix:(id)arg3 formatPrefix:(id)arg4;
+ (id)predicateForIncludeSavedAssetType:(short)arg1;
+ (short)savedAssetTypeForAssetsInCPLAssetsDirectory;
+ (short)savedAssetTypeForAwakeFromInsert;
+ (short)savedAssetTypeForCameraAsset;
+ (short)savedAssetTypeForCloudPhotoLibraryAsset;
+ (short)savedAssetTypeForCloudSharedAsset;
+ (short)savedAssetTypeForCompanionSyncedAsset;
+ (short)savedAssetTypeForDownloadedPhotoStreamAssets;
+ (short)savedAssetTypeForDuplicateAsAlternateAsset;
+ (short)savedAssetTypeForFinderSyncedAsset;
+ (short)savedAssetTypeForImportedByCameraConnectionKit;
+ (short)savedAssetTypeForInsertIntoSyndicationLibrary;
+ (short)savedAssetTypeForMomentSharedAsset;
+ (short)savedAssetTypeForPhotoBoothAsset;
+ (short)savedAssetTypeForPhotoStreamPhotoSavedToCameraRoll;
+ (short)savedAssetTypeForPlaceholder;
+ (short)savedAssetTypeForPromoteToGuestAsset;
+ (short)savedAssetTypeForPromoteToUserLibrary;
+ (short)savedAssetTypeForReferencedImport;
+ (id)subpredicatesForExcludeMask:(unsigned short)arg1;
+ (id)subpredicatesForIncludeMask:(unsigned short)arg1;
+ (unsigned short)validatedSavedAssetTypeMaskUnknown:(bool)arg1 photoBooth:(bool)arg2 photoStream:(bool)arg3 camera:(bool)arg4 cloudShared:(bool)arg5 cameraConnectionKit:(bool)arg6 cloudPhotoLibrary:(bool)arg7 wallpaper_UNUSED:(bool)arg8 momentShared:(bool)arg9 placeholder:(bool)arg10 referenced:(bool)arg11 alternate:(bool)arg12 guest:(bool)arg13 companionSynced:(bool)arg14 legacyImport:(bool)arg15;

@end
