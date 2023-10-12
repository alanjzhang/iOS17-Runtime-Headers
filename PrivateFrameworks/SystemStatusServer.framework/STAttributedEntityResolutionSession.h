/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SystemStatusServer.framework/SystemStatusServer
 */

@interface STAttributedEntityResolutionSession : NSObject <STAttributedEntityBatchResolving> {
    STReferenceCountedCache * _cache;
    NSArray * _cachedEntities;
    <STAttributedEntityResolving> * _entityResolver;
    <STExecutableIdentityBatchResolving> * _identityResolver;
    bool  _invalidated;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithEntityResolver:(id)arg1 identityResolver:(id)arg2 cache:(id)arg3;
- (void)invalidate;
- (void)resolveEntities:(id)arg1;
- (id)resolveEntity:(id)arg1;

@end
