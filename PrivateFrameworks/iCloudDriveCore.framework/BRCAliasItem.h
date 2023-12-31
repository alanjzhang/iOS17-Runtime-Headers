/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCAliasItem : BRCLocalItem

@property (nonatomic, readonly) BRCAliasItem *asBRAlias;
@property (nonatomic, readonly) BRCDirectoryItem *asDirectory;
@property (nonatomic, readonly) BRCDocumentItem *asDocument;
@property (nonatomic, readonly) BRCAppLibrary *targetAppLibrary;
@property (nonatomic, readonly) BRCClientZone *targetClientZone;
@property (nonatomic, readonly) BRCItemID *targetItemID;

- (bool)_insertInDB:(id)arg1 dbRowID:(unsigned long long)arg2;
- (bool)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2;
- (id)asBRAlias;
- (bool)isBRAlias;
- (void)markLatestSyncRequestRejectedInZone:(id)arg1;
- (void)markNeedsUploadOrSyncingUp;
- (void)markNeedsUploadOrSyncingUpWithAliasTarget:(id)arg1;
- (id)targetClientZone;
- (id)targetItemID;

// BRCAliasItem (CKConversions)

+ (void)fillStructureRecord:(id)arg1 inZone:(id)arg2 itemID:(id)arg3 ckInfo:(id)arg4 parentID:(id)arg5 targetItemID:(id)arg6 targetZone:(id)arg7 diffs:(unsigned long long)arg8 isFolderShare:(bool)arg9 beingDeadInServerTruth:(bool)arg10 shouldPCSChainStatus:(unsigned char)arg11;
+ (id)targetReferenceWithItemID:(id)arg1 targetZone:(id)arg2 isFolderShare:(bool)arg3;

- (id)structureRecordBeingDeadInServerTruth:(bool)arg1 stageID:(id)arg2 shouldPCSChainStatus:(unsigned char)arg3;

// BRCAliasItem (LegacyAdditions)

- (void)_removeAliasAndMarkDead;
- (bool)changedAtRelativePath:(id)arg1 scanPackage:(bool)arg2;
- (bool)evictInTask:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (void)learnTarget:(id)arg1;
- (void)rewriteOrDeleteAliasOnDiskWithTarget:(id)arg1;
- (bool)startDownloadInTask:(id)arg1 options:(unsigned long long)arg2 etagIfLoser:(id)arg3 stageFileName:(id)arg4 error:(id*)arg5;
- (id)targetAppLibrary;
- (id)targetDocument;
- (void)targetMovedToThisAppLibrary;
- (void)targetMovedToTrashOrDeleted;
- (bool)updateOnDiskWithAliasTarget:(id)arg1 forServerEdit:(bool)arg2;
- (bool)updateXattrInfoFromPath:(id)arg1 error:(id*)arg2;

@end
