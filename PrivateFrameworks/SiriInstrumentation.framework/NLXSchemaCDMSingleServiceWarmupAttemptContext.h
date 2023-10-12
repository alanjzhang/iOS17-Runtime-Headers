/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface NLXSchemaCDMSingleServiceWarmupAttemptContext : SISchemaInstrumentationMessage {
    SISchemaUUID * _contextId;
    NLXSchemaCDMSingleServiceWarmupAttemptEnded * _ended;
    bool  _hasContextId;
    bool  _hasEnded;
    bool  _hasStartedOrChanged;
    NLXSchemaCDMSingleServiceWarmupAttemptStarted * _startedOrChanged;
    unsigned long long  _whichContextevent;
}

@property (nonatomic, retain) SISchemaUUID *contextId;
@property (nonatomic, retain) NLXSchemaCDMSingleServiceWarmupAttemptEnded *ended;
@property (nonatomic) bool hasContextId;
@property (nonatomic) bool hasEnded;
@property (nonatomic) bool hasStartedOrChanged;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) NLXSchemaCDMSingleServiceWarmupAttemptStarted *startedOrChanged;
@property (nonatomic, readonly) unsigned long long whichContextevent;

- (void).cxx_destruct;
- (id)contextId;
- (void)deleteContextId;
- (void)deleteEnded;
- (void)deleteStartedOrChanged;
- (id)dictionaryRepresentation;
- (id)ended;
- (bool)hasContextId;
- (bool)hasEnded;
- (bool)hasStartedOrChanged;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setContextId:(id)arg1;
- (void)setEnded:(id)arg1;
- (void)setHasContextId:(bool)arg1;
- (void)setHasEnded:(bool)arg1;
- (void)setHasStartedOrChanged:(bool)arg1;
- (void)setStartedOrChanged:(id)arg1;
- (id)startedOrChanged;
- (unsigned long long)whichContextevent;
- (void)writeTo:(id)arg1;

// NLXSchemaCDMSingleServiceWarmupAttemptContext (SensitiveConditions)

- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)suppressMessageUnderConditions;

@end
