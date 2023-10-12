/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIResponder : NSObject <DebugHierarchyObject_Fallback, UIActivityItemsConfigurationProviding, UIResponderStandardEditActions, UITextInputAdditions, UITextInput_Internal, UIUserActivityRestoring, _UIPressesEventRespondable, _UIStateRestorationContinuation, _UITouchesEventRespondable> {
    FBSSceneIdentityToken * __layeringSceneIdentity;
    struct { 
        unsigned int hasOverrideClient : 1; 
        unsigned int hasOverrideHost : 1; 
        unsigned int hasInputAssistantItem : 1; 
        unsigned int suppressSoftwareKeyboard : 1; 
        unsigned int conformsToUIKeyInputIsSet : 1; 
        unsigned int conformsToUIKeyInput : 1; 
    }  _responderFlags;
}

@property (nonatomic, readonly) <CUIKEditor> *EKUI_editor;
@property (getter=_proxyTextInput, nonatomic, readonly) UIResponder<UITextInput> *__content;
@property (nonatomic, readonly) UIResponder *_editingDelegate;
@property (nonatomic, readonly) UIPasteConfiguration *_effectivePasteConfiguration;
@property (nonatomic, readonly) FBSSceneIdentityToken *_layeringSceneIdentity;
@property (nonatomic, readonly) UIView<UITextInputPrivate> *_textSelectingContainer;
@property (nonatomic, retain) <UIActivityItemsConfigurationReading> *activityItemsConfiguration;
@property (nonatomic, readonly) bool canBecomeFirstResponder;
@property (nonatomic, readonly) bool canResignFirstResponder;
@property (getter=_caretRect, nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } caretRect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEditable, nonatomic, readonly) bool editable;
@property (getter=isEditing, nonatomic, readonly) bool editing;
@property (nonatomic, readonly) long long editingInteractionConfiguration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *inputAccessoryView;
@property (nonatomic, readonly) UIInputViewController *inputAccessoryViewController;
@property (nonatomic, readonly) UITextInputAssistantItem *inputAssistantItem;
@property (nonatomic, readonly) UIView *inputView;
@property (nonatomic, readonly) UIInputViewController *inputViewController;
@property (nonatomic, readonly) bool isFirstResponder;
@property (nonatomic, readonly) NSArray *keyCommands;
@property (nonatomic, readonly) UIResponder *nextResponder;
@property (nonatomic, copy) NSString *restorationIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *textInputContextIdentifier;
@property (nonatomic, readonly) UITextInputMode *textInputMode;
@property (nonatomic, readonly) NSUndoManager *undoManager;
@property (nonatomic, retain) NSUserActivity *userActivity;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (bool)_callBecomeFirstResponder:(id)arg1 withIntent:(unsigned long long)arg2;
+ (bool)_callResignFirstResponder:(id)arg1 withIntent:(unsigned long long)arg2;
+ (unsigned long long)_currentChangeIntent;

- (void).cxx_destruct;
- (bool)__isKindOfUIResponder;
- (void)_addShortcut:(id)arg1;
- (bool)_alwaysRequireInlineCandidateView;
- (long long)_availableTextServices;
- (void)_becomeFirstResponder;
- (void)_becomeFirstResponderAndMakeVisible;
- (bool)_becomeFirstResponderWhenPossible;
- (void)_beginPinningInputViews;
- (bool)_canBecomeFirstResponder;
- (bool)_canBecomeFirstResponderWhenPossible;
- (bool)_canChangeFirstResponder:(id)arg1 toResponder:(id)arg2;
- (bool)_canResignIfContainsFirstResponder;
- (bool)_canShowTextServiceForType:(long long)arg1;
- (id)_captureOverrideState;
- (void)_checkIsText:(bool*)arg1 isSecure:(bool*)arg2 isEditable:(bool*)arg3 isFormatted:(bool*)arg4;
- (void)_clearBecomeFirstResponderWhenCapable;
- (void)_clearOverrideHost;
- (void)_clearOverrideNextResponder;
- (void)_clearRestorableResponderStatus;
- (void)_completeForwardingTouches:(id)arg1 phase:(long long)arg2 event:(id)arg3;
- (void)_completeForwardingTouches:(id)arg1 phase:(long long)arg2 event:(id)arg3 index:(unsigned long long)arg4;
- (bool)_conformsToProtocolUIKeyInput;
- (bool)_containedInAbsoluteResponderChain;
- (bool)_containsResponder:(id)arg1;
- (void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2;
- (id)_currentOverrideClient;
- (id)_currentOverrideHost;
- (long long)_dataOwnerForCopy;
- (long long)_dataOwnerForPaste;
- (void)_define:(id)arg1;
- (void)_didChangeToFirstResponder:(id)arg1;
- (bool)_disableAutomaticKeyboardBehavior;
- (bool)_disableAutomaticKeyboardUI;
- (bool)_disallowsPresentationOfKeyboardShortcutHUD;
- (long long)_dragDataOwner;
- (long long)_dropDataOwner;
- (id)_editingDelegate;
- (id)_effectivePasteConfiguration;
- (bool)_enableAutomaticKeyboardPressDone;
- (void)_endPinningInputViews;
- (void)_enumerateKeyCommandsInChainWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (bool)_finishResignFirstResponder;
- (bool)_finishResignFirstResponderFromBecomeFirstResponder:(bool)arg1;
- (id)_firstResponder;
- (void)_gatherKeyResponders:(id)arg1 indexOfSelf:(unsigned long long*)arg2 visibilityTest:(id /* block */)arg3 passingTest:(id /* block */)arg4 subviewsTest:(id /* block */)arg5;
- (void)_handleGameControllerEvent:(id)arg1;
- (void)_handleKeyEvent:(struct __GSEvent { }*)arg1;
- (void)_handleKeyUIEvent:(id)arg1;
- (bool)_isPinningInputViews;
- (bool)_isRootForKeyResponderCycle;
- (bool)_isTransitioningFromView:(id)arg1;
- (bool)_isView;
- (bool)_isViewController;
- (id)_keyCommandForEvent:(id)arg1;
- (id)_keyCommandForEvent:(id)arg1 target:(out id*)arg2;
- (id)_keyboardResponder;
- (id)_layeringSceneIdentity;
- (void)_lookup:(id)arg1;
- (void)_moveWithEvent:(id)arg1;
- (id)_nextKeyResponder;
- (bool)_nextResponderChainContainsResponder:(id)arg1;
- (id)_nextResponderOverride;
- (id)_nextResponderThatCanBecomeFirstResponder;
- (void)_nonDestructivelyResignFirstResponder;
- (void)_notifyFocusEngine;
- (id)_overrideHost;
- (void)_overrideInputAccessoryViewNextResponderWithResponder:(id)arg1;
- (void)_overrideInputViewNextResponderWithResponder:(id)arg1;
- (void)_overrideNextResponderWithResponder:(id)arg1 forType:(long long)arg2;
- (bool)_ownsInputAccessoryView;
- (void)_preserveResponderOverridesWhilePerforming:(id /* block */)arg1;
- (id)_previousKeyResponder;
- (id)_primaryContentResponder;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectToScrollToVisibleInCellInWindow:(id)arg1;
- (bool)_requiresKeyboardResetOnReload;
- (bool)_requiresKeyboardWhenFirstResponder;
- (bool)_requiresKeyboardWindowWhenFirstResponder;
- (void)_resignFirstResponder;
- (bool)_resignIfContainsFirstResponder;
- (id)_responderChainDescription;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_responderExternalTouchRectForWindow:(id)arg1;
- (id)_responderForBecomeFirstResponder;
- (id)_responderForEditing;
- (id)_responderSelectionContainerViewForResponder:(id)arg1;
- (id)_responderSelectionImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_responderSelectionRectForWindow:(id)arg1;
- (id)_responderWindow;
- (bool)_restoreFirstResponder;
- (void)_restoreOverrideState:(id)arg1;
- (void)_setDataOwnerForCopy:(long long)arg1;
- (void)_setDataOwnerForPaste:(long long)arg1;
- (void)_setDragDataOwner:(long long)arg1;
- (void)_setDropDataOwner:(long long)arg1;
- (void)_setFirstResponder:(id)arg1;
- (void)_share:(id)arg1;
- (bool)_shouldCollectAsKeyView;
- (bool)_shouldRestorationInputViewsOnlyWhenKeepingFirstResponder;
- (id)_showServiceForText:(id)arg1 selectedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 type:(long long)arg3 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 inView:(id)arg5;
- (id)_showServiceForText:(id)arg1 type:(long long)arg2 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 inView:(id)arg4;
- (id)_showServiceForType:(long long)arg1 withContext:(id)arg2;
- (bool)_supportsBecomeFirstResponderWhenPossible;
- (void)_tagAsRestorableResponder;
- (id)_targetActionResponderChainDescription;
- (id)_targetCanPerformBlock:(id /* block */)arg1;
- (id)_textInteraction;
- (id)_textServicesResponderProxy;
- (void)_translate:(id)arg1;
- (id)_undoManagerForValidatingUndoRedoCommands;
- (bool)_wantsPriorityOverFocusUpdates;
- (bool)_wantsTargetOfKeyboardEventDeferringEnvironment;
- (void)_wheelChangedWithEvent:(id)arg1;
- (void)_willChangeToFirstResponder:(id)arg1;
- (id)_window;
- (void)_windowBecameKey;
- (void)_windowResignedKey;
- (void)doesNotRecognizeSelector:(SEL)arg1;

// UIResponder (ActivityContinuation)

- (id)_userActivity;

// UIResponder (FindNavigatorResponder)

- (id)_ui_findNavigatorResponder;

// UIResponder (StateRestoration)

+ (void)_cleanupAllStateRestorationTables;
+ (void)_cleanupStateRestorationObjectIdentifierTrackingTables;
+ (void)_finishStateRestoration;
+ (void)_prepareForSecondPassStateRestoration;
+ (void)_setRestoredIdentifierPathForObject:(id)arg1 identifierPath:(id)arg2;
+ (void)_startDeferredTrackingObjectsWithIdentifiers;
+ (void)_stopDeferredTrackingObjectsWithIdentifiers;
+ (void)_updateStateRestorationIdentifierMap;
+ (id)objectWithRestorationIdentifierPath:(id)arg1;

- (void)_rebuildStateRestorationIdentifierPath;
- (id)_restorationIdentifierPath;

// UIResponder (UIActivityItemsConfiguration)

- (id)_effectiveActivityItemsConfiguration;
- (id)_effectiveActivityItemsConfigurationAtLocation:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpace:(id)arg2 sender:(id)arg3;
- (id)_effectiveActivityItemsConfigurationForSender:(id)arg1;
- (id)_effectiveActivityItemsConfigurationForView:(id)arg1 location:(struct CGPoint { double x1; double x2; })arg2 sender:(id)arg3;
- (id)_firstNonnullActivityItemsConfigurationInResponderChainForLocation:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpace:(id)arg2 skipPresentingViewControllers:(bool)arg3 sender:(id)arg4 target:(id*)arg5;
- (bool)_handleActivityItemsConfigurationCanPerformAction:(SEL)arg1 sender:(id)arg2;
- (bool)_handleActivityItemsConfigurationDoesNotHandleSelector:(SEL)arg1;
- (bool)_handleActivityItemsConfigurationShare:(id)arg1;
- (bool)_handleActivityItemsConfigurationShare:(id)arg1 activityItemsConfiguration:(id)arg2;

// UIResponder (UIFocusAdditions)

- (bool)_allowsChangingFirstResponderForFocusUpdateWithContext:(id)arg1;
- (bool)_shouldForwardMovementToFocusEngine:(long long)arg1;
- (bool)_shouldSkipKeyCommand:(id)arg1 forMovement:(long long)arg2;

// UIResponder (UIResponderChainTraversal)

- (id)_deepestActionResponder;
- (id)_deepestUnambiguousResponder;
- (void)_didChangeDeepestActionResponder;
- (void)_didChangeDeepestUnambiguousResponder;
- (id)_nextResponderUsingTraversalStrategy:(unsigned long long)arg1;

// UIResponder (UIResponderInputViewAdditions)

+ (id)_globalFirstResponder;
+ (void)clearTextInputContextIdentifier:(id)arg1;

- (id)_additionalTextInputLocales;
- (void)_reloadInputViewsFromFirstResponder:(bool)arg1;
- (void)_setSuppressSoftwareKeyboard:(bool)arg1;
- (bool)_suppressSoftwareKeyboard;

// UIResponder (UITextInputAdditions)

- (void)__createInteractionAssistantIfNecessaryWithMode:(long long)arg1;
- (void)__prepareInteractionAssistantIfNecessary;
- (void)__tearDownInteractionAssistantIfNecessary;
- (id)__textInteractionFromAssistant;
- (id)_asTextSelection;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_caretRect;
- (id)_selectionDisplayInteraction;
- (void)_setSelectionDisplayInteraction:(id)arg1;

// UIResponder (UITextInput_Internal)

- (unsigned int)_characterAfterCaretSelection;
- (unsigned int)_characterBeforeCaretSelection;
- (unsigned int)_characterInRelationToCaretSelection:(int)arg1;
- (unsigned int)_characterInRelationToPosition:(id)arg1 amount:(int)arg2;
- (unsigned int)_characterInRelationToRangedSelection:(int)arg1;
- (id)_clampedpositionFromPosition:(id)arg1 offset:(int)arg2;
- (void)_deleteBackwardAndNotify:(bool)arg1;
- (void)_deleteByWord;
- (void)_deleteForwardAndNotify:(bool)arg1;
- (void)_deleteForwardByWord;
- (void)_deleteTextRange:(id)arg1;
- (void)_deleteToEndOfLine;
- (void)_deleteToEndOfParagraph;
- (void)_deleteToStartOfLine;
- (void)_expandSelectionToBackwardDeletionClusterWithReinsertionOut:(id*)arg1;
- (void)_expandSelectionToStartOfWordBeforeCaretSelection;
- (void)_expandSelectionToStartOfWordsBeforeCaretSelection:(int)arg1;
- (void)_extendCurrentSelection:(int)arg1;
- (id)_findBoundaryPositionClosestToPosition:(id)arg1 withGranularity:(long long)arg2;
- (id)_findDocumentBoundaryFromPosition:(id)arg1;
- (id)_findPleasingWordBoundaryFromPosition:(id)arg1;
- (id)_fontForCaretSelection;
- (id)_fullRange;
- (id)_fullText;
- (bool)_hasMarkedText;
- (bool)_hasMarkedTextOrRangedSelection;
- (int)_indexForTextPosition:(id)arg1;
- (id)_intersectionOfRange:(id)arg1 andRange:(id)arg2;
- (bool)_isEmptySelection;
- (id)_keyInput;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_lastRectForRange:(id)arg1;
- (void)_moveCurrentSelection:(int)arg1;
- (id)_moveDown:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfDocument:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfLine:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfParagraph:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfWord:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfDocument:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfLine:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfParagraph:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfWord:(bool)arg1 withHistory:(id)arg2;
- (id)_moveUp:(bool)arg1 withHistory:(id)arg2;
- (id)_normalizedStringForRangeComparison:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_nsrangeForTextRange:(id)arg1;
- (long long)_opposingDirectionFromDirection:(long long)arg1;
- (id)_positionAtStartOfWords:(unsigned long long)arg1 beforePosition:(id)arg2;
- (id)_positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3 withAffinityDownstream:(bool)arg4;
- (id)_positionFromPosition:(id)arg1 pastTextUnit:(long long)arg2 inDirection:(long long)arg3;
- (id)_positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (id)_proxyTextInput;
- (bool)_range:(id)arg1 containsRange:(id)arg2;
- (bool)_range:(id)arg1 intersectsRange:(id)arg2;
- (bool)_range:(id)arg1 isEqualToRange:(id)arg2;
- (id)_rangeFromCurrentRangeWithDelta:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_rangeOfEnclosingWord:(id)arg1;
- (id)_rangeOfLineEnclosingPosition:(id)arg1;
- (id)_rangeOfParagraphEnclosingPosition:(id)arg1;
- (id)_rangeOfSentenceEnclosingPosition:(id)arg1;
- (id)_rangeOfSmartSelectionIncludingRange:(id)arg1;
- (id)_rangeOfText:(id)arg1 endingAtPosition:(id)arg2;
- (id)_rangeOfTextUnit:(long long)arg1 enclosingPosition:(id)arg2;
- (id)_rangeSpanningTextUnit:(long long)arg1 andPosition:(id)arg2;
- (void)_replaceCurrentWordWithText:(id)arg1;
- (void)_replaceDocumentWithText:(id)arg1;
- (void)_scrollRectToVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2;
- (void)_selectAll;
- (id)_selectableText;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_selectedNSRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_selectedRangeWithinMarkedText;
- (long long)_selectionAffinity;
- (bool)_selectionAtDocumentEnd;
- (bool)_selectionAtDocumentStart;
- (bool)_selectionAtWordStart;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_selectionClipRect;
- (void)_setAttributedMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_setCaretSelectionAtEndOfSelection;
- (void)_setGestureRecognizers;
- (id)_setHistory:(id)arg1 withExtending:(bool)arg2 withAnchor:(int)arg3 withAffinityDownstream:(bool)arg4;
- (void)_setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_setSelectedTextRange:(id)arg1 withAffinityDownstream:(bool)arg2;
- (id)_setSelectionRangeWithHistory:(id)arg1;
- (void)_setSelectionToPosition:(id)arg1;
- (bool)_shouldPerformUICalloutBarButtonReplaceAction:(SEL)arg1 forText:(id)arg2 checkAutocorrection:(bool)arg3;
- (id)_textColorForCaretSelection;
- (long long)_textInputSource;
- (id)_textRangeFromNSRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_textSelectingContainer;
- (void)_transpose;
- (void)_unmarkText;
- (bool)_usesAsynchronousProtocol;
- (id)_wordContainingCaretSelection;

// UIResponder (_UIStickerRepresentation)

- (void)_insertItemFromProvider:(id)arg1 completionHandler:(id /* block */)arg2;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/AccessibilityBundles/UIKit.axbundle/UIKit

+ (bool)_isSerializableAccessibilityElement;

- (id)_accessibilityAlternativesForTextAtPosition:(unsigned long long)arg1;
- (id)_accessibilityBeginningOfDocument;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessibilityBoundsForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_accessibilityCharacterRangeForPosition:(unsigned long long)arg1;
- (id)_accessibilityEndOfDocument;
- (id)_accessibilityFKAArrowKeysHandled;
- (id)_accessibilityFocusItemForResponder;
- (bool)_accessibilityHandlesTabKey;
- (bool)_accessibilityInsertTextWithAlternatives:(id)arg1;
- (bool)_accessibilityIsFKARunningForFocusItem;
- (long long)_accessibilityLineEndPosition;
- (id)_accessibilityLineNumberAndColumnForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_accessibilityLineRangeForPosition:(unsigned long long)arg1;
- (long long)_accessibilityLineStartPosition;
- (long long)_accessibilityOffsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)_accessibilityPositionFromPosition:(id)arg1 offset:(long long)arg2;
- (unsigned long long)_accessibilityPositionInDirection:(long long)arg1 offset:(unsigned long long)arg2 forPosition:(unsigned long long)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_accessibilityRangeForLineNumberAndColumn:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_accessibilityRawRangeForUITextRange:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_accessibilitySpeakThisString;
- (long long)_accessibilityTextInputLinePosition:(bool)arg1;
- (id)_accessibilityTextRangeFromNSRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_accessibilityTextRectsForSpeakThisStringRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_accessibilityTextRectsForSpeakThisStringRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 string:(id)arg2 wantsSentences:(bool)arg3;
- (id)_accessibilityTextRectsForSpeakThisStringRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 wantsSentences:(bool)arg2;
- (id)_accessibilityTextViewTextOperationResponder;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_accessibilityVisibleTextRange;
- (bool)_axShouldDrawFocusAroundFirstResponder;
- (id)_keyCommands;
- (id)_moveLeft:(bool)arg1 withHistory:(id)arg2;
- (id)_moveRight:(bool)arg1 withHistory:(id)arg2;
- (void)_updateSelectionWithTextRange:(id)arg1 withAffinityDownstream:(bool)arg2;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (bool)becomeFirstResponder;
- (void)dealloc;
- (bool)isAccessibilityElement;
- (bool)resignFirstResponder;

// UIResponder (SafeCategory)

+ (Class)safeCategoryBaseClass;

// UIResponder (UITextAccessibilityUtilities)

- (bool)_accessibilityBeginUndoableTextInsertion;
- (bool)_accessibilityEndUndoableTextInsertion;
- (bool)_accessibilityHasTextOperations;
- (id)_accessibilityTextOperations;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/EventKitUI.framework/EventKitUI

// UIResponder (EventKitUI)

- (id)EKUI_editor;
- (void)EKUI_setDataOwnersFromEvent:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/usr/lib/libMainThreadChecker.dylib

- (id)activityItemsConfiguration;
- (void)beginSelectionChange;
- (void)buildMenuWithBuilder:(id)arg1;
- (bool)canBecomeFirstResponder;
- (bool)canPasteItemProviders:(id)arg1;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (bool)canResignFirstResponder;
- (void)captureTextFromCamera:(id)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (long long)editingInteractionConfiguration;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)endSelectionChange;
- (id)firstResponder;
- (void)gestureChanged:(struct __GSEvent { }*)arg1;
- (void)gestureEnded:(struct __GSEvent { }*)arg1;
- (void)gestureStarted:(struct __GSEvent { }*)arg1;
- (id)inputAccessoryView;
- (id)inputAccessoryViewController;
- (id)inputAssistantItem;
- (id)inputDashboardViewController;
- (id)inputView;
- (id)inputViewController;
- (id)interactionAssistant;
- (bool)isEditable;
- (bool)isEditing;
- (bool)isFirstResponder;
- (id)keyCommands;
- (void)motionBegan:(long long)arg1 withEvent:(id)arg2;
- (void)motionCancelled:(long long)arg1 withEvent:(id)arg2;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (id)nextFirstResponder;
- (id)nextResponder;
- (id)pasteConfiguration;
- (void)pasteItemProviders:(id)arg1;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (id)recentsAccessoryView;
- (void)reloadInputViews;
- (void)reloadInputViewsWithoutReset;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (id)restorationIdentifier;
- (void)restoreUserActivityState:(id)arg1;
- (void)scrollWheel:(struct __GSEvent { }*)arg1;
- (long long)selectionAffinity;
- (void)setActivityItemsConfiguration:(id)arg1;
- (void)setPasteConfiguration:(id)arg1;
- (void)setRestorationIdentifier:(id)arg1;
- (void)setUserActivity:(id)arg1;
- (void)set_textInputSource:(long long)arg1;
- (bool)shouldReloadInputViews;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (id)textInputContextIdentifier;
- (id)textInputMode;
- (id)textInputSuggestionDelegate;
- (id)textInputView;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesEstimatedPropertiesUpdated:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (id)undoManager;
- (void)updateTextAttributesWithConversionHandler:(id /* block */)arg1;
- (void)updateUserActivityState:(id)arg1;
- (id)userActivity;
- (void)validateCommand:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/usr/lib/libViewDebuggerSupport.dylib

// UIResponder (DebugHierarchyAdditionsFallback)

+ (id)fallback_debugHierarchyPropertyDescriptions;
+ (id)fallback_debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id*)arg3 outError:(id*)arg4;

@end