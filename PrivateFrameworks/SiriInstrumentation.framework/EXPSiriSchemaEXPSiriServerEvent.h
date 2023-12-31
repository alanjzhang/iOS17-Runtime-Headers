/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface EXPSiriSchemaEXPSiriServerEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    EXPSiriSchemaEXPServerCounterfactualTriggeredTier1 * _counterfactualTriggered;
    EXPSiriSchemaEXPServerExperimentTriggeredTier1 * _experimentTriggered;
    bool  _hasCounterfactualTriggered;
    bool  _hasExperimentTriggered;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) EXPSiriSchemaEXPServerCounterfactualTriggeredTier1 *counterfactualTriggered;
@property (nonatomic, retain) EXPSiriSchemaEXPServerExperimentTriggeredTier1 *experimentTriggered;
@property (nonatomic) bool hasCounterfactualTriggered;
@property (nonatomic) bool hasExperimentTriggered;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

- (void).cxx_destruct;
- (id)counterfactualTriggered;
- (void)deleteCounterfactualTriggered;
- (void)deleteExperimentTriggered;
- (id)dictionaryRepresentation;
- (id)experimentTriggered;
- (bool)hasCounterfactualTriggered;
- (bool)hasExperimentTriggered;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setCounterfactualTriggered:(id)arg1;
- (void)setExperimentTriggered:(id)arg1;
- (void)setHasCounterfactualTriggered:(bool)arg1;
- (void)setHasExperimentTriggered:(bool)arg1;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

// EXPSiriSchemaEXPSiriServerEvent (InnerEventContainer)

- (id)innerEvent;

// EXPSiriSchemaEXPSiriServerEvent (InstrumentationAdditions)

- (int)getAnyEventType;

// EXPSiriSchemaEXPSiriServerEvent (SensitiveConditions)

- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)suppressMessageUnderConditions;

@end
