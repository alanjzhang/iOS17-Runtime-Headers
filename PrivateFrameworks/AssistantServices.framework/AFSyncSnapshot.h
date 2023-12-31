/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSyncSnapshot : NSObject <NSSecureCoding> {
    NSString * _anchor;
    long long  _count;
    NSString * _key;
    NSString * _validity;
}

@property (nonatomic, copy) NSString *anchor;
@property (nonatomic) long long count;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *validity;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)anchor;
- (long long)count;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)key;
- (void)setAnchor:(id)arg1;
- (void)setCount:(long long)arg1;
- (void)setKey:(id)arg1;
- (void)setValidity:(id)arg1;
- (id)validity;

@end
