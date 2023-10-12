/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKLocationEditItemViewController : EKEditItemViewController <EKLocationVirtualConferenceSearchFieldsDelegate, EKUILocationSearchModelDelegate, EKUIManagedViewController, UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate, VirtualConferenceRoomTypeSelectionDelegate> {
    bool  _autoFillSelectedTextField;
    NSMutableDictionary * _cachedConferenceRooms;
    EKCalendarItem * _calendarItem;
    EKVirtualConferenceRoomType * _checkedRoomType;
    bool  _conferenceTextFieldSelected;
    EKUILocationRowModel * _conferenceViewModel;
    bool  _disableConferenceTextField;
    bool  _forceSingleTextField;
    EKUILocationRowModel * _locationViewModel;
    bool  _needsSave;
    _UINavigationControllerPalette * _palette;
    bool  _pendingVirtualConference;
    NSError * _pendingVirtualConferenceError;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredContentSize;
    bool  _rotating;
    UISearchBar * _searchBar;
    EKLocationVirtualConferenceSearchFieldsView * _searchFieldsView;
    EKUILocationSearchModel * _searchModel;
    NSArray * _searchModelConferenceRoomSearchResults;
    NSArray * _searchModelContactsSearchResults;
    EKStructuredLocation * _searchModelCurrentLocation;
    NSArray * _searchModelEventsSearchResults;
    NSArray * _searchModelFrequentsSearchResults;
    EKStructuredLocationWithImage * _searchModelLocationFromMapsURL;
    NSArray * _searchModelMapCompletionSearchResults;
    NSArray * _searchModelRecentsSearchResults;
    NSArray * _searchModelTextualSearchResults;
    NSArray * _searchModelVirtualConferenceCustomSearchResults;
    NSArray * _searchModelVirtualConferenceRoomSearchResults;
    EKUIConferenceRoom * _selectedConferenceRoom;
    EKStructuredLocation * _selectedLocation;
    EKVirtualConference * _selectedVirtualConference;
    bool  _shouldShowCheckedVirtualConference;
    unsigned long long  _supportedSearchTypes;
    bool  _supportsStructuredLocations;
    bool  _tableConstraintsInstalled;
    UITableView * _tableView;
    id /* block */  _viewDidAppearBlock;
    bool  _wasFirstResponder;
}

@property (nonatomic) bool autoFillSelectedTextField;
@property (nonatomic) bool conferenceTextFieldSelected;
@property (nonatomic, retain) EKUILocationRowModel *conferenceViewModel;
@property (readonly) bool conferenceViewModelRemoved;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableConferenceTextField;
@property (nonatomic) bool forceSingleTextField;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) EKUILocationRowModel *locationViewModel;
@property (readonly) bool locationViewModelRemoved;
@property (nonatomic) bool needsSave;
@property (nonatomic) bool pendingVirtualConference;
@property (nonatomic, retain) NSError *pendingVirtualConferenceError;
@property (nonatomic, retain) EKUIConferenceRoom *selectedConferenceRoom;
@property (nonatomic, retain) EKStructuredLocation *selectedLocation;
@property (nonatomic, retain) EKVirtualConference *selectedVirtualConference;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long supportedSearchTypes;
@property (nonatomic, copy) id /* block */ viewDidAppearBlock;

+ (id)_boldTitleFont;
+ (id)_sectionNameForSection:(unsigned long long)arg1;

- (void).cxx_destruct;
- (long long)_accessoryTypeForSection:(unsigned long long)arg1;
- (id)_cellForConferenceRoom:(id)arg1 atIndexPath:(id)arg2;
- (id)_focusedTextField;
- (id)_rowNameForIndexPath:(id)arg1;
- (void)_setupViewsAndConstraints;
- (bool)_singleSearchBar;
- (bool)autoFillSelectedTextField;
- (id)calendarItemForSearchModel:(id)arg1;
- (bool)canManagePresentationStyle;
- (id)conferenceRoomForRecent:(id)arg1;
- (bool)conferenceTextFieldSelected;
- (id)conferenceViewModel;
- (bool)conferenceViewModelRemoved;
- (id)contactsImage;
- (bool)disableConferenceTextField;
- (bool)forceSingleTextField;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 styleProvider:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 styleProvider:(id)arg2 calendarItem:(id)arg3 eventStore:(id)arg4;
- (id)itemAtIndexPath:(id)arg1;
- (id)locationArrowImage;
- (void)locationSearchModel:(id)arg1 selectedLocation:(id)arg2 withError:(id)arg3;
- (void)locationSearchModel:(id)arg1 updatedSearchTypes:(unsigned long long)arg2;
- (id)locationViewModel;
- (bool)locationViewModelRemoved;
- (bool)needsSave;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)pendingVideoConferenceUpdated:(id)arg1;
- (bool)pendingVirtualConference;
- (id)pendingVirtualConferenceError;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (bool)presentModally;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBecomeFirstResponder;
- (void)searchDoneTapped;
- (bool)searchIsFirstResponder;
- (void)searchResignFirstResponder;
- (id)searchText;
- (void)searchTextChanged:(id)arg1;
- (id)selectedConferenceRoom;
- (id)selectedLocation;
- (void)selectedRoomType:(id)arg1;
- (void)selectedTextFieldChanged:(id)arg1;
- (id)selectedVirtualConference;
- (void)setAutoFillSelectedTextField:(bool)arg1;
- (void)setConferenceTextFieldSelected:(bool)arg1;
- (void)setConferenceViewModel:(id)arg1;
- (void)setDisableConferenceTextField:(bool)arg1;
- (void)setForceSingleTextField:(bool)arg1;
- (void)setLocationViewModel:(id)arg1;
- (void)setNeedsSave:(bool)arg1;
- (void)setPendingVirtualConference:(bool)arg1;
- (void)setPendingVirtualConferenceError:(id)arg1;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSearchText:(id)arg1;
- (void)setSelectedConferenceRoom:(id)arg1;
- (void)setSelectedLocation:(id)arg1;
- (void)setSelectedVirtualConference:(id)arg1;
- (void)setSupportedSearchTypes:(unsigned long long)arg1;
- (void)setViewAppearedBlock:(id /* block */)arg1;
- (void)setViewDidAppearBlock:(id /* block */)arg1;
- (bool)shouldIncludeConferenceRoom:(id)arg1;
- (bool)showAvailableConferenceTypesAsRows;
- (bool)showingCurrentLocationRow;
- (bool)showingTextRow;
- (unsigned long long)supportedSearchTypes;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (bool)tableView:(id)arg1 wantsHeaderForSection:(long long)arg2;
- (void)textField:(id)arg1 didChange:(id)arg2;
- (void)textFieldDoneTapped:(id)arg1;
- (id)title;
- (void)useAsString:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (id /* block */)viewDidAppearBlock;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (bool)wantsManagement;

@end
