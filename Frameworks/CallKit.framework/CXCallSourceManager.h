/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXCallSourceManager : NSObject <CXCallSourceDelegate, CXTransactionManagerDelegate, NSXPCListenerDelegate> {
    <CXCallSourceManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSMutableDictionary * _identifierToCallSource;
    NSObject<OS_dispatch_queue> * _queue;
    CXTransactionManager * _transactionManager;
    CXTransactionGroup * _uncommittedTransactionGroup;
    NSXPCListener * _xpcListener;
}

@property (nonatomic, readonly) NSArray *callSources;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <CXCallSourceManagerDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *identifierToCallSource;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CXTransactionManager *transactionManager;
@property (nonatomic, retain) CXTransactionGroup *uncommittedTransactionGroup;
@property (nonatomic, readonly) NSXPCListener *xpcListener;

- (void).cxx_destruct;
- (void)_performDelegateCallback:(id /* block */)arg1;
- (void)addAction:(id)arg1 toUncommittedTransactionForCallSource:(id)arg2;
- (void)addCallSource:(id)arg1;
- (void)callSource:(id)arg1 actionCompleted:(id)arg2;
- (void)callSource:(id)arg1 registeredWithConfiguration:(id)arg2;
- (void)callSource:(id)arg1 reportedAudioFinishedForCallWithUUID:(id)arg2;
- (void)callSource:(id)arg1 reportedCallWithUUID:(id)arg2 changedFrequencyData:(id)arg3 forDirection:(long long)arg4;
- (void)callSource:(id)arg1 reportedCallWithUUID:(id)arg2 changedMeterLevel:(float)arg3 forDirection:(long long)arg4;
- (void)callSource:(id)arg1 reportedCallWithUUID:(id)arg2 crossDeviceIdentifier:(id)arg3 changedBytesOfDataUsed:(long long)arg4;
- (void)callSource:(id)arg1 reportedCallWithUUID:(id)arg2 endedAtDate:(id)arg3 privateReason:(long long)arg4 failureContext:(id)arg5;
- (void)callSource:(id)arg1 reportedCallWithUUID:(id)arg2 updated:(id)arg3;
- (void)callSource:(id)arg1 reportedNewIncomingCallWithUUID:(id)arg2 update:(id)arg3 completion:(id /* block */)arg4;
- (void)callSource:(id)arg1 reportedNewOutgoingCallWithUUID:(id)arg2 update:(id)arg3;
- (void)callSource:(id)arg1 reportedOutgoingCallWithUUID:(id)arg2 connectedAtDate:(id)arg3;
- (void)callSource:(id)arg1 reportedOutgoingCallWithUUID:(id)arg2 sentInvitationAtDate:(id)arg3;
- (void)callSource:(id)arg1 reportedOutgoingCallWithUUID:(id)arg2 startedConnectingAtDate:(id)arg3;
- (void)callSource:(id)arg1 requestedTransaction:(id)arg2 completion:(id /* block */)arg3;
- (void)callSourceConnectionEnded:(id)arg1;
- (void)callSourceConnectionStarted:(id)arg1;
- (void)callSourceInvalidated:(id)arg1;
- (id)callSourceWithIdentifier:(id)arg1;
- (id)callSources;
- (void)commitUncommittedTransactions;
- (id)delegate;
- (id)delegateQueue;
- (void)failOutstandingActionsForCallWithUUID:(id)arg1;
- (id)identifierToCallSource;
- (id)init;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)performDelegateCallback:(id /* block */)arg1;
- (id)queue;
- (void)removeCallSource:(id)arg1;
- (void)setUncommittedTransactionGroup:(id)arg1;
- (id)transactionManager;
- (void)transactionManager:(id)arg1 actionTimedOut:(id)arg2 forCallSource:(id)arg3;
- (void)transactionManager:(id)arg1 transactionGroupCompleted:(id)arg2;
- (id)uncommittedTransactionGroup;
- (id)xpcListener;

@end
