/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GPUToolsTransport.framework/GPUToolsTransport
 */

@interface GTReplayProfileReplyStream : NSObject <GTXPCDispatcher> {
    GTBulkDataServiceXPCProxy * _bulkDataProxy;
    id /* block */  _callback;
    NSObject<OS_os_log> * _log;
    NSObject<OS_dispatch_queue> * _serialQueue;
    GTReplayRequestToken * _token;
    unsigned long long  dispatcherId;
}

@property unsigned long long dispatcherId;

- (void).cxx_destruct;
- (void)dispatchMessage:(id)arg1 replyConnection:(id)arg2;
- (unsigned long long)dispatcherId;
- (id)initWithCallback:(id /* block */)arg1 bulkDataProxy:(id)arg2 andToken:(id)arg3;
- (void)setDispatcherId:(unsigned long long)arg1;

@end
