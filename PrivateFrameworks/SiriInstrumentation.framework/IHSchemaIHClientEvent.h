/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface IHSchemaIHClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    IHSchemaIHClientEventMetadata * _eventMetadata;
    bool  _hasEventMetadata;
    bool  _hasModelEvaluationContext;
    IHSchemaIHModelEvaluationContext * _modelEvaluationContext;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) IHSchemaIHClientEventMetadata *eventMetadata;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic) bool hasModelEvaluationContext;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) IHSchemaIHModelEvaluationContext *modelEvaluationContext;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

- (void).cxx_destruct;
- (void)deleteEventMetadata;
- (void)deleteModelEvaluationContext;
- (id)dictionaryRepresentation;
- (id)eventMetadata;
- (bool)hasEventMetadata;
- (bool)hasModelEvaluationContext;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)modelEvaluationContext;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setEventMetadata:(id)arg1;
- (void)setHasEventMetadata:(bool)arg1;
- (void)setHasModelEvaluationContext:(bool)arg1;
- (void)setModelEvaluationContext:(id)arg1;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

// IHSchemaIHClientEvent (Component)

+ (int)joinability;

- (int)componentName;
- (id)getComponentId;

// IHSchemaIHClientEvent (InnerEventContainer)

- (id)innerEvent;

// IHSchemaIHClientEvent (InstrumentationAdditions)

- (int)getAnyEventType;

// IHSchemaIHClientEvent (SensitiveConditions)

- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)suppressMessageUnderConditions;

@end