/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface FLOWLINKSchemaFLOWLINKActionConversionEnded : SISchemaInstrumentationMessage {
    FLOWLINKSchemaFLOWLINKAction * _action;
    bool  _hasAction;
}

@property (nonatomic, retain) FLOWLINKSchemaFLOWLINKAction *action;
@property (nonatomic) bool hasAction;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)action;
- (void)deleteAction;
- (id)dictionaryRepresentation;
- (bool)hasAction;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAction:(id)arg1;
- (void)setHasAction:(bool)arg1;
- (void)writeTo:(id)arg1;

// FLOWLINKSchemaFLOWLINKActionConversionEnded (SensitiveConditions)

- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)suppressMessageUnderConditions;

@end
