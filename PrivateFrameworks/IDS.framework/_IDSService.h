/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface _IDSService : NSObject <IDSAccountControllerDelegate, IDSConnectionDelegatePrivate, IDSDaemonListenerProtocol, IDSGroupContextControllerDelegate> {
    IDSAccountController * _accountController;
    IDSQuickSwitchAcknowledgementTracker * _acknowledgementTracker;
    NSDictionary * _cachedPseudonymURIMap;
    bool  _clientIsSandboxed;
    NSSet * _commands;
    NSMutableDictionary * _completionBlocksByRequestID;
    id  _delegateContext;
    NSMapTable * _delegateToInfo;
    bool  _everHadDelegate;
    IDSGroupContextController * _groupContextController;
    id  _idsSimulatorSupportDataHandlerToken;
    NSMutableSet * _lastIsActiveSet;
    NSMutableArray * _linkedDevices;
    bool  _linkedDevicesLoaded;
    unsigned int  _listenerCaps;
    bool  _manuallyAckMessages;
    id /* block */  _pendingRegisteredIdentitiesBlock;
    bool  _pretendingToBeFull;
    NSMutableDictionary * _protobufSelectors;
    CUTDeferredTaskQueue * _pseudonymUpdateTaskQueue;
    IDSServiceProperties * _serviceProperties;
    NSMutableDictionary * _subServices;
    NSMutableDictionary * _uniqueIDToConnection;
    NSMutableDictionary * _uniqueIDToProgress;
    bool  _wantsPseudonymUpdates;
}

@property (nonatomic, readonly) NSArray *URIs;
@property (nonatomic, readonly, copy) NSSet *accounts;
@property (nonatomic, retain) NSDictionary *cachedPseudonymURIMap;
@property (nonatomic, readonly) bool canSend;
@property (nonatomic, retain) NSMutableDictionary *completionBlocksByRequestID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *devices;
@property (nonatomic, readonly, retain) IDSGroupContextController *groupContextController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) IDSAccount *iCloudAccount;
@property (nonatomic, readonly, copy) NSSet *internalAccounts;
@property (nonatomic) bool manuallyAckMessages;
@property (nonatomic, readonly) long long maxEffectivePayloadSize;
@property (getter=isPretendingToBeFull, nonatomic) bool pretendingToBeFull;
@property (nonatomic, readonly) NSDictionary *pseudonymURIMap;
@property (nonatomic, retain) CUTDeferredTaskQueue *pseudonymUpdateTaskQueue;
@property (nonatomic, readonly, copy) NSString *serviceDomain;
@property (nonatomic, readonly, copy) IDSServiceProperties *serviceProperties;
@property (readonly) Class superclass;
@property (nonatomic) bool wantsPseudonymUpdates;

+ (id)deviceForFromID:(id)arg1 fromDevices:(id)arg2;
+ (void)serviceWithIdentifier:(id)arg1 commands:(id)arg2 manuallyAckMessages:(bool)arg3 delegateContext:(id)arg4 completion:(id /* block */)arg5;

- (void).cxx_destruct;
- (void)OTRTestCallback:(id)arg1 time:(double)arg2 error:(id)arg3;
- (id)URIs;
- (id)_accountWithURI:(id)arg1 orPseudonym:(id)arg2;
- (id /* block */)_acknowledgementBlockWithDelegateIdentifier:(id)arg1;
- (id)_activeDeviceForUniqueID:(id)arg1;
- (void)_callDelegatesForDevicesChanged;
- (void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(id /* block */)arg2 callbackBlock:(id /* block */)arg3 postCallbacksBlock:(id /* block */)arg4;
- (void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(id /* block */)arg2 callbackBlock:(id /* block */)arg3 postCallbacksBlock:(id /* block */)arg4 group:(id)arg5;
- (void)_callDelegatesWithBlock:(id /* block */)arg1;
- (void)_callDelegatesWithBlock:(id /* block */)arg1 group:(id)arg2;
- (void)_callIsActiveChanged;
- (void)_callLinkedDevicesChanged;
- (void)_calloutPseudonymsDidUpdate;
- (bool)_canAccount:(id)arg1 sendWithFromID:(id)arg2;
- (void)_disableAccount:(id)arg1;
- (void)_enableAccount:(id)arg1;
- (void)_enforceSandboxPolicy;
- (id)_filteredAccountsFrom:(id)arg1;
- (void)_handlePretendingToBeFullWithIdentifier:(id*)arg1;
- (id)_init;
- (id)_initWithDelegateContext:(id)arg1;
- (bool)_isDroppingMessages;
- (void)_loadCachedLinkedDevices;
- (void)_logConnectionMap;
- (long long)_messageTypeForCommand:(id)arg1;
- (id)_payloadFromDecryptedData:(id)arg1;
- (id)_preferredURIForAccount:(id)arg1;
- (void)_processAccountSet:(id)arg1;
- (void)_reloadCachedLinkedDevices;
- (void)_sendMissingMessageMetric:(id)arg1;
- (bool)_sendSimulatorData:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7;
- (bool)_sendSimulatorMessage:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7;
- (bool)_sendSimulatorProtobuf:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7;
- (id)_sendingAccountForAccount:(id)arg1;
- (id)_sendingAccountForAccount:(id)arg1 destination:(id)arg2 fromID:(id)arg3;
- (void)_setupNewConnectionForAccount:(id)arg1;
- (void)_stopAwaitingQuickSwitchAcknowledgementFromDelegateWithIdentifier:(id)arg1;
- (void)_tearDownConnectionForUniqueID:(id)arg1;
- (void)_updateLinkedDevicesWithDevicesInfo:(id)arg1;
- (void)account:(id)arg1 pseudonymsChanged:(id)arg2;
- (void)accountController:(id)arg1 accountAdded:(id)arg2;
- (void)accountController:(id)arg1 accountDisabled:(id)arg2;
- (void)accountController:(id)arg1 accountEnabled:(id)arg2;
- (void)accountController:(id)arg1 accountRemoved:(id)arg2;
- (id)accounts;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (id)cachedPseudonymURIMap;
- (bool)canSend;
- (bool)canSendMessageWithAccount:(id)arg1 toDestination:(id)arg2;
- (bool)cancelIdentifier:(id)arg1 error:(id*)arg2;
- (bool)cancelMessageWithOptions:(id)arg1 destination:(id)arg2 identifier:(id*)arg3 error:(id*)arg4;
- (bool)cancelMessageWithOptions:(id)arg1 identifier:(id*)arg2 error:(id*)arg3;
- (bool)cancelOpportunisticDataWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)completionBlocksByRequestID;
- (void)connection:(id)arg1 account:(id)arg2 receivedGroupSessionParticipantDataUpdate:(id)arg3;
- (void)connection:(id)arg1 account:(id)arg2 receivedGroupSessionParticipantUpdate:(id)arg3 context:(id)arg4;
- (void)connection:(id)arg1 account:(id)arg2 sessionInviteReceived:(id)arg3 fromID:(id)arg4 transportType:(id)arg5 options:(id)arg6 context:(id)arg7 messageContext:(id)arg8;
- (void)connection:(id)arg1 connectedDevicesChanged:(id)arg2;
- (void)connection:(id)arg1 devicesChanged:(id)arg2;
- (void)connection:(id)arg1 didCancelMessageWithSuccess:(bool)arg2 error:(id)arg3 identifier:(id)arg4;
- (void)connection:(id)arg1 didFlushCacheForKTPeerURI:(id)arg2;
- (void)connection:(id)arg1 didFlushCacheForRemoteURI:(id)arg2 fromURI:(id)arg3 guid:(id)arg4;
- (void)connection:(id)arg1 didHintCheckingTransportLogWithReason:(long long)arg2;
- (void)connection:(id)arg1 didSendOpportunisticDataWithIdentifier:(id)arg2 toIDs:(id)arg3;
- (void)connection:(id)arg1 didUpdateDeviceIdentity:(id)arg2 error:(id)arg3 context:(id)arg4;
- (void)connection:(id)arg1 identifier:(id)arg2 alternateCallbackID:(id)arg3 willSendToDestinations:(id)arg4 skippedDestinations:(id)arg5 registrationPropertyToDestinations:(id)arg6;
- (void)connection:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(bool)arg3 error:(id)arg4 context:(id)arg5;
- (void)connection:(id)arg1 identifier:(id)arg2 fromURI:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;
- (void)connection:(id)arg1 incomingAccessoryData:(id)arg2 fromURI:(id)arg3 context:(id)arg4;
- (void)connection:(id)arg1 incomingAccessoryReportMessage:(id)arg2 accessoryID:(id)arg3 controllerID:(id)arg4 context:(id)arg5;
- (void)connection:(id)arg1 incomingData:(id)arg2 fromURI:(id)arg3 context:(id)arg4;
- (void)connection:(id)arg1 incomingEngramMessage:(id)arg2 fromURI:(id)arg3 context:(id)arg4;
- (void)connection:(id)arg1 incomingGroupData:(id)arg2 fromURI:(id)arg3 context:(id)arg4;
- (void)connection:(id)arg1 incomingInvitation:(id)arg2 fromURI:(id)arg3 context:(id)arg4;
- (void)connection:(id)arg1 incomingInvitationUpdate:(id)arg2 fromURI:(id)arg3 context:(id)arg4;
- (void)connection:(id)arg1 incomingMessage:(id)arg2 fromURI:(id)arg3 context:(id)arg4;
- (void)connection:(id)arg1 incomingOpportunisticData:(id)arg2 withIdentifier:(id)arg3 fromURI:(id)arg4 context:(id)arg5;
- (void)connection:(id)arg1 incomingPendingMessageFromURI:(id)arg2 context:(id)arg3;
- (void)connection:(id)arg1 incomingPendingResourceWithMetadata:(id)arg2 guid:(id)arg3 fromURI:(id)arg4 context:(id)arg5;
- (void)connection:(id)arg1 incomingProtobuf:(id)arg2 fromURI:(id)arg3 context:(id)arg4;
- (void)connection:(id)arg1 incomingTopLevelMessage:(id)arg2 fromURI:(id)arg3 messageContext:(id)arg4;
- (void)connection:(id)arg1 isActiveChanged:(bool)arg2;
- (void)connection:(id)arg1 messageIdentifier:(id)arg2 alternateCallbackID:(id)arg3 updatedWithResponseCode:(long long)arg4 error:(id)arg5 lastCall:(bool)arg6 messageContext:(id)arg7;
- (void)connection:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (void)daemonConnected;
- (id)daemonController;
- (void)daemonDisconnected;
- (id)daemonListener;
- (id)datagramChannelForSessionDestination:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)datagramChannelForSocketDescriptor:(int)arg1 error:(id*)arg2;
- (id)datagramConnectionForSessionDestination:(id)arg1 error:(id*)arg2;
- (id)datagramConnectionForSessionDestination:(id)arg1 uid:(unsigned int)arg2 error:(id*)arg3;
- (id)datagramConnectionForSocketDescriptor:(int)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)deviceForFromID:(id)arg1;
- (id)deviceForUniqueID:(id)arg1;
- (id)devices;
- (id)devicesForBTUUID:(id)arg1;
- (void)didSwitchActivePairedDevice:(id)arg1 forService:(id)arg2 wasHandled:(bool*)arg3;
- (void)finishedProvisioningPseudonym:(id)arg1 success:(bool)arg2 error:(id)arg3 forRequestUUID:(id)arg4;
- (void)finishedRenewingPseudonym:(id)arg1 success:(bool)arg2 error:(id)arg3 requestUUID:(id)arg4;
- (void)finishedReportingRequestUUID:(id)arg1 withError:(id)arg2;
- (void)finishedRevokingPseudonymWithSuccess:(bool)arg1 error:(id)arg2 requestUUID:(id)arg3;
- (void)finishedSigningForRequest:(id)arg1 signedData:(id)arg2 error:(id)arg3;
- (void)finishedVerifyingSignedDataForRequest:(id)arg1 success:(bool)arg2 error:(id)arg3;
- (id)firstRoutableInternetDestinationForSelf;
- (bool)getProgressUpdateForIdentifier:(id)arg1 error:(id*)arg2;
- (id)groupContextController;
- (id)groupContextController:(id)arg1 accountsForAlises:(id)arg2;
- (void)groupContextController:(id)arg1 didCreateGroup:(id)arg2;
- (id)iCloudAccount;
- (id)initWithService:(id)arg1 commands:(id)arg2 manuallyAckMessages:(bool)arg3 delegateContext:(id)arg4;
- (id)internalAccounts;
- (bool)isPretendingToBeFull;
- (id)linkedDeviceForFromID:(id)arg1 withRelationship:(long long)arg2;
- (id)linkedDevicesWithRelationship:(long long)arg1;
- (bool)manuallyAckMessages;
- (long long)maxEffectivePayloadSize;
- (void)performGroupTask:(id /* block */)arg1;
- (SEL)protobufActionForType:(unsigned short)arg1 isResponse:(bool)arg2;
- (void)provisionPseudonymForURI:(id)arg1 withProperties:(id)arg2 requestProperties:(id)arg3 completion:(id /* block */)arg4;
- (void)provisionPseudonymWithProperties:(id)arg1 requestProperties:(id)arg2 completion:(id /* block */)arg3;
- (id)pseudonymForPseudonymURI:(id)arg1;
- (id)pseudonymPropertiesWithFeatureID:(id)arg1 scopeID:(id)arg2 expiryDurationInSeconds:(double)arg3;
- (id)pseudonymURIMap;
- (id)pseudonymUpdateTaskQueue;
- (id)pseudonymsForMaskedURI:(id)arg1;
- (id)pseudonymsForMaskedURI:(id)arg1 matchingProperties:(id)arg2;
- (void)receivedIDSSimulatorSupportData:(id)arg1 serviceName:(id)arg2 messageIdentifier:(id)arg3;
- (void)removeDelegate:(id)arg1;
- (void)renewPseudonym:(id)arg1 forUpdatedExpiryEpoch:(double)arg2 requestProperties:(id)arg3 completion:(id /* block */)arg4;
- (void)reportAction:(long long)arg1 ofTempURI:(id)arg2 fromURI:(id)arg3 withCompletion:(id /* block */)arg4;
- (bool)reportSpamMessage:(id)arg1;
- (void)resendSubServicesToDaemonForCurrentDevice;
- (void)revokePseudonym:(id)arg1 requestProperties:(id)arg2 completion:(id /* block */)arg3;
- (void)scheduleTransactionLogTask:(id)arg1;
- (bool)sendAccessoryData:(id)arg1 toAccessoryID:(id)arg2 accessToken:(id)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (void)sendAckForMessageWithContext:(id)arg1;
- (bool)sendAheadGroup:(id)arg1 priority:(long long)arg2 options:(id)arg3 identifier:(id*)arg4 completion:(id /* block */)arg5;
- (bool)sendCertifiedDeliveryReceipt:(id)arg1;
- (bool)sendData:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7;
- (bool)sendData:(id)arg1 priority:(long long)arg2 options:(id)arg3 identifier:(id*)arg4 error:(id*)arg5;
- (bool)sendInvitation:(id)arg1 fromAccount:(id)arg2 toDestination:(id)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (bool)sendInvitationUpdate:(id)arg1 fromAccount:(id)arg2 toDestination:(id)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (bool)sendMessage:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7;
- (bool)sendOpportunisticData:(id)arg1 options:(id)arg2 identifier:(id)arg3 error:(id*)arg4;
- (bool)sendProtobuf:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7;
- (bool)sendResourceAtURL:(id)arg1 metadata:(id)arg2 fromAccount:(id)arg3 toDestinations:(id)arg4 priority:(long long)arg5 options:(id)arg6 identifier:(id*)arg7 error:(id*)arg8;
- (bool)sendServerMessage:(id)arg1 command:(id)arg2 fromAccount:(id)arg3;
- (void)service:(id)arg1 linkedDevicesUpdated:(id)arg2;
- (void)service:(id)arg1 tinkerDeviceAdded:(id)arg2;
- (void)service:(id)arg1 tinkerDeviceRemoved:(id)arg2;
- (void)service:(id)arg1 tinkerDeviceUpdated:(id)arg2;
- (id)serviceDomain;
- (id)serviceProperties;
- (void)setCachedPseudonymURIMap:(id)arg1;
- (void)setCompletionBlocksByRequestID:(id)arg1;
- (void)setLinkPreferences:(id)arg1;
- (void)setManuallyAckMessages:(bool)arg1;
- (void)setPreferInfraWiFi:(bool)arg1;
- (void)setPretendingToBeFull:(bool)arg1;
- (void)setProtobufAction:(SEL)arg1 forProtobufType:(unsigned short)arg2 isResponse:(bool)arg3;
- (void)setPseudonymUpdateTaskQueue:(id)arg1;
- (bool)setWakingPushPriority:(long long)arg1 error:(id*)arg2;
- (void)setWantsPseudonymUpdates:(bool)arg1;
- (void)signData:(id)arg1 withAlgorithm:(long long)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (void)startOTRTest:(long long)arg1;
- (id)streamConnectionForSessionDestination:(id)arg1 error:(id*)arg2;
- (id)streamConnectionForSocketDescriptor:(int)arg1 error:(id*)arg2;
- (void)testCloudQRConnection;
- (bool)updateSubServices:(id)arg1 forDevice:(id)arg2;
- (id)uriForFromID:(id)arg1;
- (void)verifySignedData:(id)arg1 matchesExpectedData:(id)arg2 withTokenURI:(id)arg3 forAlgorithm:(long long)arg4 options:(id)arg5 completion:(id /* block */)arg6;
- (bool)wantsPseudonymUpdates;

@end
