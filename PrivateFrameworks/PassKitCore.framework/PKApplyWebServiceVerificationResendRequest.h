/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKApplyWebServiceVerificationResendRequest : PKApplyWebServiceRequest {
    NSString * _applicationIdentifier;
    NSURL * _baseURL;
    unsigned long long  _verificationType;
}

@property (nonatomic, copy) NSString *applicationIdentifier;
@property (nonatomic, retain) NSURL *baseURL;
@property (nonatomic) unsigned long long verificationType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)applicationIdentifier;
- (id)baseURL;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setVerificationType:(unsigned long long)arg1;
- (unsigned long long)verificationType;

@end