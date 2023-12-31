/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MTLSimDriver.framework/MTLSimDriver
 */

@interface MTLSimCommandBuffer : _MTLCommandBuffer <MTLCommandBufferSPI, MTLSerializerCommandStream> {
    unsigned long long  _protectionOptions;
    unsigned int  _reference;
    MTLResourceList * _resourceList;
    struct BufferStorageEntry { id x1; unsigned long long x2; struct BufferStorageEntry {} *x3; } * bufferCurrentStorage;
    struct BufferStorageEntry { id x1; unsigned long long x2; struct BufferStorageEntry {} *x3; } * bufferHead;
    struct StorageEntry { unsigned long long x1; void *x2; id x3; struct StorageEntry {} *x4; } * commandCurrentStorage;
    struct StorageEntry { unsigned long long x1; void *x2; id x3; struct StorageEntry {} *x4; } * commandHead;
    struct StorageEntry { unsigned long long x1; void *x2; id x3; struct StorageEntry {} *x4; } * commandPrevious;
    struct StorageEntry { unsigned long long x1; void *x2; id x3; struct StorageEntry {} *x4; } * commandTail;
    bool  continuation;
    unsigned long long  currentStorageOffset;
    <MTLDevice> * device;
    unsigned long long  segmentCount;
    id /* block */  splitHandler;
}

@property (readonly) double GPUEndTime;
@property (readonly) double GPUStartTime;
@property (readonly) unsigned int commandBufferRef;
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
@property (readonly) bool retainedReferences;
@property (copy) id /* block */ splitHandler;
@property (readonly) unsigned long long status;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableDictionary *userDictionary;

- (void)addPurgedHeap:(id)arg1;
- (void)addPurgedResource:(id)arg1;
- (bool)addResourceReference:(id)arg1 isWrite:(bool)arg2;
- (bool)addStateReference:(id)arg1;
- (void)beginContinuation;
- (id)blitCommandEncoder;
- (id)blitCommandEncoderWithDescriptor:(id)arg1;
- (unsigned int)commandBufferRef;
- (bool)commitAndWaitUntilSubmitted;
- (id)computeCommandEncoder;
- (id)computeCommandEncoderWithDescriptor:(id)arg1;
- (id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1;
- (void)dealloc;
- (id)device;
- (void)encodeSignalEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)encodeSignalEvent:(id)arg1 value:(unsigned long long)arg2 agentMask:(unsigned long long)arg3;
- (void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2 timeout:(unsigned int)arg3;
- (void)endEncoding;
- (void*)getBufferBytes:(unsigned long long)arg1 alignment:(unsigned long long)arg2 buffer:(id*)arg3 offset:(unsigned long long*)arg4;
- (void*)getCommandBufferBytes:(unsigned long long)arg1;
- (void*)getCommandBytes:(unsigned long long)arg1 forCommand:(unsigned int)arg2;
- (id)initWithQueue:(id)arg1 retainedReferences:(bool)arg2;
- (void)merge:(id)arg1;
- (id)parallelRenderCommandEncoderWithDescriptor:(id)arg1;
- (unsigned long long)protectionOptions;
- (id)renderCommandEncoderWithDescriptor:(id)arg1;
- (id)resourceStateCommandEncoder;
- (id)resourceStateCommandEncoderWithDescriptor:(id)arg1;
- (void)setProtectionOptions:(unsigned long long)arg1;
- (void)setSplitHandler:(id /* block */)arg1;
- (void)split;
- (id /* block */)splitHandler;

@end
