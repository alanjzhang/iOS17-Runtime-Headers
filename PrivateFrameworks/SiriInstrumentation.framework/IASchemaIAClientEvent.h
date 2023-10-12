/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface IASchemaIAClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    IASchemaIAClientEventMetadata * _eventMetadata;
    bool  _hasEventMetadata;
    bool  _hasSiriMissEvaluationContext;
    IASchemaIASiriMissEvaluationContext * _siriMissEvaluationContext;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) IASchemaIAClientEventMetadata *eventMetadata;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic) bool hasSiriMissEvaluationContext;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) IASchemaIASiriMissEvaluationContext *siriMissEvaluationContext;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

- (void).cxx_destruct;
- (void)deleteEventMetadata;
- (void)deleteSiriMissEvaluationContext;
- (id)dictionaryRepresentation;
- (id)eventMetadata;
- (bool)hasEventMetadata;
- (bool)hasSiriMissEvaluationContext;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setEventMetadata:(id)arg1;
- (void)setHasEventMetadata:(bool)arg1;
- (void)setHasSiriMissEvaluationContext:(bool)arg1;
- (void)setSiriMissEvaluationContext:(id)arg1;
- (id)siriMissEvaluationContext;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

// IASchemaIAClientEvent (Component)

+ (int)joinability;

- (int)componentName;
- (id)getComponentId;

// IASchemaIAClientEvent (InnerEventContainer)

- (id)innerEvent;

// IASchemaIAClientEvent (InstrumentationAdditions)

- (int)getAnyEventType;

// IASchemaIAClientEvent (SensitiveConditions)

- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)suppressMessageUnderConditions;

@end
