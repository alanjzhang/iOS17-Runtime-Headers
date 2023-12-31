/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSEndpointTransparencyState : NSObject <NSCopying, NSSecureCoding> {
    NSData * _pushToken;
    long long  _verificationState;
}

@property (nonatomic, readonly) NSData *pushToken;
@property (nonatomic, readonly) long long verificationState;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPushToken:(id)arg1 verificationState:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEndpointTransparencyState:(id)arg1;
- (id)pushToken;
- (long long)verificationState;

@end
