/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKQuantitySample : HKSample <HDCoding, HDWorkoutQuantity> {
    HDCodableQuantitySample * _codableQuantitySample;
    long long  _count;
    long long  _freezeState;
    HKQuantity * _quantity;
}

@property (setter=_setCodableQuantitySample:, nonatomic, retain) HDCodableQuantitySample *codableQuantitySample;
@property (readonly) long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_frozen, setter=_setFrozen:, nonatomic) bool frozen;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDateInterval *hdw_dateInterval;
@property (nonatomic, readonly) double hdw_endTimestamp;
@property (nonatomic, readonly) HKQuantity *hdw_quantity;
@property (nonatomic, readonly) HKQuantitySample *hdw_sample;
@property (nonatomic, readonly) double hdw_startTimestamp;
@property (nonatomic, readonly) HKQuantityType *hdw_type;
@property (readonly, copy) HKQuantity *quantity;
@property (readonly, copy) HKQuantityType *quantityType;
@property (readonly) Class superclass;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)_quantitySamplesEnforcingDurationWithType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 device:(id)arg5 metadata:(id)arg6;
+ (id)_unfrozenQuantitySampleWithQuantityType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 device:(id)arg4;
+ (id)quantitySampleWithType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;
+ (id)quantitySampleWithType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 device:(id)arg5 metadata:(id)arg6;
+ (id)quantitySampleWithType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 metadata:(id)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)_compareFreezeStateWithSample:(id)arg1;
- (bool)_frozen;
- (id)_init;
- (void)_setCodableQuantitySample:(id)arg1;
- (void)_setCount:(long long)arg1;
- (void)_setFreezing;
- (void)_setFrozen:(bool)arg1;
- (void)_setQuantity:(id)arg1;
- (bool)_shouldNotifyOnInsert;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x1; unsigned int x2; })arg1;
- (id)_valueDescription;
- (id)codableQuantitySample;
- (long long)count;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)quantity;
- (id)quantityType;

// HKQuantitySample (HK_JSON)

- (id)asJSONObject;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

// HKQuantitySample (HDCodingSupport)

+ (id)createWithCodable:(id)arg1;
+ (id)migrateCodableObject:(id)arg1;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;

// HKQuantitySample (HDExtensions)

+ (Class)hd_dataEntityClass;

// HKQuantitySample (HKDistincableObject)

+ (bool)supportsDistinctByKeyPath:(id)arg1;

- (id)uniqueIdentifierForDistinctByKeyPath:(id)arg1 error:(id*)arg2;

// HKQuantitySample (Workouts)

- (id)hdw_dateInterval;
- (double)hdw_endTimestamp;
- (id)hdw_quantity;
- (id)hdw_sample;
- (double)hdw_startTimestamp;
- (id)hdw_type;

@end
