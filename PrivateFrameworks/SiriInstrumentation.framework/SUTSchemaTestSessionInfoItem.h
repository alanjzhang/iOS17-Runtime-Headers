/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SUTSchemaTestSessionInfoItem : SISchemaInstrumentationMessage {
    bool  _hasName;
    bool  _hasValue;
    NSString * _name;
    NSString * _value;
}

@property (nonatomic) bool hasName;
@property (nonatomic) bool hasValue;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *value;

- (void).cxx_destruct;
- (void)deleteName;
- (void)deleteValue;
- (id)dictionaryRepresentation;
- (bool)hasName;
- (bool)hasValue;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setHasName:(bool)arg1;
- (void)setHasValue:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (void)writeTo:(id)arg1;

// SUTSchemaTestSessionInfoItem (SensitiveConditions)

- (id)suppressMessageUnderConditions;

@end
