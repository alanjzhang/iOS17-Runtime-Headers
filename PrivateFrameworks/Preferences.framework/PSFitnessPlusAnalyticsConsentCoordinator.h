/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSFitnessPlusAnalyticsConsentCoordinator : NSObject {
    AMSAcknowledgePrivacyTask * _acknowledgePrivacyTask;
}

- (void).cxx_destruct;
- (bool)fetchAnalyticsConsent;
- (void)fetchSubscriptionStatusWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)setAnalyticsConsent:(bool)arg1 completion:(id /* block */)arg2;

@end
