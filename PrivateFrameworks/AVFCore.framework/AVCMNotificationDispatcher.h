/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVCMNotificationDispatcher : NSObject {
    struct opaqueCMNotificationCenter { } * _cmNotificationCenter;
    NSObject<OS_dispatch_queue> * _listenerObjectsQueue;
    NSMutableDictionary * _observersForListenerKeys;
}

@property (nonatomic, readonly) struct opaqueCMNotificationCenter { }*CMNotificationCenter;

+ (void)initialize;
+ (id)notificationDispatcherForCMNotificationCenter:(struct opaqueCMNotificationCenter { }*)arg1;

- (struct opaqueCMNotificationCenter { }*)CMNotificationCenter;
- (id)_copyAndRemoveObserverForWeakReferenceToListener:(id)arg1 callback:(int (*)arg2 name:(struct __CFString { }*)arg3 object:(void*)arg4;
- (void)addListenerWithWeakReference:(id)arg1 callback:(int (*)arg2 name:(struct __CFString { }*)arg3 object:(void*)arg4 flags:(unsigned int)arg5;
- (void)dealloc;
- (id)init;
- (id)initWithCMNotificationCenter:(struct opaqueCMNotificationCenter { }*)arg1;
- (void)removeListenerWithWeakReference:(id)arg1 callback:(int (*)arg2 name:(struct __CFString { }*)arg3 object:(void*)arg4;

@end
