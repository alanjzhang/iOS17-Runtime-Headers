/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface FLOWSchemaFLOWMediaPlayerRadioStationContext : SISchemaInstrumentationMessage {
    struct { 
        unsigned int radioStationSubtype : 1; 
    }  _has;
    bool  _hasLinkId;
    SISchemaUUID * _linkId;
    int  _radioStationSubtype;
}

@property (nonatomic) bool hasLinkId;
@property (nonatomic) bool hasRadioStationSubtype;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;
@property (nonatomic) int radioStationSubtype;

- (void).cxx_destruct;
- (void)deleteLinkId;
- (void)deleteRadioStationSubtype;
- (id)dictionaryRepresentation;
- (bool)hasLinkId;
- (bool)hasRadioStationSubtype;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkId;
- (int)radioStationSubtype;
- (bool)readFrom:(id)arg1;
- (void)setHasLinkId:(bool)arg1;
- (void)setHasRadioStationSubtype:(bool)arg1;
- (void)setLinkId:(id)arg1;
- (void)setRadioStationSubtype:(int)arg1;
- (void)writeTo:(id)arg1;

// FLOWSchemaFLOWMediaPlayerRadioStationContext (SensitiveConditions)

- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)suppressMessageUnderConditions;

@end
