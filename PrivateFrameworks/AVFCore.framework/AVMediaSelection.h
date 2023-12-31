/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVMediaSelection : NSObject <NSCopying, NSMutableCopying> {
    AVMediaSelectionInternal * _mediaSelection;
}

@property (nonatomic, readonly) AVAsset *asset;

- (id)_dictionaryGroupsWithSelectedOption;
- (id)_internal;
- (id)_propertyListForSelectedMediaOptionInMediaSelectionGroup:(id)arg1;
- (id)asset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithAsset:(id)arg1 propertyList:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)mediaSelectionCriteriaCanBeAppliedAutomaticallyToMediaSelectionGroup:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)propertyList;
- (id)selectedMediaOptionInMediaSelectionGroup:(id)arg1;

// AVMediaSelection (AVMediaSelection_Local)

- (void)_createDefaultMediaSelectionOptions;
- (id)_groupDictionaries;
- (id)_initWithAsset:(id)arg1;
- (id)_initWithAsset:(id)arg1 selectedMediaArray:(id)arg2;
- (id)_initWithAssetWithoutGroupDictionaries:(id)arg1;
- (id)_initWithDeferredLoadingOfAsset:(id)arg1 selectedMediaArray:(id)arg2;
- (void)_loadiVarsIfNeeded;
- (id)_selectedMediaArray;

@end
