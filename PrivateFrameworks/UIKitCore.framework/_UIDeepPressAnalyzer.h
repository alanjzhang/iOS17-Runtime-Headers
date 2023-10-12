/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDeepPressAnalyzer : NSObject {
    _UIVelocityIntegrator * _locationIntegrator;
    _UIVelocityIntegrator * _touchForceIntegrator;
}

@property (getter=isDeepPressLikely, nonatomic, readonly) bool deepPressLikely;
@property (nonatomic, retain) _UIVelocityIntegrator *locationIntegrator;
@property (nonatomic, retain) _UIVelocityIntegrator *touchForceIntegrator;

- (void).cxx_destruct;
- (double)_touchForceFromTouches:(id)arg1;
- (void)analyzeTouchForce:(double)arg1 centroidAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)analyzeTouches:(id)arg1;
- (id)init;
- (bool)isDeepPressLikely;
- (id)locationIntegrator;
- (void)setLocationIntegrator:(id)arg1;
- (void)setTouchForceIntegrator:(id)arg1;
- (id)touchForceIntegrator;

@end
