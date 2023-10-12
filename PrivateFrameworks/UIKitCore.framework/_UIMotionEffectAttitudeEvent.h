/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIMotionEffectAttitudeEvent : _UIMotionEffectEvent {
    struct { 
        double x; 
        double y; 
        double z; 
        double w; 
    }  _attitude;
}

@property (nonatomic, readonly) struct { double x1; double x2; double x3; double x4; } attitude;

- (struct { double x1; double x2; double x3; double x4; })attitude;
- (id)copyWithTimestamp:(double)arg1;
- (id)initWithTimestamp:(double)arg1 attitude:(struct { double x1; double x2; double x3; double x4; })arg2;
- (double)velocityRelativeToPreviousEvent:(id)arg1;

@end
