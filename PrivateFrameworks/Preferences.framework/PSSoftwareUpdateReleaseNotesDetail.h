/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSoftwareUpdateReleaseNotesDetail : PSListController <UIWebViewDelegate> {
    NSString * _releaseNotes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *releaseNotes;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (void)loadView;
- (id)releaseNotes;
- (void)setReleaseNotes:(id)arg1;
- (id)specifiers;
- (bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;

@end
