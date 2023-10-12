/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgEventRideBookedSession : PBCodable <NSCopying> {
    bool  _bookedUsingMaps;
    bool  _cancelled;
    bool  _contactedDriver;
    struct { 
        unsigned int has_statusIssue : 1; 
        unsigned int has_bookedUsingMaps : 1; 
        unsigned int has_cancelled : 1; 
        unsigned int has_contactedDriver : 1; 
        unsigned int has_invalidVehicleLocation : 1; 
        unsigned int has_missingVehicleLocation : 1; 
        unsigned int has_tappedProactiveTrayItem : 1; 
        unsigned int has_viewedDetails : 1; 
        unsigned int has_viewedInProactiveTray : 1; 
        unsigned int read_intentResponseFailures : 1; 
        unsigned int read_rideAppId : 1; 
        unsigned int read_rideAppVersion : 1; 
        unsigned int read_rideBookedSessionId : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _intentResponseFailures;
    bool  _invalidVehicleLocation;
    bool  _missingVehicleLocation;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _rideAppId;
    NSString * _rideAppVersion;
    NSString * _rideBookedSessionId;
    int  _statusIssue;
    bool  _tappedProactiveTrayItem;
    bool  _viewedDetails;
    bool  _viewedInProactiveTray;
}

@property (nonatomic) bool bookedUsingMaps;
@property (nonatomic) bool cancelled;
@property (nonatomic) bool contactedDriver;
@property (nonatomic) bool hasBookedUsingMaps;
@property (nonatomic) bool hasCancelled;
@property (nonatomic) bool hasContactedDriver;
@property (nonatomic) bool hasInvalidVehicleLocation;
@property (nonatomic) bool hasMissingVehicleLocation;
@property (nonatomic, readonly) bool hasRideAppId;
@property (nonatomic, readonly) bool hasRideAppVersion;
@property (nonatomic, readonly) bool hasRideBookedSessionId;
@property (nonatomic) bool hasStatusIssue;
@property (nonatomic) bool hasTappedProactiveTrayItem;
@property (nonatomic) bool hasViewedDetails;
@property (nonatomic) bool hasViewedInProactiveTray;
@property (nonatomic, retain) NSMutableArray *intentResponseFailures;
@property (nonatomic) bool invalidVehicleLocation;
@property (nonatomic) bool missingVehicleLocation;
@property (nonatomic, retain) NSString *rideAppId;
@property (nonatomic, retain) NSString *rideAppVersion;
@property (nonatomic, retain) NSString *rideBookedSessionId;
@property (nonatomic) int statusIssue;
@property (nonatomic) bool tappedProactiveTrayItem;
@property (nonatomic) bool viewedDetails;
@property (nonatomic) bool viewedInProactiveTray;

+ (Class)intentResponseFailureType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsStatusIssue:(id)arg1;
- (void)addIntentResponseFailure:(id)arg1;
- (bool)bookedUsingMaps;
- (bool)cancelled;
- (void)clearIntentResponseFailures;
- (bool)contactedDriver;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBookedUsingMaps;
- (bool)hasCancelled;
- (bool)hasContactedDriver;
- (bool)hasInvalidVehicleLocation;
- (bool)hasMissingVehicleLocation;
- (bool)hasRideAppId;
- (bool)hasRideAppVersion;
- (bool)hasRideBookedSessionId;
- (bool)hasStatusIssue;
- (bool)hasTappedProactiveTrayItem;
- (bool)hasViewedDetails;
- (bool)hasViewedInProactiveTray;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)intentResponseFailureAtIndex:(unsigned long long)arg1;
- (id)intentResponseFailures;
- (unsigned long long)intentResponseFailuresCount;
- (bool)invalidVehicleLocation;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (bool)missingVehicleLocation;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)rideAppId;
- (id)rideAppVersion;
- (id)rideBookedSessionId;
- (void)setBookedUsingMaps:(bool)arg1;
- (void)setCancelled:(bool)arg1;
- (void)setContactedDriver:(bool)arg1;
- (void)setHasBookedUsingMaps:(bool)arg1;
- (void)setHasCancelled:(bool)arg1;
- (void)setHasContactedDriver:(bool)arg1;
- (void)setHasInvalidVehicleLocation:(bool)arg1;
- (void)setHasMissingVehicleLocation:(bool)arg1;
- (void)setHasStatusIssue:(bool)arg1;
- (void)setHasTappedProactiveTrayItem:(bool)arg1;
- (void)setHasViewedDetails:(bool)arg1;
- (void)setHasViewedInProactiveTray:(bool)arg1;
- (void)setIntentResponseFailures:(id)arg1;
- (void)setInvalidVehicleLocation:(bool)arg1;
- (void)setMissingVehicleLocation:(bool)arg1;
- (void)setRideAppId:(id)arg1;
- (void)setRideAppVersion:(id)arg1;
- (void)setRideBookedSessionId:(id)arg1;
- (void)setStatusIssue:(int)arg1;
- (void)setTappedProactiveTrayItem:(bool)arg1;
- (void)setViewedDetails:(bool)arg1;
- (void)setViewedInProactiveTray:(bool)arg1;
- (int)statusIssue;
- (id)statusIssueAsString:(int)arg1;
- (bool)tappedProactiveTrayItem;
- (bool)viewedDetails;
- (bool)viewedInProactiveTray;
- (void)writeTo:(id)arg1;

@end
