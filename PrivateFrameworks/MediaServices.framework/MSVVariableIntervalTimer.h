/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVVariableIntervalTimer : NSObject {
    NSDate * _currentIntervalStartDate;
    NSMutableArray * _intervals;
    MSVTimer * _timer;
}

@property (nonatomic, readonly) double currentInterval;
@property (nonatomic, readonly) NSArray *remainingIntervals;
@property (nonatomic, readonly) double timeUntilNextInterval;
@property (getter=isValid, nonatomic, readonly) bool valid;

- (void).cxx_destruct;
- (void)_processTimerEventWithQueue:(id)arg1 block:(id /* block */)arg2;
- (double)currentInterval;
- (id)initWithIntervals:(id)arg1 name:(id)arg2 queue:(id)arg3 block:(id /* block */)arg4;
- (bool)isValid;
- (id)remainingIntervals;
- (double)timeUntilNextInterval;

@end
