/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/iCloudDriveCore.framework/iCloudDriveCore
 */

@interface BRCAccountSessionFPFS : NSObject <BRCCloudDocsAppsObserver> {
    NSString * _acAccountID;
    BRDSIDString * _accountDSID;
    BRCAccountHandler * _accountHandler;
    bool  _accountIsReady;
    BRCAccountWaitOperation * _accountWaitOperation;
    BRCAnalyticsReporter * _analyticsReporter;
    NSMutableDictionary * _appLibrariesByRowID;
    BRCThrottle * _appLibraryAliasRemovalThrottle;
    BRCThrottle * _appLibraryResetThrottle;
    BRCThrottle * _appLibraryScanThrottle;
    BRCApplyScheduler * _applyScheduler;
    NSString * _cacheDirPath;
    BRCPQLConnection * _clientDB;
    BRCClientState * _clientState;
    NSObject<OS_dispatch_workloop> * _clientTruthWorkloop;
    int  _cloudDocsFD;
    BRCContainerScheduler * _containerScheduler;
    NSString * _databaseID;
    NSObject<OS_dispatch_queue> * _dbCorruptionQueue;
    id /* block */  _dbProfilingHook;
    NSURL * _dbURL;
    NSObject<OS_dispatch_source> * _dbWatcher;
    NSObject<OS_dispatch_queue> * _dbWatcherQueue;
    BRCDeadlineScheduler * _defaultScheduler;
    BRCDiskSpaceReclaimer * _diskReclaimer;
    BRCDownloadTrackers * _downloadTrackers;
    BRCPQLConnection * _expensiveReadOnlyDB;
    BRCFairScheduler * _fairClientDBScheduler;
    BRCFileUnlinker * _fileUnlinker;
    bool  _forDBDump;
    BRCFSDownloader * _fsDownloader;
    BRCFSImporter * _fsImporter;
    BRCFSUploader * _fsUploader;
    BRCGlobalProgress * _globalProgress;
    bool  _isCancelled;
    bool  _isDBOpened;
    bool  _isDataSeparated;
    NSNumber * _isInCarry;
    bool  _isOpen;
    NSMutableDictionary * _libraryRowIDsByMangledID;
    BRCThrottle * _lostItemThrottle;
    NSHashTable * _miscOperations;
    BRCNotificationManager * _notificationManager;
    bool  _offline;
    BRCThrottle * _operationFailureThrottle;
    NSString * _personaIdentifier;
    NSMutableDictionary * _privateClientZonesByID;
    NSMutableDictionary * _privateServerZonesByID;
    BRCPQLConnection * _readOnlyDB;
    NSObject<OS_dispatch_workloop> * _readOnlyWorkloop;
    BRCRecentsEnumerator * _recentsEnumerator;
    NSObject<OS_dispatch_queue> * _resetQueue;
    bool  _resumed;
    BRCServerChangesApplier * _serverChangesApplier;
    BRCPQLConnection * _serverDB;
    BRCServerPersistedState * _serverState;
    NSObject<OS_dispatch_workloop> * _serverTruthWorkloop;
    NSMutableDictionary * _serverZonesByZoneRowID;
    NSString * _sessionDirPath;
    BRCThrottle * _sharedAppLibraryResetThrottle;
    NSMutableDictionary * _sharedClientZonesByMangledID;
    NSMutableDictionary * _sharedServerZonesByMangledID;
    BRCStageRegistry * _stageRegistry;
    BRCThrottle * _syncClientZoneErrorThrottle;
    BRCThrottle * _syncClientZoneThrottle;
    NSMutableDictionary * _syncContexts;
    BRCSyncUpScheduler * _syncUpScheduler;
    NSString * _ubiquityTokenSalt;
    BRCUserNotification * _userNotification;
    BRCVolume * _volume;
    NSMutableSet * _xpcClients;
    struct brc_mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } pthread; 
    }  _zonesCreationLock;
    struct brc_mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } pthread; 
    }  _zonesLock;
}

@property (nonatomic, readonly) BRDSIDString *accountDSID;
@property (nonatomic, readonly) BRCAccountHandler *accountHandler;
@property (nonatomic, readonly) BRCAccountWaitOperation *accountWaitOperation;
@property (nonatomic, readonly) BRCAnalyticsReporter *analyticsReporter;
@property (nonatomic, readonly) BRCThrottle *appLibraryAliasRemovalThrottle;
@property (nonatomic, readonly) BRCThrottle *appLibraryResetThrottle;
@property (nonatomic, readonly) BRCThrottle *appLibraryScanThrottle;
@property (nonatomic, readonly) BRCApplyScheduler *applyScheduler;
@property (nonatomic, retain) NSString *cacheDirPath;
@property (nonatomic, readonly) BRCPQLConnection *clientDB;
@property (nonatomic, readonly) BRCClientState *clientState;
@property (nonatomic, readonly) NSObject<OS_dispatch_workloop> *clientTruthWorkloop;
@property (nonatomic, readonly) BRCContainerScheduler *containerScheduler;
@property (nonatomic, readonly) unsigned long long databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) BRCDeadlineScheduler *defaultScheduler;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BRCDiskSpaceReclaimer *diskReclaimer;
@property (nonatomic, readonly) BRCDownloadTrackers *downloadTrackers;
@property (nonatomic, readonly) BRCPQLConnection *expensiveReadOnlyDB;
@property (nonatomic, readonly) BRCFairScheduler *fairClientDBScheduler;
@property (nonatomic, readonly) BRCFileUnlinker *fileUnlinker;
@property (nonatomic, readonly) BRCFSDownloader *fsDownloader;
@property (nonatomic, readonly) BRCFSImporter *fsImporter;
@property (nonatomic, readonly) BRCFSUploader *fsUploader;
@property (nonatomic, readonly) BRCGlobalProgress *globalProgress;
@property (nonatomic, readonly) bool hasOptimizeStorageEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCancelled;
@property (nonatomic, readonly) bool isDataSeparated;
@property (nonatomic, readonly) bool isGreedy;
@property (nonatomic, readonly) bool isOpen;
@property (nonatomic, readonly) BRCThrottle *lostItemThrottle;
@property (nonatomic, readonly) BRCNotificationManager *notificationManager;
@property (nonatomic, readonly) bool offline;
@property (nonatomic, readonly) BRCThrottle *operationFailureThrottle;
@property (nonatomic, readonly) NSString *personaIdentifier;
@property (nonatomic, readonly) BRCPQLConnection *readOnlyDB;
@property (nonatomic, readonly) NSObject<OS_dispatch_workloop> *readOnlyWorkloop;
@property (nonatomic, readonly) BRCRecentsEnumerator *recentsEnumerator;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *resetQueue;
@property (nonatomic, readonly) BRCServerChangesApplier *serverChangesApplier;
@property (nonatomic, readonly) BRCPQLConnection *serverDB;
@property (nonatomic, readonly) BRCServerPersistedState *serverState;
@property (nonatomic, readonly) NSObject<OS_dispatch_workloop> *serverTruthWorkloop;
@property (nonatomic, retain) NSString *sessionDirPath;
@property (nonatomic, readonly) BRCThrottle *sharedAppLibraryResetThrottle;
@property (nonatomic, readonly) BRCStageRegistry *stageRegistry;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BRCThrottle *syncClientZoneErrorThrottle;
@property (nonatomic, readonly) BRCThrottle *syncClientZoneThrottle;
@property (nonatomic, readonly) BRCSyncUpScheduler *syncUpScheduler;
@property (nonatomic, readonly) NSString *ubiquityTokenSalt;
@property (nonatomic, readonly) BRCUserNotification *userNotification;
@property (nonatomic, readonly) BRCVolume *volume;

- (void).cxx_destruct;
- (id)__getOrCreateAppLibrary:(id)arg1 rowID:(id)arg2 alreadyExists:(bool*)arg3 withClientZone:(id)arg4 createCZMMoved:(bool)arg5;
- (id)__getOrCreateClientZone:(id)arg1 withServerZone:(id)arg2 alreadyExists:(bool*)arg3;
- (id)__getOrCreateServerZone:(id)arg1;
- (void)__registerServerZone:(id)arg1 clientZone:(id)arg2 appLibrary:(id)arg3 isShared:(bool)arg4;
- (bool)_addOrImportDomainIfNeededWithError:(id*)arg1 domainAdded:(bool*)arg2 domainImported:(bool*)arg3;
- (void)_cleanupOldCiconiaLocations;
- (void)_clearLegacyConflictVersionsAsync;
- (void)_closeSharedPackageExtensionsPlist;
- (void)_cloudDocsAppsListDidChange:(id)arg1;
- (void)_createAccountSupportPathIfNeeded:(id)arg1 protectParent:(bool)arg2;
- (void)_createGroupContainerDownloadStage;
- (void)_fixupItemsAtStartup;
- (id)_getOrCreateAppLibraryAndPrivateZonesIfNecessary:(id)arg1 creationFlags:(unsigned int*)arg2;
- (void)_handleTrashedItemsMigration;
- (void)_loadClientZonesFromDisk;
- (void)_markDBOpened;
- (void)_mutexZonesLock;
- (void)_pcsChainAllItemsWithActivity:(id)arg1;
- (unsigned int)_recoverAndReportBoosting;
- (unsigned int)_recoverAndReportMissingJobs;
- (bool)_recursivelyPrepareFolderForLogOutAtURL:(id)arg1 pruneEmptyFolders:(bool)arg2 pruneEmptyTopLevelFolder:(bool)arg3 maxDepth:(unsigned long long)arg4;
- (void)_refreshRootsCache;
- (void)_registerBackgroundXPCActivities;
- (void)_removeXattr:(id)arg1 onPath:(id)arg2;
- (void)_setupSharedPackageExtensionsPlist;
- (void)_setupThrottles;
- (bool)_shouldPrivateAppLibraryBeCZMMoved:(id)arg1;
- (void)_submitDBCorruptionTelemetryEventIfNeeded;
- (void)_submitSessionOpenFailedTelemetryEventIfNeeded;
- (void)_unlinkContainersWithPristineContainerIDs:(id)arg1 containersActualRoot:(id)arg2;
- (void)_unlinkContainersWithRootURL:(id)arg1;
- (id)_unloadClientZones;
- (void)_validatePersona;
- (id)accountDSID;
- (id)accountHandler;
- (id)accountWaitOperation;
- (void)addMiscOperation:(id)arg1;
- (id)analyticsReporter;
- (id)appLibraries;
- (id)appLibraryAliasRemovalThrottle;
- (id)appLibraryByID:(id)arg1;
- (id)appLibraryByMangledID:(id)arg1;
- (id)appLibraryByRowID:(id)arg1;
- (id)appLibraryResetThrottle;
- (id)appLibraryScanThrottle;
- (id)applyScheduler;
- (void)assertNotOnZoneMutex;
- (id)cacheDirPath;
- (id)cachedCurrentUserRecordName;
- (id)cachedCurrentUserRecordNameIfExists;
- (void)captureDBCorruptionInfoWithDescription:(id)arg1 error:(id)arg2;
- (void)captureSessionOpenFailedInfoWithError:(id)arg1;
- (id)clientZoneByMangledID:(id)arg1;
- (id)clientZones;
- (void)close;
- (void)closeAndResetLocalStateWithDescription:(id)arg1 error:(id)arg2;
- (void)closeOfflineSession;
- (void)closeXPCClientsSync;
- (void)cloudDocsAppsListDidChange:(id)arg1;
- (id)cloudDocsClientZone;
- (id)containerScheduler;
- (void)dealloc;
- (id)defaultScheduler;
- (id)description;
- (void)destroyLocalData;
- (void)destroySharedClientZone:(id)arg1;
- (id)diskReclaimer;
- (id)downloadTrackers;
- (void)dumpMiscOperationsToContext:(id)arg1;
- (void)dumpXPCClientsToContext:(id)arg1;
- (void)enumerateAppLibraries:(id /* block */)arg1;
- (void)enumerateClientZones:(id /* block */)arg1;
- (void)enumeratePrivateClientZones:(id /* block */)arg1;
- (void)enumeratePrivateServerZones:(id /* block */)arg1;
- (void)enumerateServerZones:(id /* block */)arg1;
- (void)enumerateSharedClientZones:(id /* block */)arg1;
- (id)fairClientDBScheduler;
- (id)fallbackAppLibraryForClientZone:(id)arg1 extension:(id)arg2;
- (id)fetchAccountWaitOperationWithAccountReady:(bool*)arg1;
- (void)fetchUserRecordIDWithCompletionHandler:(id /* block */)arg1;
- (id)fileUnlinker;
- (id)fsDownloader;
- (id)fsImporter;
- (id)fsUploader;
- (id)getMiscOperations;
- (id)getOrCreateAppLibraryAndPrivateZonesIfNecessary:(id)arg1;
- (id)getOrCreateAppLibraryAndPrivateZonesIfNecessary:(id)arg1 appLibraryExists:(bool*)arg2;
- (id)getOrCreateSharedZones:(id)arg1;
- (id)getOrCreateSharedZones:(id)arg1 shareAcceptOp:(id)arg2;
- (id)getOrReserveLibraryRowIDForLibrary:(id)arg1;
- (id)globalProgress;
- (bool)hasOptimizeStorageEnabled;
- (bool)icloudAccountIsInCarry;
- (id)init;
- (id)initWithACAccountID:(id)arg1 dbAccountDSID:(id)arg2 salt:(id)arg3 accountHandler:(id)arg4;
- (void)invalidateAccountStatus;
- (bool)isCancelled;
- (bool)isDataSeparated;
- (bool)isGreedy;
- (bool)isOpen;
- (unsigned long long)lastCiconiaVersion:(id)arg1;
- (id)lostItemThrottle;
- (void)markAccountMigrationComplete;
- (id)notificationManager;
- (bool)offline;
- (void)openForDumping;
- (void)openForSendingTelemetry;
- (bool)openWithError:(id*)arg1 pushWorkloop:(id)arg2;
- (id)operationFailureThrottle;
- (void)performBlock:(id /* block */)arg1 whileRemovingPrivateClientZone:(id)arg2;
- (id)personaIdentifier;
- (id)privateClientZoneByID:(id)arg1;
- (id)privateServerZoneByID:(id)arg1;
- (id)recentsEnumerator;
- (void)recomputeAppSyncBlockStateForPrivateClientZone:(id)arg1;
- (bool)registerClient:(id)arg1;
- (id)resetQueue;
- (void)resetThrottles;
- (void)resumeIfNecessary;
- (id)serverZoneByMangledID:(id)arg1;
- (id)serverZoneByName:(id)arg1 ownerName:(id)arg2;
- (id)serverZoneByRowID:(id)arg1;
- (id)sessionDirPath;
- (void)setCacheDirPath:(id)arg1;
- (void)setOptimizeStorageEnabled:(bool)arg1 forKey:(id)arg2 synchronous:(bool)arg3;
- (void)setOptimizeStorageEnabled:(bool)arg1 synchronous:(bool)arg2;
- (void)setSessionDirPath:(id)arg1;
- (id)sharedAppLibraryResetThrottle;
- (id)sharedClientZoneByMangledID:(id)arg1;
- (id)sharedServerZoneByMangledID:(id)arg1;
- (id)sharedServerZoneRowIDsByOwnerNamePrefix:(id)arg1;
- (id)stageRegistry;
- (id)syncClientZoneErrorThrottle;
- (id)syncClientZoneThrottle;
- (id)syncUpScheduler;
- (id)ubiquityTokenSalt;
- (void)unregisterClient:(id)arg1;
- (void)userDefaultsChanged;
- (id)userNotification;
- (id)volume;

// BRCAccountSessionFPFS (BRCContainerFindByName)

- (id)_appLibrariesMatchingSearchString:(id)arg1;
- (id)_clientZonesMatchingSearchString:(id)arg1;
- (id)appLibrariesMatchingSearchString:(id)arg1 error:(id*)arg2;
- (id)clientZonesMatchingSearchString:(id)arg1 error:(id*)arg2;
- (id)singleAppLibraryMatchingSearchString:(id)arg1 error:(id*)arg2;
- (id)singleClientZoneMatchingSearchString:(id)arg1 error:(id*)arg2;

// BRCAccountSessionFPFS (BRCContainerMetadataSyncUpAdditions)

- (id)_containerMetadataRecordsToSaveWithBatchSize:(unsigned long long)arg1 requestID:(unsigned long long)arg2;

// BRCAccountSessionFPFS (BRCCrossZoneMoveExtension)

- (bool)PCSMigrationComplete;
- (void)setNeedsPCSMigration:(bool)arg1;
- (bool)shouldPerformPCSMigration;

// BRCAccountSessionFPFS (BRCDatabaseManager)

+ (bool)_checkIntegrity:(id)arg1 serverTruth:(bool)arg2 session:(id)arg3 skipControlFiles:(bool)arg4 error:(id*)arg5;
+ (id)_classesForClientState;
+ (bool)_openConnection:(id)arg1 databaseName:(id)arg2 baseURL:(id)arg3 readonly:(bool)arg4 error:(id*)arg5;
+ (bool)_openConnection:(id)arg1 serverTruth:(bool)arg2 databaseName:(id)arg3 baseURL:(id)arg4 initialVersion:(unsigned int*)arg5 lastCurrentVersion:(unsigned int*)arg6 error:(id*)arg7;
+ (void)_registerLastBootIfNeeded:(id)arg1 table:(id)arg2 cleanTelemetryIfNeeded:(bool)arg3 skipControlFiles:(bool)arg4;
+ (bool)_registerStaticDBFunctions:(id)arg1 error:(id*)arg2;
+ (bool)_validateDatabase:(id)arg1 baseURL:(id)arg2 session:(id)arg3 serverTruth:(bool)arg4 initialVersion:(unsigned int)arg5 lastCurrentVersion:(unsigned int)arg6 error:(id*)arg7;
+ (id)nameComponentsForKey:(id)arg1 db:(id)arg2;
+ (id)nameComponentsForName:(id)arg1 db:(id)arg2;
+ (bool)openAndValidateDatabase:(id)arg1 serverTruth:(bool)arg2 session:(id)arg3 baseURL:(id)arg4 skipControlFiles:(bool)arg5 initialVersion:(unsigned int*)arg6 lastCurrentVersion:(unsigned int*)arg7 error:(id*)arg8;
+ (id)sessionForBackingUpDatabasesAtURL:(id)arg1;
+ (id)sessionForCheckingInconsistencies;
+ (id)sessionForDumpingDatabasesAtURL:(id)arg1;
+ (id)sessionForDumpingDatabasesAtURL:(id)arg1 with:(id)arg2;
+ (id)sessionForSendingTelemetryAtURL:(id)arg1;
+ (bool)upgradeOfflineDB:(id)arg1 serverTruth:(bool)arg2 session:(id)arg3 error:(id*)arg4;
+ (id)userIdentityForKey:(id)arg1 db:(id)arg2;
+ (id)userIdentityForName:(id)arg1 db:(id)arg2;

- (id)_appLibrariesEnumerator:(id)arg1;
- (void)_clearNeedsUpgradeErrors:(id)arg1 brVersion:(id)arg2;
- (bool)_createAppLibrary:(id)arg1;
- (bool)_createClientZone:(id)arg1;
- (bool)_createPrivateAppLibrary:(id)arg1;
- (bool)_createSharedAppLibrary:(id)arg1;
- (bool)_deleteAppLibrary:(id)arg1;
- (bool)_deleteClientZone:(id)arg1;
- (void)_enumerateAppLibraryRowIDs:(id)arg1 usingBlock:(id /* block */)arg2;
- (bool)_finishClientTruthConnectionSetupWithError:(id*)arg1;
- (bool)_finishServerTruthConnectionSetupWithError:(id*)arg1;
- (void)_loadClientStateFromDB:(id)arg1;
- (bool)_openConnection:(id)arg1 databaseName:(id)arg2 readonly:(bool)arg3 error:(id*)arg4;
- (id)_privateClientZoneByID:(id)arg1 db:(id)arg2;
- (id)_privateClientZoneByName:(id)arg1 db:(id)arg2;
- (id)_privateClientZonesEnumerator:(id)arg1;
- (id)_privateServerZoneByName:(id)arg1 db:(id)arg2;
- (id)_privateServerZonesEnumerator:(id)arg1;
- (bool)_registerDynamicDBFunctions:(id)arg1 error:(id*)arg2;
- (void)_registerObfuscationFunction:(id)arg1;
- (id)_reserveRowIDForLibrary:(id)arg1;
- (void)_setUserIdentity:(id)arg1 forName:(id)arg2;
- (bool)_setupBackupDetector:(struct backup_detector { unsigned long long x1; unsigned long long x2; unsigned long long x3; }*)arg1 error:(id*)arg2;
- (bool)_setupConnection:(id)arg1 readonly:(bool)arg2 forChecker:(bool)arg3 error:(id*)arg4;
- (id)_sharedClientZonesEnumerator:(id)arg1;
- (id)_sharedServerZoneByName:(id)arg1 ownerName:(id)arg2 db:(id)arg3;
- (id)_sharedServerZonesEnumerator:(id)arg1;
- (void)_startWatcher;
- (bool)_stepBackupDetector:(struct backup_detector { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 newState:(struct backup_detector { unsigned long long x1; unsigned long long x2; unsigned long long x3; }*)arg2 error:(id*)arg3;
- (id)accountStatisticsWithDB:(id)arg1;
- (bool)backupDatabaseToURL:(id)arg1 error:(id*)arg2;
- (bool)backupDatabaseToURL:(id)arg1 includeServer:(bool)arg2 doNotObfuscate:(bool)arg3 error:(id*)arg4;
- (id)clientDB;
- (id)clientState;
- (id)clientTruthWorkloop;
- (void)closeDBs;
- (id)createDeviceKeyForNameInServerDB:(id)arg1;
- (bool)createServerZone:(id)arg1;
- (id)createUserKeyForOwnerName:(id)arg1;
- (unsigned long long)databaseID;
- (void)dbBecameCorruptedWithDescription:(id)arg1 error:(id)arg2;
- (bool)deleteServerZone:(id)arg1;
- (id)deviceKeyForName:(id)arg1 db:(id)arg2;
- (bool)dumpFileCoordinationInfoToFileHandle:(id)arg1 error:(id*)arg2;
- (id)expensiveReadOnlyDB;
- (id)fixObfuscatedMangledID:(id)arg1;
- (id)getMigrationAttemptOriginatorIDsForVersion:(unsigned long long)arg1 withDB:(id)arg2;
- (void)getPreviousMigrationAttempts:(unsigned long long*)arg1 failed:(unsigned long long*)arg2 beforeVersion:(id)arg3;
- (void)getPreviousMigrationAttempts:(unsigned long long*)arg1 failed:(unsigned long long*)arg2 forVersion:(id)arg3;
- (void)getPreviousMigrationAttempts:(unsigned long long*)arg1 failed:(unsigned long long*)arg2 withVersion:(id)arg3 comperator:(id)arg4;
- (bool)initializeOfflineDatabaseWhileUpgrading:(bool)arg1 error:(id*)arg2;
- (bool)initializeOfflineDatabaseWhileUpgrading:(bool)arg1 loadClientState:(bool)arg2 error:(id*)arg3;
- (bool)initializeOfflineDatabaseWhileUpgrading:(bool)arg1 loadClientState:(bool)arg2 forDBDump:(bool)arg3 error:(id*)arg4;
- (id)itemsNeedingIndexingEnumeratorFromNotifRank:(unsigned long long)arg1 batchSize:(unsigned long long)arg2 db:(id)arg3;
- (id)itemsWithSideCarInFlightDiffsEnumerator;
- (void)learnParticipantIdentitiesForShare:(id)arg1 forceUpdate:(bool)arg2;
- (id)newAppLibraryFromPQLResultSet:(id)arg1 error:(id*)arg2;
- (id)newConnection:(id)arg1;
- (id)newConnectionWithLabel:(id)arg1 readonly:(bool)arg2 error:(id*)arg3;
- (id)newPrivateClientZoneFromPQLResultSet:(id)arg1 error:(id*)arg2;
- (id)newPrivateServerZoneFromPQLResultSet:(id)arg1 error:(id*)arg2;
- (id)newSharedClientZoneFromPQLResultSet:(id)arg1 error:(id*)arg2;
- (id)newSharedServerZoneFromPQLResultSet:(id)arg1 error:(id*)arg2;
- (bool)openAndValidateDatabase:(id)arg1 serverTruth:(bool)arg2 initialVersion:(unsigned int*)arg3 lastCurrentVersion:(unsigned int*)arg4 error:(id*)arg5;
- (bool)openDBForNewDomain:(bool)arg1 withError:(id*)arg2;
- (void)preventDatabaseFromBeingReused;
- (id)readOnlyDB;
- (id)readOnlyWorkloop;
- (bool)saveAppLibrary:(id)arg1 toDB:(id)arg2;
- (bool)saveAppLibraryToDB:(id)arg1;
- (bool)saveClientZoneToDB:(id)arg1;
- (void)saveMigrationAttemptForReport:(id)arg1 uuid:(id)arg2;
- (bool)saveServerZone:(id)arg1 toDB:(id)arg2;
- (bool)saveServerZoneToDB:(id)arg1;
- (id)serverDB;
- (id)serverState;
- (id)serverTruthWorkloop;
- (void)setupDatabase;
- (void)stopDBWatcher;
- (id)userIdentityForKey:(id)arg1;
- (id)userKeyForOwnerName:(id)arg1 db:(id)arg2;
- (id)userNameForKey:(id)arg1 db:(id)arg2;

// BRCAccountSessionFPFS (BRCSyncContext)

- (id)_syncContextForContextIdentifier:(id)arg1 isShared:(bool)arg2 createIfNeeded:(bool)arg3;
- (id)allSyncContexts;
- (id)defaultSyncContext;
- (id)metadataSyncContextForMangledID:(id)arg1;
- (id)sharedMetadataSyncContext;
- (id)sideCarSyncContext;
- (id)transferSyncContextForMangledID:(id)arg1;
- (id)transferSyncContextForMangledID:(id)arg1 createIfNeeded:(bool)arg2;
- (id)zoneHealthSyncContext;

// BRCAccountSessionFPFS (BRCZoneMigration)

- (void)scheduleZoneMovesToCloudDocs:(id)arg1;

// BRCAccountSessionFPFS (DatabaseAdditions)

- (id)_computePathOfItemWithName:(id)arg1 appLibrary:(id)arg2 parentClientZoneRowID:(id)arg3 parentID:(id)arg4 type:(BOOL)arg5 needsLocalName:(bool)arg6 db:(id)arg7;
- (bool)_dumpClientZone:(id)arg1 toContext:(id)arg2 includeAllItems:(bool)arg3 error:(id*)arg4;
- (void)_dumpClientZoneBlockedState:(id)arg1 toContext:(id)arg2;
- (bool)_dumpClientZoneStatus:(id)arg1 toContext:(id)arg2 error:(id*)arg3;
- (id)_getFPFSMigrationStatus:(id)arg1 withError:(id*)arg2;
- (int)_resolveDeviceID;
- (void)disableDatabaseProfilingForDB:(id)arg1;
- (bool)dumpDatabaseToFileHandle:(id)arg1 zoneName:(id)arg2 includeAllItems:(bool)arg3 tracker:(id)arg4 error:(id*)arg5;
- (bool)dumpFPFSMigrationStatusToFileHandle:(id)arg1 tracker:(id)arg2 includeNonMigratedItems:(bool)arg3 error:(id*)arg4;
- (bool)dumpItemsToHandle:(id)arg1 itemType:(id)arg2 tracker:(id)arg3 error:(id*)arg4;
- (bool)dumpItemsURLsToHandle:(id)arg1 itemRowIDs:(id)arg2 error:(id*)arg3;
- (bool)dumpStatusToFileHandle:(id)arg1 zoneName:(id)arg2 tracker:(id)arg3 error:(id*)arg4;
- (void)enableDatabaseProfilingForDB:(id)arg1;
- (bool)enumerateItemsWithType:(id)arg1 itemRowIDs:(id)arg2 db:(id)arg3 withBlock:(id /* block */)arg4;
- (bool)enumerateSharedToMeItemsWithBlock:(id /* block */)arg1 error:(id*)arg2;
- (id)getFPFSNonMigratedItemsWithDB:(id)arg1;

// BRCAccountSessionFPFS (DatabaseMigrationHelpers)

- (id)_appLibraryEnumeratorForZoneRowID:(id)arg1 db:(id)arg2;
- (id)_old_privateAppLibraryByZoneName:(id)arg1 db:(id)arg2;

// BRCAccountSessionFPFS (FPFSAdditions)

- (void)_cleanupMigrationClientState;
- (id)_createAppTelemetryFPFSMigrationInvestigation:(unsigned int)arg1;
- (void)_fixImportStatusErrorIfPossible:(id)arg1;
- (id)_fpckReportFileNameForMigrationID:(id)arg1;
- (void)_populateNonMigratedItemEventForLocalDataWithEvent:(id)arg1 fileIDData:(id)arg2;
- (id)_postImportAnalysisForProviderDomainID:(id)arg1 withLostItemCount:(unsigned long long)arg2 withMigrationID:(id)arg3;
- (id)_reportForFPFSImportStatusTelemetryEventIfNeeded:(unsigned int)arg1;
- (void)_saveFPCKStatusForTapToRadar:(id)arg1 stats:(id)arg2 report:(id)arg3 withMigrationID:(id)arg4;
- (void)_sendFPFSImportFinishedTelemetryEvent:(id)arg1;
- (void)_sendFPFSImportStartTelemetryEvent;
- (void)_sendFPFSImportStatusTelemetryEvent;
- (void)_triggerFPCKForProviderDomainID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_triggerFPFSImportFinishedTelemetryEvent;
- (void)_updateFPFSMigrationBouncedItemType:(BOOL)arg1 withExistingItemType:(BOOL)arg2;
- (void)_updateFPFSMigrationItemTypes:(BOOL)arg1 withStateKey:(id)arg2 isPackage:(bool)arg3;
- (id)downloadStagePathForCurrentPersona;
- (long long)fpfsMigrationBouncedItemCount;
- (long long)fpfsMigrationBouncedMatrix;
- (unsigned long long)fpfsMigrationCleanupLastRowID;
- (id)fpfsMigrationEndTime;
- (unsigned long long)fpfsMigrationInvestigatedItemsCount;
- (id)fpfsMigrationItemsNotMigratedDictionary;
- (int)fpfsMigrationMigratedTypes;
- (long long)fpfsMigrationNewItemsInDB;
- (long long)fpfsMigrationNonMigratedItems;
- (int)fpfsMigrationNonMigratedTypes;
- (id)fpfsMigrationStartTime;
- (unsigned int)fpfsMigrationState;
- (bool)fpfsMigrationStatusTTRTriggered;
- (void)fpfsMigrationStatusTTRWasTriggered;
- (id)fpfsMigrationUUID;
- (id)fsImporter;
- (bool)isMigratingToFPFS;
- (void)markMigrationToFPFSCleanupComplete;
- (void)markMigrationToFPFSComplete;
- (void)sendNonMigratedItemTelemetryWithfileIDs:(id)arg1;
- (id)serverChangesApplier;
- (void)setFPFSMigrationState:(unsigned int)arg1;
- (id)trashedItemsEnumeratorFromNotifRank:(unsigned long long)arg1 batchSize:(unsigned long long)arg2 db:(id)arg3;
- (void)triggerFPFSImportFinishedTelemetryEventIfNeeded;
- (void)updateFPFSMigrationCleanupLastRowID:(unsigned long long)arg1 lostItemCount:(unsigned long long)arg2 childLostItemCount:(unsigned long long)arg3 busyDateLostItemCount:(unsigned long long)arg4 ignoredFromSyncLostItemCount:(unsigned long long)arg5 investigatedItemsCount:(unsigned long long)arg6 notMigratedItems:(id)arg7;
- (void)updateFPFSMigrationMigratedTypes:(BOOL)arg1;
- (void)updateFPFSMigrationMigratedTypesWithPackage;
- (void)updateFPFSMigrationNewItemsInDB;
- (void)updateFPFSMigrationNonMigratedTypes:(BOOL)arg1;
- (void)updateFPFSMigrationNonMigratedTypesWithPackage;

// BRCAccountSessionFPFS (ItemFetching)

- (void)enumerateContainersWithDB:(id)arg1 handler:(id /* block */)arg2;
- (void)enumerateItemsWithShareIDUnderParent:(id)arg1 block:(id /* block */)arg2;
- (bool)globalID:(id)arg1 isStrictChildOfGlobalID:(id)arg2;
- (id)itemByFileObjectID:(id)arg1;
- (id)itemByFileObjectID:(id)arg1 db:(id)arg2;
- (id)itemByItemGlobalID:(id)arg1;
- (id)itemByItemGlobalID:(id)arg1 db:(id)arg2;
- (id)itemByRowID:(unsigned long long)arg1;
- (id)itemByRowID:(unsigned long long)arg1 db:(id)arg2;
- (id)itemIDByRowID:(unsigned long long)arg1;
- (id)itemIDByRowID:(unsigned long long)arg1 db:(id)arg2;
- (id)localAliasForSharedItem:(id)arg1 inZone:(id)arg2;
- (id)newLocalItemFromPQLResultSet:(id)arg1 db:(id)arg2 error:(id*)arg3;
- (id)newServerItemFromPQLResultSet:(id)arg1 error:(id*)arg2;
- (id)serverAliasItemForSharedItem:(id)arg1;
- (id)serverAliasItemForSharedItem:(id)arg1 db:(id)arg2;
- (id)serverAliasItemForSharedItem:(id)arg1 inZone:(id)arg2;
- (id)serverAliasItemForSharedItem:(id)arg1 inZone:(id)arg2 db:(id)arg3;

// BRCAccountSessionFPFS (OfflineInitialization)

- (void)addOfflineAppLibrary:(id)arg1;
- (void)addOfflineClientZone:(id)arg1;
- (void)addOfflineServerZone:(id)arg1;

@end
