/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKHeartRateSummaryBreatheStatistics : HKHeartRateSummaryStatistics {
    HKHeartRateSummaryReading * _finalReading;
}

@property (setter=_setFinalReading:, nonatomic, retain) HKHeartRateSummaryReading *finalReading;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setFinalReading:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)finalReading;
- (unsigned long long)hash;
- (id)initFromStatistics:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
