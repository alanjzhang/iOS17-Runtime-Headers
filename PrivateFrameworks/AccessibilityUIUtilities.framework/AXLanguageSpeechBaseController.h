/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
 */

@interface AXLanguageSpeechBaseController : AXUISettingsBaseListController {
    AXSpeechSettingsModelController * _speechModelController;
}

@property (nonatomic, readonly) bool includeLocaleInSelectorDialog;
@property (nonatomic, readonly) bool showsSelectedVoiceVariantForLanguage;
@property (nonatomic, retain) AXSpeechSettingsModelController *speechModelController;
@property (nonatomic, readonly) NSString *speechSourceKey;

- (void).cxx_destruct;
- (id)_selectedDialect:(id)arg1;
- (bool)includeLocaleInSelectorDialog;
- (id)init;
- (void)setSpeechModelController:(id)arg1;
- (bool)showsSelectedVoiceVariantForLanguage;
- (id)specifiersForLanguagesAndAccents;
- (id)speechModelController;
- (id)speechSourceKey;

@end
