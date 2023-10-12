/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBPeripheralManager : CBManager {
    unsigned long long  _attributeIDGenerator;
    NSMapTable * _centrals;
    NSMutableDictionary * _characteristicIDs;
    <CBPeripheralManagerDelegate> * _delegate;
    struct { 
        unsigned int willRestoreState : 1; 
        unsigned int didAddService : 1; 
        unsigned int didReceiveReadRequest : 1; 
        unsigned int didReceiveWriteRequests : 1; 
        unsigned int centralDidSubscribeToCharacteristic : 1; 
        unsigned int centralDidUnsubscribeFromCharacteristic : 1; 
        unsigned int didStartAdvertising : 1; 
        unsigned int didStartPeriodicAdvertising : 1; 
        unsigned int didStopPeriodicAdvertising : 1; 
        unsigned int isReadyToUpdate : 1; 
        unsigned int centralDidConnect : 1; 
        unsigned int centralDidUpdateConnectionParameters : 1; 
        unsigned int didPublishL2CAPChannel : 1; 
        unsigned int didUnpublishL2CAPChannel : 1; 
        unsigned int didOpenL2CAPChannel : 1; 
        unsigned int didStopAdvertisingWithError : 1; 
        unsigned int didUpdateANCSAuthorization : 1; 
        unsigned int didUpdateControllerBTClock : 1; 
        unsigned int didUpdateControllerBTClockDict : 1; 
        unsigned int didRequestOfflineAdvPayloadRequestedWithReason : 1; 
    }  _delegateFlags;
    id /* block */  _incomingConnectionRequestCompletion;
    bool  _isAdvertising;
    NSHashTable * _l2capChannels;
    NSNumber * _multipleAdvertisingSupported;
    bool  _observingKeyPaths;
    bool  _readyForUpdates;
    NSMutableArray * _services;
    NSLock * _updateLock;
    bool  _waitingForReady;
}

@property unsigned long long attributeIDGenerator;
@property (nonatomic, readonly, retain) NSMapTable *centrals;
@property (nonatomic, readonly, retain) NSMutableDictionary *characteristicIDs;
@property (nonatomic) <CBPeripheralManagerDelegate> *delegate;
@property (nonatomic, copy) id /* block */ incomingConnectionRequestCompletion;
@property (nonatomic) bool isAdvertising;
@property (getter=supportsMultipleAdvertising, nonatomic, readonly) bool isSupportingMultipleAdvertising;
@property (nonatomic, readonly, retain) NSHashTable *l2capChannels;
@property (nonatomic, retain) NSNumber *multipleAdvertisingSupported;
@property (nonatomic, readonly) bool readyForUpdates;
@property (nonatomic, readonly, retain) NSMutableArray *services;
@property (nonatomic, readonly, retain) NSLock *updateLock;
@property (nonatomic, readonly) bool waitingForReady;

+ (long long)authorizationStatus;
+ (bool)supportsFeatures:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)HandleControllerPeripheralBTClockUpdateMsg:(id)arg1;
- (void)HandleOfflineAdvPayloadRequestedWithReason:(id)arg1;
- (void)addService:(id)arg1;
- (id)addXPCDelayTiming:(id)arg1 args:(id)arg2;
- (void)addressRotationState:(id /* block */)arg1;
- (unsigned long long)attributeIDGenerator;
- (id)centralWithIdentifier:(id)arg1;
- (id)centralWithInfo:(id)arg1;
- (id)centrals;
- (id)characteristicIDs;
- (void)dealloc;
- (id)delegate;
- (void)forEachCentral:(id /* block */)arg1;
- (id)getNonConnectableIdentity;
- (void)handleAdvertisingAddressChanged:(id)arg1;
- (void)handleAdvertisingStarted:(id)arg1;
- (void)handleAdvertisingStopped:(id)arg1;
- (void)handleCentralDidUpdateANCSAuthorization:(id)arg1;
- (void)handleConnectionParametersUpdated:(id)arg1;
- (void)handleGetAttributeValue:(id)arg1;
- (void)handleIncomingCISConnectionRequest:(id)arg1;
- (void)handleL2CAPChannelClosed:(id)arg1;
- (void)handleL2CAPChannelOpened:(id)arg1;
- (void)handleL2CAPChannelPublished:(id)arg1;
- (void)handleL2CAPChannelUnpublished:(id)arg1;
- (void)handleMsg:(unsigned short)arg1 args:(id)arg2;
- (void)handleNotificationAdded:(id)arg1;
- (void)handleNotificationRemoved:(id)arg1;
- (void)handlePeriodicAdvertisingStarted:(id)arg1;
- (void)handlePeriodicAdvertisingStopped:(id)arg1;
- (void)handleReadyForUpdates:(id)arg1;
- (void)handleRestoringState:(id)arg1;
- (void)handleServiceAdded:(id)arg1;
- (void)handleSetAttributeValues:(id)arg1;
- (void)handleSolicitedServicesFound:(id)arg1;
- (void)handleSupportedFeatures:(id)arg1;
- (void)incomingAddress:(id)arg1;
- (id /* block */)incomingConnectionRequestCompletion;
- (id)init;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3;
- (bool)isAdvertising;
- (bool)isMsgAllowedAlways:(unsigned short)arg1;
- (bool)isMsgAllowedWhenOff:(unsigned short)arg1;
- (id)l2capChannelForPeer:(id)arg1 withPsm:(unsigned short)arg2;
- (id)l2capChannels;
- (id)multipleAdvertisingSupported;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)overrideLocalLeAddress:(id)arg1;
- (id)peerWithInfo:(id)arg1;
- (void)publishL2CAPChannel:(unsigned short)arg1 requiresEncryption:(bool)arg2;
- (void)publishL2CAPChannel:(unsigned short)arg1 requiresEncryption:(bool)arg2 options:(id)arg3;
- (void)publishL2CAPChannel:(unsigned short)arg1 requiresEncryption:(bool)arg2 priority:(long long)arg3;
- (void)publishL2CAPChannelWithEncryption:(bool)arg1;
- (void)publishL2CAPChannelWithEncryption:(bool)arg1 priority:(long long)arg2;
- (bool)readyForUpdates;
- (void)refreshNonConnectableIdentity;
- (void)removeAllL2CAPChannels;
- (void)removeAllServices;
- (void)removeService:(id)arg1;
- (void)requestStableAddress:(id /* block */)arg1;
- (void)respondToRequest:(id)arg1 withResult:(long long)arg2;
- (void)respondToTransaction:(id)arg1 value:(id)arg2 attributeID:(id)arg3 result:(long long)arg4;
- (void)retrieveBluetoothUsageStatistics:(id)arg1 completion:(id /* block */)arg2;
- (id)services;
- (void)setAttributeIDGenerator:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDesiredConnectionLatency:(long long)arg1 forCentral:(id)arg2;
- (void)setIncomingConnectionRequestCompletion:(id /* block */)arg1;
- (void)setIsAdvertising:(bool)arg1;
- (void)setMultipleAdvertisingSupported:(id)arg1;
- (void)setOfflineAdvertisingParamsAndData:(id)arg1;
- (void)startAdvertising:(id)arg1;
- (void)startPeriodicAdvertising:(id)arg1;
- (void)stopAdvertising;
- (void)stopPeriodicAdvertising:(id)arg1;
- (bool)supportsMultipleAdvertising;
- (void)unpublishL2CAPChannel:(unsigned short)arg1;
- (id)updateLock;
- (bool)updateValue:(id)arg1 forCharacteristic:(id)arg2 onSubscribedCentrals:(id)arg3;
- (bool)waitingForReady;

@end
