/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface POMMESSchemaPOMMESPegasusQueryMetadata : SISchemaInstrumentationMessage {
    struct { 
        unsigned int hasLatitude : 1; 
        unsigned int hasLongitude : 1; 
        unsigned int hasCountryCode : 1; 
        unsigned int hasStorefront : 1; 
        unsigned int hasSiriLocale : 1; 
        unsigned int uiScale : 1; 
        unsigned int isNavigationMode : 1; 
        unsigned int temperatureScale : 1; 
        unsigned int measurementSystem : 1; 
        unsigned int installedAppsSignatureLength : 1; 
        unsigned int heySiriEnabled : 1; 
        unsigned int locationAgeInSeconds : 1; 
        unsigned int locationSource : 1; 
        unsigned int locationPreciseStatus : 1; 
    }  _has;
    bool  _hasCountryCode;
    bool  _hasLatitude;
    bool  _hasLongitude;
    bool  _hasSiriLocale;
    bool  _hasStorefront;
    bool  _hasStorefrontValue;
    bool  _heySiriEnabled;
    unsigned int  _installedAppsSignatureLength;
    bool  _isNavigationMode;
    unsigned int  _locationAgeInSeconds;
    int  _locationPreciseStatus;
    int  _locationSource;
    int  _measurementSystem;
    NSString * _storefrontValue;
    int  _temperatureScale;
    float  _uiScale;
}

@property (nonatomic) bool hasCountryCode;
@property (nonatomic) bool hasHasCountryCode;
@property (nonatomic) bool hasHasLatitude;
@property (nonatomic) bool hasHasLongitude;
@property (nonatomic) bool hasHasSiriLocale;
@property (nonatomic) bool hasHasStorefront;
@property (nonatomic) bool hasHeySiriEnabled;
@property (nonatomic) bool hasInstalledAppsSignatureLength;
@property (nonatomic) bool hasIsNavigationMode;
@property (nonatomic) bool hasLatitude;
@property (nonatomic) bool hasLocationAgeInSeconds;
@property (nonatomic) bool hasLocationPreciseStatus;
@property (nonatomic) bool hasLocationSource;
@property (nonatomic) bool hasLongitude;
@property (nonatomic) bool hasMeasurementSystem;
@property (nonatomic) bool hasSiriLocale;
@property (nonatomic) bool hasStorefront;
@property (nonatomic) bool hasStorefrontValue;
@property (nonatomic) bool hasTemperatureScale;
@property (nonatomic) bool hasUiScale;
@property (nonatomic) bool heySiriEnabled;
@property (nonatomic) unsigned int installedAppsSignatureLength;
@property (nonatomic) bool isNavigationMode;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int locationAgeInSeconds;
@property (nonatomic) int locationPreciseStatus;
@property (nonatomic) int locationSource;
@property (nonatomic) int measurementSystem;
@property (nonatomic, copy) NSString *storefrontValue;
@property (nonatomic) int temperatureScale;
@property (nonatomic) float uiScale;

- (void).cxx_destruct;
- (void)deleteHasCountryCode;
- (void)deleteHasLatitude;
- (void)deleteHasLongitude;
- (void)deleteHasSiriLocale;
- (void)deleteHasStorefront;
- (void)deleteHeySiriEnabled;
- (void)deleteInstalledAppsSignatureLength;
- (void)deleteIsNavigationMode;
- (void)deleteLocationAgeInSeconds;
- (void)deleteLocationPreciseStatus;
- (void)deleteLocationSource;
- (void)deleteMeasurementSystem;
- (void)deleteStorefrontValue;
- (void)deleteTemperatureScale;
- (void)deleteUiScale;
- (id)dictionaryRepresentation;
- (bool)hasCountryCode;
- (bool)hasHasCountryCode;
- (bool)hasHasLatitude;
- (bool)hasHasLongitude;
- (bool)hasHasSiriLocale;
- (bool)hasHasStorefront;
- (bool)hasHeySiriEnabled;
- (bool)hasInstalledAppsSignatureLength;
- (bool)hasIsNavigationMode;
- (bool)hasLatitude;
- (bool)hasLocationAgeInSeconds;
- (bool)hasLocationPreciseStatus;
- (bool)hasLocationSource;
- (bool)hasLongitude;
- (bool)hasMeasurementSystem;
- (bool)hasSiriLocale;
- (bool)hasStorefront;
- (bool)hasStorefrontValue;
- (bool)hasTemperatureScale;
- (bool)hasUiScale;
- (unsigned long long)hash;
- (bool)heySiriEnabled;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (unsigned int)installedAppsSignatureLength;
- (bool)isEqual:(id)arg1;
- (bool)isNavigationMode;
- (id)jsonData;
- (unsigned int)locationAgeInSeconds;
- (int)locationPreciseStatus;
- (int)locationSource;
- (int)measurementSystem;
- (bool)readFrom:(id)arg1;
- (void)setHasCountryCode:(bool)arg1;
- (void)setHasHasCountryCode:(bool)arg1;
- (void)setHasHasLatitude:(bool)arg1;
- (void)setHasHasLongitude:(bool)arg1;
- (void)setHasHasSiriLocale:(bool)arg1;
- (void)setHasHasStorefront:(bool)arg1;
- (void)setHasHeySiriEnabled:(bool)arg1;
- (void)setHasInstalledAppsSignatureLength:(bool)arg1;
- (void)setHasIsNavigationMode:(bool)arg1;
- (void)setHasLatitude:(bool)arg1;
- (void)setHasLocationAgeInSeconds:(bool)arg1;
- (void)setHasLocationPreciseStatus:(bool)arg1;
- (void)setHasLocationSource:(bool)arg1;
- (void)setHasLongitude:(bool)arg1;
- (void)setHasMeasurementSystem:(bool)arg1;
- (void)setHasSiriLocale:(bool)arg1;
- (void)setHasStorefront:(bool)arg1;
- (void)setHasStorefrontValue:(bool)arg1;
- (void)setHasTemperatureScale:(bool)arg1;
- (void)setHasUiScale:(bool)arg1;
- (void)setHeySiriEnabled:(bool)arg1;
- (void)setInstalledAppsSignatureLength:(unsigned int)arg1;
- (void)setIsNavigationMode:(bool)arg1;
- (void)setLocationAgeInSeconds:(unsigned int)arg1;
- (void)setLocationPreciseStatus:(int)arg1;
- (void)setLocationSource:(int)arg1;
- (void)setMeasurementSystem:(int)arg1;
- (void)setStorefrontValue:(id)arg1;
- (void)setTemperatureScale:(int)arg1;
- (void)setUiScale:(float)arg1;
- (id)storefrontValue;
- (int)temperatureScale;
- (float)uiScale;
- (void)writeTo:(id)arg1;

// POMMESSchemaPOMMESPegasusQueryMetadata (SensitiveConditions)

- (id)suppressMessageUnderConditions;

@end
