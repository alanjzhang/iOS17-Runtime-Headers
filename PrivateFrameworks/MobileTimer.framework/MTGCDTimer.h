/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTGCDTimer : NSObject {
    MTPowerAssertion * _powerAssertion;
    NSObject<OS_dispatch_source> * _timer;
}

- (void).cxx_destruct;
- (void)cancelTimer;
- (void)dealloc;
- (void)startTimer:(double)arg1 block:(id /* block */)arg2;

@end
