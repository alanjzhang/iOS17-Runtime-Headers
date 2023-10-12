/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAccountWebServiceAccountRequest : PKAccountWebServiceRequest {
    NSString * _accountIdentifier;
    NSURL * _baseURL;
    bool  _extended;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, retain) NSURL *baseURL;
@property (nonatomic) bool extended;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)accountIdentifier;
- (id)baseURL;
- (bool)extended;
- (void)setAccountIdentifier:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setExtended:(bool)arg1;

@end
