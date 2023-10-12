/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalIdleTimer : NSObject {
    unsigned long long  _leewayInSeconds;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _timeoutBlock;
    unsigned long long  _timeoutInSeconds;
    NSObject<OS_dispatch_source> * _timer;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithQueue:(id)arg1 timeoutInSeconds:(unsigned long long)arg2 leewayInSeconds:(unsigned long long)arg3 timeoutBlock:(id /* block */)arg4;
- (void)poke;
- (void)start;

@end
