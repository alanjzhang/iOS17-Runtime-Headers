/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TISupplementalPersonItem : TISupplementalItem {
    NSString * _familyName;
    NSString * _givenName;
    NSString * _middleName;
    NSString * _nickname;
    NSString * _organizationName;
    NSString * _phoneticFamilyName;
    NSString * _phoneticGivenName;
    NSString * _phoneticMiddleName;
    NSString * _phoneticOrganizationName;
    NSString * _previousFamilyName;
}

@property (nonatomic, copy) NSString *familyName;
@property (nonatomic, copy) NSString *givenName;
@property (nonatomic, copy) NSString *middleName;
@property (nonatomic, copy) NSString *nickname;
@property (nonatomic, copy) NSString *organizationName;
@property (nonatomic, readonly) NSPersonNameComponents *personNameComponents;
@property (nonatomic, copy) NSString *phoneticFamilyName;
@property (nonatomic, copy) NSString *phoneticGivenName;
@property (nonatomic, copy) NSString *phoneticMiddleName;
@property (nonatomic, copy) NSString *phoneticOrganizationName;
@property (nonatomic, copy) NSString *previousFamilyName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)familyName;
- (id)givenName;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1;
- (id)initWithPersonNameComponents:(id)arg1;
- (id)middleName;
- (id)nickname;
- (id)organizationName;
- (id)personNameComponents;
- (id)phoneticFamilyName;
- (id)phoneticGivenName;
- (id)phoneticMiddleName;
- (id)phoneticOrganizationName;
- (id)previousFamilyName;
- (void)setFamilyName:(id)arg1;
- (void)setGivenName:(id)arg1;
- (void)setMiddleName:(id)arg1;
- (void)setNickname:(id)arg1;
- (void)setOrganizationName:(id)arg1;
- (void)setPhoneticFamilyName:(id)arg1;
- (void)setPhoneticGivenName:(id)arg1;
- (void)setPhoneticMiddleName:(id)arg1;
- (void)setPhoneticOrganizationName:(id)arg1;
- (void)setPreviousFamilyName:(id)arg1;

@end