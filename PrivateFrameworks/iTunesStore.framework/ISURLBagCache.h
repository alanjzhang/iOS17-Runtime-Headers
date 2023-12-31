/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISURLBagCache : NSObject {
    SSLRUCache * _cachedBags;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
}

+ (id)URLWithBagContext:(id)arg1;
+ (id)sharedCache;

- (void).cxx_destruct;
- (id)URLBagForContext:(id)arg1;
- (id)URLBagForContext:(id)arg1 withOptions:(long long)arg2;
- (id)_newRequestWithURLBagContext:(id)arg1;
- (void)_storeFrontChangedNotification:(id)arg1;
- (void)addURLBag:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)invalidateAllURLBags;
- (void)invalidateURLBagForContext:(id)arg1;

@end
