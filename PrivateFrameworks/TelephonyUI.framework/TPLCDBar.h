/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPLCDBar : UIView {
    UIImageView * _shadowView;
}

@property (readonly) UIImageView *shadowView;

+ (id)backgroundImage;
+ (double)defaultHeight;
+ (double)defaultHeightForOrientation:(long long)arg1;

- (void).cxx_destruct;
- (id)initWithDefaultSize;
- (id)initWithDefaultSizeForOrientation:(long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 updateFrame:(bool)arg2;
- (id)shadowView;

@end
