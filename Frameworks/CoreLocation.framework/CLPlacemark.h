/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLPlacemark : NSObject <INCodableAttributeRelationComparing, INJSONSerializable, NSCopying, NSSecureCoding> {
    CLPlacemarkInternal * _internal;
}

@property (nonatomic, readonly, copy) NSString *ISOcountryCode;
@property (nonatomic, readonly, copy) NSDictionary *addressDictionary;
@property (nonatomic, readonly, copy) NSString *administrativeArea;
@property (nonatomic, readonly, copy) NSArray *areasOfInterest;
@property (nonatomic, readonly, copy) NSString *country;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *inlandWater;
@property (nonatomic, readonly, copy) NSString *locality;
@property (nonatomic, readonly, copy) CLLocation *location;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *ocean;
@property (nonatomic, readonly) CNPostalAddress *postalAddress;
@property (nonatomic, readonly, copy) NSString *postalCode;
@property (nonatomic, readonly, copy) CLRegion *region;
@property (nonatomic, readonly, copy) NSString *subAdministrativeArea;
@property (nonatomic, readonly, copy) NSString *subLocality;
@property (nonatomic, readonly, copy) NSString *subThoroughfare;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *thoroughfare;
@property (nonatomic, readonly, copy) NSTimeZone *timeZone;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreLocation.framework/CoreLocation

+ (unsigned long long)_cLMapItemSourceFromRLMapItemSource:(unsigned long long)arg1;
+ (id)placemarkWithGEOMapItem:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)ISOcountryCode;
- (id)_geoMapItem;
- (id)_geoMapItemHandle;
- (id)_initWithGeoMapItem:(id)arg1;
- (id)_initWithRTMapItem:(id)arg1 location:(id)arg2;
- (id)addressDictionary;
- (id)administrativeArea;
- (id)areasOfInterest;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)country;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchFormattedAddress:(id /* block */)arg1 queue:(id)arg2;
- (id)formattedAddressLines;
- (id)fullThoroughfare;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(id)arg1 addressDictionary:(id)arg2 region:(id)arg3 areasOfInterest:(id)arg4;
- (id)initWithLocation:(id)arg1 addressDictionary:(id)arg2 region:(id)arg3 areasOfInterest:(id)arg4 mapItemSource:(unsigned long long)arg5 geoMapItemHandle:(id)arg6 meCardAddress:(id)arg7;
- (id)initWithPlacemark:(id)arg1;
- (id)inlandWater;
- (id)locality;
- (id)location;
- (id)mecardAddress;
- (id)name;
- (id)ocean;
- (id)postalAddress;
- (id)postalCode;
- (id)region;
- (id)subAdministrativeArea;
- (id)subLocality;
- (id)subThoroughfare;
- (id)thoroughfare;
- (id)timeZone;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Intents.framework/Intents

// CLPlacemark (INCodableAttributeRelationComparing)

- (bool)_intents_compareValue:(id)arg1 relation:(unsigned long long)arg2;

// CLPlacemark (INIntentsAdditions)

+ (id)placemarkWithLocation:(id)arg1 name:(id)arg2 postalAddress:(id)arg3;

// CLPlacemark (INIntentsAdditionsDeprecated)

- (id)initIntentPlacemarkWithLocation:(id)arg1 addressDictionary:(id)arg2;

// CLPlacemark (INJSONSerialization)

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;

- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;

// CLPlacemark (Intents)

- (id)_intents_indexingRepresentation;

// CLPlacemark (Readable)

- (id)_intents_defaultReadableDescription;
- (id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppPredictionFoundation.framework/AppPredictionFoundation

// CLPlacemark (FuzzyMatch)

- (bool)atx_isFuzzyMatch:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals

// CLPlacemark (schema)

+ (id)fromSchema:(id)arg1;

- (id)schema;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait

// CLPlacemark (PPMLHelpers)

- (double)pp_addressSpecificity;
- (id)pp_featureNames;
- (id)pp_featureValueForName:(id)arg1;

@end
