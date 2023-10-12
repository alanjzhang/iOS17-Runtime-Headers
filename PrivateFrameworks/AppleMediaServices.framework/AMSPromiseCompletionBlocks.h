/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSPromiseCompletionBlocks : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _completionBlockLock;
    NSMutableArray * _completionBlocks;
    bool  _shouldCallImmediately;
}

- (void).cxx_destruct;
- (void)addCompletionBlock:(id /* block */)arg1;
- (void)addErrorBlock:(id /* block */)arg1;
- (void)addSuccessBlock:(id /* block */)arg1;
- (void)callCompletionBlock:(id /* block */)arg1 withPromiseResult:(id)arg2;
- (void)callErrorBlock:(id /* block */)arg1 withPromiseResult:(id)arg2;
- (void)callSuccessBlock:(id /* block */)arg1 withPromiseResult:(id)arg2;
- (void)flushCompletionBlocksWithPromiseResult:(id)arg1;
- (id)init;

@end
