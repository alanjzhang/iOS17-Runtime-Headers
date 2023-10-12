/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface RRSchemaRRClientEventMetadata : SISchemaInstrumentationMessage {
    bool  _hasRequestId;
    bool  _hasRrID;
    SISchemaUUID * _requestId;
    SISchemaUUID * _rrID;
}

@property (nonatomic) bool hasRequestId;
@property (nonatomic) bool hasRrID;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *requestId;
@property (nonatomic, retain) SISchemaUUID *rrID;

- (void).cxx_destruct;
- (void)deleteRequestId;
- (void)deleteRrID;
- (id)dictionaryRepresentation;
- (bool)hasRequestId;
- (bool)hasRrID;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)requestId;
- (id)rrID;
- (void)setHasRequestId:(bool)arg1;
- (void)setHasRrID:(bool)arg1;
- (void)setRequestId:(id)arg1;
- (void)setRrID:(id)arg1;
- (void)writeTo:(id)arg1;

// RRSchemaRRClientEventMetadata (SensitiveConditions)

- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)suppressMessageUnderConditions;

@end
