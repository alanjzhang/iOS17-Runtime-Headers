/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
 */

@interface BSUIMappedImageCache : NSObject <BSDebugDescriptionProviding, BSDescriptionProviding> {
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSString * _path;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _queue_allKeys;
    NSMutableDictionary * _queue_keysToImagesOrFutures;
    BSUIMappedImageCacheRegistry * _registry;
    NSString * _uniqueIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_imageForKey:(id)arg1 withCPBitmapReadFlags:(int)arg2 generatingIfNecessaryWithBlock:(id /* block */)arg3;
- (void)_noteExternalChangeForKey:(id)arg1;
- (void)_setImage:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (void)_setImage:(id)arg1 forKey:(id)arg2 withPersistenceOptions:(unsigned long long)arg3 andCPBitmapReadFlags:(int)arg4;
- (void)_warmupImageForKey:(id)arg1;
- (id)allKeys;
- (void)dealloc;
- (id)debugDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)imageForKey:(id)arg1;
- (id)imageForKey:(id)arg1 generatingIfNecessaryWithBlock:(id /* block */)arg2;
- (id)imageForKey:(id)arg1 generatingIfNecessaryWithBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithUniqueIdentifier:(id)arg1;
- (id)initWithUniqueIdentifier:(id)arg1 options:(id)arg2;
- (void)releaseRecoverableResources;
- (void)removeAllImagesWithCompletion:(id /* block */)arg1;
- (void)removeAllObjects;
- (void)removeImageForKey:(id)arg1;
- (void)removeImageForKey:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)setImage:(id)arg1 forKey:(id)arg2;
- (void)setImage:(id)arg1 forKey:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)setImage:(id)arg1 forKey:(id)arg2 withPersistenceOptions:(unsigned long long)arg3;
- (void)setImage:(id)arg1 forKey:(id)arg2 withPersistenceOptions:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
