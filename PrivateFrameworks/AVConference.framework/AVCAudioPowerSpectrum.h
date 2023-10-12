/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface AVCAudioPowerSpectrum : NSObject <NSSecureCoding> {
    NSMutableArray * _channels;
    float  _maxFrequency;
    float  _minFrequency;
    long long  _sourceType;
}

@property (nonatomic, readonly) NSArray *channels;
@property (nonatomic, readonly) float maxFrequency;
@property (nonatomic, readonly) float minFrequency;
@property (nonatomic, readonly) long long sourceType;

+ (bool)supportsSecureCoding;

- (id)channels;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (float)maxFrequency;
- (float)minFrequency;
- (long long)sourceType;

// AVCAudioPowerSpectrum (VCPrivateAccess)

- (void)applyChannelBins:(struct _VCAudioPowerSpectrumEntry { struct _VCRange { float x_1_1_1; float x_1_1_2; } x1; float x2; }*)arg1 binCount:(unsigned int)arg2 channelID:(unsigned short)arg3;
- (void)checkNumChannels:(unsigned short)arg1;

@end
