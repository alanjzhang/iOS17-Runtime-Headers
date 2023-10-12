/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

@interface CDPAuthProviderProxy : NSObject <CDPAuthProviderInternal> {
    <CDPAuthProvider> * _authProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)proxyWithAuthProvider:(id)arg1;

- (void).cxx_destruct;
- (void)cdpContext:(id)arg1 performSilentRecoveryTokenRenewal:(id /* block */)arg2;
- (void)cdpContext:(id)arg1 verifyMasterKey:(id)arg2 completion:(id /* block */)arg3;

@end
