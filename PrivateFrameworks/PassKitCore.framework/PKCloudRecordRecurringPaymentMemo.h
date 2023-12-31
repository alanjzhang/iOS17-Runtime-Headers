/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKCloudRecordRecurringPaymentMemo : PKCloudRecordObject {
    PKPeerPaymentRecurringPayment * _recurringPayment;
}

@property (nonatomic, retain) PKPeerPaymentRecurringPayment *recurringPayment;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIncludeItem:(bool)arg1;
- (void)applyCloudRecordObject:(id)arg1;
- (long long)compare:(id)arg1;
- (id)description;
- (id)descriptionWithItem:(bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)item;
- (id)recurringPayment;
- (void)setRecurringPayment:(id)arg1;

@end
