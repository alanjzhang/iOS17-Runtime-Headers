/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

@interface DNDAppInfo : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    DNDApplicationIdentifier * _applicationIdentifier;
    NSURL * _cachedIconURL;
    NSString * _displayName;
    long long  _source;
    NSURL * _storeIconURL;
}

@property (nonatomic, readonly, copy) DNDApplicationIdentifier *applicationIdentifier;
@property (nonatomic, readonly, copy) NSURL *cachedIconURL;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly) long long source;
@property (nonatomic, readonly, copy) NSURL *storeIconURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithAppInfo:(id)arg1;
- (id)applicationIdentifier;
- (id)cachedIconURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSource:(long long)arg1 applicationIdentifier:(id)arg2 displayName:(id)arg3 storeIconURL:(id)arg4 cachedIconURL:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)source;
- (id)storeIconURL;

@end
