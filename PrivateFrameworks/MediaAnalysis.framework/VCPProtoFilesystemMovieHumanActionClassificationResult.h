/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis
 */

@interface VCPProtoFilesystemMovieHumanActionClassificationResult : PBCodable <NSCopying, VCPProtoResultLegacyConversionProtocol> {
    float  _duration;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _identifiers;
    float  _start;
}

@property (nonatomic) float duration;
@property (nonatomic, readonly) unsigned int*identifiers;
@property (nonatomic, readonly) unsigned long long identifiersCount;
@property (nonatomic) float start;

- (void)addIdentifier:(unsigned int)arg1;
- (void)clearIdentifiers;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (float)duration;
- (unsigned long long)hash;
- (unsigned int)identifierAtIndex:(unsigned long long)arg1;
- (unsigned int*)identifiers;
- (unsigned long long)identifiersCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDuration:(float)arg1;
- (void)setIdentifiers:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setStart:(float)arg1;
- (float)start;
- (void)writeTo:(id)arg1;

// VCPProtoFilesystemMovieHumanActionClassificationResult (LegacyConversion)

+ (id)resultFromLegacyDictionary:(id)arg1;

- (id)exportToLegacyDictionary;

@end
