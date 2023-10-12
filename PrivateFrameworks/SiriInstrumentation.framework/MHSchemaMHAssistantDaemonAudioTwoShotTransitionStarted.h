/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface MHSchemaMHAssistantDaemonAudioTwoShotTransitionStarted : SISchemaInstrumentationMessage {
    struct { 
        unsigned int promptType : 1; 
    }  _has;
    int  _promptType;
}

@property (nonatomic) bool hasPromptType;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int promptType;

- (void)deletePromptType;
- (id)dictionaryRepresentation;
- (bool)hasPromptType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)promptType;
- (bool)readFrom:(id)arg1;
- (void)setHasPromptType:(bool)arg1;
- (void)setPromptType:(int)arg1;
- (void)writeTo:(id)arg1;

// MHSchemaMHAssistantDaemonAudioTwoShotTransitionStarted (SensitiveConditions)

- (id)suppressMessageUnderConditions;

@end
