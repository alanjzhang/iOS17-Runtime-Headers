/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUDebugTimer : NSObject {
    NSString * _categoryMessage;
    NSString * _eventMessage;
    NSDate * _eventStartTime;
    NSObject<OS_os_log> * _logHandle;
    NSDate * _programStartTime;
    unsigned long long  _signpostID;
}

@property (readonly) NSObject<OS_os_log> *logHandle;
@property (readonly) unsigned long long signpostID;

+ (id)sharedTimer;
+ (id)sharedTimerIfCreated;

- (void).cxx_destruct;
- (void)endEvent:(const char *)arg1;
- (id)init;
- (id)logHandle;
- (unsigned long long)signpostID;
- (void)startWithCategory:(const char *)arg1 message:(const char *)arg2;
- (void)startWithMessage:(const char *)arg1;
- (void)stop;

@end
