/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKFirstPartyWorkoutSnapshot : NSObject {
    unsigned long long  _activityType;
    double  _elapsedTime;
    NSDate * _snapshotDate;
    long long  _state;
}

@property (nonatomic, readonly) unsigned long long activityType;
@property (nonatomic, readonly) long long state;

+ (id)firstPartyWorkoutSnapshotWithCurrentWorkoutSnapshot:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithState:(long long)arg1 activityType:(unsigned long long)arg2 elapsedTime:(double)arg3 snapshotDate:(id)arg4;
- (unsigned long long)activityType;
- (id)description;
- (double)durationForDate:(id)arg1;
- (long long)state;

@end
