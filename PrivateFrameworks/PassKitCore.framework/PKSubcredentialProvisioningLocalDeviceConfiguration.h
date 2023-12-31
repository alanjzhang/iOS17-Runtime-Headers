/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKSubcredentialProvisioningLocalDeviceConfiguration : PKSubcredentialProvisioningConfiguration {
    PKCredentialRegistrationMetadata * _registrationMetadata;
    PKPaymentWebService * _webService;
}

@property (nonatomic, readonly) PKCredentialRegistrationMetadata *registrationMetadata;
@property (nonatomic, readonly) PKPaymentWebService *webService;

- (void).cxx_destruct;
- (id)initWithWebService:(id)arg1 registrationMetadata:(id)arg2 configurationType:(long long)arg3;
- (id)registrationMetadata;
- (id)webService;

@end
