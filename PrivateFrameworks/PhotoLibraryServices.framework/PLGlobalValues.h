/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLGlobalValues : NSObject {
    NSManagedObjectContext * _moc;
}

@property (nonatomic, readonly) NSDate *_deprecated_lastFullIndexSyndicationSyncDate;
@property (nonatomic) bool backgroundJobServiceNeedsProcessing;
@property (nonatomic) bool didImportFileSystemAssets;
@property (nonatomic, retain) NSNumber *greenTeaContactsAuthorization;
@property (nonatomic, retain) NSDictionary *greenValues;
@property (nonatomic, retain) NSDate *inProgressFullIndexSyndicationSyncDate;
@property (nonatomic, readonly) bool isInitialDuplicateDetectorProcessingCompleted;
@property (nonatomic, readonly) bool isRebuildComplete;
@property (getter=isJournalRebuildRequired, nonatomic) bool journalRebuildRequired;
@property (nonatomic, retain) NSDate *lastAttachmentSyndicationSyncDate;
@property (nonatomic, retain) NSDate *lastChatSyndicationSyncDate;
@property (nonatomic, retain) NSDate *lastDeleteSyndicationSyncDate;
@property (nonatomic, retain) NSPersistentHistoryToken *lastDuplicateDetectorProcessingToken;
@property (nonatomic, retain) NSDate *lastFullIndexSyndicationSyncStartDate;
@property (nonatomic, copy) NSString *lastGuestAssetSyncTargetLibraryPath;
@property (nonatomic, retain) NSPersistentHistoryToken *lastGuestAssetSyncToken;
@property (nonatomic, retain) NSPersistentHistoryToken *lastInitialDuplicateDetectorProcessingCompletedToken;
@property (nonatomic, copy) NSString *lastPersonSyncSourceLibraryPath;
@property (nonatomic, retain) NSPersistentHistoryToken *lastPersonSyncToken;
@property (nonatomic, retain) NSPersistentHistoryToken *lastSharedAssetContainerProcessingToken;
@property (nonatomic, readonly) unsigned long long libraryCreateOptions;
@property (nonatomic, retain) NSString *localeIdentifier;
@property (nonatomic, retain) NSString *lockedResourceTransitionAssetUUID;
@property (nonatomic, retain) NSNumber *orphanedSceneClassificationsCount;
@property (nonatomic, retain) NSDate *syndicationPrefetchDownloadThrottlingDate;
@property (nonatomic, retain) NSDate *syndicationStartDate;
@property (nonatomic) double syndicationSyncRangeDenominator;

+ (void)setJournalRebuildRequired:(bool)arg1 managedObjectContext:(id)arg2;
+ (void)setLibraryCreateOptions:(unsigned long long)arg1 managedObjectContext:(id)arg2;
+ (void)setSyndicationPrefetchDownloadThrottlingDate:(id)arg1 managedObjectContext:(id)arg2;

- (void).cxx_destruct;
- (id)_deprecated_lastFullIndexSyndicationSyncDate;
- (id)_getValueUsingPerformBlockAndWait:(id /* block */)arg1;
- (void)_setBackgroundJobServiceNeedsProcessing:(bool)arg1;
- (void)_setDidImportFileSystemAssets:(bool)arg1;
- (void)_setRebuildComplete;
- (void)_setValueUsingPerformBlockAndWait:(id /* block */)arg1 responsibleCaller:(const char *)arg2;
- (bool)backgroundJobServiceNeedsProcessing;
- (bool)didImportFileSystemAssets;
- (void)dontImportFileSystemDataIntoDatabase;
- (id)greenTeaContactsAuthorization;
- (id)greenValues;
- (id)inProgressFullIndexSyndicationSyncDate;
- (id)initWithManagedObjectContext:(id)arg1;
- (bool)isInitialDuplicateDetectorProcessingCompleted;
- (bool)isJournalRebuildRequired;
- (bool)isRebuildComplete;
- (id)lastAttachmentSyndicationSyncDate;
- (id)lastChatSyndicationSyncDate;
- (id)lastDeleteSyndicationSyncDate;
- (id)lastDuplicateDetectorProcessingToken;
- (id)lastFullIndexSyndicationSyncStartDate;
- (id)lastGuestAssetSyncTargetLibraryPath;
- (id)lastGuestAssetSyncToken;
- (id)lastInitialDuplicateDetectorProcessingCompletedToken;
- (id)lastPersonSyncSourceLibraryPath;
- (id)lastPersonSyncToken;
- (id)lastSharedAssetContainerProcessingToken;
- (unsigned long long)libraryCreateOptions;
- (id)localeIdentifier;
- (id)lockedResourceTransitionAssetUUID;
- (id)orphanedSceneClassificationsCount;
- (void)setBackgroundJobServiceNeedsProcessing:(bool)arg1;
- (void)setDidImportFileSystemAssets:(bool)arg1;
- (void)setGreenTeaContactsAuthorization:(id)arg1;
- (void)setGreenValues:(id)arg1;
- (void)setInProgressFullIndexSyndicationSyncDate:(id)arg1;
- (void)setJournalRebuildRequired:(bool)arg1;
- (void)setLastAttachmentSyndicationSyncDate:(id)arg1;
- (void)setLastChatSyndicationSyncDate:(id)arg1;
- (void)setLastDeleteSyndicationSyncDate:(id)arg1;
- (void)setLastDuplicateDetectorProcessingToken:(id)arg1;
- (void)setLastFullIndexSyndicationSyncStartDate:(id)arg1;
- (void)setLastGuestAssetSyncTargetLibraryPath:(id)arg1;
- (void)setLastGuestAssetSyncToken:(id)arg1;
- (void)setLastInitialDuplicateDetectorProcessingCompletedToken:(id)arg1;
- (void)setLastPersonSyncSourceLibraryPath:(id)arg1;
- (void)setLastPersonSyncToken:(id)arg1;
- (void)setLastSharedAssetContainerProcessingToken:(id)arg1;
- (void)setLocaleIdentifier:(id)arg1;
- (void)setLockedResourceTransitionAssetUUID:(id)arg1;
- (void)setOrphanedSceneClassificationsCount:(id)arg1;
- (void)setRebuildComplete;
- (void)setSyndicationPrefetchDownloadThrottlingDate:(id)arg1;
- (void)setSyndicationStartDate:(id)arg1;
- (void)setSyndicationSyncRangeDenominator:(double)arg1;
- (void)setWidgetTimelineGeneratedForDisplaySize:(struct CGSize { double x1; double x2; })arg1;
- (bool)shouldPrefetchWidgetResources;
- (id)syndicationPrefetchDownloadThrottlingDate;
- (id)syndicationStartDate;
- (double)syndicationSyncRangeDenominator;

@end
