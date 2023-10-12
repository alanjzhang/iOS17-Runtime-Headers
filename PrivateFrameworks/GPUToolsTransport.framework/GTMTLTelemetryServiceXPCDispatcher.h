/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GPUToolsTransport.framework/GPUToolsTransport
 */

@interface GTMTLTelemetryServiceXPCDispatcher : GTXPCDispatcher <GTMTLTelemetryServiceXPCDispatcher> {
    <GTMTLTelemetryService> * _implInstance;
}

- (void).cxx_destruct;
- (void)broadcastDisconnect:(id)arg1 replyConnection:(id)arg2;
- (void)deregisterObserver_:(id)arg1 replyConnection:(id)arg2;
- (id)initWithService:(id)arg1 properties:(id)arg2 notifyConnection:(id)arg3;
- (void)query_:(id)arg1 replyConnection:(id)arg2;
- (void)registerObserver_:(id)arg1 replyConnection:(id)arg2;
- (void)update_:(id)arg1 replyConnection:(id)arg2;

@end
