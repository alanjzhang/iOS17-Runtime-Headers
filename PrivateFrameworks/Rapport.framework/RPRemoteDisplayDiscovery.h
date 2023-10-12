/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPRemoteDisplayDiscovery : NSObject <NSSecureCoding, RPRemoteDisplayXPCClientInterface> {
    bool  _activateCalled;
    unsigned long long  _controlFlags;
    unsigned char  _currentState;
    id /* block */  _deviceChangedHandler;
    id /* block */  _deviceFoundHandler;
    id /* block */  _deviceLostHandler;
    id /* block */  _deviceSelectedHandler;
    NSMutableDictionary * _discoveredDevices;
    NSMutableDictionary * _discoveredPeople;
    unsigned long long  _discoveryFlags;
    unsigned char  _discoverySessionStartReason;
    id /* block */  _discoverySessionStateChangedHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    unsigned long long  _errorFlags;
    id /* block */  _errorFlagsChangedHandler;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSString * _peerDeviceIdentifier;
    id /* block */  _personChangedHandler;
    id /* block */  _personDeclinedHandler;
    id /* block */  _personFoundHandler;
    id /* block */  _personLostHandler;
    RPRemoteDisplayPerson * _personSelected;
    NSXPCConnection * _xpcCnx;
}

@property (nonatomic) unsigned long long controlFlags;
@property (nonatomic, readonly) unsigned char currentState;
@property (nonatomic, copy) id /* block */ deviceChangedHandler;
@property (nonatomic, copy) id /* block */ deviceFoundHandler;
@property (nonatomic, copy) id /* block */ deviceLostHandler;
@property (nonatomic, copy) id /* block */ deviceSelectedHandler;
@property (nonatomic, readonly, copy) NSArray *discoveredDevices;
@property (nonatomic, readonly, copy) NSArray *discoveredPeople;
@property (nonatomic) unsigned long long discoveryFlags;
@property (nonatomic, readonly) unsigned char discoverySessionStartReason;
@property (nonatomic, copy) id /* block */ discoverySessionStateChangedHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned long long errorFlags;
@property (nonatomic, copy) id /* block */ errorFlagsChangedHandler;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, readonly) NSString *peerDeviceIdentifier;
@property (nonatomic, copy) id /* block */ personChangedHandler;
@property (nonatomic, copy) id /* block */ personDeclinedHandler;
@property (nonatomic, copy) id /* block */ personFoundHandler;
@property (nonatomic, copy) id /* block */ personLostHandler;
@property (nonatomic, retain) RPRemoteDisplayPerson *personSelected;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1 reactivate:(bool)arg2;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidated;
- (void)_lostAllDevices;
- (void)_lostAllPeople;
- (void)activateWithCompletion:(id /* block */)arg1;
- (unsigned long long)controlFlags;
- (unsigned char)currentState;
- (id)description;
- (id /* block */)deviceChangedHandler;
- (id /* block */)deviceFoundHandler;
- (id /* block */)deviceLostHandler;
- (id /* block */)deviceSelectedHandler;
- (id)discoveredDevices;
- (id)discoveredPeople;
- (unsigned long long)discoveryFlags;
- (unsigned char)discoverySessionStartReason;
- (id /* block */)discoverySessionStateChangedHandler;
- (id)dispatchQueue;
- (void)encodeWithCoder:(id)arg1;
- (void)enterDiscoverySessionWithDevice:(id)arg1 reason:(id)arg2;
- (unsigned long long)errorFlags;
- (id /* block */)errorFlagsChangedHandler;
- (void)exitDiscoverySessionWithReason:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)peerDeviceIdentifier;
- (void)personCanceled:(id)arg1;
- (id /* block */)personChangedHandler;
- (id /* block */)personDeclinedHandler;
- (id /* block */)personFoundHandler;
- (id /* block */)personLostHandler;
- (id)personSelected;
- (void)remoteDisplayChangedDevice:(id)arg1 changes:(unsigned int)arg2;
- (void)remoteDisplayDeviceSelected:(id)arg1;
- (void)remoteDisplayFoundDevice:(id)arg1;
- (void)remoteDisplayLostDevice:(id)arg1;
- (void)remoteDisplayNotifyDiscoverySessionState:(unsigned char)arg1 forDevice:(id)arg2 startReason:(unsigned char)arg3;
- (void)remoteDisplayPersonDeclined;
- (void)remoteDisplayUpdateErrorFlags:(unsigned long long)arg1;
- (void)setControlFlags:(unsigned long long)arg1;
- (void)setDeviceChangedHandler:(id /* block */)arg1;
- (void)setDeviceFoundHandler:(id /* block */)arg1;
- (void)setDeviceLostHandler:(id /* block */)arg1;
- (void)setDeviceSelectedHandler:(id /* block */)arg1;
- (void)setDiscoveryFlags:(unsigned long long)arg1;
- (void)setDiscoverySessionStateChangedHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setErrorFlags:(unsigned long long)arg1;
- (void)setErrorFlagsChangedHandler:(id /* block */)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setPersonChangedHandler:(id /* block */)arg1;
- (void)setPersonDeclinedHandler:(id /* block */)arg1;
- (void)setPersonFoundHandler:(id /* block */)arg1;
- (void)setPersonLostHandler:(id /* block */)arg1;
- (void)setPersonSelected:(id)arg1;
- (bool)shouldReportDevice:(id)arg1;

@end
