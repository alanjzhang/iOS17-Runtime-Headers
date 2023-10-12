/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
 */

@interface PGStashView : UIView {
    PGBackdropView * _backdropView;
    double  _blurProgress;
    bool  _chevronsHidden;
    UIView * _darkTintView;
    bool  _isChevronShownLeft;
    UIImageView * _leftChevron;
    UIView * _lightTintView;
    UIImageView * _rightChevron;
    double  _stashedTabWidth;
}

@property (nonatomic) double blurProgress;
@property (nonatomic) double stashedTabWidth;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Pegasus.framework/Pegasus

- (void).cxx_destruct;
- (void)_setContinuousCornerRadius:(double)arg1;
- (double)blurProgress;
- (void)layoutStashChevrons;
- (void)layoutSubviews;
- (void)resetChevronState;
- (void)setBlurProgress:(double)arg1;
- (void)setChevronHidden:(bool)arg1 left:(bool)arg2;
- (void)setStashedTabWidth:(double)arg1;
- (double)stashedTabWidth;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/AccessibilityBundles/Pegasus.axbundle/Pegasus

- (id)_accessibilityHitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_axMarkupBackdropView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

// PGStashView (SafeCategory)

+ (Class)safeCategoryBaseClass;

@end
