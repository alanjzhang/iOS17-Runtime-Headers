/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface ASRSchemaASRManualEditClassificationFailed : SISchemaInstrumentationMessage {
    int  _errorCode;
    bool  _exists;
    struct { 
        unsigned int exists : 1; 
        unsigned int errorCode : 1; 
    }  _has;
}

@property (nonatomic) int errorCode;
@property (nonatomic) bool exists;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic) bool hasExists;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteErrorCode;
- (void)deleteExists;
- (id)dictionaryRepresentation;
- (int)errorCode;
- (bool)exists;
- (bool)hasErrorCode;
- (bool)hasExists;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setExists:(bool)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasExists:(bool)arg1;
- (void)writeTo:(id)arg1;

// ASRSchemaASRManualEditClassificationFailed (SensitiveConditions)

- (id)suppressMessageUnderConditions;

@end