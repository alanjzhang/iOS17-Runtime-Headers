/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDPersistedCoalescingTimer : NSObject {
    _PASCoalescingTimer * _coalescingTimer;
    double  _delay;
    double  _leeway;
    NSString * _persistencePath;
    NSObject<OS_dispatch_queue> * _queue;
    BMSource * _source;
    BMStoreStream * _storeStream;
}

- (void).cxx_destruct;
- (id)initWithDelay:(double)arg1 coalesceData:(id /* block */)arg2 operation:(id /* block */)arg3 persistencePath:(id)arg4 dataClass:(Class)arg5 timerName:(id)arg6;
- (void)processData:(id)arg1;

@end
