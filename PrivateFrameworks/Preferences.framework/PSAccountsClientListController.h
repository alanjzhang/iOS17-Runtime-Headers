/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSAccountsClientListController : PSListController {
    id  _acObserver;
    PSSpecifier * _accountSpecifier;
    bool  _noAccountsSetUp;
    bool  _showExtraVC;
    int  accountUpdateThrottle;
}

- (void).cxx_destruct;
- (bool)_isAccountModificationDisabledByRestrictions;
- (id)_visibleAccountTypeIDs;
- (void)dealloc;
- (id)init;
- (id)requestedAccountDataclass;
- (void)setSpecifiers:(id)arg1;
- (id)specifierForID:(id)arg1;
- (void)updateAccountSpecifier;
- (void)viewWillAppear:(bool)arg1;

@end
