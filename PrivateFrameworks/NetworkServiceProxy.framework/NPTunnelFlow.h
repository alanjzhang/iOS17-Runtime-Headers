/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NPTunnelFlow : NSObject {
    NSPAppRule * _appRule;
    bool  _disconnectedByApp;
    bool  _enableDirectRace;
    NPFlowProperties * _extraFlowProperties;
    double  _fallbackDelay;
    bool  _fallbackDisabled;
    long long  _fallbackReason;
    void * _fallbackTimer;
    NSDate * _firstTxByteTimestamp;
    bool  _hasTunnel;
    unsigned long long  _hashKey;
    unsigned long long  _identifier;
    unsigned long long  _initialBytesLeftOver;
    bool  _isDirectConnectionViable;
    NSObject<OS_dispatch_data> * _savedData;
    bool  _shouldComposeIntialData;
    NSDate * _startDate;
    long long  _state;
    void * _telemetryTimer;
    NPTunnel * _tunnel;
    int  _tunnelError;
    void * _window;
}

@property (nonatomic, readonly) NSPAppRule *appRule;
@property (nonatomic) bool disconnectedByApp;
@property (nonatomic, readonly) bool enableDirectRace;
@property (nonatomic, readonly) NPFlowProperties *extraFlowProperties;
@property (nonatomic) double fallbackDelay;
@property (nonatomic) bool fallbackDisabled;
@property (nonatomic) long long fallbackReason;
@property (nonatomic) void*fallbackTimer;
@property (nonatomic, retain) NSDate *firstTxByteTimestamp;
@property (nonatomic, readonly) unsigned long long hashKey;
@property (nonatomic) unsigned long long identifier;
@property (nonatomic) unsigned long long initialBytesLeftOver;
@property (nonatomic, readonly) bool isBestEffort;
@property (nonatomic, readonly) bool isClientFlowClosed;
@property (nonatomic) bool isDirectConnectionViable;
@property (nonatomic, retain) NSObject<OS_dispatch_data> *savedData;
@property (nonatomic) bool shouldComposeIntialData;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) long long state;
@property (nonatomic) void*telemetryTimer;
@property (nonatomic, readonly) NPTunnel *tunnel;
@property (nonatomic, readonly) void*window;

- (void).cxx_destruct;
- (id)appData;
- (id)appRule;
- (void)cleanupLosingConnection:(bool)arg1;
- (void)closeClientFlowWithError:(int)arg1;
- (void)closeFromDirectConnectionWithError:(int)arg1;
- (void)closeFromTunnel;
- (void)closeWithError:(int)arg1;
- (id)combineStateInfo:(id)arg1 andConnectionInfo:(id)arg2;
- (id)copyConnectionInfo;
- (id)createFallbackConnectionInfoWithFallbackReason:(long long)arg1;
- (void)createTelemetryDataWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (bool)disconnectedByApp;
- (bool)enableDirectRace;
- (id)extraFlowProperties;
- (double)fallbackDelay;
- (bool)fallbackDisabled;
- (long long)fallbackReason;
- (void*)fallbackTimer;
- (id)firstTxByteTimestamp;
- (void)handleAppData:(id)arg1;
- (void)handleTunnelCanHandleMoreData;
- (void)handleTunnelConnected;
- (void)handleTunnelDisconnected;
- (void)handleTunnelReadyForData;
- (unsigned long long)hashKey;
- (unsigned long long)identifier;
- (void)increaseWindowSize:(unsigned long long)arg1;
- (id)initWithTunnel:(id)arg1 appRule:(id)arg2 hashKey:(unsigned long long)arg3 extraFlowProperties:(id)arg4;
- (unsigned long long)initialBytesLeftOver;
- (bool)isBestEffort;
- (bool)isClientFlowClosed;
- (bool)isDirectConnectionViable;
- (void)processConnectionInfo:(id)arg1;
- (void)readDataFromClient;
- (void)reportMetrics;
- (void)reportTelemetry:(id)arg1 withService:(id)arg2 url:(id)arg3;
- (id)savedData;
- (void)sendDataToClient:(id)arg1 fromTunnel:(bool)arg2;
- (void)setAppData:(id)arg1;
- (void)setDisconnectedByApp:(bool)arg1;
- (void)setFallbackDelay:(double)arg1;
- (void)setFallbackDisabled:(bool)arg1;
- (void)setFallbackReason:(long long)arg1;
- (void)setFallbackTimer:(void*)arg1;
- (void)setFirstTxByteTimestamp:(id)arg1;
- (void)setIdentifier:(unsigned long long)arg1;
- (void)setInitialBytesLeftOver:(unsigned long long)arg1;
- (void)setIsDirectConnectionViable:(bool)arg1;
- (void)setSavedData:(id)arg1;
- (void)setShouldComposeIntialData:(bool)arg1;
- (void)setTelemetryTimer:(void*)arg1;
- (bool)shouldComposeIntialData;
- (bool)shouldSendDataToClient:(id)arg1 fromTunnel:(bool)arg2;
- (id)startDate;
- (void)startDirectConnection;
- (long long)state;
- (void)stopDirectConnection;
- (void*)telemetryTimer;
- (id)tunnel;
- (void*)window;

@end
