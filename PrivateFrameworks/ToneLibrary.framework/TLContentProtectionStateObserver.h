/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLContentProtectionStateObserver : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSString * _accessQueueLabel;
    NSMutableDictionary * _blocksScheduledForProtectedContentUnlockedEvent;
    long long  _contentProtectionStatus;
    long long  _unlockedSinceBootStatus;
}

+ (id)sharedContentProtectionStateObserver;

- (void).cxx_destruct;
- (void)_assertNotRunningOnAccessQueue;
- (void)_assertRunningOnAccessQueue;
- (void)_cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)arg1;
- (void)_loadContentProtectionStatusIfNeeded;
- (void)_loadUnlockedSinceBootStatusIfNeeded;
- (id)_performBlockAfterProtectedContentUnlocked:(id /* block */)arg1;
- (long long)_queryCurrentUnlockedSinceBootStatus;
- (void)cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)performBlockAfterProtectedContentUnlocked:(id /* block */)arg1;

@end
