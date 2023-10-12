/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface MHSchemaMHAssistantDaemonAudioInitContext : SISchemaInstrumentationMessage {
    MHSchemaMHAssistantDaemonAudioInitEnded * _ended;
    bool  _hasEnded;
    bool  _hasStartedOrChanged;
    MHSchemaMHAssistantDaemonAudioInitStarted * _startedOrChanged;
    unsigned long long  _whichContextevent;
}

@property (nonatomic, retain) MHSchemaMHAssistantDaemonAudioInitEnded *ended;
@property (nonatomic) bool hasEnded;
@property (nonatomic) bool hasStartedOrChanged;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) MHSchemaMHAssistantDaemonAudioInitStarted *startedOrChanged;
@property (nonatomic, readonly) unsigned long long whichContextevent;

- (void).cxx_destruct;
- (void)deleteEnded;
- (void)deleteStartedOrChanged;
- (id)dictionaryRepresentation;
- (id)ended;
- (bool)hasEnded;
- (bool)hasStartedOrChanged;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setEnded:(id)arg1;
- (void)setHasEnded:(bool)arg1;
- (void)setHasStartedOrChanged:(bool)arg1;
- (void)setStartedOrChanged:(id)arg1;
- (id)startedOrChanged;
- (unsigned long long)whichContextevent;
- (void)writeTo:(id)arg1;

// MHSchemaMHAssistantDaemonAudioInitContext (SensitiveConditions)

- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)suppressMessageUnderConditions;

@end
