/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GameControllerFoundation.framework/GameControllerFoundation
 */

@interface GCConfigXPCService : NSObject <GCConfigXPCServiceInterface, NSObject> {
    _GCConfigurationDataManager * _configurationManager;
    _GCGenericDeviceDB * _genericDeviceDB;
    NSObject<OS_dispatch_workloop> * _workloop;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)connectToAssetManagementServiceWithClient:(id)arg1 reply:(id /* block */)arg2;
- (void)connectToGenericDeviceDBServiceWithClient:(id)arg1 reply:(id /* block */)arg2;
- (id)init;
- (id)serviceFor:(id)arg1 client:(id)arg2;

@end
