/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKApplyWebServiceAugmentedProductRequest : PKApplyWebServiceRequest {
    PKPaymentInstallmentConfiguration * _installmentConfiguration;
}

@property (nonatomic, retain) PKPaymentInstallmentConfiguration *installmentConfiguration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)installmentConfiguration;
- (void)setInstallmentConfiguration:(id)arg1;

@end
