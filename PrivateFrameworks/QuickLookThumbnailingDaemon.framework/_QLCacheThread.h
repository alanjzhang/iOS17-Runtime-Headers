/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/QuickLookThumbnailingDaemon.framework/QuickLookThumbnailingDaemon
 */

@interface _QLCacheThread : NSObject <QLDiskCacheDelegate> {
    QLCacheCleanUpDatabaseThread * _cleanUpDatabaseThread;
    id /* block */  _cleanupBlocks;
    QLDiskCacheQueryOperation * _currentDiskCacheQueryOperation;
    unsigned long long  _currentMode;
    QLDiskCache * _diskCache;
    NSOperationQueue * _diskCacheQueryOperationQueue;
    NSURL * _diskCacheURL;
    NSObject<OS_dispatch_source> * _drainTimer;
    unsigned long long  _hitCount;
    bool  _lowDiskSpace;
    NSObject<OS_dispatch_source> * _lowDiskSpaceSource;
    NSObject<OS_dispatch_queue> * _lowDiskSpaceSourceQueue;
    QLMemoryCache * _memoryCache;
    NSOperationQueue * _memoryCacheQueryOperationQueue;
    unsigned long long  _missedCount;
    NSLock * _modeLock;
    QLServerThread * _serverThread;
    bool  _serverThreadIsIdle;
    bool  _waitingForCleanup;
    id /* block */  _writeBlocks;
    NSObject<OS_dispatch_queue> * _writeCoalesceQueue;
    NSObject<OS_dispatch_queue> * _writeQueue;
    NSObject<OS_os_transaction> * _writeTransaction;
}

@property (retain) QLCacheCleanUpDatabaseThread *cleanUpDatabaseThread;
@property (retain) QLDiskCacheQueryOperation *currentDiskCacheQueryOperation;
@property (readonly) unsigned long long currentMode;
@property (readonly) QLDiskCache *diskCache;
@property (retain) NSOperationQueue *diskCacheQueryOperationQueue;
@property (retain) NSURL *diskCacheURL;
@property unsigned long long hitCount;
@property (readonly) bool lowDiskSpace;
@property (retain) NSObject<OS_dispatch_source> *lowDiskSpaceSource;
@property (retain) NSObject<OS_dispatch_queue> *lowDiskSpaceSourceQueue;
@property (readonly) QLMemoryCache *memoryCache;
@property unsigned long long missedCount;
@property (readonly) NSString *modeDescription;
@property (retain) NSLock *modeLock;
@property QLServerThread *serverThread;
@property bool serverThreadIsIdle;
@property (nonatomic) bool shouldRemoveThumbnailsForDeletedFiles;
@property bool waitingForCleanup;

+ (long long)defaultCacheSize;

- (void).cxx_destruct;
- (id)_allThumbnailsEnumerateWithEnumerator:(id)arg1;
- (void)_destroyDrainTimer;
- (void)_drainPendingBlocks;
- (void)_drainPendingBlocksNow;
- (void)_registerMachPortForLowDiskSpaceNotification;
- (void)_scheduleBlockDrain;
- (void)_scheduledDrainPendingBlocks;
- (void)_setMode:(unsigned long long)arg1;
- (bool)_shouldQuitCleanUpDatabaseModeForMode:(unsigned long long)arg1;
- (bool)_shouldQuitClosedModeForMode:(unsigned long long)arg1;
- (bool)_shouldQuitLowSpaceModeForMode:(unsigned long long)arg1;
- (bool)_shouldQuitPauseModeForMode:(unsigned long long)arg1;
- (bool)_shouldQuitResetingModeForMode:(unsigned long long)arg1;
- (bool)_shouldQuitWorkingModeForMode:(unsigned long long)arg1;
- (void)_unregisterMachPortForLowDiskSpaceNotification;
- (void)_unscheduleBlockDrain;
- (void)_updateLowDisk;
- (void)_updateMode;
- (void)_waitForEndOfDatabaseCleanup;
- (void)_willStartCleanUpDatabaseModeFromMode:(unsigned long long)arg1;
- (void)_willStartClosedModeFromMode:(unsigned long long)arg1;
- (void)_willStartLowSpaceModeFromMode:(unsigned long long)arg1;
- (void)_willStartPauseModeFromMode:(unsigned long long)arg1;
- (void)_willStartResetingModeFromMode:(unsigned long long)arg1;
- (void)_willStartWorkingModeFromMode:(unsigned long long)arg1;
- (bool)addNoThumbnailIntoCache:(id)arg1;
- (bool)addThumbnailIntoCache:(id)arg1 bitmapFormat:(id)arg2 bitmapData:(id)arg3 metadata:(id)arg4 flavor:(int)arg5 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 badgeType:(unsigned long long)arg7 externalGeneratorDataHash:(unsigned long long)arg8;
- (bool)addThumbnailRequest:(id)arg1;
- (id)allThumbnailsForFPItemID:(id)arg1;
- (id)allThumbnailsForFileIdentifier:(id)arg1;
- (id)allThumbnailsForIno:(unsigned long long)arg1 fsid:(struct fsid { int x1[2]; })arg2;
- (id)allThumbnailsInfo;
- (id)cacheInfo;
- (id)cleanUpDatabaseThread;
- (void)closeCache;
- (id)contentDescriptionForURL:(struct __CFURL { }*)arg1;
- (id)currentDiskCacheQueryOperation;
- (unsigned long long)currentMode;
- (void)databaseCorruptionDetected;
- (id)diskCache;
- (id)diskCacheQueryOperationQueue;
- (id)diskCacheURL;
- (void)enqueueWriting:(id /* block */)arg1;
- (void)exitImmediately;
- (void)forceCommit;
- (void)forceCommitAndClose;
- (unsigned long long)hitCount;
- (unsigned long long)hitToSaveCount;
- (id)initWithServerThread:(id)arg1 cacheSize:(long long)arg2 location:(id)arg3;
- (bool)isCacheOpened;
- (bool)isIdle;
- (bool)itemIsMissingRemoteThumbnail:(id)arg1;
- (id)itemsAfterFilteringOutItemsWithMissingThumbnails:(id)arg1;
- (bool)locked_removeCachedThumbnailsFromUninstalledFileProvidersWithIdentifiers:(id)arg1;
- (bool)locked_removeCachedThumbnailsFromUninstalledFileProvidersWithRemainingFileProviderIdentifiers:(id)arg1;
- (bool)lowDiskSpace;
- (id)lowDiskSpaceSource;
- (id)lowDiskSpaceSourceQueue;
- (id)memoryCache;
- (unsigned long long)missedCount;
- (id)modeDescription;
- (id)modeLock;
- (void)noteRemoteThumbnailMissingForItems:(id)arg1;
- (void)noteRemoteThumbnailPresentForItems:(id)arg1;
- (void)openCache;
- (void)prepareToExit;
- (void)reset;
- (void)serverIsIdle;
- (void)serverIsWorking;
- (id)serverThread;
- (bool)serverThreadIsIdle;
- (void)setCleanUpDatabaseThread:(id)arg1;
- (void)setCurrentDiskCacheQueryOperation:(id)arg1;
- (void)setDiskCacheQueryOperationQueue:(id)arg1;
- (void)setDiskCacheURL:(id)arg1;
- (void)setHitCount:(unsigned long long)arg1;
- (bool)setLastHitDateOfAllCachedThumbnailsToDate:(id)arg1;
- (void)setLowDiskSpaceSource:(id)arg1;
- (void)setLowDiskSpaceSourceQueue:(id)arg1;
- (void)setMissedCount:(unsigned long long)arg1;
- (void)setModeLock:(id)arg1;
- (void)setServerThread:(id)arg1;
- (void)setServerThreadIsIdle:(bool)arg1;
- (void)setShouldRemoveThumbnailsForDeletedFiles:(bool)arg1;
- (void)setWaitingForCleanup:(bool)arg1;
- (bool)shouldRemoveThumbnailsForDeletedFiles;
- (void)startWriting;
- (void)stopWriting;
- (unsigned long long)thumbnailInMemoryToSaveCount;
- (void)updateMode;
- (bool)waitingForCleanup;

// _QLCacheThread (CacheDelete)

- (long long)purgeOnMountPoint:(id)arg1 withUrgency:(int)arg2 beforeDate:(id)arg3;
- (long long)purgeableSpaceOnMountPoint:(id)arg1 withUrgency:(int)arg2 beforeDate:(id)arg3;

// _QLCacheThread (Private)

- (void)_addThumbnailRequestIntoDiskCacheQueryQueue:(id)arg1;
- (void)_cleanUpDatabaseDone;
- (void)_dispatchThumbnailRequestInServerThread:(id)arg1;
- (void)_sendThumbnailData:(id)arg1 forThumbnailRequest:(id)arg2;
- (void)_setLowDiskSpace:(bool)arg1;
- (void)_thumbnailHasBeenCancelled:(id)arg1;

@end
