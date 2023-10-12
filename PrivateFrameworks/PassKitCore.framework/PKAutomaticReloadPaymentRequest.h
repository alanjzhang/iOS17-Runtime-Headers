/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAutomaticReloadPaymentRequest : NSObject <NSCopying, NSSecureCoding> {
    PKAutomaticReloadPaymentSummaryItem * _automaticReloadBilling;
    NSString * _billingAgreement;
    NSURL * _managementURL;
    NSString * _paymentDescription;
    NSURL * _tokenNotificationURL;
}

@property (nonatomic, retain) PKAutomaticReloadPaymentSummaryItem *automaticReloadBilling;
@property (nonatomic, copy) NSString *billingAgreement;
@property (nonatomic, retain) NSURL *managementURL;
@property (nonatomic, copy) NSString *paymentDescription;
@property (nonatomic, retain) NSURL *tokenNotificationURL;

+ (bool)supportsSecureCoding;
+ (long long)version;

- (void).cxx_destruct;
- (id)automaticReloadBilling;
- (id)billingAgreement;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithPaymentDescription:(id)arg1 automaticReloadBilling:(id)arg2 managementURL:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAutomaticReloadPaymentRequest:(id)arg1;
- (id)managementURL;
- (id)paymentDescription;
- (void)sanitize;
- (void)setAutomaticReloadBilling:(id)arg1;
- (void)setBillingAgreement:(id)arg1;
- (void)setManagementURL:(id)arg1;
- (void)setPaymentDescription:(id)arg1;
- (void)setTokenNotificationURL:(id)arg1;
- (id)tokenNotificationURL;

// PKAutomaticReloadPaymentRequest (Protobuf)

+ (id)automaticReloadPaymentRequestWithProtobuf:(id)arg1;

- (id)protobuf;

@end
