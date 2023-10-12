/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSBadgedTableCell : PSTableCell {
    UIImageView * _badgeImageView;
    long long  _badgeInt;
    UILabel * _badgeNumberLabel;
}

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Preferences.framework/Preferences

+ (id)badgeNumberLabelTextColor;
+ (double)badgePadding;
+ (id)reuseIdentifierForClassAndType:(long long)arg1;
+ (id)unreadBubbleImage;

- (void).cxx_destruct;
- (bool)_shouldUseRoundStyle;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)layoutSubviews;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)resetLocale;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/AccessibilityBundles/PreferencesFramework.axbundle/PreferencesFramework

- (id)accessibilityValue;
- (void)badgeWithInteger:(long long)arg1;

// PSBadgedTableCell (SafeCategory)

+ (Class)safeCategoryBaseClass;

@end
