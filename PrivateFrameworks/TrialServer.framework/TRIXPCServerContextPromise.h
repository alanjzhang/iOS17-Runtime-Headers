/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

@interface TRIXPCServerContextPromise : NSObject {
    NSObject<OS_dispatch_queue> * _fullfillmentQueue;
    TRIServerContext * _serverContext;
    <TRITaskQueuing> * _taskQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *fullfillmentQueue;
@property (nonatomic, retain) TRIServerContext *serverContext;
@property (nonatomic, retain) <TRITaskQueuing> *taskQueue;

- (void).cxx_destruct;
- (void)addBlockToExecuteAfterPromiseFullfillment:(id /* block */)arg1;
- (void)fullfillWithContext:(id)arg1 taskQueue:(id)arg2;
- (id)fullfillmentQueue;
- (id)init;
- (void)reject;
- (id)serverContext;
- (void)setFullfillmentQueue:(id)arg1;
- (void)setServerContext:(id)arg1;
- (void)setTaskQueue:(id)arg1;
- (id)taskQueue;

@end
