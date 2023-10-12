/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis
 */

@interface VCPProtoLivePhotoEffectsResult : PBCodable <NSCopying, VCPProtoResultLegacyConversionProtocol> {
    unsigned long long  _longExposureSuggestionState;
    unsigned long long  _loopSuggestionState;
    NSData * _recipeBlob;
}

@property (nonatomic, readonly) bool hasRecipeBlob;
@property (nonatomic) unsigned long long longExposureSuggestionState;
@property (nonatomic) unsigned long long loopSuggestionState;
@property (nonatomic, retain) NSData *recipeBlob;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRecipeBlob;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)longExposureSuggestionState;
- (unsigned long long)loopSuggestionState;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)recipeBlob;
- (void)setLongExposureSuggestionState:(unsigned long long)arg1;
- (void)setLoopSuggestionState:(unsigned long long)arg1;
- (void)setRecipeBlob:(id)arg1;
- (void)writeTo:(id)arg1;

// VCPProtoLivePhotoEffectsResult (LegacyConversion)

+ (id)resultFromLegacyDictionary:(id)arg1;

- (id)exportToLegacyDictionary;

@end
