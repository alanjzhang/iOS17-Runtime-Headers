/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SUGSchemaSUGClientEventMetadata : SISchemaInstrumentationMessage {
    bool  _hasSugId;
    SISchemaUUID * _sugId;
}

@property (nonatomic) bool hasSugId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *sugId;

- (void).cxx_destruct;
- (void)deleteSugId;
- (id)dictionaryRepresentation;
- (bool)hasSugId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasSugId:(bool)arg1;
- (void)setSugId:(id)arg1;
- (id)sugId;
- (void)writeTo:(id)arg1;

// SUGSchemaSUGClientEventMetadata (SensitiveConditions)

- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)suppressMessageUnderConditions;

@end
