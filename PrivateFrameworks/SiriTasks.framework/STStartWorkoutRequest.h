/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

@interface STStartWorkoutRequest : AFSiriRequest {
    long long  _activityType;
    HKQuantity * _goal;
    long long  _goalType;
    bool  _isOpenGoal;
    long long  _locationType;
    bool  _skipActivitySetup;
    long long  _userMode;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithType:(long long)arg1 location:(long long)arg2 goal:(id)arg3 goalType:(long long)arg4 userMode:(long long)arg5 isOpenGoal:(bool)arg6 skipActivitySetup:(bool)arg7;
- (long long)activityType;
- (id)createResponse;
- (void)encodeWithCoder:(id)arg1;
- (long long)goalType;
- (id)initWithCoder:(id)arg1;
- (bool)isOpenGoal;
- (long long)locationType;
- (bool)skipActivitySetup;
- (long long)userMode;
- (id)workoutGoal;

@end
