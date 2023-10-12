/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAutocompleteEntry : PBCodable <NSCopying> {
    GEOPDAutocompleteEntryAddress * _address;
    unsigned int  _autocompleteOriginationTypeNumber;
    int  _autocompleteResultCellType;
    GEOPDAutocompleteEntryBrandProfile * _brandProfile;
    GEOPDAutocompleteEntryBusiness * _business;
    GEOPDAutocompleteEntryCategory * _category;
    GEOPDAutocompleteEntryClientResolved * _clientResolved;
    GEOPDAutocompleteEntryCollection * _collection;
    GEOPDAutocompleteEntryDirectionIntent * _directionIntent;
    bool  _enableQueryAcceleratorAffordance;
    struct { 
        unsigned int has_autocompleteOriginationTypeNumber : 1; 
        unsigned int has_autocompleteResultCellType : 1; 
        unsigned int has_sortPriority : 1; 
        unsigned int has_type : 1; 
        unsigned int has_enableQueryAcceleratorAffordance : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_address : 1; 
        unsigned int read_brandProfile : 1; 
        unsigned int read_business : 1; 
        unsigned int read_category : 1; 
        unsigned int read_clientResolved : 1; 
        unsigned int read_collection : 1; 
        unsigned int read_directionIntent : 1; 
        unsigned int read_highlightExtra : 1; 
        unsigned int read_highlightMain : 1; 
        unsigned int read_offlineArea : 1; 
        unsigned int read_parsecRankingFeatures : 1; 
        unsigned int read_publisher : 1; 
        unsigned int read_queryAcceleratorCompletionString : 1; 
        unsigned int read_query : 1; 
        unsigned int read_retainSearch : 1; 
        unsigned int read_serverResultScoreMetadata : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOPDAutocompleteEntryHighlightLine * _highlightExtra;
    GEOPDAutocompleteEntryHighlightLine * _highlightMain;
    GEOPDAutocompleteEntryOfflineArea * _offlineArea;
    GEOPDParsecRankingFeatures * _parsecRankingFeatures;
    GEOPDAutocompleteEntryPublisher * _publisher;
    GEOPDAutocompleteEntryQuery * _query;
    NSString * _queryAcceleratorCompletionString;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOPDRetainedSearchMetadata * _retainSearch;
    GEOPDServerResultScoreMetadata * _serverResultScoreMetadata;
    int  _sortPriority;
    int  _type;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOPDAutocompleteEntryAddress *address;
@property (nonatomic) unsigned int autocompleteOriginationTypeNumber;
@property (nonatomic) int autocompleteResultCellType;
@property (nonatomic, retain) GEOPDAutocompleteEntryBrandProfile *brandProfile;
@property (nonatomic, retain) GEOPDAutocompleteEntryBusiness *business;
@property (nonatomic, retain) GEOPDAutocompleteEntryCategory *category;
@property (nonatomic, retain) GEOPDAutocompleteEntryClientResolved *clientResolved;
@property (nonatomic, retain) GEOPDAutocompleteEntryCollection *collection;
@property (nonatomic, retain) GEOPDAutocompleteEntryDirectionIntent *directionIntent;
@property (nonatomic) bool enableQueryAcceleratorAffordance;
@property (nonatomic, readonly) bool hasAddress;
@property (nonatomic) bool hasAutocompleteOriginationTypeNumber;
@property (nonatomic) bool hasAutocompleteResultCellType;
@property (nonatomic, readonly) bool hasBrandProfile;
@property (nonatomic, readonly) bool hasBusiness;
@property (nonatomic, readonly) bool hasCategory;
@property (nonatomic, readonly) bool hasClientResolved;
@property (nonatomic, readonly) bool hasCollection;
@property (nonatomic, readonly) bool hasDirectionIntent;
@property (nonatomic) bool hasEnableQueryAcceleratorAffordance;
@property (nonatomic, readonly) bool hasHighlightExtra;
@property (nonatomic, readonly) bool hasHighlightMain;
@property (nonatomic, readonly) bool hasOfflineArea;
@property (nonatomic, readonly) bool hasParsecRankingFeatures;
@property (nonatomic, readonly) bool hasPublisher;
@property (nonatomic, readonly) bool hasQuery;
@property (nonatomic, readonly) bool hasQueryAcceleratorCompletionString;
@property (nonatomic, readonly) bool hasRetainSearch;
@property (nonatomic, readonly) bool hasServerResultScoreMetadata;
@property (nonatomic) bool hasSortPriority;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) GEOPDAutocompleteEntryHighlightLine *highlightExtra;
@property (nonatomic, retain) GEOPDAutocompleteEntryHighlightLine *highlightMain;
@property (nonatomic, retain) GEOPDAutocompleteEntryOfflineArea *offlineArea;
@property (nonatomic, retain) GEOPDParsecRankingFeatures *parsecRankingFeatures;
@property (nonatomic, retain) GEOPDAutocompleteEntryPublisher *publisher;
@property (nonatomic, retain) GEOPDAutocompleteEntryQuery *query;
@property (nonatomic, retain) NSString *queryAcceleratorCompletionString;
@property (nonatomic, retain) GEOPDRetainedSearchMetadata *retainSearch;
@property (nonatomic, retain) GEOPDServerResultScoreMetadata *serverResultScoreMetadata;
@property (nonatomic) int sortPriority;
@property (nonatomic) int type;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsAutocompleteResultCellType:(id)arg1;
- (int)StringAsType:(id)arg1;
- (id)address;
- (unsigned int)autocompleteOriginationTypeNumber;
- (int)autocompleteResultCellType;
- (id)autocompleteResultCellTypeAsString:(int)arg1;
- (id)brandProfile;
- (id)business;
- (id)category;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (id)clientResolved;
- (id)collection;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionIntent;
- (bool)enableQueryAcceleratorAffordance;
- (bool)hasAddress;
- (bool)hasAutocompleteOriginationTypeNumber;
- (bool)hasAutocompleteResultCellType;
- (bool)hasBrandProfile;
- (bool)hasBusiness;
- (bool)hasCategory;
- (bool)hasClientResolved;
- (bool)hasCollection;
- (bool)hasDirectionIntent;
- (bool)hasEnableQueryAcceleratorAffordance;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasHighlightExtra;
- (bool)hasHighlightMain;
- (bool)hasOfflineArea;
- (bool)hasParsecRankingFeatures;
- (bool)hasPublisher;
- (bool)hasQuery;
- (bool)hasQueryAcceleratorCompletionString;
- (bool)hasRetainSearch;
- (bool)hasServerResultScoreMetadata;
- (bool)hasSortPriority;
- (bool)hasType;
- (unsigned long long)hash;
- (id)highlightExtra;
- (id)highlightMain;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)offlineArea;
- (id)parsecRankingFeatures;
- (id)publisher;
- (id)query;
- (id)queryAcceleratorCompletionString;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)retainSearch;
- (id)serverResultScoreMetadata;
- (void)setAddress:(id)arg1;
- (void)setAutocompleteOriginationTypeNumber:(unsigned int)arg1;
- (void)setAutocompleteResultCellType:(int)arg1;
- (void)setBrandProfile:(id)arg1;
- (void)setBusiness:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setClientResolved:(id)arg1;
- (void)setCollection:(id)arg1;
- (void)setDirectionIntent:(id)arg1;
- (void)setEnableQueryAcceleratorAffordance:(bool)arg1;
- (void)setHasAutocompleteOriginationTypeNumber:(bool)arg1;
- (void)setHasAutocompleteResultCellType:(bool)arg1;
- (void)setHasEnableQueryAcceleratorAffordance:(bool)arg1;
- (void)setHasSortPriority:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHighlightExtra:(id)arg1;
- (void)setHighlightMain:(id)arg1;
- (void)setOfflineArea:(id)arg1;
- (void)setParsecRankingFeatures:(id)arg1;
- (void)setPublisher:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setQueryAcceleratorCompletionString:(id)arg1;
- (void)setRetainSearch:(id)arg1;
- (void)setServerResultScoreMetadata:(id)arg1;
- (void)setSortPriority:(int)arg1;
- (void)setType:(int)arg1;
- (int)sortPriority;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
