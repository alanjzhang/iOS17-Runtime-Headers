/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAKeychain : NSObject

+ (id)sharedKeychain;

- (struct __CFDictionary { }*)_DACopyMutableAttributesForAccountWithPersistentUUID:(id)arg1 accessibility:(int)arg2;
- (struct __CFDictionary { }*)_DACopyMutableQueryForAccountWithPersistentUUID:(id)arg1;
- (int)_daKeychainAccessibilityForSecAccessibility:(void*)arg1;
- (void*)_secAccessibilityForDAKeychainAccessibility:(int)arg1;
- (bool)canAccessCredentialsWithAccessibility:(int)arg1;
- (void)migratePasswordForAccount:(id)arg1;
- (id)passwordForAccountWithPersistentUUID:(id)arg1 expectedAccessibility:(int)arg2 shouldSetAccessibility:(bool)arg3 passwordExpected:(bool)arg4;
- (bool)removePasswordForAccount:(id)arg1 withPersistentUUID:(id)arg2;
- (void)removePersistentCredentials;
- (bool)setPassword:(id)arg1 forAccount:(id)arg2 withPersistentUUID:(id)arg3 withAccessibility:(int)arg4;

// DAKeychain (OldAndBusted)

- (id)guessPasswordForURL:(id)arg1;
- (id)loadKeychainInformationsForURL:(id)arg1;
- (void)removeKeychainInformationsForURL:(id)arg1;
- (bool)saveKeychainInformationsForURL:(id)arg1 andPassword:(id)arg2 withAccessibility:(int)arg3;

@end