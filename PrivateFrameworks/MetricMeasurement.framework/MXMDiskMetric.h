/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
 */

@interface MXMDiskMetric : MXMMetric

@property (nonatomic, readonly, copy) MXMInstrument *instrument;
@property (nonatomic, readonly, copy) NSNumber *processIdentifier;
@property (nonatomic, readonly, copy) NSString *processName;

+ (id)currentProcess;

- (id)_constructProbe;
- (bool)_shouldConstructProbe;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 filter:(id)arg2;
- (id)initWithProcessIdentifier:(int)arg1;
- (id)initWithProcessName:(id)arg1;
- (id)processIdentifier;
- (id)processName;

@end
