/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRBaseClusterBasicInformation : MTRCluster {
    MTRBaseDevice * _device;
    unsigned short  _endpoint;
}

@property (nonatomic, readonly) MTRBaseDevice *device;
@property (nonatomic, readonly) unsigned short endpoint;

// MTRBaseClusterBasicInformation (null)

+ (void)readAttributeAcceptedCommandListWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeAttributeListWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeCapabilityMinimaWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeClusterRevisionWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeDataModelRevisionWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeFeatureMapWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeGeneratedCommandListWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeHardwareVersionStringWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeHardwareVersionWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeLocalConfigDisabledWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeLocationWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeManufacturingDateWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeNodeLabelWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributePartNumberWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeProductAppearanceWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeProductIDWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeProductLabelWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeProductNameWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeProductURLWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeReachableWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeSerialNumberWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeSoftwareVersionStringWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeSoftwareVersionWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeUniqueIDWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeVendorIDWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeVendorNameWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;

- (void).cxx_destruct;
- (id)device;
- (unsigned short)endpoint;
- (id)initWithDevice:(id)arg1 endpointID:(id)arg2 queue:(id)arg3;
- (void)mfgSpecificPingWithCompletion:(id /* block */)arg1;
- (void)mfgSpecificPingWithParams:(id)arg1 completion:(id /* block */)arg2;
- (void)readAttributeAcceptedCommandListWithCompletion:(id /* block */)arg1;
- (void)readAttributeAttributeListWithCompletion:(id /* block */)arg1;
- (void)readAttributeCapabilityMinimaWithCompletion:(id /* block */)arg1;
- (void)readAttributeClusterRevisionWithCompletion:(id /* block */)arg1;
- (void)readAttributeDataModelRevisionWithCompletion:(id /* block */)arg1;
- (void)readAttributeFeatureMapWithCompletion:(id /* block */)arg1;
- (void)readAttributeGeneratedCommandListWithCompletion:(id /* block */)arg1;
- (void)readAttributeHardwareVersionStringWithCompletion:(id /* block */)arg1;
- (void)readAttributeHardwareVersionWithCompletion:(id /* block */)arg1;
- (void)readAttributeLocalConfigDisabledWithCompletion:(id /* block */)arg1;
- (void)readAttributeLocationWithCompletion:(id /* block */)arg1;
- (void)readAttributeManufacturingDateWithCompletion:(id /* block */)arg1;
- (void)readAttributeNodeLabelWithCompletion:(id /* block */)arg1;
- (void)readAttributePartNumberWithCompletion:(id /* block */)arg1;
- (void)readAttributeProductAppearanceWithCompletion:(id /* block */)arg1;
- (void)readAttributeProductIDWithCompletion:(id /* block */)arg1;
- (void)readAttributeProductLabelWithCompletion:(id /* block */)arg1;
- (void)readAttributeProductNameWithCompletion:(id /* block */)arg1;
- (void)readAttributeProductURLWithCompletion:(id /* block */)arg1;
- (void)readAttributeReachableWithCompletion:(id /* block */)arg1;
- (void)readAttributeSerialNumberWithCompletion:(id /* block */)arg1;
- (void)readAttributeSoftwareVersionStringWithCompletion:(id /* block */)arg1;
- (void)readAttributeSoftwareVersionWithCompletion:(id /* block */)arg1;
- (void)readAttributeUniqueIDWithCompletion:(id /* block */)arg1;
- (void)readAttributeVendorIDWithCompletion:(id /* block */)arg1;
- (void)readAttributeVendorNameWithCompletion:(id /* block */)arg1;
- (void)subscribeAttributeAcceptedCommandListWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeAttributeListWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeCapabilityMinimaWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeClusterRevisionWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeDataModelRevisionWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeFeatureMapWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeGeneratedCommandListWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeHardwareVersionStringWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeHardwareVersionWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeLocalConfigDisabledWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeLocationWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeManufacturingDateWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeNodeLabelWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributePartNumberWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeProductAppearanceWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeProductIDWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeProductLabelWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeProductNameWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeProductURLWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeReachableWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeSerialNumberWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeSoftwareVersionStringWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeSoftwareVersionWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeUniqueIDWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeVendorIDWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeVendorNameWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)writeAttributeLocalConfigDisabledWithValue:(id)arg1 completion:(id /* block */)arg2;
- (void)writeAttributeLocalConfigDisabledWithValue:(id)arg1 params:(id)arg2 completion:(id /* block */)arg3;
- (void)writeAttributeLocationWithValue:(id)arg1 completion:(id /* block */)arg2;
- (void)writeAttributeLocationWithValue:(id)arg1 params:(id)arg2 completion:(id /* block */)arg3;
- (void)writeAttributeNodeLabelWithValue:(id)arg1 completion:(id /* block */)arg2;
- (void)writeAttributeNodeLabelWithValue:(id)arg1 params:(id)arg2 completion:(id /* block */)arg3;

@end
