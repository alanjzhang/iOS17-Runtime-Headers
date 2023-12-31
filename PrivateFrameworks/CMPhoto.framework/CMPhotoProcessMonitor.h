/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CMPhoto.framework/CMPhoto
 */

@interface CMPhotoProcessMonitor : NSObject

+ (id)getShared;
+ (bool)isForegroundApp;
+ (bool)isManagedByRunningBoard;

- (void)_takeOSTransactionForContext:(void*)arg1;
- (void)_takeRBSAssertionForContext:(void*)arg1 until:(unsigned long long)arg2 maxLength:(unsigned long long)arg3;
- (void)dealloc;
- (id)init;
- (int)registerBackgroundNotificationHandlerForContext:(void*)arg1 handler:(id /* block */)arg2;
- (int)releaseAssertionForContext:(void*)arg1;
- (int)takeAssertionUntilTime:(unsigned long long)arg1 forContext:(void*)arg2;
- (int)unregisterBackgroundNotificationForContext:(void*)arg1;
- (void)waitForPendingNotifications;

@end
