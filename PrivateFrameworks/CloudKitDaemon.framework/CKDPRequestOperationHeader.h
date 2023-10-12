/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRequestOperationHeader : PBCodable <NSCopying> {
    NSMutableArray * _activeThrottlingLabels;
    NSString * _applicationBundle;
    unsigned long long  _applicationConfigVersion;
    NSString * _applicationContainer;
    int  _applicationContainerEnvironment;
    NSString * _applicationVersion;
    CKDPRequestOperationHeaderAssetAuthorizeGetRequestOptions * _assetAuthorizeGetRequestOptions;
    NSData * _clientChangeToken;
    NSString * _deviceAssignedName;
    NSString * _deviceHardwareID;
    NSString * _deviceHardwareVersion;
    CKDPIdentifier * _deviceIdentifier;
    NSString * _deviceLibraryName;
    NSString * _deviceLibraryVersion;
    unsigned long long  _deviceProtocolVersion;
    NSString * _deviceSerialNumber;
    bool  _deviceSoftwareIsAppleInternal;
    NSString * _deviceSoftwareVersion;
    NSString * _deviceUDID;
    bool  _entitlementsValidated;
    unsigned long long  _globalConfigVersion;
    struct { 
        unsigned int applicationConfigVersion : 1; 
        unsigned int deviceProtocolVersion : 1; 
        unsigned int globalConfigVersion : 1; 
        unsigned int operationGroupQuantity : 1; 
        unsigned int applicationContainerEnvironment : 1; 
        unsigned int isolationLevel : 1; 
        unsigned int requestOriginator : 1; 
        unsigned int targetDatabase : 1; 
        unsigned int deviceSoftwareIsAppleInternal : 1; 
        unsigned int entitlementsValidated : 1; 
    }  _has;
    int  _isolationLevel;
    CKDPLocale * _locale;
    NSString * _mmcsProtocolVersion;
    NSString * _operationGroupName;
    unsigned long long  _operationGroupQuantity;
    int  _requestOriginator;
    NSMutableArray * _serviceIdentityKeyIDs;
    NSMutableArray * _supplementalZoneInfos;
    int  _targetDatabase;
    NSString * _userIDContainerID;
    NSString * _userToken;
}

@property (nonatomic, retain) NSMutableArray *activeThrottlingLabels;
@property (nonatomic, retain) NSString *applicationBundle;
@property (nonatomic) unsigned long long applicationConfigVersion;
@property (nonatomic, retain) NSString *applicationContainer;
@property (nonatomic) int applicationContainerEnvironment;
@property (nonatomic, retain) NSString *applicationVersion;
@property (nonatomic, retain) CKDPRequestOperationHeaderAssetAuthorizeGetRequestOptions *assetAuthorizeGetRequestOptions;
@property (nonatomic, retain) NSData *clientChangeToken;
@property (nonatomic, retain) NSString *deviceAssignedName;
@property (nonatomic, retain) NSString *deviceHardwareID;
@property (nonatomic, retain) NSString *deviceHardwareVersion;
@property (nonatomic, retain) CKDPIdentifier *deviceIdentifier;
@property (nonatomic, retain) NSString *deviceLibraryName;
@property (nonatomic, retain) NSString *deviceLibraryVersion;
@property (nonatomic) unsigned long long deviceProtocolVersion;
@property (nonatomic, retain) NSString *deviceSerialNumber;
@property (nonatomic) bool deviceSoftwareIsAppleInternal;
@property (nonatomic, retain) NSString *deviceSoftwareVersion;
@property (nonatomic, retain) NSString *deviceUDID;
@property (nonatomic) bool entitlementsValidated;
@property (nonatomic) unsigned long long globalConfigVersion;
@property (nonatomic, readonly) bool hasApplicationBundle;
@property (nonatomic) bool hasApplicationConfigVersion;
@property (nonatomic, readonly) bool hasApplicationContainer;
@property (nonatomic) bool hasApplicationContainerEnvironment;
@property (nonatomic, readonly) bool hasApplicationVersion;
@property (nonatomic, readonly) bool hasAssetAuthorizeGetRequestOptions;
@property (nonatomic, readonly) bool hasClientChangeToken;
@property (nonatomic, readonly) bool hasDeviceAssignedName;
@property (nonatomic, readonly) bool hasDeviceHardwareID;
@property (nonatomic, readonly) bool hasDeviceHardwareVersion;
@property (nonatomic, readonly) bool hasDeviceIdentifier;
@property (nonatomic, readonly) bool hasDeviceLibraryName;
@property (nonatomic, readonly) bool hasDeviceLibraryVersion;
@property (nonatomic) bool hasDeviceProtocolVersion;
@property (nonatomic, readonly) bool hasDeviceSerialNumber;
@property (nonatomic) bool hasDeviceSoftwareIsAppleInternal;
@property (nonatomic, readonly) bool hasDeviceSoftwareVersion;
@property (nonatomic, readonly) bool hasDeviceUDID;
@property (nonatomic) bool hasEntitlementsValidated;
@property (nonatomic) bool hasGlobalConfigVersion;
@property (nonatomic) bool hasIsolationLevel;
@property (nonatomic, readonly) bool hasLocale;
@property (nonatomic, readonly) bool hasMmcsProtocolVersion;
@property (nonatomic, readonly) bool hasOperationGroupName;
@property (nonatomic) bool hasOperationGroupQuantity;
@property (nonatomic) bool hasRequestOriginator;
@property (nonatomic) bool hasTargetDatabase;
@property (nonatomic, readonly) bool hasUserIDContainerID;
@property (nonatomic, readonly) bool hasUserToken;
@property (nonatomic) int isolationLevel;
@property (nonatomic, retain) CKDPLocale *locale;
@property (nonatomic, retain) NSString *mmcsProtocolVersion;
@property (nonatomic, retain) NSString *operationGroupName;
@property (nonatomic) unsigned long long operationGroupQuantity;
@property (nonatomic) int requestOriginator;
@property (nonatomic, retain) NSMutableArray *serviceIdentityKeyIDs;
@property (nonatomic, retain) NSMutableArray *supplementalZoneInfos;
@property (nonatomic) int targetDatabase;
@property (nonatomic, retain) NSString *userIDContainerID;
@property (nonatomic, retain) NSString *userToken;

+ (Class)activeThrottlingLabelType;
+ (Class)serviceIdentityKeyIDsType;
+ (Class)supplementalZoneInfosType;

- (void).cxx_destruct;
- (int)StringAsApplicationContainerEnvironment:(id)arg1;
- (int)StringAsIsolationLevel:(id)arg1;
- (int)StringAsRequestOriginator:(id)arg1;
- (int)StringAsTargetDatabase:(id)arg1;
- (id)_applicationContainerEnvironmentCKLogValue;
- (id)_isolationLevelCKLogValue;
- (id)_targetDatabaseCKLogValue;
- (id)activeThrottlingLabelAtIndex:(unsigned long long)arg1;
- (id)activeThrottlingLabels;
- (unsigned long long)activeThrottlingLabelsCount;
- (void)addActiveThrottlingLabel:(id)arg1;
- (void)addServiceIdentityKeyIDs:(id)arg1;
- (void)addSupplementalZoneInfos:(id)arg1;
- (id)applicationBundle;
- (unsigned long long)applicationConfigVersion;
- (id)applicationContainer;
- (int)applicationContainerEnvironment;
- (id)applicationContainerEnvironmentAsString:(int)arg1;
- (id)applicationVersion;
- (id)assetAuthorizeGetRequestOptions;
- (void)clearActiveThrottlingLabels;
- (void)clearServiceIdentityKeyIDs;
- (void)clearSupplementalZoneInfos;
- (id)clientChangeToken;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceAssignedName;
- (id)deviceHardwareID;
- (id)deviceHardwareVersion;
- (id)deviceIdentifier;
- (id)deviceLibraryName;
- (id)deviceLibraryVersion;
- (unsigned long long)deviceProtocolVersion;
- (id)deviceSerialNumber;
- (bool)deviceSoftwareIsAppleInternal;
- (id)deviceSoftwareVersion;
- (id)deviceUDID;
- (id)dictionaryRepresentation;
- (bool)entitlementsValidated;
- (unsigned long long)globalConfigVersion;
- (bool)hasApplicationBundle;
- (bool)hasApplicationConfigVersion;
- (bool)hasApplicationContainer;
- (bool)hasApplicationContainerEnvironment;
- (bool)hasApplicationVersion;
- (bool)hasAssetAuthorizeGetRequestOptions;
- (bool)hasClientChangeToken;
- (bool)hasDeviceAssignedName;
- (bool)hasDeviceHardwareID;
- (bool)hasDeviceHardwareVersion;
- (bool)hasDeviceIdentifier;
- (bool)hasDeviceLibraryName;
- (bool)hasDeviceLibraryVersion;
- (bool)hasDeviceProtocolVersion;
- (bool)hasDeviceSerialNumber;
- (bool)hasDeviceSoftwareIsAppleInternal;
- (bool)hasDeviceSoftwareVersion;
- (bool)hasDeviceUDID;
- (bool)hasEntitlementsValidated;
- (bool)hasGlobalConfigVersion;
- (bool)hasIsolationLevel;
- (bool)hasLocale;
- (bool)hasMmcsProtocolVersion;
- (bool)hasOperationGroupName;
- (bool)hasOperationGroupQuantity;
- (bool)hasRequestOriginator;
- (bool)hasTargetDatabase;
- (bool)hasUserIDContainerID;
- (bool)hasUserToken;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)isolationLevel;
- (id)isolationLevelAsString:(int)arg1;
- (id)locale;
- (void)mergeFrom:(id)arg1;
- (id)mmcsProtocolVersion;
- (id)operationGroupName;
- (unsigned long long)operationGroupQuantity;
- (bool)readFrom:(id)arg1;
- (int)requestOriginator;
- (id)requestOriginatorAsString:(int)arg1;
- (id)serviceIdentityKeyIDs;
- (id)serviceIdentityKeyIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)serviceIdentityKeyIDsCount;
- (void)setActiveThrottlingLabels:(id)arg1;
- (void)setApplicationBundle:(id)arg1;
- (void)setApplicationConfigVersion:(unsigned long long)arg1;
- (void)setApplicationContainer:(id)arg1;
- (void)setApplicationContainerEnvironment:(int)arg1;
- (void)setApplicationVersion:(id)arg1;
- (void)setAssetAuthorizeGetRequestOptions:(id)arg1;
- (void)setClientChangeToken:(id)arg1;
- (void)setDeviceAssignedName:(id)arg1;
- (void)setDeviceHardwareID:(id)arg1;
- (void)setDeviceHardwareVersion:(id)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setDeviceLibraryName:(id)arg1;
- (void)setDeviceLibraryVersion:(id)arg1;
- (void)setDeviceProtocolVersion:(unsigned long long)arg1;
- (void)setDeviceSerialNumber:(id)arg1;
- (void)setDeviceSoftwareIsAppleInternal:(bool)arg1;
- (void)setDeviceSoftwareVersion:(id)arg1;
- (void)setDeviceUDID:(id)arg1;
- (void)setEntitlementsValidated:(bool)arg1;
- (void)setGlobalConfigVersion:(unsigned long long)arg1;
- (void)setHasApplicationConfigVersion:(bool)arg1;
- (void)setHasApplicationContainerEnvironment:(bool)arg1;
- (void)setHasDeviceProtocolVersion:(bool)arg1;
- (void)setHasDeviceSoftwareIsAppleInternal:(bool)arg1;
- (void)setHasEntitlementsValidated:(bool)arg1;
- (void)setHasGlobalConfigVersion:(bool)arg1;
- (void)setHasIsolationLevel:(bool)arg1;
- (void)setHasOperationGroupQuantity:(bool)arg1;
- (void)setHasRequestOriginator:(bool)arg1;
- (void)setHasTargetDatabase:(bool)arg1;
- (void)setIsolationLevel:(int)arg1;
- (void)setLocale:(id)arg1;
- (void)setMmcsProtocolVersion:(id)arg1;
- (void)setOperationGroupName:(id)arg1;
- (void)setOperationGroupQuantity:(unsigned long long)arg1;
- (void)setRequestOriginator:(int)arg1;
- (void)setServiceIdentityKeyIDs:(id)arg1;
- (void)setSupplementalZoneInfos:(id)arg1;
- (void)setTargetDatabase:(int)arg1;
- (void)setUserIDContainerID:(id)arg1;
- (void)setUserToken:(id)arg1;
- (id)supplementalZoneInfos;
- (id)supplementalZoneInfosAtIndex:(unsigned long long)arg1;
- (unsigned long long)supplementalZoneInfosCount;
- (int)targetDatabase;
- (id)targetDatabaseAsString:(int)arg1;
- (id)userIDContainerID;
- (id)userToken;
- (void)writeTo:(id)arg1;

@end
