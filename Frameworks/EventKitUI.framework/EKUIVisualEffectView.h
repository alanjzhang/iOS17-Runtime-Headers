/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIVisualEffectView : UIVisualEffectView <EKUITintColorUpdateDelegate> {
    NSObject<EKUITintColorUpdateDelegate> * _tintColorDelegate;
    TintColorUpdateView * _updateView;
}

@property (nonatomic) NSObject<EKUITintColorUpdateDelegate> *tintColorDelegate;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTintColorDelegate:(id)arg1;
- (void)subTintColorUpdatedToColor:(id)arg1;
- (id)tintColorDelegate;
- (void)viewTintColorDidChangeForView:(id)arg1 toColor:(id)arg2;

@end
