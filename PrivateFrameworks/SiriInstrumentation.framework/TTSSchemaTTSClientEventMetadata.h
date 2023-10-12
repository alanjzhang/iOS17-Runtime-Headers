/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface TTSSchemaTTSClientEventMetadata : SISchemaInstrumentationMessage {
    NSString * _clientId;
    bool  _hasClientId;
    bool  _hasRequestId;
    bool  _hasTtsId;
    SISchemaUUID * _requestId;
    SISchemaUUID * _ttsId;
}

@property (nonatomic, copy) NSString *clientId;
@property (nonatomic) bool hasClientId;
@property (nonatomic) bool hasRequestId;
@property (nonatomic) bool hasTtsId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *requestId;
@property (nonatomic, retain) SISchemaUUID *ttsId;

- (void).cxx_destruct;
- (id)clientId;
- (void)deleteClientId;
- (void)deleteRequestId;
- (void)deleteTtsId;
- (id)dictionaryRepresentation;
- (bool)hasClientId;
- (bool)hasRequestId;
- (bool)hasTtsId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)requestId;
- (void)setClientId:(id)arg1;
- (void)setHasClientId:(bool)arg1;
- (void)setHasRequestId:(bool)arg1;
- (void)setHasTtsId:(bool)arg1;
- (void)setRequestId:(id)arg1;
- (void)setTtsId:(id)arg1;
- (id)ttsId;
- (void)writeTo:(id)arg1;

// TTSSchemaTTSClientEventMetadata (SensitiveConditions)

- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)suppressMessageUnderConditions;

@end
