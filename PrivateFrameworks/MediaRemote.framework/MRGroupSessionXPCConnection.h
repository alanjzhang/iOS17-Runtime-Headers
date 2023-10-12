/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRGroupSessionXPCConnection : NSObject {
    <MRGroupSessionClientXPCProtocol> * _clientObject;
    NSXPCConnection * _connection;
    id /* block */  _invalidationHandler;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) <MRGroupSessionClientXPCProtocol> *clientObject;
@property (nonatomic, readonly) NSXPCConnection *connection;
@property (nonatomic, readonly) id /* block */ invalidationHandler;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)clientObject;
- (id)connection;
- (void)dealloc;
- (id)initWithClientObject:(id)arg1 invalidationHandler:(id /* block */)arg2;
- (void)initializeConnection;
- (id /* block */)invalidationHandler;
- (id)queue;
- (void)sendMessage:(id /* block */)arg1;
- (id)server;

@end
