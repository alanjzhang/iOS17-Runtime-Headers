/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKRemoteFeatureAvailabilityWatchOSVersionGreaterThanRule : HKRemoteFeatureAvailabilityBaseRule <HKRemoteFeatureAvailabilityRule> {
    struct { 
        long long majorVersion; 
        long long minorVersion; 
        long long patchVersion; 
    }  _targetVersion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) struct { long long x1; long long x2; long long x3; } targetVersion;

+ (id)ruleIdentifier;

- (bool)evaluate;
- (void)processUserInfo:(id)arg1;
- (void)setTargetVersion:(struct { long long x1; long long x2; long long x3; })arg1;
- (struct { long long x1; long long x2; long long x3; })targetVersion;

@end
