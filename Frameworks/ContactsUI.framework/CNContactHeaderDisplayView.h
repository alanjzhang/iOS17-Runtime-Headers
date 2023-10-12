/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactHeaderDisplayView : CNContactHeaderView <CNPickerControllerDelegate, CNUIReusableView, UINavigationControllerDelegate> {
    bool  _allowsPickerActions;
    NSString * _alternateName;
    NSLayoutConstraint * _avatarNameSpacingConstraint;
    CNContactFormatter * _contactFormatter;
    NSDictionary * _downtimeTextAttributes;
    CNContactDowntimeView * _downtimeView;
    CNContactGeminiIconProvider * _geminiIconProvider;
    CNGeminiPickerController * _geminiPicker;
    CNGeminiResult * _geminiResult;
    NSDictionary * _geminiTextAttributes;
    CNContactGeminiView * _geminiView;
    UILabel * _importantLabel;
    NSString * _importantMessage;
    NSDictionary * _importantTextAttributes;
    bool  _isDowntimeContact;
    bool  _isEmergencyContact;
    bool  _isRestrictedContact;
    double  _maxLabelsHeight;
    NSString * _message;
    CNMetricsUIReporter * _metricsReporter;
    double  _minLabelsHeight;
    UIView * _personHeaderView;
    bool  _shouldShowGemini;
    UILabel * _taglineLabel;
    NSDictionary * _taglineTextAttributes;
    <UITraitChangeRegistration> * _traitChangeRegistration;
    bool  _usesBrandedCallFormat;
}

@property (nonatomic) bool allowsPickerActions;
@property (nonatomic, retain) NSString *alternateName;
@property (retain) NSLayoutConstraint *avatarNameSpacingConstraint;
@property (nonatomic) unsigned long long avatarStyle;
@property (nonatomic, retain) CNContactFormatter *contactFormatter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CNContactDowntimeView *downtimeView;
@property (nonatomic, readonly) CNContactGeminiIconProvider *geminiIconProvider;
@property (nonatomic, retain) CNGeminiPickerController *geminiPicker;
@property (retain) CNGeminiResult *geminiResult;
@property (retain) CNContactGeminiView *geminiView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UILabel *importantLabel;
@property (nonatomic, retain) NSString *importantMessage;
@property (nonatomic, copy) NSDictionary *importantTextAttributes;
@property (nonatomic) bool isDowntimeContact;
@property (nonatomic) bool isEmergencyContact;
@property (nonatomic) bool isRestrictedContact;
@property (nonatomic) double maxLabelsHeight;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, readonly) CNMetricsUIReporter *metricsReporter;
@property (nonatomic) double minLabelsHeight;
@property (nonatomic, retain) UIView *personHeaderView;
@property (nonatomic) bool shouldShowGemini;
@property (readonly) Class superclass;
@property (retain) UILabel *taglineLabel;
@property (nonatomic, copy) NSDictionary *taglineTextAttributes;
@property (retain) <UITraitChangeRegistration> *traitChangeRegistration;
@property (nonatomic) bool usesBrandedCallFormat;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/ContactsUI.framework/ContactsUI

+ (id)contactHeaderViewWithContact:(id)arg1 allowsPhotoDrops:(bool)arg2 showingNavBar:(bool)arg3 monogramOnly:(bool)arg4 delegate:(id)arg5;
+ (id)contactHeaderViewWithContact:(id)arg1 showingNavBar:(bool)arg2 monogramOnly:(bool)arg3 delegate:(id)arg4;
+ (id)descriptorForRequiredKeysForContactFormatter:(id)arg1;
+ (id)makePhotoViewWithShouldAllowTakePhotoAction:(bool)arg1 shouldAllowImageDrops:(bool)arg2 monogramOnly:(bool)arg3;
+ (id)sizeAttributesShowingNavBar:(bool)arg1;

- (void).cxx_destruct;
- (void)_assignActionToGeminiView;
- (void)_geminiViewBehaviorForSavedContact;
- (void)_geminiViewBehaviorForUnknownContact;
- (id)_headerStringForContacts:(id)arg1;
- (id)_importantString;
- (void)_presentViewControllerForGemini;
- (id)_taglinesForContacts:(id)arg1;
- (id)_unknownContactActionForGeminiView;
- (void)_updateDowntimeView;
- (void)_updateImportantLabel;
- (void)_updatePhotoView;
- (bool)allowsPickerActions;
- (id)alternateName;
- (id)avatarNameSpacingConstraint;
- (unsigned long long)avatarStyle;
- (void)calculateLabelSizes;
- (void)calculateLabelSizesIfNeeded;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)contactFormatter;
- (void)copy:(id)arg1;
- (void)createGeminiViewIfNeeded;
- (void)dealloc;
- (double)defaultMaxHeight;
- (id)descriptorForRequiredKeys;
- (void)didFinishUsing;
- (void)disablePhotoTapGesture;
- (id)downtimeTextAttributes;
- (id)downtimeView;
- (id)geminiIconProvider;
- (id)geminiPicker;
- (id)geminiResult;
- (id)geminiTextAttributes;
- (id)geminiView;
- (void)geminiViewDidPickPreferredChannel:(id)arg1;
- (void)handleGeminiViewTouch:(id)arg1;
- (void)handleNameLabelLongPress:(id)arg1;
- (void)handleNameLabelTap:(id)arg1;
- (id)importantLabel;
- (id)importantMessage;
- (id)importantTextAttributes;
- (id)initWithContact:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 shouldAllowImageDrops:(bool)arg3 showingNavBar:(bool)arg4 monogramOnly:(bool)arg5 delegate:(id)arg6;
- (id)initWithContact:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 showingNavBar:(bool)arg3 monogramOnly:(bool)arg4 delegate:(id)arg5;
- (bool)isDowntimeContact;
- (bool)isEmergencyContact;
- (bool)isRestrictedContact;
- (void)layoutSubviews;
- (double)maxHeight;
- (double)maxLabelsHeight;
- (void)menuWillHide:(id)arg1;
- (id)message;
- (id)metricsReporter;
- (double)minHeight;
- (double)minLabelsHeight;
- (id)personHeaderView;
- (void)picker:(id)arg1 didPickItem:(id)arg2;
- (void)pickerDidCancel:(id)arg1;
- (void)reloadDataPreservingChanges:(bool)arg1;
- (void)setAllowsPickerActions:(bool)arg1;
- (void)setAlternateName:(id)arg1;
- (void)setAvatarNameSpacingConstraint:(id)arg1;
- (void)setAvatarStyle:(unsigned long long)arg1;
- (void)setContactFormatter:(id)arg1;
- (void)setDowntimeTextAttributes:(id)arg1;
- (void)setDowntimeView:(id)arg1;
- (void)setGeminiPicker:(id)arg1;
- (void)setGeminiResult:(id)arg1;
- (void)setGeminiTextAttributes:(id)arg1;
- (void)setGeminiView:(id)arg1;
- (void)setImportantLabel:(id)arg1;
- (void)setImportantMessage:(id)arg1;
- (void)setImportantTextAttributes:(id)arg1;
- (void)setIsDowntimeContact:(bool)arg1;
- (void)setIsEmergencyContact:(bool)arg1;
- (void)setIsRestrictedContact:(bool)arg1;
- (void)setMaxLabelsHeight:(double)arg1;
- (void)setMessage:(id)arg1;
- (void)setMinLabelsHeight:(double)arg1;
- (void)setNameTextAttributes:(id)arg1;
- (void)setPersonHeaderView:(id)arg1;
- (void)setShouldShowGemini:(bool)arg1;
- (void)setTaglineLabel:(id)arg1;
- (void)setTaglineTextAttributes:(id)arg1;
- (void)setTraitChangeRegistration:(id)arg1;
- (void)setUsesBrandedCallFormat:(bool)arg1;
- (bool)shouldShowGemini;
- (id)taglineLabel;
- (id)taglineTextAttributes;
- (void)tintColorDidChange;
- (id)traitChangeRegistration;
- (void)traitEnvironment:(id)arg1 didChangeTraitCollection:(id)arg2;
- (void)updateConstraints;
- (void)updateFontSizes;
- (void)updateGeminiResult:(id)arg1;
- (void)updateSizeDependentAttributes;
- (bool)usesBrandedCallFormat;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/AccessibilityBundles/ContactsUI.axbundle/ContactsUI

- (void)_accessibilityLoadAccessibilityInformation;
- (bool)_accessibilityPerformCopyAction:(id)arg1;

// CNContactHeaderDisplayView (SafeCategory)

+ (Class)safeCategoryBaseClass;

@end
