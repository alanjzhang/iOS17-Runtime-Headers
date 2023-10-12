/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSPurchaseManager : NSObject {
    NSObject<OS_dispatch_queue> * _completionBlockQueue;
    <SSPurchaseManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSString * _managerIdentifier;
    SSXPCConnection * _requestConnection;
    SSXPCConnection * _responseConnection;
}

@property <SSPurchaseManagerDelegate> *delegate;
@property (readonly) NSString *managerIdentifier;

- (void)_connectToDaemon;
- (void)_handleAuthenticateRequest:(id)arg1 fromConnection:(id)arg2;
- (void)_handleMessage:(id)arg1 fromConnection:(id)arg2;
- (void)_handlePurchasesFinished:(id)arg1 fromConnection:(id)arg2;
- (id)_newEncodedArrayWithPurchaseIdentifiers:(id)arg1;
- (id)_newEncodedArrayWithPurchases:(id)arg1;
- (void)_reconnectForDaemonLaunch;
- (id)_requestConnection;
- (id)_responseConnection;
- (bool)_resultForReply:(id)arg1 error:(id*)arg2;
- (void)_sendCompletionBlock:(id /* block */)arg1 forGetPurchasesReply:(id)arg2;
- (void)_sendCompletionBlock:(id /* block */)arg1 forStandardReply:(id)arg2;
- (void)_sendMessage:(long long)arg1 withPurchaseIdentifiers:(id)arg2 afterPurchase:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)_sendMessage:(long long)arg1 withPurchases:(id)arg2 afterPurchase:(id)arg3 completionBlock:(id /* block */)arg4;
- (bool)_shouldInvalidateSubscriptionStatusForPurchaseResponse:(id)arg1;
- (void)addPurchases:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)cancelPurchases:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)dealloc;
- (id)delegate;
- (void)getPurchasesUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithManagerIdentifier:(id)arg1;
- (void)insertPurchases:(id)arg1 afterPurchase:(id)arg2 withCompletionBlock:(id /* block */)arg3;
- (id)managerIdentifier;
- (void)movePurchases:(id)arg1 afterPurchase:(id)arg2 withCompletionBlock:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;

@end
