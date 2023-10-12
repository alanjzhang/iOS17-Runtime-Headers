/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NSPManager : NSObject <NEAppProxyProviderContainerDelegate, NPTunnelDelegate> {
    NSDictionary * _appRules;
    id /* block */  _changeHandler;
    NSPConfiguration * _configuration;
    id /* block */  _connectionInfoSetHandler;
    NSArray * _currentAgents;
    NSObject<OS_nw_endpoint> * _currentTunnelEndpoint;
    <NSPManagerDelegate> * _delegate;
    bool  _disableIdleTimeout;
    NSMutableDictionary * _fallbackCounts;
    NSPFlowDivert * _flowDivert;
    NSMutableDictionary * _flowInfoMap;
    NPKeyBag * _inUseKeybag;
    bool  _isObserving;
    NPKeyBag * _keybag;
    NSMutableArray * _knownFlows;
    NSPAppRule * _matchingAppRule;
    unsigned int  _nextFlowID;
    NWPathEvaluator * _pathEvaluator;
    id /* block */  _pendingCancellationHandler;
    NWPathEvaluator * _policyEvaluator;
    NSString * _signingIdentifier;
    bool  _testFetchDaypass;
    NSArray * _testLatencyMap;
    unsigned long long  _testLatencyMapIndex;
    id /* block */  _tunnelConnectedHandler;
    unsigned int  _tunnelCount;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
}

@property (retain) NSDictionary *appRules;
@property (nonatomic, copy) id /* block */ changeHandler;
@property (retain) NSPConfiguration *configuration;
@property (nonatomic, copy) id /* block */ connectionInfoSetHandler;
@property (nonatomic, retain) NSArray *currentAgents;
@property (nonatomic, readonly) bool currentNetworkHasProxies;
@property (nonatomic, retain) NSObject<OS_nw_endpoint> *currentTunnelEndpoint;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NSPManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property bool disableIdleTimeout;
@property (nonatomic, readonly) NSMutableDictionary *fallbackCounts;
@property (retain) NSPFlowDivert *flowDivert;
@property (nonatomic, retain) NSMutableDictionary *flowInfoMap;
@property (readonly) unsigned long long hash;
@property (retain) NPKeyBag *inUseKeybag;
@property (nonatomic, readonly) bool isEnabled;
@property (readonly) bool isFirstTunnel;
@property (nonatomic) bool isObserving;
@property (retain) NPKeyBag *keybag;
@property (nonatomic, readonly) NSMutableArray *knownFlows;
@property (retain) NSPAppRule *matchingAppRule;
@property (nonatomic) unsigned int nextFlowID;
@property (nonatomic, readonly) NWPathEvaluator *pathEvaluator;
@property (nonatomic, copy) id /* block */ pendingCancellationHandler;
@property (nonatomic, readonly) NWPathEvaluator *policyEvaluator;
@property (nonatomic, readonly) NSString *signingIdentifier;
@property (readonly) Class superclass;
@property bool testFetchDaypass;
@property (retain) NSArray *testLatencyMap;
@property unsigned long long testLatencyMapIndex;
@property (readonly) double timeIntervalSinceLastUsage;
@property (nonatomic, copy) id /* block */ tunnelConnectedHandler;
@property (nonatomic) unsigned int tunnelCount;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)appRules;
- (id)buildTestLatencyMap:(id)arg1;
- (id /* block */)changeHandler;
- (id)configuration;
- (id /* block */)connectionInfoSetHandler;
- (void)container:(id)arg1 didFailWithError:(id)arg2;
- (void)container:(id)arg1 didRequestFlowDivertControlSocketWithCompletionHandler:(id /* block */)arg2;
- (void)container:(id)arg1 didSetTunnelConfiguration:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)container:(id)arg1 didStartWithError:(id)arg2;
- (id)createAppRuleMapWithRules:(id)arg1;
- (id)createReplacementEndpointForEndpoint:(id)arg1 properties:(id)arg2;
- (id)createTransformsForEndpoint:(id)arg1 parameters:(id)arg2;
- (id)currentAgents;
- (bool)currentNetworkHasProxies;
- (id)currentTunnelEndpoint;
- (id)delegate;
- (bool)disableIdleTimeout;
- (id)fallbackCounts;
- (void)fetchStateForClient:(id)arg1 withPeerEndpoint:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)flowDivert;
- (id)flowInfoMap;
- (id)getAppRuleMatchingParameters:(id)arg1 flowProperties:(id)arg2;
- (id)getConnectionInfoForIdentifier:(id)arg1;
- (unsigned long long)getTestLatencyRTT:(id)arg1 parameters:(struct networkParameters { bool x1; bool x2; }*)arg2;
- (void)handlePolicyUpdate;
- (id)inUseKeybag;
- (void)ingestTestLatencyMap:(id)arg1 local:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (id)instantiateFlowWithTunnel:(id)arg1 inputProtocol:(struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; }*)arg2;
- (id)instantiateTunnelWithEndpoint:(id)arg1 parameters:(id)arg2;
- (bool)isEnabled;
- (bool)isFirstTunnel;
- (bool)isObserving;
- (id)keybag;
- (id)knownFlows;
- (id)matchingAppRule;
- (unsigned int)nextFlowID;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)pathEvaluator;
- (id /* block */)pendingCancellationHandler;
- (id)policyEvaluator;
- (void)resetTestLatencyMapIndex:(unsigned long long)arg1;
- (void)sendUsageReport:(id)arg1;
- (void)setAppRules:(id)arg1;
- (void)setChangeHandler:(id /* block */)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setConnectionInfo:(id)arg1 forIdentifier:(id)arg2;
- (void)setConnectionInfoSetHandler:(id /* block */)arg1;
- (void)setCurrentAgents:(id)arg1;
- (void)setCurrentTunnelEndpoint:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisableIdleTimeout:(bool)arg1;
- (void)setFlowDivert:(id)arg1;
- (void)setFlowInfoMap:(id)arg1;
- (void)setInUseKeybag:(id)arg1;
- (void)setIsObserving:(bool)arg1;
- (void)setKeybag:(id)arg1;
- (void)setMatchingAppRule:(id)arg1;
- (void)setNextFlowID:(unsigned int)arg1;
- (void)setPendingCancellationHandler:(id /* block */)arg1;
- (void)setTestFetchDaypass:(bool)arg1;
- (void)setTestLatencyMap:(id)arg1;
- (void)setTestLatencyMapIndex:(unsigned long long)arg1;
- (void)setTunnelConnectedHandler:(id /* block */)arg1;
- (void)setTunnelCount:(unsigned int)arg1;
- (bool)shouldSetConfigurationToAppRule:(id)arg1 edgeSet:(id)arg2;
- (id)signingIdentifier;
- (void)start;
- (void)startWithConfiguration:(id)arg1 appRules:(id)arg2 delegate:(id)arg3;
- (void)stopWithCompletionHandler:(id /* block */)arg1;
- (bool)testFetchDaypass;
- (id)testLatencyMap;
- (unsigned long long)testLatencyMapIndex;
- (double)timeIntervalSinceLastUsage;
- (void)tunnel:(id)arg1 flowDidFallbackWithReason:(long long)arg2;
- (id /* block */)tunnelConnectedHandler;
- (unsigned int)tunnelCount;
- (void)tunnelDidCancel:(id)arg1;
- (void)tunnelDidConnect:(id)arg1;
- (void)tunnelIsReady:(id)arg1;
- (bool)useTestDaypass;
- (bool)useTestLatencyMap;
- (void)waitForTunnelsToCancelWithCompletionHandler:(id /* block */)arg1;

@end
