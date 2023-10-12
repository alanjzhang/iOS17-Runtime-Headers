/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKStackingViewController : UIViewController <MKScrollableStacking, UIScrollViewDelegate, _MKAnimationStackViewDelegate, _MKStackViewDelegate> {
    _MKStackingContentView * _contentView;
    bool  _contentViewConstraintsAdded;
    unsigned long long  _countOfCurrentLayoutInvocations;
    bool  _isScrollDisabled;
    bool  _isSettingStackedViews;
    bool  _mayWantSpearators;
    NSHashTable * _minimallyVisibleViews;
    bool  _needToCallViewControllerLayoutDelegate;
    bool  _needsToPerformLayout;
    UIView * _overlayView;
    double  _overlayViewOriginY;
    UIScrollView * _scrollView;
    _MKStackView * _stackView;
    NSLayoutConstraint * _stackViewWidthConstraint;
    <MKStackingViewControllerDelegate> * _stackingDelegate;
    NSArray * _titleViewConstraints;
    NSArray * _viewControllers;
    NSMapTable * _viewControllersToPreferredHeightConstraints;
    NSMapTable * _viewsToViewControllers;
    NSLayoutConstraint * _widthConstraint;
    bool  _willRelayoutForPreferredContentSizeChange;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isScrollEnabled, nonatomic) bool scrollEnabled;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic) <MKStackingViewControllerDelegate> *stackingDelegate;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *viewControllers;

- (void).cxx_destruct;
- (void)_addPreferredHeightConstraintForViewControllerIfNeeded:(id)arg1;
- (void)_callViewControllersLayoutDelegateIfNeeded;
- (void)_didScroll;
- (double)_fittingHeightForView:(id)arg1;
- (bool)_isSafeToPerformLayout;
- (void)_removePreferredHeightConstraintFromViewController:(id)arg1;
- (void)_sendScrollnotification;
- (void)_setOverlayViewFrame;
- (void)_setPreferredHeight:(double)arg1 forViewController:(id)arg2;
- (void)_setScrollEnabled:(bool)arg1 forcedUpdate:(bool)arg2;
- (void)_setUpEnteringViewController:(id)arg1;
- (void)_tearDownExitingViewController:(id)arg1;
- (double)_titleHeight;
- (void)_updateFixedHeightAwareControllers;
- (void)_updateStackViewSubviewsAndChildVCsEntering:(id)arg1 exiting:(id)arg2;
- (void)_updateViewControllerVisibilityAfterPositionChange;
- (double)currentHeight;
- (void)dealloc;
- (bool)isScrollEnabled;
- (bool)isViewVisbile:(id)arg1 percentageTreshold:(double)arg2;
- (void)loadView;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)removeOverlayViewAnimated:(bool)arg1;
- (void)scrollToTopAnimated:(bool)arg1;
- (id)scrollView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setOverlayView:(id)arg1 withOriginY:(double)arg2;
- (void)setScrollEnabled:(bool)arg1;
- (void)setStackingDelegate:(id)arg1;
- (void)setViewControllers:(id)arg1;
- (void)setWidthConstraintConstant:(double)arg1;
- (double)stackView:(id)arg1 distanceBetweenUpperView:(id)arg2 andLowerView:(id)arg3;
- (void)stackViewNeedsLayout:(id)arg1;
- (id)stackingDelegate;
- (void)updateViewConstraints;
- (id)viewControllers;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
