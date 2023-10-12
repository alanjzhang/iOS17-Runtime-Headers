/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SMTSchemaSMTClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    SMTSchemaSMTAppLanguageModelAssetCopyContext * _appLanguageModelAssetCopyContext;
    SMTSchemaSMTAppLanguageModelBuildContext * _appLanguageModelBuildContext;
    SMTSchemaSMTAppLanguageModelProfileRebuildContext * _appLanguageModelProfileRebuildContext;
    SMTSchemaSMTClientEventMetadata * _eventMetadata;
    bool  _hasAppLanguageModelAssetCopyContext;
    bool  _hasAppLanguageModelBuildContext;
    bool  _hasAppLanguageModelProfileRebuildContext;
    bool  _hasEventMetadata;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) SMTSchemaSMTAppLanguageModelAssetCopyContext *appLanguageModelAssetCopyContext;
@property (nonatomic, retain) SMTSchemaSMTAppLanguageModelBuildContext *appLanguageModelBuildContext;
@property (nonatomic, retain) SMTSchemaSMTAppLanguageModelProfileRebuildContext *appLanguageModelProfileRebuildContext;
@property (nonatomic, retain) SMTSchemaSMTClientEventMetadata *eventMetadata;
@property (nonatomic) bool hasAppLanguageModelAssetCopyContext;
@property (nonatomic) bool hasAppLanguageModelBuildContext;
@property (nonatomic) bool hasAppLanguageModelProfileRebuildContext;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

- (void).cxx_destruct;
- (id)appLanguageModelAssetCopyContext;
- (id)appLanguageModelBuildContext;
- (id)appLanguageModelProfileRebuildContext;
- (void)deleteAppLanguageModelAssetCopyContext;
- (void)deleteAppLanguageModelBuildContext;
- (void)deleteAppLanguageModelProfileRebuildContext;
- (void)deleteEventMetadata;
- (id)dictionaryRepresentation;
- (id)eventMetadata;
- (bool)hasAppLanguageModelAssetCopyContext;
- (bool)hasAppLanguageModelBuildContext;
- (bool)hasAppLanguageModelProfileRebuildContext;
- (bool)hasEventMetadata;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setAppLanguageModelAssetCopyContext:(id)arg1;
- (void)setAppLanguageModelBuildContext:(id)arg1;
- (void)setAppLanguageModelProfileRebuildContext:(id)arg1;
- (void)setEventMetadata:(id)arg1;
- (void)setHasAppLanguageModelAssetCopyContext:(bool)arg1;
- (void)setHasAppLanguageModelBuildContext:(bool)arg1;
- (void)setHasAppLanguageModelProfileRebuildContext:(bool)arg1;
- (void)setHasEventMetadata:(bool)arg1;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

// SMTSchemaSMTClientEvent (Component)

+ (int)joinability;

- (id)getComponentId;

// SMTSchemaSMTClientEvent (InnerEventContainer)

- (id)innerEvent;

// SMTSchemaSMTClientEvent (InstrumentationAdditions)

- (int)getAnyEventType;

// SMTSchemaSMTClientEvent (IsolationLevel)

- (int)clockIsolationLevel;

// SMTSchemaSMTClientEvent (SensitiveConditions)

- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)suppressMessageUnderConditions;

@end