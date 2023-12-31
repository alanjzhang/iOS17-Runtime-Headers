/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface DIMSchemaDIMClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    DIMSchemaDIMDeviceFixedContext * _deviceFixedContext;
    bool  _hasDeviceFixedContext;
    bool  _hasLocaleNotRecognized;
    bool  _hasSiriAccountInformation;
    DIMSchemaDIMLocaleNotRecognized * _localeNotRecognized;
    DIMSchemaDIMSiriAccountInformation * _siriAccountInformation;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) DIMSchemaDIMDeviceFixedContext *deviceFixedContext;
@property (nonatomic) bool hasDeviceFixedContext;
@property (nonatomic) bool hasLocaleNotRecognized;
@property (nonatomic) bool hasSiriAccountInformation;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) DIMSchemaDIMLocaleNotRecognized *localeNotRecognized;
@property (nonatomic, retain) DIMSchemaDIMSiriAccountInformation *siriAccountInformation;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

- (void).cxx_destruct;
- (void)deleteDeviceFixedContext;
- (void)deleteLocaleNotRecognized;
- (void)deleteSiriAccountInformation;
- (id)deviceFixedContext;
- (id)dictionaryRepresentation;
- (bool)hasDeviceFixedContext;
- (bool)hasLocaleNotRecognized;
- (bool)hasSiriAccountInformation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)localeNotRecognized;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setDeviceFixedContext:(id)arg1;
- (void)setHasDeviceFixedContext:(bool)arg1;
- (void)setHasLocaleNotRecognized:(bool)arg1;
- (void)setHasSiriAccountInformation:(bool)arg1;
- (void)setLocaleNotRecognized:(id)arg1;
- (void)setSiriAccountInformation:(id)arg1;
- (id)siriAccountInformation;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

// DIMSchemaDIMClientEvent (Component)

+ (int)joinability;

// DIMSchemaDIMClientEvent (InnerEventContainer)

- (id)innerEvent;

// DIMSchemaDIMClientEvent (InstrumentationAdditions)

- (int)getAnyEventType;

// DIMSchemaDIMClientEvent (SensitiveConditions)

- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)suppressMessageUnderConditions;

@end
