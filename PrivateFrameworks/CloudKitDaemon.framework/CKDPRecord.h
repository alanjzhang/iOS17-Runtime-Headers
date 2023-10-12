/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecord : PBCodable <NSCopying> {
    CKDPRecordChainParent * _chainParent;
    NSData * _chainPrivateKey;
    CKDPProtectionInfo * _chainProtectionInfo;
    NSMutableArray * _conflictLoserEtags;
    CKDPIdentifier * _createdBy;
    NSString * _etag;
    CKDPDate * _expirationTime;
    bool  _expired;
    NSMutableArray * _fields;
    struct { 
        unsigned int permission : 1; 
        unsigned int expired : 1; 
    }  _has;
    CKDPIdentifier * _modifiedBy;
    NSString * _modifiedByDevice;
    int  _permission;
    NSMutableArray * _pluginFields;
    CKDPProtectionInfo * _protectionInfo;
    CKDPRecordIdentifier * _recordIdentifier;
    CKDPShareIdentifier * _shareId;
    CKDPShare * _shareInfo;
    CKDPRecordStableUrl * _stableUrl;
    CKDPStorageExpiration * _storageExpiration;
    CKDPDateStatistics * _timeStatistics;
    NSMutableArray * _tombstonedPublicKeyIDs;
    CKDPRecordType * _type;
    NSData * _zoneishPrimaryKeyId;
}

@property (nonatomic, retain) CKDPRecordChainParent *chainParent;
@property (nonatomic, retain) NSData *chainPrivateKey;
@property (nonatomic, retain) CKDPProtectionInfo *chainProtectionInfo;
@property (nonatomic, retain) NSMutableArray *conflictLoserEtags;
@property (nonatomic, retain) CKDPIdentifier *createdBy;
@property (nonatomic, retain) NSString *etag;
@property (nonatomic, retain) CKDPDate *expirationTime;
@property (nonatomic) bool expired;
@property (nonatomic, retain) NSMutableArray *fields;
@property (nonatomic, readonly) bool hasChainParent;
@property (nonatomic, readonly) bool hasChainPrivateKey;
@property (nonatomic, readonly) bool hasChainProtectionInfo;
@property (nonatomic, readonly) bool hasCreatedBy;
@property (nonatomic, readonly) bool hasEtag;
@property (nonatomic, readonly) bool hasExpirationTime;
@property (nonatomic) bool hasExpired;
@property (nonatomic, readonly) bool hasModifiedBy;
@property (nonatomic, readonly) bool hasModifiedByDevice;
@property (nonatomic) bool hasPermission;
@property (nonatomic, readonly) bool hasProtectionInfo;
@property (nonatomic, readonly) bool hasRecordIdentifier;
@property (nonatomic, readonly) bool hasShareId;
@property (nonatomic, readonly) bool hasShareInfo;
@property (nonatomic, readonly) bool hasStableUrl;
@property (nonatomic, readonly) bool hasStorageExpiration;
@property (nonatomic, readonly) bool hasTimeStatistics;
@property (nonatomic, readonly) bool hasType;
@property (nonatomic, readonly) bool hasZoneishPrimaryKeyId;
@property (nonatomic, retain) CKDPIdentifier *modifiedBy;
@property (nonatomic, retain) NSString *modifiedByDevice;
@property (nonatomic) int permission;
@property (nonatomic, retain) NSMutableArray *pluginFields;
@property (nonatomic, retain) CKDPProtectionInfo *protectionInfo;
@property (nonatomic, retain) CKDPRecordIdentifier *recordIdentifier;
@property (nonatomic, retain) CKDPShareIdentifier *shareId;
@property (nonatomic, retain) CKDPShare *shareInfo;
@property (nonatomic, retain) CKDPRecordStableUrl *stableUrl;
@property (nonatomic, retain) CKDPStorageExpiration *storageExpiration;
@property (nonatomic, retain) CKDPDateStatistics *timeStatistics;
@property (nonatomic, retain) NSMutableArray *tombstonedPublicKeyIDs;
@property (nonatomic, retain) CKDPRecordType *type;
@property (nonatomic, retain) NSData *zoneishPrimaryKeyId;

+ (Class)conflictLoserEtagsType;
+ (Class)fieldsType;
+ (Class)pluginFieldsType;
+ (id)recordFromData:(id)arg1;
+ (Class)tombstonedPublicKeyIDsType;

- (void).cxx_destruct;
- (int)StringAsPermission:(id)arg1;
- (void)_inflateFieldsFromData:(id)arg1;
- (id)_permissionAsString;
- (void)addConflictLoserEtags:(id)arg1;
- (void)addFields:(id)arg1;
- (void)addPluginFields:(id)arg1;
- (void)addTombstonedPublicKeyIDs:(id)arg1;
- (id)chainParent;
- (id)chainPrivateKey;
- (id)chainProtectionInfo;
- (void)clearConflictLoserEtags;
- (void)clearFields;
- (void)clearPluginFields;
- (void)clearTombstonedPublicKeyIDs;
- (id)conflictLoserEtags;
- (id)conflictLoserEtagsAtIndex:(unsigned long long)arg1;
- (unsigned long long)conflictLoserEtagsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createdBy;
- (id)dataRepresentation;
- (id)description;
- (id)dictionaryRepresentation;
- (id)etag;
- (id)expirationTime;
- (bool)expired;
- (id)fieldData;
- (id)fieldForKey:(id)arg1;
- (id)fields;
- (id)fieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)fieldsCount;
- (bool)hasChainParent;
- (bool)hasChainPrivateKey;
- (bool)hasChainProtectionInfo;
- (bool)hasCreatedBy;
- (bool)hasEtag;
- (bool)hasExpirationTime;
- (bool)hasExpired;
- (bool)hasModifiedBy;
- (bool)hasModifiedByDevice;
- (bool)hasPermission;
- (bool)hasProtectionInfo;
- (bool)hasRecordIdentifier;
- (bool)hasShareId;
- (bool)hasShareInfo;
- (bool)hasStableUrl;
- (bool)hasStorageExpiration;
- (bool)hasTimeStatistics;
- (bool)hasType;
- (bool)hasZoneishPrimaryKeyId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)modifiedBy;
- (id)modifiedByDevice;
- (int)permission;
- (id)permissionAsString:(int)arg1;
- (id)pluginFields;
- (id)pluginFieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)pluginFieldsCount;
- (id)protectionInfo;
- (bool)readFrom:(id)arg1;
- (id)recordIdentifier;
- (void)setChainParent:(id)arg1;
- (void)setChainPrivateKey:(id)arg1;
- (void)setChainProtectionInfo:(id)arg1;
- (void)setConflictLoserEtags:(id)arg1;
- (void)setCreatedBy:(id)arg1;
- (void)setEtag:(id)arg1;
- (void)setExpirationTime:(id)arg1;
- (void)setExpired:(bool)arg1;
- (void)setFields:(id)arg1;
- (void)setHasExpired:(bool)arg1;
- (void)setHasPermission:(bool)arg1;
- (void)setModifiedBy:(id)arg1;
- (void)setModifiedByDevice:(id)arg1;
- (void)setPermission:(int)arg1;
- (void)setPluginFields:(id)arg1;
- (void)setProtectionInfo:(id)arg1;
- (void)setRecordIdentifier:(id)arg1;
- (void)setShareId:(id)arg1;
- (void)setShareInfo:(id)arg1;
- (void)setStableUrl:(id)arg1;
- (void)setStorageExpiration:(id)arg1;
- (void)setTimeStatistics:(id)arg1;
- (void)setTombstonedPublicKeyIDs:(id)arg1;
- (void)setType:(id)arg1;
- (void)setZoneishPrimaryKeyId:(id)arg1;
- (id)shareId;
- (id)shareInfo;
- (id)stableUrl;
- (id)storageExpiration;
- (id)timeStatistics;
- (id)tombstonedPublicKeyIDs;
- (id)tombstonedPublicKeyIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)tombstonedPublicKeyIDsCount;
- (id)type;
- (void)writeTo:(id)arg1;
- (id)zoneishPrimaryKeyId;

@end
