/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKBeneficiaryAliasSetupResult : NSObject <NSCopying, NSSecureCoding> {
    NSString * _beneficiaryAccountName;
    NSString * _beneficiaryAltDSID;
}

@property (nonatomic, copy) NSString *beneficiaryAccountName;
@property (nonatomic, copy) NSString *beneficiaryAltDSID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)beneficiaryAccountName;
- (id)beneficiaryAltDSID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBeneficiaryAccountName:(id)arg1;
- (void)setBeneficiaryAltDSID:(id)arg1;

@end