/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKAuthorizationRevokeUpgradeContext : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleID;
    NSString * _teamID;
    NSString * _transactionID;
}

@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, copy) NSString *teamID;
@property (nonatomic, copy) NSString *transactionID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setTeamID:(id)arg1;
- (void)setTransactionID:(id)arg1;
- (id)teamID;
- (id)transactionID;

@end