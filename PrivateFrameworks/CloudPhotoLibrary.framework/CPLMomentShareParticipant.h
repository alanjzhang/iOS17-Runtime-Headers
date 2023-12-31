/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLMomentShareParticipant : NSObject <NSCopying, NSSecureCoding> {
    NSString * _email;
    bool  _hasiCloudAccount;
    bool  _isCurrentUser;
    NSPersonNameComponents * _nameComponents;
    NSString * _phoneNumber;
    short  _status;
    short  _type;
    NSString * _userIdentifier;
}

@property (nonatomic, copy) NSString *email;
@property (nonatomic) bool hasiCloudAccount;
@property (nonatomic) bool isCurrentUser;
@property (nonatomic, copy) NSPersonNameComponents *nameComponents;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic) short status;
@property (nonatomic) short type;
@property (nonatomic, copy) NSString *userIdentifier;

+ (id)momentShareParticipantsFromParticipants:(id)arg1;
+ (id)shareParticipantsFromMomentShareParticipants:(id)arg1;

- (void).cxx_destruct;
- (id)asShareParticipant;
- (id)description;
- (id)email;
- (unsigned long long)hash;
- (bool)hasiCloudAccount;
- (id)initWithShareParticipant:(id)arg1;
- (bool)isCurrentUser;
- (bool)isEqual:(id)arg1;
- (id)nameComponents;
- (id)phoneNumber;
- (void)setEmail:(id)arg1;
- (void)setHasiCloudAccount:(bool)arg1;
- (void)setIsCurrentUser:(bool)arg1;
- (void)setNameComponents:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setStatus:(short)arg1;
- (void)setType:(short)arg1;
- (void)setUserIdentifier:(id)arg1;
- (short)status;
- (short)type;
- (id)userIdentifier;

// CPLMomentShareParticipant (CPLNSCoding)

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
