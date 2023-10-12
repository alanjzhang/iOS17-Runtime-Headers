/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLAvalanche : NSObject <PLAssetChangeObserver, PLAssetContainer> {
    PLManagedAsset * __aNewPick;
    PLManagedAsset * __anOldPick;
    NSMutableIndexSet * __autoPickIndexes;
    id /* block */  __completionHandler;
    NSIndexSet * __originalAutoPickIndexes;
    unsigned long long  __originalStackIndex;
    NSIndexSet * __originalUserFavoriteIndexes;
    unsigned long long  __stackIndex;
    NSMutableIndexSet * __userFavoriteIndexes;
    NSOrderedSet * _assets;
    PLPhotoLibrary * _photoLibrary;
    NSString * _uuid;
}

@property (setter=_setANewPick:, nonatomic, retain) PLManagedAsset *_aNewPick;
@property (setter=_setAnOldPick:, nonatomic, retain) PLManagedAsset *_anOldPick;
@property (nonatomic, retain) NSMutableIndexSet *_autoPickIndexes;
@property (setter=_setCompletionHandler:, nonatomic, copy) id /* block */ _completionHandler;
@property (nonatomic, retain) NSIndexSet *_originalAutoPickIndexes;
@property (nonatomic) unsigned long long _originalStackIndex;
@property (nonatomic, retain) NSIndexSet *_originalUserFavoriteIndexes;
@property (nonatomic) unsigned long long _stackIndex;
@property (nonatomic, retain) NSMutableIndexSet *_userFavoriteIndexes;
@property (nonatomic, readonly) unsigned long long approximateCount;
@property (nonatomic, retain) NSOrderedSet *assets;
@property (nonatomic, readonly) unsigned long long assetsCount;
@property (nonatomic, readonly) bool canShowAvalancheStacks;
@property (nonatomic, readonly) bool canShowComments;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, retain) PLManagedAsset *keyAsset;
@property (nonatomic, readonly, copy) NSArray *localizedLocationNames;
@property (nonatomic, readonly, copy) NSString *localizedTitle;
@property (nonatomic, readonly) PLPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) unsigned long long photosCount;
@property (nonatomic, retain) PLManagedAsset *secondaryKeyAsset;
@property (nonatomic, readonly, retain) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, retain) PLManagedAsset *tertiaryKeyAsset;
@property (nonatomic, readonly, retain) NSString *title;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) unsigned long long videosCount;

+ (bool)_allowMPSmodificationForBurstChangesOnLibrary:(id)arg1;
+ (id)_assetAmongAssets:(id)arg1 fromIndexes:(id)arg2 excludingIndexes:(id)arg3;
+ (unsigned long long)_calculateStackAssetForAssetCount:(unsigned long long)arg1 autoPicks:(id)arg2 userFavorites:(id)arg3;
+ (id)_fetchRequestForAssetsWithAvalancheUUID:(id)arg1;
+ (id)_visibleIndexesAmongAssets:(id)arg1 fromUserFavoriteIndexes:(id)arg2 stackIndex:(unsigned long long)arg3;
+ (id)assetsWithAvalancheUUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (unsigned long long)countForAssetsWithAvalancheUUID:(id)arg1 inLibrary:(id)arg2;
+ (void)disolveBurstForAssets:(id)arg1 permanently:(bool)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfTopImageInStackForStackFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (void)handleUpdatesForContextWillSave:(id)arg1;
+ (bool)isValidBurstWithAssets:(id)arg1;
+ (void)removeFavoriteStatus:(id)arg1;
+ (id)revalidateAvalancheAssets:(id)arg1 inLibrary:(id)arg2 deleteNonPicks:(bool)arg3 allowDissolve:(bool)arg4;
+ (bool)shouldHideAvalanchesFromPhotoStream;
+ (bool)shouldOnlyShowAvalanchePicks;
+ (void)updateMembershipForAssets:(id)arg1 autoPicks:(id)arg2 stackAsset:(id)arg3 userFavorites:(id)arg4 deleteNonPicks:(bool)arg5 allowDissolve:(bool)arg6 inLibrary:(id)arg7;
+ (id)updatePropertiesForAssets:(id)arg1 autoPicks:(id)arg2 stackAsset:(id)arg3 userFavorites:(id)arg4 deleteNonPicks:(bool)arg5 setFirstPick:(bool)arg6 allowDissolve:(bool)arg7;

- (void).cxx_destruct;
- (id)_aNewPick;
- (id)_anOldPick;
- (id)_autoPickIndexes;
- (id /* block */)_completionHandler;
- (id)_originalAutoPickIndexes;
- (unsigned long long)_originalStackIndex;
- (id)_originalUserFavoriteIndexes;
- (void)_recalculateStackAsset;
- (void)_setANewPick:(id)arg1;
- (void)_setAnOldPick:(id)arg1;
- (void)_setCompletionHandler:(id /* block */)arg1;
- (unsigned long long)_stackIndex;
- (id)_userFavoriteIndexes;
- (void)addUserFavorite:(id)arg1;
- (void)applyChangesAndDeleteNonPicks:(bool)arg1 currentContainer:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)applyTrashedState:(short)arg1 withTrashedReason:(unsigned short)arg2;
- (unsigned long long)approximateCount;
- (id)assets;
- (unsigned long long)assetsCount;
- (void)assetsDidChange:(id)arg1;
- (id)autoPicks;
- (bool)canPerformEditOperation:(unsigned long long)arg1;
- (bool)canShowAvalancheStacks;
- (bool)canShowComments;
- (void)dealloc;
- (id)description;
- (id)initWithUUID:(id)arg1 photoLibrary:(id)arg2;
- (bool)isAutoPick:(id)arg1;
- (bool)isEmpty;
- (bool)isUserFavorite:(id)arg1;
- (id)keyAsset;
- (id)localizedLocationNames;
- (id)localizedTitle;
- (id)photoLibrary;
- (unsigned long long)photosCount;
- (id)proposedStackAssetAfterRemovingFavorite:(id)arg1;
- (void)removeUserFavorite:(id)arg1;
- (id)secondaryKeyAsset;
- (void)setAssets:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setSecondaryKeyAsset:(id)arg1;
- (void)setTertiaryKeyAsset:(id)arg1;
- (void)set_autoPickIndexes:(id)arg1;
- (void)set_originalAutoPickIndexes:(id)arg1;
- (void)set_originalStackIndex:(unsigned long long)arg1;
- (void)set_originalUserFavoriteIndexes:(id)arg1;
- (void)set_stackIndex:(unsigned long long)arg1;
- (void)set_userFavoriteIndexes:(id)arg1;
- (id)stackAsset;
- (id)tertiaryKeyAsset;
- (id)title;
- (id)userFavorites;
- (id)uuid;
- (unsigned long long)videosCount;

@end
