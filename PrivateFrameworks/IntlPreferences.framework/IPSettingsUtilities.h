/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/IntlPreferences.framework/IntlPreferences
 */

@interface IPSettingsUtilities : NSObject

+ (void)mirrorToWatchIfNecessary;
+ (void)runPostLanguageChangeOperationsWithNotifications:(bool)arg1;
+ (void)setLanguage:(id)arg1;
+ (void)setLanguage:(id)arg1 postNotification:(bool)arg2;
+ (void)setLanguageAndRegion:(id)arg1;
+ (void)setLanguageAndRegion:(id)arg1 postNotification:(bool)arg2;
+ (void)setRegion:(id)arg1;
+ (void)setRegion:(id)arg1 changeLanguageVariant:(bool)arg2 postNotification:(bool)arg3;
+ (void)setRegion:(id)arg1 postNotification:(bool)arg2;
+ (void)writeLanguageAndLocaleConfigurationIfNeededWithCompletion:(id /* block */)arg1;

@end
