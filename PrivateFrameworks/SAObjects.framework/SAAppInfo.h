/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAppInfo : SADomainObject

@property (nonatomic, copy) NSString *adamId;
@property (nonatomic, copy) NSString *appId;
@property (nonatomic, retain) SASyncAppIdentifyingInfo *appIdentifyingInfo;
@property (nonatomic, copy) NSString *appName;
@property (nonatomic, copy) NSDictionary *appNameMap;
@property (nonatomic, copy) NSArray *appNameSynonyms;
@property (nonatomic, copy) NSDictionary *appNameSynonymsMap;
@property (nonatomic, copy) NSString *appVersion;
@property (nonatomic) bool betaApp;
@property (nonatomic, copy) NSString *carPlayAlternativeDisplayName;
@property (nonatomic, copy) NSDictionary *carPlayAlternativeDisplayNameMap;
@property (nonatomic, copy) NSString *containerName;
@property (nonatomic, copy) NSString *displayAppName;
@property (nonatomic, copy) NSDictionary *displayAppNameMap;
@property (nonatomic, retain) SAGlance *glance;
@property (nonatomic) bool hasSiriIntegration;
@property (nonatomic) bool hidden;
@property (nonatomic) bool isMacApp;
@property (nonatomic) bool isNanoApp;
@property (nonatomic, copy) NSNumber *nowPlayingAppWithBrowsableContent;
@property (nonatomic, copy) NSString *providerName;
@property (nonatomic, retain) SASiriSupport *siriSupport;
@property (nonatomic, copy) NSString *spokenName;
@property (nonatomic, copy) NSDictionary *spokenNameMap;
@property (nonatomic, copy) NSString *spotlightName;
@property (nonatomic, copy) NSDictionary *spotlightNameMap;
@property (nonatomic, retain) SAStarkSupport *starkSupport;
@property (nonatomic, copy) NSArray *supportedCommands;
@property (nonatomic, copy) NSArray *supportedSchemes;
@property (nonatomic) bool supportsUniversalSearchSubscription;

+ (id)appInfo;
+ (id)appInfoWithDictionary:(id)arg1 context:(id)arg2;

- (id)adamId;
- (id)appId;
- (id)appIdentifyingInfo;
- (id)appName;
- (id)appNameMap;
- (id)appNameSynonyms;
- (id)appNameSynonymsMap;
- (id)appVersion;
- (bool)betaApp;
- (id)carPlayAlternativeDisplayName;
- (id)carPlayAlternativeDisplayNameMap;
- (id)containerName;
- (id)displayAppName;
- (id)displayAppNameMap;
- (id)encodedClassName;
- (id)glance;
- (id)groupIdentifier;
- (bool)hasSiriIntegration;
- (bool)hidden;
- (bool)isMacApp;
- (bool)isNanoApp;
- (id)nowPlayingAppWithBrowsableContent;
- (id)providerName;
- (void)setAdamId:(id)arg1;
- (void)setAppId:(id)arg1;
- (void)setAppIdentifyingInfo:(id)arg1;
- (void)setAppName:(id)arg1;
- (void)setAppNameMap:(id)arg1;
- (void)setAppNameSynonyms:(id)arg1;
- (void)setAppNameSynonymsMap:(id)arg1;
- (void)setAppVersion:(id)arg1;
- (void)setBetaApp:(bool)arg1;
- (void)setCarPlayAlternativeDisplayName:(id)arg1;
- (void)setCarPlayAlternativeDisplayNameMap:(id)arg1;
- (void)setContainerName:(id)arg1;
- (void)setDisplayAppName:(id)arg1;
- (void)setDisplayAppNameMap:(id)arg1;
- (void)setGlance:(id)arg1;
- (void)setHasSiriIntegration:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setIsMacApp:(bool)arg1;
- (void)setIsNanoApp:(bool)arg1;
- (void)setNowPlayingAppWithBrowsableContent:(id)arg1;
- (void)setProviderName:(id)arg1;
- (void)setSiriSupport:(id)arg1;
- (void)setSpokenName:(id)arg1;
- (void)setSpokenNameMap:(id)arg1;
- (void)setSpotlightName:(id)arg1;
- (void)setSpotlightNameMap:(id)arg1;
- (void)setStarkSupport:(id)arg1;
- (void)setSupportedCommands:(id)arg1;
- (void)setSupportedSchemes:(id)arg1;
- (void)setSupportsUniversalSearchSubscription:(bool)arg1;
- (id)siriSupport;
- (id)spokenName;
- (id)spokenNameMap;
- (id)spotlightName;
- (id)spotlightNameMap;
- (id)starkSupport;
- (id)supportedCommands;
- (id)supportedSchemes;
- (bool)supportsUniversalSearchSubscription;

@end
