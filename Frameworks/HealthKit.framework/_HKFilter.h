/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKFilter : NSObject <NSCopying, NSSecureCoding>

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)filter:(id)arg1 acceptsActivitySummary:(id)arg2;
+ (bool)filter:(id)arg1 acceptsDataObject:(id)arg2;
+ (bool)filter:(id)arg1 acceptsDataObjectWithStartTimestamp:(double)arg2 endTimestamp:(double)arg3 valueInCanonicalUnit:(double)arg4;
+ (bool)supportsSecureCoding;

- (long long)acceptsActivitySummary:(id)arg1;
- (bool)acceptsDataObject:(id)arg1;
- (long long)acceptsDataObjectWithStartTimestamp:(double)arg1 endTimestamp:(double)arg2 valueInCanonicalUnit:(double)arg3;
- (bool)acceptsWorkoutActivity:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

// _HKFilter (HealthDaemon)

- (id)filterIgnoringActivityCacheIndexFilter;
- (id)filterIgnoringPrivateMetadata;
- (id)predicateWithProfile:(id)arg1;

@end
