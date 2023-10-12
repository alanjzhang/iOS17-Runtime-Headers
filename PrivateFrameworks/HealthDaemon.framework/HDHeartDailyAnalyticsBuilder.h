/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDHeartDailyAnalyticsBuilder : NSObject {
    bool  _areHealthNotificationsAuthorized;
    NSCalendar * _calendar;
    NSDateInterval * _dateInterval;
    HDHeartDailyAnalytics * _heartDailyAnalytics;
    NSUserDefaults * _heartRateNotificationsUserDefaults;
    NSUserDefaults * _heartRhythmUserDefaults;
    bool  _isHealthDataSubmissionAllowed;
    NRPairedDeviceRegistry * _pairedDeviceRegistry;
    HDProfile * _profile;
    NSUserDefaults * _remoteFeatureAvailabilityUserDefaults;
}

- (void).cxx_destruct;
- (id)heartDailyAnalyticsWithError:(id*)arg1;
- (id)initWithProfile:(id)arg1 calendar:(id)arg2 dateInterval:(id)arg3 heartRateNotificationsUserDefaults:(id)arg4 heartRhythmUserDefaults:(id)arg5 remoteFeatureAvailabilityUserDefaults:(id)arg6 pairedDeviceRegistry:(id)arg7 areHealthNotificationsAuthorized:(bool)arg8 isHealthDataSubmissionAllowed:(bool)arg9;

@end
