/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLDelayedSaveActions : NSObject {
    NSPredicate * _assetBaseSearchIndexPredicate;
    PLClientServerTransaction * _clientTransaction;
    NSMutableSet * _delayedAlbumCountsAndDateRangeUpdates;
    NSMutableSet * _delayedAssetsForDuetDelete;
    NSMutableSet * _delayedAssetsForFileSystemPersistency;
    NSMutableArray * _delayedCloudFeedAlbumUpdates;
    NSMutableArray * _delayedCloudFeedAssetInserts;
    NSMutableArray * _delayedCloudFeedAssetUpdates;
    NSMutableArray * _delayedCloudFeedCommentInserts;
    NSMutableSet * _delayedCloudFeedDeletionEntries;
    NSMutableArray * _delayedCloudFeedInvitationRecordUpdates;
    NSMutableArray * _delayedDupeAnalysisCloudInserts;
    NSMutableArray * _delayedDupeAnalysisNormalInserts;
    bool  _delayedFeaturedContentUpdateNeeded;
    NSMutableSet * _delayedFeaturedContentUpdateNeededForPerson;
    NSMutableSet * _delayedHighlightAssetUpdates;
    NSMutableSet * _delayedHighlightMomentUpdates;
    NSMutableSet * _delayedImportSessionCountsAndDateRangeUpdates;
    NSMutableSet * _delayedLibraryScopeParticipantsUpdateUUIDs;
    bool  _delayedLibraryScopeRulesUpdated;
    NSMutableSet * _delayedMemoriesAssetUpdate;
    NSMutableSet * _delayedMemoriesForDuetDelete;
    NSMapTable * _delayedMomentAssetDeletions;
    NSMutableArray * _delayedMomentAssetUpdates;
    NSMutableDictionary * _delayedSearchIndexUpdateUUIDs;
    NSMutableDictionary * _delayedSharedAssetContainerIncrementalChangesByAssetID;
    NSMutableSet * _delayedWallpaperSuggestionUUIDs;
    NSMutableSet * _delayedWidgetFavoriteAlbumAssetRemovalNeeded;
    NSMutableSet * _delayedWidgetTimelineReloadTypesNeeded;
    NSMutableDictionary * _delayedWidgetUserAlbumAssetRemovalNeeded;
    NSMutableDictionary * _delayedWorkerTypesToAnalyzeByAssetUUID;
}

@property (nonatomic, readonly) PLClientServerTransaction *clientTransaction;

+ (void)_addHighlightRelationshipChangesFromChangedValues:(id)arg1 onAsset:(id)arg2 intoChange:(id)arg3 forRelationshipNamed:(id)arg4;
+ (void)_checkForHighlightChangesOnToManyRelationshipNamed:(id)arg1 andAddIntoChange:(id)arg2 givenOldValue:(id)arg3 andNewValue:(id)arg4;
+ (void)_checkForHighlightChangesOnToOneRelationshipNamed:(id)arg1 andAddIntoChange:(id)arg2 givenOldValue:(id)arg3 andNewValue:(id)arg4;

- (void).cxx_destruct;
- (void)_popAlbumCountChangesIntoDetail:(id)arg1;
- (void)_popAssetsForFilesystemPersistencyChangesIntoDetail:(id)arg1;
- (void)_popCloudFeedChangesIntoDetail:(id)arg1;
- (void)_popDelayedAlbumCountsAndDateRangeUpdates:(id*)arg1;
- (void)_popDelayedAssetsForAnalysis:(id*)arg1;
- (void)_popDelayedAssetsForFilesystemPersistencyUpdates:(id*)arg1;
- (void)_popDelayedCloudFeedAlbumUpdates:(id*)arg1 assetInserts:(id*)arg2 assetUpdates:(id*)arg3 commentInserts:(id*)arg4 invitationRecordUpdates:(id*)arg5 deletionEntries:(id*)arg6;
- (void)_popDelayedDupeAnalysisNormalInserts:(id*)arg1 cloudInserts:(id*)arg2;
- (void)_popDelayedImportSessionCountsAndDateRangeUpdates:(id*)arg1;
- (void)_popDelayedMomentInsertsAndUpdates:(id*)arg1 deletes:(id*)arg2 updatedAssetIDsForHighlights:(id*)arg3 updatedMomentIDsForHighlights:(id*)arg4 sharedAssetContainerIncrementalChanges:(id*)arg5;
- (void)_popDelayedSearchIndexUpdates:(id*)arg1;
- (void)_popDuetDeletedAssetsIntoDetail:(id)arg1;
- (void)_popDuetDeletedMemoriesIntoDetail:(id)arg1;
- (void)_popDupeAnalysisChangesIntoDetail:(id)arg1;
- (void)_popFeaturedContentUpdateNeededForPerson:(id)arg1;
- (void)_popImportSessionCountChangesIntoDetail:(id)arg1;
- (void)_popLibraryScopeParticipantsUpdateIntoDetail:(id)arg1;
- (void)_popLibraryScopeRulesUpdatedIntoDetail:(id)arg1;
- (void)_popMemoryAssetUpdateIntoDetail:(id)arg1;
- (void)_popMomentChangesIntoDetail:(id)arg1;
- (void)_popSearchIndexChangesIntoDetail:(id)arg1;
- (void)_popWallpaperSuggestionReloadIntoDetail:(id)arg1;
- (void)_popWidgetFavoriteAlbumAssetRemovalReloadNeeded:(id)arg1;
- (void)_popWidgetTimelineReloadNeeded:(id)arg1;
- (void)_popWidgetUserAlbumAssetRemovalReloadNeeded:(id)arg1;
- (void)_recordAlbumUUIDForSearchIndexUpdate:(id)arg1 isInsert:(bool)arg2;
- (void)_recordAssetForSearchIndexUpdate:(id)arg1;
- (void)_recordAssetUUIDForSearchIndexUpdate:(id)arg1 isInsert:(bool)arg2;
- (void)_recordDelayedAlbumCountsAndDateRangeUpdate:(id)arg1;
- (void)_recordDelayedCloudFeedAlbumUpdate:(id)arg1;
- (void)_recordDelayedCloudFeedAssetInsert:(id)arg1;
- (void)_recordDelayedCloudFeedAssetUpdate:(id)arg1;
- (void)_recordDelayedCloudFeedCommentInsert:(id)arg1;
- (void)_recordDelayedCloudFeedDeletionEntries:(id)arg1;
- (void)_recordDelayedCloudFeedInvitationRecordUpdate:(id)arg1;
- (void)_recordDelayedHighlightMomentUpdates:(id)arg1;
- (void)_recordDelayedImportSessionCountsAndDateRangeUpdate:(id)arg1;
- (void)_recordDelayedMomentAssetDeletionsDictionary:(id)arg1 forKey:(id)arg2;
- (void)_recordDelayedMomentAssetUpdates:(id)arg1;
- (void)_recordDetectedFaceUUIDInsertForSearchIndexUpdate:(id)arg1;
- (void)_recordHighlightUUIDForSearchIndexUpdate:(id)arg1 isInsert:(bool)arg2;
- (void)_recordManagedObjectUUID:(id)arg1 forSearchIndexUpdateKey:(id)arg2;
- (void)_recordMemoryUUIDForSearchIndexUpdate:(id)arg1 isInsert:(bool)arg2;
- (void)_recordNormalAssetForDupeAnalysis:(id)arg1;
- (void)_recordPersonUUIDInsertForSearchIndexUpdate:(id)arg1;
- (void)_recordPersonUUIDRenameForSearchIndexUpdate:(id)arg1;
- (void)_recordSharedAssetIncrementalChange:(id)arg1 forAsset:(id)arg2;
- (void)_recordStreamAssetForDupeAnalysis:(id)arg1;
- (void)_searchIndexNeedsUpdatingForChangesInPhotolibrary:(id)arg1;
- (id)assetBaseSearchIndexPredicate;
- (id)clientTransaction;
- (void)forceAlbumCountsAndDateRangeUpdate:(id)arg1;
- (id)initWithClientTransaction:(id)arg1;
- (void)persistDelayedActionsScope:(id)arg1;
- (id)popDelayedSaveActionsDetail;
- (void)recordAdditionalAssetAttributesForMomentUpdate:(id)arg1;
- (void)recordAdditionalAssetAttributesForSearchIndexUpdate:(id)arg1;
- (void)recordAlbumCountsAndDateRangeUpdate:(id)arg1;
- (void)recordAlbumForCloudFeedUpdate:(id)arg1;
- (void)recordAlbumForSearchIndexUpdate:(id)arg1;
- (void)recordAssetDescriptionForSearchIndexUpdate:(id)arg1;
- (void)recordAssetForAlbumCountsAndDateRangeUpdate:(id)arg1;
- (void)recordAssetForAnalysis:(id)arg1 workerFlags:(int)arg2 workerType:(short)arg3;
- (void)recordAssetForCloudFeedUpdate:(id)arg1;
- (void)recordAssetForDuetDelete:(id)arg1;
- (void)recordAssetForDupeAnalysis:(id)arg1;
- (void)recordAssetForFileSystemPersistencyUpdate:(id)arg1;
- (void)recordAssetForImportSessionCountsAndDateRangeUpdate:(id)arg1;
- (void)recordAssetForMomentUpdate:(id)arg1;
- (void)recordAssetForSearchIndexUpdate:(id)arg1;
- (void)recordAssetID:(id)arg1 forWidgetUserAlbumRemoval:(id)arg2;
- (void)recordAssetIDForWidgetFavoriteAlbumRemoval:(id)arg1;
- (void)recordCommentForCloudFeedUpdate:(id)arg1;
- (void)recordDetectedFaceForSearchIndexUpdate:(id)arg1;
- (void)recordFeaturedContentUpdateNeededForPersonUUID:(id)arg1;
- (void)recordHighlightForSearchIndexUpdate:(id)arg1;
- (void)recordImportSessionCountsAndDateRangeUpdate:(id)arg1;
- (void)recordInvitationRecordForCloudFeedUpdate:(id)arg1;
- (void)recordLibraryScopeParticipantsUpdateForLibraryScope:(id)arg1;
- (void)recordLibraryScopeRulesUpdated;
- (void)recordMediaAnalysisAssetAttributesForSearchIndexUpdate:(id)arg1;
- (void)recordMemoryAssetsUpdate:(id)arg1;
- (void)recordMemoryForDuetDelete:(id)arg1;
- (void)recordMemoryForSearchIndexUpdate:(id)arg1;
- (void)recordMomentForHighlightUpdate:(id)arg1;
- (void)recordPersonForSearchIndexUpdate:(id)arg1;
- (void)recordWallpaperSuggestionReloadForUUID:(id)arg1;
- (void)recordWidgetTimelineReloadNeededForType:(long long)arg1;

@end
