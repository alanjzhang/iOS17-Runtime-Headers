/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLBVHBuilder : NSObject

+ (bool)useTemporalSplitsForDescriptor:(id)arg1;

- (void)getCapacitiesForDescriptor:(id)arg1 fragmentCapacity:(unsigned long long*)arg2 fragmentIndexCapacity:(unsigned long long*)arg3 innerNodeCapacity:(unsigned long long*)arg4 leafNodeCapacity:(unsigned long long*)arg5 primitiveDataCapacity:(unsigned long long*)arg6;
- (void)getCapacitiesForDescriptor:(id)arg1 fragmentCapacity:(unsigned long long*)arg2 innerNodeCapacity:(unsigned long long*)arg3 leafNodeCapacity:(unsigned long long*)arg4;
- (void)getCapacitiesForDescriptor:(id)arg1 fragmentCapacity:(unsigned long long*)arg2 innerNodeCapacity:(unsigned long long*)arg3 leafNodeCapacity:(unsigned long long*)arg4 primitiveDataCapacity:(unsigned long long*)arg5;
- (id)init;

@end
