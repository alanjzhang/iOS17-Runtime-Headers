/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPWalrusSecurityProxyImpl : NSObject <CDPWalrusSecurityProxy> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _accountSettingsLock;
    CDPDSecureBackupController * _backupController;
    OTClique * _clique;
    CDPContext * _context;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)initWithContext:(id)arg1;
- (void)setWebAccessStatusEnabled:(bool)arg1 completion:(id /* block */)arg2;
- (void)webAccessStatusWithCompletion:(id /* block */)arg1;

@end
