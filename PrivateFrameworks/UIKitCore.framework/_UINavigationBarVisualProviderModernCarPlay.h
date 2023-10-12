/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UINavigationBarVisualProviderModernCarPlay : _UINavigationBarVisualProvider <_UIButtonBarAppearanceDelegate, _UINavigationItemChangeObserver> {
    _UIBarButtonItemAppearanceStorage * _appearanceStorage;
    _UIButtonBarButton * _backBarButton;
    NSArray * _backButtonConstraints;
    UIVisualEffectView * _backgroundView;
    bool  _compactMetrics;
    UIView * _contentView;
    NSArray * _debugViews;
    UIFocusContainerGuide * _focusContainerGuide;
    bool  _havePrepared;
    NSLayoutConstraint * _largeTitleLeadingConstraint;
    NSLayoutConstraint * _largeTitleTrailingConstraint;
    _UIButtonBar * _leadingBar;
    NSLayoutConstraint * _leadingBarConstraint;
    NSLayoutConstraint * _leadingBarNoItemsConstraint;
    NSLayoutConstraint * _leadingBarWithNoTitleTrailingConstraint;
    NSLayoutConstraint * _leadingBarWithTitleTrailingConstraint;
    NSLayoutConstraint * _regularTitleConstraint;
    _CarTitleView * _titleView;
    _UIButtonBar * _trailingBar;
    NSLayoutConstraint * _trailingBarConstraint;
    NSLayoutConstraint * _trailingBarNoItemsConstraint;
    NSLayoutConstraint * _trailingBarWithNoTitleLeadingConstraint;
    NSLayoutConstraint * _trailingBarWithTitleLeadingConstraint;
}

@property (nonatomic, readonly) _UIBarButtonItemAppearanceStorage *appearanceStorage;
@property (nonatomic, retain) _UIButtonBarButton *backBarButton;
@property (nonatomic, retain) NSArray *backButtonConstraints;
@property (nonatomic, readonly) double backButtonMargin;
@property (nonatomic, readonly) double backButtonMaximumWidth;
@property (nonatomic, retain) UIVisualEffectView *backgroundView;
@property (nonatomic, readonly) long long barType;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) bool centerTextButtons;
@property (nonatomic, readonly) bool compactMetrics;
@property (nonatomic, retain) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSArray *debugViews;
@property (nonatomic, readonly) double defaultEdgeSpacing;
@property (nonatomic, readonly) double defaultTextPadding;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIFocusContainerGuide *focusContainerGuide;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool havePrepared;
@property (nonatomic, readonly) UIImageSymbolConfiguration *imageSymbolConfiguration;
@property (nonatomic, retain) NSLayoutConstraint *largeTitleLeadingConstraint;
@property (nonatomic, retain) NSLayoutConstraint *largeTitleTrailingConstraint;
@property (nonatomic, retain) _UIButtonBar *leadingBar;
@property (nonatomic, retain) NSLayoutConstraint *leadingBarConstraint;
@property (nonatomic, retain) NSLayoutConstraint *leadingBarNoItemsConstraint;
@property (nonatomic, retain) NSLayoutConstraint *leadingBarWithNoTitleTrailingConstraint;
@property (nonatomic, retain) NSLayoutConstraint *leadingBarWithTitleTrailingConstraint;
@property (nonatomic, retain) NSLayoutConstraint *regularTitleConstraint;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIColor *tintColor;
@property (nonatomic, retain) _CarTitleView *titleView;
@property (nonatomic, retain) _UIButtonBar *trailingBar;
@property (nonatomic, retain) NSLayoutConstraint *trailingBarConstraint;
@property (nonatomic, retain) NSLayoutConstraint *trailingBarNoItemsConstraint;
@property (nonatomic, retain) NSLayoutConstraint *trailingBarWithNoTitleLeadingConstraint;
@property (nonatomic, retain) NSLayoutConstraint *trailingBarWithTitleLeadingConstraint;

- (void).cxx_destruct;
- (void)__backButtonAction;
- (void)_configureBackground;
- (void)_installGradientLayerMaskForClippingView:(id)arg1;
- (void)_updateContentAnimated:(bool)arg1 completion:(id /* block */)arg2 direction:(unsigned long long)arg3;
- (void)_updateContentForTopItem:(id)arg1 backItem:(id)arg2 animated:(bool)arg3 direction:(unsigned long long)arg4;
- (double)absorptionForItem:(id)arg1;
- (void)animateForSearchPresentation:(bool)arg1;
- (id)appearanceStorage;
- (id)backBarButton;
- (id)backButtonConstraints;
- (double)backButtonMargin;
- (double)backButtonMaximumWidth;
- (id)backIndicatorImage;
- (id)backIndicatorMaskImage;
- (id)backgroundView;
- (long long)barMetrics;
- (long long)barType;
- (bool)centerTextButtons;
- (void)changeAppearance;
- (bool)compactMetrics;
- (id)contentView;
- (id)debugViews;
- (double)defaultEdgeSpacing;
- (id)defaultFontDescriptor;
- (double)defaultTextPadding;
- (void)dismissHostedSearchWithTransitionCoordinator:(id)arg1;
- (unsigned long long)edgesPaddingBarButtonItem:(id)arg1;
- (id)focusContainerGuide;
- (bool)havePrepared;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isRTL;
- (id)largeTitleLeadingConstraint;
- (id)largeTitleTrailingConstraint;
- (id)leadingBar;
- (id)leadingBarConstraint;
- (id)leadingBarNoItemsConstraint;
- (id)leadingBarWithNoTitleTrailingConstraint;
- (id)leadingBarWithTitleTrailingConstraint;
- (void)navigationBarInvalidatedResolvedLayoutMargins;
- (void)navigationItem:(id)arg1 appearance:(id)arg2 categoriesChanged:(long long)arg3;
- (bool)navigationItemIsBackItem:(id)arg1;
- (bool)navigationItemIsTopItem:(id)arg1;
- (void)navigationItemSearchControllerReadyForDeferredAutomaticShowsScopeBar:(id)arg1;
- (void)navigationItemUpdatedBackButtonContent:(id)arg1 animated:(bool)arg2;
- (void)navigationItemUpdatedBackgroundAppearance:(id)arg1;
- (void)navigationItemUpdatedBottomPalette:(id)arg1 oldPalette:(id)arg2;
- (void)navigationItemUpdatedCanvasView:(id)arg1;
- (void)navigationItemUpdatedContentLayout:(id)arg1 animated:(bool)arg2;
- (void)navigationItemUpdatedLargeTitleContent:(id)arg1;
- (void)navigationItemUpdatedLargeTitleDisplayMode:(id)arg1;
- (void)navigationItemUpdatedLeftBarButtonItems:(id)arg1 animated:(bool)arg2;
- (void)navigationItemUpdatedPromptContent:(id)arg1;
- (void)navigationItemUpdatedRightBarButtonItems:(id)arg1 animated:(bool)arg2;
- (void)navigationItemUpdatedScrollEdgeProgress:(id)arg1;
- (void)navigationItemUpdatedSearchController:(id)arg1 oldSearchController:(id)arg2;
- (void)navigationItemUpdatedTitleContent:(id)arg1 animated:(bool)arg2;
- (void)popAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)prepare;
- (void)prepareForPop;
- (void)prepareForPush;
- (void)presentHostedSearchWithTransitionCoordinator:(id)arg1;
- (void)provideViewsForContents:(id)arg1 topItem:(id)arg2 backItem:(id)arg3;
- (void)pushAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)regularTitleConstraint;
- (void)setBackBarButton:(id)arg1;
- (void)setBackButtonConstraints:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setDebugViews:(id)arg1;
- (void)setFocusContainerGuide:(id)arg1;
- (void)setHavePrepared:(bool)arg1;
- (void)setLargeTitleLeadingConstraint:(id)arg1;
- (void)setLargeTitleTrailingConstraint:(id)arg1;
- (void)setLeadingBar:(id)arg1;
- (void)setLeadingBarConstraint:(id)arg1;
- (void)setLeadingBarNoItemsConstraint:(id)arg1;
- (void)setLeadingBarWithNoTitleTrailingConstraint:(id)arg1;
- (void)setLeadingBarWithTitleTrailingConstraint:(id)arg1;
- (void)setRegularTitleConstraint:(id)arg1;
- (void)setTitleView:(id)arg1;
- (void)setTrailingBar:(id)arg1;
- (void)setTrailingBarConstraint:(id)arg1;
- (void)setTrailingBarNoItemsConstraint:(id)arg1;
- (void)setTrailingBarWithNoTitleLeadingConstraint:(id)arg1;
- (void)setTrailingBarWithTitleLeadingConstraint:(id)arg1;
- (void)setupTopNavigationItem;
- (bool)shouldSearchControllerDeferPresentationTransitionForNavigationItem:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)stackDidChangeFrom:(id)arg1;
- (void)teardown;
- (id)tintColor;
- (id)titleView;
- (id)trailingBar;
- (id)trailingBarConstraint;
- (id)trailingBarNoItemsConstraint;
- (id)trailingBarWithNoTitleLeadingConstraint;
- (id)trailingBarWithTitleLeadingConstraint;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateTopNavigationItemAnimated:(bool)arg1;

@end
