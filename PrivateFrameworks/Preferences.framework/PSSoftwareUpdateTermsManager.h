/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSoftwareUpdateTermsManager : NSObject <RemoteUIControllerDelegate> {
    bool  _agreeToCombinedTOSInProgress;
    UIViewController * _hostController;
    bool  _overrideNextRUIAction;
    UIViewController * _presentedViewController;
    RUIStyle * _serverFlowStyle;
    UINavigationController * _showProgressViewController;
    id /* block */  _termsCompletion;
    RemoteUIController * _termsRemoteUI;
    SUDescriptor * _update;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) RUIStyle *serverFlowStyle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_acceptedTermsFromAsset;
- (void)_acceptedTermsVersion:(id)arg1;
- (void)_finishTermsWithAcceptance:(bool)arg1 error:(id)arg2;
- (void)_handleAgreeFromObjectModel:(id)arg1;
- (void)_loadRemoteUITermsWithCloudAtURL:(id)arg1;
- (void)_loadTermsFromUpdateAsset;
- (void)_loadTermsRemoteUIFailureWithError:(id)arg1;
- (void)_presentModalController:(id)arg1;
- (void)_termsDisagree;
- (void)cancelLoadingTerms:(id)arg1;
- (void)presentTermsIfNecessaryForUpdate:(id)arg1 overController:(id)arg2 showLoadSpinner:(bool)arg3 completion:(id /* block */)arg4;
- (void)remoteUIController:(id)arg1 didFinishLoadWithError:(id)arg2;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3;
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(bool)arg3;
- (void)remoteUIControllerDidDismiss:(id)arg1;
- (id)serverFlowStyle;
- (void)setServerFlowStyle:(id)arg1;
- (void)showLoadingSpinnerViewController;
- (id)versionFromLicenseText:(id)arg1;

@end
