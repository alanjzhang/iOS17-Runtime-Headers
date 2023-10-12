/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreSpeechFoundation.framework/CoreSpeechFoundation
 */

@interface CSAudioPlayingAppMonitor : CSEventMonitor

+ (id)sharedMonitor;

- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_startObservingAudioPlayingState;
- (void)_startObservingSystemControllerLifecycle;
- (void)_stopMonitoring;
- (void)_systemControllerDied:(id)arg1;
- (void)handleAudioPlayingStateChange:(id)arg1;
- (id)init;
- (id)playingApps;

@end
