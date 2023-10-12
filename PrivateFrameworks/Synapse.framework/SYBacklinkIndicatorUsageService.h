/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Synapse.framework/Synapse
 */

@interface SYBacklinkIndicatorUsageService : NSObject <NSXPCListenerDelegate, SYBacklinkIndicatorUsageProtocol> {
    NSXPCListener * _listener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCListener *listener;
@property (readonly) Class superclass;

+ (void)beginObservingUsage;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)dealloc;
- (oneway void)didActivateBacklinkItemWithIdentifier:(id)arg1;
- (oneway void)didDismissBacklinkItemWithIdentifier:(id)arg1;
- (id)init;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setListener:(id)arg1;

// SYBacklinkIndicatorUsageService (Testing)

+ (id)_listenerEndpoint;
+ (id)_testingDelegate;
+ (void)set_testingDelegate:(id)arg1;

@end
