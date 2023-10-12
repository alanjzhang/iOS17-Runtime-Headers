/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSCurrentDeviceInfo : NSObject <AMSDeviceInfo>

@property (nonatomic, readonly) NSString *MLBSerialNumber;
@property (nonatomic, readonly) NSString *ROMAddress;
@property (nonatomic) long long biometricState;
@property (nonatomic, readonly) NSString *buildVersion;
@property (nonatomic, readonly) NSArray *carrierNames;
@property (nonatomic, readonly) AMSPromise *carrierNamesPromise;
@property (nonatomic, readonly) NSString *compatibleProductType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *deviceGUID;
@property (nonatomic, readonly) bool deviceIsAppleTV;
@property (nonatomic, readonly) bool deviceIsAppleTVSimulator;
@property (nonatomic, readonly) bool deviceIsAppleWatch;
@property (nonatomic, readonly) bool deviceIsAppleWatchSimulator;
@property (nonatomic, readonly) bool deviceIsAudioAccessory;
@property (nonatomic, readonly) bool deviceIsBundle;
@property (nonatomic, readonly) bool deviceIsMac;
@property (nonatomic, readonly) bool deviceIsPasscodeProtected;
@property (nonatomic, readonly) bool deviceIsRealityDevice;
@property (nonatomic, readonly) bool deviceIsRealityDeviceSimulator;
@property (nonatomic, readonly) bool deviceIsiPad;
@property (nonatomic, readonly) bool deviceIsiPadSimulator;
@property (nonatomic, readonly) bool deviceIsiPhone;
@property (nonatomic, readonly) bool deviceIsiPhoneSimulator;
@property (nonatomic, readonly) bool deviceIsiPod;
@property (nonatomic, readonly) bool deviceIsiPodSimulator;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) NSString *hardwarePlatform;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *localIPAddress;
@property (nonatomic, readonly) NSString *macAddress;
@property (nonatomic, readonly) NSData *macAddressData;
@property (nonatomic, readonly) NSString *modelPartNumber;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *operatingSystem;
@property (nonatomic, readonly) NSString *phoneNumber;
@property (nonatomic, readonly) NSString *productType;
@property (nonatomic, readonly) NSString *productVersion;
@property (nonatomic, readonly) NSString *regionCode;
@property (getter=isRunningInStoreDemoMode, nonatomic, readonly) bool runningInStoreDemoMode;
@property (nonatomic, readonly) NSNumber *screenHeight;
@property (nonatomic, readonly) NSNumber *screenScale;
@property (nonatomic, readonly) NSNumber *screenWidth;
@property (getter=isSecureElementAvailable, nonatomic, readonly) bool secureElementAvailable;
@property (nonatomic, readonly) NSString *secureElementID;
@property (nonatomic, readonly) NSString *serialNumber;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *thinnedAppVariantId;
@property (nonatomic, readonly) NSString *uniqueDeviceId;
@property (nonatomic, readonly) AMSPromise *voicePreferredPACToken;
@property (nonatomic, readonly) AMSPhoneNumberContextInfo *voicePreferredPhoneNumberContextInfo;

- (long long)biometricState;
- (id)buildVersion;
- (id)carrierNames;
- (id)carrierNamesPromise;
- (id)compatibleProductType;
- (id)deviceGUID;
- (bool)deviceIsAppleTV;
- (bool)deviceIsAppleTVSimulator;
- (bool)deviceIsAppleWatch;
- (bool)deviceIsAppleWatchSimulator;
- (bool)deviceIsAudioAccessory;
- (bool)deviceIsBundle;
- (bool)deviceIsMac;
- (bool)deviceIsPasscodeProtected;
- (bool)deviceIsRealityDevice;
- (bool)deviceIsRealityDeviceSimulator;
- (bool)deviceIsiPad;
- (bool)deviceIsiPadSimulator;
- (bool)deviceIsiPhone;
- (bool)deviceIsiPhoneSimulator;
- (bool)deviceIsiPod;
- (bool)deviceIsiPodSimulator;
- (id)deviceName;
- (id)hardwarePlatform;
- (bool)isRunningInStoreDemoMode;
- (bool)isSecureElementAvailable;
- (id)localIPAddress;
- (id)modelPartNumber;
- (id)name;
- (id)operatingSystem;
- (id)phoneNumber;
- (id)productType;
- (id)productVersion;
- (id)regionCode;
- (id)screenHeight;
- (id)screenScale;
- (id)screenWidth;
- (id)secureElementID;
- (id)serialNumber;
- (void)setBiometricState:(long long)arg1;
- (id)thinnedAppVariantId;
- (id)uniqueDeviceId;
- (id)voicePreferredPACToken;
- (id)voicePreferredPhoneNumberContextInfo;

@end
