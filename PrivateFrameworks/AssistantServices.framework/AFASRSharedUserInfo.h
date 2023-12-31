/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFASRSharedUserInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _loggableSharedUserId;
    NSString * _sharedUserId;
}

@property (nonatomic, readonly, copy) NSString *loggableSharedUserId;
@property (nonatomic, readonly, copy) NSString *sharedUserId;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSharedUserId:(id)arg1 loggableSharedUserId:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)loggableSharedUserId;
- (id)sharedUserId;

// AFASRSharedUserInfo (AFASRSharedUserInfoMutability)

- (id)mutatedCopyWithMutator:(id /* block */)arg1;

@end
