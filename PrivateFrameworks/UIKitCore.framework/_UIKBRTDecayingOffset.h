/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIKBRTDecayingOffset : _UIKBRTDecayingObject {
    bool  _limitMovement;
    struct CGPoint { 
        double x; 
        double y; 
    }  _offset;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } offset;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } originalOffset;

- (id)initWithTimeoutDuration:(double)arg1 limitMovement:(bool)arg2;
- (struct CGPoint { double x1; double x2; })offset;
- (struct CGPoint { double x1; double x2; })originalOffset;
- (void)reset;
- (void)updateOffsetTo:(struct CGPoint { double x1; double x2; })arg1;

@end
