/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLToolsCommandBuffer : MTLToolsObject <MTLCommandBufferSPI, MTLToolsRetainingContainer> {
    bool  _StatEnabled;
    struct vector<void (^)(id<MTLCommandBuffer>), std::allocator<void (^)(id<MTLCommandBuffer>)>>="__begin_"^@?"__end_"^@?"__end_cap_"{__compressed_pair<void (^*)(id<MTLCommandBuffer>), std::allocator<void (^)(id<MTLCommandBuffer>)>>="__value_"^@? {}  _completedHandlers;
    MTLToolsDeadlineProfile * _deadlineProfile;
    bool  _didInvokeHandlers;
    struct { 
        unsigned int hasCommit : 1; 
        unsigned int addedCompletedHandler : 1; 
        unsigned int addedScheduledHandler : 1; 
        unsigned int padding : 29; 
    }  _flags;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _handlerLock;
    id /* block */  _perfSampleHandlerBlock;
    NSMutableSet * _retainedObjects;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _retainedObjectsLock;
    struct vector<void (^)(id<MTLCommandBuffer>), std::allocator<void (^)(id<MTLCommandBuffer>)>>="__begin_"^@?"__end_"^@?"__end_cap_"{__compressed_pair<void (^*)(id<MTLCommandBuffer>), std::allocator<void (^)(id<MTLCommandBuffer>)>>="__value_"^@? {}  _scheduledHandlers;
    bool  _useRetainedObjectsLock;
}

@property (readonly) double GPUEndTime;
@property (readonly) double GPUStartTime;
@property (readonly) <MTLCommandQueue> *commandQueue;
@property (readonly, retain) <MTLDeadlineProfile> *deadlineProfile;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) NSError *error;
@property (readonly) unsigned long long errorOptions;
@property (readonly) unsigned long long globalTraceObjectID;
@property (readonly) unsigned long long hash;
@property (readonly) double kernelEndTime;
@property (readonly) double kernelStartTime;
@property (copy) NSString *label;
@property (getter=getListIndex, nonatomic, readonly) unsigned long long listIndex;
@property (readonly) <MTLLogContainer> *logs;
@property (getter=isProfilingEnabled) bool profilingEnabled;
@property (readonly) NSDictionary *profilingResults;
@property (nonatomic, readonly) NSMutableSet *retainedObjects;
@property (readonly) bool retainedReferences;
@property (readonly) unsigned long long status;
@property (readonly) Class superclass;
@property bool useRetainedObjectsLock;
@property (nonatomic, readonly) NSMutableDictionary *userDictionary;

+ (id)unwrapMTLComputePassDescriptorInternal:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (double)GPUEndTime;
- (double)GPUStartTime;
- (id)accelerationStructureCommandEncoder;
- (id)accelerationStructureCommandEncoderWithDescriptor:(id)arg1;
- (void)addCompletedHandler:(id /* block */)arg1;
- (void)addPurgedHeap:(id)arg1;
- (void)addPurgedResource:(id)arg1;
- (bool)addRetainedObject:(id)arg1;
- (void)addScheduledHandler:(id /* block */)arg1;
- (void)addSynchronizationNotification:(id /* block */)arg1;
- (id)blitCommandEncoder;
- (id)blitCommandEncoderWithDescriptor:(id)arg1;
- (void)clearRetainedObjects;
- (id)commandQueue;
- (void)commit;
- (void)commitAndHold;
- (bool)commitAndWaitUntilSubmitted;
- (bool)commitAndWaitUntilSubmittedWithDeadline:(unsigned long long)arg1;
- (void)commitWithDeadline:(unsigned long long)arg1;
- (id)computeCommandEncoder;
- (id)computeCommandEncoderWithDescriptor:(id)arg1;
- (id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1;
- (id)deadlineProfile;
- (void)dealloc;
- (void*)debugBufferContentsWithLength:(unsigned long long*)arg1;
- (id)debugCommandEncoder;
- (void)dropResourceGroups:(const id*)arg1 count:(unsigned long long)arg2;
- (void)encodeCacheHintFinalize:(unsigned long long)arg1 resourceGroups:(const id*)arg2 count:(unsigned long long)arg3;
- (void)encodeCacheHintTag:(unsigned long long)arg1 resourceGroups:(const id*)arg2 count:(unsigned long long)arg3;
- (void)encodeConditionalAbortEvent:(id)arg1;
- (void)encodeDashboardFinalizeForResourceGroup:(id)arg1 dashboard:(unsigned long long)arg2 value:(unsigned long long)arg3 forIndex:(unsigned long long)arg4;
- (void)encodeDashboardFinalizeForResourceGroup:(id)arg1 dashboard:(unsigned long long)arg2 values:(const unsigned long long*)arg3 indices:(const unsigned long long*)arg4 count:(unsigned long long)arg5;
- (void)encodeDashboardTagForResourceGroup:(id)arg1;
- (void)encodeSignalEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)encodeSignalEvent:(id)arg1 value:(unsigned long long)arg2 agentMask:(unsigned long long)arg3;
- (void)encodeSignalEventScheduled:(id)arg1 value:(unsigned long long)arg2;
- (void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2 timeout:(unsigned int)arg3;
- (void)enqueue;
- (id)error;
- (unsigned long long)errorOptions;
- (void)executeSynchronizationNotifications:(int)arg1;
- (void)executeSynchronizationNotifications:(int)arg1 scope:(unsigned long long)arg2 resources:(const id*)arg3 count:(unsigned long long)arg4;
- (unsigned long long)getListIndex;
- (unsigned long long)globalTraceObjectID;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (id)initWithCommandBuffer:(id)arg1 parent:(id)arg2 descriptor:(id)arg3;
- (void)invokeCompletedHandlers;
- (void)invokeScheduledHandlers;
- (bool)isProfilingEnabled;
- (double)kernelEndTime;
- (double)kernelStartTime;
- (id)label;
- (id)logs;
- (id)parallelRenderCommandEncoderWithDescriptor:(id)arg1;
- (void)popDebugGroup;
- (void)postCompletionHandlers;
- (void)postScheduledHandlers;
- (void)preCommit;
- (void)preCompletionHandlers;
- (void)preScheduledHandlers;
- (void)presentDrawable:(id)arg1;
- (void)presentDrawable:(id)arg1 atTime:(double)arg2;
- (void)presentDrawable:(id)arg1 options:(id)arg2;
- (id)profilingResults;
- (unsigned long long)protectionOptions;
- (void)pushDebugGroup:(id)arg1;
- (id)renderCommandEncoderWithDescriptor:(id)arg1;
- (id)resourceStateCommandEncoder;
- (id)resourceStateCommandEncoderWithDescriptor:(id)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)retainObjectsFromRenderPassDescriptor:(id)arg1;
- (id)retainedObjects;
- (bool)retainedReferences;
- (id)sampledComputeCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(union { struct { unsigned int x_1_1_1 : 8; unsigned int x_1_1_2 : 24; unsigned int x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; } x1; struct { unsigned int x_2_1_1 : 8; unsigned int x_2_1_2 : 24; unsigned int x_2_1_3; unsigned long long x_2_1_4; unsigned long long x_2_1_5; } x2; }*)arg2 capacity:(unsigned long long)arg3;
- (id)sampledComputeCommandEncoderWithDispatchType:(unsigned long long)arg1 programInfoBuffer:(union { struct { unsigned int x_1_1_1 : 8; unsigned int x_1_1_2 : 24; unsigned int x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; } x1; struct { unsigned int x_2_1_1 : 8; unsigned int x_2_1_2 : 24; unsigned int x_2_1_3; unsigned long long x_2_1_4; unsigned long long x_2_1_5; } x2; }*)arg2 capacity:(unsigned long long)arg3;
- (id)sampledComputeCommandEncoderWithProgramInfoBuffer:(union { struct { unsigned int x_1_1_1 : 8; unsigned int x_1_1_2 : 24; unsigned int x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; } x1; struct { unsigned int x_2_1_1 : 8; unsigned int x_2_1_2 : 24; unsigned int x_2_1_3; unsigned long long x_2_1_4; unsigned long long x_2_1_5; } x2; }*)arg1 capacity:(unsigned long long)arg2;
- (id)sampledRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(union { struct { unsigned int x_1_1_1 : 8; unsigned int x_1_1_2 : 24; unsigned int x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; } x1; struct { unsigned int x_2_1_1 : 8; unsigned int x_2_1_2 : 24; unsigned int x_2_1_3; unsigned long long x_2_1_4; unsigned long long x_2_1_5; } x2; }*)arg2 capacity:(unsigned long long)arg3;
- (void)setLabel:(id)arg1;
- (void)setLogs:(id)arg1;
- (void)setProfilingEnabled:(bool)arg1;
- (void)setProtectionOptions:(unsigned long long)arg1;
- (void)setResourceGroups:(const id*)arg1 count:(unsigned long long)arg2;
- (void)setUseRetainedObjectsLock:(bool)arg1;
- (unsigned long long)status;
- (id)unwrapMTLAccelerationStructurePassDescriptor:(id)arg1;
- (id)unwrapMTLBlitPassDescriptor:(id)arg1;
- (id)unwrapMTLComputePassDescriptor:(id)arg1;
- (id)unwrapMTLRenderPassDescriptor:(id)arg1;
- (id)unwrapMTLResourceStatePassDescriptor:(id)arg1;
- (bool)useRetainedObjectsLock;
- (id)userDictionary;
- (void)waitUntilCompleted;
- (void)waitUntilScheduled;
- (void)willEncodeSignalEvent:(id)arg1 value:(unsigned long long)arg2 writeableResources:(id)arg3;

@end
