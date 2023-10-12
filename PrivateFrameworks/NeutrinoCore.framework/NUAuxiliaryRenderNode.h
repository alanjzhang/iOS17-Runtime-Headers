/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUAuxiliaryRenderNode : NURenderNode

@property (nonatomic, readonly) long long auxiliaryImageType;
@property (nonatomic, readonly) NURenderNode *inputNode;

- (id)_evaluateImageProperties:(out id*)arg1;
- (long long)auxiliaryImageType;
- (id)initWithInput:(id)arg1 auxiliaryImageType:(long long)arg2;
- (id)initWithSettings:(id)arg1 inputs:(id)arg2;
- (id)inputNode;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3;

@end