/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKFeatureAvailabilityRequirementCountryCodeIsPresent : HKFeatureAvailabilityOnboardingEligibilityRequirement <HKFeatureAvailabilityRequirement>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *requirementDescription;
@property (readonly) Class superclass;

+ (id)requirementIdentifier;

- (id)isSatisfiedWithOnboardingEligibility:(id)arg1 error:(id*)arg2;
- (id)requirementDescription;

@end
