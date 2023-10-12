/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface ORCHSchemaORCHAceCommandStarted : SISchemaInstrumentationMessage {
    NSString * _aceCommandName;
    int  _aceCommandType;
    struct { 
        unsigned int aceCommandType : 1; 
    }  _has;
    bool  _hasAceCommandName;
}

@property (nonatomic, copy) NSString *aceCommandName;
@property (nonatomic) int aceCommandType;
@property (nonatomic) bool hasAceCommandName;
@property (nonatomic) bool hasAceCommandType;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)aceCommandName;
- (int)aceCommandType;
- (void)deleteAceCommandName;
- (void)deleteAceCommandType;
- (id)dictionaryRepresentation;
- (bool)hasAceCommandName;
- (bool)hasAceCommandType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAceCommandName:(id)arg1;
- (void)setAceCommandType:(int)arg1;
- (void)setHasAceCommandName:(bool)arg1;
- (void)setHasAceCommandType:(bool)arg1;
- (void)writeTo:(id)arg1;

// ORCHSchemaORCHAceCommandStarted (SensitiveConditions)

- (id)suppressMessageUnderConditions;

@end
