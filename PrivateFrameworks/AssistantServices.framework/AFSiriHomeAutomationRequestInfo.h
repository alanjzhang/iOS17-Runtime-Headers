/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSiriHomeAutomationRequestInfo : NSObject <NSCopying, NSSecureCoding> {
    NSData * _context;
}

@property (nonatomic, readonly, copy) NSData *context;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;

// AFSiriHomeAutomationRequestInfo (AFSiriHomeAutomationRequestInfoMutability)

+ (id)newWithBuilder:(id /* block */)arg1;

- (id)mutatedCopyWithMutator:(id /* block */)arg1;

@end
