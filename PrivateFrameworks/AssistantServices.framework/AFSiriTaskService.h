/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSiriTaskService : NSObject <NSXPCListenerDelegate> {
    AFSiriTaskDeliveryHandler * _deliveryHandler;
    NSXPCListener * _listener;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_machServiceNameForAppTaskServiceWithBundleIdentifier:(id)arg1;
+ (id)appTaskService;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithMachServiceName:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)resume;
- (void)setDelegate:(id)arg1;

@end
