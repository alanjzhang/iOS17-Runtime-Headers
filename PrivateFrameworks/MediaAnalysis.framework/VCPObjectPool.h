/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis
 */

@interface VCPObjectPool : NSObject {
    id /* block */  _allocator;
    NSMutableArray * _objects;
}

+ (id)objectPoolWithAllocator:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)getObject;
- (id)initWithAllocator:(id /* block */)arg1;
- (void)returnObject:(id)arg1;

@end
