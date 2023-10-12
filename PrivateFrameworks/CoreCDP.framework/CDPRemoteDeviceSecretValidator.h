/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

@interface CDPRemoteDeviceSecretValidator : NSObject {
    CDPContext * _context;
    <CDPRemoteDeviceSecretValidatorProtocol> * _validator;
}

- (void).cxx_destruct;
- (void)_executeSyncOnMainThreadIfNeeded:(id /* block */)arg1;
- (void)approveFromAnotherDeviceWithCompletion:(id /* block */)arg1;
- (void)cancelApproveFromAnotherDevice;
- (void)cancelValidationWithError:(id)arg1;
- (id)initWithContext:(id)arg1 validator:(id)arg2;
- (void)resetAccountCDPState;
- (void)resetAccountCDPStateAndSetSecret:(id)arg1;
- (unsigned long long)supportedEscapeOfferMask;
- (void)supportedEscapeOfferMaskCompletion:(id /* block */)arg1;
- (void)validateCustodianRecoveryInfo:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)validateRecoveryKey:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)validateSecret:(id)arg1 devices:(id)arg2 type:(unsigned long long)arg3 withCompletion:(id /* block */)arg4;

@end
