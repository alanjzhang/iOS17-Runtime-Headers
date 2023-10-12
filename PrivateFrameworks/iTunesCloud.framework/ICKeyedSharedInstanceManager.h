/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICKeyedSharedInstanceManager : NSObject {
    id /* block */  _instantiationHandler;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _stronglyHeldSharedInstances;
    NSMutableDictionary * _usageCounts;
    NSMapTable * _weaklyHeldSharedInstances;
}

- (void).cxx_destruct;
- (void)decrementUsageCountForKey:(id)arg1;
- (void)incrementUsageCountForKey:(id)arg1;
- (id)initWithInstantiationHandler:(id /* block */)arg1;
- (id)sharedInstanceForKey:(id)arg1;

@end
