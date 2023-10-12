/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSkiingWorkoutEventCollector : HDWorkoutEventCollector {
    CMSkiData * _referenceSkiData;
    CMSkiTracker * _skiTracker;
    NSObject<OS_dispatch_queue> * _workoutEventQueue;
}

+ (bool)isAvailableInCurrentHardware;
+ (bool)supportsWorkoutActivityType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)fakeActivityDetection:(id)arg1 workoutActivity:(id)arg2;
- (id)initWithProfile:(id)arg1 delegate:(id)arg2;
- (void)requestPendingEventsThroughDate:(id)arg1 completion:(id /* block */)arg2;
- (void)startWithSessionId:(id)arg1;
- (void)stop;
- (void)unitTest_setCMWorkoutManager:(id)arg1;

@end
