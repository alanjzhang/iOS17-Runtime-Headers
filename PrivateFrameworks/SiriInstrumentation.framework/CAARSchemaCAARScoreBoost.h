/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface CAARSchemaCAARScoreBoost : SISchemaInstrumentationMessage {
    SISchemaUUID * _actionCandidateId;
    double  _boost;
    struct { 
        unsigned int boost : 1; 
    }  _has;
    bool  _hasActionCandidateId;
    bool  _hasReason;
    NSString * _reason;
}

@property (nonatomic, retain) SISchemaUUID *actionCandidateId;
@property (nonatomic) double boost;
@property (nonatomic) bool hasActionCandidateId;
@property (nonatomic) bool hasBoost;
@property (nonatomic) bool hasReason;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *reason;

- (void).cxx_destruct;
- (id)actionCandidateId;
- (double)boost;
- (void)deleteActionCandidateId;
- (void)deleteBoost;
- (void)deleteReason;
- (id)dictionaryRepresentation;
- (bool)hasActionCandidateId;
- (bool)hasBoost;
- (bool)hasReason;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)reason;
- (void)setActionCandidateId:(id)arg1;
- (void)setBoost:(double)arg1;
- (void)setHasActionCandidateId:(bool)arg1;
- (void)setHasBoost:(bool)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setReason:(id)arg1;
- (void)writeTo:(id)arg1;

// CAARSchemaCAARScoreBoost (SensitiveConditions)

- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)suppressMessageUnderConditions;

@end
