/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKCloudServiceSetupRemoteViewController : _UIRemoteViewController <SKCloudServiceSetupExtensionClientInterface> {
    <SKCloudServiceSetupRemoteViewControllerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKCloudServiceSetupRemoteViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (id)delegate;
- (void)didFinishLoadingWithSuccess:(bool)arg1 error:(id)arg2;
- (void)dismissCloudServiceSetupViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)dismissSafariViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)overrideCreditCardPresentationWithCompletion:(id /* block */)arg1;
- (void)overrideRedeemCameraPerformAction:(long long)arg1 withObject:(id)arg2;
- (void)presentSafariViewControllerWithURL:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;

@end
