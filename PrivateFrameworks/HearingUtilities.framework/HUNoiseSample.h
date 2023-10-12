/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
 */

@interface HUNoiseSample : NSObject {
    NSDate * _sampleDate;
    float  _sampleDuration;
    float  _splValue;
}

@property (nonatomic, retain) NSDate *sampleDate;
@property (nonatomic) float sampleDuration;
@property (nonatomic) float splValue;

- (void).cxx_destruct;
- (id)initWithSampleDate:(id)arg1 splValue:(float)arg2 andDuration:(float)arg3;
- (id)sampleDate;
- (float)sampleDuration;
- (void)setSampleDate:(id)arg1;
- (void)setSampleDuration:(float)arg1;
- (void)setSplValue:(float)arg1;
- (float)splValue;

@end
