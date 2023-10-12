/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAccountPaymentReminder : NSObject <NSSecureCoding, PKRecordObject> {
    NSString * _currencyCode;
    NSDecimalNumber * _minimumDue;
    NSDate * _paymentDueDate;
}

@property (nonatomic, copy) NSString *currencyCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDecimalNumber *minimumDue;
@property (nonatomic, copy) NSDate *paymentDueDate;
@property (readonly) Class superclass;

+ (id)recordNamePrefix;
+ (id)recordType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)currencyCode;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithRecord:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)minimumDue;
- (id)paymentDueDate;
- (void)setCurrencyCode:(id)arg1;
- (void)setMinimumDue:(id)arg1;
- (void)setPaymentDueDate:(id)arg1;

@end
