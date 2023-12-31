/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreDuetSync.framework/CoreDuetSync
 */

@interface _DKSync3Coordinator : _DKSync2Coordinator <_CDRemoteUserContextServer, _DKSyncRemoteContextStorageDelegate> {
    <_DKSyncRemoteContextStorage> * _transportMDCSRapport;
    unsigned long long  _watchingDeviceTypes;
    NSObject<OS_os_transaction> * _watchingDevicesTransaction;
}

@property (nonatomic, readonly) NSUUID *deviceUUID;
@property (nonatomic, retain) <_DKSyncRemoteContextStorage> *transportMDCSRapport;

- (void).cxx_destruct;
- (void)_syncDisabledToggle;
- (void)_syncEnabledToggle;
- (void)dealloc;
- (void)handleContextChangedNotification:(id)arg1;
- (void)handleStatusChangeForPeer:(id)arg1 previousTransports:(long long)arg2;
- (id)initWithContext:(id)arg1;
- (id)multiDeviceContextStoreDevices;
- (void)setTransportMDCSRapport:(id)arg1;
- (void)setupStorage;
- (void)start;
- (id)transportMDCSRapport;

// _DKSync3Coordinator (_CDRemoteUserContextServer)

- (void)_fetchPropertiesOfRemoteKeyPaths:(id)arg1 handler:(id /* block */)arg2;
- (void)_requestActivateDevicesWithHandler:(id /* block */)arg1;
- (id)archivedObjectsForKeyPaths:(id)arg1;
- (void)fetchPropertiesOfRemoteKeyPaths:(id)arg1 handler:(id /* block */)arg2;
- (id)keyPathsByDeviceIDFromRemoteKeyPaths:(id)arg1;
- (id)peersForContextStoreDeviceIDs:(id)arg1;
- (id)registrationIdentifierForPeer:(id)arg1 remoteRegistrationIdentifier:(id)arg2;
- (void)requestActivateDevicesWithHandler:(id /* block */)arg1;
- (void)sendContextValuesToPeer:(id)arg1 registrationIdentifier:(id)arg2 keyPaths:(id)arg3;
- (void)setArchivedObjects:(id)arg1 peer:(id)arg2;
- (id)sourceDeviceUUID;
- (bool)subscribeToContextValueChangeNotificationsWithRegistration:(id)arg1 deviceIDs:(id)arg2 error:(id*)arg3;
- (void)subscribeToContextValueChangeNotificationsWithRegistration:(id)arg1 deviceIDs:(id)arg2 handler:(id /* block */)arg3;
- (bool)subscribeToDeviceStatusChangeNotificationsForDeviceTypes:(unsigned long long)arg1 error:(id*)arg2;
- (void)subscribeToDeviceStatusChangeNotificationsForDeviceTypes:(unsigned long long)arg1 handler:(id /* block */)arg2;
- (bool)unsubscribeFromContextValueChangeNotificationsWithRegistration:(id)arg1 deviceIDs:(id)arg2 error:(id*)arg3;
- (void)unsubscribeFromContextValueChangeNotificationsWithRegistration:(id)arg1 deviceIDs:(id)arg2 handler:(id /* block */)arg3;

// _DKSync3Coordinator (_DKSyncRemoteContextStorageDelegate)

- (id)remoteContextStorage:(id)arg1 archivedObjectsForKeyPaths:(id)arg2;
- (bool)remoteContextStorage:(id)arg1 hasKnowledgeOfKeyPath:(id)arg2;
- (void)remoteContextStorage:(id)arg1 registrationIdentifier:(id)arg2 setArchivedObjects:(id)arg3 peer:(id)arg4;
- (void)remoteContextStorage:(id)arg1 subscribeToChangesWithPeer:(id)arg2 registrationIdentifier:(id)arg3 predicate:(id)arg4;
- (void)remoteContextStorage:(id)arg1 unsubscribeFromChangesWithPeer:(id)arg2 registrationIdentifier:(id)arg3 predicate:(id)arg4;

@end
