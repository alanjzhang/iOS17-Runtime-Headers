/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface LTSchemaTask : SISchemaInstrumentationMessage {
    NSString * _bundleIdentifier;
    NSString * _deviceOS;
    NSString * _deviceType;
    bool  _hasBundleIdentifier;
    bool  _hasDeviceOS;
    bool  _hasDeviceType;
    bool  _hasOsVersion;
    bool  _hasSourceLanguage;
    bool  _hasTargetLanguage;
    bool  _hasTranslationTask;
    NSString * _osVersion;
    NSString * _sourceLanguage;
    NSString * _targetLanguage;
    NSString * _translationTask;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *deviceOS;
@property (nonatomic, copy) NSString *deviceType;
@property (nonatomic) bool hasBundleIdentifier;
@property (nonatomic) bool hasDeviceOS;
@property (nonatomic) bool hasDeviceType;
@property (nonatomic) bool hasOsVersion;
@property (nonatomic) bool hasSourceLanguage;
@property (nonatomic) bool hasTargetLanguage;
@property (nonatomic) bool hasTranslationTask;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *osVersion;
@property (nonatomic, copy) NSString *sourceLanguage;
@property (nonatomic, copy) NSString *targetLanguage;
@property (nonatomic, copy) NSString *translationTask;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (void)deleteBundleIdentifier;
- (void)deleteDeviceOS;
- (void)deleteDeviceType;
- (void)deleteOsVersion;
- (void)deleteSourceLanguage;
- (void)deleteTargetLanguage;
- (void)deleteTranslationTask;
- (id)deviceOS;
- (id)deviceType;
- (id)dictionaryRepresentation;
- (bool)hasBundleIdentifier;
- (bool)hasDeviceOS;
- (bool)hasDeviceType;
- (bool)hasOsVersion;
- (bool)hasSourceLanguage;
- (bool)hasTargetLanguage;
- (bool)hasTranslationTask;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)osVersion;
- (bool)readFrom:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDeviceOS:(id)arg1;
- (void)setDeviceType:(id)arg1;
- (void)setHasBundleIdentifier:(bool)arg1;
- (void)setHasDeviceOS:(bool)arg1;
- (void)setHasDeviceType:(bool)arg1;
- (void)setHasOsVersion:(bool)arg1;
- (void)setHasSourceLanguage:(bool)arg1;
- (void)setHasTargetLanguage:(bool)arg1;
- (void)setHasTranslationTask:(bool)arg1;
- (void)setOsVersion:(id)arg1;
- (void)setSourceLanguage:(id)arg1;
- (void)setTargetLanguage:(id)arg1;
- (void)setTranslationTask:(id)arg1;
- (id)sourceLanguage;
- (id)targetLanguage;
- (id)translationTask;
- (void)writeTo:(id)arg1;

// LTSchemaTask (SensitiveConditions)

- (id)suppressMessageUnderConditions;

@end
