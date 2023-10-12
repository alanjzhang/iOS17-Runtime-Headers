/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis
 */

@interface VCPProtoImageJunkResult : PBCodable <NSCopying, VCPProtoResultLegacyConversionProtocol> {
    float  _confidence;
}

@property (nonatomic) float confidence;

- (float)confidence;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConfidence:(float)arg1;
- (void)writeTo:(id)arg1;

// VCPProtoImageJunkResult (LegacyConversion)

+ (id)resultFromLegacyDictionary:(id)arg1;

- (id)exportToLegacyDictionary;

@end