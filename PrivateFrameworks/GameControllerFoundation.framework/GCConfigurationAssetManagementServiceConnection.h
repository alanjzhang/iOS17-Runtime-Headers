/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GameControllerFoundation.framework/GameControllerFoundation
 */

@interface GCConfigurationAssetManagementServiceConnection : GCConfigXPCServiceServiceConnection <GCConfigurationAssetManagementService>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)serviceProtocol;

- (id)assets;
- (id)checkForNewAssets:(bool)arg1 forceCatalogRefresh:(bool)arg2 completion:(id /* block */)arg3;
- (id)currentAsset:(bool)arg1;
- (id)lastUpdateDate;

@end
