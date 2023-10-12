/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSSpeechInternalSettings : NSObject {
    NSUserDefaults * _internalDefaults;
}

@property (nonatomic) bool allowAnyAssetSubscriber;
@property (nonatomic) float defaultPitch;
@property (nonatomic) float defaultRate;
@property (nonatomic) bool defaultToNonDiscretionaryDownloads;
@property (nonatomic) float defaultVolume;
@property (nonatomic) float deviceTTSWaitTime;
@property (nonatomic) bool disableAssetCleaning;
@property (nonatomic) bool disableAssetUpdate;
@property (nonatomic) bool disableCache;
@property (nonatomic) bool disableDeviceNeuralTTS;
@property (nonatomic) bool disableDeviceRacing;
@property (nonatomic) bool disableInlineStreamTTS;
@property (nonatomic, readonly) bool disableMobileAssetURLReset;
@property (nonatomic) bool disableOspreyStreaming;
@property (nonatomic) bool disableServerTTS;
@property (nonatomic) bool enableAudioDump;
@property (nonatomic) bool enableLocalVoices;
@property (nonatomic) bool forceServerTTS;
@property (nonatomic) bool ignorePowerAndThermalState;
@property (nonatomic, retain) NSUserDefaults *internalDefaults;
@property (nonatomic) bool logSensitiveText;
@property (nonatomic, copy) NSString *ospreyEndpointURL;
@property (nonatomic) float serverTTSTimeout;
@property (nonatomic) bool simulateNetworkStall;
@property (nonatomic) float streamBufferDuration;
@property (nonatomic) bool useBetaVoice;
@property (nonatomic, readonly) bool useSSMLInput;
@property (nonatomic) bool whisper;

+ (id)standardInstance;

- (void).cxx_destruct;
- (bool)allowAnyAssetSubscriber;
- (float)defaultPitch;
- (float)defaultRate;
- (bool)defaultToNonDiscretionaryDownloads;
- (float)defaultVolume;
- (float)deviceTTSWaitTime;
- (bool)disableAssetCleaning;
- (bool)disableAssetUpdate;
- (bool)disableCache;
- (bool)disableDeviceNeuralTTS;
- (bool)disableDeviceRacing;
- (bool)disableInlineStreamTTS;
- (bool)disableMobileAssetURLReset;
- (bool)disableOspreyStreaming;
- (bool)disableServerTTS;
- (bool)enableAudioDump;
- (bool)enableLocalVoices;
- (bool)forceServerTTS;
- (bool)ignorePowerAndThermalState;
- (id)init;
- (id)internalDefaults;
- (bool)logSensitiveText;
- (id)ospreyEndpointURL;
- (float)serverTTSTimeout;
- (void)setAllowAnyAssetSubscriber:(bool)arg1;
- (void)setDefaultPitch:(float)arg1;
- (void)setDefaultRate:(float)arg1;
- (void)setDefaultToNonDiscretionaryDownloads:(bool)arg1;
- (void)setDefaultVolume:(float)arg1;
- (void)setDeviceTTSWaitTime:(float)arg1;
- (void)setDisableAssetCleaning:(bool)arg1;
- (void)setDisableAssetUpdate:(bool)arg1;
- (void)setDisableCache:(bool)arg1;
- (void)setDisableDeviceNeuralTTS:(bool)arg1;
- (void)setDisableDeviceRacing:(bool)arg1;
- (void)setDisableInlineStreamTTS:(bool)arg1;
- (void)setDisableOspreyStreaming:(bool)arg1;
- (void)setDisableServerTTS:(bool)arg1;
- (void)setEnableAudioDump:(bool)arg1;
- (void)setEnableLocalVoices:(bool)arg1;
- (void)setForceServerTTS:(bool)arg1;
- (void)setIgnorePowerAndThermalState:(bool)arg1;
- (void)setInternalDefaults:(id)arg1;
- (void)setLogSensitiveText:(bool)arg1;
- (void)setOspreyEndpointURL:(id)arg1;
- (void)setServerTTSTimeout:(float)arg1;
- (void)setSimulateNetworkStall:(bool)arg1;
- (void)setStreamBufferDuration:(float)arg1;
- (void)setUseBetaVoice:(bool)arg1;
- (void)setWhisper:(bool)arg1;
- (bool)simulateNetworkStall;
- (float)streamBufferDuration;
- (bool)useBetaVoice;
- (bool)useSSMLInput;
- (bool)whisper;

@end
