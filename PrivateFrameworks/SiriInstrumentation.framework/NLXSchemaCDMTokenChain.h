/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface NLXSchemaCDMTokenChain : SISchemaInstrumentationMessage {
    SISchemaUUID * _asrHypothesisId;
    bool  _hasAsrHypothesisId;
    NSArray * _tokens;
}

@property (nonatomic, retain) SISchemaUUID *asrHypothesisId;
@property (nonatomic) bool hasAsrHypothesisId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *tokens;

- (void).cxx_destruct;
- (void)addTokens:(id)arg1;
- (id)asrHypothesisId;
- (void)clearTokens;
- (void)deleteAsrHypothesisId;
- (void)deleteTokens;
- (id)dictionaryRepresentation;
- (bool)hasAsrHypothesisId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAsrHypothesisId:(id)arg1;
- (void)setHasAsrHypothesisId:(bool)arg1;
- (void)setTokens:(id)arg1;
- (id)tokens;
- (id)tokensAtIndex:(unsigned long long)arg1;
- (unsigned long long)tokensCount;
- (void)writeTo:(id)arg1;

// NLXSchemaCDMTokenChain (SensitiveConditions)

- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)suppressMessageUnderConditions;

@end
