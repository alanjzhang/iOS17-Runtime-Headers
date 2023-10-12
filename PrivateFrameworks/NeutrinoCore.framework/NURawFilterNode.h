/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NURawFilterNode : NUFilterNode {
    int  _rawFilterType;
}

@property (nonatomic, readonly) int rawFilterType;

- (id)initWithFilterName:(id)arg1 settings:(id)arg2 inputs:(id)arg3;
- (id)initWithRawFilter:(id)arg1 type:(int)arg2 settings:(id)arg3 input:(id)arg4;
- (id)initWithRawFilterName:(id)arg1 type:(int)arg2 settings:(id)arg3 inputs:(id)arg4;
- (int)rawFilterType;
- (id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;
- (bool)shouldCacheNodeForPipelineState:(id)arg1;

@end
