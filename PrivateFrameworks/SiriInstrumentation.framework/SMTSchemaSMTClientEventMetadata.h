/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SMTSchemaSMTClientEventMetadata : SISchemaInstrumentationMessage {
    bool  _hasSmtId;
    SISchemaUUID * _smtId;
}

@property (nonatomic) bool hasSmtId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *smtId;

- (void).cxx_destruct;
- (void)deleteSmtId;
- (id)dictionaryRepresentation;
- (bool)hasSmtId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasSmtId:(bool)arg1;
- (void)setSmtId:(id)arg1;
- (id)smtId;
- (void)writeTo:(id)arg1;

// SMTSchemaSMTClientEventMetadata (SensitiveConditions)

- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)suppressMessageUnderConditions;

@end
