/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIViewSpringAnimationBehavior : NSObject <UIViewSpringAnimationBehaviorDescribing> {
    double  _dampingRatio;
    double  _dampingRatioSmoothing;
    double  _inertialProjectionDeceleration;
    double  _inertialTargetSmoothing;
    double  _response;
    double  _responseSmoothing;
    double  _trackingDampingRatio;
    double  _trackingResponse;
}

@property (nonatomic) double inertialProjectionDeceleration;
@property (nonatomic) double inertialTargetSmoothing;

+ (id)behaviorWithDampingRatio:(double)arg1 response:(double)arg2;

- (double)inertialProjectionDeceleration;
- (double)inertialTargetSmoothing;
- (id)init;
- (struct { double x1; double x2; bool x3; bool x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; })parametersForTransitionFromState:(int)arg1 toState:(int)arg2;
- (void)setDampingRatio:(double)arg1 response:(double)arg2;
- (void)setInertialProjectionDeceleration:(double)arg1;
- (void)setInertialTargetSmoothing:(double)arg1;
- (void)setTrackingDampingRatio:(double)arg1 response:(double)arg2 dampingRatioSmoothing:(double)arg3 responseSmoothing:(double)arg4;

@end
