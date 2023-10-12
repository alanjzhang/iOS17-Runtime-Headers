/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPlaceResponse : PBCodable <NSCopying> {
    GEOPDPlacesRequestResponseAnalyticsData * _analyticData;
    GEOClientMetrics * _clientMetrics;
    GEOPDDatasetABStatus * _datasetAbStatus;
    NSString * _debugApiKey;
    unsigned long long  _debugLatencyMs;
    NSMutableArray * _displayLanguages;
    NSString * _displayRegion;
    NSMutableArray * _dotPlaces;
    struct { 
        unsigned int has_debugLatencyMs : 1; 
        unsigned int has_requestType : 1; 
        unsigned int has_status : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_analyticData : 1; 
        unsigned int read_clientMetrics : 1; 
        unsigned int read_datasetAbStatus : 1; 
        unsigned int read_debugApiKey : 1; 
        unsigned int read_displayLanguages : 1; 
        unsigned int read_displayRegion : 1; 
        unsigned int read_dotPlaces : 1; 
        unsigned int read_globalResult : 1; 
        unsigned int read_mapsResults : 1; 
        unsigned int read_legacyPlaceResults : 1; 
        unsigned int read_spokenLanguages : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOPDPlaceGlobalResult * _globalResult;
    NSMutableArray * _legacyPlaceResults;
    NSMutableArray * _mapsResults;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _requestType;
    NSMutableArray * _spokenLanguages;
    int  _status;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOPDPlacesRequestResponseAnalyticsData *analyticData;
@property (nonatomic, retain) GEOClientMetrics *clientMetrics;
@property (nonatomic, retain) GEOPDDatasetABStatus *datasetAbStatus;
@property (nonatomic, retain) NSString *debugApiKey;
@property (nonatomic) unsigned long long debugLatencyMs;
@property (nonatomic, retain) NSMutableArray *displayLanguages;
@property (nonatomic, retain) NSString *displayRegion;
@property (nonatomic, retain) NSMutableArray *dotPlaces;
@property (nonatomic, retain) GEOPDPlaceGlobalResult *globalResult;
@property (nonatomic, readonly) bool hasAnalyticData;
@property (nonatomic, readonly) bool hasClientMetrics;
@property (nonatomic, readonly) bool hasDatasetAbStatus;
@property (nonatomic, readonly) bool hasDebugApiKey;
@property (nonatomic) bool hasDebugLatencyMs;
@property (nonatomic, readonly) bool hasDisplayRegion;
@property (nonatomic, readonly) bool hasGlobalResult;
@property (nonatomic) bool hasRequestType;
@property (nonatomic) bool hasStatus;
@property (nonatomic, retain) NSMutableArray *legacyPlaceResults;
@property (nonatomic, retain) NSMutableArray *mapsResults;
@property (nonatomic) int requestType;
@property (nonatomic, retain) NSMutableArray *spokenLanguages;
@property (nonatomic) int status;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)displayLanguageType;
+ (Class)dotPlaceType;
+ (bool)isValid:(id)arg1;
+ (Class)legacyPlaceResultType;
+ (Class)mapsResultType;
+ (Class)spokenLanguageType;

- (void).cxx_destruct;
- (int)StringAsRequestType:(id)arg1;
- (int)StringAsStatus:(id)arg1;
- (void)addDisplayLanguage:(id)arg1;
- (void)addDotPlace:(id)arg1;
- (void)addLegacyPlaceResult:(id)arg1;
- (void)addMapsResult:(id)arg1;
- (void)addSpokenLanguage:(id)arg1;
- (id)analyticData;
- (void)clearDisplayLanguages;
- (void)clearDotPlaces;
- (void)clearLegacyPlaceResults;
- (void)clearMapsResults;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)clearSpokenLanguages;
- (void)clearUnknownFields:(bool)arg1;
- (id)clientMetrics;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)datasetAbStatus;
- (id)debugApiKey;
- (unsigned long long)debugLatencyMs;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayLanguageAtIndex:(unsigned long long)arg1;
- (id)displayLanguages;
- (unsigned long long)displayLanguagesCount;
- (id)displayRegion;
- (id)dotPlaceAtIndex:(unsigned long long)arg1;
- (id)dotPlaces;
- (unsigned long long)dotPlacesCount;
- (id)globalResult;
- (bool)hasAnalyticData;
- (bool)hasClientMetrics;
- (bool)hasDatasetAbStatus;
- (bool)hasDebugApiKey;
- (bool)hasDebugLatencyMs;
- (bool)hasDisplayRegion;
- (bool)hasGlobalResult;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasRequestType;
- (bool)hasStatus;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)legacyPlaceResultAtIndex:(unsigned long long)arg1;
- (id)legacyPlaceResults;
- (unsigned long long)legacyPlaceResultsCount;
- (id)mapsResultAtIndex:(unsigned long long)arg1;
- (id)mapsResults;
- (unsigned long long)mapsResultsCount;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (int)requestType;
- (id)requestTypeAsString:(int)arg1;
- (void)setAnalyticData:(id)arg1;
- (void)setClientMetrics:(id)arg1;
- (void)setDatasetAbStatus:(id)arg1;
- (void)setDebugApiKey:(id)arg1;
- (void)setDebugLatencyMs:(unsigned long long)arg1;
- (void)setDisplayLanguages:(id)arg1;
- (void)setDisplayRegion:(id)arg1;
- (void)setDotPlaces:(id)arg1;
- (void)setGlobalResult:(id)arg1;
- (void)setHasDebugLatencyMs:(bool)arg1;
- (void)setHasRequestType:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setLegacyPlaceResults:(id)arg1;
- (void)setMapsResults:(id)arg1;
- (void)setRequestType:(int)arg1;
- (void)setSpokenLanguages:(id)arg1;
- (void)setStatus:(int)arg1;
- (id)spokenLanguageAtIndex:(unsigned long long)arg1;
- (id)spokenLanguages;
- (unsigned long long)spokenLanguagesCount;
- (int)status;
- (id)statusAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

// GEOPDPlaceResponse (Extras)

- (id)initWithPlace:(id)arg1 forRequestType:(int)arg2;
- (unsigned long long)resultsCountWithResultType:(int)arg1;
- (id)resultsWithResultType:(int)arg1;

// GEOPDPlaceResponse (GEOMapService)

- (id)_disambiguationLabels;

@end
