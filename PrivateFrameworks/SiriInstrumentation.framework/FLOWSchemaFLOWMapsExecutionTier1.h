/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface FLOWSchemaFLOWMapsExecutionTier1 : SISchemaInstrumentationMessage {
    NSArray * _mapsEntities;
}

@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *mapsEntities;

- (void).cxx_destruct;
- (void)addMapsEntities:(id)arg1;
- (void)clearMapsEntities;
- (void)deleteMapsEntities;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)mapsEntities;
- (id)mapsEntitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)mapsEntitiesCount;
- (bool)readFrom:(id)arg1;
- (void)setMapsEntities:(id)arg1;
- (void)writeTo:(id)arg1;

// FLOWSchemaFLOWMapsExecutionTier1 (SensitiveConditions)

- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)suppressMessageUnderConditions;

@end
