/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDResultRefinementGuidesHome : PBCodable <NSCopying> {
    GEOLatLng * _center;
    NSString * _displayName;
    struct { 
        unsigned int has_type : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_center : 1; 
        unsigned int read_displayName : 1; 
        unsigned int read_hint : 1; 
        unsigned int read_mapRegion : 1; 
        unsigned int read_metadata : 1; 
        unsigned int read_placeId : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOPDRelatedSearchSuggestion * _hint;
    GEOMapRegion * _mapRegion;
    GEOPDResultRefinementMetadata * _metadata;
    GEOPDMapsIdentifier * _placeId;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _type;
    PBUnknownFields * _unknownFields;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
