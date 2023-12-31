/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NSPFlowDivertProvider : NEAppProxyProvider {
    NSPManager * _manager;
}

@property (retain) NSPManager *manager;

- (void).cxx_destruct;
- (bool)handleNewFlow:(id)arg1;
- (id)init;
- (id)manager;
- (void)setManager:(id)arg1;
- (void)startProxyWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)stopProxyWithReason:(long long)arg1 completionHandler:(id /* block */)arg2;

@end
