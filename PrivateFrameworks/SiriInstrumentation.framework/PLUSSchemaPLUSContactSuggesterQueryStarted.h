/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface PLUSSchemaPLUSContactSuggesterQueryStarted : SISchemaInstrumentationMessage {
    int  _domain;
    struct { 
        unsigned int domain : 1; 
    }  _has;
    bool  _hasUsoPersonQuery;
    USOSchemaUSOGraph * _usoPersonQuery;
}

@property (nonatomic) int domain;
@property (nonatomic) bool hasDomain;
@property (nonatomic) bool hasUsoPersonQuery;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) USOSchemaUSOGraph *usoPersonQuery;

- (void).cxx_destruct;
- (void)deleteDomain;
- (void)deleteUsoPersonQuery;
- (id)dictionaryRepresentation;
- (int)domain;
- (bool)hasDomain;
- (bool)hasUsoPersonQuery;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setDomain:(int)arg1;
- (void)setHasDomain:(bool)arg1;
- (void)setHasUsoPersonQuery:(bool)arg1;
- (void)setUsoPersonQuery:(id)arg1;
- (id)usoPersonQuery;
- (void)writeTo:(id)arg1;

// PLUSSchemaPLUSContactSuggesterQueryStarted (SensitiveConditions)

- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)suppressMessageUnderConditions;

@end
