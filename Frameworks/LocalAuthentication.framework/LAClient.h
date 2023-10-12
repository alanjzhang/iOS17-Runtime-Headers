/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/LocalAuthentication.framework/LocalAuthentication
 */

@interface LAClient : NSObject <LAContextCallbackXPC, LAContextXPC> {
    LACachedExternalizedContext * _cachedExternalizedContext;
    LAContext * _context;
    NSData * _existingContext;
    NSMutableArray * _invalidations;
    NSError * _permanentError;
    NSString * _proxyId;
    NSObject<LAContextXPC> * _remoteContext;
    NSXPCConnection * _serverConnection;
    bool  _shouldRecoverConnection;
    NSObject<LAContextXPC> * _synchronousRemoteContext;
    <LAUIDelegate> * _uiDelegate;
    NSNumber * _userSession;
    NSUUID * _uuid;
}

@property (retain) LACachedExternalizedContext *cachedExternalizedContext;
@property (nonatomic, readonly) LAContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSData *existingContext;
@property (nonatomic, readonly) NSData *externalizedContext;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableArray *invalidations;
@property (retain) NSError *permanentError;
@property (nonatomic, retain) NSString *proxyId;
@property (nonatomic, retain) NSObject<LAContextXPC> *remoteContext;
@property (nonatomic, readonly) NSXPCConnection *serverConnection;
@property bool shouldRecoverConnection;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<LAContextXPC> *synchronousRemoteContext;
@property (nonatomic) <LAUIDelegate> *uiDelegate;
@property (nonatomic, readonly) NSNumber *userSession;
@property (nonatomic, retain) NSUUID *uuid;

+ (void)_performInvalidationBlocks:(id)arg1;
+ (id)_queue;
+ (id)createConnection:(const unsigned int*)arg1 legacyService:(bool)arg2;

- (void).cxx_destruct;
- (void)_checkIdResultForTCC:(id)arg1 synchronous:(bool)arg2 error:(id)arg3 retryBlock:(id /* block */)arg4 finally:(id /* block */)arg5;
- (void)_connectToServerWithRecovery:(bool)arg1 userSession:(const unsigned int*)arg2 legacyService:(bool)arg3;
- (void)_handleConnectionResult:(id)arg1 uuid:(id)arg2 proxyId:(id)arg3 error:(id)arg4;
- (void)_performCallBool:(id /* block */)arg1 finally:(id /* block */)arg2;
- (void)_performCallId:(id /* block */)arg1 finally:(id /* block */)arg2;
- (void)_performSynchronous:(bool)arg1 callBool:(id /* block */)arg2 finally:(id /* block */)arg3;
- (void)_performSynchronous:(bool)arg1 callId:(id /* block */)arg2 finally:(id /* block */)arg3;
- (void)_recoverConnection;
- (void)_scheduleRecovery;
- (void)_serializedInvalidateWithMessage:(id)arg1;
- (bool)_setPermanentError:(id)arg1;
- (void)_synchronousRemoteObjectProxy:(const unsigned int*)arg1 performCall:(id /* block */)arg2;
- (id)_updateOptions:(id)arg1;
- (void)allowTransferToProcess:(int)arg1 receiverAuditTokenData:(id)arg2 reply:(id /* block */)arg3;
- (void)authMethodWithReply:(id /* block */)arg1;
- (void)bootstrapServiceType:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)cachedExternalizedContext;
- (id)context;
- (void)credentialOfType:(long long)arg1 reply:(id /* block */)arg2;
- (void)dealloc;
- (void)evaluateACL:(id)arg1 operation:(id)arg2 options:(id)arg3 reply:(id /* block */)arg4;
- (void)evaluateACL:(id)arg1 operation:(id)arg2 options:(id)arg3 uiDelegate:(id)arg4 reply:(id /* block */)arg5;
- (void)evaluateACL:(id)arg1 operation:(id)arg2 options:(id)arg3 uiDelegate:(id)arg4 synchronous:(bool)arg5 reply:(id /* block */)arg6;
- (void)evaluatePolicy:(long long)arg1 options:(id)arg2 reply:(id /* block */)arg3;
- (void)evaluatePolicy:(long long)arg1 options:(id)arg2 uiDelegate:(id)arg3 reply:(id /* block */)arg4;
- (void)evaluatePolicy:(long long)arg1 options:(id)arg2 uiDelegate:(id)arg3 synchronous:(bool)arg4 reply:(id /* block */)arg5;
- (id)existingContext;
- (id)externalizedContext;
- (void)externalizedContextWithReply:(id /* block */)arg1;
- (void)failProcessedEvent:(long long)arg1 failureError:(id)arg2 reply:(id /* block */)arg3;
- (id)initWithExternalizedContext:(id)arg1 userSession:(unsigned int*)arg2 context:(id)arg3;
- (id)initWithUUID:(id)arg1 token:(id)arg2 senderAuditTokenData:(id)arg3 context:(id)arg4;
- (void)invalidateWithMessage:(id)arg1;
- (void)invalidateWithReply:(id /* block */)arg1;
- (void)invalidatedWithError:(id)arg1;
- (id)invalidations;
- (void)isCredentialSet:(long long)arg1 reply:(id /* block */)arg2;
- (void)notifyEvent:(long long)arg1 options:(id)arg2 reply:(id /* block */)arg3;
- (void)optionsForInternalOperation:(long long)arg1 reply:(id /* block */)arg2;
- (void)pauseProcessedEvent:(long long)arg1 pause:(bool)arg2 reply:(id /* block */)arg3;
- (id)permanentError;
- (void)prearmTouchIdWithReply:(id /* block */)arg1;
- (id)proxyId;
- (id)remoteContext;
- (void)resetProcessedEvent:(long long)arg1 reply:(id /* block */)arg2;
- (void)resetWithReply:(id /* block */)arg1;
- (void)retryProcessedEvent:(long long)arg1 reply:(id /* block */)arg2;
- (id)serverConnection;
- (id)serverPropertyForOption:(long long)arg1 error:(id*)arg2;
- (void)serverPropertyForOption:(long long)arg1 reply:(id /* block */)arg2;
- (void)setCachedExternalizedContext:(id)arg1;
- (void)setCredential:(id)arg1 forProcessedEvent:(long long)arg2 credentialType:(long long)arg3 reply:(id /* block */)arg4;
- (void)setCredential:(id)arg1 type:(long long)arg2 reply:(id /* block */)arg3;
- (void)setExistingContext:(id)arg1;
- (void)setOptions:(id)arg1 forInternalOperation:(long long)arg2 reply:(id /* block */)arg3;
- (void)setPermanentError:(id)arg1;
- (void)setProxyId:(id)arg1;
- (void)setRemoteContext:(id)arg1;
- (bool)setServerPropertyForOption:(long long)arg1 value:(id)arg2 error:(id*)arg3;
- (void)setServerPropertyForOption:(long long)arg1 value:(id)arg2 reply:(id /* block */)arg3;
- (void)setShouldRecoverConnection:(bool)arg1;
- (void)setShowingCoachingHint:(bool)arg1 event:(long long)arg2 reply:(id /* block */)arg3;
- (void)setUiDelegate:(id)arg1;
- (void)setUuid:(id)arg1;
- (bool)shouldRecoverConnection;
- (id)synchronousExternalizedContextWithError:(id*)arg1;
- (id)synchronousRemoteContext;
- (void)tokenForTransferToUnknownProcess:(id /* block */)arg1;
- (id)uiDelegate;
- (id)userSession;
- (id)uuid;
- (void)verifyFileVaultUser:(id)arg1 volumeUuid:(id)arg2 options:(unsigned long long)arg3 reply:(id /* block */)arg4;

@end
