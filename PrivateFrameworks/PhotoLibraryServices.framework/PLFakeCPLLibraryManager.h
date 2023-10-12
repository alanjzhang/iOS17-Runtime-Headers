/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLFakeCPLLibraryManager : NSObject {
    NSURL * _baseURL;
    CPLConfiguration * _configuration;
    <CPLLibraryManagerDelegate> * _delegate;
    unsigned long long  _estimatedInitialAssetCountForLocalLibrary;
    unsigned long long  _estimatedInitialSizeForLocalLibrary;
    NSURL * _fakeBaseURL;
    <CPLLibraryManagerForceSyncDelegate> * _forceSyncDelegate;
    unsigned long long  _numberOfImagesToUpload;
    unsigned long long  _numberOfOtherItemsToUpload;
    unsigned long long  _numberOfVideosToUpload;
    NSObject<OS_dispatch_queue> * _queue;
    <CPLResourceProgressDelegate> * _resourceProgressDelegate;
    unsigned long long  _sizeOfOriginalResourcesToUpload;
    unsigned long long  _sizeOfResourcesToUpload;
    unsigned long long  _state;
    CPLStatus * _syncStatus;
}

@property (nonatomic, readonly) NSURL *baseURL;
@property (nonatomic, readonly) CPLConfiguration *configuration;
@property (nonatomic) <CPLLibraryManagerDelegate> *delegate;
@property (nonatomic) unsigned long long estimatedInitialAssetCountForLocalLibrary;
@property (nonatomic) unsigned long long estimatedInitialSizeForLocalLibrary;
@property (nonatomic, readonly) NSURL *fakeBaseURL;
@property (nonatomic) <CPLLibraryManagerForceSyncDelegate> *forceSyncDelegate;
@property (nonatomic, readonly) unsigned long long numberOfImagesToUpload;
@property (nonatomic, readonly) unsigned long long numberOfOtherItemsToUpload;
@property (nonatomic, readonly) unsigned long long numberOfVideosToUpload;
@property (nonatomic) <CPLResourceProgressDelegate> *resourceProgressDelegate;
@property (nonatomic, readonly) unsigned long long sizeOfOriginalResourcesToUpload;
@property (nonatomic, readonly) unsigned long long sizeOfResourcesToUpload;
@property (nonatomic) unsigned long long state;
@property (nonatomic, readonly) CPLStatus *syncStatus;

+ (id)fakeCPLStatusBaseURLWithBaseURL:(id)arg1;
+ (id)forwardingTargetForSelector:(SEL)arg1;

- (void).cxx_destruct;
- (void)acceptSharedScope:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)activateScopeWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)baseURL;
- (void)beginDownloadForResource:(id)arg1 clientBundleID:(id)arg2 highPriority:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)beginDownloadForResource:(id)arg1 clientBundleID:(id)arg2 options:(id)arg3 proposedTaskIdentifier:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)beginInMemoryDownloadOfResource:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)beginPullChangeSessionWithKnownLibraryVersion:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)beginPushChangeSessionWithKnownLibraryVersion:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)boostPriorityForScopeWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)checkHasBackgroundDownloadOperationsWithCompletionHandler:(id /* block */)arg1;
- (void)checkResourcesAreSafeToPrune:(id)arg1 checkServerIfNecessary:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)configuration;
- (void)createOwnedLibraryShareScopeWithShare:(id)arg1 title:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)createScope:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deactivateWithCompletionHandler:(id /* block */)arg1;
- (id)delegate;
- (void)deleteResources:(id)arg1 checkServerIfNecessary:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)disableMainScopeWithCompletionHandler:(id /* block */)arg1;
- (void)enableMainScopeWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)estimatedInitialAssetCountForLocalLibrary;
- (unsigned long long)estimatedInitialSizeForLocalLibrary;
- (id)fakeBaseURL;
- (void)fetchSharedScopeFromShareURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)forceBackupWithCompletionHandler:(id /* block */)arg1;
- (id)forceSyncDelegate;
- (void)forceSynchronizingScopeWithIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)getCloudCacheForRecordWithScopedIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getCloudIdentifiersForLocalIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getCloudScopedIdentifiersForLocalScopedIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getScopeStatusCountsForScopeWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getStatusForComponents:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getStatusForPendingRecordsSharedToScopeWithIdentifier:(id)arg1 maximumCount:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)getStatusForRecordsWithScopedIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getStreamingURLOrMediaMakerDataForResource:(id)arg1 intent:(unsigned long long)arg2 hints:(id)arg3 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg4 clientBundleID:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)getSystemBudgetsWithCompletionHandler:(id /* block */)arg1;
- (id)initWithClientLibraryBaseURL:(id)arg1 cloudLibraryStateStorageURL:(id)arg2 cloudLibraryResourceStorageURL:(id)arg3 libraryIdentifier:(id)arg4 options:(unsigned long long)arg5;
- (void)noteClientIsBeginningSignificantWork;
- (void)noteClientIsEndingSignificantWork;
- (void)noteClientIsInBackground;
- (void)noteClientIsInForegroundQuietly:(bool)arg1;
- (unsigned long long)numberOfImagesToUpload;
- (unsigned long long)numberOfOtherItemsToUpload;
- (unsigned long long)numberOfVideosToUpload;
- (void)openWithCompletionHandler:(id /* block */)arg1;
- (void)queryUserDetailsForShareParticipants:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeParticipants:(id)arg1 fromSharedScopeWithIdentifier:(id)arg2 retentionPolicy:(long long)arg3 exitSource:(long long)arg4 completionHandler:(id /* block */)arg5;
- (void)reportMiscInformation:(id)arg1;
- (void)reportSetting:(id)arg1 hasBeenEnabled:(bool)arg2;
- (void)reportSetting:(id)arg1 hasBeenSetToValue:(id)arg2;
- (void)resolveLocalScopedIdentifiersForCloudScopedIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)resourceProgressDelegate;
- (void)setDelegate:(id)arg1;
- (void)setEstimatedInitialAssetCountForLocalLibrary:(unsigned long long)arg1;
- (void)setEstimatedInitialSizeForLocalLibrary:(unsigned long long)arg1;
- (void)setForceSyncDelegate:(id)arg1;
- (void)setResourceProgressDelegate:(id)arg1;
- (void)setShouldOverride:(bool)arg1 forSystemBudgets:(unsigned long long)arg2;
- (void)setState:(unsigned long long)arg1;
- (void)sharedLibraryRampCheckWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)sizeOfOriginalResourcesToUpload;
- (unsigned long long)sizeOfResourcesToUpload;
- (void)startExitFromSharedScopeWithIdentifier:(id)arg1 retentionPolicy:(long long)arg2 exitSource:(long long)arg3 completionHandler:(id /* block */)arg4;
- (unsigned long long)state;
- (id)syncStatus;
- (void)updateShareForScope:(id)arg1 completionHandler:(id /* block */)arg2;

@end
