/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVAssetVariantAudioRenditionSpecificAttributes : NSObject {
    FigAlternateObjC * _figAlternateObjC;
    AVMediaSelectionOption * _mediaSelectionOption;
}

@property (getter=isBinaural, nonatomic, readonly) bool binaural;
@property (nonatomic, readonly) long long channelCount;
@property (getter=isDownmix, nonatomic, readonly) bool downmix;
@property (getter=isImmersive, nonatomic, readonly) bool immersive;

- (long long)channelCount;
- (void)dealloc;
- (bool)isBinaural;
- (bool)isDownmix;
- (bool)isImmersive;
- (double)sampleRate;

// AVAssetVariantAudioRenditionSpecificAttributes (Internal)

- (id)initWithFigAlternateObjC:(id)arg1 mediaSelectionOption:(id)arg2;

@end
