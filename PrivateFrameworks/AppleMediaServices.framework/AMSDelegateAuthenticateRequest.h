/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSDelegateAuthenticateRequest : NSObject <NSSecureCoding> {
    NSString * _challenge;
    NSString * _userAgent;
}

@property (nonatomic, copy) NSString *challenge;
@property (nonatomic, copy) NSString *userAgent;

+ (id)preferredUserAgent;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)challenge;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithChallenge:(id)arg1 userAgent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)setChallenge:(id)arg1;
- (void)setUserAgent:(id)arg1;
- (id)userAgent;

@end
