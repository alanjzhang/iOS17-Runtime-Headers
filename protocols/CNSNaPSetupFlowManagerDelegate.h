/* Generated by RuntimeBrowser.
 */

@protocol CNSNaPSetupFlowManagerDelegate <NSObject>

@optional

- (void)onboardingFromFlowManager:(CNSNaPSetupFlowManager *)arg1 didSelectSharingAudience:(unsigned long long)arg2;
- (void)onboardingFromFlowManager:(CNSNaPSetupFlowManager *)arg1 didUpdateSharingState:(bool)arg2;
- (void)onboardingFromFlowManager:(CNSNaPSetupFlowManager *)arg1 didUpdateWithSharingResult:(CNMeCardSharingResult *)arg2;
- (void)snapAvatarPosterEditorFromFlowManager:(CNSNaPSetupFlowManager *)arg1 didUpdateContact:(CNMutableContact *)arg2 withVisualIdentity:(CNVisualIdentity *)arg3;

@end