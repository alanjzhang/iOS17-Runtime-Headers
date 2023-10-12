/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface PSESchemaPSEClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    PSESchemaPSECallSignalGenerated * _callSignalGenerated;
    PSESchemaPSEClientEventMetadata * _eventMetadata;
    PSESchemaPSEGenericSignalGenerated * _genericSignalGenerated;
    bool  _hasCallSignalGenerated;
    bool  _hasEventMetadata;
    bool  _hasGenericSignalGenerated;
    bool  _hasHomeFollowupSignalGenerated;
    bool  _hasMediaSignalGenerated;
    bool  _hasMessageSignalGenerated;
    PSESchemaPSEHomeFollowupSignalGenerated * _homeFollowupSignalGenerated;
    PSESchemaPSEMediaSignalGenerated * _mediaSignalGenerated;
    PSESchemaPSEMessageSignalGenerated * _messageSignalGenerated;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) PSESchemaPSECallSignalGenerated *callSignalGenerated;
@property (nonatomic, retain) PSESchemaPSEClientEventMetadata *eventMetadata;
@property (nonatomic, retain) PSESchemaPSEGenericSignalGenerated *genericSignalGenerated;
@property (nonatomic) bool hasCallSignalGenerated;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic) bool hasGenericSignalGenerated;
@property (nonatomic) bool hasHomeFollowupSignalGenerated;
@property (nonatomic) bool hasMediaSignalGenerated;
@property (nonatomic) bool hasMessageSignalGenerated;
@property (nonatomic, retain) PSESchemaPSEHomeFollowupSignalGenerated *homeFollowupSignalGenerated;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) PSESchemaPSEMediaSignalGenerated *mediaSignalGenerated;
@property (nonatomic, retain) PSESchemaPSEMessageSignalGenerated *messageSignalGenerated;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

- (void).cxx_destruct;
- (id)callSignalGenerated;
- (void)deleteCallSignalGenerated;
- (void)deleteEventMetadata;
- (void)deleteGenericSignalGenerated;
- (void)deleteHomeFollowupSignalGenerated;
- (void)deleteMediaSignalGenerated;
- (void)deleteMessageSignalGenerated;
- (id)dictionaryRepresentation;
- (id)eventMetadata;
- (id)genericSignalGenerated;
- (bool)hasCallSignalGenerated;
- (bool)hasEventMetadata;
- (bool)hasGenericSignalGenerated;
- (bool)hasHomeFollowupSignalGenerated;
- (bool)hasMediaSignalGenerated;
- (bool)hasMessageSignalGenerated;
- (unsigned long long)hash;
- (id)homeFollowupSignalGenerated;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)mediaSignalGenerated;
- (id)messageSignalGenerated;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setCallSignalGenerated:(id)arg1;
- (void)setEventMetadata:(id)arg1;
- (void)setGenericSignalGenerated:(id)arg1;
- (void)setHasCallSignalGenerated:(bool)arg1;
- (void)setHasEventMetadata:(bool)arg1;
- (void)setHasGenericSignalGenerated:(bool)arg1;
- (void)setHasHomeFollowupSignalGenerated:(bool)arg1;
- (void)setHasMediaSignalGenerated:(bool)arg1;
- (void)setHasMessageSignalGenerated:(bool)arg1;
- (void)setHomeFollowupSignalGenerated:(id)arg1;
- (void)setMediaSignalGenerated:(id)arg1;
- (void)setMessageSignalGenerated:(id)arg1;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

// PSESchemaPSEClientEvent (Component)

+ (int)joinability;

- (int)componentName;
- (id)getComponentId;

// PSESchemaPSEClientEvent (InnerEventContainer)

- (id)innerEvent;

// PSESchemaPSEClientEvent (InstrumentationAdditions)

- (int)getAnyEventType;

// PSESchemaPSEClientEvent (IsolationLevel)

- (int)clockIsolationLevel;

// PSESchemaPSEClientEvent (SensitiveConditions)

- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)suppressMessageUnderConditions;

@end
