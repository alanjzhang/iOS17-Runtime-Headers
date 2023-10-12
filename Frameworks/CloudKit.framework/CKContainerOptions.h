/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKContainerOptions : NSObject <CKPropertiesDescription, CKSQLiteItem, NSCopying, NSSecureCoding> {
    bool  _accountInfoCacheIsDisabled;
    CKAccountOverrideInfo * _accountOverrideInfo;
    bool  _addDatabaseScopeToZoneIDs;
    NSString * _applicationBundleIdentifierOverrideForContainerAccess;
    NSString * _applicationBundleIdentifierOverrideForNetworkAttribution;
    NSString * _applicationBundleIdentifierOverrideForPushTopicGeneration;
    NSString * _applicationBundleIdentifierOverrideForTCC;
    bool  _bypassPCSEncryption;
    bool  _captureResponseHTTPHeaders;
    bool  _encryptMergeableValueMetadata;
    NSString * _encryptionServiceName;
    bool  _enforceNamedOperationGroups;
    NSDictionary * _fakeEntitlements;
    bool  _fetchChangesForMergeableValues;
    bool  _forceEnableReadOnlyManatee;
    bool  _holdAllOperations;
    bool  _isServiceManatee;
    bool  _maintainRecordUploadOrder;
    unsigned long long  _mmcsEncryptionSupport;
    NSString * _personaIdentifier;
    bool  _prefersHiddenAllowedSharingOptionsUI;
    long long  _qualityOfService;
    bool  _returnPCSMetadata;
    bool  _returnRequestOperationProto;
    <CKTestDeviceReferenceProtocol> * _testDeviceReferenceProtocol;
    CKUploadRequestConfiguration * _uploadRequestConfiguration;
    bool  _useAnonymousToServerShareParticipants;
    bool  _useClearAssetEncryption;
    bool  _useZoneWidePCS;
}

@property bool accountInfoCacheIsDisabled;
@property (copy) CKAccountOverrideInfo *accountInfoOverride;
@property (copy) CKAccountOverrideInfo *accountOverrideInfo;
@property bool addDatabaseScopeToZoneIDs;
@property (copy) NSString *applicationBundleIdentifierOverrideForContainerAccess;
@property (copy) NSString *applicationBundleIdentifierOverrideForNetworkAttribution;
@property (copy) NSString *applicationBundleIdentifierOverrideForPushTopicGeneration;
@property (copy) NSString *applicationBundleIdentifierOverrideForTCC;
@property bool bypassPCSEncryption;
@property bool captureResponseHTTPHeaders;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool encryptMergeableValueMetadata;
@property (copy) NSString *encryptionServiceName;
@property bool enforceNamedOperationGroups;
@property (copy) NSDictionary *fakeEntitlements;
@property bool fetchChangesForMergeableValues;
@property bool forceEnableReadOnlyManatee;
@property (readonly) unsigned long long hash;
@property bool holdAllOperations;
@property bool isServiceManatee;
@property bool maintainRecordUploadOrder;
@property unsigned long long mmcsEncryptionSupport;
@property (copy) NSString *personaIdentifier;
@property bool prefersHiddenAllowedSharingOptionsUI;
@property long long qualityOfService;
@property bool returnPCSMetadata;
@property bool returnRequestOperationProto;
@property (readonly) Class superclass;
@property (retain) <CKTestDeviceReferenceProtocol> *testDeviceReferenceProtocol;
@property (retain) CKUploadRequestConfiguration *uploadRequestConfiguration;
@property bool useAnonymousToServerShareParticipants;
@property bool useClearAssetEncryption;
@property bool useZoneWidePCS;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)CKDescribePropertiesUsing:(id)arg1;
- (id)CKShortDescriptionRedact:(bool)arg1;
- (bool)accountInfoCacheIsDisabled;
- (id)accountInfoOverride;
- (id)accountOverrideInfo;
- (bool)addDatabaseScopeToZoneIDs;
- (id)applicationBundleIdentifierOverrideForContainerAccess;
- (id)applicationBundleIdentifierOverrideForNetworkAttribution;
- (id)applicationBundleIdentifierOverrideForPushTopicGeneration;
- (id)applicationBundleIdentifierOverrideForTCC;
- (bool)bypassPCSEncryption;
- (bool)captureResponseHTTPHeaders;
- (void)ck_bindInStatement:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)encryptMergeableValueMetadata;
- (id)encryptionServiceName;
- (bool)enforceNamedOperationGroups;
- (id)fakeEntitlements;
- (bool)fetchChangesForMergeableValues;
- (bool)forceEnableReadOnlyManatee;
- (unsigned long long)hash;
- (bool)holdAllOperations;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSqliteRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isServiceManatee;
- (bool)maintainRecordUploadOrder;
- (unsigned long long)mmcsEncryptionSupport;
- (id)personaIdentifier;
- (bool)prefersHiddenAllowedSharingOptionsUI;
- (long long)qualityOfService;
- (id)redactedDescription;
- (bool)returnPCSMetadata;
- (bool)returnRequestOperationProto;
- (void)setAccountInfoCacheIsDisabled:(bool)arg1;
- (void)setAccountInfoOverride:(id)arg1;
- (void)setAccountOverrideInfo:(id)arg1;
- (void)setAddDatabaseScopeToZoneIDs:(bool)arg1;
- (void)setApplicationBundleIdentifierOverride:(id)arg1;
- (void)setApplicationBundleIdentifierOverrideForContainerAccess:(id)arg1;
- (void)setApplicationBundleIdentifierOverrideForNetworkAttribution:(id)arg1;
- (void)setApplicationBundleIdentifierOverrideForPushTopicGeneration:(id)arg1;
- (void)setApplicationBundleIdentifierOverrideForTCC:(id)arg1;
- (void)setBypassPCSEncryption:(bool)arg1;
- (void)setCaptureResponseHTTPHeaders:(bool)arg1;
- (void)setEncryptMergeableValueMetadata:(bool)arg1;
- (void)setEncryptionServiceName:(id)arg1;
- (void)setEnforceNamedOperationGroups:(bool)arg1;
- (void)setFakeEntitlements:(id)arg1;
- (void)setFetchChangesForMergeableValues:(bool)arg1;
- (void)setForceEnableReadOnlyManatee:(bool)arg1;
- (void)setHoldAllOperations:(bool)arg1;
- (void)setIsServiceManatee:(bool)arg1;
- (void)setMaintainRecordUploadOrder:(bool)arg1;
- (void)setMmcsEncryptionSupport:(unsigned long long)arg1;
- (void)setPersonaIdentifier:(id)arg1;
- (void)setPrefersHiddenAllowedSharingOptionsUI:(bool)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setReturnPCSMetadata:(bool)arg1;
- (void)setReturnRequestOperationProto:(bool)arg1;
- (void)setTestDeviceReferenceProtocol:(id)arg1;
- (void)setUploadRequestConfiguration:(id)arg1;
- (void)setUseAnonymousToServerShareParticipants:(bool)arg1;
- (void)setUseClearAssetEncryption:(bool)arg1;
- (void)setUseMMCSEncryptionV2:(bool)arg1;
- (void)setUseZoneWidePCS:(bool)arg1;
- (id)sqliteRepresentation;
- (id)testDeviceReferenceProtocol;
- (id)uploadRequestConfiguration;
- (bool)useAnonymousToServerShareParticipants;
- (bool)useClearAssetEncryption;
- (bool)useZoneWidePCS;

@end