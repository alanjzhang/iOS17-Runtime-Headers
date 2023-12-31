/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAInheritanceContactController : NSObject {
    CIImage * _accessKeyQRCodeImage;
    <AAInheritanceContactInfo> * _contactInfo;
    long long  _contactType;
    AAInheritanceController * _inheritanceController;
}

@property (nonatomic, readonly) NSString *accessKeyString;
@property (nonatomic, readonly) NSString *claimTokenString;

- (void).cxx_destruct;
- (id)_accessKeyQRCodeImage;
- (id)accessKeyQRCodeImageDataWithSize:(double)arg1;
- (id)accessKeyString;
- (id)claimTokenString;
- (id)initWithContactInfo:(id)arg1 contactType:(long long)arg2;
- (void)removeContactAsBenefactorWithCompletion:(id /* block */)arg1;
- (void)removeContactAsBeneficiaryWithCompletion:(id /* block */)arg1;
- (void)sendInvitationWithCompletion:(id /* block */)arg1;

@end
