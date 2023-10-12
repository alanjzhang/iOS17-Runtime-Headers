/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICAgeVerifier : NSObject <NSCopying> {
    long long  _status;
    NSDate * _verificationExpirationDate;
}

@property (getter=isExplicitContentAllowed, nonatomic, readonly) bool explicitContentAllowed;
@property (nonatomic) long long status;
@property (nonatomic, readonly) NSDate *verificationExpirationDate;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithExpirationDate:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isExplicitContentAllowed;
- (void)runAgeVerification;
- (void)setStatus:(long long)arg1;
- (long long)status;
- (id)verificationExpirationDate;

@end
