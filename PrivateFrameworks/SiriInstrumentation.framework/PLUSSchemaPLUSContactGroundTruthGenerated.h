/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface PLUSSchemaPLUSContactGroundTruthGenerated : SISchemaInstrumentationMessage {
    PLUSSchemaPLUSContactGroundTruth * _groundTruth;
    bool  _hasGroundTruth;
    bool  _hasOriginalPlusId;
    SISchemaUUID * _originalPlusId;
}

@property (nonatomic, retain) PLUSSchemaPLUSContactGroundTruth *groundTruth;
@property (nonatomic) bool hasGroundTruth;
@property (nonatomic) bool hasOriginalPlusId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *originalPlusId;

- (void).cxx_destruct;
- (void)deleteGroundTruth;
- (void)deleteOriginalPlusId;
- (id)dictionaryRepresentation;
- (id)groundTruth;
- (bool)hasGroundTruth;
- (bool)hasOriginalPlusId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)originalPlusId;
- (bool)readFrom:(id)arg1;
- (void)setGroundTruth:(id)arg1;
- (void)setHasGroundTruth:(bool)arg1;
- (void)setHasOriginalPlusId:(bool)arg1;
- (void)setOriginalPlusId:(id)arg1;
- (void)writeTo:(id)arg1;

// PLUSSchemaPLUSContactGroundTruthGenerated (SensitiveConditions)

- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)suppressMessageUnderConditions;

@end
