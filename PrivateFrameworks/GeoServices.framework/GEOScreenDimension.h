/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOScreenDimension : PBCodable <NSCopying> {
    struct { 
        unsigned int has_height : 1; 
        unsigned int has_width : 1; 
    }  _flags;
    double  _height;
    PBUnknownFields * _unknownFields;
    double  _width;
}

@property (nonatomic) bool hasHeight;
@property (nonatomic) bool hasWidth;
@property (nonatomic) double height;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) double width;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHeight;
- (bool)hasWidth;
- (unsigned long long)hash;
- (double)height;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasHeight:(bool)arg1;
- (void)setHasWidth:(bool)arg1;
- (void)setHeight:(double)arg1;
- (void)setWidth:(double)arg1;
- (id)unknownFields;
- (double)width;
- (void)writeTo:(id)arg1;

@end
