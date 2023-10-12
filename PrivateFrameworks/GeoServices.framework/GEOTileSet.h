/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileSet : PBCodable <NSCopying> {
    unsigned int  _alternativeMultipathTCPPort;
    NSString * _baseURL;
    int  _checksumType;
    NSMutableArray * _countryRegionAllowlists;
    unsigned int  _dataSet;
    NSMutableArray * _deviceSKUAllowlists;
    struct { 
        unsigned int has_alternativeMultipathTCPPort : 1; 
        unsigned int has_checksumType : 1; 
        unsigned int has_dataSet : 1; 
        unsigned int has_requestStyle : 1; 
        unsigned int has_updateBehavior : 1; 
        unsigned int has_multiTileURLUsesStatusCodes : 1; 
        unsigned int has_supportsMultipathTCP : 1; 
        unsigned int has_useAuthProxy : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_baseURL : 1; 
        unsigned int read_countryRegionAllowlists : 1; 
        unsigned int read_deviceSKUAllowlists : 1; 
        unsigned int read_localizationURL : 1; 
        unsigned int read_multiTileURL : 1; 
        unsigned int read_supportedLanguages : 1; 
        unsigned int read_validVersions : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _localizationURL;
    NSString * _multiTileURL;
    bool  _multiTileURLUsesStatusCodes;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _requestStyle;
    int  _scale;
    int  _size;
    int  _style;
    NSMutableArray * _supportedLanguages;
    bool  _supportsMultipathTCP;
    PBUnknownFields * _unknownFields;
    int  _updateBehavior;
    bool  _useAuthProxy;
    NSMutableArray * _validVersions;
}

@property (nonatomic) unsigned int alternativeMultipathTCPPort;
@property (nonatomic, retain) NSString *baseURL;
@property (nonatomic) int checksumType;
@property (nonatomic, retain) NSMutableArray *countryRegionAllowlists;
@property (nonatomic) unsigned int dataSet;
@property (nonatomic, retain) NSMutableArray *deviceSKUAllowlists;
@property (nonatomic) bool hasAlternativeMultipathTCPPort;
@property (nonatomic, readonly) bool hasBaseURL;
@property (nonatomic) bool hasChecksumType;
@property (nonatomic) bool hasDataSet;
@property (nonatomic, readonly) bool hasLocalizationURL;
@property (nonatomic, readonly) bool hasMultiTileURL;
@property (nonatomic) bool hasMultiTileURLUsesStatusCodes;
@property (nonatomic) bool hasRequestStyle;
@property (nonatomic) bool hasSupportsMultipathTCP;
@property (nonatomic) bool hasUpdateBehavior;
@property (nonatomic) bool hasUseAuthProxy;
@property (nonatomic, retain) NSString *localizationURL;
@property (nonatomic, retain) NSString *multiTileURL;
@property (nonatomic) bool multiTileURLUsesStatusCodes;
@property (nonatomic) int requestStyle;
@property (nonatomic) int scale;
@property (nonatomic) int size;
@property (nonatomic) int style;
@property (nonatomic, retain) NSMutableArray *supportedLanguages;
@property (nonatomic) bool supportsMultipathTCP;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) int updateBehavior;
@property (nonatomic) bool useAuthProxy;
@property (nonatomic, retain) NSMutableArray *validVersions;

+ (Class)countryRegionAllowlistType;
+ (Class)deviceSKUAllowlistType;
+ (bool)isValid:(id)arg1;
+ (Class)supportedLanguageType;
+ (Class)validVersionType;

- (void).cxx_destruct;
- (int)StringAsChecksumType:(id)arg1;
- (int)StringAsRequestStyle:(id)arg1;
- (int)StringAsScale:(id)arg1;
- (int)StringAsSize:(id)arg1;
- (int)StringAsStyle:(id)arg1;
- (int)StringAsUpdateBehavior:(id)arg1;
- (void)addCountryRegionAllowlist:(id)arg1;
- (void)addDeviceSKUAllowlist:(id)arg1;
- (void)addSupportedLanguage:(id)arg1;
- (void)addValidVersion:(id)arg1;
- (unsigned int)alternativeMultipathTCPPort;
- (id)baseURL;
- (int)checksumType;
- (id)checksumTypeAsString:(int)arg1;
- (void)clearCountryRegionAllowlists;
- (void)clearDeviceSKUAllowlists;
- (void)clearSupportedLanguages;
- (void)clearUnknownFields:(bool)arg1;
- (void)clearValidVersions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryRegionAllowlistAtIndex:(unsigned long long)arg1;
- (id)countryRegionAllowlists;
- (unsigned long long)countryRegionAllowlistsCount;
- (unsigned int)dataSet;
- (id)description;
- (id)deviceSKUAllowlistAtIndex:(unsigned long long)arg1;
- (id)deviceSKUAllowlists;
- (unsigned long long)deviceSKUAllowlistsCount;
- (id)dictionaryRepresentation;
- (bool)hasAlternativeMultipathTCPPort;
- (bool)hasBaseURL;
- (bool)hasChecksumType;
- (bool)hasDataSet;
- (bool)hasLocalizationURL;
- (bool)hasMultiTileURL;
- (bool)hasMultiTileURLUsesStatusCodes;
- (bool)hasRequestStyle;
- (bool)hasSupportsMultipathTCP;
- (bool)hasUpdateBehavior;
- (bool)hasUseAuthProxy;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)localizationURL;
- (void)mergeFrom:(id)arg1;
- (id)multiTileURL;
- (bool)multiTileURLUsesStatusCodes;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (int)requestStyle;
- (id)requestStyleAsString:(int)arg1;
- (int)scale;
- (id)scaleAsString:(int)arg1;
- (void)setAlternativeMultipathTCPPort:(unsigned int)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setChecksumType:(int)arg1;
- (void)setCountryRegionAllowlists:(id)arg1;
- (void)setDataSet:(unsigned int)arg1;
- (void)setDeviceSKUAllowlists:(id)arg1;
- (void)setHasAlternativeMultipathTCPPort:(bool)arg1;
- (void)setHasChecksumType:(bool)arg1;
- (void)setHasDataSet:(bool)arg1;
- (void)setHasMultiTileURLUsesStatusCodes:(bool)arg1;
- (void)setHasRequestStyle:(bool)arg1;
- (void)setHasSupportsMultipathTCP:(bool)arg1;
- (void)setHasUpdateBehavior:(bool)arg1;
- (void)setHasUseAuthProxy:(bool)arg1;
- (void)setLocalizationURL:(id)arg1;
- (void)setMultiTileURL:(id)arg1;
- (void)setMultiTileURLUsesStatusCodes:(bool)arg1;
- (void)setRequestStyle:(int)arg1;
- (void)setScale:(int)arg1;
- (void)setSize:(int)arg1;
- (void)setStyle:(int)arg1;
- (void)setSupportedLanguages:(id)arg1;
- (void)setSupportsMultipathTCP:(bool)arg1;
- (void)setUpdateBehavior:(int)arg1;
- (void)setUseAuthProxy:(bool)arg1;
- (void)setValidVersions:(id)arg1;
- (int)size;
- (id)sizeAsString:(int)arg1;
- (int)style;
- (id)styleAsString:(int)arg1;
- (id)supportedLanguageAtIndex:(unsigned long long)arg1;
- (id)supportedLanguages;
- (unsigned long long)supportedLanguagesCount;
- (bool)supportsMultipathTCP;
- (id)unknownFields;
- (int)updateBehavior;
- (id)updateBehaviorAsString:(int)arg1;
- (bool)useAuthProxy;
- (id)validVersionAtIndex:(unsigned long long)arg1;
- (id)validVersions;
- (unsigned long long)validVersionsCount;
- (void)writeTo:(id)arg1;

@end
