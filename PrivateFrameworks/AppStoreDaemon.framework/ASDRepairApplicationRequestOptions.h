/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDRepairApplicationRequestOptions : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _accountDSID;
    NSString * _bundleID;
    long long  _claimStyle;
    unsigned long long  _exitReason;
}

@property (nonatomic, readonly) NSNumber *accountDSID;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) long long claimStyle;
@property (nonatomic) unsigned long long exitReason;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountDSID;
- (id)bundleID;
- (long long)claimStyle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)exitReason;
- (id)initWithBundleID:(id)arg1;
- (id)initWithBundleID:(id)arg1 accountIdentifier:(id)arg2 claimStyle:(long long)arg3;
- (id)initWithCoder:(id)arg1;
- (void)setExitReason:(unsigned long long)arg1;

@end
