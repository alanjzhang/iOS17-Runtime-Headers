/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPHIDTouchEvent : NSObject {
    int  _finger;
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    int  _phase;
    double  _timestampSeconds;
}

@property (nonatomic) int finger;
@property (nonatomic) struct CGPoint { double x1; double x2; } location;
@property (nonatomic) int phase;
@property (nonatomic) double timestampSeconds;

- (int)finger;
- (struct CGPoint { double x1; double x2; })location;
- (int)phase;
- (void)setFinger:(int)arg1;
- (void)setLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPhase:(int)arg1;
- (void)setTimestampSeconds:(double)arg1;
- (double)timestampSeconds;

@end
