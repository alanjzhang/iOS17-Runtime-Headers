/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAutomaticReloadPaymentSummaryItem : PKPaymentSummaryItem <NSCopying, NSSecureCoding> {
    NSDecimalNumber * _thresholdAmount;
}

@property (nonatomic, retain) NSDecimalNumber *thresholdAmount;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAutomaticReloadPaymentSummaryItem:(id)arg1;
- (void)setThresholdAmount:(id)arg1;
- (id)thresholdAmount;

@end
