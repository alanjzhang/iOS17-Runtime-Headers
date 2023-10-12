/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLocationShiftResponse : PBCodable <NSCopying> {
    struct GEOPixelPoint { 
        double _x; 
        double _y; 
        int _z; 
        struct { 
            unsigned int z : 1; 
        } _has; 
    }  _shiftedPixel;
}

@property (nonatomic) struct GEOPixelPoint { double x1; double x2; int x3; struct { unsigned int x_4_1_1 : 1; } x4; } shiftedPixel;

+ (bool)isValid:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setShiftedPixel:(struct GEOPixelPoint { double x1; double x2; int x3; struct { unsigned int x_4_1_1 : 1; } x4; })arg1;
- (struct GEOPixelPoint { double x1; double x2; int x3; struct { unsigned int x_4_1_1 : 1; } x4; })shiftedPixel;
- (void)writeTo:(id)arg1;

@end
