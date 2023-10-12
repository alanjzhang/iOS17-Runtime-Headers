/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ContainerManagerCommon.framework/ContainerManagerCommon
 */

@interface MCMContainerCache : NSObject <MCMContainerCache, MCMUserIdentityCacheObserver> {
    Class  _cacheEntryClass;
    <MCMChildParentMapCache> * _childParentMapCache;
    Class  _classCacheClass;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _queue_cache;
    MCMUserIdentityCache * _userIdentityCache;
}

@property (nonatomic, readonly) Class cacheEntryClass;
@property (nonatomic, readonly) <MCMChildParentMapCache> *childParentMapCache;
@property (nonatomic, readonly) Class classCacheClass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MCMUserIdentityCache *userIdentityCache;

- (void).cxx_destruct;
- (id)_containerClassPathForUserIdentity:(id)arg1 containerClass:(unsigned long long)arg2 transient:(bool)arg3;
- (id)_queue_containerClassCacheForContainerClassPath:(id)arg1;
- (id)_queue_containerClassCacheForUserIdentity:(id)arg1 containerClass:(unsigned long long)arg2 transient:(bool)arg3;
- (void)_queue_flushCacheForContainerClassPath:(id)arg1;
- (void)_queue_invalidateUserIdentity:(id)arg1;
- (void)_queue_setContainerClassCache:(id)arg1;
- (id)addContainerMetadata:(id)arg1 error:(id*)arg2;
- (Class)cacheEntryClass;
- (id)childParentMapCache;
- (Class)classCacheClass;
- (id)classCacheForContainerIdentity:(id)arg1;
- (long long)countContainersForOtherUserIdentitiesWithIdentity:(id)arg1 error:(id*)arg2;
- (id)entriesForUserIdentities:(id)arg1 contentClass:(unsigned long long)arg2 transient:(bool)arg3 error:(id*)arg4;
- (id)entryForContainerIdentity:(id)arg1 classCache:(id)arg2 error:(id*)arg3;
- (id)entryForContainerIdentity:(id)arg1 error:(id*)arg2;
- (void)flushCacheForUserIdentity:(id)arg1 containerClass:(unsigned long long)arg2 transient:(bool)arg3;
- (id)initWithUserIdentityCache:(id)arg1 childParentMapCache:(id)arg2 classCacheClass:(Class)arg3 cacheEntryClass:(Class)arg4 error:(id*)arg5;
- (id)initWithUserIdentityCache:(id)arg1 childParentMapCache:(id)arg2 classCacheClass:(Class)arg3 cacheEntryClass:(Class)arg4 queue:(id)arg5;
- (void)invalidateUserIdentity:(id)arg1;
- (id)queue;
- (bool)removeContainerForUserIdentity:(id)arg1 contentClass:(unsigned long long)arg2 identifier:(id)arg3 transient:(bool)arg4 error:(id*)arg5;
- (void)setContainerClassCache:(id)arg1;
- (id)userIdentityCache;
- (void)userIdentityCache:(id)arg1 didAddUserIdentity:(id)arg2;
- (void)userIdentityCache:(id)arg1 didInvalidateUserIdentity:(id)arg2;

@end
