/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGLongRunningTask : NSObject {
    NSDate * _deadline;
    _Atomic bool  _deferRequested;
    SGLongRunningTaskManager * _manager;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithDeadline:(id)arg1 manager:(id)arg2;
- (void)markFinished;
- (void)requestDefer;
- (bool)shouldDefer;

@end
