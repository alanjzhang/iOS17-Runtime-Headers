/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

@interface OBPrivacyModalNavigationController : OBNavigationController {
    bool  _darkMode;
    id /* block */  _dismissButtonPressedHandler;
}

@property (getter=isDarkMode, nonatomic) bool darkMode;
@property (copy) id /* block */ dismissButtonPressedHandler;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_doneButtonPressed;
- (void)addDismissButtonWithPressedHandler:(id /* block */)arg1;
- (id /* block */)dismissButtonPressedHandler;
- (bool)isDarkMode;
- (long long)preferredUserInterfaceStyle;
- (void)setDarkMode:(bool)arg1;
- (void)setDismissButtonPressedHandler:(id /* block */)arg1;
- (unsigned long long)supportedInterfaceOrientations;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/AccessibilityBundles/OnBoardingKit.axbundle/OnBoardingKit

- (bool)accessibilityPerformEscape;

// OBPrivacyModalNavigationController (SafeCategory)

+ (Class)safeCategoryBaseClass;

@end
