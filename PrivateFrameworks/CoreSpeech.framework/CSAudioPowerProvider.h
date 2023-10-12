/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSAudioPowerProvider : NSObject <CSAudioPowerService> {
    float  _cachedAvgPower;
    float  _cachedPeakPower;
    CSAudioPowerMeter * _powerMeter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)getAudioPowerUpdateWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)processAudioChunk:(id)arg1;
- (void)processAudioChunkForTV:(id)arg1;

@end
