/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface NLXSchemaCDMAssetSetupStarted : SISchemaInstrumentationMessage {
    NSArray * _services;
}

@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *services;

- (void).cxx_destruct;
- (void)addServices:(int)arg1;
- (void)clearServices;
- (void)deleteServices;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)services;
- (int)servicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)servicesCount;
- (void)setServices:(id)arg1;
- (void)writeTo:(id)arg1;

// NLXSchemaCDMAssetSetupStarted (SensitiveConditions)

- (id)suppressMessageUnderConditions;

@end
