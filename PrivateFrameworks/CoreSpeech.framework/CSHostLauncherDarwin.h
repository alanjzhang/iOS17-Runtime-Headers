/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSHostLauncherDarwin : NSObject {
    struct __IOHIDUserDevice { } * _device;
    NSObject<OS_dispatch_queue> * _hidCallbackQueue;
}

+ (id)propertyDictForDarwin;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (bool)wakeHostForVoiceTrigger;

@end