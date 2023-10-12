/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
 */

@interface AMSUINotificationSettingsTableViewCell : UITableViewCell {
    <AMSUINotificationInAppSettingsTableViewCellDelegate> * _delegate;
    AMSNotificationSettingsItem * _item;
    UISwitch * _itemSwitch;
}

@property (nonatomic) <AMSUINotificationInAppSettingsTableViewCellDelegate> *delegate;
@property (nonatomic, retain) AMSNotificationSettingsItem *item;
@property (nonatomic, retain) UISwitch *itemSwitch;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)item;
- (id)itemSwitch;
- (void)setDelegate:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setItemSwitch:(id)arg1;
- (void)switchToggled:(id)arg1;

@end