/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKRecordZoneID : NSObject <CKPropertiesDescription, CKRoughlyEquivalent, CKSQLiteItem, CKXPCSuitableString, NSCopying, NSSecureCoding> {
    NSString * _anonymousCKUserID;
    long long  _databaseScope;
    NSString * _ownerName;
    NSString * _zoneName;
}

@property (nonatomic, readonly, copy) NSString *anonymousCKUserID;
@property (nonatomic, readonly) long long databaseScope;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CKRoughlyEquivalentProperties *equivalencyProperties;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *hmbDescription;
@property (nonatomic, readonly, copy) NSString *ownerName;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *zoneName;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CloudKit.framework/CloudKit

+ (id)cachedRecordZoneIDWithName:(id)arg1 ownerName:(id)arg2 anonymousCKUserID:(id)arg3 databaseScope:(long long)arg4;
+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)CKDescribePropertiesUsing:(id)arg1;
- (id)CKPropertiesDescription;
- (id)CKShortDescriptionRedact:(bool)arg1;
- (id)CKXPCSuitableString;
- (id)_initWithZoneName:(id)arg1 ownerName:(id)arg2 anonymousCKUserID:(id)arg3 databaseScope:(long long)arg4;
- (id)anonymousCKUserID;
- (id)ckShortDescription;
- (void)ck_bindInStatement:(id)arg1 atIndex:(unsigned long long)arg2;
- (long long)compareToRecordZoneID:(id)arg1;
- (id)copyWithAnonymousCKUserID:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)databaseScope;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)equivalencyProperties;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSqliteRepresentation:(id)arg1;
- (id)initWithZoneName:(id)arg1 ownerName:(id)arg2;
- (id)initWithZoneName:(id)arg1 ownerName:(id)arg2 anonymousCKUserID:(id)arg3;
- (id)initWithZoneName:(id)arg1 ownerName:(id)arg2 anonymousCKUserID:(id)arg3 databaseScope:(long long)arg4;
- (id)initWithZoneName:(id)arg1 ownerName:(id)arg2 databaseScope:(long long)arg3;
- (bool)isDefaultRecordZoneID;
- (bool)isEqual:(id)arg1;
- (bool)isSystemRecordZoneID;
- (id)ownerName;
- (id)redactedDescription;
- (id)sqliteRepresentation;
- (id)zoneName;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

// CKRecordZoneID (CKRecordZoneID)

+ (id)brc_containerMetadataZoneID;
+ (id)brc_sideCarZoneID;
+ (id)brc_zoneHealthZoneID;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

// CKRecordZoneID (HDCloudSync)

+ (id)hd_attachmentZoneIDWithSyncCircleIdentifier:(id)arg1;
+ (id)hd_contextSyncZoneIDForSyncCircleIdentifier:(id)arg1;
+ (id)hd_individualSyncZoneIDWithSyncCircleIdentifier:(id)arg1 storeIdentifier:(id)arg2;
+ (id)hd_masterZoneIDForSyncCircleIdentifier:(id)arg1;
+ (id)hd_privateMetadataZoneIDForSyncCircleIdentifier:(id)arg1;
+ (id)hd_sharedSummaryZoneIDWithSyncCircleIdentifier:(id)arg1 userIdentifier:(id)arg2;
+ (id)hd_stateSyncZoneIDForSyncCircleIdentifier:(id)arg1 domain:(id)arg2;
+ (id)hd_unifiedSyncZoneIDForSyncCircleIdentifier:(id)arg1;

- (bool)hd_isAttachmentZoneIDForSyncCircleIdentifier:(id*)arg1;
- (bool)hd_isContextSyncZoneIDForSyncCircleIdentifier:(id*)arg1;
- (bool)hd_isIndividualSyncZoneIDForStoreIdentifier:(id*)arg1 syncCircleIdentifier:(id*)arg2;
- (bool)hd_isMasterZoneIDForSyncCircleIdentifier:(id*)arg1;
- (bool)hd_isPrivateMetadataZoneIDForSyncCircleIdentifier:(id*)arg1;
- (bool)hd_isSharedSummaryZoneIDForUserIdentifier:(id*)arg1 syncCircleIdentifier:(id*)arg2;
- (bool)hd_isStateSyncZoneIDForSyncCircleIdentifier:(id*)arg1 domain:(id*)arg2;
- (bool)hd_isUnifiedSyncZoneIDForSyncCircleIdentifier:(id*)arg1;
- (id)hd_storeIdentifier;
- (id)hd_syncCircleIdentifier;
- (id)hd_withOwnerName:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore

// CKRecordZoneID (HMB)

- (id)hmbDescription;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/iCloudDriveCore.framework/iCloudDriveCore

// CKRecordZoneID (CKRecordZoneID)

+ (id)brc_containerMetadataZoneID;
+ (id)brc_sideCarZoneID;
+ (id)brc_zoneHealthZoneID;

@end