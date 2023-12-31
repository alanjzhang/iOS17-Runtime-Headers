/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVAudioOutputSettings : AVOutputSettings

@property (nonatomic, readonly) NSDictionary *audioSettingsDictionary;

+ (id)_audioOutputSettingsWithAudioSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2;
+ (id)_outputSettingsWithOutputSettingsDictionary:(id)arg1 mediaType:(id)arg2 exceptionReason:(id*)arg3;
+ (id)audioConverterPropertiesForAudioSettingsDictionary:(id)arg1;
+ (id)audioOutputSettingsWithAudioSettingsDictionary:(id)arg1;
+ (id)audioOutputSettingsWithTrustedAudioSettingsDictionary:(id)arg1;
+ (id)defaultAudioOutputSettings;
+ (id)registeredOutputSettingsClasses;

- (id)audioSettingsDictionary;
- (id)compatibleMediaTypes;
- (id)initWithAudioSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2;
- (bool)validateUsingOutputSettingsValidator:(id)arg1 reason:(id*)arg2;

@end
