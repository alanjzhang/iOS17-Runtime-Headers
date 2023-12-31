/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSharedNavLocationInfo : PBCodable <NSCopying> {
    GEOLatLng * _coordinate;
    struct { 
        unsigned int has_matchedCoordinateIndex : 1; 
        unsigned int has_matchedCoordinateOffset : 1; 
    }  _flags;
    unsigned int  _matchedCoordinateIndex;
    float  _matchedCoordinateOffset;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOLatLng *coordinate;
@property (nonatomic, readonly) bool hasCoordinate;
@property (nonatomic) bool hasMatchedCoordinateIndex;
@property (nonatomic) bool hasMatchedCoordinateOffset;
@property (nonatomic) unsigned int matchedCoordinateIndex;
@property (nonatomic) float matchedCoordinateOffset;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (id)coordinate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCoordinate;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasMatchedCoordinateIndex;
- (bool)hasMatchedCoordinateOffset;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (unsigned int)matchedCoordinateIndex;
- (float)matchedCoordinateOffset;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCoordinate:(id)arg1;
- (void)setHasMatchedCoordinateIndex:(bool)arg1;
- (void)setHasMatchedCoordinateOffset:(bool)arg1;
- (void)setMatchedCoordinateIndex:(unsigned int)arg1;
- (void)setMatchedCoordinateOffset:(float)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
