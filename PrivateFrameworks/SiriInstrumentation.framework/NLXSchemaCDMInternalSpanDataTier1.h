/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface NLXSchemaCDMInternalSpanDataTier1 : SISchemaInstrumentationMessage {
    bool  _hasSiriVocabularySpanData;
    NLXSchemaCDMSiriVocabularySpanDataTier1 * _siriVocabularySpanData;
}

@property (nonatomic) bool hasSiriVocabularySpanData;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) NLXSchemaCDMSiriVocabularySpanDataTier1 *siriVocabularySpanData;

- (void).cxx_destruct;
- (void)deleteSiriVocabularySpanData;
- (id)dictionaryRepresentation;
- (bool)hasSiriVocabularySpanData;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasSiriVocabularySpanData:(bool)arg1;
- (void)setSiriVocabularySpanData:(id)arg1;
- (id)siriVocabularySpanData;
- (void)writeTo:(id)arg1;

// NLXSchemaCDMInternalSpanDataTier1 (SensitiveConditions)

- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)suppressMessageUnderConditions;

@end
