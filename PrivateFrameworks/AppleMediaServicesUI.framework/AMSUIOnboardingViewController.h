/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
 */

@interface AMSUIOnboardingViewController : UIViewController <UIScrollViewDelegate> {
    NSString * _descriptionText;
    UIImage * _image;
    NSObject<OS_dispatch_queue> * _metricsQueue;
    id /* block */  _primaryButtonCallback;
    NSString * _primaryButtonText;
    OBPrivacyLinkController * _privacyLinkController;
    UIImage * _rightImage;
    id /* block */  _secondaryButtonCallback;
    NSString * _secondaryButtonText;
    NSString * _titleText;
    bool  _viewHasAppeared;
    bool  _wasNavigationBarHidden;
    OBWelcomeController * _welcomeController;
}

@property (nonatomic, readonly) UITraitCollection *cappedTraitCollection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *descriptionText;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImage *headerImage;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) bool isPresentedInFormSheet;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *metricsQueue;
@property (nonatomic, copy) id /* block */ primaryButtonCallback;
@property (nonatomic, retain) NSString *primaryButtonText;
@property (nonatomic, retain) OBPrivacyLinkController *privacyLinkController;
@property (nonatomic, retain) UIImage *rightImage;
@property (nonatomic, copy) id /* block */ secondaryButtonCallback;
@property (nonatomic, retain) NSString *secondaryButtonText;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *titleText;
@property (nonatomic) bool viewHasAppeared;
@property (nonatomic) bool wasNavigationBarHidden;
@property (nonatomic, retain) OBWelcomeController *welcomeController;

+ (id)privacyLinkIdentifiersFromController:(id)arg1;

- (void).cxx_destruct;
- (id)cappedTraitCollection;
- (id)childTraitCollectionForViewController:(id)arg1;
- (void)commonInitWithPrimaryButtonText:(id)arg1 privacyLinkController:(id)arg2;
- (void)commonSetupWithPrimaryButtonText:(id)arg1 privacyLinkBundleIdentifiers:(id)arg2;
- (void)commonSetupWithPrimaryButtonText:(id)arg1 secondaryButtonText:(id)arg2 privacyLinkBundleIdentifiers:(id)arg3;
- (id)descriptionText;
- (void)didTapPrimaryButton:(id)arg1;
- (void)didTapSecondaryButton:(id)arg1;
- (id)headerImage;
- (id)image;
- (id)initWithHeaderImage:(id)arg1 titleText:(id)arg2 descriptionText:(id)arg3 primaryButtonText:(id)arg4 privacyLinkBundleIdentifier:(id)arg5;
- (id)initWithHeaderImage:(id)arg1 titleText:(id)arg2 descriptionText:(id)arg3 primaryButtonText:(id)arg4 privacyLinkController:(id)arg5;
- (id)initWithHeaderImage:(id)arg1 titleText:(id)arg2 descriptionText:(id)arg3 primaryButtonText:(id)arg4 secondaryButtonText:(id)arg5 privacyLinkController:(id)arg6;
- (id)initWithHeaderImage:(id)arg1 titleText:(id)arg2 features:(id)arg3 primaryButtonText:(id)arg4 privacyLinkBundleIdentifier:(id)arg5;
- (id)initWithTitleText:(id)arg1 features:(id)arg2 primaryButtonText:(id)arg3 privacyLinkBundleIdentifier:(id)arg4;
- (id)initWithTitleText:(id)arg1 features:(id)arg2 primaryButtonText:(id)arg3 privacyLinkController:(id)arg4;
- (bool)isPresentedInFormSheet;
- (id)keyCommands;
- (id)metricsQueue;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (id /* block */)primaryButtonCallback;
- (id)primaryButtonText;
- (id)privacyLinkController;
- (id)rightImage;
- (id /* block */)secondaryButtonCallback;
- (id)secondaryButtonText;
- (void)setDescriptionText:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setMetricsQueue:(id)arg1;
- (void)setPrimaryButtonCallback:(id /* block */)arg1;
- (void)setPrimaryButtonText:(id)arg1;
- (void)setPrivacyLinkController:(id)arg1;
- (void)setRightImage:(id)arg1;
- (void)setSecondaryButtonCallback:(id /* block */)arg1;
- (void)setSecondaryButtonText:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)setViewHasAppeared:(bool)arg1;
- (void)setWasNavigationBarHidden:(bool)arg1;
- (void)setWelcomeController:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)titleText;
- (void)updateOverrideTraits;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (bool)viewHasAppeared;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (bool)wasNavigationBarHidden;
- (id)welcomeController;

@end
