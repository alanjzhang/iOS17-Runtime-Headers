/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SettingsFoundation.framework/SettingsFoundation
 */

@interface SFRestrictionsPasscodeController : NSObject

+ (id)_generateSalt;
+ (id)_keychainPasswordForRestrictions;
+ (void)_migrateRestrictionsPasscodeIfNeeded;
+ (void)_removeKeychainPasswordForRestrictions;
+ (void)_setKeychainPasswordForRestrictions:(id)arg1;
+ (bool)hasHashAndSaltLegacyPassword;
+ (id)hashForHashAndSaltLegacyRestrictions;
+ (bool)legacyRestrictionsInEffect;
+ (void)migrateRestrictionsPasscode;
+ (id)newHashDataForPassword:(id)arg1 andSalt:(id)arg2;
+ (id)pinFromHashAndSaltLegacyPassword;
+ (void)removePasswordForHashAndSaltLegacyRestrictions;
+ (id)saltForHashAndSaltLegacyRestrictions;
+ (void)setPIN:(id)arg1;
+ (bool)settingEnabled;
+ (bool)validatePIN:(id)arg1;

@end
