/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

@interface WFManagedConfigurationProfile : NSObject {
    NSMutableDictionary * _accountIdentifiersByDataClass;
    ACAccountStore * _accountStore;
    NSMutableDictionary * _accounts;
    NSSet * _managedAppBundleIDs;
    NSObject<OS_dispatch_queue> * _operatingQueue;
    ACAccount * _primaryAppleAccount;
    MCProfileConnection * _profileConnection;
}

@property (nonatomic, readonly) NSMutableDictionary *accountIdentifiersByDataClass;
@property (nonatomic, readonly) ACAccountStore *accountStore;
@property (nonatomic, readonly) NSMutableDictionary *accounts;
@property (readonly) bool isBluetoothModificationAllowed;
@property (readonly) bool isOpenInRestrictionInEffect;
@property (readonly) bool isScreenShotAllowed;
@property (readonly) bool isWallpaperModificationAllowed;
@property (readonly) bool isWiFiPowerModificationAllowed;
@property (nonatomic, readonly, copy) NSSet *managedAppBundleIDs;
@property (readonly) bool mayOpenFromManagedToUnmanaged;
@property (readonly) bool mayOpenFromUnmanagedToManaged;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *operatingQueue;
@property (nonatomic, readonly) ACAccount *primaryAppleAccount;
@property (nonatomic, readonly, copy) MCProfileConnection *profileConnection;

+ (id)defaultProfile;

- (void).cxx_destruct;
- (id)accountIdentifiersByDataClass;
- (id)accountStore;
- (id)accounts;
- (void)handleAccountStoreDidChangeNotification:(id)arg1;
- (void)handleManagedAppDidChangeNotification:(id)arg1;
- (id)init;
- (id)initWithProfileConnection:(id)arg1 accountStore:(id)arg2;
- (id)managedAppBundleIDs;
- (id)operatingQueue;
- (id)primaryAppleAccount;
- (id)profileConnection;
- (void)removeCachedChildrenAccountForAccount:(id)arg1;

// WFManagedConfigurationProfile (Account)

- (id)accountIdentifiersEnabledForDataclass:(id)arg1;
- (id)accountWithIdentifier:(id)arg1;

// WFManagedConfigurationProfile (ManagedOpenIn)

- (id)allowedOpenInAppBundleIDsAfterApplyingFilterToAppBundleIDs:(id)arg1 originatingAppBundleID:(id)arg2 originatingAccountIsManaged:(bool)arg3;
- (bool)isAccountBasedSourceApp:(id)arg1;
- (bool)isAccountManaged:(id)arg1;
- (bool)isAppManaged:(id)arg1;
- (bool)isOpenInRestrictionInEffect;
- (unsigned long long)managedLevelForContentOfURL:(id)arg1;
- (unsigned long long)managedLevelForContentOfURLs:(id)arg1;
- (bool)mayOpenFromManagedToUnmanaged;
- (bool)mayOpenFromUnmanagedToManaged;

// WFManagedConfigurationProfile (Settings)

- (bool)isBluetoothModificationAllowed;
- (bool)isScreenShotAllowed;
- (bool)isWallpaperModificationAllowed;
- (bool)isWiFiPowerModificationAllowed;

@end