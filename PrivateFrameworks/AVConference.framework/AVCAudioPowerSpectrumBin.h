/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface AVCAudioPowerSpectrumBin : NSObject <NSSecureCoding> {
    float  _maxFrequency;
    float  _minFrequency;
    float  _powerLevel;
}

@property (nonatomic, readonly) float maxFrequency;
@property (nonatomic, readonly) float minFrequency;
@property (nonatomic, readonly) float powerLevel;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (float)maxFrequency;
- (float)minFrequency;
- (float)powerLevel;

// AVCAudioPowerSpectrumBin (VCPrivateAccess)

- (void)assign:(const struct _VCAudioPowerSpectrumEntry { struct _VCRange { float x_1_1_1; float x_1_1_2; } x1; float x2; }*)arg1;

@end
