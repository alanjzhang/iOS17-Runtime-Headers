/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAP2AccessoryServerCoordinator : HAP2LoggingObject <HAP2AccessoryServerCoordinator, HAP2AccessoryServerCoordinatorPrivate, HAP2AccessoryServerDiscoveryDelegate> {
    <HAP2AccessoryServerBrowserPrivate> * _browser;
    <HAP2AccessoryServerControllerFactory> * _controllerFactory;
    <HAP2AccessoryServerCoordinatorDelegate> * _delegate;
    NSMutableDictionary * _discoveredAccessoryServers;
    bool  _discovering;
    <HAP2AccessoryServerDiscovery> * _discovery;
    <HAP2AccessoryServerEncodingFactory> * _encodingFactory;
    NSOperationQueue * _localOperationQueue;
    HAP2SerializedOperationQueue * _operationQueue;
    <HAP2AccessoryServerPairingFactory> * _pairingFactory;
    HAP2PropertyLock * _propertyLock;
    <HAP2AccessoryServerSecureTransportFactory> * _secureTransportFactory;
    bool  _startDiscoveringPending;
    bool  _stopDiscoveringPending;
    <HAP2AccessoryServerTransportFactory> * _transportFactory;
}

@property (nonatomic, readonly) <HAP2AccessoryServerBrowserPrivate> *browser;
@property (nonatomic, readonly) <HAP2AccessoryServerControllerFactory> *controllerFactory;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HAP2AccessoryServerCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableDictionary *discoveredAccessoryServers;
@property (getter=isDiscovering, nonatomic) bool discovering;
@property (nonatomic, readonly) <HAP2AccessoryServerDiscovery> *discovery;
@property (nonatomic, readonly) <HAP2AccessoryServerEncodingFactory> *encodingFactory;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSOperationQueue *localOperationQueue;
@property (nonatomic, readonly) HAP2SerializedOperationQueue *operationQueue;
@property (nonatomic, readonly) <HAP2AccessoryServerPairingFactory> *pairingFactory;
@property (nonatomic, readonly) HAP2PropertyLock *propertyLock;
@property (nonatomic, readonly) <HAP2AccessoryServerSecureTransportFactory> *secureTransportFactory;
@property (getter=isStartDiscoveringPending, nonatomic) bool startDiscoveringPending;
@property (getter=isStopDiscoveringPending, nonatomic) bool stopDiscoveringPending;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HAP2AccessoryServerTransportFactory> *transportFactory;

- (void).cxx_destruct;
- (id)_createMetadataForAccessoryServerWithAccessoryInfo:(id)arg1;
- (id)_createPairedAccessoryServerWithAccessoryInfo:(id)arg1 transport:(id)arg2 operationQueue:(id)arg3;
- (id)_createUnpairedAccessoryServerWithAccessoryInfo:(id)arg1 transport:(id)arg2 operationQueue:(id)arg3;
- (void)_didDeterminePairingStateForAccessory:(id)arg1 isPaired:(bool)arg2 completion:(id /* block */)arg3;
- (void)_didDiscoverAccessory:(id)arg1 completion:(id /* block */)arg2;
- (void)_didDiscoverPairedAccessory:(id)arg1 transport:(id)arg2 operationQueue:(id)arg3 completion:(id /* block */)arg4;
- (void)_didDiscoverUnpairedAccessory:(id)arg1 transport:(id)arg2 operationQueue:(id)arg3 completion:(id /* block */)arg4;
- (void)_didLoseAccessory:(id)arg1 error:(id)arg2;
- (void)_didStartDiscoveringWithError:(id)arg1;
- (void)_didStopDiscoveringWithError:(id)arg1;
- (void)_startDiscovering;
- (void)_stopDiscovering;
- (id)browser;
- (id)controllerFactory;
- (id)delegate;
- (id)discoveredAccessoryServers;
- (id)discovery;
- (void)discovery:(id)arg1 didDiscoverAccessory:(id)arg2;
- (void)discovery:(id)arg1 didLoseAccessory:(id)arg2 error:(id)arg3;
- (void)discovery:(id)arg1 didStartDiscoveringWithError:(id)arg2;
- (void)discovery:(id)arg1 didStopDiscoveringWithError:(id)arg2;
- (id)encodingFactory;
- (id)initWithDiscovery:(id)arg1 pairingFactory:(id)arg2 transportFactory:(id)arg3 secureTransportFactory:(id)arg4 encodingFactory:(id)arg5 controllerFactory:(id)arg6;
- (bool)isDiscovering;
- (bool)isStartDiscoveringPending;
- (bool)isStopDiscoveringPending;
- (id)localOperationQueue;
- (id)operationQueue;
- (id)pairingFactory;
- (id)propertyLock;
- (void)resurfaceDiscoveryInfoForDeviceID:(id)arg1;
- (id)secureTransportFactory;
- (void)setBrowser:(id)arg1 operationQueue:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDiscovering:(bool)arg1;
- (void)setStartDiscoveringPending:(bool)arg1;
- (void)setStopDiscoveringPending:(bool)arg1;
- (void)startDiscovering;
- (void)stopDiscovering;
- (id)transportFactory;

@end
