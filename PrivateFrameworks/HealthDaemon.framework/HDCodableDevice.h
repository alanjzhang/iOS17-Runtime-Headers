/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableDevice : PBCodable <NSCopying> {
    double  _creationDate;
    NSString * _fDAUDI;
    NSString * _firmwareVersion;
    NSString * _hardwareVersion;
    struct { 
        unsigned int creationDate : 1; 
    }  _has;
    NSString * _localIdentifier;
    NSString * _manufacturer;
    NSString * _model;
    NSString * _name;
    NSString * _softwareVersion;
    HDCodableSyncIdentity * _syncIdentity;
    NSData * _uuid;
}

@property (nonatomic) double creationDate;
@property (nonatomic, retain) NSString *fDAUDI;
@property (nonatomic, retain) NSString *firmwareVersion;
@property (nonatomic, retain) NSString *hardwareVersion;
@property (nonatomic) bool hasCreationDate;
@property (nonatomic, readonly) bool hasFDAUDI;
@property (nonatomic, readonly) bool hasFirmwareVersion;
@property (nonatomic, readonly) bool hasHardwareVersion;
@property (nonatomic, readonly) bool hasLocalIdentifier;
@property (nonatomic, readonly) bool hasManufacturer;
@property (nonatomic, readonly) bool hasModel;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasSoftwareVersion;
@property (nonatomic, readonly) bool hasSyncIdentity;
@property (nonatomic, readonly) bool hasUuid;
@property (nonatomic, retain) NSString *localIdentifier;
@property (nonatomic, retain) NSString *manufacturer;
@property (nonatomic, retain) NSString *model;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *softwareVersion;
@property (nonatomic, retain) HDCodableSyncIdentity *syncIdentity;
@property (nonatomic, retain) NSData *uuid;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)creationDate;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fDAUDI;
- (id)firmwareVersion;
- (id)hardwareVersion;
- (bool)hasCreationDate;
- (bool)hasFDAUDI;
- (bool)hasFirmwareVersion;
- (bool)hasHardwareVersion;
- (bool)hasLocalIdentifier;
- (bool)hasManufacturer;
- (bool)hasModel;
- (bool)hasName;
- (bool)hasSoftwareVersion;
- (bool)hasSyncIdentity;
- (bool)hasUuid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)localIdentifier;
- (id)manufacturer;
- (void)mergeFrom:(id)arg1;
- (id)model;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setCreationDate:(double)arg1;
- (void)setFDAUDI:(id)arg1;
- (void)setFirmwareVersion:(id)arg1;
- (void)setHardwareVersion:(id)arg1;
- (void)setHasCreationDate:(bool)arg1;
- (void)setLocalIdentifier:(id)arg1;
- (void)setManufacturer:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSoftwareVersion:(id)arg1;
- (void)setSyncIdentity:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)softwareVersion;
- (id)syncIdentity;
- (id)uuid;
- (void)writeTo:(id)arg1;

@end
