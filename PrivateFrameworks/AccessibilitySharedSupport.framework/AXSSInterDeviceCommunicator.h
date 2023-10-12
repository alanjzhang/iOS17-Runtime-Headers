/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
 */

@interface AXSSInterDeviceCommunicator : NSObject <IDSServiceDelegate, MCNearbyServiceAdvertiserDelegate, MCNearbyServiceBrowserDelegate, MCSessionDelegate> {
    <AXSSInterDeviceActionReceiver> * _actionReceiver;
    MCNearbyServiceAdvertiser * _advertiser;
    NSMutableArray * _availableDevices;
    MCNearbyServiceBrowser * _browser;
    <AXSSInterDeviceConnectionListener> * _connectionListener;
    NSMutableDictionary * _deviceTypesByPeerID;
    NSTimer * _dummyPacketTimer;
    MCPeerID * _forwarder;
    MCPeerID * _localPeerID;
    unsigned long long  _numberOfBurstPacketsRemaining;
    MCPeerID * _receiver;
    <AXSSInterDeviceSearchObserver> * _searchObserver;
    AXSSInterDeviceSecurityHelper * _securityHelper;
    IDSService * _service;
    MCSession * _session;
    long long  _state;
    unsigned long long  _switchEventIndex;
}

@property (nonatomic) <AXSSInterDeviceActionReceiver> *actionReceiver;
@property (nonatomic, retain) MCNearbyServiceAdvertiser *advertiser;
@property (nonatomic, retain) NSMutableArray *availableDevices;
@property (nonatomic, retain) MCNearbyServiceBrowser *browser;
@property (nonatomic, readonly) bool canSearch;
@property (nonatomic) <AXSSInterDeviceConnectionListener> *connectionListener;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *deviceTypesByPeerID;
@property (nonatomic, retain) NSTimer *dummyPacketTimer;
@property (nonatomic, retain) MCPeerID *forwarder;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isForwardingSwitchEvents;
@property (nonatomic, readonly) bool isIdle;
@property (nonatomic, readonly) bool isReceivingSwitchEvents;
@property (nonatomic, readonly) bool isSearching;
@property (nonatomic, readonly) MCPeerID *localPeerID;
@property (nonatomic) unsigned long long numberOfBurstPacketsRemaining;
@property (nonatomic, retain) MCPeerID *receiver;
@property (nonatomic) <AXSSInterDeviceSearchObserver> *searchObserver;
@property (nonatomic, readonly) NSArray *searchResults;
@property (nonatomic, retain) AXSSInterDeviceSecurityHelper *securityHelper;
@property (nonatomic, readonly) IDSService *service;
@property (nonatomic, retain) MCSession *session;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long switchEventIndex;

- (void).cxx_destruct;
- (void)_advertise;
- (void)_broadcastICloudMessage:(id)arg1;
- (void)_cancelAdvertising;
- (void)_handleHighlightMessage;
- (void)_handlePerformSysdiagnoseMessage;
- (void)_handleSelectionMessageWithPayload:(id)arg1;
- (void)_handleSwitchEventMessageWithPayload:(id)arg1 fromPeer:(id)arg2;
- (void)_handleTimeoutAsPotentialReceiver;
- (id)_messageForSelection:(bool)arg1 settings:(id)arg2;
- (id)_messageForSwitchEvent:(id)arg1 index:(unsigned long long)arg2;
- (void)_removePeerFromAvailableDevices:(id)arg1;
- (void)_sendDataToReceiver:(id)arg1;
- (void)_sendDummyPacket;
- (bool)_setUpSessionIfNecessary;
- (id)_stateDescription;
- (id)_stringForState:(long long)arg1;
- (void)_tearDownAdvertiser;
- (void)_tearDownBrowser;
- (void)_tearDownConnectivity;
- (void)_tearDownSession;
- (id)actionReceiver;
- (id)advertiser;
- (void)advertiser:(id)arg1 didNotStartAdvertisingPeer:(id)arg2;
- (void)advertiser:(id)arg1 didReceiveInvitationFromPeer:(id)arg2 withContext:(id)arg3 invitationHandler:(id /* block */)arg4;
- (id)availableDevices;
- (id)browser;
- (void)browser:(id)arg1 didNotStartBrowsingForPeers:(id)arg2;
- (void)browser:(id)arg1 foundPeer:(id)arg2 withDiscoveryInfo:(id)arg3;
- (void)browser:(id)arg1 lostPeer:(id)arg2;
- (bool)canSearch;
- (id)connectionListener;
- (void)dealloc;
- (id)deviceTypesByPeerID;
- (id)dummyPacketTimer;
- (void)forwardSwitchEvent:(id)arg1;
- (id)forwarder;
- (void)highlightSearchResult:(id)arg1;
- (id)init;
- (bool)isForwardingSwitchEvents;
- (bool)isIdle;
- (bool)isReceivingSwitchEvents;
- (bool)isSearching;
- (id)localPeerID;
- (unsigned long long)numberOfBurstPacketsRemaining;
- (void)performSysdiagnoseOnReceiver;
- (id)receiver;
- (void)search;
- (id)searchObserver;
- (id)searchResults;
- (id)securityHelper;
- (void)selectSearchResult:(id)arg1 settings:(id)arg2;
- (id)service;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (id)session;
- (void)session:(id)arg1 didFinishReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 atURL:(id)arg4 withError:(id)arg5;
- (void)session:(id)arg1 didReceiveCertificate:(id)arg2 fromPeer:(id)arg3 certificateHandler:(id /* block */)arg4;
- (void)session:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3;
- (void)session:(id)arg1 didReceiveStream:(id)arg2 withName:(id)arg3 fromPeer:(id)arg4;
- (void)session:(id)arg1 didStartReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 withProgress:(id)arg4;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(long long)arg3;
- (void)setActionReceiver:(id)arg1;
- (void)setAdvertiser:(id)arg1;
- (void)setAvailableDevices:(id)arg1;
- (void)setBrowser:(id)arg1;
- (void)setConnectionListener:(id)arg1;
- (void)setDeviceTypesByPeerID:(id)arg1;
- (void)setDummyPacketTimer:(id)arg1;
- (void)setForwarder:(id)arg1;
- (void)setNumberOfBurstPacketsRemaining:(unsigned long long)arg1;
- (void)setReceiver:(id)arg1;
- (void)setSearchObserver:(id)arg1;
- (void)setSecurityHelper:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setSwitchEventIndex:(unsigned long long)arg1;
- (long long)state;
- (void)stop;
- (unsigned long long)switchEventIndex;

@end
