/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKIDSIDQueryManager : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)checkDeviceSupportForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 capability:(id)arg4 completion:(id /* block */)arg5;
- (void)checkIDSStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 completion:(id /* block */)arg4;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (void)reachableDestinationsForDestination:(id)arg1 service:(id)arg2 completion:(id /* block */)arg3;

@end
