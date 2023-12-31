/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSLargeTextSliderListController : PSListController {
    NSArray * _contentSizeCategories;
    long long  _selectedCategoryIndex;
    bool  _showsExtendedRangeSwitch;
    bool  _showsLargerSizesHelpText;
    PSSpecifier * _sliderGroupSpecifier;
    bool  _usesExtendedRange;
    bool  _viewIsDisappearing;
}

@property (nonatomic, copy) NSArray *contentSizeCategories;
@property (nonatomic) long long selectedCategoryIndex;
@property (nonatomic) bool showsExtendedRangeSwitch;
@property (nonatomic) bool showsLargerSizesHelpText;
@property (nonatomic) bool usesExtendedRange;

- (void).cxx_destruct;
- (id)contentSizeCategories;
- (id)getDynamicTypeValueForSpecifier:(id)arg1;
- (id)initUsingExtendedRange:(bool)arg1;
- (void)loadView;
- (long long)selectedCategoryIndex;
- (void)setContentSizeCategories:(id)arg1;
- (void)setDynamicTypeValue:(id)arg1 forSpecifier:(id)arg2;
- (void)setSelectedCategoryIndex:(long long)arg1;
- (void)setShowsExtendedRangeSwitch:(bool)arg1;
- (void)setShowsLargerSizesHelpText:(bool)arg1;
- (void)setUsesExtendedRange:(bool)arg1;
- (bool)showsExtendedRangeSwitch;
- (bool)showsLargerSizesHelpText;
- (id)specifiers;
- (bool)usesExtendedRange;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
