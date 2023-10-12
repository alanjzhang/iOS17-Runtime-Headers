/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactPickerViewController : UIViewController <CNContactPickerContentDelegate, UIAdaptivePresentationControllerDelegate, _UIRemoteViewControllerContaining> {
    bool  _allowsCancel;
    bool  _allowsDeletion;
    bool  _allowsDone;
    bool  _allowsEditing;
    bool  _allowsNamePicking;
    bool  _autocloses;
    NSString * _bannerTitle;
    NSString * _bannerValue;
    long long  _behavior;
    long long  _cardActions;
    NSArray * _contactSuggestions;
    bool  _defaultViewControllerVisible;
    <CNContactPickerDelegate> * _delegate;
    NSArray * _displayedPropertyKeys;
    FAFamilyMember * _familyMember;
    bool  _hidesPromptInLandscape;
    bool  _hidesSearchableSources;
    bool  _ignoreViewWillBePresented;
    bool  _ignoresParentalRestrictions;
    long long  _mode;
    bool  _onlyRealContacts;
    CNContainer * _parentContainer;
    NSPredicate * _predicateForEnablingContact;
    NSPredicate * _predicateForSelectionOfContact;
    NSPredicate * _predicateForSelectionOfProperty;
    NSArray * _prohibitedPropertyKeys;
    NSString * _prompt;
    CNRegulatoryLogger * _regulatoryLogger;
    CNContact * _scrollContact;
    bool  _shouldAllowSearchForMultiSelect;
    bool  _shouldDisplayAddNewContactRow;
    bool  _shouldDisplaySuggestionsController;
    NSArray * _suggestionsIgnoredContactIdentifiers;
    NSArray * _suggestionsInteractionDomains;
    NSString * _targetGroupIdentifier;
    UIViewController<CNContactPickerContentViewController> * _viewController;
}

@property (nonatomic, readonly) _UIRemoteViewController *_containedRemoteViewController;
@property (nonatomic, readonly) UIBarButtonItem *addContactBarButtonItem;
@property (nonatomic) bool allowsCancel;
@property (nonatomic) bool allowsDeletion;
@property (nonatomic) bool allowsDone;
@property (nonatomic) bool allowsEditing;
@property (nonatomic) bool allowsNamePicking;
@property (nonatomic) bool autocloses;
@property (nonatomic, copy) NSString *bannerTitle;
@property (nonatomic, copy) NSString *bannerValue;
@property (nonatomic) long long behavior;
@property (nonatomic) long long cardActions;
@property (nonatomic, retain) NSArray *contactSuggestions;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDefaultViewControllerVisible, readonly) bool defaultViewControllerVisible;
@property (nonatomic) <CNContactPickerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *displayedPropertyKeys;
@property (nonatomic, retain) FAFamilyMember *familyMember;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidesPromptInLandscape;
@property (nonatomic) bool hidesSearchableSources;
@property (nonatomic) bool ignoresParentalRestrictions;
@property (nonatomic) long long mode;
@property (nonatomic, readonly) UINavigationController *navigationController;
@property (nonatomic) bool onlyRealContacts;
@property (nonatomic, retain) CNContainer *parentContainer;
@property (nonatomic, copy) NSPredicate *predicateForEnablingContact;
@property (nonatomic, copy) NSPredicate *predicateForSelectionOfContact;
@property (nonatomic, copy) NSPredicate *predicateForSelectionOfProperty;
@property (nonatomic, retain) NSArray *prohibitedPropertyKeys;
@property (nonatomic, copy) NSString *prompt;
@property (nonatomic, retain) CNRegulatoryLogger *regulatoryLogger;
@property (nonatomic, retain) CNContact *scrollContact;
@property (nonatomic) bool shouldAllowSearchForMultiSelect;
@property (nonatomic) bool shouldDisplayAddNewContactRow;
@property (nonatomic) bool shouldDisplaySuggestionsController;
@property (nonatomic, retain) NSArray *suggestionsIgnoredContactIdentifiers;
@property (nonatomic, retain) NSArray *suggestionsInteractionDomains;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *targetGroupIdentifier;
@property (nonatomic, retain) UIViewController<CNContactPickerContentViewController> *viewController;

+ (id)descriptorForRequiredKeysForSuggestions;

- (void).cxx_destruct;
- (void)_checkConsistencyFromOptions:(id)arg1;
- (id)_containedRemoteViewController;
- (void)_emitPickerAnalyticsDidSelectItems:(bool)arg1;
- (void)_endDelayingPresentation;
- (bool)_isDelayingPresentation;
- (id)_pickerPresentedViewController;
- (void)_prepareViewController;
- (void)_setViewController:(id)arg1;
- (void)_setupViewController;
- (bool)_shouldBeOutOfProcess;
- (void)_viewWillBePresented;
- (id)addContactBarButtonItem;
- (bool)allowsCancel;
- (bool)allowsDeletion;
- (bool)allowsDone;
- (bool)allowsEditing;
- (bool)allowsNamePicking;
- (bool)autocloses;
- (id)bannerTitle;
- (id)bannerValue;
- (long long)behavior;
- (long long)cardActions;
- (void)closePickerIfNeeded;
- (id)contactSuggestions;
- (void)dealloc;
- (id)delegate;
- (id)displayedPropertyKeys;
- (id)familyMember;
- (bool)hidesPromptInLandscape;
- (bool)hidesSearchableSources;
- (bool)ignoresParentalRestrictions;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)invalidateSelectionAnimated:(bool)arg1;
- (bool)isDefaultViewControllerVisible;
- (void)loadView;
- (long long)mode;
- (id)navigationController;
- (void)notifyDelegateForCancellation;
- (bool)onlyRealContacts;
- (id)parentContainer;
- (void)pickerDidCancel;
- (void)pickerDidCompleteWithNewContact:(id)arg1;
- (void)pickerDidSelectAddNewContact;
- (void)pickerDidSelectContact:(id)arg1 property:(id)arg2;
- (void)pickerDidSelectContacts:(id)arg1 properties:(id)arg2;
- (void)popToDefaultViewController:(bool)arg1;
- (id)predicateForEnablingContact;
- (id)predicateForSelectionOfContact;
- (id)predicateForSelectionOfProperty;
- (void)presentationControllerDidDismiss:(id)arg1;
- (id)prohibitedPropertyKeys;
- (id)prompt;
- (id)regulatoryLogger;
- (id)scrollContact;
- (void)scrollToClosestContactMatching:(id)arg1;
- (void)setAllowsCancel:(bool)arg1;
- (void)setAllowsDeletion:(bool)arg1;
- (void)setAllowsDone:(bool)arg1;
- (void)setAllowsEditing:(bool)arg1;
- (void)setAllowsNamePicking:(bool)arg1;
- (void)setAutocloses:(bool)arg1;
- (void)setBannerTitle:(id)arg1;
- (void)setBannerValue:(id)arg1;
- (void)setBehavior:(long long)arg1;
- (void)setCardActions:(long long)arg1;
- (void)setContactSuggestions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayedPropertyKeys:(id)arg1;
- (void)setFamilyMember:(id)arg1;
- (void)setHidesPromptInLandscape:(bool)arg1;
- (void)setHidesSearchableSources:(bool)arg1;
- (void)setIgnoresParentalRestrictions:(bool)arg1;
- (void)setMode:(long long)arg1;
- (void)setOnlyRealContacts:(bool)arg1;
- (void)setParentContainer:(id)arg1;
- (void)setPredicateForEnablingContact:(id)arg1;
- (void)setPredicateForSelectionOfContact:(id)arg1;
- (void)setPredicateForSelectionOfProperty:(id)arg1;
- (void)setProhibitedPropertyKeys:(id)arg1;
- (void)setPrompt:(id)arg1;
- (void)setRegulatoryLogger:(id)arg1;
- (void)setScrollContact:(id)arg1;
- (void)setShouldAllowSearchForMultiSelect:(bool)arg1;
- (void)setShouldDisplayAddNewContactRow:(bool)arg1;
- (void)setShouldDisplaySuggestionsController:(bool)arg1;
- (void)setSuggestionsIgnoredContactIdentifiers:(id)arg1;
- (void)setSuggestionsInteractionDomains:(id)arg1;
- (void)setTargetGroupIdentifier:(id)arg1;
- (void)setViewController:(id)arg1;
- (bool)shouldAllowSearchForMultiSelect;
- (bool)shouldDisplayAddNewContactRow;
- (bool)shouldDisplaySuggestionsController;
- (id)suggestionsIgnoredContactIdentifiers;
- (id)suggestionsInteractionDomains;
- (id)targetGroupIdentifier;
- (id)viewController;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;

@end
