/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICURLBag : NSObject {
    NSArray * _GUIDURLRegexPatterns;
    NSSet * _GUIDURLSchemes;
    AMSSnapshotBag * _amsBag;
    NSDictionary * _bagValues;
    NSMutableDictionary * _convertedActionsCache;
    NSDate * _expirationDate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _profileName;
    NSString * _profileVersion;
    NSDate * _requestDate;
    NSString * _serverCorrelationKey;
    NSString * _serverEnvironment;
    NSNumber * _sourceAccountDSID;
}

@property (nonatomic, retain) NSArray *GUIDURLRegexPatterns;
@property (nonatomic, retain) NSSet *GUIDURLSchemes;
@property (nonatomic, readonly, copy) NSDictionary *_allValues;
@property (nonatomic, readonly) NSDictionary *_propertyListRepresentation;
@property (nonatomic, readonly, copy) NSDictionary *allValues;
@property (nonatomic, readonly) AMSSnapshotBag *amsBag;
@property (nonatomic, copy) NSDictionary *bagValues;
@property (nonatomic, readonly) bool canPostKeybagSyncData;
@property (nonatomic, retain) NSMutableDictionary *convertedActionsCache;
@property (nonatomic, readonly) ICURLBagEnhancedAudioConfiguration *enhancedAudioConfiguration;
@property (setter=_setExpirationDate:, nonatomic, copy) NSDate *expirationDate;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (nonatomic, readonly) ICURLBagLibraryDAAPConfiguration *libraryDAAPConfiguration;
@property (nonatomic, readonly, copy) NSString *profileName;
@property (nonatomic, readonly, copy) NSString *profileVersion;
@property (nonatomic, readonly) ICURLBagRadioConfiguration *radioConfiguration;
@property (nonatomic, readonly, copy) NSDate *requestDate;
@property (nonatomic, readonly, copy) NSString *serverCorrelationKey;
@property (nonatomic, readonly, copy) NSString *serverEnvironment;
@property (nonatomic, readonly, copy) NSNumber *sourceAccountDSID;
@property (nonatomic, readonly, copy) NSString *storefrontHeaderSuffix;

+ (id)_allBagKeys;

- (void).cxx_destruct;
- (id)GUIDURLRegexPatterns;
- (id)GUIDURLSchemes;
- (id)_allValues;
- (id)_initWithDictionary:(id)arg1;
- (id)_initWithDictionary:(id)arg1 amsBag:(id)arg2 requestDate:(id)arg3 expirationDate:(id)arg4 serverCorrelationKey:(id)arg5 serverEnvironment:(id)arg6 profileName:(id)arg7 profileVersion:(id)arg8 sourceAccountDSID:(id)arg9;
- (id)_initWithPropertyListRepresentation:(id)arg1;
- (id)_knownIncorrectValues;
- (id)_knownOptionalBagKeys;
- (void)_logMissingKey:(id)arg1;
- (id)_propertyListRepresentation;
- (void)_setExpirationDate:(id)arg1;
- (bool)_shouldMescalSignBodyForURL:(id)arg1 withSignatureConfiguration:(id)arg2;
- (id)_urlStringFromBagStringValue:(id)arg1;
- (void)_validateGUIDURLConfigIfNeeded;
- (id)_valueForBagKey:(id)arg1;
- (id)allValues;
- (id)amsBag;
- (id)arrayForBagKey:(id)arg1;
- (id)bagValues;
- (bool)boolValueForBagKey:(id)arg1;
- (bool)canPostKeybagSyncData;
- (id)convertedActionsCache;
- (void)createAMSSnapshotBagWithCompletion:(id /* block */)arg1;
- (id)dictionaryForBagKey:(id)arg1;
- (id)enhancedAudioConfiguration;
- (id)expirationDate;
- (bool)hasValueForBagKey:(id)arg1;
- (long long)int64ValueForBagKey:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isExpired;
- (bool)isTrustedHostForURL:(id)arg1;
- (id)libraryDAAPConfiguration;
- (id)mescalConfigurationForRequest:(id)arg1;
- (id)mescalConfigurationForRequestURL:(id)arg1;
- (id)mescalConfigurationForResponse:(id)arg1;
- (id)mescalConfigurationForResponseURL:(id)arg1;
- (id)numberForBagKey:(id)arg1;
- (id)profileName;
- (id)profileVersion;
- (id)radioConfiguration;
- (id)requestDate;
- (id)serverCorrelationKey;
- (id)serverEnvironment;
- (void)setBagValues:(id)arg1;
- (void)setConvertedActionsCache:(id)arg1;
- (void)setGUIDURLRegexPatterns:(id)arg1;
- (void)setGUIDURLSchemes:(id)arg1;
- (bool)shouldAppendDeviceGUIDForURL:(id)arg1;
- (bool)shouldAppendMachineDataHeadersForURL:(id)arg1;
- (id)sourceAccountDSID;
- (id)storefrontHeaderSuffix;
- (id)stringForBagKey:(id)arg1;
- (id)urlForBagKey:(id)arg1;
- (id)valueForBagKey:(id)arg1;
- (id)valuesForBagKeys:(id)arg1;

@end
