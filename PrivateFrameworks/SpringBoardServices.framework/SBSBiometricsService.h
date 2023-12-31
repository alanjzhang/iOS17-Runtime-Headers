/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSBiometricsService : SBSAbstractSystemService

- (void)_acquireBiometricAssertionOfType:(unsigned char)arg1 assertionName:(id)arg2 reason:(id)arg3 completion:(id /* block */)arg4;
- (void)acquireUnlockSuppressionAssertionForReason:(id)arg1 completion:(id /* block */)arg2;
- (void)acquireWalletPreArmSuppressionAssertionForReason:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchUnlockCredentialSetWithCompletion:(id /* block */)arg1;

@end
