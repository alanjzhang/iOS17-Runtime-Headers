/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGLocation : SGObject <NSCopying, NSSecureCoding, SGEventLocationForGeocode> {
    double  _accuracy;
    NSString * _address;
    NSString * _airportCode;
    NSData * _handle;
    NSString * _label;
    double  _latitude;
    unsigned long long  _locationType;
    double  _longitude;
    double  _quality;
}

@property (nonatomic, readonly) double accuracy;
@property (nonatomic, readonly) NSString *address;
@property (nonatomic, readonly) NSString *airportCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isGeocoded, nonatomic, readonly) bool geocoded;
@property (nonatomic, readonly) NSData *handle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) unsigned long long locationType;
@property (nonatomic, readonly) double longitude;
@property (nonatomic, readonly) double quality;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)accuracy;
- (id)address;
- (id)airportCode;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)geocodeAccuracy;
- (id)geocodeAddress;
- (id)geocodeAirportCode;
- (id)geocodeHandle;
- (bool)geocodeIsEnd;
- (bool)geocodeIsStart;
- (id)geocodeLabel;
- (double)geocodeLatitude;
- (double)geocodeLongitude;
- (id)geocodedLocationWithLabel:(id)arg1 address:(id)arg2 latitude:(double)arg3 longitude:(double)arg4 accuracy:(double)arg5 handle:(id)arg6;
- (id)geocodedLocationWithLatitude:(double)arg1 longitude:(double)arg2 accuracy:(double)arg3 handle:(id)arg4;
- (id)handle;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithId:(id)arg1 origin:(id)arg2 type:(unsigned long long)arg3 label:(id)arg4 address:(id)arg5 airportCode:(id)arg6 accuracy:(double)arg7 quality:(double)arg8;
- (id)initWithId:(id)arg1 origin:(id)arg2 type:(unsigned long long)arg3 label:(id)arg4 address:(id)arg5 airportCode:(id)arg6 latitude:(double)arg7 longitude:(double)arg8 accuracy:(double)arg9 quality:(double)arg10 handle:(id)arg11;
- (id)initWithId:(id)arg1 origin:(id)arg2 type:(unsigned long long)arg3 label:(id)arg4 airportCode:(id)arg5 latitude:(double)arg6 longitude:(double)arg7 accuracy:(double)arg8 quality:(double)arg9;
- (id)initWithLocation:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 accuracy:(double)arg4 handle:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLocation:(id)arg1;
- (bool)isGeocoded;
- (id)label;
- (double)latitude;
- (unsigned long long)locationType;
- (double)longitude;
- (double)quality;

@end
