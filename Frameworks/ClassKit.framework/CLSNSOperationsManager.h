/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/ClassKit.framework/ClassKit
 */

@interface CLSNSOperationsManager : NSObject {
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _lock;
    NSMutableArray * _operations;
}

- (void).cxx_destruct;
- (void)addOperation:(id)arg1;
- (unsigned long long)count;
- (id)init;
- (void)lock;
- (void)performOperation:(id)arg1 onOperationQueue:(id)arg2 withTimeOut:(double)arg3;
- (void)removeOperation:(id)arg1;
- (void)unlock;

@end
