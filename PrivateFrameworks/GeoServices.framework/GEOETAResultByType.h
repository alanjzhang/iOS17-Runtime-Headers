/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOETAResultByType : PBCodable <NSCopying> {
    unsigned int  _distance;
    double  _expectedTimeOfDeparture;
    struct { 
        unsigned int has_expectedTimeOfDeparture : 1; 
        unsigned int has_distance : 1; 
        unsigned int has_historicTravelTime : 1; 
        unsigned int has_licensePlateRestrictionImpact : 1; 
        unsigned int has_staticTravelTime : 1; 
        unsigned int has_status : 1; 
        unsigned int has_transportType : 1; 
        unsigned int has_travelTimeBestEstimate : 1; 
        unsigned int has_travelTimeAggressiveEstimate : 1; 
        unsigned int has_travelTimeConservativeEstimate : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_routeTrafficDetail : 1; 
        unsigned int read_shortTrafficSummary : 1; 
        unsigned int read_summaryForPredictedDestinations : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    unsigned int  _historicTravelTime;
    int  _licensePlateRestrictionImpact;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEORouteTrafficDetail * _routeTrafficDetail;
    GEOShortTrafficSummary * _shortTrafficSummary;
    unsigned int  _staticTravelTime;
    int  _status;
    NSMutableArray * _summaryForPredictedDestinations;
    int  _transportType;
    unsigned int  _travelTimeAggressiveEstimate;
    unsigned int  _travelTimeBestEstimate;
    unsigned int  _travelTimeConservativeEstimate;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) unsigned int distance;
@property (nonatomic) double expectedTimeOfDeparture;
@property (nonatomic) bool hasDistance;
@property (nonatomic) bool hasExpectedTimeOfDeparture;
@property (nonatomic) bool hasHistoricTravelTime;
@property (nonatomic) bool hasLicensePlateRestrictionImpact;
@property (nonatomic, readonly) bool hasRouteTrafficDetail;
@property (nonatomic, readonly) bool hasShortTrafficSummary;
@property (nonatomic) bool hasStaticTravelTime;
@property (nonatomic) bool hasStatus;
@property (nonatomic) bool hasTransportType;
@property (nonatomic) bool hasTravelTimeAggressiveEstimate;
@property (nonatomic) bool hasTravelTimeBestEstimate;
@property (nonatomic) bool hasTravelTimeConservativeEstimate;
@property (nonatomic) unsigned int historicTravelTime;
@property (nonatomic) int licensePlateRestrictionImpact;
@property (nonatomic, retain) GEORouteTrafficDetail *routeTrafficDetail;
@property (nonatomic, retain) GEOShortTrafficSummary *shortTrafficSummary;
@property (nonatomic) unsigned int staticTravelTime;
@property (nonatomic) int status;
@property (nonatomic, retain) NSMutableArray *summaryForPredictedDestinations;
@property (nonatomic) int transportType;
@property (nonatomic) unsigned int travelTimeAggressiveEstimate;
@property (nonatomic) unsigned int travelTimeBestEstimate;
@property (nonatomic) unsigned int travelTimeConservativeEstimate;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (Class)summaryForPredictedDestinationType;

- (void).cxx_destruct;
- (int)StringAsLicensePlateRestrictionImpact:(id)arg1;
- (int)StringAsStatus:(id)arg1;
- (int)StringAsTransportType:(id)arg1;
- (void)addSummaryForPredictedDestination:(id)arg1;
- (void)clearSummaryForPredictedDestinations;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)distance;
- (double)expectedTimeOfDeparture;
- (bool)hasDistance;
- (bool)hasExpectedTimeOfDeparture;
- (bool)hasHistoricTravelTime;
- (bool)hasLicensePlateRestrictionImpact;
- (bool)hasRouteTrafficDetail;
- (bool)hasShortTrafficSummary;
- (bool)hasStaticTravelTime;
- (bool)hasStatus;
- (bool)hasTransportType;
- (bool)hasTravelTimeAggressiveEstimate;
- (bool)hasTravelTimeBestEstimate;
- (bool)hasTravelTimeConservativeEstimate;
- (unsigned long long)hash;
- (unsigned int)historicTravelTime;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (int)licensePlateRestrictionImpact;
- (id)licensePlateRestrictionImpactAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)routeTrafficDetail;
- (void)setDistance:(unsigned int)arg1;
- (void)setExpectedTimeOfDeparture:(double)arg1;
- (void)setHasDistance:(bool)arg1;
- (void)setHasExpectedTimeOfDeparture:(bool)arg1;
- (void)setHasHistoricTravelTime:(bool)arg1;
- (void)setHasLicensePlateRestrictionImpact:(bool)arg1;
- (void)setHasStaticTravelTime:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setHasTransportType:(bool)arg1;
- (void)setHasTravelTimeAggressiveEstimate:(bool)arg1;
- (void)setHasTravelTimeBestEstimate:(bool)arg1;
- (void)setHasTravelTimeConservativeEstimate:(bool)arg1;
- (void)setHistoricTravelTime:(unsigned int)arg1;
- (void)setLicensePlateRestrictionImpact:(int)arg1;
- (void)setRouteTrafficDetail:(id)arg1;
- (void)setShortTrafficSummary:(id)arg1;
- (void)setStaticTravelTime:(unsigned int)arg1;
- (void)setStatus:(int)arg1;
- (void)setSummaryForPredictedDestinations:(id)arg1;
- (void)setTransportType:(int)arg1;
- (void)setTravelTimeAggressiveEstimate:(unsigned int)arg1;
- (void)setTravelTimeBestEstimate:(unsigned int)arg1;
- (void)setTravelTimeConservativeEstimate:(unsigned int)arg1;
- (id)shortTrafficSummary;
- (unsigned int)staticTravelTime;
- (int)status;
- (id)statusAsString:(int)arg1;
- (id)summaryForPredictedDestinationAtIndex:(unsigned long long)arg1;
- (id)summaryForPredictedDestinations;
- (unsigned long long)summaryForPredictedDestinationsCount;
- (int)transportType;
- (id)transportTypeAsString:(int)arg1;
- (unsigned int)travelTimeAggressiveEstimate;
- (unsigned int)travelTimeBestEstimate;
- (unsigned int)travelTimeConservativeEstimate;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
