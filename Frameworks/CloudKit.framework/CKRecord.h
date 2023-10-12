/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKRecord : NSObject <CKContainerAssignment, CKPropertiesDescription, CKRoughlyEquivalent, HMBModelObjectStorage, NSCopying, NSSecureCoding, PQLBindable, PQLValuable> {
    NSArray * _allPCSKeyIDs;
    NSString * _baseToken;
    NSData * _chainParentPublicKeyID;
    CKEncryptedData * _chainPrivateKey;
    NSData * _chainProtectionInfo;
    NSArray * _conflictLoserEtags;
    CKContainerID * _containerID;
    NSDate * _creationDate;
    CKRecordID * _creatorUserRecordID;
    NSString * _displayedHostname;
    CKEncryptedRecordValueStore * _encryptedValueStore;
    NSString * _etag;
    NSDate * _expirationDate;
    bool  _expired;
    bool  _hasUpdatedExpirationTimeInterval;
    bool  _hasUpdatedParent;
    bool  _hasUpdatedShare;
    bool  _isMergeableValueDeltaRecord;
    bool  _knownToServer;
    CKRecordID * _lastModifiedUserRecordID;
    NSDate * _modificationDate;
    NSString * _modifiedByDevice;
    CKEncryptedData * _mutableEncryptedPSK;
    NSURL * _mutableURL;
    CKReference * _parent;
    NSData * _pcsKeyID;
    long long  _permission;
    NSDictionary * _pluginFields;
    CKReference * _previousParent;
    NSString * _previousProtectionEtag;
    NSString * _previousProtectionEtagFromUnitTest;
    CKReference * _previousShare;
    NSData * _protectionData;
    NSString * _protectionEtag;
    CKRecordID * _recordID;
    NSString * _recordType;
    bool  _requiresRecordSaveForMergeableDeltas;
    NSString * _routingKey;
    bool  _serializeProtectionData;
    CKReference * _share;
    NSString * _shareEtag;
    struct _PCSIdentityData { } * _signingPCSIdentity;
    NSArray * _tombstonedPublicKeyIDs;
    bool  _trackChanges;
    NSNumber * _updatedExpirationTimeInterval;
    bool  _useLightweightPCS;
    CKRecordValueStore * _valueStore;
    bool  _wantsChainPCS;
    bool  _wantsPublicSharingKey;
    bool  _wasCached;
    NSString * _zoneProtectionEtag;
    NSData * _zoneishKeyID;
}

@property (readonly, copy) NSURL *URL;
@property (copy) NSArray *allPCSKeyIDs;
@property (nonatomic, readonly) unsigned long long assetCount;
@property (nonatomic, readonly) unsigned long long assetDiskSize;
@property (nonatomic, retain) NSString *basePunctuationGroup;
@property (copy) NSString *baseToken;
@property (nonatomic, readonly) NSData *brc_containerMetadataPropertiesData;
@property (copy) NSData *chainParentPublicKeyID;
@property (copy) CKEncryptedData *chainPrivateKey;
@property (copy) NSData *chainProtectionInfo;
@property (copy) NSSet *changedKeysSet;
@property (copy) NSArray *conflictLoserEtags;
@property (copy) CKContainerID *containerID;
@property (readonly) bool containsAssetValues;
@property (nonatomic, readonly) bool containsIndexedKeys;
@property (nonatomic, readonly) bool containsPackageValues;
@property (copy) NSDate *creationDate;
@property (copy) CKRecordID *creatorUserRecordID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) NSString *displayedHostname;
@property (nonatomic, readonly) NSData *encryptedFullTokenData;
@property (readonly, copy) NSData *encryptedPublicSharingKey;
@property (copy) CKEncryptedRecordValueStore *encryptedValueStore;
@property (readonly, copy) <CKRecordKeyValueSetting> *encryptedValuesByKey;
@property (nonatomic, retain) NSArray *entries;
@property (nonatomic, readonly) CKRoughlyEquivalentProperties *equivalencyProperties;
@property (copy) NSString *etag;
@property (copy) NSDate *expirationDate;
@property (getter=isExpired) bool expired;
@property (nonatomic, readonly) NSString *fullToken;
@property (nonatomic, retain) NSUUID *groupUUID;
@property (nonatomic, readonly) bool hasChainPCS;
@property (nonatomic, readonly) bool hasEncryptedData;
@property (nonatomic, readonly) bool hasModifiedEncryptedData;
@property (nonatomic, readonly) bool hasModifiedPropertiesRequiringEncryption;
@property (nonatomic, readonly) bool hasPropertiesRequiringDecryption;
@property (nonatomic, readonly) bool hasPropertiesRequiringEncryption;
@property bool hasUpdatedExpirationTimeInterval;
@property bool hasUpdatedParent;
@property bool hasUpdatedShare;
@property (readonly) unsigned long long hash;
@property bool isMergeableValueDeltaRecord;
@property (getter=isKnownToServer) bool knownToServer;
@property (copy) CKRecordID *lastModifiedUserRecordID;
@property (copy) NSDate *modificationDate;
@property (copy) NSString *modifiedByDevice;
@property (getter=mt_isSynchronized, setter=mt_setSynchronized:, nonatomic) bool mt_isSynchronized;
@property (getter=mt_secretValue, setter=mt_setSecretValue:, nonatomic, retain) NSString *mt_secretValue;
@property (copy) CKEncryptedData *mutableEncryptedPSK;
@property (copy) CKEncryptedData *mutableEncryptedPublicSharingKey;
@property (copy) NSData *mutableEncryptedPublicSharingKeyData;
@property (copy) NSURL *mutableURL;
@property (nonatomic, retain) NSString *name;
@property (readonly, copy) NSDictionary *originalValues;
@property (copy) CKReference *parent;
@property (copy) NSData *pcsKeyID;
@property long long permission;
@property (copy) NSDictionary *pluginFields;
@property (retain) CKReference *previousParent;
@property (copy) NSString *previousProtectionEtag;
@property (copy) NSString *previousProtectionEtagFromUnitTest;
@property (retain) CKReference *previousShare;
@property (readonly) NSString *privateToken;
@property (copy) NSData *protectionData;
@property (copy) NSString *protectionEtag;
@property (nonatomic, retain) NSString *punctuation;
@property (readonly, copy) NSString *recordChangeTag;
@property (copy) CKRecordID *recordID;
@property struct _OpaquePCSShareProtection { }*recordPCS;
@property (readonly, copy) NSString *recordType;
@property (nonatomic, retain) NSString *replacement;
@property bool requiresRecordSaveForMergeableDeltas;
@property (copy) NSString *routingKey;
@property (nonatomic, retain) NSString *rule;
@property bool serializeProtectionData;
@property (copy) CKReference *share;
@property (copy) NSString *shareEtag;
@property (nonatomic, readonly) NSData *shortSharingTokenData;
@property (nonatomic, readonly) NSData *shortSharingTokenHashData;
@property (nonatomic, readonly, copy) NSString *shortToken;
@property struct _PCSIdentityData { }*signingPCSIdentity;
@property (nonatomic, readonly) unsigned long long size;
@property (readonly) Class superclass;
@property (copy) NSArray *tombstonedPublicKeyIDs;
@property bool trackChanges;
@property (nonatomic, readonly, copy) NSURL *uncachedURL;
@property (copy) NSNumber *updatedExpirationTimeInterval;
@property bool useLightweightPCS;
@property (nonatomic, retain) NSString *uuid;
@property (copy) CKRecordValueStore *valueStore;
@property (readonly, copy) NSDictionary *values;
@property (readonly, copy) <CKRecordKeyValueSetting> *valuesByKey;
@property (nonatomic, retain) NSNumber *version;
@property bool wantsChainPCS;
@property bool wantsPublicSharingKey;
@property bool wasCached;
@property (copy) NSString *zoneProtectionEtag;
@property (copy) NSData *zoneishKeyID;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CloudKit.framework/CloudKit

+ (bool)accessInstanceVariablesDirectly;
+ (id)decryptFullToken:(id)arg1 shortSharingTokenData:(id)arg2;
+ (id)encryptFullToken:(id)arg1 shortSharingTokenData:(id)arg2;
+ (id)fullTokenFromBaseToken:(id)arg1 privateToken:(id)arg2;
+ (void)initialize;
+ (id)keyForAppendingToListField:(id)arg1;
+ (id)keyForFetchingItems:(unsigned long long)arg1 atEndOfListField:(id)arg2;
+ (id)keyForInsertingIntoListField:(id)arg1 atIndex:(long long)arg2;
+ (id)keyForListField:(id)arg1 withIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)recordWithDuplicatedPackagesOfRecord:(id)arg1 error:(id*)arg2;
+ (id)shareURLWithShortToken:(id)arg1 shareTitle:(id)arg2 shareType:(id)arg3 containerID:(id)arg4 displayedHostname:(id)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)CKAssignToContainerWithID:(id)arg1;
- (void)CKDescribePropertiesUsing:(id)arg1;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)URL;
- (id)_allStrings;
- (id)_copyWithOptions:(long long)arg1;
- (id)_initSkippingValidationWithRecordType:(id)arg1 recordID:(id)arg2;
- (id)allKeys;
- (id)allPCSKeyIDs;
- (id)allTokens;
- (id)allValues;
- (unsigned long long)assetCount;
- (unsigned long long)assetDiskSize;
- (id)baseToken;
- (bool)canHostServerURLInfo;
- (bool)canSkipRecordSaveForMergeables;
- (id)chainParentPublicKeyID;
- (id)chainPrivateKey;
- (id)chainProtectionInfo;
- (id)changedKeys;
- (id)changedKeysSet;
- (void)claimPackagesWithSuccessBlock:(id /* block */)arg1 failureBlock:(id /* block */)arg2 completionBlock:(id /* block */)arg3;
- (id)conciseDescription;
- (id)conflictLoserEtags;
- (id)containerID;
- (bool)containsAssetBackedMergeableDeltas;
- (bool)containsAssetValues;
- (bool)containsIndexedKeys;
- (bool)containsMergeableValues;
- (bool)containsMergeableValuesWithDeltasToSave;
- (bool)containsPackageValues;
- (bool)containsValueOfClasses:(id)arg1 options:(unsigned long long)arg2 passingTest:(id /* block */)arg3;
- (bool)containsValueOfClasses:(id)arg1 passingTest:(id /* block */)arg2;
- (bool)containsValuePassingTest:(id /* block */)arg1;
- (void)copyStreamingAssetServerFieldsFromServerRecord:(id)arg1;
- (id)copyWithOriginalValues;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1 recordID:(id)arg2 userFields:(bool)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1 recordID:(id)arg2 userFields:(bool)arg3 systemFields:(bool)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1 userFields:(bool)arg2;
- (void)countMergeableValueMetrics:(id /* block */)arg1;
- (id)creationDate;
- (id)creatorUserRecordID;
- (void)dealloc;
- (id)debugDescription;
- (id)decryptFullToken:(id)arg1;
- (id)description;
- (id)displayedHostname;
- (void)encodeSystemFieldsWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptedFullTokenData;
- (id)encryptedPublicSharingKey;
- (id)encryptedValueStore;
- (id)encryptedValues;
- (id)encryptedValuesByKey;
- (void)enumerateKeysAndValuesOfClasses:(id)arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateKeysAndValuesOfClasses:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateKeysAndValuesUsingBlock:(id /* block */)arg1;
- (id)equivalencyProperties;
- (id)etag;
- (id)expirationDate;
- (id)fullToken;
- (bool)hasChainPCS;
- (bool)hasEncryptedData;
- (bool)hasModifiedEncryptedData;
- (bool)hasModifiedPropertiesRequiringEncryption;
- (bool)hasPropertiesRequiringDecryption;
- (bool)hasPropertiesRequiringEncryption;
- (bool)hasUpdatedExpirationTimeInterval;
- (bool)hasUpdatedParent;
- (bool)hasUpdatedShare;
- (id)init;
- (id)initInternalSkippingValidationWithRecordType:(id)arg1 recordID:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordTransport:(id)arg1;
- (id)initWithRecordType:(id)arg1;
- (id)initWithRecordType:(id)arg1 recordID:(id)arg2;
- (id)initWithRecordType:(id)arg1 zoneID:(id)arg2;
- (bool)isExpired;
- (bool)isKnownToServer;
- (bool)isMergeableValueDeltaRecord;
- (bool)isMoreRecentThanRecord:(id)arg1;
- (id)lastModifiedUserRecordID;
- (id)modificationDate;
- (id)modifiedByDevice;
- (id)mutableEncryptedPSK;
- (id)mutableEncryptedPublicSharingKey;
- (id)mutableEncryptedPublicSharingKeyData;
- (id)mutableURL;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)originalValues;
- (id)parent;
- (id)pcsKeyID;
- (long long)permission;
- (id)pluginFields;
- (void)preTiboEncodeWithCoder:(id)arg1;
- (bool)prepareMergeablesForUploadInContainer:(id)arg1 useAssetsIfNecessary:(bool)arg2 error:(id*)arg3;
- (id)previousParent;
- (id)previousProtectionEtag;
- (id)previousProtectionEtagFromUnitTest;
- (id)previousShare;
- (id)privateToken;
- (id)protectionData;
- (id)protectionEtag;
- (id)recordChangeTag;
- (id)recordID;
- (id)recordType;
- (id)redactedDescription;
- (void)releasePackages;
- (void)removePackages;
- (void)replaceRecordIDWith:(id)arg1;
- (bool)requiresRecordSaveForMergeableDeltas;
- (void)resetChangedKeys;
- (id)routingKey;
- (bool)serializeProtectionData;
- (void)setAllPCSKeyIDs:(id)arg1;
- (void)setBaseToken:(id)arg1;
- (void)setChainParentPublicKeyID:(id)arg1;
- (void)setChainPrivateKey:(id)arg1;
- (void)setChainProtectionInfo:(id)arg1;
- (void)setChangedKeysSet:(id)arg1;
- (void)setChangedKeysSet_modelMutation:(id)arg1;
- (void)setConflictLoserEtags:(id)arg1;
- (void)setContainerID:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setCreatorUserRecordID:(id)arg1;
- (void)setDisplayedHostname:(id)arg1;
- (void)setEncryptedValueStore:(id)arg1;
- (void)setEtag:(id)arg1;
- (void)setExpirationAfterTimeInterval:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setExpired:(bool)arg1;
- (void)setHasUpdatedExpirationTimeInterval:(bool)arg1;
- (void)setHasUpdatedParent:(bool)arg1;
- (void)setHasUpdatedShare:(bool)arg1;
- (void)setIsMergeableValueDeltaRecord:(bool)arg1;
- (void)setKnownToServer:(bool)arg1;
- (void)setLastModifiedUserRecordID:(id)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setModifiedByDevice:(id)arg1;
- (void)setMutableEncryptedPSK:(id)arg1;
- (void)setMutableEncryptedPublicSharingKey:(id)arg1;
- (void)setMutableEncryptedPublicSharingKeyData:(id)arg1;
- (void)setMutableURL:(id)arg1;
- (void)setNilValueForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setObjectNoValidate:(id)arg1 forKey:(id)arg2;
- (void)setParent:(id)arg1;
- (void)setParentReferenceFromRecord:(id)arg1;
- (void)setParentReferenceFromRecordID:(id)arg1;
- (void)setPcsKeyID:(id)arg1;
- (void)setPermission:(long long)arg1;
- (void)setPluginFields:(id)arg1;
- (void)setPreviousParent:(id)arg1;
- (void)setPreviousProtectionEtag:(id)arg1;
- (void)setPreviousProtectionEtagFromUnitTest:(id)arg1;
- (void)setPreviousShare:(id)arg1;
- (void)setProtectionData:(id)arg1;
- (void)setProtectionEtag:(id)arg1;
- (void)setRecordChangeTag:(id)arg1;
- (void)setRecordChangeTag_modelMutation:(id)arg1;
- (void)setRecordID:(id)arg1;
- (void)setRecordID_modelMutation:(id)arg1;
- (void)setRecordType:(id)arg1;
- (void)setRequiresRecordSaveForMergeableDeltas:(bool)arg1;
- (void)setRoutingKey:(id)arg1;
- (void)setSerializeProtectionData:(bool)arg1;
- (void)setShare:(id)arg1;
- (void)setShareEtag:(id)arg1;
- (void)setSigningPCSIdentity:(struct _PCSIdentityData { }*)arg1;
- (void)setStreamingAssetRequestOptions:(id)arg1;
- (void)setTombstonedPublicKeyIDs:(id)arg1;
- (void)setTrackChanges:(bool)arg1;
- (void)setUpdatedExpirationTimeInterval:(id)arg1;
- (void)setUseLightweightPCS:(bool)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValueStore:(id)arg1;
- (void)setWantsChainPCS:(bool)arg1;
- (void)setWantsPublicSharingKey:(bool)arg1;
- (void)setWasCached:(bool)arg1;
- (void)setZoneProtectionEtag:(id)arg1;
- (void)setZoneishKeyID:(id)arg1;
- (id)share;
- (id)shareEtag;
- (id)shortSharingToken;
- (id)shortSharingTokenData;
- (id)shortSharingTokenHashData;
- (id)shortToken;
- (struct _PCSIdentityData { }*)signingPCSIdentity;
- (unsigned long long)size;
- (id)tombstonedPublicKeyIDs;
- (bool)trackChanges;
- (id)uncachedURL;
- (void)updateMergeablesForSuccessfulSave;
- (void)updateWithSavedRecordXPCMetadata:(id)arg1 shouldOnlySaveAssetContent:(bool)arg2;
- (id)updatedExpirationTimeInterval;
- (bool)useLightweightPCS;
- (id)valueForKey:(id)arg1;
- (id)valueStore;
- (id)values;
- (id)valuesByKey;
- (bool)wantsChainPCS;
- (bool)wantsPublicSharingKey;
- (bool)wasCached;
- (id)zoneProtectionEtag;
- (id)zoneishKeyID;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport

// CKRecord (AXCloudKitHelperAdditions)

- (void)setUuid:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)uuid;
- (id)version;

// CKRecord (AXCloudKitHelperAdditionsEntry)

- (id)groupUUID;
- (id)punctuation;
- (id)replacement;
- (id)rule;
- (void)setGroupUUID:(id)arg1;
- (void)setPunctuation:(id)arg1;
- (void)setReplacement:(id)arg1;
- (void)setRule:(id)arg1;

// CKRecord (AXCloudKitHelperAdditionsGroup)

- (id)basePunctuationGroup;
- (id)entries;
- (id)name;
- (void)setBasePunctuationGroup:(id)arg1;
- (void)setEntries:(id)arg1;
- (void)setName:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

// CKRecord (BRCContainerMetadataAdditions)

+ (id)brc_containerMetadataRecordWithContainer:(id)arg1;

- (id)brc_containerMetadataIconNames;
- (id)brc_containerMetadataIconPaths;
- (id)brc_containerMetadataPropertiesData;

// CKRecord (BRCItemAdditions)

+ (id)desiredKeysWithMask:(unsigned short)arg1;
+ (id)rootAppLibraryRecordForAppLibraryID:(id)arg1 zoneID:(id)arg2;
+ (id)rootDirectoryRecordForZoneID:(id)arg1;

- (bool)brc_currentUserOwnsLastEditorDeviceWithSession:(id)arg1;
- (bool)brc_isInterestingRecordForSave;
- (bool)brc_isInterestingRecordForSyncDown;
- (id)brc_lastEditorDeviceName;
- (id)brc_lastModifiedUserRecordNameWithCurrentUserRecordName:(id)arg1 personNameComponents:(id*)arg2;
- (id)brc_oplockMergeEtag;
- (bool)brc_safeToGetURL;
- (id)brc_updateDroppedReason;
- (void)sanitizeShortTokenFields;
- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

// CKRecord (BRCSerializationAdditions)

+ (id)newFromSqliteStatement:(struct sqlite3_stmt { }*)arg1 atIndex:(int)arg2;
+ (id)newFromSqliteValue:(struct sqlite3_value { }*)arg1;

- (id)_createAppLibraryIfNecessary:(id)arg1 session:(id)arg2;
- (void)_deserializeRootSharingOptions:(unsigned long long*)arg1;
- (bool)_deserializeValue:(id*)arg1 forKey:(id)arg2 encrypted:(bool)arg3 expectClass:(Class)arg4 allowNil:(bool)arg5 errorDescription:(id*)arg6;
- (bool)_locateSideCarServerZone:(id*)arg1 withShareAliasReference:(id)arg2 withSession:(id)arg3;
- (bool)deserializeAliasInfo:(id*)arg1 serverZone:(id)arg2 error:(id*)arg3;
- (bool)deserializeFilename:(id*)arg1 basename:(id*)arg2 bounceno:(id*)arg3 extension:(id*)arg4 userInfo:(id)arg5 error:(id*)arg6;
- (void)deserializeFolderSharingOptions:(unsigned long long*)arg1;
- (bool)deserializeSideCarInfo:(id*)arg1 error:(id*)arg2;
- (bool)deserializeStatInfo:(id*)arg1 serverMetrics:(id*)arg2 itemID:(id)arg3 session:(id)arg4 error:(id*)arg5;
- (bool)deserializeSymlinkTarget:(id*)arg1 error:(id*)arg2;
- (bool)deserializeVersion:(id*)arg1 fakeStatInfo:(id*)arg2 clientZone:(id)arg3 error:(id*)arg4;
- (bool)deserializeiWorkSharingOptions:(unsigned long long*)arg1 error:(id*)arg2;
- (bool)locateSideCarServerZone:(id*)arg1 shareRecordName:(id*)arg2 withSession:(id)arg3;
- (void)processAppLibraryDataWithMovedZoneNames:(id)arg1 serverZone:(id)arg2 isDeltaSync:(bool)arg3;
- (void)serializeFilename:(id)arg1 forCreation:(bool)arg2;
- (void)serializeFilename:(id)arg1 forCreation:(bool)arg2 setExtension:(bool)arg3;
- (void)serializeFilename:(id)arg1 forCreation:(bool)arg2 setExtension:(bool)arg3 inSharedAlias:(bool)arg4;
- (void)serializeFinderTags:(id)arg1 forCreation:(bool)arg2;
- (void)serializeSideCarInfo:(id)arg1 filenameExtension:(id)arg2 diffs:(unsigned long long)arg3 deadInServerTruth:(bool)arg4;
- (void)serializeStatInfo:(id)arg1 diffs:(unsigned long long)arg2 stageID:(id)arg3 deadInServerTruth:(bool)arg4 shouldPCSChainStatus:(unsigned char)arg5;
- (void)serializeSystemFields:(id)arg1;
- (void)serializeSystemFields:(id)arg1 includeCZMEtag:(bool)arg2;
- (void)serializeVersion:(id)arg1 diffs:(unsigned long long)arg2 deadInServerTruth:(bool)arg3;
- (void)setLastUsedTime:(long long)arg1;
- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

// CKRecord (BRCSharingAdditions)

- (id)brc_sharedLinkDisplayName;
- (id)brc_sharedRootDisplayName;
- (id)brc_sharedRootExtension;
- (void)brc_updateWithLogicalName:(id)arg1 isFolder:(bool)arg2;
- (bool)isFolderShare;

// CKRecord (BRCWorkAround)

+ (id)brc_fakeRecordWithErrorMarkerFor20716676;

- (bool)brc_isfakeRecordWithErrorMarkerFor20716676;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (void)fillOutPCSMetadataInfo;
- (struct _OpaquePCSShareProtection { }*)recordPCS;
- (void)setRecordPCS:(struct _OpaquePCSShareProtection { }*)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

// CKRecord (HealthDaemon)

+ (id)hd_recordWithSystemData:(id)arg1 error:(id*)arg2;

- (bool)hd_equivalentRecord:(id)arg1;
- (bool)hd_isCKShare;
- (id)hd_optionalEncryptedValueForKey:(id)arg1 type:(Class)arg2 error:(id*)arg3;
- (id)hd_optionalValueForKey:(id)arg1 type:(Class)arg2 error:(id*)arg3;
- (id)hd_requiredEncryptedValueForKey:(id)arg1 type:(Class)arg2 error:(id*)arg3;
- (id)hd_requiredValueForKey:(id)arg1 type:(Class)arg2 error:(id*)arg3;
- (bool)hd_setEncryptedValue:(id)arg1 ifChangedForKey:(id)arg2;
- (bool)hd_setEncryptedValuesIfChanged:(id)arg1;
- (bool)hd_setValue:(id)arg1 ifChangedForKey:(id)arg2;
- (bool)hd_setValuesIfChanged:(id)arg1;
- (id)hd_systemData;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore

// CKRecord (HMB)

+ (id)recordFromExternalData:(id)arg1 error:(id*)arg2;

- (id)externalData:(id*)arg1;
- (id)externalID:(id*)arg1;
- (id)hmbDescription;
- (id)hmbObjectForKey:(id)arg1 encrypted:(bool)arg2;
- (void)hmbSetObject:(id)arg1 forKey:(id)arg2 encrypted:(bool)arg3;

// CKRecord (HMBCloudExtensions)

+ (id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id*)arg3;

- (id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id*)arg2;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit

// CKRecord (SyncState)

- (bool)mt_isSynchronized;
- (id)mt_secretValue;
- (void)mt_setSecretValue:(id)arg1;
- (void)mt_setSynchronized:(bool)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

// CKRecord (PKAdditions)

+ (id)pk_recordWithSystemFieldsData:(id)arg1;

- (id)_arrayFromStringValue:(id)arg1;
- (id)_copyArray:(id)arg1 forNewRecordZone:(id)arg2;
- (id)_copyReference:(id)arg1 forNewRecordZone:(id)arg2;
- (id)description;
- (id)pk_arrayForKey:(id)arg1;
- (bool)pk_boolForKey:(id)arg1;
- (id)pk_copyRecordForNewRecordZone:(id)arg1;
- (id)pk_dataForKey:(id)arg1;
- (id)pk_dateForKey:(id)arg1;
- (id)pk_decimalNumberForKey:(id)arg1;
- (id)pk_description;
- (id)pk_dictionaryForKey:(id)arg1;
- (id)pk_encryptedArrayOfClasses:(id)arg1 forKey:(id)arg2;
- (bool)pk_encryptedBoolForKey:(id)arg1;
- (id)pk_encryptedDataForKey:(id)arg1;
- (id)pk_encryptedDateForKey:(id)arg1;
- (id)pk_encryptedDecimalNumberForKey:(id)arg1;
- (id)pk_encryptedDictionaryForKey:(id)arg1;
- (int)pk_encryptedIntForKey:(id)arg1;
- (long long)pk_encryptedIntegerForKey:(id)arg1;
- (id)pk_encryptedLocationForKey:(id)arg1;
- (id)pk_encryptedNumberForKey:(id)arg1;
- (id)pk_encryptedObjectForKey:(id)arg1 ofClass:(Class)arg2;
- (id)pk_encryptedStringForKey:(id)arg1;
- (id)pk_encryptedUUIDForKey:(id)arg1;
- (unsigned long long)pk_encryptedUint64ForKey:(id)arg1;
- (unsigned long long)pk_encryptedUnsignedIntegerForKey:(id)arg1;
- (id)pk_encryptedUrlForKey:(id)arg1;
- (unsigned long long)pk_hash;
- (int)pk_intForKey:(id)arg1;
- (long long)pk_integerForKey:(id)arg1;
- (bool)pk_isPass;
- (bool)pk_isPassCatalog;
- (bool)pk_isRemoteAsset;
- (id)pk_locationForKey:(id)arg1;
- (id)pk_numberForKey:(id)arg1;
- (id)pk_objectForKey:(id)arg1 ofClass:(Class)arg2;
- (id)pk_participantWithEmailAddress:(id)arg1;
- (id)pk_participantWithLookupInfo:(id)arg1;
- (id)pk_participantWithPhoneNumber:(id)arg1;
- (id)pk_participantWithRecipientHandle:(id)arg1;
- (id)pk_referenceForKey:(id)arg1;
- (id)pk_share;
- (id)pk_stringForKey:(id)arg1;
- (id)pk_systemFieldsData;
- (unsigned long long)pk_uint64ForKey:(id)arg1;
- (unsigned long long)pk_unsignedIntegerForKey:(id)arg1;
- (id)pk_urlForKey:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/iCloudDriveCore.framework/iCloudDriveCore

// CKRecord (BRCContainerMetadataAdditions)

+ (id)brc_containerMetadataRecordWithContainer:(id)arg1;

- (id)brc_containerMetadataIconNames;
- (id)brc_containerMetadataIconPaths;
- (id)brc_containerMetadataPropertiesData;

// CKRecord (BRCItemAdditions)

+ (id)desiredKeysWithMask:(unsigned short)arg1;
+ (id)rootAppLibraryRecordForAppLibraryID:(id)arg1 zoneID:(id)arg2;
+ (id)rootDirectoryRecordForZoneID:(id)arg1;

- (bool)brc_currentUserOwnsLastEditorDeviceWithSession:(id)arg1;
- (bool)brc_isInterestingRecordForSave;
- (bool)brc_isInterestingRecordForSyncDown;
- (id)brc_lastEditorDeviceName;
- (id)brc_lastModifiedUserRecordNameWithCurrentUserRecordName:(id)arg1 personNameComponents:(id*)arg2;
- (id)brc_oplockMergeEtag;
- (bool)brc_safeToGetURL;
- (id)brc_updateDroppedReason;
- (void)sanitizeShortTokenFields;
- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

// CKRecord (BRCSerializationAdditions)

+ (id)newFromSqliteStatement:(struct sqlite3_stmt { }*)arg1 atIndex:(int)arg2;
+ (id)newFromSqliteValue:(struct sqlite3_value { }*)arg1;

- (id)_createAppLibraryIfNecessary:(id)arg1 session:(id)arg2;
- (void)_deserializeRootSharingOptions:(unsigned long long*)arg1;
- (bool)_deserializeValue:(id*)arg1 forKey:(id)arg2 encrypted:(bool)arg3 expectClass:(Class)arg4 allowNil:(bool)arg5 errorDescription:(id*)arg6;
- (bool)_locateSideCarServerZone:(id*)arg1 withShareAliasReference:(id)arg2 withSession:(id)arg3;
- (bool)deserializeAliasInfo:(id*)arg1 serverZone:(id)arg2 error:(id*)arg3;
- (bool)deserializeFilename:(id*)arg1 basename:(id*)arg2 bounceno:(id*)arg3 extension:(id*)arg4 userInfo:(id)arg5 error:(id*)arg6;
- (void)deserializeFolderSharingOptions:(unsigned long long*)arg1;
- (bool)deserializeSideCarInfo:(id*)arg1 error:(id*)arg2;
- (bool)deserializeStatInfo:(id*)arg1 serverMetrics:(id*)arg2 itemID:(id)arg3 session:(id)arg4 error:(id*)arg5;
- (bool)deserializeSymlinkTarget:(id*)arg1 error:(id*)arg2;
- (bool)deserializeVersion:(id*)arg1 fakeStatInfo:(id*)arg2 clientZone:(id)arg3 error:(id*)arg4;
- (bool)deserializeiWorkSharingOptions:(unsigned long long*)arg1 error:(id*)arg2;
- (bool)locateSideCarServerZone:(id*)arg1 shareRecordName:(id*)arg2 withSession:(id)arg3;
- (void)processAppLibraryDataWithMovedZoneNames:(id)arg1 serverZone:(id)arg2 isDeltaSync:(bool)arg3;
- (void)serializeFilename:(id)arg1 forCreation:(bool)arg2;
- (void)serializeFilename:(id)arg1 forCreation:(bool)arg2 setExtension:(bool)arg3;
- (void)serializeFilename:(id)arg1 forCreation:(bool)arg2 setExtension:(bool)arg3 inSharedAlias:(bool)arg4;
- (void)serializeFinderTags:(id)arg1 forCreation:(bool)arg2;
- (void)serializeSideCarInfo:(id)arg1 filenameExtension:(id)arg2 diffs:(unsigned long long)arg3 deadInServerTruth:(bool)arg4;
- (void)serializeStatInfo:(id)arg1 diffs:(unsigned long long)arg2 stageID:(id)arg3 deadInServerTruth:(bool)arg4 shouldPCSChainStatus:(unsigned char)arg5;
- (void)serializeSystemFields:(id)arg1;
- (void)serializeSystemFields:(id)arg1 includeCZMEtag:(bool)arg2;
- (void)serializeVersion:(id)arg1 diffs:(unsigned long long)arg2 deadInServerTruth:(bool)arg3;
- (void)setLastUsedTime:(long long)arg1;
- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

// CKRecord (BRCSharingAdditions)

- (id)brc_sharedLinkDisplayName;
- (id)brc_sharedRootDisplayName;
- (id)brc_sharedRootExtension;
- (void)brc_updateWithLogicalName:(id)arg1 isFolder:(bool)arg2;
- (bool)isFolderShare;

// CKRecord (BRCWorkAround)

+ (id)brc_fakeRecordWithErrorMarkerFor20716676;

- (bool)brc_isfakeRecordWithErrorMarkerFor20716676;

@end
