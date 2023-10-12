/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
 */

@interface IAMModalWebMessageViewController : UIViewController {
    UIButton * _closeButton;
    <IAMViewControllerMetricsDelegate> * _metricsDelegate;
    bool  _shouldDisplayCloseButton;
    IAMWebView * _webView;
}

@property (nonatomic, retain) UIButton *closeButton;
@property (nonatomic) <IAMViewControllerMetricsDelegate> *metricsDelegate;
@property (nonatomic) bool shouldDisplayCloseButton;
@property (nonatomic, retain) IAMWebView *webView;

- (void).cxx_destruct;
- (void)_handleCloseButtonTap:(id)arg1;
- (id)closeButton;
- (id)initWithWebView:(id)arg1;
- (id)metricsDelegate;
- (void)setCloseButton:(id)arg1;
- (void)setMetricsDelegate:(id)arg1;
- (void)setShouldDisplayCloseButton:(bool)arg1;
- (void)setWebView:(id)arg1;
- (bool)shouldDisplayCloseButton;
- (void)viewDidLoad;
- (id)webView;

@end
