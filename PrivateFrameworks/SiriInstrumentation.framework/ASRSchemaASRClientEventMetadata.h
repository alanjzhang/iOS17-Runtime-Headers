/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface ASRSchemaASRClientEventMetadata : SISchemaInstrumentationMessage {
    SISchemaUUID * _asrId;
    bool  _hasAsrId;
    bool  _hasRequestId;
    SISchemaUUID * _requestId;
}

@property (nonatomic, retain) SISchemaUUID *asrId;
@property (nonatomic) bool hasAsrId;
@property (nonatomic) bool hasRequestId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *requestId;

- (void).cxx_destruct;
- (id)asrId;
- (void)deleteAsrId;
- (void)deleteRequestId;
- (id)dictionaryRepresentation;
- (bool)hasAsrId;
- (bool)hasRequestId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)requestId;
- (void)setAsrId:(id)arg1;
- (void)setHasAsrId:(bool)arg1;
- (void)setHasRequestId:(bool)arg1;
- (void)setRequestId:(id)arg1;
- (void)writeTo:(id)arg1;

// ASRSchemaASRClientEventMetadata (SensitiveConditions)

- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)suppressMessageUnderConditions;

@end
