/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface FLOWSchemaFLOWDomainExecutionContext : SISchemaInstrumentationMessage {
    SISchemaUUID * _contextId;
    FLOWSchemaFLOWDomainExecutionEnded * _ended;
    FLOWSchemaFLOWDomainExecutionFailed * _failed;
    bool  _hasContextId;
    bool  _hasEnded;
    bool  _hasFailed;
    bool  _hasStartedOrChanged;
    FLOWSchemaFLOWDomainExecutionStarted * _startedOrChanged;
    unsigned long long  _whichContextevent;
}

@property (nonatomic, retain) SISchemaUUID *contextId;
@property (nonatomic, retain) FLOWSchemaFLOWDomainExecutionEnded *ended;
@property (nonatomic, retain) FLOWSchemaFLOWDomainExecutionFailed *failed;
@property (nonatomic) bool hasContextId;
@property (nonatomic) bool hasEnded;
@property (nonatomic) bool hasFailed;
@property (nonatomic) bool hasStartedOrChanged;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) FLOWSchemaFLOWDomainExecutionStarted *startedOrChanged;
@property (nonatomic, readonly) unsigned long long whichContextevent;

- (void).cxx_destruct;
- (id)contextId;
- (void)deleteContextId;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;
- (id)dictionaryRepresentation;
- (id)ended;
- (id)failed;
- (bool)hasContextId;
- (bool)hasEnded;
- (bool)hasFailed;
- (bool)hasStartedOrChanged;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setContextId:(id)arg1;
- (void)setEnded:(id)arg1;
- (void)setFailed:(id)arg1;
- (void)setHasContextId:(bool)arg1;
- (void)setHasEnded:(bool)arg1;
- (void)setHasFailed:(bool)arg1;
- (void)setHasStartedOrChanged:(bool)arg1;
- (void)setStartedOrChanged:(id)arg1;
- (id)startedOrChanged;
- (unsigned long long)whichContextevent;
- (void)writeTo:(id)arg1;

// FLOWSchemaFLOWDomainExecutionContext (SensitiveConditions)

- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)suppressMessageUnderConditions;

@end
