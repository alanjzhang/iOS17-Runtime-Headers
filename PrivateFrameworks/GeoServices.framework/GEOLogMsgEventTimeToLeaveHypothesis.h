/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgEventTimeToLeaveHypothesis : PBCodable <NSCopying> {
    int  _arrival;
    int  _departure;
    double  _earliestArrivalOffset;
    double  _earliestDepartureOffset;
    struct { 
        unsigned int has_earliestArrivalOffset : 1; 
        unsigned int has_earliestDepartureOffset : 1; 
        unsigned int has_latestArrivalOffset : 1; 
        unsigned int has_latestDepartureOffset : 1; 
        unsigned int has_arrival : 1; 
        unsigned int has_departure : 1; 
        unsigned int has_numberOfReroutes : 1; 
        unsigned int has_ttlUiNotificationShown : 1; 
    }  _flags;
    double  _latestArrivalOffset;
    double  _latestDepartureOffset;
    unsigned int  _numberOfReroutes;
    int  _ttlUiNotificationShown;
}

@property (nonatomic) int arrival;
@property (nonatomic) int departure;
@property (nonatomic) double earliestArrivalOffset;
@property (nonatomic) double earliestDepartureOffset;
@property (nonatomic) bool hasArrival;
@property (nonatomic) bool hasDeparture;
@property (nonatomic) bool hasEarliestArrivalOffset;
@property (nonatomic) bool hasEarliestDepartureOffset;
@property (nonatomic) bool hasLatestArrivalOffset;
@property (nonatomic) bool hasLatestDepartureOffset;
@property (nonatomic) bool hasNumberOfReroutes;
@property (nonatomic) bool hasTtlUiNotificationShown;
@property (nonatomic) double latestArrivalOffset;
@property (nonatomic) double latestDepartureOffset;
@property (nonatomic) unsigned int numberOfReroutes;
@property (nonatomic) int ttlUiNotificationShown;

+ (bool)isValid:(id)arg1;

- (int)StringAsArrival:(id)arg1;
- (int)StringAsDeparture:(id)arg1;
- (int)StringAsTtlUiNotificationShown:(id)arg1;
- (int)arrival;
- (id)arrivalAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)departure;
- (id)departureAsString:(int)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)earliestArrivalOffset;
- (double)earliestDepartureOffset;
- (bool)hasArrival;
- (bool)hasDeparture;
- (bool)hasEarliestArrivalOffset;
- (bool)hasEarliestDepartureOffset;
- (bool)hasLatestArrivalOffset;
- (bool)hasLatestDepartureOffset;
- (bool)hasNumberOfReroutes;
- (bool)hasTtlUiNotificationShown;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (double)latestArrivalOffset;
- (double)latestDepartureOffset;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numberOfReroutes;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setArrival:(int)arg1;
- (void)setDeparture:(int)arg1;
- (void)setEarliestArrivalOffset:(double)arg1;
- (void)setEarliestDepartureOffset:(double)arg1;
- (void)setHasArrival:(bool)arg1;
- (void)setHasDeparture:(bool)arg1;
- (void)setHasEarliestArrivalOffset:(bool)arg1;
- (void)setHasEarliestDepartureOffset:(bool)arg1;
- (void)setHasLatestArrivalOffset:(bool)arg1;
- (void)setHasLatestDepartureOffset:(bool)arg1;
- (void)setHasNumberOfReroutes:(bool)arg1;
- (void)setHasTtlUiNotificationShown:(bool)arg1;
- (void)setLatestArrivalOffset:(double)arg1;
- (void)setLatestDepartureOffset:(double)arg1;
- (void)setNumberOfReroutes:(unsigned int)arg1;
- (void)setTtlUiNotificationShown:(int)arg1;
- (int)ttlUiNotificationShown;
- (id)ttlUiNotificationShownAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
