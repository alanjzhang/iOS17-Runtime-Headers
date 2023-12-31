/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface MTSchemaMTBatchRequestFailed : SISchemaInstrumentationMessage {
    MTSchemaMTError * _error;
    struct { 
        unsigned int numParagraphFailures : 1; 
    }  _has;
    bool  _hasError;
    unsigned int  _numParagraphFailures;
}

@property (nonatomic, retain) MTSchemaMTError *error;
@property (nonatomic) bool hasError;
@property (nonatomic) bool hasNumParagraphFailures;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int numParagraphFailures;

- (void).cxx_destruct;
- (void)deleteError;
- (void)deleteNumParagraphFailures;
- (id)dictionaryRepresentation;
- (id)error;
- (bool)hasError;
- (bool)hasNumParagraphFailures;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)numParagraphFailures;
- (bool)readFrom:(id)arg1;
- (void)setError:(id)arg1;
- (void)setHasError:(bool)arg1;
- (void)setHasNumParagraphFailures:(bool)arg1;
- (void)setNumParagraphFailures:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

// MTSchemaMTBatchRequestFailed (SensitiveConditions)

- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)suppressMessageUnderConditions;

@end
