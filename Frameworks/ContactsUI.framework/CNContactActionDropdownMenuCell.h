/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactActionDropdownMenuCell : CNContactActionCell {
    CNContactActionDropdownMenuButton * _button;
    id /* block */  _menuProvider;
}

@property (nonatomic, retain) CNContactActionDropdownMenuButton *button;
@property (nonatomic, readonly) UIContextMenuInteraction *contextMenuInteraction;
@property (nonatomic, copy) id /* block */ menuProvider;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/ContactsUI.framework/ContactsUI

- (void).cxx_destruct;
- (id)button;
- (id)contextMenuInteraction;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id /* block */)menuProvider;
- (void)prepareForReuse;
- (void)setButton:(id)arg1;
- (void)setMenuProvider:(id /* block */)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/AccessibilityBundles/ContactsUI.axbundle/ContactsUI

- (unsigned long long)accessibilityTraits;
- (bool)isAccessibilityElement;

// CNContactActionDropdownMenuCell (SafeCategory)

+ (Class)safeCategoryBaseClass;

@end
