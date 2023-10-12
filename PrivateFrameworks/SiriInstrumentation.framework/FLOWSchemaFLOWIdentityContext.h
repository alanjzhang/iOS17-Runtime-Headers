/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface FLOWSchemaFLOWIdentityContext : SISchemaInstrumentationMessage {
    bool  _hasProfileSwitchContext;
    FLOWSchemaFLOWProfileSwitchContext * _profileSwitchContext;
}

@property (nonatomic) bool hasProfileSwitchContext;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) FLOWSchemaFLOWProfileSwitchContext *profileSwitchContext;

- (void).cxx_destruct;
- (void)deleteProfileSwitchContext;
- (id)dictionaryRepresentation;
- (bool)hasProfileSwitchContext;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)profileSwitchContext;
- (bool)readFrom:(id)arg1;
- (void)setHasProfileSwitchContext:(bool)arg1;
- (void)setProfileSwitchContext:(id)arg1;
- (void)writeTo:(id)arg1;

// FLOWSchemaFLOWIdentityContext (SensitiveConditions)

- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)suppressMessageUnderConditions;

@end