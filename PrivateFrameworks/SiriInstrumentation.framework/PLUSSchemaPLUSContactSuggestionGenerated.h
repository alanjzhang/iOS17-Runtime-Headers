/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface PLUSSchemaPLUSContactSuggestionGenerated : SISchemaInstrumentationMessage {
    PLUSSchemaPLUSContactSuggestion * _generatedSuggestion;
    struct { 
        unsigned int isSuggestionUpdated : 1; 
    }  _has;
    bool  _hasGeneratedSuggestion;
    bool  _isSuggestionUpdated;
}

@property (nonatomic, retain) PLUSSchemaPLUSContactSuggestion *generatedSuggestion;
@property (nonatomic) bool hasGeneratedSuggestion;
@property (nonatomic) bool hasIsSuggestionUpdated;
@property (nonatomic) bool isSuggestionUpdated;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)deleteGeneratedSuggestion;
- (void)deleteIsSuggestionUpdated;
- (id)dictionaryRepresentation;
- (id)generatedSuggestion;
- (bool)hasGeneratedSuggestion;
- (bool)hasIsSuggestionUpdated;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSuggestionUpdated;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setGeneratedSuggestion:(id)arg1;
- (void)setHasGeneratedSuggestion:(bool)arg1;
- (void)setHasIsSuggestionUpdated:(bool)arg1;
- (void)setIsSuggestionUpdated:(bool)arg1;
- (void)writeTo:(id)arg1;

// PLUSSchemaPLUSContactSuggestionGenerated (SensitiveConditions)

- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)suppressMessageUnderConditions;

@end
