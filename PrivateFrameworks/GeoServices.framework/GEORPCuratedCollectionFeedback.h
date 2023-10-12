/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPCuratedCollectionFeedback : PBCodable <NSCopying> {
    GEORPCuratedCollectionContext * _curatedCollectionContext;
    GEORPCuratedCollectionCorrections * _curatedCollectionCorrections;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_curatedCollectionContext : 1; 
        unsigned int read_curatedCollectionCorrections : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEORPCuratedCollectionContext *curatedCollectionContext;
@property (nonatomic, retain) GEORPCuratedCollectionCorrections *curatedCollectionCorrections;
@property (nonatomic, readonly) bool hasCuratedCollectionContext;
@property (nonatomic, readonly) bool hasCuratedCollectionCorrections;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)curatedCollectionContext;
- (id)curatedCollectionCorrections;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCuratedCollectionContext;
- (bool)hasCuratedCollectionCorrections;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCuratedCollectionContext:(id)arg1;
- (void)setCuratedCollectionCorrections:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
