/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNUINavigationListViewCell : UITableViewCell {
    bool  _accessoryControlExpanded;
    UIImageView * _accessoryImageView;
    UILayoutGuide * _accessoryImageViewLayoutGuide;
    NSLayoutConstraint * _contentViewBottomAnchorConstraint;
    bool  _contentViewConstraintsLoaded;
    <CNUINavigationListStyle> * _navigationListStyle;
    bool  _showSeparator;
    CNUINavigationListStyleApplier * _styleApplier;
    UILabel * _subtitleLabel;
    NSLayoutConstraint * _subtitleLabelFirstBaselineAnchorConstraint;
    NSLayoutConstraint * _subtitleLabelLeadingAnchorConstraint;
    NSLayoutConstraint * _subtitleLabelTrailingAnchorConstraint;
    UIImageView * _titleImageView;
    UILayoutGuide * _titleImageViewLayoutGuide;
    UILabel * _titleLabel;
    NSLayoutConstraint * _titleLabelFirstBaselineAnchorConstraint;
    NSLayoutConstraint * _titleLabelLeadingAnchorConstraint;
    NSLayoutConstraint * _titleLabelTrailingAnchorConstraint;
}

@property (getter=isAccessoryControlExpanded, nonatomic) bool accessoryControlExpanded;
@property (nonatomic, readonly) UIImageView *accessoryImageView;
@property (nonatomic, readonly) UILayoutGuide *accessoryImageViewLayoutGuide;
@property (nonatomic, retain) NSLayoutConstraint *contentViewBottomAnchorConstraint;
@property (getter=isContentViewConstraintsLoaded, nonatomic) bool contentViewConstraintsLoaded;
@property (nonatomic, retain) <CNUINavigationListStyle> *navigationListStyle;
@property (nonatomic) bool showSeparator;
@property (nonatomic, retain) CNUINavigationListStyleApplier *styleApplier;
@property (nonatomic, readonly) UILabel *subtitleLabel;
@property (nonatomic, retain) NSLayoutConstraint *subtitleLabelFirstBaselineAnchorConstraint;
@property (nonatomic, retain) NSLayoutConstraint *subtitleLabelLeadingAnchorConstraint;
@property (nonatomic, retain) NSLayoutConstraint *subtitleLabelTrailingAnchorConstraint;
@property (nonatomic, readonly) UIImageView *titleImageView;
@property (nonatomic, readonly) UILayoutGuide *titleImageViewLayoutGuide;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, retain) NSLayoutConstraint *titleLabelFirstBaselineAnchorConstraint;
@property (nonatomic, retain) NSLayoutConstraint *titleLabelLeadingAnchorConstraint;
@property (nonatomic, retain) NSLayoutConstraint *titleLabelTrailingAnchorConstraint;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/ContactsUI.framework/ContactsUI

+ (id)accessoryImageViewAccessibilityLabel;
+ (double)contentViewBottomAnchorConstraintConstantForNavigationListStyle:(id)arg1;
+ (struct CGSize { double x1; double x2; })desiredContentSizeForTitle:(id)arg1 subTitle:(id)arg2 navigationListStyle:(id)arg3;
+ (id)disclosureImage;
+ (id)expandedAccessoryImageViewAccessibilityLabel;
+ (id)highlightedDisclosureImage;
+ (id)reuseIdentifier;
+ (double)subtitleLabelFirstBaselineAnchorConstraintConstantForSubtitle:(id)arg1 navigationListStyle:(id)arg2;
+ (double)titleLabelFirstBaselineAnchorConstraintConstantForNavigationListStyle:(id)arg1;

- (void).cxx_destruct;
- (id)accessoryImageView;
- (id)accessoryImageViewLayoutGuide;
- (void)applyStyle;
- (id)contentViewBottomAnchorConstraint;
- (double)contentViewBottomAnchorConstraintConstant;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isAccessoryControlExpanded;
- (bool)isContentViewConstraintsLoaded;
- (void)loadContentView;
- (void)loadContentViewConstraints;
- (double)minimumContentHeight;
- (id)navigationListStyle;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)prepareForReuse;
- (void)setAccessoryControlExpanded:(bool)arg1;
- (void)setAccessoryControlExpanded:(bool)arg1 animated:(bool)arg2;
- (void)setContentViewBottomAnchorConstraint:(id)arg1;
- (void)setContentViewConstraintsLoaded:(bool)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setNavigationListStyle:(id)arg1;
- (void)setSeparatorStyle:(long long)arg1;
- (void)setShowSeparator:(bool)arg1;
- (void)setStyleApplier:(id)arg1;
- (void)setSubtitleLabelFirstBaselineAnchorConstraint:(id)arg1;
- (void)setSubtitleLabelLeadingAnchorConstraint:(id)arg1;
- (void)setSubtitleLabelTrailingAnchorConstraint:(id)arg1;
- (void)setTitleLabelFirstBaselineAnchorConstraint:(id)arg1;
- (void)setTitleLabelLeadingAnchorConstraint:(id)arg1;
- (void)setTitleLabelTrailingAnchorConstraint:(id)arg1;
- (void)setupAccessoryImageViewInView:(id)arg1;
- (bool)showSeparator;
- (id)styleApplier;
- (void)styleUpdated;
- (id)subtitleLabel;
- (id)subtitleLabelFirstBaselineAnchorConstraint;
- (double)subtitleLabelFirstBaselineAnchorConstraintConstant;
- (id)subtitleLabelLeadingAnchorConstraint;
- (id)subtitleLabelTrailingAnchorConstraint;
- (id)titleImageView;
- (id)titleImageViewLayoutGuide;
- (id)titleLabel;
- (id)titleLabelFirstBaselineAnchorConstraint;
- (double)titleLabelFirstBaselineAnchorConstraintConstant;
- (id)titleLabelLeadingAnchorConstraint;
- (id)titleLabelTrailingAnchorConstraint;
- (void)updateConstraints;
- (void)updateConstraintsConstants;
- (void)updateVisualStateAnimated:(bool)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/AccessibilityBundles/ContactsUI.axbundle/ContactsUI

- (void)_accessibilityLoadAccessibilityInformation;
- (bool)_accessibilityToggleSelection;
- (id)accessibilityCustomActions;

// CNUINavigationListViewCell (SafeCategory)

+ (Class)safeCategoryBaseClass;

@end
