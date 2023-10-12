/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SUGSchemaSUGSuppressionResult : SISchemaInstrumentationMessage {
    struct { 
        unsigned int wasSuppressed : 1; 
        unsigned int suppressionReason : 1; 
    }  _has;
    int  _suppressionReason;
    bool  _wasSuppressed;
}

@property (nonatomic) bool hasSuppressionReason;
@property (nonatomic) bool hasWasSuppressed;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int suppressionReason;
@property (nonatomic) bool wasSuppressed;

- (void)deleteSuppressionReason;
- (void)deleteWasSuppressed;
- (id)dictionaryRepresentation;
- (bool)hasSuppressionReason;
- (bool)hasWasSuppressed;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasSuppressionReason:(bool)arg1;
- (void)setHasWasSuppressed:(bool)arg1;
- (void)setSuppressionReason:(int)arg1;
- (void)setWasSuppressed:(bool)arg1;
- (int)suppressionReason;
- (bool)wasSuppressed;
- (void)writeTo:(id)arg1;

// SUGSchemaSUGSuppressionResult (SensitiveConditions)

- (id)suppressMessageUnderConditions;

@end
