/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface NLXSchemaCDMClientSetupContext : SISchemaInstrumentationMessage {
    NLXSchemaCDMClientSetupEnded * _ended;
    NLXSchemaCDMClientSetupFailed * _failed;
    bool  _hasEnded;
    bool  _hasFailed;
    bool  _hasStartedOrChanged;
    NLXSchemaCDMClientSetupStarted * _startedOrChanged;
    unsigned long long  _whichContextevent;
}

@property (nonatomic, retain) NLXSchemaCDMClientSetupEnded *ended;
@property (nonatomic, retain) NLXSchemaCDMClientSetupFailed *failed;
@property (nonatomic) bool hasEnded;
@property (nonatomic) bool hasFailed;
@property (nonatomic) bool hasStartedOrChanged;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) NLXSchemaCDMClientSetupStarted *startedOrChanged;
@property (nonatomic, readonly) unsigned long long whichContextevent;

- (void).cxx_destruct;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;
- (id)dictionaryRepresentation;
- (id)ended;
- (id)failed;
- (bool)hasEnded;
- (bool)hasFailed;
- (bool)hasStartedOrChanged;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setEnded:(id)arg1;
- (void)setFailed:(id)arg1;
- (void)setHasEnded:(bool)arg1;
- (void)setHasFailed:(bool)arg1;
- (void)setHasStartedOrChanged:(bool)arg1;
- (void)setStartedOrChanged:(id)arg1;
- (id)startedOrChanged;
- (unsigned long long)whichContextevent;
- (void)writeTo:(id)arg1;

// NLXSchemaCDMClientSetupContext (SensitiveConditions)

- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)suppressMessageUnderConditions;

@end
