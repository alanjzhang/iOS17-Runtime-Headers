/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUXPCAgentConnection : NSObject {
    CUXPCAgent * _agent;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSXPCConnection * _xpcCnx;
}

- (void).cxx_destruct;
- (void)connectionInvalidated;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end
