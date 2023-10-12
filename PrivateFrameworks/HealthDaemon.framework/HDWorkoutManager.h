/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDWorkoutManager : NSObject <HDDevicePowerObserver, HDDiagnosticObject, HDProfileReadyObserver, HDWorkoutDataAccumulatorObserver, HDWorkoutSessionObserver> {
    HDAlertSuppressor * _alertSuppressor;
    HDWatchAppStateMonitor * _appStateMonitor;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _assertionsLock;
    NSMutableDictionary * _backgroundStartAssertions;
    HDWorkoutSessionServer * _currentWorkout;
    HDAssertion * _currentWorkoutAssertion;
    HKObserverSet * _currentWorkoutObservers;
    bool  _hasPerformedPostLaunchSessionRecovery;
    HDLocationManager * _locationManager;
    HDWorkoutLocationSmoother * _locationSmoother;
    HDWorkoutMirroringManager * _mirroringManager;
    HDWorkoutSessionServer * _nextWorkout;
    NSHashTable * _observerTable;
    NSMutableArray * _postLaunchRecoveryBlocks;
    NSObject<OS_dispatch_queue> * _postLaunchRecoveryCallbackQueue;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _sessionCreationHandlers;
    HKObserverSet * _sessionObservers;
    NSMutableDictionary * _sessionServers;
}

@property (nonatomic, readonly) HDAlertSuppressor *alertSuppressor;
@property (nonatomic, readonly) HDWorkoutSessionServer *currentWorkout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isInHeartRateRecovery;
@property (nonatomic, readonly) HDLocationManager *locationManager;
@property (nonatomic, retain) HDWorkoutLocationSmoother *locationSmoother;
@property (nonatomic, readonly) HDWorkoutMirroringManager *mirroringManager;
@property (nonatomic, readonly) HDProfile *profile;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSDictionary *sessionServers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didCreateMirroredSessionServer:(id)arg1;
- (void)_sendStartWorkoutAppResponse:(id /* block */)arg1 error:(id)arg2;
- (void)_takeBackgroundStartAssertionForApplicationIdentifier:(id)arg1;
- (void)addWorkoutEventObserver:(id)arg1;
- (void)addWorkoutSessionObserver:(id)arg1 queue:(id)arg2;
- (id)alertSuppressor;
- (bool)allowBackgroundStartForApplicationIdentifier:(id)arg1;
- (bool)currentActivityRequiresExtendedMode;
- (id)currentWorkout;
- (id)currentWorkoutClient;
- (id)currentWorkoutConfiguration;
- (id)currentWorkoutSessionServer;
- (void)dealloc;
- (void)devicePowerMonitor:(id)arg1 primaryPowerSourceIsCharging:(bool)arg2;
- (id)diagnosticDescription;
- (void)endHeartRateRecovery;
- (bool)finishAllWorkoutsForClient:(id)arg1 error:(id*)arg2;
- (void)generatePauseOrResumeRequestAllowingBackgroundRuntime:(bool)arg1 completion:(id /* block */)arg2;
- (void)getCurrentWorkoutSnapshotWithCompletion:(id /* block */)arg1;
- (bool)hasAnyActiveWorkouts;
- (void)hk_fakeLapEventWithDate:(id)arg1 strokeStyle:(long long)arg2;
- (void)hk_fakeStopEventWithDate:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (bool)isInHeartRateRecovery;
- (id)locationManager;
- (id)locationSmoother;
- (void)mirroredSessionServerWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (id)mirroringManager;
- (id)newBiomeInterface;
- (id)newCMSwimTracker;
- (void)performWhenPostLaunchSessionRecoveryHasCompleted:(id /* block */)arg1;
- (id)profile;
- (void)profileDidBecomeReady:(id)arg1;
- (id)queue;
- (void)receivedStartWorkoutAppRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)recoverWorkoutSessionForClient:(id)arg1 server:(id)arg2 completion:(id /* block */)arg3;
- (id)recoveredWorkoutSessionServerWithIdentifier:(id)arg1 error:(id*)arg2;
- (void)registerCurrentWorkoutObserver:(id)arg1;
- (void)removeWorkoutEventObserver:(id)arg1;
- (void)removeWorkoutSessionObserver:(id)arg1;
- (void)sessionServerFromSessionIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)sessionServerWithConfiguration:(id)arg1 sessionUUID:(id)arg2 clientBundleIdentifier:(id)arg3 taskServer:(id)arg4;
- (id)sessionServers;
- (void)setLocationSmoother:(id)arg1;
- (void)startWatchAppWithWorkoutConfiguration:(id)arg1 client:(id)arg2 completion:(id /* block */)arg3;
- (void)startWatchAppWithWorkoutPlanData:(id)arg1 processIdentifier:(int)arg2 completion:(id /* block */)arg3;
- (void)tearDownMirroredWorkoutSession:(id)arg1;
- (id)unitTest_currentWorkoutSession;
- (void)unitTest_finishAllDetachedWorkoutBuilders;
- (void)unitTest_smoothRoute:(id)arg1 withSmoother:(id)arg2 completion:(id /* block */)arg3;
- (void)unregisterCurrentWorkoutObserver:(id)arg1;
- (void)workoutSession:(id)arg1 didBeginActivity:(id)arg2;
- (void)workoutSession:(id)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3 date:(id)arg4;
- (void)workoutSession:(id)arg1 didEndActivity:(id)arg2;
- (void)workoutSession:(id)arg1 didFailWithError:(id)arg2;
- (void)workoutSession:(id)arg1 didGenerateEvent:(id)arg2;
- (void)workoutSession:(id)arg1 didUpdateControllerStateForRecoveryIdentifier:(id)arg2;
- (void)workoutSession:(id)arg1 didUpdateDataAccumulator:(id)arg2;

// HDWorkoutManager (Platform)

- (void)_receivedStartWorkoutAppRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)_startWatchAppWithWorkoutConfiguration:(id)arg1 client:(id)arg2 completion:(id /* block */)arg3;
- (void)_startWatchAppWithWorkoutPlanData:(id)arg1 processIdentifier:(int)arg2 completion:(id /* block */)arg3;

@end
