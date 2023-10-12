/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/OctagonTrust.framework/OctagonTrust
 */

@interface OTEscrowRecordMetadataClientMetadata : PBCodable <NSCopying> {
    NSString * _deviceColor;
    NSString * _deviceEnclosureColor;
    NSString * _deviceMid;
    NSString * _deviceModel;
    NSString * _deviceModelClass;
    NSString * _deviceModelVersion;
    NSString * _deviceName;
    unsigned long long  _devicePlatform;
    struct { 
        unsigned int devicePlatform : 1; 
        unsigned int secureBackupMetadataTimestamp : 1; 
        unsigned int secureBackupNumericPassphraseLength : 1; 
        unsigned int secureBackupUsesComplexPassphrase : 1; 
        unsigned int secureBackupUsesNumericPassphrase : 1; 
    }  _has;
    unsigned long long  _secureBackupMetadataTimestamp;
    unsigned long long  _secureBackupNumericPassphraseLength;
    unsigned long long  _secureBackupUsesComplexPassphrase;
    unsigned long long  _secureBackupUsesNumericPassphrase;
}

@property (nonatomic, retain) NSString *deviceColor;
@property (nonatomic, retain) NSString *deviceEnclosureColor;
@property (nonatomic, retain) NSString *deviceMid;
@property (nonatomic, retain) NSString *deviceModel;
@property (nonatomic, retain) NSString *deviceModelClass;
@property (nonatomic, retain) NSString *deviceModelVersion;
@property (nonatomic, retain) NSString *deviceName;
@property (nonatomic) unsigned long long devicePlatform;
@property (nonatomic, readonly) bool hasDeviceColor;
@property (nonatomic, readonly) bool hasDeviceEnclosureColor;
@property (nonatomic, readonly) bool hasDeviceMid;
@property (nonatomic, readonly) bool hasDeviceModel;
@property (nonatomic, readonly) bool hasDeviceModelClass;
@property (nonatomic, readonly) bool hasDeviceModelVersion;
@property (nonatomic, readonly) bool hasDeviceName;
@property (nonatomic) bool hasDevicePlatform;
@property (nonatomic) bool hasSecureBackupMetadataTimestamp;
@property (nonatomic) bool hasSecureBackupNumericPassphraseLength;
@property (nonatomic) bool hasSecureBackupUsesComplexPassphrase;
@property (nonatomic) bool hasSecureBackupUsesNumericPassphrase;
@property (nonatomic) unsigned long long secureBackupMetadataTimestamp;
@property (nonatomic) unsigned long long secureBackupNumericPassphraseLength;
@property (nonatomic) unsigned long long secureBackupUsesComplexPassphrase;
@property (nonatomic) unsigned long long secureBackupUsesNumericPassphrase;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceColor;
- (id)deviceEnclosureColor;
- (id)deviceMid;
- (id)deviceModel;
- (id)deviceModelClass;
- (id)deviceModelVersion;
- (id)deviceName;
- (unsigned long long)devicePlatform;
- (id)dictionaryRepresentation;
- (bool)hasDeviceColor;
- (bool)hasDeviceEnclosureColor;
- (bool)hasDeviceMid;
- (bool)hasDeviceModel;
- (bool)hasDeviceModelClass;
- (bool)hasDeviceModelVersion;
- (bool)hasDeviceName;
- (bool)hasDevicePlatform;
- (bool)hasSecureBackupMetadataTimestamp;
- (bool)hasSecureBackupNumericPassphraseLength;
- (bool)hasSecureBackupUsesComplexPassphrase;
- (bool)hasSecureBackupUsesNumericPassphrase;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)secureBackupMetadataTimestamp;
- (unsigned long long)secureBackupNumericPassphraseLength;
- (unsigned long long)secureBackupUsesComplexPassphrase;
- (unsigned long long)secureBackupUsesNumericPassphrase;
- (void)setDeviceColor:(id)arg1;
- (void)setDeviceEnclosureColor:(id)arg1;
- (void)setDeviceMid:(id)arg1;
- (void)setDeviceModel:(id)arg1;
- (void)setDeviceModelClass:(id)arg1;
- (void)setDeviceModelVersion:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setDevicePlatform:(unsigned long long)arg1;
- (void)setHasDevicePlatform:(bool)arg1;
- (void)setHasSecureBackupMetadataTimestamp:(bool)arg1;
- (void)setHasSecureBackupNumericPassphraseLength:(bool)arg1;
- (void)setHasSecureBackupUsesComplexPassphrase:(bool)arg1;
- (void)setHasSecureBackupUsesNumericPassphrase:(bool)arg1;
- (void)setSecureBackupMetadataTimestamp:(unsigned long long)arg1;
- (void)setSecureBackupNumericPassphraseLength:(unsigned long long)arg1;
- (void)setSecureBackupUsesComplexPassphrase:(unsigned long long)arg1;
- (void)setSecureBackupUsesNumericPassphrase:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
