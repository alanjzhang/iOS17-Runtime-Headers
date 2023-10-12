/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLBackgroundWatchdog : NSObject {
    NSObject<OS_dispatch_source> * _timer;
}

@property (retain) NSObject<OS_dispatch_source> *timer;

+ (id)watchdogWithTimeout:(double)arg1 label:(id)arg2 queue:(id)arg3;
+ (id)watchdogWithTimeout:(double)arg1 queue:(id)arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;
- (void)setTimer:(id)arg1;
- (id)timer;

@end
