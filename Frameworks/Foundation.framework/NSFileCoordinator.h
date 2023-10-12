/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileCoordinator : NSObject {
    id  _accessArbiter;
    id  _accessClaimIDOrIDs;
    id  _fileReactor;
    bool  _isCancelled;
    NSMutableDictionary * _movedItems;
    id  _purposeID;
    NSURL * _recentFilePresenterURL;
}

@property (copy) NSString *purposeIdentifier;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Foundation.framework/Foundation

+ (id)_canonicalURLForURL:(id)arg1;
+ (void)addFilePresenter:(id)arg1;
+ (id)filePresenters;
+ (void)removeFilePresenter:(id)arg1;

- (void)_invokeAccessor:(id /* block */)arg1 thenCompletionHandler:(id /* block */)arg2;
- (bool)_isValidUbiquityAttribute:(id)arg1;
- (void)cancel;
- (void)coordinateAccessWithIntents:(id)arg1 queue:(id)arg2 byAccessor:(id /* block */)arg3;
- (void)coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 byAccessor:(id /* block */)arg4;
- (void)coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 error:(id*)arg5 byAccessor:(id /* block */)arg6;
- (void)coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 byAccessor:(id /* block */)arg4;
- (void)coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 error:(id*)arg5 byAccessor:(id /* block */)arg6;
- (void)dealloc;
- (id)init;
- (id)initWithFilePresenter:(id)arg1;
- (void)itemAtURL:(id)arg1 didChangeUbiquityAttributes:(id)arg2;
- (void)itemAtURL:(id)arg1 didMoveToURL:(id)arg2;
- (void)itemAtURL:(id)arg1 willMoveToURL:(id)arg2;
- (void)prepareForReadingItemsAtURLs:(id)arg1 options:(unsigned long long)arg2 writingItemsAtURLs:(id)arg3 options:(unsigned long long)arg4 error:(id*)arg5 byAccessor:(id /* block */)arg6;
- (id)purposeIdentifier;
- (void)setPurposeIdentifier:(id)arg1;

// NSFileCoordinator (NSFilePresenterResponses)

+ (unsigned long long)_responsesForPresenter:(id)arg1;

// NSFileCoordinator (NSFileProviderInternalAdditions)

+ (void)_accessPresenterInfoUsingBlock:(id /* block */)arg1;
+ (void)_addProcessIdentifier:(int)arg1 observedUbiquityAttributes:(id)arg2 forID:(id)arg3;
+ (unsigned long long)_providedItemGenerationCount;
+ (void)_removeInfoForID:(id)arg1;
+ (void)_setCurrentClaimPurposeIdentifier:(id)arg1;
+ (void)_setKernelMaterializationInfo:(id)arg1;
+ (void)_setReadingOptions:(unsigned long long)arg1;

// NSFileCoordinator (NSFileProviderPrivateAdditions)

+ (id)_kernelMaterializationInfo;
+ (unsigned int)_kernelMaterializationOperation;
+ (id)_observedUbiquityAttributesForPresenterWithID:(id)arg1;
+ (int)_processIdentifierForID:(id)arg1;
+ (bool)_provideRecursively;
+ (unsigned long long)_readingOptions;
+ (void)_setProvidedItemRecursiveGenerationCount:(unsigned long long)arg1;

// NSFileCoordinator (NSInternal)

+ (void)_adoptFCDEndpointForTest:(id)arg1;
+ (id)_createConnectionToFileAccessArbiterForQueue:(id)arg1;
+ (id)_createConnectionToProgressRegistrar;
+ (id)_createIdentifierForNewClaim;
+ (id)_endpointForInProcessFileCoordinationServer;
+ (id)_fileAccessArbiterInterface;
+ (id)_filePresenterInterface;
+ (id)_fileProviderInterface;
+ (id)_inProcessFileAccessArbiter;
+ (void)_performBarrier;
+ (void)_performBarrierAsync:(id /* block */)arg1;
+ (void)_startInProcessFileCoordinationAndProgressServers;
+ (void)_stopInProcessFileCoordinationAndProgressServers;

// NSFileCoordinator (NSPrivate)

+ (void)__itemAtURL:(id)arg1 didChangeUbiquityWithPurposeID:(id)arg2;
+ (void)__itemAtURL:(id)arg1 didChangeWithPurposeID:(id)arg2;
+ (void)__itemAtURL:(id)arg1 didDisappearWithPurposeID:(id)arg2;
+ (void)__itemAtURL:(id)arg1 didDisconnectWithPurposeID:(id)arg2;
+ (void)__itemAtURL:(id)arg1 didGainVersionWithClientID:(id)arg2 name:(id)arg3 purposeID:(id)arg4;
+ (void)__itemAtURL:(id)arg1 didLoseVersionWithClientID:(id)arg2 name:(id)arg3 purposeID:(id)arg4;
+ (void)__itemAtURL:(id)arg1 didMoveToURL:(id)arg2 purposeID:(id)arg3;
+ (void)__itemAtURL:(id)arg1 didReconnectWithPurposeID:(id)arg2;
+ (void)__itemAtURL:(id)arg1 didResolveConflictVersionWithClientID:(id)arg2 name:(id)arg3 purposeID:(id)arg4;
+ (void)_addFileProvider:(id)arg1;
+ (void)_addFileProvider:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)_currentClaimPurposeIdentifier;
+ (id)_currentFileCoordinator;
+ (id)_fileProviders;
+ (void)_getDebugInfoWithCompletionHandler:(id /* block */)arg1;
+ (bool)_itemHasPresentersAtURL:(id)arg1;
+ (id)_nextClaimIdentifier;
+ (void)_printDebugInfo;
+ (void)_removeFileProvider:(id)arg1;
+ (void)_setAutomaticFileProviderReregistrationDisabled:(bool)arg1;
+ (void)_setNextClaimIdentifier:(id)arg1;
+ (bool)_skipCoordinationWork;

- (void)__coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 byAccessor:(id /* block */)arg4;
- (void)__coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 purposeID:(id)arg5 byAccessor:(id /* block */)arg6;
- (void)__coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 byAccessor:(id /* block */)arg4;
- (void)__coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 purposeID:(id)arg5 byAccessor:(id /* block */)arg6;
- (void)__prepareForReadingItemsAtURLs:(id)arg1 options:(unsigned long long)arg2 writingItemsAtURLs:(id)arg3 options:(unsigned long long)arg4 byAccessor:(id /* block */)arg5;
- (void)_blockOnAccessClaim:(id)arg1 withAccessArbiter:(id)arg2;
- (void)_cancelClaimWithIdentifier:(id)arg1;
- (void)_coordinateAccessWithIntents:(id)arg1 queue:(id)arg2 byAccessor:(id /* block */)arg3;
- (void)_coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 byAccessor:(id /* block */)arg4;
- (void)_coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 error:(id*)arg5 byAccessor:(id /* block */)arg6;
- (void)_coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 byAccessor:(id /* block */)arg4;
- (void)_coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 error:(id*)arg5 byAccessor:(id /* block */)arg6;
- (void)_didEndWrite:(id)arg1;
- (void)_forgetAccessClaimForID:(id)arg1;
- (void)_itemAtURL:(id)arg1 didMoveToURL:(id)arg2;
- (void)_itemAtURL:(id)arg1 willMoveToURL:(id)arg2;
- (void)_itemDidChangeAtURL:(id)arg1;
- (void)_itemDidDisappearAtURL:(id)arg1;
- (void)_lockdownPurposeIdentifier;
- (bool)_purposeIdentifierLockedDown;
- (void)_requestAccessClaim:(id)arg1 withProcedure:(id /* block */)arg2;
- (void)_setFileProvider:(id)arg1;
- (void)_setPurposeIdentifier:(id)arg1;
- (void)_ubiquityDidChangeForItemAtURL:(id)arg1;
- (id)_willStartWriteWithIntents:(id)arg1 async:(bool)arg2;
- (void)_withAccessArbiter:(id)arg1 invokeAccessor:(id /* block */)arg2 orDont:(bool)arg3 andRelinquishAccessClaim:(id)arg4;
- (void)releaseAccess:(id)arg1;
- (id)retainAccess;
- (void)sharingDidChangeForItemAtURL:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/FileProvider.framework/FileProvider

// NSFileCoordinator (FPFSHelpers)

+ (id)fp_fileCoordinatorForCurrentProcess:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs

// NSFileCoordinator (BRAdditions)

+ (void)br_boostFilePresenter:(id)arg1;

@end
