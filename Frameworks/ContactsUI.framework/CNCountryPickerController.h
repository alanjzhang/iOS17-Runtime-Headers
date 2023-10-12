/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNCountryPickerController : UINavigationController <UITableViewDataSource, UITableViewDelegate> {
    UILocalizedIndexedCollation * _collation;
    NSArray * _countries;
    NSArray * _sections;
    NSString * _selectedCountryCode;
    NSIndexPath * _selectedIndexPath;
    UITableViewController * _tableViewController;
}

@property (nonatomic, retain) UILocalizedIndexedCollation *collation;
@property (nonatomic, copy) NSArray *countries;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNCountryPickerControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *sections;
@property (nonatomic, copy) NSString *selectedCountryCode;
@property (nonatomic, retain) NSIndexPath *selectedIndexPath;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableViewController *tableViewController;

- (void).cxx_destruct;
- (void)_configureSections;
- (void)_loadCountryCodes;
- (void)cancelPicker:(id)arg1;
- (id)collation;
- (id)countries;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)sections;
- (id)selectedCountryCode;
- (id)selectedIndexPath;
- (void)setCollation:(id)arg1;
- (void)setCountries:(id)arg1;
- (void)setSections:(id)arg1;
- (void)setSelectedCountryCode:(id)arg1;
- (void)setSelectedIndexPath:(id)arg1;
- (void)setTableViewController:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (id)tableViewController;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)windowDidRotate:(id)arg1;

@end
