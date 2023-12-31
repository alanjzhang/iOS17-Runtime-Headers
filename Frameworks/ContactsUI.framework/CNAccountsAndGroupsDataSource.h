/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNAccountsAndGroupsDataSource : NSObject {
    NSString * _currentlyEditingGroupIdentifier;
    CNAccountsAndGroupsItem * _currentlyEditingGroupItem;
    CNContactStoreFilter * _filter;
    CNUIGroupsAndContainersSaveManager * _groupsAndContainersSaveManager;
    bool  _hidesSearchableSources;
    CNManagedConfiguration * _managedConfiguration;
    bool  _onlyShowsGroupsInSections;
    CNAccountsAndGroupsItem * _rootItem;
    NSArray * _sections;
    CNContactStoreFilter * _serverFilter;
    NSSet * _sourceAccountExternalIdentifiers;
    CNContactStore * _store;
    NSSet * _targetAccountExternalIdentifiers;
}

@property (nonatomic, retain) NSString *currentlyEditingGroupIdentifier;
@property (nonatomic, retain) CNAccountsAndGroupsItem *currentlyEditingGroupItem;
@property (nonatomic, copy) CNContactStoreFilter *filter;
@property (nonatomic, retain) CNUIGroupsAndContainersSaveManager *groupsAndContainersSaveManager;
@property (nonatomic) bool hidesSearchableSources;
@property (nonatomic, retain) CNManagedConfiguration *managedConfiguration;
@property (nonatomic) bool onlyShowsGroupsInSections;
@property (nonatomic, retain) CNAccountsAndGroupsItem *rootItem;
@property (nonatomic, retain) NSArray *sections;
@property (nonatomic, readonly) CNContactStoreFilter *serverFilter;
@property (nonatomic, readonly) CNAccountsAndGroupsItem *showAllSectionItem;
@property (nonatomic, retain) NSSet *sourceAccountExternalIdentifiers;
@property (nonatomic, retain) CNContactStore *store;
@property (nonatomic, retain) NSSet *targetAccountExternalIdentifiers;
@property (getter=isTrivial, nonatomic, readonly) bool trivial;

- (void).cxx_destruct;
- (void)_applyFilter;
- (void)_reloadSections;
- (id)allContactsForItem:(id)arg1 keysToFetch:(id)arg2;
- (id)allContactsForMainItem:(id)arg1 keysToFetch:(id)arg2;
- (long long)contactCountForItem:(id)arg1;
- (long long)contactCountForMainItem:(id)arg1;
- (id)containerIdentifierForItem:(id)arg1;
- (id)currentlyEditingGroupIdentifier;
- (id)currentlyEditingGroupItem;
- (id)filter;
- (id)groupIdentifierForGroupItem:(id)arg1;
- (id)groupsAndContainersSaveManager;
- (bool)hasChanges;
- (bool)hidesSearchableSources;
- (id)initWithStore:(id)arg1;
- (bool)isFilterShowingItem:(id)arg1;
- (bool)isTrivial;
- (id)managedConfiguration;
- (id)multiSelectFilter;
- (bool)onlyShowsGroupsInSections;
- (void)reload;
- (void)removeServerFilter;
- (id)rootItem;
- (id)sectionForIdentifier:(id)arg1;
- (id)sectionIdentifierForItem:(id)arg1;
- (id)sections;
- (id)serverFilter;
- (void)setCurrentlyEditingGroupIdentifier:(id)arg1;
- (void)setCurrentlyEditingGroupItem:(id)arg1;
- (void)setFilter:(id)arg1;
- (void)setFilterForItem:(id)arg1;
- (void)setGroupsAndContainersSaveManager:(id)arg1;
- (void)setHidesSearchableSources:(bool)arg1;
- (void)setManagedConfiguration:(id)arg1;
- (void)setOnlyShowsGroupsInSections:(bool)arg1;
- (void)setRootItem:(id)arg1;
- (void)setSections:(id)arg1;
- (void)setServerFilterForItem:(id)arg1;
- (void)setSourceAccountExternalIdentifiers:(id)arg1;
- (void)setStore:(id)arg1;
- (void)setTargetAccountExternalIdentifiers:(id)arg1;
- (bool)shouldShowAccount:(id)arg1;
- (id)showAllSectionItem;
- (id)sourceAccountExternalIdentifiers;
- (id)store;
- (id)targetAccountExternalIdentifiers;
- (void)updateRootItemSelection;

@end
