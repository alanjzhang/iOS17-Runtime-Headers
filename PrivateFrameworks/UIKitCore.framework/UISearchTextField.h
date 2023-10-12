/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISearchTextField : UITextField <_UISearchBarTextFieldOrMailReplacement, _UISearchSuggestionControllerDelegate, _UIVisualStyleStylable> {
    bool  __alwaysShowsClearButtonWhenEmpty;
    bool  __preventSelectionViewActivation;
    bool  _animatePlaceholderOnResignFirstResponder;
    NSMutableDictionary * _customClearButtons;
    UIImageView * _defaultLeftView;
    bool  _deferringFirstResponder;
    _UISearchBarSearchFieldBackgroundView * _effectBackgroundBottom;
    _UISearchBarSearchFieldBackgroundView * _effectBackgroundTop;
    UIHoverGestureRecognizer * _hoverGestureRecognizer;
    NSMutableDictionary * _iconOffsets;
    NSHashTable * _knownTokenLayoutViews;
    UIImage * _magnifyingGlassImage;
    UISearchBar * _searchBar;
    struct { 
        unsigned int searchBarWantsShouldSendContentChangedNotificationsIfOnlyMarkedTextChanged : 1; 
        unsigned int delegateImplementsItemProviderForCopyingTokens; 
        unsigned int delegateImplementsUnderscoredItemProviderForCopyingTokens; 
        unsigned int allowsCopyingTokens : 1; 
        unsigned int allowsDeletingTokens : 1; 
        unsigned int alwaysHidesMagnifyingGlassForAccessibilityContentSizeCategory : 1; 
        unsigned int needsDelayedSearchControllerPresentation : 1; 
        unsigned int suggestionHasBeenSelected : 1; 
        unsigned int pendingClearSearchSuggestions : 1; 
        unsigned int supportsStagedDictation : 1; 
    }  _searchBarTextFieldFlags;
    NSValue * _searchTextOffsetValue;
    _UISearchSuggestionControllerIOSBase * _suggestionController;
    UIColor * _tokenBackgroundColor;
    _UISearchBarTextFieldTokenCounter * _tokenCounter;
    UIColor * _tokenForegroundColor;
    UITapGestureRecognizer * _tokenTapGestureRecognizer;
    _UISearchTextFieldVisualStyle * _visualStyle;
}

@property (setter=_setAlwaysHidesMagnifyingGlassForAccessibilityContentSizeCategory:, nonatomic) bool _alwaysHidesMagnifyingGlassForAccessibilityContentSizeCategory;
@property (setter=_setAlwaysShowsClearButtonWhenEmpty:, nonatomic) bool _alwaysShowsClearButtonWhenEmpty;
@property (setter=_dci_setSearchSuggestions:, nonatomic, copy) NSArray *_dci_searchSuggestions;
@property (setter=_dci_setSuggestionsMenuDismissalPassthroughViews:, nonatomic, copy) NSArray *_dci_suggestionsMenuDismissalPassthroughViews;
@property (setter=_setIgnoresDynamicType:, nonatomic) bool _ignoresDynamicType;
@property (nonatomic, readonly) bool _needsDelayedSearchControllerPresentation;
@property (setter=_setPreventSelectionViewActivation:, nonatomic) bool _preventSelectionViewActivation;
@property (setter=_setSearchBar:, nonatomic) UISearchBar *_searchBar;
@property (setter=_setSearchTextOffetValue:, nonatomic, retain) NSValue *_searchTextOffsetValue;
@property (setter=_setSuggestionController:, nonatomic, retain) _UISearchSuggestionControllerIOSBase *_suggestionController;
@property (setter=_setTokenForegroundColor:, nonatomic, retain) UIColor *_tokenForegroundColor;
@property (nonatomic) bool allowsCopyingTokens;
@property (nonatomic) bool allowsDeletingTokens;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIColor *searchPlaceholderColor;
@property (nonatomic, copy) NSArray *searchSuggestions;
@property (nonatomic, readonly) UIColor *searchTextColor;
@property (nonatomic, readonly) UITextField *searchTextField;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITextRange *textualRange;
@property (nonatomic, retain) UIColor *tokenBackgroundColor;
@property (nonatomic, copy) NSArray *tokens;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (Class)_fieldEditorClass;
+ (Class)_textPasteItemClass;
+ (bool)_wantsFadedEdges;

- (void).cxx_destruct;
- (void)__highlightedDidChangeAnimated:(bool)arg1;
- (void)_activateSelectionView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_adjustedTextOrEditingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_adjustmentsForSearchIconViewRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_alwaysHidesMagnifyingGlassForAccessibilityContentSizeCategory;
- (bool)_alwaysShowsClearButtonWhenEmpty;
- (void)_animateForFirstResponderChangeWithAnimations:(id /* block */)arg1;
- (void)_animateForFirstResponderChangeWithAnimations:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)_applyHighlightedAnimated:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_availableTextRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forEditing:(bool)arg2;
- (void)_becomeFirstResponder;
- (bool)_becomeFirstResponderWhenPossible;
- (long long)_blurEffectStyle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_bookmarkViewRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (Class)_canvasViewClass;
- (unsigned long long)_characterIndexForTokenTapGestureRecognizer;
- (void)_clearBackgroundViews;
- (id)_clearButtonImageForState:(unsigned long long)arg1;
- (double)_clearButtonMarginX;
- (struct CGSize { double x1; double x2; })_clearButtonSize;
- (void)_copySelectionPopulatingActuallyCopiedTokenCharacterIndexes:(id)arg1;
- (id)_createEffectsBackgroundViewWithStyle:(long long)arg1 applyFilter:(id)arg2;
- (id)_customDraggableObjectsForRange:(id)arg1;
- (id)_dci_searchSuggestions;
- (void)_dci_setSearchSuggestions:(id)arg1;
- (void)_dci_setSuggestionsMenuDismissalPassthroughViews:(id)arg1;
- (id)_dci_suggestionsMenuDismissalPassthroughViews;
- (double)_defaultHeightForBarMetrics:(long long)arg1;
- (void)_defaultInsertTextSuggestion:(id)arg1;
- (id)_deferredSearchSuggestions;
- (bool)_delegateShouldBeginEditing;
- (bool)_delegateShouldClear;
- (bool)_delegateShouldEndEditing;
- (bool)_delegateShouldScrollToVisibleWhenBecomingFirstResponder;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_didRemoveTokenLayoutView:(id)arg1;
- (void)_didSetFont:(id)arg1;
- (bool)_hasContent;
- (bool)_hasCustomClearButtonImage;
- (void)_highlightedDidChangeAnimated:(bool)arg1;
- (void)_hoverGestureChanged:(id)arg1;
- (bool)_ignoresDynamicType;
- (id)_initWithDeferredSearchIconImageConfiguration;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textLayoutManagerEnabled:(bool)arg2;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textLayoutManagerEnabled:(bool)arg2 defersSearchImageConfiguration:(bool)arg3;
- (bool)_isEditingOrHasContent;
- (double)_maximumAlphaForLeadingView;
- (bool)_needsDelayedSearchControllerPresentation;
- (id)_newAttributedStringWithToken:(id)arg1;
- (void)_notifyDidBeginEditing;
- (void)_notifyDidEndEditing;
- (void)_observeScrollViewDidScroll:(id)arg1;
- (id)_offsetValueForIcon:(long long)arg1;
- (void)_pasteSessionDidFinish:(id)arg1;
- (id)_placeholderColor;
- (double)_placeholderLabelAlphaForForegroundViewsAlpha:(double)arg1;
- (Class)_placeholderLabelClass;
- (long long)_preferredRenderingModeForPlaceholder;
- (bool)_preventSelectionViewActivation;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeForClearButton;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeForSetText;
- (id)_rangeOfCustomDraggableObjectsInRange:(id)arg1;
- (void)_receivedKeyboardDidShowNotification:(id)arg1;
- (void)_redirectSelectionToAvoidClobberingTokens;
- (void)_removeEffectsBackgroundViews;
- (void)_resetNeedsDelayedSearchControllerPresentation;
- (bool)_scalesMagnifyingGlassForDynamicTypeWithFont:(id)arg1;
- (id)_searchBar;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_searchIconViewRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_searchTextOffsetValue;
- (void)_setAlwaysHidesMagnifyingGlassForAccessibilityContentSizeCategory:(bool)arg1;
- (void)_setAlwaysShowsClearButtonWhenEmpty:(bool)arg1;
- (void)_setAnimatesBackgroundCornerRadius:(bool)arg1;
- (void)_setBackgroundViewsAlpha:(double)arg1;
- (void)_setBottomEffectBackgroundVisible:(bool)arg1;
- (void)_setDeferredSearchSuggestions:(id)arg1;
- (void)_setEnabled:(bool)arg1 animated:(bool)arg2;
- (void)_setIgnoresDynamicType:(bool)arg1;
- (void)_setMagnifyingGlassImage:(id)arg1;
- (void)_setOffsetValue:(id)arg1 forIcon:(long long)arg2;
- (void)_setPreventSelectionViewActivation:(bool)arg1;
- (void)_setSearchBar:(id)arg1;
- (void)_setSearchTextOffetValue:(id)arg1;
- (void)_setSuggestionController:(id)arg1;
- (void)_setTokenForegroundColor:(id)arg1;
- (bool)_shouldAppendTextInViewDescription;
- (bool)_shouldCenterPlaceholder;
- (bool)_shouldDetermineInterfaceStyleTextColor;
- (bool)_shouldHideMagnifyingGlassWhenEditingOrHasContent;
- (bool)_shouldIgnoreBaseWritingDirectionChanges;
- (bool)_shouldOverrideEditingFont;
- (bool)_shouldResignOnEditingDidEndOnExit;
- (bool)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
- (bool)_shouldSuppressSelectionHandles;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_suffixFrame;
- (long long)_suffixLabelTextAlignment;
- (id)_suggestionController;
- (void)_suggestionsMenuInteractionWillEndWithAnimator:(id)arg1;
- (bool)_supportsDynamicType;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_textRangeForTextStorageRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)_textShouldFillFieldEditorHeight;
- (id)_tokenForegroundColor;
- (void)_tokenTapGestureRecognized;
- (void)_updateAlphaForMagnifyingGlass;
- (void)_updateAtomViewSelection:(bool)arg1;
- (void)_updateBackgroundView:(id)arg1 withStyle:(long long)arg2 filter:(id)arg3;
- (void)_updateBackgroundViewsAnimated:(bool)arg1;
- (void)_updateColorForMagnifyingGlass;
- (void)_updateDefaultLeftViewForFont:(id)arg1;
- (void)_updateHelpMessageOverrideWithMessage:(id)arg1;
- (void)_updateLeftViewForMagnifyingGlassImage;
- (void)_willAddTokenLayoutView:(id)arg1;

// UISearchTextField (VisualStyleStylable)

+ (id)visualStyleRegistryIdentity;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/AccessibilityBundles/UIKit.axbundle/UIKit

- (void)_accessibilityLoadAccessibilityInformation;
- (bool)_delegateShouldChangeCharactersInTextStorageRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 replacementString:(id)arg2 delegateCares:(bool*)arg3;
- (void)_setClearButtonImage:(id)arg1 forState:(unsigned long long)arg2;

// UISearchTextField (SafeCategory)

+ (Class)safeCategoryBaseClass;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/usr/lib/libMainThreadChecker.dylib

- (bool)allowsCopyingTokens;
- (bool)allowsDeletingTokens;
- (bool)allowsDraggingAttachments;
- (id)attributedText;
- (id)attributedTextInRange:(id)arg1;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (bool)canBecomeFocused;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (bool)canResignFirstResponder;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clearButtonRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)deleteBackward;
- (void)didAddTextAttachmentViews:(id)arg1;
- (void)didLayoutTextAttachmentView:(id)arg1 inFragmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)didRemoveTextAttachmentViews:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })editingRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)fieldEditorDidChange:(id)arg1;
- (void)fieldEditorDidChangeSelection:(id)arg1;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)insertAttributedText:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })insertFilteredText:(id)arg1;
- (void)insertText:(id)arg1;
- (void)insertTextSuggestion:(id)arg1;
- (void)insertToken:(id)arg1 atIndex:(long long)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })leftViewRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)paste:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })placeholderRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)positionOfTokenAtIndex:(long long)arg1;
- (void)removeTokenAtIndex:(long long)arg1;
- (void)replaceRange:(id)arg1 withAttributedText:(id)arg2;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (void)replaceTextualPortionOfRange:(id)arg1 withToken:(id)arg2 atIndex:(unsigned long long)arg3;
- (bool)resignFirstResponder;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rightViewRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)searchSuggestionController:(id)arg1 didSelectSuggestion:(id)arg2 atIndexPath:(id)arg3;
- (id)searchSuggestions;
- (id)selectedTokens;
- (void)setAllowsCopyingTokens:(bool)arg1;
- (void)setAllowsDeletingTokens:(bool)arg1;
- (void)setAttributedMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setDelegate:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setSearchSuggestions:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTokenBackgroundColor:(id)arg1;
- (void)setTokens:(id)arg1;
- (id)text;
- (id)textInRange:(id)arg1;
- (id)textInputTraits;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)textualRange;
- (void)tintColorDidChange;
- (id)tokenBackgroundColor;
- (id)tokens;
- (id)tokensInRange:(id)arg1;
- (void)updateForBackdropStyle:(long long)arg1;
- (void)willMoveToWindow:(id)arg1;

@end