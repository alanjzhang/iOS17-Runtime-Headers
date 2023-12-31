/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentRegisterCredentialResponse : PKPaymentWebServiceResponse {
    NSData * _credentialAttestation;
    NSURL * _passURL;
    PKSubcredentialEncryptedContainer * _vehicleMobilizationEncryptedContainer;
}

@property (nonatomic, readonly) NSData *credentialAttestation;
@property (nonatomic, readonly) NSURL *passURL;
@property (nonatomic, readonly) PKSubcredentialEncryptedContainer *vehicleMobilizationEncryptedContainer;

- (void).cxx_destruct;
- (id)credentialAttestation;
- (id)initWithData:(id)arg1;
- (id)passURL;
- (id)vehicleMobilizationEncryptedContainer;

@end
