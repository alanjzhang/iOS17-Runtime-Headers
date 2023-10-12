/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSDaemonConnectionErrorForwardingProxy : NSProxy {
    NSXPCInterface * _interface;
    bool  _isSync;
    <NSXPCProxyCreating> * _proxy;
}

@property (nonatomic, readonly) NSXPCInterface *interface;
@property (nonatomic, readonly) bool isSync;
@property (nonatomic, readonly) <NSXPCProxyCreating> *proxy;

- (void).cxx_destruct;
- (id)_blockToInvokeWithErrorForwardingForInvocation:(id)arg1 errorArgumentIndex:(unsigned long long*)arg2;
- (void)forwardInvocation:(id)arg1;
- (id)initWithProxy:(id)arg1 fromInterface:(id)arg2;
- (id)initWithProxy:(id)arg1 fromInterface:(id)arg2 isSync:(bool)arg3;
- (id)interface;
- (bool)isSync;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)proxy;

@end
