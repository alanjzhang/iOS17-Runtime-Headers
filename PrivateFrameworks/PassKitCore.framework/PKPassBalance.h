/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPassBalance : NSObject <NSSecureCoding> {
    NSString * _identifier;
    PKAutoReloadPaymentMethod * _paymentMethod;
}

@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) PKAutoReloadPaymentMethod *paymentMethod;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)paymentMethod;
- (void)setIdentifier:(id)arg1;
- (void)setPaymentMethod:(id)arg1;

@end
