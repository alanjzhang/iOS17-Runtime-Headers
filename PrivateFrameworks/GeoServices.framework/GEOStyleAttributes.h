/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOStyleAttributes : PBCodable <NSCopying> {
    NSMutableArray * _attributes;
    unsigned long long  _customIconId;
    struct { 
        unsigned int has_customIconId : 1; 
    }  _flags;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *attributes;
@property (nonatomic) unsigned long long customIconId;
@property (nonatomic) bool hasCustomIconId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)attributeType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addAttribute:(id)arg1;
- (id)attributeAtIndex:(unsigned long long)arg1;
- (id)attributes;
- (unsigned long long)attributesCount;
- (void)clearAttributes;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)customIconId;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCustomIconId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setCustomIconId:(unsigned long long)arg1;
- (void)setHasCustomIconId:(bool)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

// GEOStyleAttributes (GEOFeatureStyleAttributesSupport)

- (id)initWithGEOFeatureStyleAttributes:(id)arg1;

// GEOStyleAttributes (GEOTransitExtras)

+ (id)attributesForTransitLine:(id)arg1;
+ (id)attributesForTransitSystem:(id)arg1;

@end
