/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata
 */

@interface LNFullyQualifiedActionIdentifier : NSObject <NSCopying, NSSecureCoding> {
    NSString * _actionIdentifier;
    NSString * _bundleIdentifier;
}

@property (nonatomic, readonly, copy) NSString *actionIdentifier;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithActionIdentifier:(id)arg1 bundleIdentifier:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end