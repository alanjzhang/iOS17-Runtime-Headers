/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOResourceManifestServerLocalProxy : NSObject <GEOConfigChangeListenerDelegate, GEOKeyBagProtectedDataDidBecomeAvailableObserver, GEOPListStateCapturing, GEOResourceFiltersManagerDelegate, GEOResourceManifestServerProxy, GEOTileGroupActivationSessionDelegate> {
    GEOActiveTileGroup * _activeTileGroup;
    geo_isolater * _activeTileGroupIsolater;
    NSString * _authToken;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _authTokenLock;
    GEOResourceManifestConfiguration * _configuration;
    long long  _currentManifestUpdateType;
    NSProgress * _currentUpdateProgress;
    <GEOResourceManifestServerProxyDelegate> * _delegate;
    GEOResourceFiltersManager * _filtersManager;
    double  _lastManifestRetryTimestamp;
    NSError * _lastResourceManifestLoadError;
    double  _lastTileGroupRetryTimestamp;
    GEOResourceManifestDownloadTask * _manifestDownloadTask;
    unsigned long long  _manifestRetryCount;
    NSMutableArray * _manifestUpdateCompletionHandlers;
    NSObject<OS_dispatch_source> * _manifestUpdateTimer;
    NSMutableArray * _opportunisticManifestUpdateCompletionHandlers;
    GEOResourceManifestDownload * _resourceManifest;
    bool  _started;
    unsigned long long  _stateCaptureHandle;
    GEOTileGroupActivationSession * _tileGroupActivationSession;
    bool  _tileGroupActivationSessionHasFinishedFirstTileGroupChange;
    bool  _tileGroupActivationShouldFlushTileCache;
    NSArray * _tileGroupMigrators;
    unsigned long long  _tileGroupRetryCount;
    NSObject<OS_dispatch_source> * _tileGroupUpdateTimer;
    NSProgress * _updateProgress;
    bool  _wantsManifestUpdateOnReachabilityChange;
    bool  _wantsTileGroupUpdateOnReachabilityChange;
    NSOperationQueue * _workOperationQueue;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) GEOActiveTileGroup *activeTileGroup;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <GEOResourceManifestServerProxyDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activeTileGroupOverridesChanged:(id)arg1;
- (void)_addManifestUpdateCompletionHandler:(id /* block */)arg1;
- (void)_addOpportunisticManifestUpdateCompletionHandler:(id /* block */)arg1;
- (void)_cancelManifestUpdate;
- (void)_cancelMigrationTasks;
- (void)_changeActiveTileGroupIfNeededForManifestURL:(id)arg1 oldURL:(id)arg2;
- (void)_considerChangingActiveTileGroup;
- (void)_countryProvidersDidChange:(id)arg1;
- (void)_createMigrators;
- (void)_forceChangeActiveTileGroup:(id)arg1 flushTileCache:(bool)arg2;
- (void)_handleManifestUpdateError:(id)arg1;
- (id)_idealTileGroupToUse;
- (void)_loadFromDisk;
- (id)_manifestURL;
- (void)_manifestURLDidChange:(id)arg1;
- (void)_networkDefaultsDidChange:(id)arg1;
- (void)_notifyImmediateManifestUpdateCompletionHandlers:(id)arg1;
- (void)_notifyManifestUpdateCompletionHandlers:(id)arg1;
- (void)_notifyOpportunisticManifestUpdateCompletionHandlers:(id)arg1;
- (void)_reachabilityChanged:(id)arg1;
- (void)_resetCurrentUpdateState;
- (void)_scheduleTileGroupUpdateTimerWithTimeInterval:(double)arg1;
- (void)_scheduleUpdateTimerWithTimeInterval:(double)arg1;
- (void)_setCurrentUpdateType:(long long)arg1 completionBlock:(id /* block */)arg2;
- (void)_startServer;
- (void)_terminationRequested:(id)arg1;
- (void)_tileGroupTimerFired;
- (void)_updateManifest:(id /* block */)arg1;
- (bool)_updateManifestIfNecessary:(id /* block */)arg1;
- (void)_updateTimerFired;
- (bool)_writeActiveTileGroupToDisk:(id)arg1 error:(id*)arg2;
- (bool)_writeManifestToDisk:(id)arg1 error:(id*)arg2;
- (bool)_writeManifestToDiskWithUpdatedMetadataForURL:(id)arg1 eTag:(id)arg2 error:(id*)arg3;
- (void)activateResourceScale:(int)arg1;
- (void)activateResourceScenario:(int)arg1;
- (void)activationSession:(id)arg1 didChangeActiveTileGroup:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)activationSession:(id)arg1 didCompleteWithErrors:(id)arg2;
- (id)activeTileGroup;
- (id)authToken;
- (void)cancelCurrentManifestUpdate;
- (id)captureStatePlistWithHints:(struct os_state_hints_s { unsigned int x1; char *x2; unsigned int x3; unsigned int x4; }*)arg1;
- (void)closeConnection;
- (id)configuration;
- (void)deactivateResourceScale:(int)arg1;
- (void)deactivateResourceScenario:(int)arg1;
- (void)dealloc;
- (id)delegate;
- (void)filtersManagerDidChangeActiveFilters:(id)arg1;
- (void)forceUpdate:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)getResourceManifestWithHandler:(id /* block */)arg1;
- (id)initWithDelegate:(id)arg1 configuration:(id)arg2;
- (unsigned int)maximumZoomLevelForStyle:(int)arg1 scale:(int)arg2 outSize:(int*)arg3;
- (id)migrationTaskOptions;
- (void)openConnection;
- (void)performOpportunisticResourceLoading;
- (void)protectedDataDidBecomeAvailable:(id)arg1;
- (oneway void)resetActiveTileGroup;
- (id)serverOperationQueue;
- (id)serverQueue;
- (void)setActiveTileGroup:(id)arg1;
- (oneway void)setActiveTileGroupIdentifier:(id)arg1;
- (void)setActiveTileGroupIdentifier:(id)arg1 updateType:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (void)setManifestToken:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateIfNecessary:(id /* block */)arg1;
- (id)updateProgress;
- (void)valueChangedForGEOConfigKey:(struct { unsigned int x1; void *x2; })arg1;

@end