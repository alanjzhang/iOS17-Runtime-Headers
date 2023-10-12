/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NPAppProxyFlowBridge : NSObject {
    NSObject<OS_nw_connection> * _connection;
    NSError * _connectionError;
    int  _currentState;
    bool  _eofFlow;
    bool  _eofNW;
    NEAppProxyFlow * _flow;
    NSObject<OS_os_transaction> * _networkTransaction;
    NSObject<OS_nw_context> * _nwContext;
    NSObject<OS_dispatch_queue> * _queue;
    NWEndpoint * _remoteEndpoint;
}

- (void).cxx_destruct;
- (id)initWithAppProxyFlow:(id)arg1 nwContext:(id)arg2;

@end
