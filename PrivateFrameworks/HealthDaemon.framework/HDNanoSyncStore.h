/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDNanoSyncStore : NSObject <HDSyncStore, NRDevicePropertyObserver> {
    bool  _active;
    <HDNanoSyncStoreDelegate> * _delegate;
    NSMutableDictionary * _expectedSequenceNumbers;
    IDSDevice * _identityServicesDevice;
    NSMutableArray * _incomingSyncObserverTimers;
    bool  _invalidated;
    bool  _isTinkerPairing;
    NSDate * _lastCompleteIncomingSyncDate;
    NSError * _lastCompleteIncomingSyncError;
    NSDate * _lastIncompleteIncomingSyncDate;
    NSUUID * _lastIncompleteIncomingSyncUUID;
    bool  _master;
    NRDevice * _nanoRegistryDevice;
    bool  _needsSyncOnUnlock;
    NSSet * _obliteratedDatabaseUUIDs;
    NSArray * _orderedSyncEntities;
    HDNanoPairingEntity * _pairingEntity;
    NSMutableDictionary * _pendingRequestContexts;
    HDProfile * _profile;
    int  _protocolVersion;
    NSString * _remoteProductType;
    NSString * _remoteSystemBuildVersion;
    HDNanoSyncRestoreSession * _restoreSession;
    long long  _restoreState;
}

@property (getter=isActive, readonly) bool active;
@property (getter=isAltAccount, readonly) bool altAccount;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HDNanoSyncStoreDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) IDSDevice *device;
@property (readonly, copy) HKNanoSyncPairedDeviceInfo *deviceInfo;
@property (readonly, copy) NSString *deviceName;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSUUID *healthUUID;
@property (getter=isInvalidated, readonly) bool invalidated;
@property (readonly) NSDate *lastInactiveDate;
@property (getter=isMaster, readonly) bool master;
@property (readonly) NSUUID *nanoRegistryUUID;
@property (nonatomic) bool needsSyncOnUnlock;
@property (nonatomic, readonly, copy) NSSet *obliteratedDatabaseUUIDs;
@property (nonatomic, copy) NSUUID *persistentUUID;
@property (readonly) int protocolVersion;
@property (readonly, copy) NSString *remoteProductType;
@property (readonly, copy) NSString *remoteSystemBuildVersion;
@property (getter=isRestoreComplete, nonatomic, readonly) bool restoreComplete;
@property (nonatomic, readonly) HDNanoSyncRestoreSession *restoreSession;
@property (nonatomic, readonly) long long restoreState;
@property (readonly, copy) NSString *sourceBundleIdentifier;
@property (readonly) Class superclass;
@property (readonly) long long syncStoreType;

+ (id)nanoSyncStoreWithProfile:(id)arg1 device:(id)arg2 delegate:(id)arg3 tinkerPaired:(bool)arg4;
+ (id)orderedSyncEntitiesForProfile:(id)arg1 protocolVersion:(int)arg2 companion:(bool)arg3;

- (void).cxx_destruct;
- (void)addIncomingSyncObserverWithTimeout:(double)arg1 timeoutHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)addPendingRequestContext:(id)arg1 forUUID:(id)arg2;
- (id)beginRestoreSessionWithUUID:(id)arg1 timeout:(double)arg2 timeoutHandler:(id /* block */)arg3;
- (bool)canRecieveSyncObjectsForEntityClass:(Class)arg1;
- (void)configureOutgoingResponse:(id)arg1;
- (id)createRequestWithMessageID:(unsigned short)arg1;
- (id)databaseIdentifier;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)device;
- (void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3;
- (id)deviceInfo;
- (id)deviceName;
- (id)diagnosticDescription;
- (void)didReceiveRequestWithChangeSet:(id)arg1;
- (bool)enforceSyncEntityOrdering;
- (long long)expectedSequenceNumberForSyncEntityClass:(Class)arg1;
- (void)finishRestoreSessionWithError:(id)arg1;
- (id)healthUUID;
- (void)invalidate;
- (bool)isActive;
- (bool)isAltAccount;
- (bool)isInvalidated;
- (bool)isMaster;
- (bool)isRestoreComplete;
- (id)lastInactiveDate;
- (id)nanoRegistryUUID;
- (id)nanoSyncStoreForProtocolVersion:(int)arg1;
- (bool)needsSyncOnUnlock;
- (id)obliteratedDatabaseUUIDs;
- (id)orderedSyncEntities;
- (id)pendingRequestContextForUUID:(id)arg1;
- (id)persistentUUID;
- (void)prepareForObliteration;
- (id)profile;
- (int)protocolVersion;
- (id)remoteProductType;
- (id)remoteSystemBuildVersion;
- (void)removeExpiredIncomingSyncObservers;
- (void)removePendingRequestContextForUUID:(id)arg1;
- (bool)resetProvenanceWithError:(id*)arg1;
- (id)restoreSession;
- (long long)restoreState;
- (void)setDelegate:(id)arg1;
- (void)setExpectedSequenceNumber:(long long)arg1 forSyncEntityClass:(Class)arg2;
- (void)setHealthUUID:(id)arg1;
- (void)setNeedsSyncOnUnlock:(bool)arg1;
- (void)setPersistentUUID:(id)arg1;
- (bool)shouldContinueAfterAnchorValidationError:(id)arg1;
- (bool)shouldEnforceSequenceOrdering;
- (id)sourceBundleIdentifier;
- (bool)supportsSpeculativeChangesForSyncEntityClass:(Class)arg1;
- (id)syncEntityDependenciesForSyncEntity:(Class)arg1;
- (long long)syncEpoch;
- (long long)syncProvenance;
- (id)syncStoreDefaultSourceBundleIdentifier;
- (id)syncStoreIdentifier;
- (long long)syncStoreType;
- (bool)validatePairingUUIDsWithIncomingMessage:(id)arg1;

@end
