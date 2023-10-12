/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDClientMetadata : PBCodable <NSCopying> {
    GEOABBranchInfo * _abBranchInfo;
    GEOABSecondPartyPlaceRequestClientMetaData * _abClientMetadata;
    GEOAdditionalEnabledMarkets * _additionalEnabledMarkets;
    NSMutableArray * _businessChatPreflightIdentifiers;
    int  _clientRevision;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _clientRevisions;
    unsigned int  _dayOfWeek;
    NSString * _debugApiKey;
    NSString * _deviceCountryCode;
    NSString * _deviceDisplayLanguage;
    GEOLocation * _deviceExtendedLocation;
    NSMutableArray * _deviceHistoricalLocations;
    NSString * _deviceKeyboardLanguage;
    NSString * _deviceSku;
    NSString * _deviceSpokenLanguage;
    NSString * _displayRegion;
    bool  _enablePreflightVenues;
    struct { 
        unsigned int has_clientRevision : 1; 
        unsigned int has_dayOfWeek : 1; 
        unsigned int has_hourOfDay : 1; 
        unsigned int has_requiredVersion : 1; 
        unsigned int has_resultListAttributionSupport : 1; 
        unsigned int has_timeSinceMapEnteredForeground : 1; 
        unsigned int has_enablePreflightVenues : 1; 
        unsigned int has_siriUserConsentsForAnalysis : 1; 
        unsigned int has_supportEnrichment : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_clientRevisions : 1; 
        unsigned int read_knownClientResolvedTypeDeprecateds : 1; 
        unsigned int read_knownClientResolvedTypes : 1; 
        unsigned int read_supportedMapsResultTypes : 1; 
        unsigned int read_abBranchInfo : 1; 
        unsigned int read_abClientMetadata : 1; 
        unsigned int read_additionalEnabledMarkets : 1; 
        unsigned int read_businessChatPreflightIdentifiers : 1; 
        unsigned int read_debugApiKey : 1; 
        unsigned int read_deviceCountryCode : 1; 
        unsigned int read_deviceDisplayLanguage : 1; 
        unsigned int read_deviceExtendedLocation : 1; 
        unsigned int read_deviceHistoricalLocations : 1; 
        unsigned int read_deviceKeyboardLanguage : 1; 
        unsigned int read_deviceSku : 1; 
        unsigned int read_deviceSpokenLanguage : 1; 
        unsigned int read_displayRegion : 1; 
        unsigned int read_localizationCapabilities : 1; 
        unsigned int read_mapsSuggestionsTouristInfo : 1; 
        unsigned int read_preferredDisplayCurrencySymbol : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    unsigned int  _hourOfDay;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _knownClientResolvedTypeDeprecateds;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _knownClientResolvedTypes;
    GEOLocalizationCapabilities * _localizationCapabilities;
    GEOPDMapsSuggestionsTouristInfo * _mapsSuggestionsTouristInfo;
    NSString * _preferredDisplayCurrencySymbol;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _requiredVersion;
    int  _resultListAttributionSupport;
    bool  _siriUserConsentsForAnalysis;
    bool  _supportEnrichment;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _supportedMapsResultTypes;
    unsigned int  _timeSinceMapEnteredForeground;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOABBranchInfo *abBranchInfo;
@property (nonatomic, retain) GEOABSecondPartyPlaceRequestClientMetaData *abClientMetadata;
@property (nonatomic, retain) GEOAdditionalEnabledMarkets *additionalEnabledMarkets;
@property (nonatomic, retain) NSMutableArray *businessChatPreflightIdentifiers;
@property (nonatomic) int clientRevision;
@property (nonatomic, readonly) int*clientRevisions;
@property (nonatomic, readonly) unsigned long long clientRevisionsCount;
@property (nonatomic) unsigned int dayOfWeek;
@property (nonatomic, retain) NSString *debugApiKey;
@property (nonatomic, retain) NSString *deviceCountryCode;
@property (nonatomic, retain) NSString *deviceDisplayLanguage;
@property (nonatomic, retain) GEOLocation *deviceExtendedLocation;
@property (nonatomic, retain) NSMutableArray *deviceHistoricalLocations;
@property (nonatomic, retain) NSString *deviceKeyboardLanguage;
@property (nonatomic, retain) NSString *deviceSku;
@property (nonatomic, retain) NSString *deviceSpokenLanguage;
@property (nonatomic, retain) NSString *displayRegion;
@property (nonatomic) bool enablePreflightVenues;
@property (nonatomic, readonly) bool hasAbBranchInfo;
@property (nonatomic, readonly) bool hasAbClientMetadata;
@property (nonatomic, readonly) bool hasAdditionalEnabledMarkets;
@property (nonatomic) bool hasClientRevision;
@property (nonatomic) bool hasDayOfWeek;
@property (nonatomic, readonly) bool hasDebugApiKey;
@property (nonatomic, readonly) bool hasDeviceCountryCode;
@property (nonatomic, readonly) bool hasDeviceDisplayLanguage;
@property (nonatomic, readonly) bool hasDeviceExtendedLocation;
@property (nonatomic, readonly) bool hasDeviceKeyboardLanguage;
@property (nonatomic, readonly) bool hasDeviceSku;
@property (nonatomic, readonly) bool hasDeviceSpokenLanguage;
@property (nonatomic, readonly) bool hasDisplayRegion;
@property (nonatomic) bool hasEnablePreflightVenues;
@property (nonatomic) bool hasHourOfDay;
@property (nonatomic, readonly) bool hasLocalizationCapabilities;
@property (nonatomic, readonly) bool hasMapsSuggestionsTouristInfo;
@property (nonatomic, readonly) bool hasPreferredDisplayCurrencySymbol;
@property (nonatomic) bool hasRequiredVersion;
@property (nonatomic) bool hasResultListAttributionSupport;
@property (nonatomic) bool hasSiriUserConsentsForAnalysis;
@property (nonatomic) bool hasSupportEnrichment;
@property (nonatomic) bool hasTimeSinceMapEnteredForeground;
@property (nonatomic) unsigned int hourOfDay;
@property (nonatomic, readonly) int*knownClientResolvedTypeDeprecateds;
@property (nonatomic, readonly) unsigned long long knownClientResolvedTypeDeprecatedsCount;
@property (nonatomic, readonly) int*knownClientResolvedTypes;
@property (nonatomic, readonly) unsigned long long knownClientResolvedTypesCount;
@property (nonatomic, retain) GEOLocalizationCapabilities *localizationCapabilities;
@property (nonatomic, retain) GEOPDMapsSuggestionsTouristInfo *mapsSuggestionsTouristInfo;
@property (nonatomic, retain) NSString *preferredDisplayCurrencySymbol;
@property (nonatomic) int requiredVersion;
@property (nonatomic) int resultListAttributionSupport;
@property (nonatomic) bool siriUserConsentsForAnalysis;
@property (nonatomic) bool supportEnrichment;
@property (nonatomic, readonly) int*supportedMapsResultTypes;
@property (nonatomic, readonly) unsigned long long supportedMapsResultTypesCount;
@property (nonatomic) unsigned int timeSinceMapEnteredForeground;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)businessChatPreflightIdentifierType;
+ (Class)deviceHistoricalLocationType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsClientRevision:(id)arg1;
- (int)StringAsClientRevisions:(id)arg1;
- (int)StringAsKnownClientResolvedTypeDeprecateds:(id)arg1;
- (int)StringAsKnownClientResolvedTypes:(id)arg1;
- (int)StringAsRequiredVersion:(id)arg1;
- (int)StringAsResultListAttributionSupport:(id)arg1;
- (int)StringAsSupportedMapsResultTypes:(id)arg1;
- (id)abBranchInfo;
- (id)abClientMetadata;
- (void)addBusinessChatPreflightIdentifier:(id)arg1;
- (void)addClientRevisions:(int)arg1;
- (void)addDeviceHistoricalLocation:(id)arg1;
- (void)addKnownClientResolvedType:(int)arg1;
- (void)addKnownClientResolvedTypeDeprecated:(int)arg1;
- (void)addSupportedMapsResultType:(int)arg1;
- (id)additionalEnabledMarkets;
- (id)businessChatPreflightIdentifierAtIndex:(unsigned long long)arg1;
- (id)businessChatPreflightIdentifiers;
- (unsigned long long)businessChatPreflightIdentifiersCount;
- (void)clearBusinessChatPreflightIdentifiers;
- (void)clearClientRevisions;
- (void)clearDeviceHistoricalLocations;
- (void)clearKnownClientResolvedTypeDeprecateds;
- (void)clearKnownClientResolvedTypes;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)clearSupportedMapsResultTypes;
- (void)clearUnknownFields:(bool)arg1;
- (int)clientRevision;
- (id)clientRevisionAsString:(int)arg1;
- (int*)clientRevisions;
- (id)clientRevisionsAsString:(int)arg1;
- (int)clientRevisionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)clientRevisionsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dayOfWeek;
- (void)dealloc;
- (id)debugApiKey;
- (id)description;
- (id)deviceCountryCode;
- (id)deviceDisplayLanguage;
- (id)deviceExtendedLocation;
- (id)deviceHistoricalLocationAtIndex:(unsigned long long)arg1;
- (id)deviceHistoricalLocations;
- (unsigned long long)deviceHistoricalLocationsCount;
- (id)deviceKeyboardLanguage;
- (id)deviceSku;
- (id)deviceSpokenLanguage;
- (id)dictionaryRepresentation;
- (id)displayRegion;
- (bool)enablePreflightVenues;
- (bool)hasAbBranchInfo;
- (bool)hasAbClientMetadata;
- (bool)hasAdditionalEnabledMarkets;
- (bool)hasClientRevision;
- (bool)hasDayOfWeek;
- (bool)hasDebugApiKey;
- (bool)hasDeviceCountryCode;
- (bool)hasDeviceDisplayLanguage;
- (bool)hasDeviceExtendedLocation;
- (bool)hasDeviceKeyboardLanguage;
- (bool)hasDeviceSku;
- (bool)hasDeviceSpokenLanguage;
- (bool)hasDisplayRegion;
- (bool)hasEnablePreflightVenues;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasHourOfDay;
- (bool)hasLocalizationCapabilities;
- (bool)hasMapsSuggestionsTouristInfo;
- (bool)hasPreferredDisplayCurrencySymbol;
- (bool)hasRequiredVersion;
- (bool)hasResultListAttributionSupport;
- (bool)hasSiriUserConsentsForAnalysis;
- (bool)hasSupportEnrichment;
- (bool)hasTimeSinceMapEnteredForeground;
- (unsigned long long)hash;
- (unsigned int)hourOfDay;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (int)knownClientResolvedTypeAtIndex:(unsigned long long)arg1;
- (int)knownClientResolvedTypeDeprecatedAtIndex:(unsigned long long)arg1;
- (int*)knownClientResolvedTypeDeprecateds;
- (id)knownClientResolvedTypeDeprecatedsAsString:(int)arg1;
- (unsigned long long)knownClientResolvedTypeDeprecatedsCount;
- (int*)knownClientResolvedTypes;
- (id)knownClientResolvedTypesAsString:(int)arg1;
- (unsigned long long)knownClientResolvedTypesCount;
- (id)localizationCapabilities;
- (id)mapsSuggestionsTouristInfo;
- (void)mergeFrom:(id)arg1;
- (id)preferredDisplayCurrencySymbol;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (int)requiredVersion;
- (id)requiredVersionAsString:(int)arg1;
- (int)resultListAttributionSupport;
- (id)resultListAttributionSupportAsString:(int)arg1;
- (void)setAbBranchInfo:(id)arg1;
- (void)setAbClientMetadata:(id)arg1;
- (void)setAdditionalEnabledMarkets:(id)arg1;
- (void)setBusinessChatPreflightIdentifiers:(id)arg1;
- (void)setClientRevision:(int)arg1;
- (void)setClientRevisions:(int*)arg1 count:(unsigned long long)arg2;
- (void)setDayOfWeek:(unsigned int)arg1;
- (void)setDebugApiKey:(id)arg1;
- (void)setDeviceCountryCode:(id)arg1;
- (void)setDeviceDisplayLanguage:(id)arg1;
- (void)setDeviceExtendedLocation:(id)arg1;
- (void)setDeviceHistoricalLocations:(id)arg1;
- (void)setDeviceKeyboardLanguage:(id)arg1;
- (void)setDeviceSku:(id)arg1;
- (void)setDeviceSpokenLanguage:(id)arg1;
- (void)setDisplayRegion:(id)arg1;
- (void)setEnablePreflightVenues:(bool)arg1;
- (void)setHasClientRevision:(bool)arg1;
- (void)setHasDayOfWeek:(bool)arg1;
- (void)setHasEnablePreflightVenues:(bool)arg1;
- (void)setHasHourOfDay:(bool)arg1;
- (void)setHasRequiredVersion:(bool)arg1;
- (void)setHasResultListAttributionSupport:(bool)arg1;
- (void)setHasSiriUserConsentsForAnalysis:(bool)arg1;
- (void)setHasSupportEnrichment:(bool)arg1;
- (void)setHasTimeSinceMapEnteredForeground:(bool)arg1;
- (void)setHourOfDay:(unsigned int)arg1;
- (void)setKnownClientResolvedTypeDeprecateds:(int*)arg1 count:(unsigned long long)arg2;
- (void)setKnownClientResolvedTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setLocalizationCapabilities:(id)arg1;
- (void)setMapsSuggestionsTouristInfo:(id)arg1;
- (void)setPreferredDisplayCurrencySymbol:(id)arg1;
- (void)setRequiredVersion:(int)arg1;
- (void)setResultListAttributionSupport:(int)arg1;
- (void)setSiriUserConsentsForAnalysis:(bool)arg1;
- (void)setSupportEnrichment:(bool)arg1;
- (void)setSupportedMapsResultTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setTimeSinceMapEnteredForeground:(unsigned int)arg1;
- (bool)siriUserConsentsForAnalysis;
- (bool)supportEnrichment;
- (int)supportedMapsResultTypeAtIndex:(unsigned long long)arg1;
- (int*)supportedMapsResultTypes;
- (id)supportedMapsResultTypesAsString:(int)arg1;
- (unsigned long long)supportedMapsResultTypesCount;
- (unsigned int)timeSinceMapEnteredForeground;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

// GEOPDClientMetadata (GEORPProtoExtras)

- (void)clearLocations;

// GEOPDClientMetadata (PlaceDataExtras)

- (id)initWithTraits:(id)arg1;

@end
