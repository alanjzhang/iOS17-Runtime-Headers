/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRPBPropertyValue : PBCodable <NSCopying> {
    NSMutableArray * _arrayValues;
    NSData * _dataValue;
    NRPBPropertyValue * _dictionaryKey;
    struct { 
        unsigned int isDate : 1; 
        unsigned int isError : 1; 
        unsigned int isMiniUUIDSet : 1; 
        unsigned int isSecurePropertyValue : 1; 
        unsigned int isSet : 1; 
    }  _has;
    bool  _isDate;
    bool  _isError;
    bool  _isMiniUUIDSet;
    bool  _isSecurePropertyValue;
    bool  _isSet;
    NRPBNumber * _numberValue;
    NRPBSize * _sizeValue;
    NSString * _stringValue;
    NSData * _uUIDValue;
}

@property (nonatomic, retain) NSMutableArray *arrayValues;
@property (nonatomic, retain) NSData *dataValue;
@property (nonatomic, retain) NRPBPropertyValue *dictionaryKey;
@property (nonatomic, readonly) bool hasDataValue;
@property (nonatomic, readonly) bool hasDictionaryKey;
@property (nonatomic) bool hasIsDate;
@property (nonatomic) bool hasIsError;
@property (nonatomic) bool hasIsMiniUUIDSet;
@property (nonatomic) bool hasIsSecurePropertyValue;
@property (nonatomic) bool hasIsSet;
@property (nonatomic, readonly) bool hasNumberValue;
@property (nonatomic, readonly) bool hasSizeValue;
@property (nonatomic, readonly) bool hasStringValue;
@property (nonatomic, readonly) bool hasUUIDValue;
@property (nonatomic) bool isDate;
@property (nonatomic) bool isError;
@property (nonatomic) bool isMiniUUIDSet;
@property (nonatomic) bool isSecurePropertyValue;
@property (nonatomic) bool isSet;
@property (nonatomic, retain) NRPBNumber *numberValue;
@property (nonatomic, retain) NRPBSize *sizeValue;
@property (nonatomic, retain) NSString *stringValue;
@property (nonatomic, retain) NSData *uUIDValue;

+ (Class)arrayValuesType;

- (void).cxx_destruct;
- (void)addArrayValues:(id)arg1;
- (id)arrayValues;
- (id)arrayValuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)arrayValuesCount;
- (void)clearArrayValues;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataValue;
- (id)description;
- (id)dictionaryKey;
- (id)dictionaryRepresentation;
- (bool)hasDataValue;
- (bool)hasDictionaryKey;
- (bool)hasIsDate;
- (bool)hasIsError;
- (bool)hasIsMiniUUIDSet;
- (bool)hasIsSecurePropertyValue;
- (bool)hasIsSet;
- (bool)hasNumberValue;
- (bool)hasSizeValue;
- (bool)hasStringValue;
- (bool)hasUUIDValue;
- (unsigned long long)hash;
- (bool)isDate;
- (bool)isEqual:(id)arg1;
- (bool)isError;
- (bool)isMiniUUIDSet;
- (bool)isSecurePropertyValue;
- (bool)isSet;
- (void)mergeFrom:(id)arg1;
- (id)numberValue;
- (bool)readFrom:(id)arg1;
- (void)setArrayValues:(id)arg1;
- (void)setDataValue:(id)arg1;
- (void)setDictionaryKey:(id)arg1;
- (void)setHasIsDate:(bool)arg1;
- (void)setHasIsError:(bool)arg1;
- (void)setHasIsMiniUUIDSet:(bool)arg1;
- (void)setHasIsSecurePropertyValue:(bool)arg1;
- (void)setHasIsSet:(bool)arg1;
- (void)setIsDate:(bool)arg1;
- (void)setIsError:(bool)arg1;
- (void)setIsMiniUUIDSet:(bool)arg1;
- (void)setIsSecurePropertyValue:(bool)arg1;
- (void)setIsSet:(bool)arg1;
- (void)setNumberValue:(id)arg1;
- (void)setSizeValue:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)setUUIDValue:(id)arg1;
- (id)sizeValue;
- (id)stringValue;
- (id)uUIDValue;
- (void)writeTo:(id)arg1;

@end
