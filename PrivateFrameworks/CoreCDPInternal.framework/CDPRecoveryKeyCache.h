/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

@interface CDPRecoveryKeyCache : NSObject {
    AAFKeychainManager * _keychainManager;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)cacheRecoveryKey:(id)arg1 forAltDSID:(id)arg2 error:(id*)arg3;
- (void)deleteCache;
- (id)fetchRecoveryKeyFromCacheForAltDSID:(id)arg1;
- (id)init;

@end