/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAutocompleteParametersAllEntriesWithBrowse : PBCodable <NSCopying> {
    GEOPDAutocompleteOriginationInfo * _autocompleteOriginationInfo;
    GEOPDAutocompleteEntry * _categorySuggestionEntry;
    NSData * _categorySuggestionEntryMetadata;
    GEOPDSSearchEvChargingParameters * _evChargingParameters;
    struct { 
        unsigned int has_maxQueryBuilderSuggestions : 1; 
        unsigned int has_maxResults : 1; 
        unsigned int has_placeSummaryRevision : 1; 
        unsigned int has_highlightDiff : 1; 
        unsigned int has_interleaveCategorySuggestions : 1; 
        unsigned int has_supportClientRankingCompositeFeatures : 1; 
        unsigned int has_supportClientRankingFeatureMetadata : 1; 
        unsigned int has_supportDirectionIntentSuggestions : 1; 
        unsigned int has_supportRapAffordance : 1; 
        unsigned int has_supportSectionHeader : 1; 
        unsigned int has_supportStructuredRapAffordance : 1; 
        unsigned int has_supportUnresolvedDirectionIntent : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_knownRefinementTypes : 1; 
        unsigned int read_supportedAutocompleteResultCellTypes : 1; 
        unsigned int read_supportedHighlightTypes : 1; 
        unsigned int read_supportedListTypes : 1; 
        unsigned int read_supportedPlaceSummaryFormatTypes : 1; 
        unsigned int read_autocompleteOriginationInfo : 1; 
        unsigned int read_categorySuggestionEntryMetadata : 1; 
        unsigned int read_categorySuggestionEntry : 1; 
        unsigned int read_evChargingParameters : 1; 
        unsigned int read_querySuggestionEntry : 1; 
        unsigned int read_query : 1; 
        unsigned int read_retainedSearch : 1; 
        unsigned int read_venueIdentifier : 1; 
        unsigned int read_viewportInfo : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _highlightDiff;
    bool  _interleaveCategorySuggestions;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _knownRefinementTypes;
    int  _maxQueryBuilderSuggestions;
    int  _maxResults;
    int  _placeSummaryRevision;
    NSString * _query;
    GEOPDAutocompleteEntry * _querySuggestionEntry;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOPDRetainedSearchMetadata * _retainedSearch;
    bool  _supportClientRankingCompositeFeatures;
    bool  _supportClientRankingFeatureMetadata;
    bool  _supportDirectionIntentSuggestions;
    bool  _supportRapAffordance;
    bool  _supportSectionHeader;
    bool  _supportStructuredRapAffordance;
    bool  _supportUnresolvedDirectionIntent;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _supportedAutocompleteResultCellTypes;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _supportedHighlightTypes;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _supportedListTypes;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _supportedPlaceSummaryFormatTypes;
    PBUnknownFields * _unknownFields;
    GEOPDVenueIdentifier * _venueIdentifier;
    GEOPDViewportInfo * _viewportInfo;
}

@property (nonatomic, retain) GEOPDAutocompleteOriginationInfo *autocompleteOriginationInfo;
@property (nonatomic, retain) GEOPDAutocompleteEntry *categorySuggestionEntry;
@property (nonatomic, retain) NSData *categorySuggestionEntryMetadata;
@property (nonatomic, retain) GEOPDSSearchEvChargingParameters *evChargingParameters;
@property (nonatomic, readonly) bool hasAutocompleteOriginationInfo;
@property (nonatomic, readonly) bool hasCategorySuggestionEntry;
@property (nonatomic, readonly) bool hasCategorySuggestionEntryMetadata;
@property (nonatomic, readonly) bool hasEvChargingParameters;
@property (nonatomic) bool hasHighlightDiff;
@property (nonatomic) bool hasInterleaveCategorySuggestions;
@property (nonatomic) bool hasMaxQueryBuilderSuggestions;
@property (nonatomic) bool hasMaxResults;
@property (nonatomic) bool hasPlaceSummaryRevision;
@property (nonatomic, readonly) bool hasQuery;
@property (nonatomic, readonly) bool hasQuerySuggestionEntry;
@property (nonatomic, readonly) bool hasRetainedSearch;
@property (nonatomic) bool hasSupportClientRankingCompositeFeatures;
@property (nonatomic) bool hasSupportClientRankingFeatureMetadata;
@property (nonatomic) bool hasSupportDirectionIntentSuggestions;
@property (nonatomic) bool hasSupportRapAffordance;
@property (nonatomic) bool hasSupportSectionHeader;
@property (nonatomic) bool hasSupportStructuredRapAffordance;
@property (nonatomic) bool hasSupportUnresolvedDirectionIntent;
@property (nonatomic, readonly) bool hasVenueIdentifier;
@property (nonatomic, readonly) bool hasViewportInfo;
@property (nonatomic) bool highlightDiff;
@property (nonatomic) bool interleaveCategorySuggestions;
@property (nonatomic, readonly) int*knownRefinementTypes;
@property (nonatomic, readonly) unsigned long long knownRefinementTypesCount;
@property (nonatomic) int maxQueryBuilderSuggestions;
@property (nonatomic) int maxResults;
@property (nonatomic) int placeSummaryRevision;
@property (nonatomic, retain) NSString *query;
@property (nonatomic, retain) GEOPDAutocompleteEntry *querySuggestionEntry;
@property (nonatomic, retain) GEOPDRetainedSearchMetadata *retainedSearch;
@property (nonatomic) bool supportClientRankingCompositeFeatures;
@property (nonatomic) bool supportClientRankingFeatureMetadata;
@property (nonatomic) bool supportDirectionIntentSuggestions;
@property (nonatomic) bool supportRapAffordance;
@property (nonatomic) bool supportSectionHeader;
@property (nonatomic) bool supportStructuredRapAffordance;
@property (nonatomic) bool supportUnresolvedDirectionIntent;
@property (nonatomic, readonly) int*supportedAutocompleteResultCellTypes;
@property (nonatomic, readonly) unsigned long long supportedAutocompleteResultCellTypesCount;
@property (nonatomic, readonly) int*supportedHighlightTypes;
@property (nonatomic, readonly) unsigned long long supportedHighlightTypesCount;
@property (nonatomic, readonly) int*supportedListTypes;
@property (nonatomic, readonly) unsigned long long supportedListTypesCount;
@property (nonatomic, readonly) int*supportedPlaceSummaryFormatTypes;
@property (nonatomic, readonly) unsigned long long supportedPlaceSummaryFormatTypesCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) GEOPDVenueIdentifier *venueIdentifier;
@property (nonatomic, retain) GEOPDViewportInfo *viewportInfo;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsKnownRefinementTypes:(id)arg1;
- (int)StringAsPlaceSummaryRevision:(id)arg1;
- (int)StringAsSupportedAutocompleteResultCellTypes:(id)arg1;
- (int)StringAsSupportedHighlightTypes:(id)arg1;
- (int)StringAsSupportedListTypes:(id)arg1;
- (int)StringAsSupportedPlaceSummaryFormatTypes:(id)arg1;
- (void)addKnownRefinementType:(int)arg1;
- (void)addSupportedAutocompleteResultCellType:(int)arg1;
- (void)addSupportedHighlightType:(int)arg1;
- (void)addSupportedListType:(int)arg1;
- (void)addSupportedPlaceSummaryFormatType:(int)arg1;
- (id)autocompleteOriginationInfo;
- (id)categorySuggestionEntry;
- (id)categorySuggestionEntryMetadata;
- (void)clearKnownRefinementTypes;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)clearSupportedAutocompleteResultCellTypes;
- (void)clearSupportedHighlightTypes;
- (void)clearSupportedListTypes;
- (void)clearSupportedPlaceSummaryFormatTypes;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)evChargingParameters;
- (bool)hasAutocompleteOriginationInfo;
- (bool)hasCategorySuggestionEntry;
- (bool)hasCategorySuggestionEntryMetadata;
- (bool)hasEvChargingParameters;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasHighlightDiff;
- (bool)hasInterleaveCategorySuggestions;
- (bool)hasMaxQueryBuilderSuggestions;
- (bool)hasMaxResults;
- (bool)hasPlaceSummaryRevision;
- (bool)hasQuery;
- (bool)hasQuerySuggestionEntry;
- (bool)hasRetainedSearch;
- (bool)hasSupportClientRankingCompositeFeatures;
- (bool)hasSupportClientRankingFeatureMetadata;
- (bool)hasSupportDirectionIntentSuggestions;
- (bool)hasSupportRapAffordance;
- (bool)hasSupportSectionHeader;
- (bool)hasSupportStructuredRapAffordance;
- (bool)hasSupportUnresolvedDirectionIntent;
- (bool)hasVenueIdentifier;
- (bool)hasViewportInfo;
- (unsigned long long)hash;
- (bool)highlightDiff;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)interleaveCategorySuggestions;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (int)knownRefinementTypeAtIndex:(unsigned long long)arg1;
- (int*)knownRefinementTypes;
- (id)knownRefinementTypesAsString:(int)arg1;
- (unsigned long long)knownRefinementTypesCount;
- (int)maxQueryBuilderSuggestions;
- (int)maxResults;
- (void)mergeFrom:(id)arg1;
- (int)placeSummaryRevision;
- (id)placeSummaryRevisionAsString:(int)arg1;
- (id)query;
- (id)querySuggestionEntry;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)retainedSearch;
- (void)setAutocompleteOriginationInfo:(id)arg1;
- (void)setCategorySuggestionEntry:(id)arg1;
- (void)setCategorySuggestionEntryMetadata:(id)arg1;
- (void)setEvChargingParameters:(id)arg1;
- (void)setHasHighlightDiff:(bool)arg1;
- (void)setHasInterleaveCategorySuggestions:(bool)arg1;
- (void)setHasMaxQueryBuilderSuggestions:(bool)arg1;
- (void)setHasMaxResults:(bool)arg1;
- (void)setHasPlaceSummaryRevision:(bool)arg1;
- (void)setHasSupportClientRankingCompositeFeatures:(bool)arg1;
- (void)setHasSupportClientRankingFeatureMetadata:(bool)arg1;
- (void)setHasSupportDirectionIntentSuggestions:(bool)arg1;
- (void)setHasSupportRapAffordance:(bool)arg1;
- (void)setHasSupportSectionHeader:(bool)arg1;
- (void)setHasSupportStructuredRapAffordance:(bool)arg1;
- (void)setHasSupportUnresolvedDirectionIntent:(bool)arg1;
- (void)setHighlightDiff:(bool)arg1;
- (void)setInterleaveCategorySuggestions:(bool)arg1;
- (void)setKnownRefinementTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setMaxQueryBuilderSuggestions:(int)arg1;
- (void)setMaxResults:(int)arg1;
- (void)setPlaceSummaryRevision:(int)arg1;
- (void)setQuery:(id)arg1;
- (void)setQuerySuggestionEntry:(id)arg1;
- (void)setRetainedSearch:(id)arg1;
- (void)setSupportClientRankingCompositeFeatures:(bool)arg1;
- (void)setSupportClientRankingFeatureMetadata:(bool)arg1;
- (void)setSupportDirectionIntentSuggestions:(bool)arg1;
- (void)setSupportRapAffordance:(bool)arg1;
- (void)setSupportSectionHeader:(bool)arg1;
- (void)setSupportStructuredRapAffordance:(bool)arg1;
- (void)setSupportUnresolvedDirectionIntent:(bool)arg1;
- (void)setSupportedAutocompleteResultCellTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setSupportedHighlightTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setSupportedListTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setSupportedPlaceSummaryFormatTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setVenueIdentifier:(id)arg1;
- (void)setViewportInfo:(id)arg1;
- (bool)supportClientRankingCompositeFeatures;
- (bool)supportClientRankingFeatureMetadata;
- (bool)supportDirectionIntentSuggestions;
- (bool)supportRapAffordance;
- (bool)supportSectionHeader;
- (bool)supportStructuredRapAffordance;
- (bool)supportUnresolvedDirectionIntent;
- (int)supportedAutocompleteResultCellTypeAtIndex:(unsigned long long)arg1;
- (int*)supportedAutocompleteResultCellTypes;
- (id)supportedAutocompleteResultCellTypesAsString:(int)arg1;
- (unsigned long long)supportedAutocompleteResultCellTypesCount;
- (int)supportedHighlightTypeAtIndex:(unsigned long long)arg1;
- (int*)supportedHighlightTypes;
- (id)supportedHighlightTypesAsString:(int)arg1;
- (unsigned long long)supportedHighlightTypesCount;
- (int)supportedListTypeAtIndex:(unsigned long long)arg1;
- (int*)supportedListTypes;
- (id)supportedListTypesAsString:(int)arg1;
- (unsigned long long)supportedListTypesCount;
- (int)supportedPlaceSummaryFormatTypeAtIndex:(unsigned long long)arg1;
- (int*)supportedPlaceSummaryFormatTypes;
- (id)supportedPlaceSummaryFormatTypesAsString:(int)arg1;
- (unsigned long long)supportedPlaceSummaryFormatTypesCount;
- (id)unknownFields;
- (id)venueIdentifier;
- (id)viewportInfo;
- (void)writeTo:(id)arg1;

@end
