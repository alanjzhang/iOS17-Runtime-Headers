/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/IOSurface.framework/IOSurface
 */

@interface IOSurfaceMemoryPool : NSObject {
    unsigned long long  _poolId;
    unsigned int  _poolPort;
}

@property (readonly) unsigned long long poolId;

- (id)copyDebugInfo;
- (void)dealloc;
- (int)ensureMemory:(id)arg1;
- (int)flush:(id)arg1;
- (id)initWithProperties:(id)arg1;
- (unsigned long long)poolId;

@end
