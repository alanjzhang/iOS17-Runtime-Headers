/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

@interface _UIAirDropProgressView : UIView

@property (nonatomic) double progress;
@property (nonatomic, retain) UIColor *progressBackgroundColor;
@property (nonatomic, retain) UIColor *progressColor;
@property (nonatomic) double progressLineWidth;
@property (nonatomic) bool showProgressTray;

+ (Class)layerClass;

- (void)animateProgressCompletedWithCompletion:(id /* block */)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)progress;
- (id)progressBackgroundColor;
- (id)progressColor;
- (double)progressLineWidth;
- (double)progressPresentationValue;
- (void)setProgress:(double)arg1;
- (void)setProgress:(double)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setProgress:(double)arg1 animated:(bool)arg2 forced:(bool)arg3 completion:(id /* block */)arg4;
- (void)setProgressBackgroundColor:(id)arg1;
- (void)setProgressColor:(id)arg1;
- (void)setProgressLineWidth:(double)arg1;
- (void)setShowProgressTray:(bool)arg1;
- (bool)showProgressTray;

@end
