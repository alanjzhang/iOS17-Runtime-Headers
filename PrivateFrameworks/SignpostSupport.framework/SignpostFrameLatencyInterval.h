/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

@interface SignpostFrameLatencyInterval : SignpostAnimationSubInterval <SignpostCARenderServerFrameMetadata> {
    NSSet * _contributingPids;
    unsigned int  _frameSeed;
    unsigned long long  _lateFrameCount;
    unsigned int  _swapId;
    unsigned long long  _totalFrameCount;
}

@property (nonatomic, retain) NSSet *contributingPids;
@property (nonatomic, readonly) unsigned int frameSeed;
@property (nonatomic, readonly) unsigned long long lateFrameCount;
@property (nonatomic, readonly) unsigned int swapId;
@property (nonatomic, readonly) unsigned long long totalFrameCount;

- (void).cxx_destruct;
- (id)contributingPids;
- (unsigned int)frameSeed;
- (id)initWithFrameLatencyInterval:(id)arg1 isLong:(bool)arg2;
- (id)initWithStartMCT:(unsigned long long)arg1 endMCT:(unsigned long long)arg2 timebaseRatio:(double)arg3 swapID:(unsigned int)arg4 frameSeed:(unsigned int)arg5 totalFrameCount:(unsigned long long)arg6 lateFrameCount:(unsigned long long)arg7;
- (unsigned long long)lateFrameCount;
- (void)setContributingPids:(id)arg1;
- (unsigned int)swapId;
- (unsigned long long)totalFrameCount;

@end
