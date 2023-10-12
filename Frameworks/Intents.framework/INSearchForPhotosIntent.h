/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Intents.framework/Intents
 */

@interface INSearchForPhotosIntent : INIntent <INSearchForPhotosIntentExport>

@property (nonatomic, copy) NSArray *activities;
@property (nonatomic, readonly) long long activitiesOperator;
@property (nonatomic, readonly, copy) NSString *albumName;
@property (nonatomic, readonly, copy) INDateComponentsRange *dateCreated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *events;
@property (nonatomic, readonly) long long eventsOperator;
@property (nonatomic, readonly) unsigned long long excludedAttributes;
@property (nonatomic, copy) NSArray *geographicalFeatures;
@property (nonatomic, readonly) long long geographicalFeaturesOperator;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long includedAttributes;
@property (nonatomic, readonly, copy) CLPlacemark *locationCreated;
@property (nonatomic, copy) NSString *memoryName;
@property (nonatomic, readonly, copy) NSArray *peopleInPhoto;
@property (nonatomic, readonly) long long peopleInPhotoOperator;
@property (nonatomic, copy) NSArray *places;
@property (nonatomic, readonly) long long placesOperator;
@property (nonatomic, readonly, copy) NSArray *searchTerms;
@property (nonatomic, readonly) long long searchTermsOperator;
@property (readonly) Class superclass;

- (id)_categoryVerb;
- (id)_dictionaryRepresentation;
- (long long)_intentCategory;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)activities;
- (long long)activitiesOperator;
- (id)albumName;
- (id)dateCreated;
- (id)domain;
- (id)events;
- (long long)eventsOperator;
- (unsigned long long)excludedAttributes;
- (id)geographicalFeatures;
- (long long)geographicalFeaturesOperator;
- (unsigned long long)includedAttributes;
- (id)initWithDateCreated:(id)arg1 locationCreated:(id)arg2 albumName:(id)arg3 searchTerms:(id)arg4 includedAttributes:(unsigned long long)arg5 excludedAttributes:(unsigned long long)arg6 peopleInPhoto:(id)arg7;
- (id)locationCreated;
- (id)memoryName;
- (id)parametersByName;
- (id)peopleInPhoto;
- (long long)peopleInPhotoOperator;
- (id)places;
- (long long)placesOperator;
- (id)searchTerms;
- (long long)searchTermsOperator;
- (void)setActivities:(id)arg1;
- (void)setAlbumName:(id)arg1;
- (void)setDateCreated:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setEvents:(id)arg1;
- (void)setExcludedAttributes:(unsigned long long)arg1;
- (void)setGeographicalFeatures:(id)arg1;
- (void)setIncludedAttributes:(unsigned long long)arg1;
- (void)setLocationCreated:(id)arg1;
- (void)setMemoryName:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setPeopleInPhoto:(id)arg1;
- (void)setPlaces:(id)arg1;
- (void)setSearchTerms:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end
