/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNActivityAlert : NSObject <CNObjectValidation, NSCopying, NSSecureCoding> {
    bool  _ignoreMute;
    NSString * _sound;
    NSDictionary * _userInfo;
    NSString * _vibration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoreMute;
@property (nonatomic, copy) NSString *sound;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDictionary *userInfo;
@property (nonatomic, copy) NSString *vibration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (bool)ignoreMute;
- (id)initWithCoder:(id)arg1;
- (id)initWithSound:(id)arg1 vibration:(id)arg2 ignoreMute:(bool)arg3;
- (id)initWithSound:(id)arg1 vibration:(id)arg2 ignoreMute:(bool)arg3 userInfo:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isValid:(id*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setIgnoreMute:(bool)arg1;
- (void)setSound:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setVibration:(id)arg1;
- (id)sound;
- (id)userInfo;
- (id)vibration;

@end
