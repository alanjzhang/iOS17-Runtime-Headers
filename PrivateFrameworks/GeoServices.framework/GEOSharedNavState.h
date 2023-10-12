/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSharedNavState : PBCodable <NSCopying> {
    bool  _arrived;
    bool  _closed;
    unsigned int  _currentWaypointIndex;
    GEOMapItemStorage * _destinationInfo;
    NSMutableArray * _etaInfos;
    struct { 
        unsigned int has_localUpdatedTimestamp : 1; 
        unsigned int has_updatedTimestamp : 1; 
        unsigned int has_currentWaypointIndex : 1; 
        unsigned int has_protocolVersion : 1; 
        unsigned int has_referenceFrame : 1; 
        unsigned int has_transportType : 1; 
        unsigned int has_arrived : 1; 
        unsigned int has_closed : 1; 
        unsigned int has_muted : 1; 
        unsigned int has_resumed : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_destinationInfo : 1; 
        unsigned int read_etaInfos : 1; 
        unsigned int read_groupIdentifier : 1; 
        unsigned int read_lastLocation : 1; 
        unsigned int read_routeInfo : 1; 
        unsigned int read_senderInfo : 1; 
        unsigned int read_waypointInfos : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _groupIdentifier;
    GEOSharedNavLocationInfo * _lastLocation;
    double  _localUpdatedTimestamp;
    bool  _muted;
    unsigned int  _protocolVersion;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _referenceFrame;
    bool  _resumed;
    GEOSharedNavRouteInfo * _routeInfo;
    GEOSharedNavSenderInfo * _senderInfo;
    unsigned int  _transportType;
    PBUnknownFields * _unknownFields;
    double  _updatedTimestamp;
    NSMutableArray * _waypointInfos;
}

@property (nonatomic) bool arrived;
@property (nonatomic) bool closed;
@property (nonatomic) unsigned int currentWaypointIndex;
@property (nonatomic, retain) GEOMapItemStorage *destinationInfo;
@property (nonatomic, retain) NSMutableArray *etaInfos;
@property (nonatomic, retain) NSString *groupIdentifier;
@property (nonatomic) bool hasArrived;
@property (nonatomic) bool hasClosed;
@property (nonatomic) bool hasCurrentWaypointIndex;
@property (nonatomic, readonly) bool hasDestinationInfo;
@property (nonatomic, readonly) bool hasGroupIdentifier;
@property (nonatomic, readonly) bool hasLastLocation;
@property (nonatomic) bool hasLocalUpdatedTimestamp;
@property (nonatomic) bool hasMuted;
@property (nonatomic) bool hasProtocolVersion;
@property (nonatomic) bool hasReferenceFrame;
@property (nonatomic) bool hasResumed;
@property (nonatomic, readonly) bool hasRouteInfo;
@property (nonatomic, readonly) bool hasSenderInfo;
@property (nonatomic) bool hasTransportType;
@property (nonatomic) bool hasUpdatedTimestamp;
@property (nonatomic, retain) GEOSharedNavLocationInfo *lastLocation;
@property (nonatomic) double localUpdatedTimestamp;
@property (nonatomic) bool muted;
@property (nonatomic) unsigned int protocolVersion;
@property (nonatomic) int referenceFrame;
@property (nonatomic) bool resumed;
@property (nonatomic, retain) GEOSharedNavRouteInfo *routeInfo;
@property (nonatomic, retain) GEOSharedNavSenderInfo *senderInfo;
@property (nonatomic) unsigned int transportType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) double updatedTimestamp;
@property (nonatomic, retain) NSMutableArray *waypointInfos;

+ (Class)etaInfoType;
+ (bool)isValid:(id)arg1;
+ (Class)waypointInfoType;

- (void).cxx_destruct;
- (int)StringAsReferenceFrame:(id)arg1;
- (void)addEtaInfo:(id)arg1;
- (void)addWaypointInfo:(id)arg1;
- (bool)arrived;
- (void)clearEtaInfos;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)clearWaypointInfos;
- (bool)closed;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)currentWaypointIndex;
- (id)description;
- (id)destinationInfo;
- (id)dictionaryRepresentation;
- (id)etaInfoAtIndex:(unsigned long long)arg1;
- (id)etaInfos;
- (unsigned long long)etaInfosCount;
- (id)groupIdentifier;
- (bool)hasArrived;
- (bool)hasClosed;
- (bool)hasCurrentWaypointIndex;
- (bool)hasDestinationInfo;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasGroupIdentifier;
- (bool)hasLastLocation;
- (bool)hasLocalUpdatedTimestamp;
- (bool)hasMuted;
- (bool)hasProtocolVersion;
- (bool)hasReferenceFrame;
- (bool)hasResumed;
- (bool)hasRouteInfo;
- (bool)hasSenderInfo;
- (bool)hasTransportType;
- (bool)hasUpdatedTimestamp;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)lastLocation;
- (double)localUpdatedTimestamp;
- (void)mergeFrom:(id)arg1;
- (bool)muted;
- (unsigned int)protocolVersion;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (int)referenceFrame;
- (id)referenceFrameAsString:(int)arg1;
- (bool)resumed;
- (id)routeInfo;
- (id)senderInfo;
- (void)setArrived:(bool)arg1;
- (void)setClosed:(bool)arg1;
- (void)setCurrentWaypointIndex:(unsigned int)arg1;
- (void)setDestinationInfo:(id)arg1;
- (void)setEtaInfos:(id)arg1;
- (void)setGroupIdentifier:(id)arg1;
- (void)setHasArrived:(bool)arg1;
- (void)setHasClosed:(bool)arg1;
- (void)setHasCurrentWaypointIndex:(bool)arg1;
- (void)setHasLocalUpdatedTimestamp:(bool)arg1;
- (void)setHasMuted:(bool)arg1;
- (void)setHasProtocolVersion:(bool)arg1;
- (void)setHasReferenceFrame:(bool)arg1;
- (void)setHasResumed:(bool)arg1;
- (void)setHasTransportType:(bool)arg1;
- (void)setHasUpdatedTimestamp:(bool)arg1;
- (void)setLastLocation:(id)arg1;
- (void)setLocalUpdatedTimestamp:(double)arg1;
- (void)setMuted:(bool)arg1;
- (void)setProtocolVersion:(unsigned int)arg1;
- (void)setReferenceFrame:(int)arg1;
- (void)setResumed:(bool)arg1;
- (void)setRouteInfo:(id)arg1;
- (void)setSenderInfo:(id)arg1;
- (void)setTransportType:(unsigned int)arg1;
- (void)setUpdatedTimestamp:(double)arg1;
- (void)setWaypointInfos:(id)arg1;
- (unsigned int)transportType;
- (id)unknownFields;
- (double)updatedTimestamp;
- (id)waypointInfoAtIndex:(unsigned long long)arg1;
- (id)waypointInfos;
- (unsigned long long)waypointInfosCount;
- (void)writeTo:(id)arg1;

@end