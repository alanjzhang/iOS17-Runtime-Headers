/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSFollowUpController : NSObject {
    FLFollowUpController * _followUpController;
}

@property (nonatomic, retain) FLFollowUpController *followUpController;

+ (id)sharedController;

- (void).cxx_destruct;
- (id)_createFollowUpItemForIdentifier:(id)arg1 userInfo:(id)arg2;
- (id)_createFollowUpItemForRenewCredentialsWithUserInfo:(id)arg1;
- (id)_dismissFollowUpWithIdentifier:(id)arg1;
- (id)_postFollowUpWithIdentifier:(id)arg1 userInfo:(id)arg2;
- (id)dismissFollowUpWithIdentifier:(id)arg1;
- (id)dismissFollowUpWithIdentifier:(id)arg1 account:(id)arg2;
- (id)followUpController;
- (id)init;
- (id)pendingFollowUpWithIdentifier:(id)arg1;
- (id)postFollowUpWithIdentifier:(id)arg1 account:(id)arg2 userInfo:(id)arg3;
- (id)postFollowUpWithIdentifier:(id)arg1 userInfo:(id)arg2;
- (void)setFollowUpController:(id)arg1;

@end
