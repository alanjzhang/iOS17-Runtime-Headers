/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPBTransitAccessPoint : PBCodable <NSCopying> {
    unsigned int  _accessPointIndex;
    NSString * _entranceNameDisplayString;
    NSMutableArray * _entranceZoomNames;
    NSString * _exitNameDisplayString;
    NSMutableArray * _exitZoomNames;
    struct { 
        unsigned int has_muid : 1; 
        unsigned int has_accessPointIndex : 1; 
        unsigned int has_stationIndex : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_entranceNameDisplayString : 1; 
        unsigned int read_entranceZoomNames : 1; 
        unsigned int read_exitNameDisplayString : 1; 
        unsigned int read_exitZoomNames : 1; 
        unsigned int read_location : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOLatLng * _location;
    unsigned long long  _muid;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    unsigned int  _stationIndex;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) unsigned int accessPointIndex;
@property (nonatomic, retain) NSString *entranceNameDisplayString;
@property (nonatomic, retain) NSMutableArray *entranceZoomNames;
@property (nonatomic, retain) NSString *exitNameDisplayString;
@property (nonatomic, retain) NSMutableArray *exitZoomNames;
@property (nonatomic) bool hasAccessPointIndex;
@property (nonatomic, readonly) bool hasEntranceNameDisplayString;
@property (nonatomic, readonly) bool hasExitNameDisplayString;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic) bool hasMuid;
@property (nonatomic) bool hasStationIndex;
@property (nonatomic, retain) GEOLatLng *location;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) unsigned int stationIndex;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)entranceZoomNameType;
+ (Class)exitZoomNameType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (unsigned int)accessPointIndex;
- (void)addEntranceZoomName:(id)arg1;
- (void)addExitZoomName:(id)arg1;
- (void)clearEntranceZoomNames;
- (void)clearExitZoomNames;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entranceNameDisplayString;
- (id)entranceZoomNameAtIndex:(unsigned long long)arg1;
- (id)entranceZoomNames;
- (unsigned long long)entranceZoomNamesCount;
- (id)exitNameDisplayString;
- (id)exitZoomNameAtIndex:(unsigned long long)arg1;
- (id)exitZoomNames;
- (unsigned long long)exitZoomNamesCount;
- (bool)hasAccessPointIndex;
- (bool)hasEntranceNameDisplayString;
- (bool)hasExitNameDisplayString;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasLocation;
- (bool)hasMuid;
- (bool)hasStationIndex;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)location;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccessPointIndex:(unsigned int)arg1;
- (void)setEntranceNameDisplayString:(id)arg1;
- (void)setEntranceZoomNames:(id)arg1;
- (void)setExitNameDisplayString:(id)arg1;
- (void)setExitZoomNames:(id)arg1;
- (void)setHasAccessPointIndex:(bool)arg1;
- (void)setHasMuid:(bool)arg1;
- (void)setHasStationIndex:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setStationIndex:(unsigned int)arg1;
- (unsigned int)stationIndex;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

// GEOPBTransitAccessPoint (GEOTransitExtras)

- (id)bestEntranceName;
- (id)bestEntranceNameWithLocale:(out id*)arg1;
- (id)bestExitName;
- (id)bestExitNameWithLocale:(out id*)arg1;
- (id)identifier;

@end
