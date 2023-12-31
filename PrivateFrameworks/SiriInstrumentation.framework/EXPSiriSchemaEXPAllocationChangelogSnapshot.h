/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface EXPSiriSchemaEXPAllocationChangelogSnapshot : SISchemaInstrumentationMessage {
    NSArray * _allocations;
}

@property (nonatomic, copy) NSArray *allocations;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)addAllocations:(id)arg1;
- (id)allocations;
- (id)allocationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)allocationsCount;
- (void)clearAllocations;
- (void)deleteAllocations;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAllocations:(id)arg1;
- (void)writeTo:(id)arg1;

// EXPSiriSchemaEXPAllocationChangelogSnapshot (SensitiveConditions)

- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)suppressMessageUnderConditions;

@end
