/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Speech.framework/Speech
 */

@interface _SFAnalyzerClientInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _applicationName;
    NSString * _clientID;
    NSString * _source;
}

@property (nonatomic, readonly, copy) NSString *applicationName;
@property (nonatomic, readonly, copy) NSString *clientID;
@property (nonatomic, readonly, copy) NSString *source;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicationName;
- (id)clientID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1 applicationName:(id)arg2 source:(id)arg3;
- (id)source;

@end
