/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGMailMessageKey : NSObject <NSCopying, NSSecureCoding> {
    NSString * _messageId;
    NSString * _source;
}

@property (nonatomic, readonly) NSString *messageId;
@property (nonatomic, readonly) NSString *source;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSource:(id)arg1 messageId:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMailMessageKey:(id)arg1;
- (id)messageId;
- (id)source;

@end
