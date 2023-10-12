/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKMedicationDoseEventType : HKSampleType <_HKStatisticsSampleTypeConfigurationProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)allTypes;
+ (id)medicationDoseEventType;

// HKMedicationDoseEventType (_HKStatisticsSampleTypeConfigurationProviding)

- (long long)aggregationStyleForStatistics;
- (id)canonicalUnitForStatistics;
- (bool)supportsStatisticOptions:(unsigned long long)arg1;
- (id)underlyingSampleType;
- (void)validateUnitForStatistic:(id)arg1;

@end
