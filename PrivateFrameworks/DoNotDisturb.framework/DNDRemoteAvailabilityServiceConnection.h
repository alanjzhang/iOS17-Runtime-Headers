/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

@interface DNDRemoteAvailabilityServiceConnection : NSObject <DNDRemoteAvailabilityServiceServerProtocol> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _queue;
    BSServiceQuality * _queuePriority;
    BSServiceConnection * _queue_connection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_queue_createConnection;
- (void)_queue_invalidateConnection;
- (id)_queue_remoteTarget;
- (void)getIsLocalUserAvailableWithRequestDetails:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;

@end