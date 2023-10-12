/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKFeatureAvailabilityRequirementSatisfactionOverrides : NSObject {
    NSString * _featureIdentifier;
    NSUserDefaults * _userDefaults;
}

@property (nonatomic, readonly, copy) NSString *featureIdentifier;
@property (nonatomic, readonly) NSUserDefaults *userDefaults;

- (void).cxx_destruct;
- (id)featureIdentifier;
- (id)initWithFeatureIdentifier:(id)arg1;
- (id)initWithUserDefaults:(id)arg1 featureIdentifier:(id)arg2;
- (id)overriddenRequirementIdentifiers;
- (id)overriddenSatisfactionOfRequirementWithIdentifier:(id)arg1;
- (void)overrideSatisfactionOfRequirementWithIdentifier:(id)arg1 isSatisfied:(id)arg2;
- (void)resetAllRequirementSatisfactionOverrides;
- (id)userDefaults;

@end
