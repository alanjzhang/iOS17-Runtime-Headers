/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SISchemaUEIDictationAlternativeTextPairsSelected : SISchemaInstrumentationMessage {
    NSArray * _alternativeSelections;
}

@property (nonatomic, copy) NSArray *alternativeSelections;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)addAlternativeSelections:(id)arg1;
- (id)alternativeSelections;
- (id)alternativeSelectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)alternativeSelectionsCount;
- (void)clearAlternativeSelections;
- (void)deleteAlternativeSelections;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAlternativeSelections:(id)arg1;
- (void)writeTo:(id)arg1;

// SISchemaUEIDictationAlternativeTextPairsSelected (SensitiveConditions)

- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)suppressMessageUnderConditions;

@end
