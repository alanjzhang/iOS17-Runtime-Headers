/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWeatherAirQualityObject : SADomainObject

@property (nonatomic) long long airQualityIndex;
@property (nonatomic, retain) SAWeatherLocation *airQualityLocation;
@property (nonatomic, copy) NSString *airQualityRatingCategory;
@property (nonatomic, copy) NSString *localizedCategoryName;
@property (nonatomic, copy) NSArray *pollutants;

+ (id)airQualityObject;
+ (id)airQualityObjectWithDictionary:(id)arg1 context:(id)arg2;

- (long long)airQualityIndex;
- (id)airQualityLocation;
- (id)airQualityRatingCategory;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)localizedCategoryName;
- (id)pollutants;
- (void)setAirQualityIndex:(long long)arg1;
- (void)setAirQualityLocation:(id)arg1;
- (void)setAirQualityRatingCategory:(id)arg1;
- (void)setLocalizedCategoryName:(id)arg1;
- (void)setPollutants:(id)arg1;

@end