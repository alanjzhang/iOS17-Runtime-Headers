/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKBInputDelegateManager : NSObject <UIKeyInput> {
    UIResponder<UIKeyInput> * _forwardingInputDelegate;
    bool  _forwardingInputDelegateConformsToWKInteraction;
    bool  _insideKeyInputDelegateCall;
    UIResponder<UIKeyInput> * _keyInputDelegate;
    <UIKeyboardImplStateProtocol> * _keyboardStateDelegate;
    UITextInteractionSelectableInputDelegate * _selectableDelegate;
    bool  _shouldRespectForwardingInputDelegate;
    unsigned long long  m_delegateConformanceType;
    bool  m_firstResponderAdoptsTextInput;
    unsigned long long  m_originalDelegateConformanceType;
}

@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) bool continuousSpellCheckingEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long delegateConformanceType;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enablesReturnKeyAutomatically;
@property (nonatomic) UIResponder<UIKeyInput> *forwardingInputDelegate;
@property (nonatomic, readonly) bool hasText;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long inlinePredictionType;
@property (nonatomic) bool insideKeyInputDelegateCall;
@property (nonatomic, retain) UIResponder<UIKeyInput> *keyInputDelegate;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) <UIKeyboardImplStateProtocol> *keyboardStateDelegate;
@property (nonatomic) long long keyboardType;
@property (nonatomic, readonly) <UIKeyboardInput> *legacyInputDelegate;
@property (nonatomic, copy) UITextInputPasswordRules *passwordRules;
@property (nonatomic) long long returnKeyType;
@property (getter=isSecureTextEntry, nonatomic) bool secureTextEntry;
@property (nonatomic, retain) UITextInteractionSelectableInputDelegate *selectableDelegate;
@property (nonatomic, readonly) UITextSelectionDisplayInteraction *selectionDisplayInteraction;
@property (nonatomic) bool shouldRespectForwardingInputDelegate;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *textContentType;
@property (nonatomic, readonly) UITextInputTraits *textInputTraits;
@property (nonatomic, readonly) UITextInteractionAssistant *textInteractionAssistant;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeForTextRange:(id)arg1 document:(id)arg2;

- (void).cxx_destruct;
- (id)__content;
- (unsigned int)_characterBeforeCaretSelection;
- (void)_deleteBackwardAndNotify:(bool)arg1 reinsertText:(bool)arg2 overrideOriginalContextBeforeInputWith:(id)arg3;
- (void)_deleteBackwardWhileOverridingContextAndNotifyAtEnd:(bool)arg1 deletionCount:(unsigned long long)arg2 reinsertTextInLoop:(bool)arg3;
- (bool)_deleteForwardAndNotify:(bool)arg1;
- (void)_firstResponderDidChange:(id)arg1;
- (bool)_hasMarkedText;
- (void)_moveCurrentSelection:(int)arg1;
- (id)_rangeOfText:(id)arg1 endingAtPosition:(id)arg2;
- (void)_setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_setSelectionToPosition:(id)arg1;
- (unsigned long long)_textLengthToDeleteBeforeSelectedRangeForSmartDelete;
- (id)_textRangeFromNSRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)applyAutocorrection:(id)arg1 toString:(id)arg2 shouldUnderline:(bool)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)applyAutocorrection:(id)arg1 toString:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)asynchronousInputDelegate;
- (id)attributedMarkedText;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (id)beginningOfDocument;
- (bool)callShouldDeleteBackwardWithCount:(unsigned long long)arg1;
- (void)changedSelection;
- (void)clearDelegate;
- (void)clearForwardingInputDelegateAndResign:(bool)arg1;
- (void)collapseSelectionAndAdjustByOffset:(long long)arg1;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (bool)continuousSpellCheckingEnabled;
- (void)correctedTypedText:(id)arg1 rangeOfReplacement:(id)arg2;
- (bool)delegateAdoptsWebTextInputPrivate;
- (id)delegateAsResponder;
- (unsigned long long)delegateConformanceType;
- (id)delegateRespectingForwardingDelegate:(bool)arg1;
- (void)deleteBackward;
- (id)endOfDocument;
- (id)forwardingInputDelegate;
- (void)handleClearWithInsertBeforeAdvance:(id)arg1;
- (void)handleKeyWebEvent:(id)arg1;
- (void)handleKeyWebEvent:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (bool)hasText;
- (id)init;
- (id)inputSystemSourceSession;
- (void)insertAttributedText:(id)arg1;
- (void)insertDictationResult:(id)arg1;
- (bool)insertSupplementalItem:(id)arg1 candidate:(id)arg2 replacementRange:(id)arg3;
- (void)insertText:(id)arg1;
- (void)insertText:(id)arg1 alternatives:(id)arg2 style:(long long)arg3;
- (void)insertTextAfterSelection:(id)arg1;
- (bool)insertTextSuggestion:(id)arg1;
- (bool)insideKeyInputDelegateCall;
- (id)keyInputDelegate;
- (id)keyboardStateDelegate;
- (id)legacyInputDelegate;
- (id)markedText;
- (id)markedTextRange;
- (void)moveSelectionToEndOfWord;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)privateInputDelegate;
- (id)privateInputDelegateRespectingForwardingDelegate:(bool)arg1;
- (id)privateKeyInputDelegate;
- (void)replaceRange:(id)arg1 oldText:(id)arg2 withText:(id)arg3 forReplaceAction:(int)arg4;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (bool)requiresKeyEvents;
- (id)selectableDelegate;
- (id)selectedTextRange;
- (id)selectionDisplayInteraction;
- (bool)selectionIsEndOfWord;
- (bool)selectionIsWord;
- (void)setAttributedMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (void)setContinuousSpellCheckingEnabled:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setForwardingInputDelegate:(id)arg1;
- (void)setInsideKeyInputDelegateCall:(bool)arg1;
- (void)setKeyInputDelegate:(id)arg1;
- (void)setKeyboardStateDelegate:(id)arg1;
- (void)setSelectableDelegate:(id)arg1;
- (void)setSelectedTextRange:(id)arg1;
- (void)setShouldRespectForwardingInputDelegate:(bool)arg1;
- (void)setupResponderChangeListeners;
- (bool)shouldDeleteForward;
- (bool)shouldRespectForwardingInputDelegate;
- (bool)shouldSuppressUpdateCandidateView;
- (void)storeDelegateConformance;
- (id)textInRange:(id)arg1;
- (id)textInputDelegate;
- (id)textInputTraits;
- (id)textInteractionAssistant;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)tintColor;
- (void)unmarkText;
- (void)unmarkText:(id)arg1;
- (void)updateDelegateConformanceForRemoteTraits;
- (void)updateRespectForwardingInputDelegateFlagInDestination;
- (void)updateSelectableInputDelegateIfNecessary;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/AccessibilityBundles/UIKit.axbundle/UIKit

- (void)_deleteBackwardAndNotify:(bool)arg1 reinsertText:(bool)arg2;
- (bool)callShouldReplaceExtendedRange:(long long)arg1 withText:(id)arg2 includeMarkedText:(bool)arg3;
- (void)insertText:(id)arg1 updateInputSource:(bool)arg2;

// UIKBInputDelegateManager (SafeCategory)

+ (Class)safeCategoryBaseClass;

@end
