/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface ORCHSchemaORCHServerFallbackInitiated : SISchemaInstrumentationMessage {
    int  _fallbackReason;
    struct { 
        unsigned int fallbackReason : 1; 
    }  _has;
    NSArray * _missingAssets;
}

@property (nonatomic) int fallbackReason;
@property (nonatomic) bool hasFallbackReason;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *missingAssets;

- (void).cxx_destruct;
- (void)addMissingAsset:(int)arg1;
- (void)clearMissingAsset;
- (void)deleteFallbackReason;
- (void)deleteMissingAsset;
- (id)dictionaryRepresentation;
- (int)fallbackReason;
- (bool)hasFallbackReason;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)missingAssetAtIndex:(unsigned long long)arg1;
- (unsigned long long)missingAssetCount;
- (id)missingAssets;
- (bool)readFrom:(id)arg1;
- (void)setFallbackReason:(int)arg1;
- (void)setHasFallbackReason:(bool)arg1;
- (void)setMissingAssets:(id)arg1;
- (void)writeTo:(id)arg1;

// ORCHSchemaORCHServerFallbackInitiated (SensitiveConditions)

- (id)suppressMessageUnderConditions;

@end
