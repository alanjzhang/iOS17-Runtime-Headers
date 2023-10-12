/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPayLaterBankPaymentSource : PKPayLaterPaymentSource <NSSecureCoding> {
    PKAccountPaymentFundingSource * _accountPaymentFundingSource;
}

@property (nonatomic, readonly) PKAccountPaymentFundingSource *accountPaymentFundingSource;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountPaymentFundingSource;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithAccountPaymentFundingSource:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (unsigned long long)type;

@end
