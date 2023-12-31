/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPayLaterAccountTermsDetails : NSObject <NSCopying, NSSecureCoding> {
    bool  _termsAcceptanceRequired;
    NSString * _termsIdentifier;
}

@property (nonatomic) bool termsAcceptanceRequired;
@property (nonatomic, copy) NSString *termsIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setTermsAcceptanceRequired:(bool)arg1;
- (void)setTermsIdentifier:(id)arg1;
- (bool)termsAcceptanceRequired;
- (id)termsIdentifier;

@end
