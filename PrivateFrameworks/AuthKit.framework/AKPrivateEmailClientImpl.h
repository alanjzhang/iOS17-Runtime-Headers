/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKPrivateEmailClientImpl : NSObject <AKPrivateEmailClientProtocol> {
    <AKPrivateEmailUIProvider> * _uiProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) <AKPrivateEmailUIProvider> *uiProvider;

- (void).cxx_destruct;
- (void)presentPrivateEmailUIForContext:(id)arg1 completion:(id /* block */)arg2;
- (void)setUiProvider:(id)arg1;
- (id)uiProvider;

@end
