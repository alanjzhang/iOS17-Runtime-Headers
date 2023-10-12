/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SISchemaLinkedAccessoryState : SISchemaInstrumentationMessage {
    SISchemaUUID * _accessoryId;
    NSArray * _gradingOptInStateChanges;
    bool  _hasAccessoryId;
}

@property (nonatomic, retain) SISchemaUUID *accessoryId;
@property (nonatomic, copy) NSArray *gradingOptInStateChanges;
@property (nonatomic) bool hasAccessoryId;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)accessoryId;
- (void)addGradingOptInStateChanges:(id)arg1;
- (void)clearGradingOptInStateChanges;
- (void)deleteAccessoryId;
- (void)deleteGradingOptInStateChanges;
- (id)dictionaryRepresentation;
- (id)gradingOptInStateChanges;
- (id)gradingOptInStateChangesAtIndex:(unsigned long long)arg1;
- (unsigned long long)gradingOptInStateChangesCount;
- (bool)hasAccessoryId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAccessoryId:(id)arg1;
- (void)setGradingOptInStateChanges:(id)arg1;
- (void)setHasAccessoryId:(bool)arg1;
- (void)writeTo:(id)arg1;

// SISchemaLinkedAccessoryState (SensitiveConditions)

- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)suppressMessageUnderConditions;

@end
