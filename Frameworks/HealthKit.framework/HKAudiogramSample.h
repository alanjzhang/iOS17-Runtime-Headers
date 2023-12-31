/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKAudiogramSample : HKSample <_HKBinarySample> {
    NSData * _encodedSensitivityPoints;
    HKHearingLevelSummary * _hearingLevelSummary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSData *encodedSensitivityPoints;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) HKHearingLevelSummary *hearingLevelSummary;
@property (readonly, copy) NSArray *sensitivityPoints;
@property (readonly) Class superclass;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_decodeSensitivityData:(id)arg1;
+ (id)_encodeSensitivityPoints:(id)arg1;
+ (bool)_isConcreteObjectClass;
+ (double)_randomDecibelValueInRangeFromStart:(double)arg1 end:(double)arg2;
+ (id)_randomSensitivityValueForClassification:(unsigned long long)arg1;
+ (id)audiogramSampleWithSensitivityPoints:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 device:(id)arg4 metadata:(id)arg5;
+ (id)audiogramSampleWithSensitivityPoints:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 metadata:(id)arg4;
+ (id)randomAudiogramSampleWithClassification:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 device:(id)arg4 metadata:(id)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setPayload:(id)arg1;
- (id)_validateSensitivityPointsOrderedAscending;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x1; unsigned int x2; })arg1;
- (id)averageLeftEarSensitivity;
- (id)averageRightEarSensitivity;
- (unsigned long long)diagnostic;
- (void)encodeWithCoder:(id)arg1;
- (id)encodedSensitivityPoints;
- (id)hearingLevelSummary;
- (id)initWithCoder:(id)arg1;
- (id)maximumSensitivity;
- (id)minimumSensitivity;
- (id)payload;
- (id)sensitivityPoints;
- (void)setEncodedSensitivityPoints:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

// HKAudiogramSample (HDCodingSupport)

- (id)codableRepresentationForSync;

// HKAudiogramSample (HDExtensions)

+ (Class)hd_dataEntityClass;

@end
