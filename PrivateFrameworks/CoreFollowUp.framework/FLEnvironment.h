/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
 */

@interface FLEnvironment : NSObject {
    NSUserDefaults * _followupDefaults;
}

@property (nonatomic, readonly) bool followUpExtensionSupportEnabled;
@property (nonatomic, readonly) bool followUpZeroActionsForTheWorld;
@property (nonatomic, retain) NSUserDefaults *followupDefaults;

+ (id)currentEnvironment;

- (void).cxx_destruct;
- (bool)followUpExtensionSupportEnabled;
- (bool)followUpZeroActionsForTheWorld;
- (id)followupDefaults;
- (id)init;
- (bool)isInternal;
- (bool)isUnlocked;
- (bool)normalizeExpirationToMidnight;
- (double)oneDayTimeInterval;
- (void)setFollowUpExtensionSupportEnabled:(bool)arg1;
- (void)setFollowupDefaults:(id)arg1;
- (bool)shouldHideAllFollowUps;
- (bool)shouldShowUnapprovedItems;
- (id)stressBundleIdentifiers;
- (bool)stressMode;
- (id)supportedBundleIdentifiers;
- (id)supportedNotifyingAppIds;

@end
