/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSRestrictionsPINController : DevicePINController

+ (bool)settingEnabled;

- (struct __CFString { }*)blockTimeIntervalKey;
- (struct __CFString { }*)blockedStateKey;
- (struct __CFString { }*)defaultsID;
- (struct __CFString { }*)failedAttemptsKey;
- (id)init;
- (bool)isNumericPIN;
- (id)pinInstructionsPrompt;
- (id)pinInstructionsPromptFont;
- (bool)pinIsAcceptable:(id)arg1 outError:(id*)arg2;
- (int)pinLength;
- (void)setPIN:(id)arg1;
- (bool)simplePIN;
- (id)stringsBundle;
- (id)title;
- (bool)validatePIN:(id)arg1;

@end