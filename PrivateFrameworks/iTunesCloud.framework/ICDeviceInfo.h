/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICDeviceInfo : NSObject <ICNanoPairedDeviceStatusObserver> {
    NSString * _buildVersion;
    NSString * _currentLocale;
    int  _deviceClass;
    NSString * _deviceClassName;
    NSString * _deviceGUID;
    NSData * _deviceGUIDData;
    NSString * _deviceModel;
    NSObject<OS_dispatch_queue> * _deviceNameUpdateQueue;
    unsigned int  _fairPlayDeviceType;
    NSString * _hardwarePlatform;
    NSNumber * _has1080pCapabilityValue;
    NSNumber * _has720pCapabilityValue;
    NSNumber * _hasCellularDataCapabilityNumber;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _hasRegisteredForNameNotifications;
    NSNumber * _hasTelephonyCapabilityNumber;
    NSNumber * _hasWAPICapabilityValue;
    NSNumber * _hasWiFiCapabilityValue;
    NSNumber * _isInternalBuildNumber;
    NSNumber * _isPhoneNumberAccessRestrictedValue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSData * _macAddressData;
    struct CGSize { 
        double width; 
        double height; 
    }  _mainScreenSize;
    NSString * _name;
    struct MGNotificationTokenStruct { } * _nameNotificationToken;
    NSString * _productVersion;
    NSString * _rawDeviceModel;
    NSNumber * _screenClassValue;
    NSString * _serialNumber;
    NSNumber * _supportsMusicStreamingValue;
    NSString * _systemReleaseType;
}

@property (nonatomic, readonly, copy) NSString *buildVersion;
@property (nonatomic, readonly, copy) NSString *currentLocale;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int deviceClass;
@property (nonatomic, readonly, copy) NSString *deviceClassName;
@property (nonatomic, readonly, copy) NSData *deviceFairPlayGUIDData;
@property (nonatomic, readonly, copy) NSString *deviceGUID;
@property (nonatomic, readonly, copy) NSString *deviceModel;
@property (nonatomic, readonly, copy) NSString *deviceName;
@property (nonatomic, readonly) unsigned int fairPlayDeviceType;
@property (nonatomic, readonly, copy) NSString *hardwarePlatform;
@property (nonatomic, readonly) bool has1080pCapability;
@property (nonatomic, readonly) bool has720pCapability;
@property (nonatomic, readonly) bool hasCellularDataCapability;
@property (nonatomic, readonly) bool hasTelephonyCapability;
@property (nonatomic, readonly) bool hasWAPICapability;
@property (nonatomic, readonly) bool hasWiFiCapability;
@property (readonly) unsigned long long hash;
@property (getter=isInternalBuild, nonatomic, readonly) bool internalBuild;
@property (nonatomic, readonly) bool isAppleTV;
@property (nonatomic, readonly) bool isAudioAccessory;
@property (nonatomic, readonly) bool isIPad;
@property (nonatomic, readonly) bool isIPhone;
@property (nonatomic, readonly) bool isIPod;
@property (nonatomic, readonly) bool isMac;
@property (nonatomic, readonly) bool isROSDevice;
@property (nonatomic, readonly) bool isWatch;
@property (nonatomic, readonly, copy) NSString *macAddress;
@property (nonatomic, readonly, copy) NSData *macAddressData;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } mainScreenSize;
@property (nonatomic, readonly, copy) NSString *name;
@property (getter=isPhoneNumberAccessRestricted, nonatomic, readonly) bool phoneNumberAccessRestricted;
@property (nonatomic, readonly, copy) NSString *productPlatform;
@property (nonatomic, readonly, copy) NSString *productVersion;
@property (nonatomic, readonly, copy) NSString *rawDeviceModel;
@property (nonatomic, readonly) int screenClass;
@property (getter=isSeedBuild, nonatomic, readonly) bool seedBuild;
@property (nonatomic, readonly, copy) NSString *serialNumber;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsMultipleITunesAccounts;
@property (nonatomic, readonly) bool supportsMusicStreaming;
@property (nonatomic, readonly) bool supportsSideLoadedMediaContent;
@property (nonatomic, readonly, copy) NSString *systemReleaseType;

+ (id)currentDeviceInfo;
+ (id)defaultInfo;

- (void).cxx_destruct;
- (int)_gestaltDeviceClass;
- (id)_init;
- (id)buildVersion;
- (id)currentLocale;
- (void)dealloc;
- (int)deviceClass;
- (id)deviceClassName;
- (id)deviceFairPlayGUIDData;
- (id)deviceGUID;
- (id)deviceModel;
- (id)deviceName;
- (unsigned int)fairPlayDeviceType;
- (id)hardwarePlatform;
- (bool)has1080pCapability;
- (bool)has720pCapability;
- (bool)hasCellularDataCapability;
- (bool)hasTelephonyCapability;
- (bool)hasWAPICapability;
- (bool)hasWiFiCapability;
- (bool)isAppleTV;
- (bool)isAudioAccessory;
- (bool)isIPad;
- (bool)isIPhone;
- (bool)isIPod;
- (bool)isInternalBuild;
- (bool)isMac;
- (bool)isPhoneNumberAccessRestricted;
- (bool)isROSDevice;
- (bool)isSeedBuild;
- (bool)isWatch;
- (id)macAddress;
- (id)macAddressData;
- (struct CGSize { double x1; double x2; })mainScreenSize;
- (id)name;
- (id)productPlatform;
- (id)productVersion;
- (id)rawDeviceModel;
- (int)screenClass;
- (id)serialNumber;
- (bool)supportsMultipleITunesAccounts;
- (bool)supportsMusicStreaming;
- (bool)supportsSideLoadedMediaContent;
- (id)systemReleaseType;

@end
