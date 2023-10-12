/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
 */

@interface BMSocialMediaHandle : NSObject <BMProtoBufWrapper> {
    NSString * _bundleId;
    NSString * _handle;
}

@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) NSString *handle;

- (void).cxx_destruct;
- (id)bundleId;
- (id)encodeAsProto;
- (id)handle;
- (id)initWithBundleId:(id)arg1 handle:(id)arg2;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)proto;

@end
