/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSAccount : NSObject <NSCopying, SSXPCCoding> {
    ACAccount * _backingAccount;
    NSObject<OS_dispatch_queue> * _backingAccountAccessQueue;
    NSData * _bioToken;
    bool  _didFallbackToPassword;
}

@property (copy) NSString *ITunesPassSerialNumber;
@property long long accountKind;
@property (copy) NSString *accountName;
@property long long accountScope;
@property long long accountSource;
@property (getter=isActive) bool active;
@property (getter=isActiveLockerAccount) bool activeLockerAccount;
@property (copy) NSString *altDSID;
@property (getter=isAuthenticated) bool authenticated;
@property (nonatomic, copy) NSArray *automaticDownloadKinds;
@property long long availableServiceTypes;
@property (nonatomic, readonly) ACAccount *backingAccount;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *backingAccountAccessQueue;
@property (copy) NSString *creditsString;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDemoAccount, nonatomic, readonly) bool demoAccount;
@property (nonatomic, copy) NSString *demoAccountRawPassword;
@property (readonly, copy) NSString *description;
@property bool didFallbackToPassword;
@property (getter=isDirty, nonatomic, readonly) bool dirty;
@property long long enabledServiceTypes;
@property (copy) NSString *firstName;
@property long long freeDownloadsPasswordSetting;
@property (nonatomic, readonly) bool hasBrokenDSID;
@property (readonly) unsigned long long hash;
@property (copy) NSString *lastName;
@property (getter=isLocalAccount, nonatomic, readonly) bool localAccount;
@property (readonly) NSString *localizedName;
@property (getter=isManagedAppleID) bool managedAppleID;
@property (getter=isNewCustomer) bool newCustomer;
@property long long paidPurchasesPasswordSetting;
@property (nonatomic, copy) NSString *passwordEquivalentToken;
@property (copy) NSDictionary *privacyAcknowledgement;
@property (nonatomic, copy) NSString *rawPassword;
@property (nonatomic, copy) NSString *secureToken;
@property (getter=isSocialEnabled) bool socialEnabled;
@property (copy) NSString *storeFrontIdentifier;
@property (readonly) Class superclass;
@property (retain) NSNumber *uniqueIdentifier;

+ (id)DSIDFromAuthenticationResponseDictionary:(id)arg1;
+ (id)_countryCodeFromStorefrontIdentifier:(id)arg1;
+ (id)_displayedServerPromptKeyWithIdentifier:(id)arg1;
+ (id)_lastAttemptForServerPromptKeyWithIdentifier:(id)arg1;
+ (id)_valueForFirstAvailableKeyPath:(id)arg1 inDictionary:(id)arg2;
+ (long long)accountKindFromAuthenticationResponseDictionary:(id)arg1;
+ (id)accountNameFromAuthenticationResponseDictionary:(id)arg1;
+ (id)altDSIDFromAuthenticationResponseDictionary:(id)arg1;
+ (bool)backingAccountIsDemoAccount:(id)arg1;
+ (bool)backingAccountIsLocalAccount:(id)arg1;
+ (id)creditsStringFromAuthenticationResponseDictionary:(id)arg1;
+ (id)firstNameFromAuthenticationResponseDictionary:(id)arg1;
+ (bool)isManagedAppleIDFromAuthenticationResponseDictionary:(id)arg1;
+ (bool)isNewCustomerFromAuthenticationResponseDictionary:(id)arg1;
+ (id)lastNameFromAuthenticationResponseDictionary:(id)arg1;
+ (id)secureTokenForIdentifier:(id)arg1;
+ (id)serverValueForAccountPasswordSettingValue:(long long)arg1;
+ (id)storeFrontIdentifierFromURLResponse:(id)arg1;

- (void).cxx_destruct;
- (id)ITunesPassSerialNumber;
- (void)_addAccountPropertyBitmask:(long long)arg1 forKey:(id)arg2;
- (id)_backingAccount;
- (void)_removeAccountPropertyBitmask:(long long)arg1 forKey:(id)arg2;
- (void)_sendMessage:(id)arg1 withReply:(id /* block */)arg2;
- (void)_setAccountProperty:(id)arg1 forKey:(id)arg2;
- (void)_setBackingAccount:(id)arg1;
- (void)acceptTermsAndConditions:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (long long)accountKind;
- (id)accountName;
- (id)accountPropertyForKey:(id)arg1;
- (long long)accountScope;
- (long long)accountSource;
- (void)addAvailableServiceTypes:(long long)arg1;
- (void)addEnabledServiceTypes:(long long)arg1;
- (id)altDSID;
- (id)automaticDownloadKinds;
- (long long)availableServiceTypes;
- (id)backingAccount;
- (id)backingAccountAccessQueue;
- (id)copyLockdownRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (id)creditsString;
- (id)demoAccountRawPassword;
- (id)description;
- (bool)didFallbackToPassword;
- (bool)displayedServerPromptWithIdentifier:(id)arg1;
- (id)eligibilityForService:(long long)arg1;
- (long long)enabledServiceTypes;
- (id)firstName;
- (long long)freeDownloadsPasswordSetting;
- (void)getDownloadKindsEligibleForContentRestoreWithBlock:(id /* block */)arg1;
- (void)getEligibilityForService:(long long)arg1 completionBlock:(id /* block */)arg2;
- (void)getITunesMatchStatusWithCompletionBlock:(id /* block */)arg1;
- (void)getKeybagSyncDataWithType:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)getPurchasedItemsForItems:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)getTermsAndConditionsWithBlock:(id /* block */)arg1;
- (bool)hasBrokenDSID;
- (unsigned long long)hash;
- (id)hashedDescription;
- (id)init;
- (id)initWithBackingAccount:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isActive;
- (bool)isActiveLockerAccount;
- (bool)isAuthenticated;
- (bool)isDemoAccount;
- (bool)isDirty;
- (bool)isDuplicate:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLocalAccount;
- (bool)isManagedAppleID;
- (bool)isNewCustomer;
- (bool)isSocialEnabled;
- (id)lastAttemptDateForServerPromptWithIdentifier:(id)arg1;
- (id)lastName;
- (id)localizedName;
- (bool)mergeValuesFromAccount:(id)arg1;
- (long long)paidPurchasesPasswordSetting;
- (id)passwordEquivalentToken;
- (id)popBiometricToken;
- (id)privacyAcknowledgement;
- (id)rawPassword;
- (void)removeAvailableServiceTypes:(long long)arg1;
- (void)removeEnabledServiceTypes:(long long)arg1;
- (void)resetTransientData;
- (id)secureToken;
- (void)setAccountKind:(long long)arg1;
- (void)setAccountName:(id)arg1;
- (void)setAccountScope:(long long)arg1;
- (void)setAccountSource:(long long)arg1;
- (void)setActive:(bool)arg1;
- (void)setActiveLockerAccount:(bool)arg1;
- (void)setAltDSID:(id)arg1;
- (void)setAuthenticated:(bool)arg1;
- (void)setAutomaticDownloadKinds:(id)arg1;
- (void)setAvailableServiceTypes:(long long)arg1;
- (void)setBackingAccountAccessQueue:(id)arg1;
- (void)setBiometricToken:(id)arg1;
- (void)setCreditsString:(id)arg1;
- (void)setDemoAccountRawPassword:(id)arg1;
- (void)setDidFallbackToPassword:(bool)arg1;
- (void)setDisplayedServerPrompt:(bool)arg1 withIdentifier:(id)arg2;
- (void)setEligibility:(id)arg1 forServiceType:(long long)arg2;
- (void)setEnabledServiceTypes:(long long)arg1;
- (void)setFirstName:(id)arg1;
- (void)setFreeDownloadsPasswordSetting:(long long)arg1;
- (void)setITunesPassSerialNumber:(id)arg1;
- (void)setLastAttemptDate:(id)arg1 forServerPromptWithIdentifier:(id)arg2;
- (void)setLastName:(id)arg1;
- (void)setLockdownDictionary:(id)arg1;
- (void)setManagedAppleID:(bool)arg1;
- (void)setNewCustomer:(bool)arg1;
- (void)setPaidPurchasesPasswordSetting:(long long)arg1;
- (void)setPasswordEquivalentToken:(id)arg1;
- (void)setPrivacyAcknowledgement:(id)arg1;
- (void)setRawPassword:(id)arg1;
- (void)setSecureToken:(id)arg1;
- (void)setSocialEnabled:(bool)arg1;
- (void)setStoreFrontIdentifier:(id)arg1;
- (void)setStoreFrontIdentifier:(id)arg1 forRequest:(id)arg2 response:(id)arg3;
- (void)setUniqueIdentifier:(id)arg1;
- (id)storeFrontIdentifier;
- (id)uniqueIdentifier;
- (void)updateAccountPasswordSettings:(id /* block */)arg1;
- (void)updateAccountPasswordSettingsWithRequestProperties:(id)arg1 completionBlock:(id /* block */)arg2;

@end
