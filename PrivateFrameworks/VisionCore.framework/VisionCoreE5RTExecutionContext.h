/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/VisionCore.framework/VisionCore
 */

@interface VisionCoreE5RTExecutionContext : NSObject {
    VisionCoreNamedObjects * _boundInputObjects;
    VisionCoreE5RTExecutionBoundPorts * _boundInputPorts;
    VisionCoreNamedObjects * _boundOutputObjects;
    VisionCoreE5RTExecutionBoundPorts * _boundOutputPorts;
    NSObject<OS_dispatch_queue> * _configurationProvidedCompletionQueue;
    void * _executionStreamHandle;
    void * _executionStreamOperationHandle;
    VisionCoreE5RTFunction * _function;
    bool  _isPrebound;
}

@property (nonatomic, readonly, copy) VisionCoreNamedObjects *boundInputObjects;
@property (nonatomic, readonly, copy) VisionCoreNamedObjects *boundOutputObjects;
@property (nonatomic, readonly) VisionCoreE5RTFunction *function;
@property (nonatomic, readonly, copy) NSArray *inputs;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSArray *outputs;
@property (getter=isPrebound, nonatomic, readonly) bool prebound;

+ (id)newContextForFunction:(id)arg1 withConfiguration:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)_initWithOwnedOperationHandle:(void**)arg1 function:(id)arg2 inputs:(id)arg3 outputs:(id)arg4;
- (id)boundInputObjects;
- (id)boundOutputObjects;
- (void)dealloc;
- (bool)executeAndReturnError:(id*)arg1;
- (void)executeWithCompletionHandler:(id /* block */)arg1;
- (void)executeWithInputObjects:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)executeWithInputObjects:(id)arg1 error:(id*)arg2;
- (id)function;
- (id)inputs;
- (bool)isPrebound;
- (id)name;
- (id)outputs;

@end
