/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMOdometer : NSObject <HDCoreMotionDataSource> {
    <CMOdometerDelegate> * _delegate;
    CMOdometerProxy * _odometerProxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CMOdometerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CMOdometerProxy *odometerProxy;
@property (readonly) Class superclass;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreMotion.framework/CoreMotion

// CMOdometer (null)

- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)odometerProxy;
- (void)setDelegate:(id)arg1;
- (void)startCyclingWorkoutDistanceUpdatesWithHandler:(id /* block */)arg1;
- (void)startOdometerUpdatesForActivity:(long long)arg1 withHandler:(id /* block */)arg2;
- (void)stopCyclingWorkoutDistanceUpdates;
- (void)stopOdometerUpdates;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

// CMOdometer (HealthDaemon)

- (void)hd_beginStreamingFromDatum:(id)arg1 handler:(id /* block */)arg2;
- (void)hd_stopStreaming;

@end
