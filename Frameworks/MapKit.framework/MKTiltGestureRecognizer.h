/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTiltGestureRecognizer : UIPanGestureRecognizer {
    double  _initialDistance;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialTouch1Point;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialTouch2Point;
    UITouch * _touch1;
    UITouch * _touch2;
}

- (void).cxx_destruct;
- (id)_activeTouchesForEvent:(id)arg1;
- (double)_distanceFromPoint:(struct CGPoint { double x1; double x2; })arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
