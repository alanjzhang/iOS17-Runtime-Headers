/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPhotoContent : PBCodable <NSCopying> {
    struct { 
        unsigned int has_height : 1; 
        unsigned int has_urlType : 1; 
        unsigned int has_width : 1; 
    }  _flags;
    unsigned int  _height;
    PBUnknownFields * _unknownFields;
    NSString * _url;
    int  _urlType;
    unsigned int  _width;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

// GEOPDPhotoContent (PlaceDataExtras)

- (unsigned long long)_area;

@end
