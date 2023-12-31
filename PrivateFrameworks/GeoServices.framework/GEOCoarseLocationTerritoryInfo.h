/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCoarseLocationTerritoryInfo : PBCodable <NSCopying> {
    double  _areaDegrees;
    double  _areaRatio;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _coordinates;
    unsigned int  _countryName;
    NSString * _countryNameStr;
    unsigned long long  _featureId;
    struct { 
        unsigned int has_representativePoint : 1; 
        unsigned int has_areaDegrees : 1; 
        unsigned int has_areaRatio : 1; 
        unsigned int has_featureId : 1; 
        unsigned int has_maxDistanceMeters : 1; 
        unsigned int has_countryName : 1; 
        unsigned int has_regionName : 1; 
        unsigned int has_representativePointQuality : 1; 
        unsigned int has_revgeoRank : 1; 
        unsigned int has_territoryType : 1; 
        unsigned int has_precise : 1; 
        unsigned int has_shouldRandomize : 1; 
        unsigned int read_coordinates : 1; 
        unsigned int read_countryNameStr : 1; 
        unsigned int read_polygon : 1; 
        unsigned int read_regionNameStr : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    double  _maxDistanceMeters;
    GEOCoarseLocationPolygon * _polygon;
    bool  _precise;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    unsigned int  _regionName;
    NSString * _regionNameStr;
    struct GEOCoarseLocationLatLng { 
        double _lat; 
        double _lng; 
    }  _representativePoint;
    int  _representativePointQuality;
    unsigned int  _revgeoRank;
    bool  _shouldRandomize;
    int  _territoryType;
}

@property (nonatomic) double areaDegrees;
@property (nonatomic) double areaRatio;
@property (nonatomic, readonly) unsigned int*coordinates;
@property (nonatomic, readonly) unsigned long long coordinatesCount;
@property (nonatomic) unsigned int countryName;
@property (nonatomic, retain) NSString *countryNameStr;
@property (nonatomic) unsigned long long featureId;
@property (nonatomic) bool hasAreaDegrees;
@property (nonatomic) bool hasAreaRatio;
@property (nonatomic) bool hasCountryName;
@property (nonatomic, readonly) bool hasCountryNameStr;
@property (nonatomic) bool hasFeatureId;
@property (nonatomic) bool hasMaxDistanceMeters;
@property (nonatomic, readonly) bool hasPolygon;
@property (nonatomic) bool hasPrecise;
@property (nonatomic) bool hasRegionName;
@property (nonatomic, readonly) bool hasRegionNameStr;
@property (nonatomic) bool hasRepresentativePoint;
@property (nonatomic) bool hasRepresentativePointQuality;
@property (nonatomic) bool hasRevgeoRank;
@property (nonatomic) bool hasShouldRandomize;
@property (nonatomic) bool hasTerritoryType;
@property (nonatomic) double maxDistanceMeters;
@property (nonatomic, retain) GEOCoarseLocationPolygon *polygon;
@property (nonatomic) bool precise;
@property (nonatomic) unsigned int regionName;
@property (nonatomic, retain) NSString *regionNameStr;
@property (nonatomic) struct GEOCoarseLocationLatLng { double x1; double x2; } representativePoint;
@property (nonatomic) int representativePointQuality;
@property (nonatomic) unsigned int revgeoRank;
@property (nonatomic) bool shouldRandomize;
@property (nonatomic) int territoryType;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsRepresentativePointQuality:(id)arg1;
- (int)StringAsTerritoryType:(id)arg1;
- (void)addCoordinates:(unsigned int)arg1;
- (double)areaDegrees;
- (double)areaRatio;
- (void)clearCoordinates;
- (unsigned int*)coordinates;
- (unsigned int)coordinatesAtIndex:(unsigned long long)arg1;
- (unsigned long long)coordinatesCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)countryName;
- (id)countryNameStr;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)featureId;
- (bool)hasAreaDegrees;
- (bool)hasAreaRatio;
- (bool)hasCountryName;
- (bool)hasCountryNameStr;
- (bool)hasFeatureId;
- (bool)hasMaxDistanceMeters;
- (bool)hasPolygon;
- (bool)hasPrecise;
- (bool)hasRegionName;
- (bool)hasRegionNameStr;
- (bool)hasRepresentativePoint;
- (bool)hasRepresentativePointQuality;
- (bool)hasRevgeoRank;
- (bool)hasShouldRandomize;
- (bool)hasTerritoryType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (double)maxDistanceMeters;
- (void)mergeFrom:(id)arg1;
- (id)polygon;
- (bool)precise;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)regionName;
- (id)regionNameStr;
- (struct GEOCoarseLocationLatLng { double x1; double x2; })representativePoint;
- (int)representativePointQuality;
- (id)representativePointQualityAsString:(int)arg1;
- (unsigned int)revgeoRank;
- (void)setAreaDegrees:(double)arg1;
- (void)setAreaRatio:(double)arg1;
- (void)setCoordinates:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setCountryName:(unsigned int)arg1;
- (void)setCountryNameStr:(id)arg1;
- (void)setFeatureId:(unsigned long long)arg1;
- (void)setHasAreaDegrees:(bool)arg1;
- (void)setHasAreaRatio:(bool)arg1;
- (void)setHasCountryName:(bool)arg1;
- (void)setHasFeatureId:(bool)arg1;
- (void)setHasMaxDistanceMeters:(bool)arg1;
- (void)setHasPrecise:(bool)arg1;
- (void)setHasRegionName:(bool)arg1;
- (void)setHasRepresentativePoint:(bool)arg1;
- (void)setHasRepresentativePointQuality:(bool)arg1;
- (void)setHasRevgeoRank:(bool)arg1;
- (void)setHasShouldRandomize:(bool)arg1;
- (void)setHasTerritoryType:(bool)arg1;
- (void)setMaxDistanceMeters:(double)arg1;
- (void)setPolygon:(id)arg1;
- (void)setPrecise:(bool)arg1;
- (void)setRegionName:(unsigned int)arg1;
- (void)setRegionNameStr:(id)arg1;
- (void)setRepresentativePoint:(struct GEOCoarseLocationLatLng { double x1; double x2; })arg1;
- (void)setRepresentativePointQuality:(int)arg1;
- (void)setRevgeoRank:(unsigned int)arg1;
- (void)setShouldRandomize:(bool)arg1;
- (void)setTerritoryType:(int)arg1;
- (bool)shouldRandomize;
- (int)territoryType;
- (id)territoryTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
