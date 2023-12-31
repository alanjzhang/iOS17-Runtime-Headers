/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface FLOWSchemaFLOWEntityTier1 : SISchemaInstrumentationMessage {
    NSString * _entityId;
    bool  _hasEntityId;
}

@property (nonatomic, copy) NSString *entityId;
@property (nonatomic) bool hasEntityId;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)deleteEntityId;
- (id)dictionaryRepresentation;
- (id)entityId;
- (bool)hasEntityId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setEntityId:(id)arg1;
- (void)setHasEntityId:(bool)arg1;
- (void)writeTo:(id)arg1;

// FLOWSchemaFLOWEntityTier1 (SensitiveConditions)

- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)suppressMessageUnderConditions;

@end
