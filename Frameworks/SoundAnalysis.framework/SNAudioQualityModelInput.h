/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

@interface SNAudioQualityModelInput : NSObject <MLFeatureProvider> {
    MLMultiArray * _audioSamples;
}

@property (nonatomic, retain) MLMultiArray *audioSamples;
@property (nonatomic, readonly) NSSet *featureNames;

- (void).cxx_destruct;
- (id)audioSamples;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithAudioSamples:(id)arg1;
- (void)setAudioSamples:(id)arg1;

@end
