/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/InertiaCam.framework/InertiaCam
 */

@interface PipelineStatePromise : NSObject {
    NSMapTable * errors;
    NSObject<OS_dispatch_group> * group;
    _Atomic bool  initialization_completed;
    NSMapTable * pipelineStates;
}

- (void).cxx_destruct;
- (id)errorForFunction:(id)arg1;
- (bool)groupWasSuccessful;
- (id)initWithDispatchGroup:(id)arg1 pipelineStates:(id)arg2 errors:(id)arg3;
- (id)pipelineStateForFunction:(id)arg1;
- (bool)timesOutWaitingForPipelineStates:(double)arg1;

@end
