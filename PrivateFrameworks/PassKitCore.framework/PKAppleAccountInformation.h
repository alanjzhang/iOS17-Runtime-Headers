/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAppleAccountInformation : NSObject <NSCopying, NSSecureCoding> {
    NSString * _aaAlternateDSID;
    NSString * _aaDSID;
    NSString * _aidaAlternateDSID;
    NSString * _aidaToken;
    NSString * _appleID;
    NSString * _authorizationHeader;
    NSString * _firstName;
    bool  _isSandboxAccount;
    NSString * _lastName;
    NSString * _primaryEmailAddress;
}

@property (nonatomic, copy) NSString *aaAlternateDSID;
@property (nonatomic, copy) NSString *aaDSID;
@property (nonatomic, copy) NSString *aidaAlternateDSID;
@property (nonatomic, copy) NSString *aidaToken;
@property (nonatomic, copy) NSString *appleID;
@property (nonatomic, copy) NSString *authorizationHeader;
@property (nonatomic, copy) NSString *firstName;
@property (nonatomic) bool isSandboxAccount;
@property (nonatomic, copy) NSString *lastName;
@property (nonatomic, copy) NSString *primaryEmailAddress;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)aaAlternateDSID;
- (id)aaDSID;
- (bool)aidaAccountAvailable;
- (id)aidaAlternateDSID;
- (id)aidaToken;
- (id)altDsidAppleAccountHash;
- (id)appleID;
- (id)authorizationHeader;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)firstName;
- (id)initWithCoder:(id)arg1;
- (bool)isSandboxAccount;
- (id)lastName;
- (id)primaryAppleAccountHash;
- (id)primaryEmailAddress;
- (void)setAaAlternateDSID:(id)arg1;
- (void)setAaDSID:(id)arg1;
- (void)setAidaAlternateDSID:(id)arg1;
- (void)setAidaToken:(id)arg1;
- (void)setAppleID:(id)arg1;
- (void)setAuthorizationHeader:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setIsSandboxAccount:(bool)arg1;
- (void)setLastName:(id)arg1;
- (void)setPrimaryEmailAddress:(id)arg1;

@end