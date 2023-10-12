/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPStreamSession : NSObject <NSSecureCoding> {
    id /* block */  _connectionReadyHandler;
    unsigned long long  _delegatedProcessUPID;
    NSString * _destinationString;
    id /* block */  _disconnectHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _flowControlWriteChangedHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    <RPMessageable> * _messenger;
    NSUUID * _nwClientID;
    NSObject<OS_nw_listener> * _nwListener;
    NSObject<OS_nw_path_evaluator> * _nwPathEvaluator;
    unsigned char  _ourCurveSK;
    union { 
        struct sockaddr { 
            unsigned char sa_len; 
            unsigned char sa_family; 
            BOOL sa_data[14]; 
        } sa; 
        struct sockaddr_in { 
            unsigned char sin_len; 
            unsigned char sin_family; 
            unsigned short sin_port; 
            struct in_addr { 
                unsigned int s_addr; 
            } sin_addr; 
            BOOL sin_zero[8]; 
        } v4; 
        struct sockaddr_in6 { 
            unsigned char sin6_len; 
            unsigned char sin6_family; 
            unsigned short sin6_port; 
            unsigned int sin6_flowinfo; 
            struct in6_addr { 
                union { 
                    unsigned char __u6_addr8[16]; 
                    unsigned short __u6_addr16[8]; 
                    unsigned int __u6_addr32[4]; 
                } __u6_addr; 
            } sin6_addr; 
            unsigned int sin6_scope_id; 
        } v6; 
    }  _peerIP;
    int  _peerPort;
    bool  _prepareOnly;
    NSData * _pskData;
    id /* block */  _receivedEventHandler;
    id /* block */  _receivedRequestHandler;
    RPConnection * _rpCnx;
    bool  _serverMode;
    NSString * _serviceType;
    id /* block */  _statusChangedHandler;
    unsigned long long  _statusFlags;
    id /* block */  _streamAcceptHandler;
    unsigned int  _streamFlags;
    NSString * _streamID;
    NSData * _streamKey;
    int  _streamQoS;
    int  _streamSocket;
    int  _streamType;
    CUTCPServer * _tcpServer;
    unsigned int  _trafficFlags;
    bool  _trafficRegistrationCalled;
    NSString * _trafficSessionID;
    CUWiFiManager * _wifiManager;
}

@property (nonatomic, copy) id /* block */ connectionReadyHandler;
@property (nonatomic) unsigned long long delegatedProcessUPID;
@property (nonatomic, copy) NSString *destinationString;
@property (nonatomic, copy) id /* block */ disconnectHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ flowControlWriteChangedHandler;
@property (nonatomic, readonly) int flowControlWriteState;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, retain) <RPMessageable> *messenger;
@property (nonatomic, copy) NSUUID *nwClientID;
@property (nonatomic, copy) NSData *pskData;
@property (nonatomic, copy) id /* block */ receivedEventHandler;
@property (nonatomic, copy) id /* block */ receivedRequestHandler;
@property (nonatomic) bool serverMode;
@property (nonatomic, copy) NSString *serviceType;
@property (nonatomic, copy) id /* block */ statusChangedHandler;
@property (nonatomic, readonly) unsigned long long statusFlags;
@property (nonatomic, copy) id /* block */ streamAcceptHandler;
@property (nonatomic) unsigned int streamFlags;
@property (nonatomic, copy) NSString *streamID;
@property (nonatomic, copy) NSData *streamKey;
@property (nonatomic) int streamQoS;
@property (nonatomic) int streamSocket;
@property (nonatomic) int streamType;
@property (nonatomic) unsigned int trafficFlags;
@property (nonatomic, copy) NSString *trafficSessionID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_clientRPConnectionPrepareResponse:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)_clientRPConnectionPrepareWithCompletion:(id /* block */)arg1;
- (void)_clientRPConnectionStartWithCompletion:(id /* block */)arg1;
- (void)_clientUDPNWPathNextWithEndpoint:(id)arg1 nwInterface:(id)arg2 selfMACData:(id)arg3 usb:(bool)arg4 completion:(id /* block */)arg5;
- (void)_clientUDPNWPathStartResponse:(id)arg1 options:(id)arg2 localEndpoint:(id)arg3 nwInterface:(id)arg4 selfIPString:(id)arg5 usb:(bool)arg6 completion:(id /* block */)arg7;
- (void)_clientUDPNWPathStartWithCompletion:(id /* block */)arg1;
- (void)_clientUDPSocketStartResponse:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)_clientUDPSocketStartWithCompletion:(id /* block */)arg1;
- (unsigned int)_getSockAddrInterfaceType:(const void*)arg1;
- (void)_invalidate;
- (void)_invalidated;
- (id)_lowLatencySelfAddressString:(id*)arg1;
- (void)_serverRPConnectionHandleConnectionAccepted:(int)arg1;
- (void)_serverRPConnectionHandleConnectionStarted:(id)arg1;
- (void)_serverRPConnectionStartRequest:(id)arg1 options:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)_serverUDPNWPathNextWithEndpoint:(id)arg1 nwInterface:(id)arg2 selfMACData:(id)arg3 peerIP:(union { struct sockaddr { unsigned char x_1_1_1; unsigned char x_1_1_2; BOOL x_1_1_3[14]; } x1; struct sockaddr_in { unsigned char x_2_1_1; unsigned char x_2_1_2; unsigned short x_2_1_3; struct in_addr { unsigned int x_4_2_1; } x_2_1_4; BOOL x_2_1_5[8]; } x2; struct sockaddr_in6 { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned short x_3_1_3; unsigned int x_3_1_4; struct in6_addr { union { unsigned char x_1_3_1[16]; unsigned short x_1_3_2[8]; unsigned int x_1_3_3[4]; } x_5_2_1; } x_3_1_5; unsigned int x_3_1_6; } x3; })arg4 peerMACData:(id)arg5 usb:(bool)arg6 responseHandler:(id /* block */)arg7;
- (void)_serverUDPNWPathStartRequest:(id)arg1 options:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)_serverUDPSocketStartRequest:(id)arg1 options:(id)arg2 responseHandler:(id /* block */)arg3;
- (bool)_startServerConnectionAndReturnError:(id*)arg1;
- (void)_updateTrafficRegistration;
- (void)_updateTrafficRegistrationForDestination:(id)arg1;
- (void)_updateTrafficRegistrationForIP:(const union { struct sockaddr { unsigned char x_1_1_1; unsigned char x_1_1_2; BOOL x_1_1_3[14]; } x1; struct sockaddr_in { unsigned char x_2_1_1; unsigned char x_2_1_2; unsigned short x_2_1_3; struct in_addr { unsigned int x_4_2_1; } x_2_1_4; BOOL x_2_1_5[8]; } x2; struct sockaddr_in6 { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned short x_3_1_3; unsigned int x_3_1_4; struct in6_addr { union { unsigned char x_1_3_1[16]; unsigned short x_1_3_2[8]; unsigned int x_1_3_3[4]; } x_5_2_1; } x_3_1_5; unsigned int x_3_1_6; } x3; }*)arg1;
- (void)acceptedByServer;
- (void)activateForServerRequest:(id)arg1 options:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id /* block */)connectionReadyHandler;
- (void)dealloc;
- (unsigned long long)delegatedProcessUPID;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (id)destinationString;
- (id /* block */)disconnectHandler;
- (id)dispatchQueue;
- (void)encodeWithCoder:(id)arg1;
- (id /* block */)flowControlWriteChangedHandler;
- (int)flowControlWriteState;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)messenger;
- (id)nwClientID;
- (void)prepareWithCompletion:(id /* block */)arg1;
- (id)pskData;
- (id /* block */)receivedEventHandler;
- (id /* block */)receivedRequestHandler;
- (void)sendEventID:(id)arg1 event:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (void)sendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(id /* block */)arg4;
- (bool)serverMode;
- (id)serviceType;
- (void)setConnectionReadyHandler:(id /* block */)arg1;
- (void)setDelegatedProcessUPID:(unsigned long long)arg1;
- (void)setDestinationString:(id)arg1;
- (void)setDisconnectHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setFlowControlWriteChangedHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setMessenger:(id)arg1;
- (void)setNwClientID:(id)arg1;
- (void)setPskData:(id)arg1;
- (void)setReceivedEventHandler:(id /* block */)arg1;
- (void)setReceivedRequestHandler:(id /* block */)arg1;
- (void)setServerMode:(bool)arg1;
- (void)setServiceType:(id)arg1;
- (void)setStatusChangedHandler:(id /* block */)arg1;
- (void)setStreamAcceptHandler:(id /* block */)arg1;
- (void)setStreamFlags:(unsigned int)arg1;
- (void)setStreamID:(id)arg1;
- (void)setStreamKey:(id)arg1;
- (void)setStreamQoS:(int)arg1;
- (void)setStreamQoSOnSocket:(int)arg1;
- (void)setStreamSocket:(int)arg1;
- (void)setStreamType:(int)arg1;
- (void)setTrafficFlags:(unsigned int)arg1;
- (void)setTrafficSessionID:(id)arg1;
- (void)startServerConnectionWithCompletion:(id /* block */)arg1;
- (id /* block */)statusChangedHandler;
- (unsigned long long)statusFlags;
- (id /* block */)streamAcceptHandler;
- (unsigned int)streamFlags;
- (id)streamID;
- (id)streamKey;
- (int)streamQoS;
- (int)streamSocket;
- (int)streamType;
- (unsigned int)trafficFlags;
- (id)trafficSessionID;

@end
