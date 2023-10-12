/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

@interface FPDDomainExtensionBackend : NSObject <FPDDomainBackend> {
    FPDDomain * _domain;
    bool  _invalidated;
    NSMutableDictionary * _provideFileCompletionsByURL;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) bool backgroundActivityIsPaused;
@property (nonatomic, readonly) NSData *backingStoreIdentity;
@property (readonly, copy) NSArray *checkableURLs;
@property (readonly, copy) NSArray *coordinationRootURLs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSFileProviderDomainVersion *domainVersion;
@property (nonatomic, readonly) long long errorGenerationCount;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSArray *rootURLs;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)URLForItemID:(id)arg1 creatingPlaceholderIfMissing:(bool)arg2 ignoreAlternateContentsURL:(bool)arg3 forBookmarkResolution:(bool)arg4 request:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)_cancelProvidingItemAtURL:(id)arg1 withKey:(id)arg2 request:(id)arg3;
- (id)backingStoreIdentity;
- (void)bulkItemChanges:(id)arg1 changedFields:(unsigned long long)arg2 request:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)checkableURLs;
- (id)coordinationRootURLs;
- (void)copyDatabaseToURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)createIndexerWithExtension:(id)arg1 enabled:(bool)arg2 error:(id*)arg3;
- (void)createItemBasedOnTemplate:(id)arg1 fields:(unsigned long long)arg2 urlWrapper:(id)arg3 options:(unsigned long long)arg4 bounceOnCollision:(bool)arg5 request:(id)arg6 completionHandler:(id /* block */)arg7;
- (id)createRootByImportingURL:(id)arg1 knownFolders:(id)arg2 error:(id*)arg3;
- (void)currentMaterializedSetSyncAnchorWithCompletionHandler:(id /* block */)arg1;
- (void)currentPendingSetSyncAnchorWithCompletionHandler:(id /* block */)arg1;
- (void)didIndexOneBatchWithError:(id)arg1 updatedItems:(id)arg2 deletedIDs:(id)arg3 anchor:(id)arg4;
- (void)didUpdateAlternateContentsDocumentForDocumentWithURL:(id)arg1 request:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)domainVersion;
- (void)dumpStateTo:(id)arg1 limitNumberOfItems:(bool)arg2;
- (void)enumerateMaterializedSetFromSyncAnchor:(id)arg1 suggestedBatchSize:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)enumeratePendingSetFromSyncAnchor:(id)arg1 suggestedBatchSize:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)enumerateWithSettings:(id)arg1 lifetimeExtender:(id)arg2 observer:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)evictItemAtURL:(id)arg1 request:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)evictItemWithID:(id)arg1 request:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchAlternateContentsURLWrapperForDocumentWithURL:(id)arg1 request:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchFSItemsForItemIdentifiers:(id)arg1 materializingIfNeeded:(bool)arg2 request:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)fetchOperationServiceOrEndpointWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchServicesForItemID:(id)arg1 allowRestrictedSources:(bool)arg2 request:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)fetchThumbnailsAtURL:(id)arg1 versions:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 perThumbnailCompletionHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (void)fetchVendorEndpointWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)forceUpdateBlockedProcessNamesFromDomain:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)hasNonUploadedFilesWithCompletionHandler:(id /* block */)arg1;
- (void)hierarchyForURL:(id)arg1 request:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithDomain:(id)arg1;
- (void)invalidate;
- (bool)isDeadEndBackend;
- (bool)isProviderForURL:(id)arg1;
- (void)itemChangedAtURL:(id)arg1 request:(id)arg2;
- (void)itemForItemID:(id)arg1 ignoreAlternateContentsURL:(bool)arg2 request:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)itemForURL:(id)arg1 request:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)itemIDForURL:(id)arg1 requireProviderItemID:(bool)arg2 request:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)listRemoteVersionsOfItemAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)materializeItemWithID:(id)arg1 requestedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 request:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)movingItemAtURL:(id)arg1 withInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)needsRootsCreation;
- (id)newFileProviderProxyWithRequest:(id)arg1;
- (id)newFileProviderProxyWithTimeoutValue:(double)arg1 request:(id)arg2;
- (id)nsfpRequest:(id)arg1;
- (void)putBackURLForTrashedItemAtURL:(id)arg1 request:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)reimportItemsBelowItemWithID:(id)arg1 removeCachedItems:(bool)arg2 markItemDataless:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)resolveConflictAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)rootURLs;
- (void)setAlternateContentsURLWrapper:(id)arg1 forDocumentWithURL:(id)arg2 request:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setPutBackInfoOnItemAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)signalNeedsReindexFromScratchWithCompletionHandler:(id /* block */)arg1;
- (id)startProvidingItemAtURL:(id)arg1 readerID:(id)arg2 readingOptions:(unsigned long long)arg3 request:(id)arg4 completionHandler:(id /* block */)arg5;
- (bool)startWithReason:(id)arg1 error:(id*)arg2;
- (void)stateWithCompletionHandler:(id /* block */)arg1;
- (void)trashItemAtURL:(id)arg1 request:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)updateRootAfterDomainChangeWithError:(id*)arg1;
- (void)valuesForAttributes:(id)arg1 forURL:(id)arg2 request:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)waitForStabilizationForRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)wakeForPushWithCompletionHandler:(id /* block */)arg1;
- (void)workingSetDidChangeWithCompletionHandler:(id /* block */)arg1;

@end
