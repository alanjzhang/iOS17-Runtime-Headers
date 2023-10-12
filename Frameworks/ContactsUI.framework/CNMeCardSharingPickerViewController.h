/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNMeCardSharingPickerViewController : UIViewController <CNMeCardSharingAvatarViewControllerDelegate, CNMeCardSharingEnabledDelegate, CNPhotoPickerViewControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    <CNMeCardSharingAvatarProvider> * _avatarProvider;
    CNMeCardSharingAvatarViewController * _avatarViewController;
    UIView * _buttonTray;
    OBBoldTrayButton * _confirmButton;
    CNContact * _contact;
    CNContactStore * _contactStore;
    <CNMeCardSharingPickerViewControllerDelegate> * _delegate;
    CNMutableContact * _draftContact;
    CNContactImage * _draftContactImage;
    CNMeCardSharingEnabledDataSource * _enabledDataSource;
    CNMeCardSharingHeaderViewController * _headerViewController;
    OBLinkTrayButton * _laterButton;
    CNMeCardSharingPickerLayoutAttributes * _layoutAttributes;
    unsigned long long  _mode;
    CNPhotoPickerViewController * _photoPicker;
    NSArray * _sectionDataSources;
    UISwitch * _shareSwitch;
    CNMeCardSharingAudienceDataSource * _sharingAudienceDataSource;
    bool  _sharingEnabled;
    bool  _shouldSetMeContact;
    UITableView * _tableView;
}

@property (nonatomic, retain) <CNMeCardSharingAvatarProvider> *avatarProvider;
@property (nonatomic, retain) CNMeCardSharingAvatarViewController *avatarViewController;
@property (nonatomic, retain) UIView *buttonTray;
@property (nonatomic, retain) OBBoldTrayButton *confirmButton;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNMeCardSharingPickerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CNMutableContact *draftContact;
@property (nonatomic, retain) CNContactImage *draftContactImage;
@property (nonatomic, retain) CNMeCardSharingEnabledDataSource *enabledDataSource;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CNMeCardSharingHeaderViewController *headerViewController;
@property (nonatomic, retain) OBLinkTrayButton *laterButton;
@property (nonatomic, retain) CNMeCardSharingPickerLayoutAttributes *layoutAttributes;
@property (nonatomic) unsigned long long meCardSharingStatus;
@property (nonatomic, readonly) unsigned long long mode;
@property (nonatomic, retain) CNPhotoPickerViewController *photoPicker;
@property (nonatomic, retain) NSArray *sectionDataSources;
@property (nonatomic, readonly) unsigned long long selectedNameFormat;
@property (nonatomic, readonly) unsigned long long selectedSharingAudience;
@property (nonatomic, retain) UISwitch *shareSwitch;
@property (nonatomic, readonly) NSString *sharedName;
@property (nonatomic, retain) CNMeCardSharingAudienceDataSource *sharingAudienceDataSource;
@property (nonatomic) bool sharingEnabled;
@property (nonatomic) bool shouldSetMeContact;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;

+ (id)descriptorForRequiredKeys;

- (void).cxx_destruct;
- (id)avatarProvider;
- (id)avatarViewController;
- (void)avatarViewControllerWasTapped:(id)arg1;
- (id)buttonTray;
- (id)confirmButton;
- (id)contact;
- (id)contactStore;
- (id)delegate;
- (void)didTapDoneButton:(id)arg1;
- (void)didTapSetUpLaterButton:(id)arg1;
- (id)draftContact;
- (id)draftContactImage;
- (id)enabledDataSource;
- (id)headerViewController;
- (id)initWithContact:(id)arg1;
- (id)initWithContactStore:(id)arg1 contact:(id)arg2 nameProvider:(id)arg3 sharingEnabled:(bool)arg4 selectedNameFormat:(unsigned long long)arg5 selectedSharingAudience:(unsigned long long)arg6 mode:(unsigned long long)arg7;
- (id)laterButton;
- (id)layoutAttributes;
- (void)loadView;
- (unsigned long long)mode;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)photoPicker;
- (void)photoPicker:(id)arg1 didUpdatePhotoForContact:(id)arg2 withContactImage:(id)arg3;
- (void)photoPickerDidCancel:(id)arg1;
- (void)saveDraftContact;
- (id)sectionDataSources;
- (unsigned long long)selectedNameFormat;
- (unsigned long long)selectedSharingAudience;
- (void)setAvatarProvider:(id)arg1;
- (void)setAvatarViewController:(id)arg1;
- (void)setButtonTray:(id)arg1;
- (void)setConfirmButton:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDraftContact:(id)arg1;
- (void)setDraftContactImage:(id)arg1;
- (void)setEnabledDataSource:(id)arg1;
- (void)setHeaderViewController:(id)arg1;
- (void)setLaterButton:(id)arg1;
- (void)setLayoutAttributes:(id)arg1;
- (void)setPhotoPicker:(id)arg1;
- (void)setSectionDataSources:(id)arg1;
- (void)setShareSwitch:(id)arg1;
- (void)setSharingAudienceDataSource:(id)arg1;
- (void)setSharingEnabled:(bool)arg1;
- (void)setShouldSetMeContact:(bool)arg1;
- (void)setTableView:(id)arg1;
- (id)shareSwitch;
- (id)sharedName;
- (id)sharingAudienceDataSource;
- (bool)sharingEnabled;
- (void)sharingEnabledDataSource:(id)arg1 didChangeEnabledState:(bool)arg2;
- (bool)shouldSetMeContact;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

// CNMeCardSharingPickerViewController (Deprecated)

- (unsigned long long)meCardSharingStatus;
- (void)setMeCardSharingStatus:(unsigned long long)arg1;

@end
