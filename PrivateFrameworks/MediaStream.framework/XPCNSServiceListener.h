/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

@interface XPCNSServiceListener : NSObject <XPCServiceListenerDelegate> {
    <XPCNSServiceListenerDelegate> * _delegate;
    XPCServiceListener * _serviceListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <XPCNSServiceListenerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) NSString *serviceName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)XPCServiceListener:(id)arg1 didReceiveNewConnection:(id)arg2;
- (bool)XPCServiceListener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)delegate;
- (id)initWithServiceName:(id)arg1 queue:(id)arg2 delegate:(id)arg3;
- (id)serviceName;
- (void)shutDownCompletionBlock:(id /* block */)arg1;
- (void)start;

@end
