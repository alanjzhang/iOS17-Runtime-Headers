/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFApp : NSObject <NSCopying, NSSecureCoding> {
    NSString * _DNSProxyUUIDString;
    NSString * _VPNUUIDString;
    NSArray * _associatedDomains;
    NSNumber * _associatedDomainsEnableDirectDownloads;
    NSString * _bundleIdentifier;
    NSString * _cellularSliceUUIDString;
    NSDictionary * _configuration;
    NSString * _contentFilterUUIDString;
    NSString * _displayName;
    NSNumber * _dynamicUsage;
    NSNumber * _externalVersionIdentifier;
    NSDictionary * _feedback;
    bool  _hasUpdateAvailable;
    unsigned long long  _installationState;
    bool  _isAdHocCodeSigned;
    bool  _isAppClip;
    bool  _isAppStoreVendable;
    bool  _isBetaApp;
    bool  _isBlocked;
    bool  _isDeviceBasedVPP;
    bool  _isLicenseExpired;
    bool  _isLicenseRevoked;
    bool  _isPlaceholder;
    bool  _isRestricted;
    bool  _isUPP;
    bool  _isUserBasedVPP;
    bool  _isValidated;
    DMFAppManagementInformation * _managementInformation;
    NSNumber * _onDemandResourcesUsage;
    NSString * _relayUUIDString;
    NSNumber * _removable;
    NSNumber * _sharedUsage;
    NSString * _shortVersion;
    NSString * _sourceIdentifier;
    NSNumber * _staticUsage;
    NSNumber * _storeItemIdentifier;
    NSNumber * _tapToPayScreenLock;
    unsigned long long  _type;
    NSString * _version;
}

@property (nonatomic, copy) NSString *DNSProxyUUIDString;
@property (nonatomic, copy) NSString *VPNUUIDString;
@property (nonatomic, copy) NSArray *associatedDomains;
@property (nonatomic, copy) NSNumber *associatedDomainsEnableDirectDownloads;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *cellularSliceUUIDString;
@property (nonatomic, copy) NSDictionary *configuration;
@property (nonatomic, copy) NSString *contentFilterUUIDString;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSNumber *dynamicUsage;
@property (nonatomic, copy) NSNumber *externalVersionIdentifier;
@property (nonatomic, copy) NSDictionary *feedback;
@property (nonatomic) bool hasUpdateAvailable;
@property (nonatomic) unsigned long long installationState;
@property (nonatomic) bool isAdHocCodeSigned;
@property (nonatomic) bool isAppClip;
@property (nonatomic) bool isAppStoreVendable;
@property (nonatomic) bool isBetaApp;
@property (nonatomic) bool isBlocked;
@property (nonatomic) bool isDeviceBasedVPP;
@property (nonatomic) bool isLicenseExpired;
@property (nonatomic) bool isLicenseRevoked;
@property (nonatomic) bool isPlaceholder;
@property (nonatomic) bool isRestricted;
@property (nonatomic) bool isUPP;
@property (nonatomic) bool isUserBasedVPP;
@property (nonatomic) bool isValidated;
@property (nonatomic, copy) DMFAppManagementInformation *managementInformation;
@property (nonatomic, copy) NSNumber *onDemandResourcesUsage;
@property (nonatomic, copy) NSString *relayUUIDString;
@property (nonatomic, copy) NSNumber *removable;
@property (nonatomic, copy) NSNumber *sharedUsage;
@property (nonatomic, copy) NSString *shortVersion;
@property (nonatomic, copy) NSString *sourceIdentifier;
@property (nonatomic, copy) NSNumber *staticUsage;
@property (nonatomic, copy) NSNumber *storeItemIdentifier;
@property (nonatomic, copy) NSNumber *tapToPayScreenLock;
@property (nonatomic) unsigned long long type;
@property (nonatomic, copy) NSString *version;

+ (id)stringForInstallationState:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)DNSProxyUUIDString;
- (id)VPNUUIDString;
- (id)_stringForType:(unsigned long long)arg1;
- (id)associatedDomains;
- (id)associatedDomainsEnableDirectDownloads;
- (id)bundleIdentifier;
- (id)cellularSliceUUIDString;
- (id)configuration;
- (id)contentFilterUUIDString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (id)dynamicUsage;
- (void)encodeWithCoder:(id)arg1;
- (id)externalVersionIdentifier;
- (id)feedback;
- (bool)hasUpdateAvailable;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)installationState;
- (bool)isAdHocCodeSigned;
- (bool)isAppClip;
- (bool)isAppStoreVendable;
- (bool)isBetaApp;
- (bool)isBlocked;
- (bool)isDeviceBasedVPP;
- (bool)isEqual:(id)arg1;
- (bool)isLicenseExpired;
- (bool)isLicenseRevoked;
- (bool)isPlaceholder;
- (bool)isRestricted;
- (bool)isUPP;
- (bool)isUserBasedVPP;
- (bool)isValidated;
- (id)managementInformation;
- (id)onDemandResourcesUsage;
- (id)relayUUIDString;
- (id)removable;
- (void)setAssociatedDomains:(id)arg1;
- (void)setAssociatedDomainsEnableDirectDownloads:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setCellularSliceUUIDString:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setContentFilterUUIDString:(id)arg1;
- (void)setDNSProxyUUIDString:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setDynamicUsage:(id)arg1;
- (void)setExternalVersionIdentifier:(id)arg1;
- (void)setFeedback:(id)arg1;
- (void)setHasUpdateAvailable:(bool)arg1;
- (void)setInstallationState:(unsigned long long)arg1;
- (void)setIsAdHocCodeSigned:(bool)arg1;
- (void)setIsAppClip:(bool)arg1;
- (void)setIsAppStoreVendable:(bool)arg1;
- (void)setIsBetaApp:(bool)arg1;
- (void)setIsBlocked:(bool)arg1;
- (void)setIsDeviceBasedVPP:(bool)arg1;
- (void)setIsLicenseExpired:(bool)arg1;
- (void)setIsLicenseRevoked:(bool)arg1;
- (void)setIsPlaceholder:(bool)arg1;
- (void)setIsRestricted:(bool)arg1;
- (void)setIsUPP:(bool)arg1;
- (void)setIsUserBasedVPP:(bool)arg1;
- (void)setIsValidated:(bool)arg1;
- (void)setManagementInformation:(id)arg1;
- (void)setOnDemandResourcesUsage:(id)arg1;
- (void)setRelayUUIDString:(id)arg1;
- (void)setRemovable:(id)arg1;
- (void)setSharedUsage:(id)arg1;
- (void)setShortVersion:(id)arg1;
- (void)setSourceIdentifier:(id)arg1;
- (void)setStaticUsage:(id)arg1;
- (void)setStoreItemIdentifier:(id)arg1;
- (void)setTapToPayScreenLock:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setVPNUUIDString:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)sharedUsage;
- (id)shortVersion;
- (id)sourceIdentifier;
- (id)staticUsage;
- (id)storeItemIdentifier;
- (id)tapToPayScreenLock;
- (unsigned long long)type;
- (id)version;

@end
