/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSAuthorizeMachineProtocolHandler : AMSURLProtocolHandler {
    id /* block */  _reconfigureRequestHandler;
}

@property (nonatomic, copy) id /* block */ reconfigureRequestHandler;

- (void).cxx_destruct;
- (void)reconfigureNewRequest:(id)arg1 originalTask:(id)arg2 redirect:(bool)arg3 error:(id*)arg4;
- (id /* block */)reconfigureRequestHandler;
- (void)setReconfigureRequestHandler:(id /* block */)arg1;

@end
