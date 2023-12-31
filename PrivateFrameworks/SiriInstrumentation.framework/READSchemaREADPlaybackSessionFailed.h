/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface READSchemaREADPlaybackSessionFailed : SISchemaInstrumentationMessage {
    int  _errorCodes;
    struct { 
        unsigned int errorCodes : 1; 
    }  _has;
}

@property (nonatomic) int errorCodes;
@property (nonatomic) bool hasErrorCodes;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteErrorCodes;
- (id)dictionaryRepresentation;
- (int)errorCodes;
- (bool)hasErrorCodes;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setErrorCodes:(int)arg1;
- (void)setHasErrorCodes:(bool)arg1;
- (void)writeTo:(id)arg1;

// READSchemaREADPlaybackSessionFailed (SensitiveConditions)

- (id)suppressMessageUnderConditions;

@end
