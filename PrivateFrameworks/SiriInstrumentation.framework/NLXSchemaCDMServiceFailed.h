/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface NLXSchemaCDMServiceFailed : SISchemaInstrumentationMessage {
    int  _code;
    int  _errorCode;
    struct { 
        unsigned int code : 1; 
        unsigned int errorCode : 1; 
    }  _has;
}

@property (nonatomic) int code;
@property (nonatomic) int errorCode;
@property (nonatomic) bool hasCode;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic, readonly) NSData *jsonData;

- (int)code;
- (void)deleteCode;
- (void)deleteErrorCode;
- (id)dictionaryRepresentation;
- (int)errorCode;
- (bool)hasCode;
- (bool)hasErrorCode;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCode:(int)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setHasCode:(bool)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)writeTo:(id)arg1;

// NLXSchemaCDMServiceFailed (SensitiveConditions)

- (id)suppressMessageUnderConditions;

@end
