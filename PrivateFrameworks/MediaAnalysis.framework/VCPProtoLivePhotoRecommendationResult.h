/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis
 */

@interface VCPProtoLivePhotoRecommendationResult : PBCodable <NSCopying, VCPProtoResultLegacyConversionProtocol> {
    float  _qualityScore;
    VCPProtoTimeRange * _timeRange;
}

@property (nonatomic) float qualityScore;
@property (nonatomic, retain) VCPProtoTimeRange *timeRange;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (float)qualityScore;
- (bool)readFrom:(id)arg1;
- (void)setQualityScore:(float)arg1;
- (void)setTimeRange:(id)arg1;
- (id)timeRange;
- (void)writeTo:(id)arg1;

// VCPProtoLivePhotoRecommendationResult (LegacyConversion)

+ (id)resultFromLegacyDictionary:(id)arg1;

- (id)exportToLegacyDictionary;

@end
