/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKCreditAccountRates : NSObject <NSCopying, NSSecureCoding> {
    NSDecimalNumber * _aprForPurchases;
}

@property (nonatomic, copy) NSDecimalNumber *aprForPurchases;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)aprForPurchases;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedAPRForPurchasesPercentageString;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionaryRepresentation;
- (id)jsonString;
- (void)setAprForPurchases:(id)arg1;

@end
