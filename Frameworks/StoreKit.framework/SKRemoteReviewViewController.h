/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKRemoteReviewViewController : _UIRemoteViewController <SKUIClientReviewViewController> {
    <SKRemoteReviewViewControllerDelegate> * _delegate;
    SKStoreReviewViewController * _reviewViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKRemoteReviewViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) SKStoreReviewViewController *reviewViewController;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (id)delegate;
- (void)didFinishWithResult:(id)arg1 error:(id)arg2;
- (id)reviewViewController;
- (void)setDelegate:(id)arg1;
- (void)setReviewViewController:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
