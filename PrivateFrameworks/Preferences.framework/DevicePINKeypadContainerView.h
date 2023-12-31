/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface DevicePINKeypadContainerView : UIView {
    UIVisualEffectView * _backdropView;
    double  _iPadKeypadHeight;
    DevicePINKeypad * _keypad;
}

@property (retain) UIVisualEffectView *backdropView;
@property double iPadKeypadHeight;
@property (retain) DevicePINKeypad *keypad;

- (void).cxx_destruct;
- (id)backdropView;
- (double)iPadKeypadHeight;
- (id)initWithKeypad:(id)arg1;
- (id)keypad;
- (void)layoutSubviews;
- (void)setBackdropView:(id)arg1;
- (void)setIPadKeypadHeight:(double)arg1;
- (void)setKeypad:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
