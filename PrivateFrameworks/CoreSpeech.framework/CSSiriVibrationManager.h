/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSSiriVibrationManager : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    long long  _ringVibrationState;
    long long  _silentVibrationState;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_fetchRingVibrationValue;
- (void)_fetchSilentVibrationValue;
- (bool)_ringVibrationValue;
- (bool)_silentVibrationValue;
- (void)dealloc;
- (void)handleRingVibrationValueChange;
- (void)handleSilentVibrationValueChange;
- (id)init;
- (bool)vibratesForDeviceRingerSwitchState:(long long)arg1;

@end
