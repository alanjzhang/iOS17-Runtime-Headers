/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUVideoRenderClient : NURenderClient {
    NSArray * _pipelineFilters;
    long long  _sampleMode;
    <NUScalePolicy> * _scalePolicy;
}

@property (nonatomic, copy) NSArray *pipelineFilters;
@property (nonatomic) long long sampleMode;
@property (nonatomic, retain) <NUScalePolicy> *scalePolicy;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 responseQueue:(id)arg2;
- (id)pipelineFilters;
- (long long)sampleMode;
- (id)scalePolicy;
- (void)setPipelineFilters:(id)arg1;
- (void)setSampleMode:(long long)arg1;
- (void)setScalePolicy:(id)arg1;
- (void)submitRequestForComposition:(id)arg1 completion:(id /* block */)arg2;

@end
