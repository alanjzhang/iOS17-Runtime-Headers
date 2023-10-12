/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface MHSchemaMHClientEventMetadata : SISchemaInstrumentationMessage {
    bool  _hasMhId;
    SISchemaUUID * _mhId;
}

@property (nonatomic) bool hasMhId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *mhId;

- (void).cxx_destruct;
- (void)deleteMhId;
- (id)dictionaryRepresentation;
- (bool)hasMhId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)mhId;
- (bool)readFrom:(id)arg1;
- (void)setHasMhId:(bool)arg1;
- (void)setMhId:(id)arg1;
- (void)writeTo:(id)arg1;

// MHSchemaMHClientEventMetadata (SensitiveConditions)

- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)suppressMessageUnderConditions;

@end
