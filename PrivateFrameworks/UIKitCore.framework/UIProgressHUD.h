/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIProgressHUD : UIView {
    UIImageView * _doneView;
    UIWindow * _parentWindow;
    struct { 
        unsigned int isShowing : 1; 
        unsigned int isShowingText : 1; 
        unsigned int fixedFrame : 1; 
        unsigned int reserved : 30; 
    }  _progressHUDFlags;
    UIActivityIndicatorView * _progressIndicator;
    UILabel * _progressMessage;
}

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void)dealloc;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/AccessibilityBundles/UIKit.axbundle/UIKit

- (bool)_accessibilityBlocksInteraction;
- (id)accessibilityLabel;
- (bool)accessibilityViewIsModal;
- (bool)isAccessibilityElement;
- (void)showInView:(id)arg1;

// UIProgressHUD (SafeCategory)

+ (Class)safeCategoryBaseClass;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/usr/lib/libMainThreadChecker.dylib

- (void)done;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)hide;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithWindow:(id)arg1;
- (void)layoutSubviews;
- (void)setFontSize:(int)arg1;
- (void)setShowsText:(bool)arg1;
- (void)setText:(id)arg1;
- (void)show:(bool)arg1;

@end
