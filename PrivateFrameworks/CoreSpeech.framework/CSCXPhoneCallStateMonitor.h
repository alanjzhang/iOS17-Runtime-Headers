/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSCXPhoneCallStateMonitor : CSPhoneCallStateMonitor

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (bool)firstPartyCall;
- (id)init;
- (unsigned long long)phoneCallState;

@end
