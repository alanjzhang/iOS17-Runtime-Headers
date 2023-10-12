/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNStarkContactNameView : UIView {
    CNAvatarViewController * _avatarViewController;
    CNContact * _contact;
    UILabel * _nameLabel;
}

@property (nonatomic, readonly) CNAvatarViewController *avatarViewController;
@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, readonly) UILabel *nameLabel;

- (void).cxx_destruct;
- (id)avatarViewController;
- (id)contact;
- (id)initWithName:(id)arg1;
- (id)nameLabel;
- (void)setupAvatar;
- (void)setupConstraints;
- (void)setupNameLabel;

@end
