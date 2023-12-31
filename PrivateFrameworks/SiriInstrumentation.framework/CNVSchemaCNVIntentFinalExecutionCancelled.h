/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface CNVSchemaCNVIntentFinalExecutionCancelled : SISchemaInstrumentationMessage {
    int  _cancellationReason;
    struct { 
        unsigned int cancellationReason : 1; 
    }  _has;
}

@property (nonatomic) int cancellationReason;
@property (nonatomic) bool hasCancellationReason;
@property (nonatomic, readonly) NSData *jsonData;

- (int)cancellationReason;
- (void)deleteCancellationReason;
- (id)dictionaryRepresentation;
- (bool)hasCancellationReason;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCancellationReason:(int)arg1;
- (void)setHasCancellationReason:(bool)arg1;
- (void)writeTo:(id)arg1;

// CNVSchemaCNVIntentFinalExecutionCancelled (SensitiveConditions)

- (id)suppressMessageUnderConditions;

@end
