/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/IOSurface.framework/IOSurface
 */

@interface IOSurfaceSharedEventListener : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    struct IONotificationPort { } * _notificationPort;
}

- (void)_notifyEventPort:(unsigned int)arg1 event:(id)arg2 atValue:(unsigned long long)arg3 block:(id /* block */)arg4;
- (void)dealloc;
- (id)init;
- (id)initWithDispatchQueue:(id)arg1;

@end