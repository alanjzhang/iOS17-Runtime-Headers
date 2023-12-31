/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMActivityAlarmProxy : NSObject {
    id  _internal;
    bool  fAlarmAvailable;
    int  fAlarmCounter;
    NSMutableDictionary * fAlarms;
    void * fLocationdConnection;
    NSObject<OS_dispatch_queue> * fReplyQueue;
}

+ (id)sharedInstance;

- (bool)activityAlarmAvailable;
- (void)dealloc;
- (id)init;
- (void)listenForActivityAlarm:(id)arg1;
- (void)stopListeningForActivityAlarm:(id)arg1;

@end
