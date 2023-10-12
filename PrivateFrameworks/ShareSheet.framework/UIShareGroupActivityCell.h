/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

@interface UIShareGroupActivityCell : UICollectionViewCell {
    UIImageView * _activityImageView;
    _UIHostActivityProxy * _activityProxy;
    unsigned int  _badgeSlotID;
    UIView * _badgeSlotView;
    bool  _disabled;
    NSUUID * _identifier;
    UIImage * _image;
    unsigned int  _imageSlotID;
    UIView * _imageSlotView;
    bool  _isPulsing;
    UILabel * _labelForPositioning;
    NSArray * _largeTextConstraints;
    bool  _longPressable;
    NSArray * _regularConstraints;
    NSString * _title;
    UILabel * _titleLabel;
    unsigned int  _titleSlotID;
    UIView * _titleSlotView;
    UIVisualEffectView * _vibrantLabelView;
}

@property (nonatomic, retain) UIImageView *activityImageView;
@property (nonatomic, retain) _UIHostActivityProxy *activityProxy;
@property (nonatomic) unsigned int badgeSlotID;
@property (nonatomic, retain) UIView *badgeSlotView;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) unsigned int imageSlotID;
@property (nonatomic, retain) UIView *imageSlotView;
@property (nonatomic) bool isPulsing;
@property (nonatomic, retain) UILabel *labelForPositioning;
@property (nonatomic, retain) NSArray *largeTextConstraints;
@property (getter=isLongPressable, nonatomic) bool longPressable;
@property (nonatomic, retain) NSArray *regularConstraints;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic) unsigned int titleSlotID;
@property (nonatomic, retain) UIView *titleSlotView;
@property (nonatomic, retain) UIVisualEffectView *vibrantLabelView;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet

- (void).cxx_destruct;
- (void)_configureImageViewForPlaceholder:(bool)arg1;
- (id)_createTitleLabel;
- (id)_placeholderString;
- (void)_updateBadgeSlotView;
- (void)_updateConstraints;
- (void)_updateDarkening;
- (void)_updateImageView;
- (void)_updateTitleView;
- (id)activityImageView;
- (id)activityProxy;
- (unsigned int)badgeSlotID;
- (id)badgeSlotView;
- (id)createTargetedPreview;
- (id)identifier;
- (id)image;
- (unsigned int)imageSlotID;
- (id)imageSlotView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDisabled;
- (bool)isLongPressable;
- (bool)isPulsing;
- (id)labelForPositioning;
- (id)largeTextConstraints;
- (void)prepareForReuse;
- (id)regularConstraints;
- (void)setActivityImageView:(id)arg1;
- (void)setActivityProxy:(id)arg1;
- (void)setBadgeSlotID:(unsigned int)arg1;
- (void)setBadgeSlotView:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageSlotID:(unsigned int)arg1;
- (void)setImageSlotView:(id)arg1;
- (void)setIsPulsing:(bool)arg1;
- (void)setLabelForPositioning:(id)arg1;
- (void)setLargeTextConstraints:(id)arg1;
- (void)setLongPressable:(bool)arg1;
- (void)setRegularConstraints:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleSlotID:(unsigned int)arg1;
- (void)setTitleSlotView:(id)arg1;
- (void)setVibrantLabelView:(id)arg1;
- (void)setupConstraints;
- (void)startPulsing;
- (void)stopPulsing;
- (id)title;
- (id)titleLabel;
- (unsigned int)titleSlotID;
- (id)titleSlotView;
- (void)traitCollectionDidChange:(id)arg1;
- (id)vibrantLabelView;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/AccessibilityBundles/ShareSheet.axbundle/ShareSheet

- (id)_accessibilityAXAttributedLabel;
- (unsigned int)_accessibilitySlotID;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (bool)isAccessibilityElement;

// UIShareGroupActivityCell (SafeCategory)

+ (Class)safeCategoryBaseClass;

@end
