/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileDB : NSObject <GEOOfflineDataConfigurationObserver> {
    NSURL * _baseDirectory;
    GEOCountryConfiguration * _countryConfiguration;
    bool  _createdExternalDataDirectory;
    geo_isolater * _createdExternalDataDirectoryIsolater;
    GEOSQLiteDB * _db;
    NSString * _devicePostureCountry;
    NSString * _devicePostureLocale;
    NSString * _devicePostureRegion;
    NSMutableDictionary * _editionsMap;
    struct { union { unsigned int x_1_1_1; struct { unsigned int x_2_2_1 : 8; union { struct { unsigned int x_1_4_1 : 14; unsigned int x_1_4_2 : 4; unsigned int x_1_4_3 : 4; unsigned int x_1_4_4 : 2; } x_2_3_1; struct { unsigned int x_2_4_1 : 8; unsigned int x_2_4_2 : 16; } x_2_3_2; } x_2_2_2; } x_1_1_2; } x1; double x2; } * _expirationRecords;
    unsigned long long  _expirationRecordsCount;
    NSURL * _externalDataDirectory;
    geo_isolater * _infrequentlyChangingMetadataIsolater;
    GEOResourceManifestManager * _manifestManager;
    unsigned long long  _maxDatabaseSize;
    GEOObserverHashTable * _observers;
    GEOOfflineDataConfiguration * _offlineDataConfiguration;
    NSLocale * _overrideLocale;
    bool  _preloading;
    unsigned long long  _tileDataSize;
    bool  _tileDataSizeIsValid;
    double  _timestampDeltaWriteThreshold;
    id  _timestampDeltaWriteThresholdConfigListener;
    _GEOTileDBWriteQueue * _writeQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *devicePostureCountry;
@property (nonatomic, readonly) NSString *devicePostureRegion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)migrateFrom:(id)arg1 to:(id)arg2;

- (void).cxx_destruct;
- (void)_addDataOnDBQueueWithData:(id)arg1 forOfflineBatchKey:(id)arg2 version:(unsigned long long)arg3 etag:(id)arg4 externalResourceUUID:(id)arg5 containedKeys:(id)arg6 subscriptionIdentifier:(id)arg7;
- (void)_addDataOnDBQueueWithData:(id)arg1 key:(const struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 4; union { struct { unsigned int x_1_4_1 : 10; unsigned int x_1_4_2 : 10; unsigned int x_1_4_3 : 12; } x_5_3_1; unsigned int x_5_3_2; } x_2_2_5; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; }*)arg2 tileSet:(union { unsigned int x1; struct { unsigned int x_2_1_1 : 8; union { struct { unsigned int x_1_3_1 : 14; unsigned int x_1_3_2 : 4; unsigned int x_1_3_3 : 4; unsigned int x_1_3_4 : 2; } x_2_2_1; struct { unsigned int x_2_3_1 : 8; unsigned int x_2_3_2 : 16; } x_2_2_2; } x_2_1_2; } x2; })arg3 ETag:(id)arg4 reason:(unsigned char)arg5 externalResourceUUID:(id)arg6 subscriptionIdentifier:(id)arg7;
- (bool)_addSubscriptionOnDBQueue:(id)arg1 error:(id*)arg2;
- (id)_allFullyDownloadedOfflineSubscriptions;
- (unsigned long long)_allTileDataSize;
- (bool)_cleanUpDataForRemovedOfflineSubscriptions:(bool*)arg1 error:(id*)arg2;
- (void)_cleanUpOrphanedExternalResources;
- (void)_countryChanged:(id)arg1;
- (bool)_dataForKeyOnDBQueue:(const struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 4; union { struct { unsigned int x_1_4_1 : 10; unsigned int x_1_4_2 : 10; unsigned int x_1_4_3 : 12; } x_5_3_1; unsigned int x_5_3_2; } x_2_2_5; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; }*)arg1 reason:(unsigned char)arg2 callbackQueue:(id)arg3 dataHandler:(id /* block */)arg4;
- (id)_dataForOfflineKeyOnDBQueue:(id)arg1 version:(unsigned long long)arg2 associatedWithFullyLoadedSubscription:(bool)arg3 error:(id*)arg4;
- (void)_decrementCalculatedTileDataSize:(unsigned long long)arg1;
- (void)_deleteDataOnDBQueueForKey:(const struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 4; union { struct { unsigned int x_1_4_1 : 10; unsigned int x_1_4_2 : 10; unsigned int x_1_4_3 : 12; } x_5_3_1; unsigned int x_5_3_2; } x_2_2_5; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; }*)arg1;
- (void)_deleteOfflineDataNotMatchingVersions:(id)arg1 orVersions:(id)arg2;
- (bool)_deleteTileSet:(union { unsigned int x1; struct { unsigned int x_2_1_1 : 8; union { struct { unsigned int x_1_3_1 : 14; unsigned int x_1_3_2 : 4; unsigned int x_1_3_3 : 4; unsigned int x_1_3_4 : 2; } x_2_2_1; struct { unsigned int x_2_3_1 : 8; unsigned int x_2_3_2 : 16; } x_2_2_2; } x_2_1_2; } x2; })arg1 deletedExternalResources:(bool*)arg2;
- (void)_deviceLocked:(id)arg1;
- (bool)_dropAllTileData;
- (void)_editionUpdate:(id)arg1;
- (void)_enumerateAllKeysOnQueueIncludingData:(bool)arg1 dataHandler:(id /* block */)arg2 callbackQueue:(id)arg3;
- (void)_enumerateSubscriptionExpirationDates:(id /* block */)arg1;
- (void)_evictIfNecessary;
- (void)_evictVeryOldTiles:(bool*)arg1;
- (void)_expireOfflineSubscriptionsForRegulatoryRegionIfNecessary;
- (id)_fetchExpiredSubscriptionsWithIdentifiers:(id)arg1 error:(id*)arg2;
- (void)_fetchSubscriptionMetadataWithIdentifierOnQueue:(id)arg1 queue:(id)arg2 callback:(id /* block */)arg3;
- (id)_fetchSubscriptionsWithIdentifiers:(id)arg1 error:(id*)arg2;
- (void)_flushPendingWrites;
- (id)_getOfflineKeysForLayerOnDBQueue:(unsigned int)arg1 version:(unsigned long long)arg2 error:(id*)arg3;
- (bool)_hasDataForOfflineKeyOnDBQueue:(id)arg1 version:(unsigned long long)arg2 associatedWithFullyLoadedSubscription:(bool)arg3 error:(id*)arg4;
- (void)_incrementCalculatedTileDataSize:(unsigned long long)arg1;
- (long long)_insertDataRowForData:(id)arg1 ETag:(id)arg2 externalResourceUUID:(id)arg3 timestamp:(long long*)arg4 subscriptionIdentifier:(id)arg5;
- (void)_invalidateAllTileData;
- (void)_invalidateSubscriptionsReferencingOldestTilesWithLimit:(unsigned long long)arg1;
- (void)_invalidateSubscriptionsReferencingTilesOlderThan:(unsigned long long)arg1 forTileSet:(union { unsigned int x1; struct { unsigned int x_2_1_1 : 8; union { struct { unsigned int x_1_3_1 : 14; unsigned int x_1_3_2 : 4; unsigned int x_1_3_3 : 4; unsigned int x_1_3_4 : 2; } x_2_2_1; struct { unsigned int x_2_3_1 : 8; unsigned int x_2_3_2 : 16; } x_2_2_2; } x_2_1_2; } x2; }*)arg2;
- (void)_invalidateTileSet:(union { unsigned int x1; struct { unsigned int x_2_1_1 : 8; union { struct { unsigned int x_1_3_1 : 14; unsigned int x_1_3_2 : 4; unsigned int x_1_3_3 : 4; unsigned int x_1_3_4 : 2; } x_2_2_1; struct { unsigned int x_2_3_1 : 8; unsigned int x_2_3_2 : 16; } x_2_2_2; } x_2_1_2; } x2; })arg1;
- (void)_invalidateTileSetsForNewDevicePostureCountry:(id)arg1 newDevicePostureRegion:(id)arg2 oldDevicePostureCountry:(id)arg3 oldDevicePostureRegion:(id)arg4;
- (void)_invalidateTileSubscriptionStatesForDataType:(unsigned int)arg1 dataSubtype:(unsigned int)arg2;
- (void)_invalidatedTilesReferencedBySubscription:(long long)arg1 tileSet:(unsigned int)arg2;
- (bool)_isTileSetTTLExpired:(union { unsigned int x1; struct { unsigned int x_2_1_1 : 8; union { struct { unsigned int x_1_3_1 : 14; unsigned int x_1_3_2 : 4; unsigned int x_1_3_3 : 4; unsigned int x_1_3_4 : 2; } x_2_2_1; struct { unsigned int x_2_3_1 : 8; unsigned int x_2_3_2 : 16; } x_2_2_2; } x_2_1_2; } x2; })arg1 age:(double)arg2;
- (void)_localeChanged:(id)arg1;
- (void)_markDataAtRow:(long long)arg1 associatedWithSubscriptionIdentifier:(id)arg2;
- (void)_markDataForTileKey:(const struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 4; union { struct { unsigned int x_1_4_1 : 10; unsigned int x_1_4_2 : 10; unsigned int x_1_4_3 : 12; } x_5_3_1; unsigned int x_5_3_2; } x_2_2_5; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; }*)arg1 associatedWithSubscriptionIdentifier:(id)arg2;
- (bool)_markExistingTileDataAsCurrentOnDBQueue:(const struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 4; union { struct { unsigned int x_1_4_1 : 10; unsigned int x_1_4_2 : 10; unsigned int x_1_4_3 : 12; } x_5_3_1; unsigned int x_5_3_2; } x_2_2_5; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; }*)arg1 reason:(unsigned char)arg2 subscriptionIdentifier:(id)arg3;
- (void)_performInTransaction:(id /* block */)arg1;
- (void)_performOnDBQueue:(id /* block */)arg1;
- (bool)_prepareDataForPersistence:(id)arg1 isIdenticalToExistingStaleData:(bool)arg2 externalResourceUUID:(id*)arg3;
- (void)_removeExpiredSubscriptions;
- (bool)_removeSubscriptionOnDBQueue:(id)arg1 error:(id*)arg2;
- (void)_setEdition:(unsigned int)arg1 forTileSet:(union { unsigned int x1; struct { unsigned int x_2_1_1 : 8; union { struct { unsigned int x_1_3_1 : 14; unsigned int x_1_3_2 : 4; unsigned int x_1_3_3 : 4; unsigned int x_1_3_4 : 2; } x_2_2_1; struct { unsigned int x_2_3_1 : 8; unsigned int x_2_3_2 : 16; } x_2_2_2; } x_2_1_2; } x2; })arg2;
- (void)_setLastAccessTime:(double)arg1 forMostRecentlyUsedSubscriptionReferencingDataRow:(long long)arg2;
- (void)_setLastAccessTimeOnDBQueue:(double)arg1 forDataRow:(long long)arg2;
- (void)_setLastAccessTimeOnDBQueue:(double)arg1 forKey:(const struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 4; union { struct { unsigned int x_1_4_1 : 10; unsigned int x_1_4_2 : 10; unsigned int x_1_4_3 : 12; } x_5_3_1; unsigned int x_5_3_2; } x_2_2_5; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; }*)arg2;
- (void)_setSubscriptionWithIdentifierOnQueue:(id)arg1 isFullyLoaded:(bool)arg2 forDataType:(unsigned int)arg3 dataSubtype:(unsigned int)arg4 version:(unsigned long long)arg5;
- (bool)_setup:(id)arg1;
- (id)_setupDB:(id)arg1;
- (unsigned long long)_shrinkBySize:(unsigned long long)arg1;
- (unsigned long long)_shrinkBySizeSlow:(unsigned long long)arg1;
- (unsigned long long)_shrinkToSize:(unsigned long long)arg1;
- (void)_supportsOfflineDidChange:(id)arg1;
- (void)_trackFailureOnDBQueueWithKey:(const struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 4; union { struct { unsigned int x_1_4_1 : 10; unsigned int x_1_4_2 : 10; unsigned int x_1_4_3 : 12; } x_5_3_1; unsigned int x_5_3_2; } x_2_2_5; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; }*)arg1 tileSet:(union { unsigned int x1; struct { unsigned int x_2_1_1 : 8; union { struct { unsigned int x_1_3_1 : 14; unsigned int x_1_3_2 : 4; unsigned int x_1_3_3 : 4; unsigned int x_1_3_4 : 2; } x_2_2_1; struct { unsigned int x_2_3_1 : 8; unsigned int x_2_3_2 : 16; } x_2_2_2; } x_2_1_2; } x2; })arg2 shouldProactivelyLoad:(bool)arg3;
- (void)_updateDevicePosture;
- (void)addData:(id)arg1 forKey:(const struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 4; union { struct { unsigned int x_1_4_1 : 10; unsigned int x_1_4_2 : 10; unsigned int x_1_4_3 : 12; } x_5_3_1; unsigned int x_5_3_2; } x_2_2_5; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; }*)arg2 edition:(unsigned int)arg3 set:(union { unsigned int x1; struct { unsigned int x_2_1_1 : 8; union { struct { unsigned int x_1_3_1 : 14; unsigned int x_1_3_2 : 4; unsigned int x_1_3_3 : 4; unsigned int x_1_3_4 : 2; } x_2_2_1; struct { unsigned int x_2_3_1 : 8; unsigned int x_2_3_2 : 16; } x_2_2_2; } x_2_1_2; } x2; })arg4 provider:(unsigned int)arg5 etag:(id)arg6 reason:(unsigned char)arg7;
- (void)addData:(id)arg1 forKey:(const struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 4; union { struct { unsigned int x_1_4_1 : 10; unsigned int x_1_4_2 : 10; unsigned int x_1_4_3 : 12; } x_5_3_1; unsigned int x_5_3_2; } x_2_2_5; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; }*)arg2 edition:(unsigned int)arg3 set:(union { unsigned int x1; struct { unsigned int x_2_1_1 : 8; union { struct { unsigned int x_1_3_1 : 14; unsigned int x_1_3_2 : 4; unsigned int x_1_3_3 : 4; unsigned int x_1_3_4 : 2; } x_2_2_1; struct { unsigned int x_2_3_1 : 8; unsigned int x_2_3_2 : 16; } x_2_2_2; } x_2_1_2; } x2; })arg4 provider:(unsigned int)arg5 etag:(id)arg6 reason:(unsigned char)arg7 isIdenticalToExistingStaleData:(bool)arg8;
- (void)addData:(id)arg1 forKey:(const struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 4; union { struct { unsigned int x_1_4_1 : 10; unsigned int x_1_4_2 : 10; unsigned int x_1_4_3 : 12; } x_5_3_1; unsigned int x_5_3_2; } x_2_2_5; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; }*)arg2 edition:(unsigned int)arg3 set:(union { unsigned int x1; struct { unsigned int x_2_1_1 : 8; union { struct { unsigned int x_1_3_1 : 14; unsigned int x_1_3_2 : 4; unsigned int x_1_3_3 : 4; unsigned int x_1_3_4 : 2; } x_2_2_1; struct { unsigned int x_2_3_1 : 8; unsigned int x_2_3_2 : 16; } x_2_2_2; } x_2_1_2; } x2; })arg4 provider:(unsigned int)arg5 etag:(id)arg6 reason:(unsigned char)arg7 isIdenticalToExistingStaleData:(bool)arg8 forSubscriptionWithIdentifier:(id)arg9;
- (void)addData:(id)arg1 forOfflineDataBatchKey:(id)arg2 version:(unsigned long long)arg3 etag:(id)arg4 containedKeys:(id)arg5 forSubscriptionIdentifier:(id)arg6;
- (void)addSubscription:(id)arg1 queue:(id)arg2 callback:(id /* block */)arg3;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1;
- (unsigned long long)calculateFreeableSizeSync;
- (void)calculateFreeableSizeWithQueue:(id)arg1 handler:(id /* block */)arg2;
- (void)calculateSizeOfAllOfflineDataWithCallbackQueue:(id)arg1 callback:(id /* block */)arg2;
- (void)clearDownloadStateForSubscriptionWithIdentifier:(id)arg1;
- (bool)clearPurgeableOfflineData;
- (void)dataForKeys:(id)arg1 reason:(unsigned char)arg2 group:(id)arg3 callbackQueue:(id)arg4 dataHandler:(id /* block */)arg5;
- (id)dataForOfflineKey:(id)arg1 version:(unsigned long long)arg2 associatedWithFullyLoadedSubscription:(bool)arg3 error:(id*)arg4;
- (void)dealloc;
- (void)deleteDataForKey:(const struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 4; union { struct { unsigned int x_1_4_1 : 10; unsigned int x_1_4_2 : 10; unsigned int x_1_4_3 : 12; } x_5_3_1; unsigned int x_5_3_2; } x_2_2_5; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; }*)arg1;
- (void)deleteDataForTilesets:(id)arg1;
- (void)determineIfOfflineDataBatchExistsForKey:(id)arg1 version:(unsigned long long)arg2 associatingWithSubscriptionIdentifier:(id)arg3 callbackQueue:(id)arg4 callback:(id /* block */)arg5;
- (void)determineIfOfflineDataExistsForKey:(id)arg1 version:(unsigned long long)arg2 associatedWithFullyLoadedSubscription:(bool)arg3 callbackQueue:(id)arg4 callback:(id /* block */)arg5;
- (id)devicePostureCountry;
- (id)devicePostureRegion;
- (void)endPreloadSession;
- (void)enumerateAllKeysIncludingData:(bool)arg1 onQueue:(id)arg2 group:(id)arg3 dataHandler:(id /* block */)arg4;
- (void)evaluateDevicePostureAgainstCurrentManifest:(id)arg1;
- (void)evictVeryOldTilesWithGroup:(id)arg1;
- (void)expireSubscriptionsIfNecessaryWithQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchAllExpiredSubscriptionsWithQueue:(id)arg1 callback:(id /* block */)arg2;
- (void)fetchAllSubscriptionsWithQueue:(id)arg1 callback:(id /* block */)arg2;
- (void)fetchExpiredSubscriptionsMatchingIdentifiers:(id)arg1 queue:(id)arg2 callback:(id /* block */)arg3;
- (void)fetchSubscriptionMetadataWithIdentifier:(id)arg1 queue:(id)arg2 callback:(id /* block */)arg3;
- (void)fetchSubscriptionsMatchingIdentifiers:(id)arg1 queue:(id)arg2 callback:(id /* block */)arg3;
- (void)flushPendingWritesWithGroup:(id)arg1;
- (void)getDataForOfflineKey:(id)arg1 version:(unsigned long long)arg2 associatedWithFullyLoadedSubscription:(bool)arg3 callbackQueue:(id)arg4 callback:(id /* block */)arg5;
- (void)getFailedTileKeysForProactiveLoadSince:(double)arg1 maxCount:(unsigned long long)arg2 queue:(id)arg3 callback:(id /* block */)arg4;
- (void)getLastAccessTimestampForKey:(const struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 4; union { struct { unsigned int x_1_4_1 : 10; unsigned int x_1_4_2 : 10; unsigned int x_1_4_3 : 12; } x_5_3_1; unsigned int x_5_3_2; } x_2_2_5; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; }*)arg1 callbackQueue:(id)arg2 callback:(id /* block */)arg3;
- (void)getNextSubscriptionExpirationDateWithQueue:(id)arg1 callback:(id /* block */)arg2;
- (void)getOfflineKeysForLayer:(unsigned int)arg1 version:(unsigned long long)arg2 callbackQueue:(id)arg3 callback:(id /* block */)arg4;
- (void)getStaleTileKeysUsedSince:(double)arg1 fromTileSets:(id)arg2 maxCount:(unsigned long long)arg3 maxTotalSize:(unsigned long long)arg4 queue:(id)arg5 callback:(id /* block */)arg6;
- (bool)hasDataForOfflineKey:(id)arg1 version:(unsigned long long)arg2 associatedWithFullyLoadedSubscription:(bool)arg3 error:(id*)arg4;
- (id)init;
- (id)initWithBaseDirectory:(id)arg1;
- (id)initWithBaseDirectory:(id)arg1 manifestManager:(id)arg2 countryConfiguration:(id)arg3 offlineDataConfiguration:(id)arg4 locale:(id)arg5 maximumDatabaseSize:(unsigned long long)arg6;
- (void)offlineDataConfiguration:(id)arg1 didChangeActiveVersions:(id)arg2;
- (void)offlineDataConfiguration:(id)arg1 didChangeLatestAvailableVersions:(id)arg2;
- (void)offlineDataConfiguration:(id)arg1 didChangeRegulatoryRegionID:(unsigned int)arg2;
- (void)registerObserver:(id)arg1 queue:(id)arg2;
- (void)removeSubscriptionWithIdentifier:(id)arg1 queue:(id)arg2 callback:(id /* block */)arg3;
- (void)setDownloadState:(long long)arg1 forSubscriptionWithIdentifier:(id)arg2;
- (void)setExpirationRecords:(struct { union { unsigned int x_1_1_1; struct { unsigned int x_2_2_1 : 8; union { struct { unsigned int x_1_4_1 : 14; unsigned int x_1_4_2 : 4; unsigned int x_1_4_3 : 4; unsigned int x_1_4_4 : 2; } x_2_3_1; struct { unsigned int x_2_4_1 : 8; unsigned int x_2_4_2 : 16; } x_2_3_2; } x_2_2_2; } x_1_1_2; } x1; double x2; }*)arg1 count:(unsigned long long)arg2;
- (void)setSubscriptionWithIdentifier:(id)arg1 isFullyLoaded:(bool)arg2 forDataType:(unsigned int)arg3 dataSubtype:(unsigned int)arg4 version:(unsigned long long)arg5;
- (void)shrinkBySize:(unsigned long long)arg1 queue:(id)arg2 callback:(id /* block */)arg3;
- (unsigned long long)shrinkBySizeSync:(unsigned long long)arg1;
- (void)shrinkToSize:(unsigned long long)arg1 queue:(id)arg2 finished:(id /* block */)arg3;
- (unsigned long long)shrinkToSizeSync:(unsigned long long)arg1;
- (void)tearDown;
- (void)trackFailureForKey:(const struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 4; union { struct { unsigned int x_1_4_1 : 10; unsigned int x_1_4_2 : 10; unsigned int x_1_4_3 : 12; } x_5_3_1; unsigned int x_5_3_2; } x_2_2_5; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; }*)arg1 tileSet:(union { unsigned int x1; struct { unsigned int x_2_1_1 : 8; union { struct { unsigned int x_1_3_1 : 14; unsigned int x_1_3_2 : 4; unsigned int x_1_3_3 : 4; unsigned int x_1_3_4 : 2; } x_2_2_1; struct { unsigned int x_2_3_1 : 8; unsigned int x_2_3_2 : 16; } x_2_2_2; } x_2_1_2; } x2; })arg2 shouldProactivelyLoad:(bool)arg3;
- (void)trackSubscriptionAssociationForKey:(const struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 4; union { struct { unsigned int x_1_4_1 : 10; unsigned int x_1_4_2 : 10; unsigned int x_1_4_3 : 12; } x_5_3_1; unsigned int x_5_3_2; } x_2_2_5; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; }*)arg1 subscriptionIdentifier:(id)arg2;
- (void)unregisterObserver:(id)arg1;

@end
