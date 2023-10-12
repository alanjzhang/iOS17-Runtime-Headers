/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSDevice : NSObject <AMSBagConsumer>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)MLBSerialNumber;
+ (id)ROMAddress;
+ (id)_dataForNVRAMKey:(id)arg1;
+ (id)_mgStringForCFKey:(struct __CFString { }*)arg1;
+ (id)_modelNumber;
+ (id)_regionInfo;
+ (id)_simulatorModelIdentifier;
+ (id)_systemVersionDictionary;
+ (id)_voicePreferredPhoneNumberContext;
+ (long long)biometricState;
+ (unsigned long long)buildVariant;
+ (id)buildVersion;
+ (id)carrierNames;
+ (id)carrierNamesPromise;
+ (id)compatibleProductType;
+ (id)deviceGUID;
+ (bool)deviceIsAppleTV;
+ (bool)deviceIsAppleTVSimulator;
+ (bool)deviceIsAppleWatch;
+ (bool)deviceIsAppleWatchSimulator;
+ (bool)deviceIsAudioAccessory;
+ (bool)deviceIsBundle;
+ (bool)deviceIsInternalBuild;
+ (bool)deviceIsMac;
+ (bool)deviceIsPasscodeProtected;
+ (bool)deviceIsRealityDevice;
+ (bool)deviceIsRealityDeviceSimulator;
+ (bool)deviceIsSeedBuild;
+ (bool)deviceIsiPad;
+ (bool)deviceIsiPadSimulator;
+ (bool)deviceIsiPhone;
+ (bool)deviceIsiPhoneSimulator;
+ (bool)deviceIsiPod;
+ (bool)deviceIsiPodSimulator;
+ (id)deviceName;
+ (id)hardwarePlatform;
+ (bool)isRunningInStoreDemoMode;
+ (bool)isSecureElementAvailable;
+ (bool)isWalletBiometricsEnabled;
+ (id)localIPAddress;
+ (id)macAddress;
+ (id)macAddressData;
+ (id)modelPartNumber;
+ (id)name;
+ (id)operatingSystem;
+ (id)phoneNumber;
+ (id)productType;
+ (id)productVersion;
+ (id)regionCode;
+ (id)screenHeight;
+ (id)screenScale;
+ (id)screenWidth;
+ (id)secureElementID;
+ (id)serialNumber;
+ (void)setBiometricState:(long long)arg1;
+ (id)thinnedAppVariantId;
+ (id)uniqueDeviceId;
+ (id)voicePreferredPACToken;
+ (id)voicePreferredPhoneNumberContextInfo;

// AMSDevice (Language)

+ (id)language;
+ (void)startListeningForDeviceLanguageChangeWithBagContract:(id)arg1;
+ (void)stopListeningForDeviceLanguageChange;

// AMSDevice (Offers)

+ (id)_followUpItemWithIdentifier:(id)arg1 account:(id)arg2 priority:(long long)arg3 bag:(id)arg4;
+ (id)_notificationIdFromFollowUpId:(id)arg1 account:(id)arg2;
+ (void)_performAuth;
+ (void)_removeDeviceOfferRegistrationItem:(id)arg1 fromDeviceOfferStore:(id)arg2;
+ (void)_setDeviceEligibilityKeepingExistingDeviceOffers:(id)arg1 offersStore:(id)arg2;
+ (bool)_setRawDeviceOffers:(id)arg1 offersStore:(id)arg2;
+ (bool)_shouldPostOffersUpdatedNotification:(id)arg1 oldOffers:(id)arg2;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)cachedRegistrationGroups;
+ (void)clearRegistrationDenyList;
+ (id)createBagForSubProfile;
+ (id)deviceOffers;
+ (bool)deviceOffersContainType:(unsigned long long)arg1;
+ (id)deviceOffersForType:(unsigned long long)arg1;
+ (bool)expressedIntent;
+ (bool)isEligibleForOffers;
+ (bool)isGift;
+ (bool)postAllDeviceOfferFollowUpsForAccount:(id)arg1 priority:(long long)arg2 bag:(id)arg3 logKey:(id)arg4;
+ (bool)postDeviceOfferFollowUpWithIdentifier:(id)arg1 account:(id)arg2 priority:(long long)arg3 bag:(id)arg4 logKey:(id)arg5;
+ (void)registerCompanionWithSerialNumber:(id)arg1 bag:(id)arg2;
+ (id)registrationDenyList;
+ (void)removeDeviceOfferRegistrationItem:(id)arg1;
+ (void)removeDeviceOfferWithIdentifier:(id)arg1 account:(id)arg2 bag:(id)arg3 logKey:(id)arg4;
+ (void)saveDeviceOfferEligibility:(id)arg1;
+ (void)saveDeviceOffers:(id)arg1;
+ (bool)saveDeviceOffersForAccount:(id)arg1 response:(id)arg2 logKey:(id)arg3;
+ (void)setDeviceOffersCheckEncodingForRequestParameters:(id)arg1;
+ (bool)shouldPresentSetupOffersForAccount:(id)arg1;
+ (bool)shouldPresentSetupOffersForAccount:(id)arg1 issues:(long long*)arg2;
+ (bool)tearDownAllDeviceOfferFollowUpsForAccount:(id)arg1 logKey:(id)arg2;
+ (bool)tearDownDeviceOfferFollowUpWithIdentifier:(id)arg1 account:(id)arg2 logKey:(id)arg3;

// AMSDevice (Offers_Deprecated)

+ (id)bagKeySet;
+ (bool)postAllDeviceOfferFollowUpsForAccount:(id)arg1 priority:(long long)arg2 bagContract:(id)arg3 logKey:(id)arg4;
+ (bool)postDeviceOfferFollowUpWithIdentifier:(id)arg1 account:(id)arg2 priority:(long long)arg3 bagContract:(id)arg4 logKey:(id)arg5;
+ (void)registerCompanionWithSerialNumber:(id)arg1;
+ (void)removeDeviceOfferWithIdentifier:(id)arg1 account:(id)arg2 bagContract:(id)arg3 logKey:(id)arg4;

@end
