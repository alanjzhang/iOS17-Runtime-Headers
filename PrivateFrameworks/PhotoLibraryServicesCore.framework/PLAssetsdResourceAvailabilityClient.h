/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PhotoLibraryServicesCore.framework/PhotoLibraryServicesCore
 */

@interface PLAssetsdResourceAvailabilityClient : PLAssetsdBaseClient

- (id)sendMakeResourceAvailableRequest:(id)arg1 reply:(id /* block */)arg2;
- (void)sendMakeResourceUnavailableRequest:(id)arg1;
- (id)sendResourceRepairRequest:(id)arg1 errorCodes:(id)arg2 reply:(id /* block */)arg3;
- (id)sendResourceRepairRequestForAsset:(id)arg1 errorCodes:(id)arg2 reply:(id /* block */)arg3;
- (id)sendVideoRequest:(id)arg1 reply:(id /* block */)arg2;
- (void)setSharedMemoryForCacheMetricsCollector:(id)arg1;

@end
