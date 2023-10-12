/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentRewrapResponseBase : PKPaymentWebServiceResponse {
    PKAccount * _account;
    PKPayLaterFinancingPlan * _financingPlan;
    NSString * _primaryAccountNumberSuffix;
    NSData * _rewrappedPaymentData;
    NSString * _transactionIdentifier;
}

@property (nonatomic, readonly) PKAccount *account;
@property (nonatomic, readonly) PKPayLaterFinancingPlan *financingPlan;
@property (nonatomic, readonly, copy) NSString *primaryAccountNumberSuffix;
@property (nonatomic, copy) NSData *rewrappedPaymentData;
@property (nonatomic, readonly, copy) NSString *transactionIdentifier;

- (void).cxx_destruct;
- (id)account;
- (id)financingPlan;
- (id)initWithData:(id)arg1;
- (id)primaryAccountNumberSuffix;
- (id)rewrappedPaymentData;
- (void)setRewrappedPaymentData:(id)arg1;
- (id)transactionIdentifier;

@end