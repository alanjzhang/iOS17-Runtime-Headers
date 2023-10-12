/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSAudioSessionMonitor : CSEventMonitor <CSAudioSessionEventProvidingDelegate> {
    unsigned long long  _audioSessionState;
}

@property (getter=getAudioSessionState, nonatomic) unsigned long long audioSessionState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (void)audioSessionEventProvidingDidSetAudioSessionActive:(bool)arg1;
- (void)audioSessionEventProvidingWillSetAudioSessionActive:(bool)arg1;
- (unsigned long long)getAudioSessionState;
- (id)init;
- (id)initWithCrashMonitor:(id)arg1;
- (void)setAudioSessionState:(unsigned long long)arg1;

@end
