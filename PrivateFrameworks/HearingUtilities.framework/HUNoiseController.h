/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
 */

@interface HUNoiseController : NSObject {
    AXDispatchTimer * _adamSuspendedTimer;
    NSMutableArray * _attenuationBuffer;
    NSObject<OS_dispatch_queue> * _dataQueue;
    AXDispatchTimer * _edDummyDataTimer;
    float  _fastLeq;
    NSMutableArray * _leqBuffer;
    NSMutableArray * _leqBuffer80Threshold;
    NSMutableArray * _leqBuffer85Threshold;
    NSMutableArray * _leqBuffer90Threshold;
    bool  _measurementEnabled;
    int  _measurementSuspensionNotifyToken;
    bool  _muted;
    bool  _notified;
    bool  _notified80;
    bool  _notified85;
    bool  _notified90;
    float  _sampleDuration;
    float  _slowLeq;
    unsigned long long  _thresholdLevel;
    NSDate * _timeNotified;
    NSDate * _timeNotified80;
    NSDate * _timeNotified85;
    NSDate * _timeNotified90;
    UNUserNotificationCenter * _userNotificationCenter;
}

@property (nonatomic, retain) AXDispatchTimer *adamSuspendedTimer;
@property (nonatomic, retain) NSMutableArray *attenuationBuffer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dataQueue;
@property (nonatomic, retain) AXDispatchTimer *edDummyDataTimer;
@property (nonatomic) float fastLeq;
@property (nonatomic, retain) NSMutableArray *leqBuffer;
@property (nonatomic, retain) NSMutableArray *leqBuffer80Threshold;
@property (nonatomic, retain) NSMutableArray *leqBuffer85Threshold;
@property (nonatomic, retain) NSMutableArray *leqBuffer90Threshold;
@property (getter=isMeasurementEnabled, nonatomic) bool measurementEnabled;
@property (getter=isMuted, nonatomic) bool muted;
@property (getter=isNotified, nonatomic) bool notified;
@property (getter=isNotified80, nonatomic) bool notified80;
@property (getter=isNotified85, nonatomic) bool notified85;
@property (getter=isNotified90, nonatomic) bool notified90;
@property (nonatomic) float sampleDuration;
@property (nonatomic) float slowLeq;
@property (nonatomic) unsigned long long thresholdLevel;
@property (nonatomic, retain) NSDate *timeNotified;
@property (nonatomic, retain) NSDate *timeNotified80;
@property (nonatomic, retain) NSDate *timeNotified85;
@property (nonatomic, retain) NSDate *timeNotified90;
@property (nonatomic, readonly) UNUserNotificationCenter *userNotificationCenter;

+ (bool)deviceSupportsEnvironmentalDosimetry;
+ (id)sharedController;

- (void).cxx_destruct;
- (void)_clearCachedValues;
- (struct { long long x1; long long x2; })_fetchDeviceState;
- (void)_sendUpdateMessageForCurrentValues;
- (id)adamSuspendedTimer;
- (unsigned long long)alertTypeFromLevel:(float)arg1;
- (void)applyAnalyticsNotificationLogicForSPL:(float)arg1 withDuration:(float)arg2;
- (void)applyNotificationLogicForSPL:(float)arg1 withDuration:(float)arg2;
- (id)attenuationBuffer;
- (float)calculateLeqForBuffer:(id)arg1;
- (void)checkToResetAnalyticsNotificationsForSPL:(float)arg1 withDuration:(float)arg2 andBuffer:(id)arg3 forTime:(float)arg4 andThreshold:(long long)arg5;
- (void)checkToResetNotificationsForSPL:(float)arg1 withDuration:(float)arg2 andBuffer:(id)arg3 forTime:(float)arg4;
- (void)checkToSurfaceAnalyticsNotificationForSPL:(float)arg1 withDuration:(float)arg2 andBuffer:(id)arg3 forTime:(float)arg4 andThreshold:(long long)arg5;
- (void)checkToSurfaceNotificationForSPL:(float)arg1 withDuration:(float)arg2 andBuffer:(id)arg3 forTime:(float)arg4;
- (id)dataQueue;
- (id)edDummyDataTimer;
- (float)fastLeq;
- (id)init;
- (bool)isMeasurementEnabled;
- (bool)isMuted;
- (bool)isNotified;
- (bool)isNotified80;
- (bool)isNotified85;
- (bool)isNotified90;
- (bool)isWearingAirpods;
- (id)leqBuffer;
- (id)leqBuffer80Threshold;
- (id)leqBuffer85Threshold;
- (id)leqBuffer90Threshold;
- (void)lowPowerModeChanged:(id)arg1;
- (void)maintainCircularBuffer:(id)arg1 forTime:(float)arg2;
- (void)processMeasurement:(id)arg1 withMetadata:(id)arg2;
- (void)readEnvironmentalDosimetryLevels;
- (id)registerForEnvironmentalDosimetryUpdates:(id)arg1;
- (void)restartADAMTimer;
- (float)sampleDuration;
- (void)setAdamSuspendedTimer:(id)arg1;
- (void)setAttenuationBuffer:(id)arg1;
- (void)setDataQueue:(id)arg1;
- (void)setEdDummyDataTimer:(id)arg1;
- (void)setFastLeq:(float)arg1;
- (void)setLeqBuffer80Threshold:(id)arg1;
- (void)setLeqBuffer85Threshold:(id)arg1;
- (void)setLeqBuffer90Threshold:(id)arg1;
- (void)setLeqBuffer:(id)arg1;
- (void)setMeasurementEnabled:(bool)arg1;
- (void)setMuted:(bool)arg1;
- (void)setNotified80:(bool)arg1;
- (void)setNotified85:(bool)arg1;
- (void)setNotified90:(bool)arg1;
- (void)setNotified:(bool)arg1;
- (void)setSampleDuration:(float)arg1;
- (void)setSlowLeq:(float)arg1;
- (void)setThresholdLevel:(unsigned long long)arg1;
- (void)setTimeNotified80:(id)arg1;
- (void)setTimeNotified85:(id)arg1;
- (void)setTimeNotified90:(id)arg1;
- (void)setTimeNotified:(id)arg1;
- (void)showNotificationForAlertType:(unsigned long long)arg1;
- (float)slowLeq;
- (void)stopReceivingAudioDosageSamples;
- (unsigned long long)thresholdLevel;
- (id)timeNotified;
- (id)timeNotified80;
- (id)timeNotified85;
- (id)timeNotified90;
- (id)userNotificationCenter;

@end
