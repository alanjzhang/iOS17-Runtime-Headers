/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKSubcredentialProvisioningRegisteringCredentialOperation : PKSubcredentialProvisioningSessionOperation {
    PKSubcredentialProvisioningConfiguration * _configuration;
    PKAppletSubcredential * _subcredential;
}

- (void).cxx_destruct;
- (bool)canBeRestarted;
- (bool)credentialShouldHaveAttestation;
- (id)initWithConfiguration:(id)arg1 context:(id)arg2 delegate:(id)arg3;
- (void)performOperation;
- (void)performOperationForFriendConfiguration;
- (void)performOperationWithSession:(id)arg1;
- (void)session:(id)arg1 didChangeState:(unsigned long long)arg2;

@end
