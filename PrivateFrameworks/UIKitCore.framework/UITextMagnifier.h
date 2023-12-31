/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITextMagnifier : UIView {
    struct CGPoint { 
        double x; 
        double y; 
    }  _animationPoint;
    int  _autoscrollDirections;
    UIView * _autoscrollRenderer;
    long long  _delayedAnimationType;
    bool  _isAnimating;
    struct CGPoint { 
        double x; 
        double y; 
    }  _magnificationPoint;
    UIView * _magnifierRenderer;
    UIView * _target;
    struct CGPoint { 
        double x; 
        double y; 
    }  _terminalPoint;
    bool  _terminalPointPlacedCarefully;
    UIResponder<UITextInput> * _text;
    UITextMagnifierTimeWeightedPoint * _weightedPoint;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } animationPoint;
@property (nonatomic, readonly) bool isHorizontal;
@property (nonatomic) struct CGPoint { double x1; double x2; } magnificationPoint;
@property (nonatomic, readonly) double offsetFromMagnificationPoint;
@property (nonatomic, retain) UIView *target;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } terminalPoint;
@property (nonatomic, readonly) bool terminalPointPlacedCarefully;
@property (nonatomic, retain) UIResponder<UITextInput> *text;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (Class)renderClass;

- (void).cxx_destruct;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/usr/lib/libMainThreadChecker.dylib

- (struct CGPoint { double x1; double x2; })adjustMagnificationPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)animateToAutoscrollRenderer;
- (void)animateToMagnifierRenderer;
- (struct CGPoint { double x1; double x2; })animationPoint;
- (void)autoscrollWillNotStart;
- (void)beginMagnifyingTarget:(id)arg1 text:(id)arg2 magnificationPoint:(struct CGPoint { double x1; double x2; })arg3 offset:(struct CGPoint { double x1; double x2; })arg4 animated:(bool)arg5;
- (void)beginZoomDownAnimation:(id /* block */)arg1 withDuration:(double)arg2 postponeHandler:(id /* block */)arg3;
- (void)beginZoomUpAnimation:(id /* block */)arg1 withDuration:(double)arg2;
- (void)detectLostTouches:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHorizontal;
- (struct CGPoint { double x1; double x2; })magnificationPoint;
- (double)offsetFromMagnificationPoint;
- (void)postAutoscrollPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)remove;
- (void)setAnimationPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAutoscrollDirections:(int)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMagnificationPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setNeedsDisplay;
- (void)setTarget:(id)arg1;
- (void)setText:(id)arg1;
- (void)setToMagnifierRenderer;
- (void)stopMagnifying:(bool)arg1;
- (id)target;
- (struct CGPoint { double x1; double x2; })terminalPoint;
- (bool)terminalPointPlacedCarefully;
- (id)text;
- (void)updateFrameAndOffset;
- (void)windowWillRotate:(id)arg1;
- (void)zoomDownAnimation;
- (void)zoomUpAnimation;

@end
