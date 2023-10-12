/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface PLUSSchemaPLUSContactSuggesterRequestMetadataReported : SISchemaInstrumentationMessage {
    struct { 
        unsigned int isPlusContactSuggesterEnabled : 1; 
        unsigned int isForcePromptUsed : 1; 
    }  _has;
    bool  _isForcePromptUsed;
    bool  _isPlusContactSuggesterEnabled;
}

@property (nonatomic) bool hasIsForcePromptUsed;
@property (nonatomic) bool hasIsPlusContactSuggesterEnabled;
@property (nonatomic) bool isForcePromptUsed;
@property (nonatomic) bool isPlusContactSuggesterEnabled;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteIsForcePromptUsed;
- (void)deleteIsPlusContactSuggesterEnabled;
- (id)dictionaryRepresentation;
- (bool)hasIsForcePromptUsed;
- (bool)hasIsPlusContactSuggesterEnabled;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isForcePromptUsed;
- (bool)isPlusContactSuggesterEnabled;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasIsForcePromptUsed:(bool)arg1;
- (void)setHasIsPlusContactSuggesterEnabled:(bool)arg1;
- (void)setIsForcePromptUsed:(bool)arg1;
- (void)setIsPlusContactSuggesterEnabled:(bool)arg1;
- (void)writeTo:(id)arg1;

// PLUSSchemaPLUSContactSuggesterRequestMetadataReported (SensitiveConditions)

- (id)suppressMessageUnderConditions;

@end
