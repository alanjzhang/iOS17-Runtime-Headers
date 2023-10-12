/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactSuggestionsViewController : UIViewController <UICollectionViewDelegate> {
    bool  _allowsMultiSelection;
    CNAvatarImageRenderer * _avatarRenderer;
    UICollectionView * _collectionView;
    _PSContactSuggester * _contactSuggester;
    NSArray * _contacts;
    <CNContactSuggestionsViewControllerDelegate> * _delegate;
    UICollectionViewDiffableDataSource * _diffableDataSource;
    NSMutableArray * _fetchedContacts;
    NSMutableDictionary * _identifiersToIndexPath;
    NSArray * _ignoredContactIdentifiers;
    NSArray * _interactionDomains;
    UICollectionViewLayout * _layout;
    NSArray * _overrideSuggestedContacts;
    NSString * _suggestionsHeaderTitle;
}

@property (nonatomic) bool allowsMultiSelection;
@property (nonatomic, retain) CNAvatarImageRenderer *avatarRenderer;
@property (nonatomic, retain) UICollectionView *collectionView;
@property (readonly) _PSContactSuggester *contactSuggester;
@property (nonatomic, retain) NSArray *contacts;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNContactSuggestionsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UICollectionViewDiffableDataSource *diffableDataSource;
@property (nonatomic, retain) NSMutableArray *fetchedContacts;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *identifiersToIndexPath;
@property (nonatomic, retain) NSArray *ignoredContactIdentifiers;
@property (nonatomic, retain) NSArray *interactionDomains;
@property (nonatomic, retain) UICollectionViewLayout *layout;
@property (nonatomic, retain) NSArray *overrideSuggestedContacts;
@property (nonatomic, readonly) NSArray *selectedContacts;
@property (nonatomic, retain) NSString *suggestionsHeaderTitle;
@property (readonly) Class superclass;

+ (id)os_log;

- (void).cxx_destruct;
- (bool)allowsMultiSelection;
- (id)avatarRenderer;
- (struct CGSize { double x1; double x2; })avatarSize;
- (void)buildCollectionView;
- (id)collectionView;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)compositionalLayout;
- (id)contactSuggester;
- (id)contacts;
- (id)delegate;
- (id)diffableDataSource;
- (double)estimatedHeaderHeight;
- (double)estimatedHeight;
- (void)fetchContacts;
- (void)fetchContactsIfNeeded;
- (void)fetchIgnoredContactIdentifiersIfNeeded;
- (id)fetchedContacts;
- (id)filterResults:(id)arg1;
- (double)horizontalSectionPadding;
- (id)identifiersToIndexPath;
- (id)ignoredContactIdentifiers;
- (void)imageForContact:(id)arg1 imageUpdateBlock:(id /* block */)arg2;
- (id)init;
- (id)interactionDomains;
- (id)layout;
- (id)overrideSuggestedContacts;
- (void)prepareForReuse;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })sectionInsets;
- (id)selectedContacts;
- (void)setAllowsMultiSelection:(bool)arg1;
- (void)setAvatarRenderer:(id)arg1;
- (void)setCellStateSelected:(bool)arg1 forContact:(id)arg2 animated:(bool)arg3;
- (void)setCollectionView:(id)arg1;
- (void)setContacts:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDiffableDataSource:(id)arg1;
- (void)setFetchedContacts:(id)arg1;
- (void)setIdentifiersToIndexPath:(id)arg1;
- (void)setIgnoredContactIdentifiers:(id)arg1;
- (void)setInteractionDomains:(id)arg1;
- (void)setLayout:(id)arg1;
- (void)setOverrideSuggestedContacts:(id)arg1;
- (void)setSuggestionsHeaderTitle:(id)arg1;
- (id)suggestionsHeaderTitle;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)useAccessibleLayout;
- (double)verticalSpacing;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
