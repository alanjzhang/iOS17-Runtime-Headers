/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMCameraWorkoutEvent : NSObject {
    int  _eventType;
    double  _globalMachtime;
    double  _localMachtime;
    long long  _workoutType;
}

@property (nonatomic) int eventType;
@property (nonatomic) double globalMachtime;
@property (nonatomic) double localMachtime;
@property (nonatomic) long long workoutType;

- (int)eventType;
- (double)globalMachtime;
- (double)localMachtime;
- (void)setEventType:(int)arg1;
- (void)setGlobalMachtime:(double)arg1;
- (void)setLocalMachtime:(double)arg1;
- (void)setWorkoutType:(long long)arg1;
- (long long)workoutType;

@end
