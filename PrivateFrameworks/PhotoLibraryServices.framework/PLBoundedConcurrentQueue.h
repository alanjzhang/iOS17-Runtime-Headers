/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLBoundedConcurrentQueue : NSObject {
    NSObject<OS_dispatch_semaphore> * _bound;
    NSObject<OS_dispatch_queue> * _concurrentQueue;
    NSObject<OS_dispatch_queue> * _submissionQueue;
}

- (void).cxx_destruct;
- (void)async:(id /* block */)arg1;
- (id)initWithName:(id)arg1 concurrencyLimit:(unsigned char)arg2;
- (void)sync:(id /* block */)arg1;

@end
