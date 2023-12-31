/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMeasurement : NSObject <INCodableAttributeRelationComparing, INJSONSerializable, NSCopying, NSSecureCoding> {
    double  _doubleValue;
    NSUnit * _unit;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) double doubleValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSUnit *unit;
@property (nonatomic, retain) NSNumber *wf_preferredValueRounding;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Foundation.framework/Foundation

+ (bool)supportsSecureCoding;

- (id)_performOperation:(long long)arg1 withMeasurement:(id)arg2;
- (bool)canBeConvertedToUnit:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (double)doubleValue;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDoubleValue:(double)arg1 unit:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)measurementByAddingMeasurement:(id)arg1;
- (id)measurementByConvertingToUnit:(id)arg1;
- (id)measurementBySubtractingMeasurement:(id)arg1;
- (id)unit;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/HealthKit.framework/HealthKit

// NSMeasurement (HKQuantity)

- (id)hk_equivalentQuantity;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Intents.framework/Intents

// NSMeasurement (INCodableAttributeRelationComparing)

- (bool)_intents_compareValue:(id)arg1 relation:(unsigned long long)arg2;

// NSMeasurement (INJSONSerialization)

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;

- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;

// NSMeasurement (Readable)

- (id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ContentKit.framework/ContentKit

// NSMeasurement (WFPreferredValueRounding)

- (void)setWf_preferredValueRounding:(id)arg1;
- (id)wf_preferredValueRounding;

// NSMeasurement (WFSerializableContent)

+ (id)objectWithWFSerializedRepresentation:(id)arg1;

- (id)wfSerializedRepresentation;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

// NSMeasurement (GEOExtras)

+ (id)_geo_distanceMeasurementForMeters:(double)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/VirtualGarage.framework/VirtualGarage

// NSMeasurement (VGExtras)

- (long long)compare:(id)arg1;
- (bool)isEqualToMeasurement:(id)arg1;
- (bool)isGreaterThanMeasurement:(id)arg1;
- (bool)isGreaterThanOrEqualToMeasurement:(id)arg1;
- (bool)isLessThanMeasurement:(id)arg1;
- (bool)isLessThanOrEqualToMeasurement:(id)arg1;

@end
