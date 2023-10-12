/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDownloadPolicyUserDefaultState : NSObject <NSCopying, NSSecureCoding, SSXPCCoding> {
    NSString * _domain;
    NSNumber * _fallbackNumberValue;
    NSString * _key;
    bool  _shouldInvertBoolValue;
}

@property (nonatomic, readonly) bool currentBoolValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *domain;
@property (nonatomic, copy) NSNumber *fallbackNumberValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *key;
@property (nonatomic) bool shouldInvertBoolValue;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (bool)currentBoolValue;
- (id)domain;
- (void)encodeWithCoder:(id)arg1;
- (id)fallbackNumberValue;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)setDomain:(id)arg1;
- (void)setFallbackNumberValue:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setShouldInvertBoolValue:(bool)arg1;
- (bool)shouldInvertBoolValue;

@end
