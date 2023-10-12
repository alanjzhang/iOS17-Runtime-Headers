/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface CLPInstSchemaCLPCurareAppIntentSampleClassificationStarted : SISchemaInstrumentationMessage {
    bool  _hasOriginalRequestId;
    SISchemaUUID * _originalRequestId;
}

@property (nonatomic) bool hasOriginalRequestId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *originalRequestId;

- (void).cxx_destruct;
- (void)deleteOriginalRequestId;
- (id)dictionaryRepresentation;
- (bool)hasOriginalRequestId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)originalRequestId;
- (bool)readFrom:(id)arg1;
- (void)setHasOriginalRequestId:(bool)arg1;
- (void)setOriginalRequestId:(id)arg1;
- (void)writeTo:(id)arg1;

// CLPInstSchemaCLPCurareAppIntentSampleClassificationStarted (SensitiveConditions)

- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)suppressMessageUnderConditions;

@end
