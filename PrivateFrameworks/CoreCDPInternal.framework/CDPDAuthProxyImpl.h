/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDAuthProxyImpl : NSObject <CDPDAuthProviderInternal>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_authContextFromCDPContext:(id)arg1;
- (void)cdpContext:(id)arg1 persistMasterKeyVerifier:(id)arg2 completion:(id /* block */)arg3;
- (void)cdpContext:(id)arg1 verifyMasterKey:(id)arg2 completion:(id /* block */)arg3;
- (bool)isPrimaryAppleIDLoggedIn;

@end
