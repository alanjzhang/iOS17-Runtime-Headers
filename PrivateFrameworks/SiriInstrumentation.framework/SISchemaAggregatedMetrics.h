/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SISchemaAggregatedMetrics : SISchemaInstrumentationMessage {
    bool  _hasSelfTriggerSuppression;
    bool  _hasVoiceTrigger;
    SISchemaSelfTriggerSuppressionMetrics * _selfTriggerSuppression;
    SISchemaVoiceTriggerMetrics * _voiceTrigger;
}

@property (nonatomic) bool hasSelfTriggerSuppression;
@property (nonatomic) bool hasVoiceTrigger;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaSelfTriggerSuppressionMetrics *selfTriggerSuppression;
@property (nonatomic, retain) SISchemaVoiceTriggerMetrics *voiceTrigger;

- (void).cxx_destruct;
- (void)deleteSelfTriggerSuppression;
- (void)deleteVoiceTrigger;
- (id)dictionaryRepresentation;
- (bool)hasSelfTriggerSuppression;
- (bool)hasVoiceTrigger;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)selfTriggerSuppression;
- (void)setHasSelfTriggerSuppression:(bool)arg1;
- (void)setHasVoiceTrigger:(bool)arg1;
- (void)setSelfTriggerSuppression:(id)arg1;
- (void)setVoiceTrigger:(id)arg1;
- (id)voiceTrigger;
- (void)writeTo:(id)arg1;

// SISchemaAggregatedMetrics (SensitiveConditions)

- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)suppressMessageUnderConditions;

@end
