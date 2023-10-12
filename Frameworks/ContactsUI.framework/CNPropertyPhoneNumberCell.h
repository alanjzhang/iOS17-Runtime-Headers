/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNPropertyPhoneNumberCell : CNPropertySimpleTransportCell {
    UIImageView * _emergencyImageView;
    bool  _emergencyPhoneNumber;
}

@property (nonatomic, retain) UIImageView *emergencyImageView;
@property (getter=isEmergencyPhoneNumber, nonatomic) bool emergencyPhoneNumber;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/ContactsUI.framework/ContactsUI

- (void).cxx_destruct;
- (void)buildEmergencyImageView;
- (void)copy:(id)arg1;
- (id)emergencyImageView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isEmergencyPhoneNumber;
- (void)setEmergencyImageView:(id)arg1;
- (void)setEmergencyPhoneNumber:(bool)arg1;
- (void)setProperty:(id)arg1;
- (bool)shouldPerformDefaultAction;
- (bool)shouldShowEmergencyBadge;
- (void)updateEmergencyBadge;
- (void)updateTransportButtons;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/AccessibilityBundles/ContactsUI.axbundle/ContactsUI

- (void)_accessibilityLoadAccessibilityInformation;
- (id)accessibilityLabel;
- (id)accessibilityValue;

// CNPropertyPhoneNumberCell (SafeCategory)

+ (Class)safeCategoryBaseClass;

@end