/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface ODMSiriSchemaODMSiriEventMetadata : SISchemaInstrumentationMessage {
    bool  _hasOdmId;
    bool  _hasPluginVersion;
    bool  _hasTrialExperimentIdentifiers;
    SISchemaUUID * _odmId;
    NSString * _pluginVersion;
    ODMSiriSchemaODMTrialExperimentIdentifiers * _trialExperimentIdentifiers;
}

@property (nonatomic) bool hasOdmId;
@property (nonatomic) bool hasPluginVersion;
@property (nonatomic) bool hasTrialExperimentIdentifiers;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *odmId;
@property (nonatomic, copy) NSString *pluginVersion;
@property (nonatomic, retain) ODMSiriSchemaODMTrialExperimentIdentifiers *trialExperimentIdentifiers;

- (void).cxx_destruct;
- (void)deleteOdmId;
- (void)deletePluginVersion;
- (void)deleteTrialExperimentIdentifiers;
- (id)dictionaryRepresentation;
- (bool)hasOdmId;
- (bool)hasPluginVersion;
- (bool)hasTrialExperimentIdentifiers;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)odmId;
- (id)pluginVersion;
- (bool)readFrom:(id)arg1;
- (void)setHasOdmId:(bool)arg1;
- (void)setHasPluginVersion:(bool)arg1;
- (void)setHasTrialExperimentIdentifiers:(bool)arg1;
- (void)setOdmId:(id)arg1;
- (void)setPluginVersion:(id)arg1;
- (void)setTrialExperimentIdentifiers:(id)arg1;
- (id)trialExperimentIdentifiers;
- (void)writeTo:(id)arg1;

// ODMSiriSchemaODMSiriEventMetadata (SensitiveConditions)

- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)suppressMessageUnderConditions;

@end
