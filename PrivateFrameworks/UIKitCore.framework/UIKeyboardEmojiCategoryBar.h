/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardEmojiCategoryBar : UIKeyboardEmojiKeyView {
    UIKeyboardEmojiGraphicsTraits * _emojiGraphicsTraits;
    UIResponder<UIKBEmojiHitTestResponder> * _hitTestResponder;
    bool  _isScrubbing;
    double  _scrubStartXLocation;
    UIView * _scrubView;
    unsigned long long  _selectedIndex;
}

@property (nonatomic, retain) UIKeyboardEmojiGraphicsTraits *emojiGraphicsTraits;
@property (nonatomic) UIResponder<UIKBEmojiHitTestResponder> *hitTestResponder;
@property (nonatomic, retain) UIView *scrubView;
@property unsigned long long selectedIndex;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (bool)wantsScreenTraits;

- (void).cxx_destruct;
- (void)dealloc;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/AccessibilityBundles/UIKit.axbundle/UIKit

- (id)accessibilityElements;
- (void)setSelectedIndex:(unsigned long long)arg1;

// UIKeyboardEmojiCategoryBar (SafeCategory)

+ (Class)safeCategoryBaseClass;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/usr/lib/libMainThreadChecker.dylib

- (void)animateScrubberToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })categorySelectedCircleRect:(long long)arg1;
- (void)didMoveToWindow;
- (void)dimKeys:(id)arg1;
- (id)emojiGraphicsTraits;
- (unsigned long long)flippedIndexForIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForDivider:(int)arg1;
- (id)hitTestResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 keyplane:(id)arg2 key:(id)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 keyplane:(id)arg2 key:(id)arg3 screenTraits:(id)arg4;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })paddedFrame;
- (void)prepareForDisplay;
- (void)removeFromSuperview;
- (id)scrubView;
- (unsigned long long)selectedIndex;
- (unsigned long long)selectedIndexForTouches:(id)arg1;
- (void)setEmojiGraphicsTraits:(id)arg1;
- (void)setHitTestResponder:(id)arg1;
- (void)setScrubView:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)updateCategory;
- (void)updateCategoryOnBar:(unsigned long long)arg1;
- (void)updateToCategory:(long long)arg1;

@end
