/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

@interface DOCViewServiceErrorViewController : UIViewController <DOCViewServiceErrorViewDelegate> {
    <DOCViewServiceErrorViewControllerDelegate> * _delegate;
    DOCViewServiceErrorView * _errorView;
}

@property <DOCViewServiceErrorViewControllerDelegate> *delegate;
@property (nonatomic, retain) NSString *errorSubtitle;
@property (nonatomic, retain) NSString *errorTitle;

- (void).cxx_destruct;
- (id)delegate;
- (void)didTapTryAgainInErrorView:(id)arg1;
- (id)errorSubtitle;
- (id)errorTitle;
- (void)loadView;
- (void)setDelegate:(id)arg1;
- (void)setErrorSubtitle:(id)arg1;
- (void)setErrorTitle:(id)arg1;

@end
