/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSpeechTestRequestOptions : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _jitContext;
    NSString * _overrideModelPath;
}

@property (nonatomic, readonly, copy) NSArray *jitContext;
@property (nonatomic, readonly, copy) NSString *overrideModelPath;

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
- (id)initWithJitContext:(id)arg1 overrideModelPath:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)jitContext;
- (id)overrideModelPath;

// AFSpeechTestRequestOptions (AFSpeechTestRequestOptionsMutability)

- (id)mutatedCopyWithMutator:(id /* block */)arg1;

@end
