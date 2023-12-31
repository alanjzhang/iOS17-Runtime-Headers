/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDOntologyConfigurationProvider : NSObject {
    HDHealthOntologyConfiguration * _ontologyConfiguration;
    HDProfile * _profile;
    HDHealthOntologyConfiguration * _unitTesting_ontologyConfigurationOverride;
}

@property (nonatomic, readonly, copy) NSSet *allSupportedCountryCodes;
@property (nonatomic, readonly, copy) NSSet *improveHealthRecordsGatedAnalyticsEnabledCountryCodes;
@property (nonatomic, readonly, copy) NSSet *optInDataCollectionEnabledCountryCodes;
@property (nonatomic, readonly) HDProfile *profile;
@property (nonatomic, retain) HDHealthOntologyConfiguration *unitTesting_ontologyConfigurationOverride;

- (void).cxx_destruct;
- (id)allSupportedCountryCodes;
- (id)improveHealthRecordsGatedAnalyticsEnabledCountryCodes;
- (id)init;
- (bool)isCountryCodeSupported:(id)arg1;
- (bool)isCountrySupported:(id)arg1;
- (id)ontologyConfigurationForCountryCode:(id)arg1;
- (id)optInDataCollectionEnabledCountryCodes;
- (id)profile;
- (void)setUnitTesting_ontologyConfigurationOverride:(id)arg1;
- (id)unitTesting_ontologyConfigurationOverride;

@end
