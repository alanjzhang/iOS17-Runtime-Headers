/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFTextInputView : UIView <UIKeyInput, UITextInput, UITextInteractionDelegate, UITextSearching> {
    PDFTextSearchAggregator * _activeSearch;
    <PDFTextInputDelegate> * _delegate;
    bool  _dimmingViewVisible;
    NSMutableArray * _foundTextRanges;
    UITextRange * _highlightedTextRange;
    UITextSearchingDimmingView * _searchDimmingView;
    UITextHighlightView * _searchHighlightView;
    <UITextInputDelegate> * _textInputDelegate;
    <UITextInputTokenizer> * _textInputTokenizer;
    UITextInteraction * _textInteraction;
    UITextRange * _textSelectionRange;
}

@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic, readonly) UITextPosition *beginningOfDocument;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enablesReturnKeyAutomatically;
@property (nonatomic, readonly) UITextPosition *endOfDocument;
@property (nonatomic, readonly) bool hasText;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long inlinePredictionType;
@property (nonatomic) <UITextInputDelegate> *inputDelegate;
@property (nonatomic, readonly) id insertDictationResultPlaceholder;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long keyboardType;
@property (nonatomic, readonly) UITextRange *markedTextRange;
@property (nonatomic, copy) NSDictionary *markedTextStyle;
@property (nonatomic, copy) UITextInputPasswordRules *passwordRules;
@property (nonatomic) long long returnKeyType;
@property (getter=isSecureTextEntry, nonatomic) bool secureTextEntry;
@property (copy) UITextRange *selectedTextRange;
@property (readonly) <NSObject><NSCopying> *selectedTextSearchDocument;
@property (nonatomic) long long selectionAffinity;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsTextReplacement;
@property (nonatomic, copy) NSString *textContentType;
@property (nonatomic, readonly) UIView *textInputView;
@property (nonatomic, readonly) <UITextInputTokenizer> *tokenizer;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/PDFKit.framework/PDFKit

- (void).cxx_destruct;
- (bool)_allowAnimatedUpdateSelectionRectViews;
- (id)_closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1 withinRange:(id)arg2;
- (id)_selectionForTextRange:(id)arg1;
- (void)_setDimmingViewVisible:(bool)arg1;
- (id)_targetedPreviewForRange:(id)arg1;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (id)beginningOfDocument;
- (bool)canBecomeFirstResponder;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (id)characterRangeAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (void)clearAllDecoratedFoundText;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1 withinRange:(id)arg2;
- (long long)compareFoundRange:(id)arg1 toRange:(id)arg2 inDocument:(id)arg3;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (void)decorateFoundTextRange:(id)arg1 inDocument:(id)arg2 usingStyle:(long long)arg3;
- (void)deleteBackward;
- (id)editMenuForTextRange:(id)arg1 suggestedActions:(id)arg2;
- (id)endOfDocument;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstRectForRange:(id)arg1;
- (void)handleGesture:(unsigned long long)arg1 state:(long long)arg2 location:(struct CGPoint { double x1; double x2; })arg3 locationOfFirstTouch:(struct CGPoint { double x1; double x2; })arg4 isIndirectTouch:(bool)arg5;
- (bool)hasText;
- (id)initWithDelegate:(id)arg1;
- (id)inputDelegate;
- (void)insertText:(id)arg1;
- (bool)interactionShouldBegin:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (bool)isSecureTextEntry;
- (void)layoutSubviews;
- (id)linkRegionsConstrainedToLineAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)markedTextRange;
- (id)markedTextStyle;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (void)performTextSearchWithQueryString:(id)arg1 usingOptions:(id)arg2 resultAggregator:(id)arg3;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (id)selectedTextRange;
- (id)selection;
- (id)selectionRectsForRange:(id)arg1;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (void)setInputDelegate:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setMarkedTextStyle:(id)arg1;
- (void)setSelectedTextRange:(id)arg1;
- (void)setSelection:(id)arg1;
- (void)setTokenizer:(id)arg1;
- (id)textInRange:(id)arg1;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)tokenizer;
- (void)unmarkText;
- (void)updateGestureRecognizerDependencies;
- (void)updateTextSelectionGraphics;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/AccessibilityBundles/PDFKit.axbundle/PDFKit

- (bool)isAccessibilityElement;

// PDFTextInputView (SafeCategory)

+ (Class)safeCategoryBaseClass;

@end
