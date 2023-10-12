/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUDepthGraph : NSObject {
    unsigned int * _depthMap;
    VMUProcessObjectGraph * _graph;
}

- (void).cxx_destruct;
- (void)_buildDepthMap;
- (void)_buildNextDepth:(id)arg1 into:(id)arg2 depth:(unsigned int)arg3;
- (void)_processNodes:(void*)arg1 withDepth:(unsigned int)arg2;
- (void)dealloc;
- (unsigned int)depthOfNode:(unsigned int)arg1;
- (id)initWithGraph:(id)arg1;
- (long long)markNodes:(void*)arg1 atDepth:(unsigned int)arg2;

@end
