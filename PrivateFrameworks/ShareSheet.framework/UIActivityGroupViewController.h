/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

@interface UIActivityGroupViewController : UICollectionViewController <UICollectionViewDataSourcePrefetching, UIGestureRecognizerDelegate, _UIActivityGroupViewDelegateFlowLayout> {
    NSArray * _activities;
    long long  _activityCategory;
    bool  _activityIndexDidChangeWhileDragging;
    bool  _allowsUserCustomization;
    <UIActivityGroupViewControllerDataSource> * _dataSource;
    <UIActivityGroupViewControllerDelegate> * _delegate;
    UILongPressGestureRecognizer * _editingGestureRecognizer;
    bool  _embedded;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _externalSafeInset;
    bool  _hasActivities;
    NSIndexPath * _indexPathForMenuActivity;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialDraggingLocation;
    bool  _picker;
    _UIActivityUserDefaults * _userDefaults;
    _UIUserDefaultsActivity * _userDefaultsActivity;
    NSArray * _visibleActivities;
    NSArray * _visibleActivityProxies;
}

@property (nonatomic, copy) NSArray *activities;
@property (nonatomic) long long activityCategory;
@property (nonatomic) bool activityIndexDidChangeWhileDragging;
@property (nonatomic) bool allowsUserCustomization;
@property (nonatomic) <UIActivityGroupViewControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIActivityGroupViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILongPressGestureRecognizer *editingGestureRecognizer;
@property (getter=isEmbedded, nonatomic) bool embedded;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } externalSafeInset;
@property (nonatomic) bool hasActivities;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSIndexPath *indexPathForMenuActivity;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialDraggingLocation;
@property (getter=isPicker, nonatomic) bool picker;
@property (readonly) Class superclass;
@property (nonatomic, retain) _UIActivityUserDefaults *userDefaults;
@property (nonatomic, retain) _UIUserDefaultsActivity *userDefaultsActivity;
@property (nonatomic, copy) NSArray *visibleActivities;
@property (nonatomic, copy) NSArray *visibleActivityProxies;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet

- (void).cxx_destruct;
- (void)_dismissPresentedMenuControllers;
- (void)_performHideActivityForMenuController:(id)arg1;
- (void)_setActivities:(id)arg1 animated:(bool)arg2;
- (void)_setVisibleActivities:(id)arg1 animated:(bool)arg2;
- (id)_titleTextForActivity:(id)arg1;
- (void)_updateItemSizeIfNeeded;
- (void)_updateVisibleActivitiesAnimated:(bool)arg1;
- (id)activities;
- (long long)activityCategory;
- (id)activityForItemAtIndexPath:(id)arg1;
- (id)activityGroupViewLayout;
- (bool)activityIndexDidChangeWhileDragging;
- (void)activityUserDefaultsDidChange:(id)arg1;
- (bool)allowsUserCustomization;
- (bool)canBecomeFirstResponder;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 layout:(id)arg2 moveItemAtIndexPath:(id)arg3 toIndexPath:(id)arg4;
- (id)collectionView:(id)arg1 layout:(id)arg2 needsContainerViewForDraggingItemAtIndexPath:(id)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 preferredSizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (id)editingGestureRecognizer;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })externalSafeInset;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleEditingGesture:(id)arg1;
- (bool)hasActivities;
- (void)hideItemAtIndexPath:(id)arg1;
- (void)ignoreUserDefaultsChangesWhileUsingBlock:(id /* block */)arg1;
- (id)indexPathForMenuActivity;
- (id)initWithActivityCategory:(long long)arg1 activityProxies:(id)arg2;
- (id)initWithActivityCategory:(long long)arg1 userDefaults:(id)arg2;
- (id)initWithActivityCategory:(long long)arg1 userDefaults:(id)arg2 userDefaultsIdentifier:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGPoint { double x1; double x2; })initialDraggingLocation;
- (bool)isEmbedded;
- (bool)isPicker;
- (void)registerClassForContentSizeCategoryChanges;
- (void)registerForActivityUserDefaultsChanges;
- (void)setActivities:(id)arg1;
- (void)setActivities:(id)arg1 animated:(bool)arg2;
- (void)setActivityCategory:(long long)arg1;
- (void)setActivityIndexDidChangeWhileDragging:(bool)arg1;
- (void)setAllowsUserCustomization:(bool)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setEditingGestureRecognizer:(id)arg1;
- (void)setEmbedded:(bool)arg1;
- (void)setExternalSafeInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHasActivities:(bool)arg1;
- (void)setIndexPathForMenuActivity:(id)arg1;
- (void)setInitialDraggingLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPicker:(bool)arg1;
- (void)setUserDefaults:(id)arg1;
- (void)setUserDefaultsActivity:(id)arg1;
- (void)setVisibleActivities:(id)arg1;
- (void)setVisibleActivityProxies:(id)arg1;
- (id)targetIndexPathForMoveFromRowAtIndexPath:(id)arg1 toProposedIndexPath:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)unregisterForActivityUserDefaultsChanges;
- (void)updateActivityProxies:(id)arg1;
- (id)userDefaults;
- (id)userDefaultsActivity;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(bool)arg1;
- (id)visibleActivities;
- (id)visibleActivityProxies;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/AccessibilityBundles/UIKit.axbundle/UIKit

- (void)_accessibilityLoadAccessibilityInformation;
- (void)viewDidLoad;

// UIActivityGroupViewController (SafeCategory)

+ (Class)safeCategoryBaseClass;

@end
