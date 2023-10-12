/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDatabaseCorruptionTTRPrompter : NSObject {
    _HKBehavior * _behavior;
    HDDatabaseCorruptionEventStore * _corruptionStore;
    id /* block */  _unitTest_willPresentTTRAlertHandler;
}

@property (nonatomic, copy) id /* block */ unitTest_willPresentTTRAlertHandler;

- (void).cxx_destruct;
- (id)TTRAttemptRecordForProfile:(id)arg1;
- (void)_popAlertWithRadarDescription:(id)arg1;
- (id)init;
- (id)initWithStore:(id)arg1 behavior:(id)arg2;
- (void)promptForEvent:(id)arg1;
- (void)setUnitTest_willPresentTTRAlertHandler:(id /* block */)arg1;
- (bool)shouldAttemptTTRForProfileIdentier:(id)arg1 component:(long long)arg2;
- (id /* block */)unitTest_willPresentTTRAlertHandler;

@end
