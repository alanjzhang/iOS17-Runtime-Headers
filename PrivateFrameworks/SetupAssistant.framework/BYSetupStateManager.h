/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

@interface BYSetupStateManager : NSObject

+ (id)sharedManager;

- (id)buddyPrefsValueForKey:(id)arg1;
- (void)clearRestoreType;
- (bool)didRestoreFromBackup;
- (bool)didSetupUsingiTunes;
- (void)recordSetupUsingBuddy;
- (long long)restoreType;

@end
