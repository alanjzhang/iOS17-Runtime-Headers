/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNPickerItemCell : UITableViewCell {
    bool  _placeholder;
    UITextField * _textField;
}

@property (getter=isPlaceholder, nonatomic) bool placeholder;
@property (nonatomic, retain) UITextField *textField;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/ContactsUI.framework/ContactsUI

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isPlaceholder;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setPlaceholder:(bool)arg1;
- (void)setTextField:(id)arg1;
- (void)setTextFieldHidden:(bool)arg1;
- (id)textField;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/AccessibilityBundles/ContactsUI.axbundle/ContactsUI

- (id)_accessibilityTextViewTextOperationResponder;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (void)beginEditing;
- (void)endEditing;
- (bool)isAccessibilityElement;

// CNPickerItemCell (SafeCategory)

+ (Class)safeCategoryBaseClass;

@end
