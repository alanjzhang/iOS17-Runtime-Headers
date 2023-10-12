/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFPanGestureRecognizer : UIPanGestureRecognizer {
    bool  _didForcePress;
    struct CGPoint { 
        double x; 
        double y; 
    }  _locationOfFirstTouch;
    bool  _touchesDidHavePressure;
}

@property (nonatomic) bool didForcePress;
@property (nonatomic) struct CGPoint { double x1; double x2; } locationOfFirstTouch;
@property (nonatomic) bool touchesDidHavePressure;

- (bool)didForcePress;
- (struct CGPoint { double x1; double x2; })locationOfFirstTouch;
- (struct CGPoint { double x1; double x2; })locationOfFirstTouchInView:(id)arg1;
- (void)reset;
- (void)setDidForcePress:(bool)arg1;
- (void)setLocationOfFirstTouch:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTouchesDidHavePressure:(bool)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (bool)touchesDidHavePressure;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
