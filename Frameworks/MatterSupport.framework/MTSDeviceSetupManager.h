/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/MatterSupport.framework/MatterSupport
 */

@interface MTSDeviceSetupManager : NSObject <HMFLogging> {
    MTSXPCServerProxy * _serverProxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) MTSXPCServerProxy *serverProxy;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithServerProxy:(id)arg1;
- (void)performDeviceSetupUsingRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)serverProxy;

@end
