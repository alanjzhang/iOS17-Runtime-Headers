/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPublicIdentityLookupService : NSObject {
    CKDIdentityCache * _cache;
    CKDContainer * _container;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) CKDIdentityCache *cache;
@property (nonatomic, readonly) CKDContainer *container;

- (void).cxx_destruct;
- (id)cache;
- (void)configureRequest:(id)arg1;
- (id)container;
- (id)initWithContainer:(id)arg1;
- (void)removeCacheForLookupInfos:(id)arg1;
- (void)scheduleRequest:(id)arg1;
- (void)setCache:(id)arg1;

@end
