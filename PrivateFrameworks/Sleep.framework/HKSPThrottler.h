/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Sleep.framework/Sleep
 */

@interface HKSPThrottler : NSObject {
    HKSPLimitingScheduler * _backingScheduler;
    HKSPTask * _task;
}

- (void).cxx_destruct;
- (void)execute;
- (id)initWithInterval:(double)arg1 executeBlock:(id /* block */)arg2;
- (id)initWithInterval:(double)arg1 executeBlock:(id /* block */)arg2 scheduler:(id)arg3;
- (id)initWithInterval:(double)arg1 executeBlock:(id /* block */)arg2 scheduler:(id)arg3 mutexGenerator:(id /* block */)arg4;

@end
