/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISnapshottingAssertionManager : NSObject {
    NSMutableSet * _heldAssertions;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  lock;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (id)acquireNewAssertion;
- (void)dealloc;
- (void)executeIfNoActiveAssertions:(id /* block */)arg1;
- (id)init;
- (void)relinquishAssertion:(id)arg1;
- (void)withLock:(id /* block */)arg1;

@end
