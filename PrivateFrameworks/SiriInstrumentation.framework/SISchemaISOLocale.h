/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SISchemaISOLocale : SISchemaInstrumentationMessage {
    int  _countryCode;
    struct { 
        unsigned int languageCode : 1; 
        unsigned int countryCode : 1; 
    }  _has;
    int  _languageCode;
}

@property (nonatomic) int countryCode;
@property (nonatomic) bool hasCountryCode;
@property (nonatomic) bool hasLanguageCode;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int languageCode;

- (int)countryCode;
- (void)deleteCountryCode;
- (void)deleteLanguageCode;
- (id)dictionaryRepresentation;
- (bool)hasCountryCode;
- (bool)hasLanguageCode;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)languageCode;
- (bool)readFrom:(id)arg1;
- (void)setCountryCode:(int)arg1;
- (void)setHasCountryCode:(bool)arg1;
- (void)setHasLanguageCode:(bool)arg1;
- (void)setLanguageCode:(int)arg1;
- (void)writeTo:(id)arg1;

// SISchemaISOLocale (SensitiveConditions)

- (id)suppressMessageUnderConditions;

@end
