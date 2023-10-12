/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
 */

@interface INCExtensionConnection : NSObject <INXPCListenerEndpointProvider, NSXPCListenerDelegate> {
    id /* block */  _appHandler;
    INCAppProxy * _appProxy;
    <INIntentBackgroundHandlingAssertion> * _backgroundHandlingAssertion;
    FBSDisplayLayoutMonitor * _displayLayoutMonitor;
    NSArray * _extensionInputItems;
    id /* block */  _interruptionHandler;
    INCDisplayLayoutMonitorObserver * _layoutObserver;
    RBSAssertion * _processAssertion;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _remoteExtensionProxyProvider;
    double  _requestTimeoutInterval;
    INWatchdogTimer * _requestTimer;
    bool  _shouldObserveLayout;
    long long  _supportedExtensionTypes;
    id /* block */  _timeoutHandler;
    INCExtensionTransaction * _transaction;
    NSXPCConnection * _xpcConnection;
    NSXPCInterface * _xpcInterface;
    NSXPCListener * _xpcListener;
    id  _xpcObject;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_queue;
@property (setter=_setShouldObserveLayout:, nonatomic) bool _shouldObserveLayout;
@property (nonatomic, readonly) INCExtensionTransaction *_transaction;
@property (nonatomic, copy) id /* block */ appHandler;
@property (nonatomic, readonly) INCAppProxy *appProxy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *extensionInputItems;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) INIntent *intent;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ remoteExtensionProxyProvider;
@property (nonatomic) double requestTimeoutInterval;
@property (nonatomic) bool requiresTCC;
@property (nonatomic) bool requiresTrustCheck;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long supportedExtensionTypes;
@property (nonatomic, copy) id /* block */ timeoutHandler;
@property (setter=setXPCConnection:, nonatomic, retain) NSXPCConnection *xpcConnection;
@property (setter=setXPCInterface:, nonatomic, retain) NSXPCInterface *xpcInterface;
@property (nonatomic, readonly) NSXPCListener *xpcListener;
@property (setter=setXPCObject:, nonatomic, retain) id xpcObject;

+ (void)initialize;

- (void).cxx_destruct;
- (bool)_cancelRequestTimer;
- (void)_invalidateAssertions;
- (void)_invalidateDisplayLayoutMonitor;
- (void)_invalidateInUseAssertion;
- (void)_invalidateRunningBoardAssertion;
- (id)_queue;
- (void)_setShouldObserveLayout:(bool)arg1;
- (bool)_shouldObserveLayout;
- (void)_startRequestTimerWithExtensionProxy:(id)arg1;
- (void)_takeAssertionsForIntent:(id)arg1 extensionBundleIdentifier:(id)arg2 processIdentifier:(int)arg3;
- (void)_takeInUseAssertionForIntent:(id)arg1 extensionBundleIdentifier:(id)arg2;
- (void)_takeRunningBoardAssertionForProcessIdentifier:(int)arg1;
- (double)_timeoutIntervalForTransactionState:(id)arg1;
- (id)_transaction;
- (id /* block */)appHandler;
- (id)appProxy;
- (void)dealloc;
- (id)extensionInputItems;
- (id)initWithIntent:(id)arg1;
- (id)initWithIntent:(id)arg1 remoteProxyProvider:(id /* block */)arg2;
- (id)initWithIntent:(id)arg1 supportedExtensionTypes:(long long)arg2 donateInteraction:(bool)arg3 groupIdentifier:(id)arg4 remoteProxyProvider:(id /* block */)arg5;
- (id)initWithIntent:(id)arg1 supportedExtensionTypes:(long long)arg2 remoteProxyProvider:(id /* block */)arg3;
- (id)intent;
- (id /* block */)interruptionHandler;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id /* block */)remoteExtensionProxyProvider;
- (double)requestTimeoutInterval;
- (bool)requiresTCC;
- (bool)requiresTrustCheck;
- (void)reset;
- (void)resumeWithCompletionHandler:(id /* block */)arg1;
- (void)setAppHandler:(id /* block */)arg1;
- (void)setExtensionInputItems:(id)arg1;
- (void)setIntent:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setRemoteExtensionProxyProvider:(id /* block */)arg1;
- (void)setRequestTimeoutInterval:(double)arg1;
- (void)setRequiresTCC:(bool)arg1;
- (void)setRequiresTrustCheck:(bool)arg1;
- (void)setTimeoutHandler:(id /* block */)arg1;
- (void)setXPCConnection:(id)arg1;
- (void)setXPCInterface:(id)arg1;
- (void)setXPCObject:(id)arg1;
- (long long)supportedExtensionTypes;
- (id /* block */)timeoutHandler;
- (id)xpcConnection;
- (id)xpcInterface;
- (id)xpcListener;
- (id)xpcListenerEndpointWithInterface:(id)arg1 object:(id)arg2;
- (id)xpcObject;

@end
