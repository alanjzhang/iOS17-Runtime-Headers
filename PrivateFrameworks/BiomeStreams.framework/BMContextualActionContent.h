/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
 */

@interface BMContextualActionContent : NSObject <NSSecureCoding> {
    NSDictionary * _contentMetadata;
    NSString * _contentType;
}

@property (nonatomic, readonly) NSDictionary *contentMetadata;
@property (nonatomic, readonly) NSString *contentType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contentMetadata;
- (id)contentType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(id)arg1 metadata:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
