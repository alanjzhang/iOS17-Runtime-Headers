/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDLocationInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int read_localityName : 1; 
        unsigned int read_locationName : 1; 
        unsigned int read_secondaryLocationName : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _localityName;
    NSString * _locationName;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _secondaryLocationName;
}

@property (nonatomic, readonly) bool hasLocalityName;
@property (nonatomic, readonly) bool hasLocationName;
@property (nonatomic, readonly) bool hasSecondaryLocationName;
@property (nonatomic, retain) NSString *localityName;
@property (nonatomic, retain) NSString *locationName;
@property (nonatomic, retain) NSString *secondaryLocationName;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLocalityName;
- (bool)hasLocationName;
- (bool)hasSecondaryLocationName;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)localityName;
- (id)locationName;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)secondaryLocationName;
- (void)setLocalityName:(id)arg1;
- (void)setLocationName:(id)arg1;
- (void)setSecondaryLocationName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
