/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNRPNTrackerEspressoResourcesCache : NSObject {
    NSMutableDictionary * _rpnEspressoResourcesKeyToEspressoResourcesCache;
    NSLock * _rpnEspressoResourcesKeyToEspressoResourcesCacheLock;
}

+ (id)cacheKeyFromOptions:(id)arg1 error:(id*)arg2;
+ (id)cacheOptionsKeys;

- (void).cxx_destruct;
- (bool)addRPNTrackerResourcesConfiguredForOptions:(id)arg1 resources:(id)arg2 error:(id*)arg3;
- (id)createRPNTrackerResourcesConfiguredWithOptions:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)locateRPNTrackerResourcesConfiguredForOptions:(id)arg1 error:(id*)arg2;
- (void)releaseCachedResources;

@end
