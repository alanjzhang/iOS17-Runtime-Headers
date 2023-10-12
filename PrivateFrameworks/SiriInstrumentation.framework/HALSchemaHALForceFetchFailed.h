/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface HALSchemaHALForceFetchFailed : SISchemaInstrumentationMessage {
    int  _failureReason;
    struct { 
        unsigned int failureReason : 1; 
    }  _has;
}

@property (nonatomic) int failureReason;
@property (nonatomic) bool hasFailureReason;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteFailureReason;
- (id)dictionaryRepresentation;
- (int)failureReason;
- (bool)hasFailureReason;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setFailureReason:(int)arg1;
- (void)setHasFailureReason:(bool)arg1;
- (void)writeTo:(id)arg1;

// HALSchemaHALForceFetchFailed (SensitiveConditions)

- (id)suppressMessageUnderConditions;

@end
