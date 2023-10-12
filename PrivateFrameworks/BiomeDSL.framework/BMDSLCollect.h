/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/BiomeDSL.framework/BiomeDSL
 */

@interface BMDSLCollect : BMDSL {
    BMDSL * _upstream;
}

@property (nonatomic, readonly) BMDSL *upstream;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUpstream:(id)arg1;
- (id)initWithUpstream:(id)arg1 name:(id)arg2 version:(unsigned int)arg3;
- (id)upstream;
- (id)upstreams;

// BMDSLCollect (BPSPubSub)

- (id)bpsPublisher;

@end
