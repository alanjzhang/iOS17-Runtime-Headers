/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWeatherPollutant : SADomainObject

@property (nonatomic, copy) NSNumber *amount;
@property (nonatomic, copy) NSString *localizedDescription;
@property (nonatomic, copy) NSString *name;

+ (id)pollutant;
+ (id)pollutantWithDictionary:(id)arg1 context:(id)arg2;

- (id)amount;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)localizedDescription;
- (id)name;
- (void)setAmount:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setName:(id)arg1;

@end
