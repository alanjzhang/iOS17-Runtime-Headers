/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface POMMESSchemaPOMMESDebugPerformanceReported : SISchemaInstrumentationMessage {
    NSArray * _performanceMeasurements;
}

@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *performanceMeasurements;

- (void).cxx_destruct;
- (void)addPerformanceMeasurements:(id)arg1;
- (void)clearPerformanceMeasurements;
- (void)deletePerformanceMeasurements;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)performanceMeasurements;
- (id)performanceMeasurementsAtIndex:(unsigned long long)arg1;
- (unsigned long long)performanceMeasurementsCount;
- (bool)readFrom:(id)arg1;
- (void)setPerformanceMeasurements:(id)arg1;
- (void)writeTo:(id)arg1;

// POMMESSchemaPOMMESDebugPerformanceReported (SensitiveConditions)

- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)suppressMessageUnderConditions;

@end