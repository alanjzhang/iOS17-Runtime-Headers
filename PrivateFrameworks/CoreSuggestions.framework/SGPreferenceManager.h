/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGPreferenceManager : NSObject {
    bool  _isQueueSuspended;
    NSObject<OS_dispatch_queue> * _settingsUpdateQueue;
    NSUserDefaults * _suggestionsDefaults;
}

+ (id)defaultManager;

- (void).cxx_destruct;
- (void)_resumeNotificationQueue;
- (void)_suspendNotificationQueue;
- (id)init;
- (int)registerBlock:(id /* block */)arg1;

@end
