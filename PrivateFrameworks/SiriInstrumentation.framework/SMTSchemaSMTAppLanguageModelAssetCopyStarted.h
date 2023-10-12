/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SMTSchemaSMTAppLanguageModelAssetCopyStarted : SISchemaInstrumentationMessage {
    NSString * _appAssetPath;
    NSString * _appBundleId;
    struct { 
        unsigned int locale : 1; 
    }  _has;
    bool  _hasAppAssetPath;
    bool  _hasAppBundleId;
    int  _locale;
}

@property (nonatomic, copy) NSString *appAssetPath;
@property (nonatomic, copy) NSString *appBundleId;
@property (nonatomic) bool hasAppAssetPath;
@property (nonatomic) bool hasAppBundleId;
@property (nonatomic) bool hasLocale;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int locale;

- (void).cxx_destruct;
- (id)appAssetPath;
- (id)appBundleId;
- (void)deleteAppAssetPath;
- (void)deleteAppBundleId;
- (void)deleteLocale;
- (id)dictionaryRepresentation;
- (bool)hasAppAssetPath;
- (bool)hasAppBundleId;
- (bool)hasLocale;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)locale;
- (bool)readFrom:(id)arg1;
- (void)setAppAssetPath:(id)arg1;
- (void)setAppBundleId:(id)arg1;
- (void)setHasAppAssetPath:(bool)arg1;
- (void)setHasAppBundleId:(bool)arg1;
- (void)setHasLocale:(bool)arg1;
- (void)setLocale:(int)arg1;
- (void)writeTo:(id)arg1;

// SMTSchemaSMTAppLanguageModelAssetCopyStarted (SensitiveConditions)

- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)suppressMessageUnderConditions;

@end
