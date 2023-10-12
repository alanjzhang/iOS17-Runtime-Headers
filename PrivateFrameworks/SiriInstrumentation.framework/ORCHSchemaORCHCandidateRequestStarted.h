/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface ORCHSchemaORCHCandidateRequestStarted : SISchemaInstrumentationMessage {
    struct { 
        unsigned int requestType : 1; 
    }  _has;
    int  _requestType;
}

@property (nonatomic) bool hasRequestType;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int requestType;

- (void)deleteRequestType;
- (id)dictionaryRepresentation;
- (bool)hasRequestType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (int)requestType;
- (void)setHasRequestType:(bool)arg1;
- (void)setRequestType:(int)arg1;
- (void)writeTo:(id)arg1;

// ORCHSchemaORCHCandidateRequestStarted (SensitiveConditions)

- (id)suppressMessageUnderConditions;

@end
