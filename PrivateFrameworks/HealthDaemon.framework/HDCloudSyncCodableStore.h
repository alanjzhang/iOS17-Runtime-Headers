/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncCodableStore : PBCodable <NSCopying> {
    bool  _active;
    int  _deviceMode;
    NSString * _deviceName;
    struct { 
        unsigned int order : 1; 
        unsigned int deviceMode : 1; 
        unsigned int requiredProtocolVersion : 1; 
        unsigned int supportedProtocolVersion : 1; 
        unsigned int active : 1; 
        unsigned int isChild : 1; 
    }  _has;
    bool  _isChild;
    long long  _order;
    NSString * _ownerIdentifier;
    NSString * _pendingOwnerIdentifier;
    HDCodableSyncIdentity * _pendingSyncIdentity;
    NSString * _productType;
    int  _requiredProtocolVersion;
    HDCloudSyncCodableShardPredicate * _shardPredicate;
    NSData * _storeIdentifier;
    int  _supportedProtocolVersion;
    HDCodableSyncIdentity * _syncIdentity;
    NSString * _systemBuildVersion;
}

@property (nonatomic) bool active;
@property (nonatomic) int deviceMode;
@property (nonatomic, retain) NSString *deviceName;
@property (nonatomic) bool hasActive;
@property (nonatomic) bool hasDeviceMode;
@property (nonatomic, readonly) bool hasDeviceName;
@property (nonatomic) bool hasIsChild;
@property (nonatomic) bool hasOrder;
@property (nonatomic, readonly) bool hasOwnerIdentifier;
@property (nonatomic, readonly) bool hasPendingOwnerIdentifier;
@property (nonatomic, readonly) bool hasPendingSyncIdentity;
@property (nonatomic, readonly) bool hasProductType;
@property (nonatomic) bool hasRequiredProtocolVersion;
@property (nonatomic, readonly) bool hasShardPredicate;
@property (nonatomic, readonly) bool hasStoreIdentifier;
@property (nonatomic) bool hasSupportedProtocolVersion;
@property (nonatomic, readonly) bool hasSyncIdentity;
@property (nonatomic, readonly) bool hasSystemBuildVersion;
@property (nonatomic) bool isChild;
@property (nonatomic) long long order;
@property (nonatomic, retain) NSString *ownerIdentifier;
@property (nonatomic, retain) NSString *pendingOwnerIdentifier;
@property (nonatomic, retain) HDCodableSyncIdentity *pendingSyncIdentity;
@property (nonatomic, retain) NSString *productType;
@property (nonatomic) int requiredProtocolVersion;
@property (nonatomic, retain) HDCloudSyncCodableShardPredicate *shardPredicate;
@property (nonatomic, retain) NSData *storeIdentifier;
@property (nonatomic) int supportedProtocolVersion;
@property (nonatomic, retain) HDCodableSyncIdentity *syncIdentity;
@property (nonatomic, retain) NSString *systemBuildVersion;

- (void).cxx_destruct;
- (int)StringAsDeviceMode:(id)arg1;
- (int)StringAsRequiredProtocolVersion:(id)arg1;
- (int)StringAsSupportedProtocolVersion:(id)arg1;
- (bool)active;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)deviceMode;
- (id)deviceModeAsString:(int)arg1;
- (id)deviceName;
- (id)dictionaryRepresentation;
- (bool)hasActive;
- (bool)hasDeviceMode;
- (bool)hasDeviceName;
- (bool)hasIsChild;
- (bool)hasOrder;
- (bool)hasOwnerIdentifier;
- (bool)hasPendingOwnerIdentifier;
- (bool)hasPendingSyncIdentity;
- (bool)hasProductType;
- (bool)hasRequiredProtocolVersion;
- (bool)hasShardPredicate;
- (bool)hasStoreIdentifier;
- (bool)hasSupportedProtocolVersion;
- (bool)hasSyncIdentity;
- (bool)hasSystemBuildVersion;
- (unsigned long long)hash;
- (bool)isChild;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)order;
- (id)ownerIdentifier;
- (id)pendingOwnerIdentifier;
- (id)pendingSyncIdentity;
- (id)productType;
- (bool)readFrom:(id)arg1;
- (int)requiredProtocolVersion;
- (id)requiredProtocolVersionAsString:(int)arg1;
- (void)setActive:(bool)arg1;
- (void)setDeviceMode:(int)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setHasActive:(bool)arg1;
- (void)setHasDeviceMode:(bool)arg1;
- (void)setHasIsChild:(bool)arg1;
- (void)setHasOrder:(bool)arg1;
- (void)setHasRequiredProtocolVersion:(bool)arg1;
- (void)setHasSupportedProtocolVersion:(bool)arg1;
- (void)setIsChild:(bool)arg1;
- (void)setOrder:(long long)arg1;
- (void)setOwnerIdentifier:(id)arg1;
- (void)setPendingOwnerIdentifier:(id)arg1;
- (void)setPendingSyncIdentity:(id)arg1;
- (void)setProductType:(id)arg1;
- (void)setRequiredProtocolVersion:(int)arg1;
- (void)setShardPredicate:(id)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (void)setSupportedProtocolVersion:(int)arg1;
- (void)setSyncIdentity:(id)arg1;
- (void)setSystemBuildVersion:(id)arg1;
- (id)shardPredicate;
- (id)storeIdentifier;
- (int)supportedProtocolVersion;
- (id)supportedProtocolVersionAsString:(int)arg1;
- (id)syncIdentity;
- (id)systemBuildVersion;
- (void)writeTo:(id)arg1;

@end
