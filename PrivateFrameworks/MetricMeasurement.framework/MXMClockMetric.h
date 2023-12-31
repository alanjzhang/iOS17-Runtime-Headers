/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
 */

@interface MXMClockMetric : MXMMetric {
    MXMSampleTag * _tag;
}

@property (nonatomic, readonly) MXMInstrument *instrument;

+ (id)absoluteTime;
+ (id)allTime;
+ (id)continuousTime;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_shouldConstructProbe;
- (id)_unit;
- (id)_unitWithTag:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)harvestData:(id*)arg1 error:(id*)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithTag:(id)arg1;

@end
