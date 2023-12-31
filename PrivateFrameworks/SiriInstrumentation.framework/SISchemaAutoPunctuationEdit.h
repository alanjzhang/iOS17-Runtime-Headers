/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SISchemaAutoPunctuationEdit : SISchemaInstrumentationMessage {
    NSString * _correctedPunctuation;
    bool  _hasCorrectedPunctuation;
    bool  _hasRecognizedPunctuation;
    NSString * _recognizedPunctuation;
}

@property (nonatomic, copy) NSString *correctedPunctuation;
@property (nonatomic) bool hasCorrectedPunctuation;
@property (nonatomic) bool hasRecognizedPunctuation;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *recognizedPunctuation;

- (void).cxx_destruct;
- (id)correctedPunctuation;
- (void)deleteCorrectedPunctuation;
- (void)deleteRecognizedPunctuation;
- (id)dictionaryRepresentation;
- (bool)hasCorrectedPunctuation;
- (bool)hasRecognizedPunctuation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)recognizedPunctuation;
- (void)setCorrectedPunctuation:(id)arg1;
- (void)setHasCorrectedPunctuation:(bool)arg1;
- (void)setHasRecognizedPunctuation:(bool)arg1;
- (void)setRecognizedPunctuation:(id)arg1;
- (void)writeTo:(id)arg1;

// SISchemaAutoPunctuationEdit (SensitiveConditions)

- (id)suppressMessageUnderConditions;

@end
