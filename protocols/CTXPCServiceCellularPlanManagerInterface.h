/* Generated by RuntimeBrowser.
 */

@protocol CTXPCServiceCellularPlanManagerInterface

@required

- (void)activateProximityTransfer:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)addPlanWith:(void *)arg1 appName:(void *)arg2 appType:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: CTCellularPlanProvisioningRequest *, NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (void)addPlanWith:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: CTCellularPlanProvisioningOnDeviceActivationRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (void)bootstrapPlanTransferForEndpoint:(void *)arg1 usingMessageSession:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: unsigned long long, CUMessageSession *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)cancelCellularPlanTransfer:(void *)arg1 fromDevice:(void *)arg2 keepCache:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: CTPlan *, CTDeviceIdentifier *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)convertPhysicalToeSIMWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)deleteTransferPlansForImei:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)deleteZone:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)disableRejectedIccid:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)encryptDataForPlan:(void *)arg1 data:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: CTPlan *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSData *, NSError *, void*
- (void)encryptDataWithCarrierIdentifiers:(void *)arg1 mnc:(void *)arg2 gid1:(void *)arg3 gid2:(void *)arg4 data:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 12: NSString *, NSString *, NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)endPlanTransferForEndPoint:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)getCameraScanInfoForCardData:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CTCellularPlanManagerCameraScanAction *, NSError *, void*
- (void)getCarrierSetupWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CTDisplayPlanList *, NSError *, void*
- (void)getDeviceInfo:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)getPlanTransferCredentials:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)getProximityTransportSession:(void *)arg1 remoteDeviceInfo:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: unsigned long long, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CUMessageSession *, NSError *, void*
- (void)getRemoteDeviceForTransferWithEID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CTRemoteDevice *, NSError *, void*
- (void)getRemoteDevices:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CTRemoteDeviceList *, NSError *, void*
- (void)getRemoteDevicesForTransferWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CTRemoteDeviceList *, NSError *, void*
- (void)getRemotePlanManageAccountInfoFor:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSDictionary *, NSError *, void*
- (void)getTransferPlanListWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CTRemoteDeviceList *, NSError *, void*
- (void)getTransferPlansWithCompletion:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CTRemoteDeviceList *, bool, NSError *, void*
- (void)getTransferType:(void *)arg1 remoteEid:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: CTPlan *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)hiddenTransferPlans:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CTDisplayPlanList *, NSError *, void*
- (void)hideTransferCellularPlan:(void *)arg1 fromDevice:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: CTPlan *, CTDeviceIdentifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)hideTransferPlan:(void *)arg1 fromDevice:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: CTRemotePlanIdentifier *, CTDeviceIdentifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)installPendingPlan:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CTPlan *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)installPendingPlanList:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CTPlanList *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)invalidateCrossPlatformPlanTransfer:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)invalidateProximityTransfer:(void *)arg1 force:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: unsigned long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)isAnyPlanOfTransferCapability:(void *)arg1 availableForThisDeviceWithCompletion:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)isAnyPlanTransferableFromThisDeviceWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)needToLaunchSetUpeSIMWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)plansPendingCrossPlatformTransferWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CTDisplayPlanList *, NSError *, void*
- (void)plansPendingInstallWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CTDisplayPlanList *, NSError *, void*
- (void)prepareCrossPlatformPlanTransfer:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CTCellularPlanTransferCrossPlatformRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)registerSetUpeSIMLaunchedEvent:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)remotePlanSignupInfoFor:(void *)arg1 userConsent:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: CTXPCServiceSubscriptionContext *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSDictionary *, NSError *, void*
- (void)resetProximityTransportExtension:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setUpeSIMLaunched:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)shouldShoweSIMTravelTipWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)submitCarrierSetupUserCancelEvent:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)submitPlanSetupDetails:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CTPlanSetupDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)submitSimSetupUsage:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CTSimSetupUsage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)supportsHydraWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)supportsPlanProvisioning:(void *)arg1 carrierDescriptors:(void *)arg2 smdpUrl:(void *)arg3 iccidPrefix:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: CTXPCServiceSubscriptionContext *, NSArray *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)transferCellularPlan:(void *)arg1 fromDevice:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 11: CTPlan *, CTDeviceIdentifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSString *, NSDictionary *, NSError *, void*
- (void)transferCellularPlans:(void *)arg1 fromDevice:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 11: CTPlanList *, CTDeviceIdentifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSString *, NSDictionary *, NSError *, void*
- (void)transferPlan:(void *)arg1 fromDevice:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 11: CTRemotePlanIdentifier *, CTDeviceIdentifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSString *, NSDictionary *, NSError *, void*
- (void)transferPlans:(void *)arg1 fromDevice:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 11: CTRemotePlanIdentifierList *, CTDeviceIdentifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSString *, NSDictionary *, NSError *, void*
- (void)transferRemotePlan:(void *)arg1 fromDevice:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: CTRemotePlanIdentifier *, CTDeviceIdentifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)unhideTransferPlan:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CTPlan *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)updateSecureIntentData:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)usingBootstrapDataServiceWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)validateProximityTransfer:(void *)arg1 pin:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: unsigned long long, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)websheetInfoForIccid:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 10: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSDictionary *, NSString *, NSError *, void*
- (void)websheetInfoForPlan:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 10: CTPlan *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSDictionary *, NSString *, NSError *, void*

@end
