/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNPropertyNameCell : CNContactCell {
    <CNPropertyCellDelegate> * _delegate;
    UIResponder * _firstResponderItem;
    UITextField * _textField;
}

@property (nonatomic) <CNPropertyCellDelegate> *delegate;
@property (nonatomic, readonly) UIResponder *firstResponderItem;
@property (nonatomic, retain) CNPropertyGroupItem *propertyItem;
@property (nonatomic, readonly) UITextField *textField;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/ContactsUI.framework/ContactsUI

+ (bool)shouldIndentWhileEditing;

- (void).cxx_destruct;
- (id)constantConstraints;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)displayStringForValue:(id)arg1;
- (id)firstResponderItem;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (double)minCellHeight;
- (id)placeholderString;
- (id)propertyItem;
- (void)setBackgroundColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPropertyItem:(id)arg1;
- (id)textField;
- (void)traitCollectionDidChange:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/AccessibilityBundles/ContactsUI.axbundle/ContactsUI

- (void)_accessibilityLoadAccessibilityInformation;
- (void)_updateTextFieldAccessibilityLabel;
- (bool)isAccessibilityElement;
- (void)setCardGroupItem:(id)arg1;
- (void)textFieldChanged:(id)arg1;

// CNPropertyNameCell (SafeCategory)

+ (Class)safeCategoryBaseClass;

@end
