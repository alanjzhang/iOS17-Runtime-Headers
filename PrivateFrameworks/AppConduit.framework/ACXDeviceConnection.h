/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppConduit.framework/AppConduit
 */

@interface ACXDeviceConnection : NSObject <ACXDeviceConnectionDelegateProtocol> {
    <ACXDeviceConnectionDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _internalQueue;
    bool  _monitoringForDeviceChanges;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSObject<OS_dispatch_source> * _observerReEstablishTimer;
    NSHashTable * _observers;
    bool  _observersEnabled;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ACXDeviceConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic) bool monitoringForDeviceChanges;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *observerQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *observerReEstablishTimer;
@property (nonatomic, readonly) NSHashTable *observers;
@property (nonatomic) bool observersEnabled;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (void)_removeFilesAtURL:(id)arg1;
+ (void)disableTestMode;
+ (void)enableTestMode;
+ (void)performUninstallationCleanup;
+ (id)sharedDeviceConnection;

- (void).cxx_destruct;
- (void)_deviceDidBecomeActiveNotification:(id)arg1;
- (void)_deviceDidPairNotification:(id)arg1;
- (void)_fetchLocallyAvailableApplicationWithBundleID:(id)arg1 forDeviceWithPairingID:(id)arg2 options:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)_invalidateXPCConnection;
- (id)_locallyAvailableApplicationWithBundleID:(id)arg1 forDeviceWithPairingID:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
- (void)_onQueue_beginMonitoringNanoRegistryDeviceState;
- (bool)_onQueue_createXPCConnectionIfNecessary:(id*)arg1;
- (bool)_onQueue_enableObserversIfNeededForAValidXPCConnection;
- (void)_onQueue_endMonitoringNanoRegistryDeviceState;
- (void)_onQueue_reEstablishObserverConnectionIfNeeded;
- (id)_proxyWithErrorHandler:(id /* block */)arg1;
- (id)_synchronousProxyWithErrorHandler:(id /* block */)arg1;
- (id)_validateAndExtractProfiles:(id)arg1 error:(id*)arg2;
- (bool)acknowledgeTestFlightInstallBegunForApp:(id)arg1 onDeviceWithPairingID:(id)arg2 error:(id*)arg3;
- (void)activeComplicationsForPairedDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)activeComplicationsWithErrorCompletion:(id /* block */)arg1;
- (void)addObserver:(id)arg1;
- (void)applicationDatabaseResyncedForDeviceWithPairingID:(id)arg1;
- (void)applicationIsInstalledOnAnyPairedDeviceWithBundleID:(id)arg1 completion:(id /* block */)arg2;
- (void)applicationIsInstalledOnAnyPairedDeviceWithCompanionBundleID:(id)arg1 completion:(id /* block */)arg2;
- (void)applicationIsInstalledOnDeviceWithPairingID:(id)arg1 withBundleID:(id)arg2 completion:(id /* block */)arg3;
- (void)applicationIsInstalledOnDeviceWithPairingID:(id)arg1 withCompanionBundleID:(id)arg2 completion:(id /* block */)arg3;
- (void)applicationIsInstalledOnPairedDevice:(id)arg1 withBundleID:(id)arg2 completion:(id /* block */)arg3;
- (void)applicationIsInstalledOnPairedDevice:(id)arg1 withCompanionBundleID:(id)arg2 completion:(id /* block */)arg3;
- (id)applicationOnDeviceWithPairingID:(id)arg1 withBundleID:(id)arg2 error:(id*)arg3;
- (id)applicationOnPairedDevice:(id)arg1 withBundleID:(id)arg2 error:(id*)arg3;
- (void)applicationsInstalled:(id)arg1 onDeviceWithPairingID:(id)arg2;
- (void)applicationsUninstalled:(id)arg1 onDeviceWithPairingID:(id)arg2;
- (void)applicationsUpdated:(id)arg1 onDeviceWithPairingID:(id)arg2;
- (void)cancelPendingInstallations;
- (void)cancelUpdatePendingForCompanionApp:(id)arg1 completion:(id /* block */)arg2;
- (bool)cancelUpdatePendingForCompanionApp:(id)arg1 error:(id*)arg2;
- (id)copyLocalizedValuesFromAllDevicesForInfoPlistKeys:(id)arg1 forAppWithBundleID:(id)arg2 fetchingFirstMatchingLocalizationInList:(id)arg3 error:(id*)arg4;
- (id)copyRemoteDuplicatedClassInfoWithError:(id*)arg1;
- (id)delegate;
- (void)enumerateInstallableSystemAppsOnDeviceWithPairingID:(id)arg1 withBlock:(id /* block */)arg2;
- (void)enumerateInstallableSystemAppsOnPairedDevice:(id)arg1 withBlock:(id /* block */)arg2;
- (void)enumerateInstalledApplicationsOnDeviceWithPairingID:(id)arg1 withBlock:(id /* block */)arg2;
- (void)enumerateInstalledApplicationsOnPairedDevice:(id)arg1 withBlock:(id /* block */)arg2;
- (void)enumerateLocallyAvailableApplicationsForDeviceWithPairingID:(id)arg1 options:(unsigned long long)arg2 withBlock:(id /* block */)arg3;
- (void)enumerateLocallyAvailableApplicationsForPairedDevice:(id)arg1 options:(unsigned long long)arg2 withBlock:(id /* block */)arg3;
- (bool)fetchApplicationDatabaseSyncInformationForDeviceWithPairingID:(id)arg1 returningDatabaseUUID:(id*)arg2 lastSequenceNumber:(unsigned long long*)arg3 error:(id*)arg4;
- (bool)fetchApplicationDatabaseSyncInformationForPairedDevice:(id)arg1 returningDatabaseUUID:(id*)arg2 lastSequenceNumber:(unsigned long long*)arg3 error:(id*)arg4;
- (void)fetchApplicationOnDeviceWithPairingID:(id)arg1 withBundleID:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchApplicationOnPairedDevice:(id)arg1 withBundleID:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchApplicationWithContainingApplicationBundleID:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchInfoForApplicationWithBundleID:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchInfoForApplicationWithBundleID:(id)arg1 forPairedDevice:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchInstallableSystemAppWithBundleID:(id)arg1 onDeviceWithPairingID:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchInstallableSystemAppWithBundleID:(id)arg1 onPairedDevice:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchInstalledApplicationsForPairedDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchInstalledApplicationsWithErrorCompletion:(id /* block */)arg1;
- (void)fetchInstalledCompatibleApplicationsWithDevice:(id)arg1 withErrorCompletion:(id /* block */)arg2;
- (void)fetchInstalledComplicationsForPairedDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchInstalledComplicationsWithErrorCompletion:(id /* block */)arg1;
- (void)fetchLocallyAvailableApplicationWithBundleID:(id)arg1 forDeviceWithPairingID:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchLocallyAvailableApplicationWithBundleID:(id)arg1 forPairedDevice:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchLocallyAvailableApplicationWithContainingApplicationBundleID:(id)arg1 forDeviceWithPairingID:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchLocallyAvailableApplicationWithContainingApplicationBundleID:(id)arg1 forPairedDevice:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchProvisioningProfilesForApplicationWithBundleID:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchProvisioningProfilesForApplicationWithBundleID:(id)arg1 forPairedDevice:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchProvisioningProfilesForPairedDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchProvisioningProfilesWithCompletion:(id /* block */)arg1;
- (void)fetchWatchAppBundleIDForCompanionAppBundleID:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchWatchAppBundleURLWithinCompanionAppWithWatchAppIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (bool)getAlwaysInstall:(bool*)arg1 forPairedDevice:(id)arg2 error:(id*)arg3;
- (void)getAlwaysInstallForPairedDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)getAlwaysInstallWithCompletion:(id /* block */)arg1;
- (bool)getApplicationIsInstalled:(bool*)arg1 onAnyPairedDeviceWithBundleID:(id)arg2 error:(id*)arg3;
- (bool)getApplicationIsInstalled:(bool*)arg1 onAnyPairedDeviceWithCompanionBundleID:(id)arg2 error:(id*)arg3;
- (bool)getApplicationIsInstalled:(bool*)arg1 onDeviceWithPairingID:(id)arg2 withCompanionBundleID:(id)arg3 error:(id*)arg4;
- (bool)getApplicationIsInstalled:(bool*)arg1 onPairedDevice:(id)arg2 withCompanionBundleID:(id)arg3 error:(id*)arg4;
- (bool)getApplicationIsInstalled:(bool*)arg1 withBundleID:(id)arg2 onDeviceWithPairingID:(id)arg3 error:(id*)arg4;
- (bool)getApplicationIsInstalled:(bool*)arg1 withBundleID:(id)arg2 onPairedDevice:(id)arg3 error:(id*)arg4;
- (bool)getApplicationWithBundleID:(id)arg1 willInstallAfterPairing:(bool*)arg2 onDevice:(id)arg3 error:(id*)arg4;
- (void)getApplicationWithBundleID:(id)arg1 willInstallAfterPairingOnDevice:(id)arg2 completion:(id /* block */)arg3;
- (bool)getSystemAppInstallability:(bool*)arg1 onDeviceWithPairingID:(id)arg2 withBundleID:(id)arg3 error:(id*)arg4;
- (bool)getSystemAppInstallability:(bool*)arg1 onPairedDevice:(id)arg2 withBundleID:(id)arg3 error:(id*)arg4;
- (id)init;
- (void)installAllApplications;
- (void)installApplication:(id)arg1 completionWithError:(id /* block */)arg2;
- (void)installApplication:(id)arg1 onPairedDevice:(id)arg2 completion:(id /* block */)arg3;
- (bool)installApplication:(id)arg1 onPairedDevice:(id)arg2 installationStatus:(long long*)arg3 error:(id*)arg4;
- (void)installApplication:(id)arg1 withProvisioningProfiles:(id)arg2 completionWithError:(id /* block */)arg3;
- (void)installApplication:(id)arg1 withProvisioningProfiles:(id)arg2 onPairedDevice:(id)arg3 completion:(id /* block */)arg4;
- (bool)installApplication:(id)arg1 withProvisioningProfiles:(id)arg2 onPairedDevice:(id)arg3 installationStatus:(long long*)arg4 error:(id*)arg5;
- (void)installApplicationAtURL:(id)arg1 onDeviceWithPairingID:(id)arg2 installOptions:(id)arg3 size:(long long)arg4 completion:(id /* block */)arg5;
- (bool)installApplicationAtURL:(id)arg1 onDeviceWithPairingID:(id)arg2 installOptions:(id)arg3 size:(long long)arg4 installationStatus:(long long*)arg5 error:(id*)arg6;
- (void)installApplicationAtURL:(id)arg1 onPairedDevice:(id)arg2 installOptions:(id)arg3 size:(long long)arg4 completion:(id /* block */)arg5;
- (bool)installApplicationAtURL:(id)arg1 onPairedDevice:(id)arg2 installOptions:(id)arg3 size:(long long)arg4 installationStatus:(long long*)arg5 error:(id*)arg6;
- (void)installProvisioningProfileWithURL:(id)arg1 completion:(id /* block */)arg2;
- (void)installProvisioningProfileWithURL:(id)arg1 onPairedDevice:(id)arg2 completion:(id /* block */)arg3;
- (bool)installProvisioningProfileWithURL:(id)arg1 onPairedDevice:(id)arg2 error:(id*)arg3;
- (bool)installRequestFailedForApp:(id)arg1 onDeviceWithPairingID:(id)arg2 failureReason:(id)arg3 wasUserInitiated:(bool)arg4 error:(id*)arg5;
- (id)installableSystemAppWithBundleID:(id)arg1 onDeviceWithPairingID:(id)arg2 error:(id*)arg3;
- (id)installableSystemAppWithBundleID:(id)arg1 onPairedDevice:(id)arg2 error:(id*)arg3;
- (id)internalQueue;
- (bool)killDaemonForTestingWithError:(id*)arg1;
- (id)locallyAvailableApplicationWithBundleID:(id)arg1 forDeviceWithPairingID:(id)arg2 error:(id*)arg3;
- (id)locallyAvailableApplicationWithBundleID:(id)arg1 forPairedDevice:(id)arg2 error:(id*)arg3;
- (id)locallyAvailableApplicationWithContainingApplicationBundleID:(id)arg1 forDeviceWithPairingID:(id)arg2 error:(id*)arg3;
- (id)locallyAvailableApplicationWithContainingApplicationBundleID:(id)arg1 forPairedDevice:(id)arg2 error:(id*)arg3;
- (bool)monitoringForDeviceChanges;
- (id)observerQueue;
- (id)observerReEstablishTimer;
- (void)observerRegistrationSuccessful;
- (id)observers;
- (bool)observersEnabled;
- (id)provisioningProfilesForApplicationWithBundleID:(id)arg1 forPairedDevice:(id)arg2 error:(id*)arg3;
- (id)provisioningProfilesForPairedDevice:(id)arg1 error:(id*)arg2;
- (void)removeApplication:(id)arg1 completion:(id /* block */)arg2;
- (void)removeApplication:(id)arg1 fromPairedDevice:(id)arg2 completion:(id /* block */)arg3;
- (void)removeApplication:(id)arg1 fromPairedDevice:(id)arg2 completionWithError:(id /* block */)arg3;
- (bool)removeApplication:(id)arg1 fromPairedDevice:(id)arg2 removalStatus:(long long*)arg3 error:(id*)arg4;
- (void)removeObserver:(id)arg1;
- (void)removeProvisioningProfileWithID:(id)arg1 completion:(id /* block */)arg2;
- (void)removeProvisioningProfileWithID:(id)arg1 fromPairedDevice:(id)arg2 completion:(id /* block */)arg3;
- (bool)removeProvisioningProfileWithID:(id)arg1 fromPairedDevice:(id)arg2 error:(id*)arg3;
- (void)retryPendingAppInstallationsForPairedDevice:(id)arg1;
- (void)setAllExistingAppsShouldBeInstalled:(bool)arg1 forNewDevice:(id)arg2;
- (void)setAlwaysInstall:(id)arg1;
- (void)setAlwaysInstall:(id)arg1 forDevice:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setMonitoringForDeviceChanges:(bool)arg1;
- (void)setObserverReEstablishTimer:(id)arg1;
- (void)setObserversEnabled:(bool)arg1;
- (void)setUpdatePendingForCompanionApp:(id)arg1 completion:(id /* block */)arg2;
- (bool)setUpdatePendingForCompanionApp:(id)arg1 error:(id*)arg2;
- (void)setXpcConnection:(id)arg1;
- (void)systemAppIsInstallableOnDeviceWithPairingID:(id)arg1 withBundleID:(id)arg2 completion:(id /* block */)arg3;
- (void)systemAppIsInstallableOnPairedDevice:(id)arg1 withBundleID:(id)arg2 completion:(id /* block */)arg3;
- (void)updateInstallProgressForApplication:(id)arg1 progress:(double)arg2 phase:(unsigned long long)arg3;
- (void)updatePreferencesForApplicationWithIdentifier:(id)arg1 preferences:(id)arg2 completion:(id /* block */)arg3;
- (void)updatePreferencesForApplicationWithIdentifier:(id)arg1 preferences:(id)arg2 forPairedDevice:(id)arg3 completion:(id /* block */)arg4;
- (void)updatePreferencesForApplicationWithIdentifier:(id)arg1 preferences:(id)arg2 writingToPreferencesLocation:(unsigned long long)arg3 forPairedDevice:(id)arg4 options:(unsigned long long)arg5 completion:(id /* block */)arg6;
- (bool)updatePreferencesForApplicationWithIdentifier:(id)arg1 preferences:(id)arg2 writingToPreferencesLocation:(unsigned long long)arg3 forPairedDevice:(id)arg4 options:(unsigned long long)arg5 error:(id*)arg6;
- (void)updatedInstallStateForApplicationsWithInfo:(id)arg1;
- (id)watchAppBundleIDForCompanionAppBundleID:(id)arg1 error:(id*)arg2;
- (id)watchAppBundleURLWithinCompanionAppWithWatchAppIdentifier:(id)arg1 error:(id*)arg2;
- (id)xpcConnection;

@end
