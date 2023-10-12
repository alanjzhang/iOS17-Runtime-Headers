/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/BiomeDSL.framework/BiomeDSL
 */

@interface BMDSLMap : BMDSL {
    <BMDSLTransform> * _transform;
    BMDSL * _upstream;
}

@property (nonatomic, readonly) <BMDSLTransform> *transform;
@property (nonatomic, readonly) BMDSL *upstream;

+ (id)name;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUpstream:(id)arg1 transform:(id)arg2;
- (id)initWithUpstream:(id)arg1 transform:(id)arg2 name:(id)arg3 version:(unsigned int)arg4;
- (id)transform;
- (id)upstream;
- (id)upstreams;

// BMDSLMap (BPSPubSub)

- (id)bpsPublisher;

@end
