/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/LocalAuthentication.framework/LocalAuthentication
 */

@interface LAKeyStoreBackendQueryBuilder : NSObject

- (id)createQueryForGenericPasswordWithIdentifier:(id)arg1 domain:(id)arg2 data:(id)arg3 protectedBy:(id)arg4;
- (id)createQueryForKeyWithIdentifier:(id)arg1 domain:(id)arg2 acl:(id)arg3;
- (id)fetchQueryForGenericPasswordWithIdentifier:(id)arg1 domain:(id)arg2;
- (id)fetchQueryForGenericPasswordsWithDomain:(id)arg1;
- (id)fetchQueryForKeyWithIdentifier:(id)arg1 domain:(id)arg2;
- (id)fetchQueryForKeyWithPublicKeyHash:(id)arg1;
- (id)fetchQueryForKeysWithDomain:(id)arg1;
- (id)removeQueryForGenericPasswords;
- (id)removeQueryForGenericPasswordsWithDomain:(id)arg1;
- (id)removeQueryForKeys;
- (id)removeQueryForKeysWithDomain:(id)arg1;

@end
