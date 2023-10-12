/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

@interface BYSilentLoginUpgradeGuarantor : NSObject {
    bool  _didEnsureQueuesAndStartSilentLoginUpgrade;
    NSObject<OS_dispatch_queue> * _shortLivedTokenUpgradeCompletionQueue;
    NSObject<OS_dispatch_queue> * _silentLoginUpgradeCompletionQueue;
}

@property (nonatomic) bool didEnsureQueuesAndStartSilentLoginUpgrade;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *shortLivedTokenUpgradeCompletionQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *silentLoginUpgradeCompletionQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_ensureQueuesAndStartSilentLoginUpgrade;
- (void)blockUntilShortLivedTokenUpgradeCompletes;
- (void)blockUntilSilentLoginUpgradeCompletes;
- (void)blockUntilSilentLoginUpgradeCompletesForNonLoginUser;
- (bool)didEnsureQueuesAndStartSilentLoginUpgrade;
- (void)didShortCircuitShortLivedTokenUpgrade;
- (void)didShortCircuitSilentLoginUpgrade;
- (id)init;
- (void)setDidEnsureQueuesAndStartSilentLoginUpgrade:(bool)arg1;
- (void)setShortLivedTokenUpgradeCompletionQueue:(id)arg1;
- (void)setSilentLoginUpgradeCompletionQueue:(id)arg1;
- (id)shortLivedTokenUpgradeCompletionQueue;
- (id)silentLoginUpgradeCompletionQueue;

@end