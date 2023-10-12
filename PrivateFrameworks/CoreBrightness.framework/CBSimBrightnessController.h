/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

@interface CBSimBrightnessController : NSObject {
    double  _currentFactor;
    <CBSimBrightnessControllerDelegate> * _delegate;
    double  _duration;
    double  _initialFactor;
    NSObject<OS_os_log> * _logHandle;
    NSDate * _startDate;
    double  _targetFactor;
    NSObject<OS_dispatch_source> * _transitionTimer;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) double currentFactor;
@property (nonatomic, readonly) <CBSimBrightnessControllerDelegate> *delegate;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *transitionTimer;

- (void)_cancelCurrentTimer;
- (void)_setCurrentFactor:(double)arg1;
- (void)_transitionToFactor:(double)arg1 withDuration:(double)arg2 maxUpdatesPerSecond:(unsigned char)arg3;
- (void)_updateTransitionProgress;
- (void)cancelCurrentTransition;
- (double)currentFactor;
- (void)dealloc;
- (id)delegate;
- (id)initWithFactor:(double)arg1 delegate:(id)arg2;
- (void)setStartDate:(id)arg1;
- (id)startDate;
- (id)transitionTimer;
- (void)transitionToFactor:(double)arg1 withDuration:(double)arg2 maxUpdatesPerSecond:(unsigned char)arg3;

@end
