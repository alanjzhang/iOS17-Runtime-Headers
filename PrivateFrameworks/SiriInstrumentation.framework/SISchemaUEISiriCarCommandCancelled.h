/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SISchemaUEISiriCarCommandCancelled : SISchemaInstrumentationMessage {
    struct { 
        unsigned int isSiriDigitalCarKeyRequest : 1; 
    }  _has;
    bool  _isSiriDigitalCarKeyRequest;
}

@property (nonatomic) bool hasIsSiriDigitalCarKeyRequest;
@property (nonatomic) bool isSiriDigitalCarKeyRequest;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteIsSiriDigitalCarKeyRequest;
- (id)dictionaryRepresentation;
- (bool)hasIsSiriDigitalCarKeyRequest;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSiriDigitalCarKeyRequest;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasIsSiriDigitalCarKeyRequest:(bool)arg1;
- (void)setIsSiriDigitalCarKeyRequest:(bool)arg1;
- (void)writeTo:(id)arg1;

// SISchemaUEISiriCarCommandCancelled (SensitiveConditions)

- (id)suppressMessageUnderConditions;

@end