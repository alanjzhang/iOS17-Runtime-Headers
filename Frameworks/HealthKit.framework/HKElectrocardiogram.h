/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKElectrocardiogram : HKSample <_HKBinarySample> {
    HKQuantity * _averageHeartRate;
    unsigned long long  _privateClassification;
    struct Electrocardiogram { 
        int (**_vptr$Base)(); 
        double _frequency; 
        struct PtrVector<binarysample::ElectrocardiogramLead> { 
            struct vector<std::unique_ptr<binarysample::ElectrocardiogramLead>, std::allocator<std::unique_ptr<binarysample::ElectrocardiogramLead>>> { 
                void *__begin_; 
                void *__end_; 
                struct __compressed_pair<std::unique_ptr<binarysample::ElectrocardiogramLead> *, std::allocator<std::unique_ptr<binarysample::ElectrocardiogramLead>>> { 
                    void *__value_; 
                } __end_cap_; 
            } _v; 
        } _leads; 
        struct { 
            unsigned int frequency : 1; 
        } _has; 
    }  _reading;
    long long  _symptomsStatus;
}

@property (getter=_algorithmVersion, nonatomic, readonly) NSNumber *algorithmVersion;
@property (nonatomic, readonly, copy) HKQuantity *averageHeartRate;
@property (nonatomic, readonly) long long classification;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *leadNames;
@property (getter=_localizedSymptoms, nonatomic, readonly) NSArray *localizedSymptoms;
@property (nonatomic, readonly) long long numberOfVoltageMeasurements;
@property (nonatomic, readonly) unsigned long long privateClassification;
@property (getter=privateSymptoms, nonatomic, readonly) unsigned long long privateSymptoms;
@property (nonatomic, readonly, copy) HKQuantity *samplingFrequency;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long symptomsStatus;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_electrocardiogramWithStartDate:(id)arg1 device:(id)arg2 metadata:(id)arg3;
+ (bool)_isConcreteObjectClass;
+ (id)_localizedClassification:(unsigned long long)arg1 withActiveAlgorithmVersion:(long long)arg2;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_algorithmVersion;
- (unsigned long long)_classification;
- (void)_enumerateDataForLead:(long long)arg1 block:(id /* block */)arg2;
- (id)_localizedClassificationWithActiveAlgorithmVersion:(long long)arg1;
- (id)_localizedSymptoms;
- (void)_setAverageHeartRate:(id)arg1;
- (void)_setPayload:(id)arg1;
- (void)_setPrivateClassification:(unsigned long long)arg1;
- (void)_setSymptomsStatus:(long long)arg1;
- (unsigned long long)_symptoms;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x1; unsigned int x2; })arg1;
- (id)averageHeartRate;
- (long long)classification;
- (void)copyMeasurementFlagsForLead:(long long)arg1 count:(unsigned long long)arg2 target:(char *)arg3;
- (void)copyMeasurementValuesForLead:(long long)arg1 count:(unsigned long long)arg2 target:(float*)arg3;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateDataForLead:(long long)arg1 block:(id /* block */)arg2;
- (id)frequency;
- (id)initWithCoder:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (id)leadNames;
- (long long)numberOfValues;
- (long long)numberOfVoltageMeasurements;
- (id)payload;
- (bool)prepareForSaving:(id*)arg1;
- (unsigned long long)privateClassification;
- (unsigned long long)privateSymptoms;
- (id)samplingFrequency;
- (void)setReading:(struct Electrocardiogram { int (**x1)(); double x2; struct PtrVector<binarysample::ElectrocardiogramLead> { struct vector<std::unique_ptr<binarysample::ElectrocardiogramLead>, std::allocator<std::unique_ptr<binarysample::ElectrocardiogramLead>>> { void *x_1_2_1; void *x_1_2_2; struct __compressed_pair<std::unique_ptr<binarysample::ElectrocardiogramLead> *, std::allocator<std::unique_ptr<binarysample::ElectrocardiogramLead>>> { void *x_3_3_1; } x_1_2_3; } x_3_1_1; } x3; struct { unsigned int x_4_1_1 : 1; } x4; })arg1;
- (long long)symptoms;
- (long long)symptomsStatus;
- (id)voltageMeasurementEnumerator;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

// HKElectrocardiogram (HDCodingSupport)

+ (id)createWithCodable:(id)arg1;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;

// HKElectrocardiogram (HDExtensions)

+ (Class)hd_dataEntityClass;

@end