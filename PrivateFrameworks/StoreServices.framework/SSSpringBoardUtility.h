/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSSpringBoardUtility : NSObject

+ (id)_applicationStateMonitor;
+ (id)_dispatchQueue;
+ (id)_dispatchQueueNotifications;
+ (id)_dispatchQueueSpringBoard;
+ (id)_getApplicationInfoForIdentifier:(id)arg1 key:(id)arg2;
+ (bool)_getProcessID:(int*)arg1 forApplicationIdentifier:(id)arg2;
+ (void)_setApplicationState:(unsigned int)arg1 forClientID:(id)arg2;
+ (id)_stateCache;
+ (bool)launchApplicationWithIdentifier:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (void)wakeAppUsingRequest:(id)arg1;

@end
