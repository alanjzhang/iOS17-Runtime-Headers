/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface ORCHSchemaORCHCDMRequestFailed : SISchemaInstrumentationMessage {
    bool  _exists;
    struct { 
        unsigned int exists : 1; 
        unsigned int reason : 1; 
    }  _has;
    int  _reason;
}

@property (nonatomic) bool exists;
@property (nonatomic) bool hasExists;
@property (nonatomic) bool hasReason;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int reason;

- (void)deleteExists;
- (void)deleteReason;
- (id)dictionaryRepresentation;
- (bool)exists;
- (bool)hasExists;
- (bool)hasReason;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (void)setExists:(bool)arg1;
- (void)setHasExists:(bool)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setReason:(int)arg1;
- (void)writeTo:(id)arg1;

// ORCHSchemaORCHCDMRequestFailed (SensitiveConditions)

- (id)suppressMessageUnderConditions;

@end