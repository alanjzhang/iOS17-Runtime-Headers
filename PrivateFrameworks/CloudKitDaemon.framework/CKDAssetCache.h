/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDAssetCache : NSObject {
    CKDMMCS * _MMCS;
    NSString * _applicationBundleID;
    CKSAssetCacheTableGroup * _assetCacheTableGroup;
    CKDAssetHandleTable * _assetHandleTable;
    CKDAssetVolumeTable * _assetVolumeTable;
    long long  _checkoutCount;
    CKDClonedFileCache * _clonedFileCache;
    bool  _didDrop;
    CKDDirectoryContext * _directoryContext;
    bool  _isEvictionScheduled;
    bool  _isNewEmptyCache;
    NSDate * _oldestLastUsedTime;
}

@property (nonatomic) CKDMMCS *MMCS;
@property (nonatomic, readonly) NSString *applicationBundleID;
@property (nonatomic, readonly) CKSAssetCacheTableGroup *assetCacheTableGroup;
@property (nonatomic, readonly) CKDAssetHandleTable *assetHandleTable;
@property (nonatomic, readonly) CKDAssetVolumeTable *assetVolumeTable;
@property (nonatomic) long long checkoutCount;
@property bool didDrop;
@property (nonatomic, retain) CKDDirectoryContext *directoryContext;
@property (nonatomic, readonly) NSString *fileDownloadPath;
@property bool isEvictionScheduled;
@property (nonatomic, readonly) bool isNewEmptyCache;
@property (nonatomic, retain) NSDate *oldestLastUsedTime;

+ (id)_sharedCachesByDirectory;
+ (id)_sharedCachesQueue;
+ (id)assetCacheWithApplicationBundleID:(id)arg1 directoryContext:(id)arg2 database:(id)arg3 didInit:(bool*)arg4 error:(id*)arg5;

- (void).cxx_destruct;
- (id)MMCS;
- (void)_deleteAssetHandlesAndUnregisterItemsForUnmountedAssetVolumes;
- (unsigned long long)_evictAllFilesForced:(bool)arg1;
- (unsigned long long)_evictDownloadedFilesWithEvictionInfo:(id)arg1;
- (unsigned long long)_evictWithEvictionInfo:(id)arg1;
- (void)_expireAssetHandlesWithExpiryDate:(id)arg1;
- (id)_getAssetHandlesForCachedButNotRegisteredMMCSItems:(id)arg1 error:(id*)arg2;
- (id)_initWithApplicationBundleID:(id)arg1 directoryContext:(id)arg2 database:(id)arg3 error:(id*)arg4;
- (void)_resetAssetInflight;
- (id)_saveData:(id)arg1 error:(id*)arg2;
- (void)_scheduleEvictionForDownloadedFiles;
- (id)applicationBundleID;
- (id)assetCacheTableGroup;
- (id)assetHandleTable;
- (id)assetHandleWithCachedPath:(id)arg1;
- (id)assetVolumeTable;
- (void)checkAssetHandlesForRegisteredMMCSItems:(id)arg1;
- (long long)checkoutCount;
- (void)clearAssetCache;
- (unsigned long long)clearForced:(bool)arg1;
- (id)clonedFileCache;
- (unsigned long long)countAssetCacheItems;
- (void)dealloc;
- (id)deviceIDForVolumeIndex:(id)arg1;
- (bool)didDrop;
- (id)directoryContext;
- (void)drop;
- (void)enumerateAssetHandlesSegregatedByVolume:(id)arg1 block:(id /* block */)arg2;
- (unsigned long long)evictAllFilesForced:(bool)arg1;
- (id)existingEntriesForRegisterOrPutHandles:(id)arg1 volumeIndex:(id)arg2;
- (void)expireAssetHandlesIfNecessary;
- (id)fileDownloadPath;
- (id)findAssetHandleForItemID:(unsigned long long)arg1 error:(id*)arg2;
- (bool)isEvictionScheduled;
- (bool)isNewEmptyCache;
- (id)mmcsEngineContext;
- (id)oldestLastUsedTime;
- (bool)parseCachedPath:(id)arg1 assetHandleUUID:(id*)arg2 assetSignature:(id*)arg3;
- (bool)parseCachedPath:(id)arg1 assetHandleUUIDString:(id*)arg2 assetSignatureString:(id*)arg3;
- (unsigned long long)predictedEvictedSizeForAllFilesForced:(bool)arg1;
- (void)setCheckoutCount:(long long)arg1;
- (void)setDidDrop:(bool)arg1;
- (void)setDirectoryContext:(id)arg1;
- (void)setIsEvictionScheduled:(bool)arg1;
- (void)setMMCS:(id)arg1;
- (void)setOldestLastUsedTime:(id)arg1;
- (void)setupPersistentStateAtStartup;
- (void)showAssetCacheInContainer:(id)arg1;
- (bool)startTrackingGetAssetHandles:(id)arg1 operationType:(long long)arg2 error:(id*)arg3;
- (bool)startTrackingRegisterOrPutAssetHandles:(id)arg1 operationType:(long long)arg2 error:(id*)arg3;
- (void)stopTrackingAssetHandlesByItemIDs:(id)arg1;
- (id)trackCachedButNotRegisteredMMCSItems:(id)arg1 error:(id*)arg2;
- (id)trackDownloadedData:(id)arg1 signature:(id)arg2 error:(id*)arg3;
- (void)unregisterItemIDsAndDeleteAssetHandlesWithEvictionInfo:(id)arg1;
- (void)unregisterItemsAndDeleteUnregisteredAssetHandlesWithIDs:(id)arg1 deleteUnregisteredAssetHandlesWithIDs:(id)arg2;
- (id)updateAssetHandlesForChunkedMMCSItems:(id)arg1 error:(id*)arg2;
- (bool)updateAssetHandlesForGetMMCSItems:(id)arg1 cloneItems:(bool)arg2 error:(id*)arg3;
- (bool)updateAssetHandlesForPutMMCSItems:(id)arg1 cloneItems:(bool)arg2 error:(id*)arg3;
- (id)updateAssetHandlesForRegisteredMMCSItems:(id)arg1 error:(id*)arg2;
- (void)updateLastAccessTimeForUUID:(id)arg1;
- (id)volumeIndexForDeviceID:(id)arg1;

@end