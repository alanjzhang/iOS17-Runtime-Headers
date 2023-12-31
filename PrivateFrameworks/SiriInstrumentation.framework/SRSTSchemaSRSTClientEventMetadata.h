/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SRSTSchemaSRSTClientEventMetadata : SISchemaInstrumentationMessage {
    bool  _hasSessionId;
    bool  _hasSrstId;
    SISchemaUUID * _sessionId;
    SISchemaUUID * _srstId;
}

@property (nonatomic) bool hasSessionId;
@property (nonatomic) bool hasSrstId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *sessionId;
@property (nonatomic, retain) SISchemaUUID *srstId;

- (void).cxx_destruct;
- (void)deleteSessionId;
- (void)deleteSrstId;
- (id)dictionaryRepresentation;
- (bool)hasSessionId;
- (bool)hasSrstId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)sessionId;
- (void)setHasSessionId:(bool)arg1;
- (void)setHasSrstId:(bool)arg1;
- (void)setSessionId:(id)arg1;
- (void)setSrstId:(id)arg1;
- (id)srstId;
- (void)writeTo:(id)arg1;

// SRSTSchemaSRSTClientEventMetadata (SensitiveConditions)

- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)suppressMessageUnderConditions;

@end
