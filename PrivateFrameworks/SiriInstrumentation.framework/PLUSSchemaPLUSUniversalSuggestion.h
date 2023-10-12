/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface PLUSSchemaPLUSUniversalSuggestion : SISchemaInstrumentationMessage {
    double  _confidence;
    struct { 
        unsigned int confidence : 1; 
    }  _has;
}

@property (nonatomic) double confidence;
@property (nonatomic) bool hasConfidence;
@property (nonatomic, readonly) NSData *jsonData;

- (double)confidence;
- (void)deleteConfidence;
- (id)dictionaryRepresentation;
- (bool)hasConfidence;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setConfidence:(double)arg1;
- (void)setHasConfidence:(bool)arg1;
- (void)writeTo:(id)arg1;

// PLUSSchemaPLUSUniversalSuggestion (SensitiveConditions)

- (id)suppressMessageUnderConditions;

@end
