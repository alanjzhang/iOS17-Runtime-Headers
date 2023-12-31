/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

@interface SignpostSupportCompositorInterval : SignpostAnimationSubInterval <SignpostSerializable> {
    NSArray * _contributingPids;
}

@property (nonatomic, retain) NSArray *contributingPids;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contributingPids;
- (unsigned long long)hash;
- (id)initWithStartContinuousTime:(unsigned long long)arg1 endContinuousTime:(unsigned long long)arg2 timebaseRatio:(double)arg3 contributingPids:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSignpostSupportCompositorInterval:(id)arg1;
- (void)setContributingPids:(id)arg1;

// SignpostSupportCompositorInterval (Serialization)

+ (id)serializationTypeNumber;

- (id)humanReadableDictionaryRepresentation;
- (id)humanReadableType;
- (id)initWithDictionary:(id)arg1;
- (id)serializeableDictionaryWithShouldRedact:(bool)arg1;

@end
