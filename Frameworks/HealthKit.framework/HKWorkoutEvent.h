/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKWorkoutEvent : NSObject <HDCoding, HKPersistableWorkoutEvent, NSCopying, NSSecureCoding> {
    NSDateInterval * _dateInterval;
    NSDictionary * _metadata;
    long long  _type;
}

@property (readonly, copy) NSDate *date;
@property (readonly, copy) NSDateInterval *dateInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSDictionary *metadata;
@property (nonatomic, readonly, copy) NSUUID *sessionUUID;
@property (readonly) Class superclass;
@property (readonly) long long type;
@property (nonatomic, readonly) long long workoutEventType;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_newWorkoutEventWithType:(long long)arg1 dateInterval:(id)arg2 metadata:(id)arg3;
+ (id)_unvalidatedWorkoutEventWithType:(long long)arg1 dateInterval:(id)arg2 metadata:(id)arg3;
+ (id)_workoutEventWithInternalEvent:(id)arg1;
+ (id)_workoutEventWithType:(long long)arg1 date:(id)arg2 metadata:(id)arg3;
+ (id)_workoutEventWithType:(long long)arg1 dateInterval:(id)arg2 metadata:(id)arg3;
+ (bool)supportsSecureCoding;
+ (id)workoutEventWithType:(long long)arg1 date:(id)arg2;
+ (id)workoutEventWithType:(long long)arg1 date:(id)arg2 metadata:(id)arg3;
+ (id)workoutEventWithType:(long long)arg1 dateInterval:(id)arg2 metadata:(id)arg3;

- (void).cxx_destruct;
- (void)_assertPropertiesValid;
- (id)_init;
- (void)_setWorkoutEventMetadata:(id)arg1;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x1; unsigned int x2; })arg1;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)dateInterval;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithWorkoutEventType:(long long)arg1 sessionUUID:(id)arg2 dateInterval:(id)arg3 metadata:(id)arg4 error:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)metadata;
- (id)sessionUUID;
- (long long)type;
- (long long)workoutEventType;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

// HKWorkoutEvent (HDCodingSupport)

+ (id)createWithCodable:(id)arg1;

- (id)codableRepresentationForSync;

@end
